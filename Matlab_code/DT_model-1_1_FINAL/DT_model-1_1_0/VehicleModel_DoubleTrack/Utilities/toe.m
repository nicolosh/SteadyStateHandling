function toe(vehicle_data,Ts,Tf)

    toe_new = [-0.5 -0.25 0  0.25 0.5];
    time_sim = Tf;
    dt = Ts;

    for i = 1:5
        vehicle_data.steering_system.toe = toe_new(1,i);
        assignin('base', "vehicle_data", vehicle_data);
        model_sim = sim('Vehicle_Model_2Track');
        m = vehicle_data.vehicle.m;
        Lf = vehicle_data.vehicle.Lf;
        Lr = vehicle_data.vehicle.Lr;
        L = Lr + Lf;
        alpha_rr   = model_sim.states.alpha_rr.data;
        alpha_rl   = model_sim.states.alpha_rl.data;
        alpha_fr   = model_sim.states.alpha_fr.data;
        alpha_fl   = model_sim.states.alpha_fl.data;
        u          = model_sim.states.u.data;
        v          = model_sim.states.v.data;
        Omega      = model_sim.states.Omega.data;
        Fx_fr      = model_sim.extra_params.Fx_fr.data;
        Fx_fl      = model_sim.extra_params.Fx_fl.data;
        Fy_rr      = model_sim.extra_params.Fy_rr.data;
        Fy_rl      = model_sim.extra_params.Fy_rl.data;
        Fy_fr      = model_sim.extra_params.Fy_fr.data;
        Fy_fl      = model_sim.extra_params.Fy_fl.data;
        delta_fr   = model_sim.extra_params.delta_fr.data;
        delta_fl   = model_sim.extra_params.delta_fl.data;
        g = vehicle_data.vehicle.g;
        delta_D    = model_sim.inputs.delta_D.data;
        tau_D = vehicle_data.steering_system.tau_D;
        vG = sqrt(u.^2 + v.^2);
        rho_ss   = Omega./vG;
        Fzr_0_static = m * (Lf/L) * g;
        Fzf_0_static = m * (Lr/L) * g;
        Fyf_norm(:,i) = (Fy_fl + Fy_fr)./(Fzf_0_static);
        alphaF(:,i) = (alpha_fr + alpha_fl)/2;
        Ay(:,i) = diff(v(1:end))/dt + Omega(2:end).*u(2:end);
        Ackerman = deg2rad(delta_D)/(tau_D*L);
        Ackerman = Ackerman(1:length(rho_ss)-1);
        Rho(:,i) = Omega./u*L;
        Rho2(:,i) = Rho(1:end-1,i);
        
    end
    
    colorMap = colormap(lines(5));
    figure('Name','Normalized lateral forces, toe','NumberTitle','off'), clf
    hold on
    for i = 1:5
        %plot(alphaR_dt(:,i),Fyr_dt_norm(:,i),'LineWidth',2, 'DisplayName',("Yr(ay) with toe angle $\delta_0$ =  " + toe_vec(1,i)), 'Color', colorMap(i,:));
        plot(alphaF(:,i),Fyf_norm(:,i),'LineWidth',2, 'DisplayName',("Yf(ay) with toe angle $\delta_0$ =  " + -toe_new(1,i)), 'Color', colorMap(i,:));
        title({'Normalized lateral forces as function of $\delta_{0}$', ' '})
        grid on
        ylabel('$Fyr/Fz0$, $Fyf/Fz0$ [-]')
        xlabel('$\alpha_{R}$, $\alpha_{F}$ [deg]')
        legend('Location','southeastoutside')
    end
    hold off

    figure('Name','Handling curves, toe','NumberTitle','off'), clf
    hold on
    for i = 1:5
        plot(Ay(10000:end,i)./g, Ackerman(10000:end)-Rho2(10000:end,i), 'LineWidth',2, 'DisplayName',("Toe = " + toe_new(1,i)), 'Color', colorMap(i,:));
        title({'Handling diagram ,Toe', ' '})
        grid on
        xlabel('$A_y/g$ [-]')
        ylabel('$\delta_D / \tau_D-\Omega /u \cdot L$')
        title('Handling curves, toe')
        legend('Location','southeastoutside')
    end
    hold off
    
end
