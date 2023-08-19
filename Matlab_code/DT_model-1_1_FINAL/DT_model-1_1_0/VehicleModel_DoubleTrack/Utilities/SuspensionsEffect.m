function suspensionsEffect(vehicle_data, Ts, Tf)

     % Do a for cycle with different ratios for the suspensions:
     %
     % epsilon_phi_original = vehicle_data.front_suspension.Ks_f/(vehicle_data.front_suspension.Ks_f + vehicle_data.rear_suspension.Ks_r);
     % epsilon_phi_vec = [0.3 0.4 epsilon_phi_original 0.5 0.6];

     % Ks_f = Ks_r * epsPhi / (1 + epsPhi)
     % Ks_f_vec = (vehicle_data.rear_suspension.Ks_r .* epsilon_phi_vec) ./ (ones(5,1) + epsilon_phi_vec);

     % Same amplitude but different frequency
     % p_sine_f_vec = [4000 f_n_num 2000 200 20];
     % vo_sine_sim = zeros(round((Tsim/dt),TieBreaker="tozero") + 1,5);
     % po_sin_vec = zeros(round((Tsim/dt),TieBreaker="tozero") + 1,5);
     % for i = 1:5
         % p_sine_freq = p_sine_f_vec(1,i);
         % model = sim('Vehicle_Model_2Track');
         % vo_sine_sim(:,i) = vo_sim.Data;
         % po_sin_vec(:,i) = p_sim.Data;
     % end

     % model = sim('Vehicle_Model_2Track');

     % Do a for cycle with different ratios for the suspensions:
     epsilon_phi_original = vehicle_data.front_suspension.Ks_f/(vehicle_data.front_suspension.Ks_f + vehicle_data.rear_suspension.Ks_r);
     epsilon_phi_vec = [0.4 epsilon_phi_original 0.5 0.6 0.65];
     % Ks_f = Ks_r * epsPhi / (1 - epsPhi)
     Ks_f_vec = (vehicle_data.rear_suspension.Ks_r*epsilon_phi_vec)./(ones(1,5) - epsilon_phi_vec);

     % importing from main
     time_sim = Tf;
     dt = Ts;

     alphaR   = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     alphaF   = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Fyr_norm = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Fyf_norm = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     delta_alpha = zeros(round((time_sim/dt),TieBreaker="tozero") + 1, 5);
     Ay = zeros(round((time_sim/dt),TieBreaker="tozero") +1 - 1, 5);

     for i = 1:5
         vehicle_data.front_suspension.Ks_f = Ks_f_vec(1,i);
         assignin('base', "vehicle_data", vehicle_data);
         model_sim = sim('Vehicle_Model_2Track');
         fprintf('Starting simulation with $\epsilon_{\phi} = %.3f$\n', epsilon_phi_vec(1,i));
         
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
         % Fz_rr      = model_sim.states.Fz_rr.data;
         % Fz_rl      = model_sim.states.Fz_rl.data;
         % Fz_fr      = model_sim.states.Fz_fr.data;
         % Fz_fl      = model_sim.states.Fz_fl.data;
         delta_fr   = model_sim.extra_params.delta_fr.data;
         delta_fl   = model_sim.extra_params.delta_fl.data;
         g          = vehicle_data.vehicle.g;

         alphaR(:,i) = (alpha_rr + alpha_rl)/2;
         alphaF(:,i) = (alpha_fr + alpha_fl)/2;

         % Fyr_norm(:,i) = (Fy_rl + Fy_rr)./(Fz_rr + Fz_rl);
         % Fyf_norm(:,i) = (sin(delta_fl).*Fx_fl + Fy_fl + sin(delta_fr).*Fx_fr + Fy_fr)./(Fz_fr + Fz_fl);
         
         Fzr_0_static = m * (Lf/L) * g;
         Fzf_0_static = m * (Lr/L) * g;

         Fyr_norm(:,i) = (Fy_rl + Fy_rr)./(Fzr_0_static);
         Fyf_norm(:,i) = (sin(delta_fl).*Fx_fl + Fy_fl + sin(delta_fr).*Fx_fr + Fy_fr)./(Fzf_0_static);

         delta_alpha(:,i) = alphaR(:,i) - alphaF(:,i);
         % fprintf('Size of $A_y$: %4.2f - size of v = %4.2f - size of \Omega = %4.2f - size of u = %4.2f \n',size(Ay),size(diff(v(1:end,i))/dt),size(Omega),size(u));

         %dot_v(:,i) = diff(v(:,i))./Ts;
         % Ay(:,i) = diff(v(1:end,i))/dt + Omega(2:end,i).*u(2:end,i);
         Ay(:,i) = diff(v(1:end))/dt + Omega(2:end).*u(2:end);
         % fprintf('Size of $A_y$: %4.2f - size of v = %4.2f - size of $\Omega$ = %4.2f - size of u = %4.2f \n',size(Ay),size(diff(v(1:end))/dt),size(Omega),size(u));
         fprintf('End of the simulation #%d / 5 \n',i);
     end

     colorMap = colormap(lines(5));
     figure('Name','Normalized lateral forces for different suspension roll stiffness','NumberTitle','off'), clf
     hold on
     for i = 1:5
         plot(alphaR(:,i),Fyr_norm(:,i),'LineWidth',2, 'DisplayName',("Y_r(a_y) with $\epsilon_{\phi}$ = " + epsilon_phi_vec(1,i)), 'Color', colorMap(i,:));
         plot(alphaF(:,i),Fyf_norm(:,i),'LineWidth',2, 'DisplayName',("Y_f(a_y) with $\epsilon_{\phi}$ = " + epsilon_phi_vec(1,i)), 'Color', colorMap(i,:));
         title({'Normalized lateral forces as function of $\epsilon_{\phi}$', ' '})
         grid on
         ylabel('$\frac{Fy_r}{Fzr_0}$, $\frac{Fy_f}{Fzf_0}$ [-]')
         xlabel('$\alpha_{R}$, $\alpha_{F}$ [deg]')
         legend('Location','best')
     end
     hold off

     figure('Name','Handling diagram for different suspension roll stiffness','NumberTitle','off'), clf
     hold on
     for i = 1:5
         plot(Ay(:,i)./g, -delta_alpha(2:end,i), 'LineWidth',2, 'DisplayName',("$-\Delta_{\alpha}(a_y)$ with $\epsilon_{\phi}$ = " + epsilon_phi_vec(1,i)), 'Color', colorMap(i,:));
         title({'Handling diagram as function of $\epsilon_{\phi}$', ' '})
         grid on
         xlabel('$\frac{a_y}{g}$ [-]')
         ylabel('$-\Delta_{\alpha}$ [deg]')
         legend('Location','best')
     end
     hold off

 end