function toeEffect(vehicle_data,Ts,Tf)
     set(0,'defaulttextinterpreter','latex')
     set(groot, 'defaultAxesTickLabelInterpreter','latex');
     set(groot, 'defaultLegendInterpreter','latex');

     % Do a for cycle with different toe angles:
     toe_vec = [-1 -0.5 0 0.5 1];

     time_sim = Tf;
     dt = Ts;

     alphaR   = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     alphaF   = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Fyr_norm = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Fyf_norm = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     delta_alpha = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Ay = zeros(round((time_sim/dt),TieBreaker="tozero") + 1 - 1, 5);

     for i = 1:5
         vehicle_data.front_wheel.delta_f0 = toe_vec(1,i);
         assignin('base', "vehicle_data", vehicle_data);
         model_sim = sim('Vehicle_Model_2Track');
         fprintf('Starting simulation with toe angle $\delta_{0} = %.3f$\n', toe_vec(1,i));

         m  = vehicle_data.vehicle.m;
         Lf = vehicle_data.vehicle.Lf;
         Lr = vehicle_data.vehicle.Lr;
         L  = Lr + Lf;
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
         g          = vehicle_data.vehicle.g;

         alphaR(:,i) = (alpha_rr + alpha_rl)/2;
         alphaF(:,i) = (alpha_fr + alpha_fl)/2;

         Fzr_0_static = m * (Lf/L) * g;
         Fzf_0_static = m * (Lr/L) * g;

         Fyr_norm(:,i) = (Fy_rl + Fy_rr)./(Fzr_0_static);
         Fyf_norm(:,i) = (sin(delta_fl).*Fx_fl + Fy_fl + sin(delta_fr).*Fx_fr + Fy_fr)./(Fzf_0_static);

         delta_alpha(:,i) = alphaR(:,i) - alphaF(:,i);
         Ay(:,i) = diff(v(1:end))/dt + Omega(2:end).*u(2:end);
         fprintf('End of the simulation #%.1f / 5 \n',i);
     end

     colorMap = colormap(lines(5));
     figure('Name','Normalized lateral forces for different toe angles','NumberTitle','off'), clf
     hold on
     for i = 1:5
         plot(alphaF(:,i),Fyf_norm(:,i),'LineWidth',2, 'DisplayName',("$Y_f(a_y)$ with toe angle $\delta_0$ =  " + toe_vec(1,i)), 'Color', colorMap(i,:));
         title({'Normalized lateral forces as function of $\delta_{0}$', ' '})
         grid on
         ylabel('$\frac{Fy_r}{Fzr_0}$, $\frac{Fy_f}{Fzf_0}$ [-]')
         xlabel('$\alpha_{R}$, $\alpha_{F}$ [deg]')
         legend('Location','best')
     end
     hold off

     figure('Name','Handling diagram for different toe angles','NumberTitle','off'), clf
     hold on
     for i = 1:5
         plot(Ay(:,i)./g, -delta_alpha(2:end,i), 'LineWidth',2, 'DisplayName',("$-\delta_{\alpha}(a_y)$ with $\delta_0$ =  " + toe_vec(1,i)), 'Color', colorMap(i,:));
         title({'Handling diagram as function of $\delta_0$', ' '})
         grid on
         ylabel('$-\delta_{\alpha}$ [deg]')
         xlabel('$\{a_y}{g}$ [-]')
         legend('Location','best')
     end
     hold off

 end
