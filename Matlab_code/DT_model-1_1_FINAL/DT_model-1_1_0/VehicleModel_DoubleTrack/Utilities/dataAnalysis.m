function dataAnalysis(model_sim,vehicle_data,Ts,Test_)

    % ----------------------------------------------------------------
    %% Post-Processing and Data Analysis
    % ----------------------------------------------------------------

    % ---------------------------------
    %% Load vehicle data
    % ---------------------------------
    Lf = vehicle_data.vehicle.Lf;  % [m] Distance between vehicle CoG and front wheels axle
    Lr = vehicle_data.vehicle.Lr;  % [m] Distance between vehicle CoG and front wheels axle
    L  = vehicle_data.vehicle.L;   % [m] Vehicle length
    Wf = vehicle_data.vehicle.Wf;  % [m] Width of front wheels axle 
    Wr = vehicle_data.vehicle.Wr;  % [m] Width of rear wheels axle                   
    m  = vehicle_data.vehicle.m;   % [kg] Vehicle Mass
    g  = vehicle_data.vehicle.g;   % [m/s^2] Gravitational acceleration
    tau_D = vehicle_data.steering_system.tau_D;  % [-] steering system ratio (pinion-rack)

    % ---------------------------------
    %% Extract data from simulink model
    % ---------------------------------
    time_sim = model_sim.states.u.time;
    dt = time_sim(2)-time_sim(1);

    % -----------------
    % Inputs
    % -----------------
    ped_0      = model_sim.inputs.ped_0.data;
    delta_D    = model_sim.inputs.delta_D.data;

    % -----------------
    % States
    % -----------------
    x_CoM      = model_sim.states.x.data;
    y_CoM      = model_sim.states.y.data;
    psi        = model_sim.states.psi.data;
    u          = model_sim.states.u.data;
    v          = model_sim.states.v.data;
    Omega      = model_sim.states.Omega.data;
    Fz_rr      = model_sim.states.Fz_rr.data;
    Fz_rl      = model_sim.states.Fz_rl.data;
    Fz_fr      = model_sim.states.Fz_fr.data;
    Fz_fl      = model_sim.states.Fz_fl.data;
    delta      = model_sim.states.delta.data;
    omega_rr   = model_sim.states.omega_rr.data;
    omega_rl   = model_sim.states.omega_rl.data;
    omega_fr   = model_sim.states.omega_fr.data;
    omega_fl   = model_sim.states.omega_fl.data;
    alpha_rr   = model_sim.states.alpha_rr.data;
    alpha_rl   = model_sim.states.alpha_rl.data;
    alpha_fr   = model_sim.states.alpha_fr.data;
    alpha_fl   = model_sim.states.alpha_fl.data;
    kappa_rr   = model_sim.states.kappa_rr.data;
    kappa_rl   = model_sim.states.kappa_rl.data;
    kappa_fr   = model_sim.states.kappa_fr.data;
    kappa_fl   = model_sim.states.kappa_fl.data;

    % -----------------
    % Extra Parameters
    % -----------------
    Tw_rr      = model_sim.extra_params.Tw_rr.data;
    Tw_rl      = model_sim.extra_params.Tw_rl.data;
    Tw_fr      = model_sim.extra_params.Tw_fr.data;
    Tw_fl      = model_sim.extra_params.Tw_fl.data;
    Fx_rr      = model_sim.extra_params.Fx_rr.data;
    Fx_rl      = model_sim.extra_params.Fx_rl.data;
    Fx_fr      = model_sim.extra_params.Fx_fr.data;
    Fx_fl      = model_sim.extra_params.Fx_fl.data;
    Fy_rr      = model_sim.extra_params.Fy_rr.data;
    Fy_rl      = model_sim.extra_params.Fy_rl.data;
    Fy_fr      = model_sim.extra_params.Fy_fr.data;
    Fy_fl      = model_sim.extra_params.Fy_fl.data;
    Mz_rr      = model_sim.extra_params.Mz_rr.data;
    Mz_rl      = model_sim.extra_params.Mz_rl.data;
    Mz_fr      = model_sim.extra_params.Mz_fr.data;
    Mz_fl      = model_sim.extra_params.Mz_fl.data;
    gamma_rr   = model_sim.extra_params.gamma_rr.data;
    gamma_rl   = model_sim.extra_params.gamma_rl.data;
    gamma_fr   = model_sim.extra_params.gamma_fr.data;
    gamma_fl   = model_sim.extra_params.gamma_fl.data;
    delta_fr   = model_sim.extra_params.delta_fr.data;
    delta_fl   = model_sim.extra_params.delta_fl.data;

    % Chassis side slip angle beta [rad]
    beta = atan(v./u);

    % -----------------
    % Accelerations
    % -----------------
    % Derivatives of u, v [m/s^2]
    dot_u = diff(u)/Ts;
    dot_v = diff(v)/Ts;
    % Total longitudinal and lateral accelerations
    Ax = dot_u(1:end) - Omega(2:end).*v(2:end);
    Ay = dot_v(1:end) + Omega(2:end).*u(2:end);
    % Ax low-pass filtered signal (zero-phase digital low-pass filtering)
    Wn_filter = 0.01;
    [b_butt,a_butt] = butter(4,Wn_filter,'low');
    Ax_filt = filtfilt(b_butt,a_butt,Ax);  
    dot_u_filt = filtfilt(b_butt,a_butt,dot_u);  
    % Steady state lateral acceleration
    Ay_ss = Omega.*u;
    % Longitudinal jerk [m/s^3]
    jerk_x = diff(dot_u)/Ts;

    % -----------------
    % Other parameters
    % -----------------
    % Total CoM speed [m/s]
    vG = sqrt(u.^2 + v.^2);
    % Steady state and transient curvature [m]
    rho_ss   = Omega./vG;
    rho_tran = ((dot_v.*u(1:end-1) - dot_u.*v(1:end-1)) ./ ((vG(1:end-1)).^3)) + rho_ss(1:end-1);
    % Desired sinusoidal steering angle for the equivalent single track front wheel
    desired_steer_atWheel = delta_D/tau_D;


    % ---------------------------------
    %% PLOTS
    % ---------------------------------

    % ---------------------------------
    %% Plot vehicle inputs
    % ---------------------------------
    figure('Name','Inputs','NumberTitle','off'), clf   
    % --- pedal --- %
    ax(1) = subplot(211);
    hold on
    plot(time_sim,ped_0,'LineWidth',2)
    grid on
    title('pedal $p_0$ [-]')
    xlim([0 time_sim(end)])
    % --- delta_0 --- %
    ax(2) = subplot(212);
    plot(time_sim,delta_D,'LineWidth',2)
    grid on
    title('steering angle $\delta_D$ [deg]')
    xlim([0 time_sim(end)])
    
    % ---------------------------------
    %% Plot vehicle motion
    % ---------------------------------
    figure('Name','veh motion','NumberTitle','off'), clf   
    % --- u --- %
    ax(1) = subplot(221);
    plot(time_sim,u*3.6,'LineWidth',2)
    grid on
    title('$u$ [km/h]')
    xlim([0 time_sim(end)])
    % --- v --- %
    ax(2) = subplot(222);
    plot(time_sim,v,'LineWidth',2)
    grid on
    title('$v$ [m/s]')
    xlim([0 time_sim(end)])
    % --- Omega --- %
    ax(3) = subplot(223);
    plot(time_sim,Omega,'LineWidth',2)
    grid on
    title('$\Omega$ [rad/s]')
    xlim([0 time_sim(end)])

    % ---------------------------------
    %% Plot steering angles
    % ---------------------------------
    figure('Name','steer','NumberTitle','off'), clf   
    % --- delta_0 --- %
    ax(1) = subplot(221);
    plot(time_sim,delta_D,'LineWidth',2)
    grid on
    title('$\delta_0$ [deg]')
    xlim([0 time_sim(end)])
    % --- delta_fr --- %
    ax(2) = subplot(222);
    plot(time_sim,delta_fr,'LineWidth',2)
    grid on
    title('$\delta_{fr}$ [deg]')
    xlim([0 time_sim(end)])
    % --- delta_fl --- %
    ax(3) = subplot(223);
    hold on
    plot(time_sim,delta_fl,'LineWidth',2)
    grid on
    title('$\delta_{fl}$ [deg]')
    xlim([0 time_sim(end)])
    % --- comparison --- %
    ax(4) = subplot(224);
    hold on
    plot(time_sim,delta_D/tau_D,'LineWidth',2)
    plot(time_sim,delta_fr,'LineWidth',2)
    plot(time_sim,delta_fl,'LineWidth',2)
    grid on
    legend('$\delta_D/\tau_D$','$\delta_{fr}$','$\delta_{fl}$','location','best')
    xlim([0 time_sim(end)])

    % -------------------------------
    %% Plot lateral tire slips and lateral forces
    % -------------------------------
    figure('Name','Lateral slips & forces','NumberTitle','off'), clf
    % --- alpha_rr --- %
    ax(1) = subplot(331);
    plot(time_sim,alpha_rr,'LineWidth',2)
    grid on
    title('$\alpha_{rr}$ [deg]')
    xlim([0 time_sim(end)])
    % --- alpha_rl --- %
    ax(2) = subplot(332);
    plot(time_sim,alpha_rl,'LineWidth',2)
    grid on
    title('$\alpha_{rl}$ [deg]')
    xlim([0 time_sim(end)])
    % --- alpha_fr --- %
    ax(3) = subplot(333);
    plot(time_sim,alpha_fr,'LineWidth',2)
    grid on
    title('$\alpha_{fr}$ [deg]')
    xlim([0 time_sim(end)])
    % --- alpha_fl --- %
    ax(4) = subplot(334);
    plot(time_sim,alpha_fl,'LineWidth',2)
    grid on
    title('$\alpha_{fl}$ [deg]')
    xlim([0 time_sim(end)])
    % --- Fy_rr --- %
    ax(5) = subplot(335);
    plot(time_sim,Fy_rr,'LineWidth',2)
    grid on
    title('$Fy_{rr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fy_rl --- %
    ax(6) = subplot(336);
    plot(time_sim,Fy_rl,'LineWidth',2)
    grid on
    title('$Fy_{rl}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Fy_fr --- %
    ax(7) = subplot(337);
    plot(time_sim,Fy_fr,'LineWidth',2)
    grid on
    title('$Fy_{fr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fy_fl --- %
    ax(8) = subplot(338);
    plot(time_sim,Fy_fl,'LineWidth',2)
    grid on
    title('$Fy_{fl}$ [N]')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax

    % ---------------------------------
    %% Plot longitudinal tire slips and longitudinal forces
    % ---------------------------------
    figure('Name','Long slips & forces','NumberTitle','off'), clf
    % --- kappa_rr --- %
    ax(1) = subplot(331);
    plot(time_sim,kappa_rr,'LineWidth',2)
    grid on
    title('$\kappa_{rr}$ [-]')
    xlim([0 time_sim(end)])
    % --- kappa_rl --- %
    ax(2) = subplot(332);
    plot(time_sim,kappa_rl,'LineWidth',2)
    grid on
    title('$\kappa_{rl}$ [-]')
    xlim([0 time_sim(end)])
    % --- kappa_fr --- %
    ax(3) = subplot(333);
    plot(time_sim,kappa_fr,'LineWidth',2)
    grid on
    title('$\kappa_{fr}$ [-]')
    xlim([0 time_sim(end)])
    % --- kappa_fl --- %
    ax(4) = subplot(334);
    plot(time_sim,kappa_fl,'LineWidth',2)
    grid on
    title('$\kappa_{fl}$ [-]')
    xlim([0 time_sim(end)])
    % --- Fx_rr --- %
    ax(5) = subplot(335);
    plot(time_sim,Fx_rr,'LineWidth',2)
    grid on
    title('$Fx_{rr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fx_rl --- %
    ax(6) = subplot(336);
    plot(time_sim,Fx_rl,'LineWidth',2)
    grid on
    title('$Fx_{rl}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fx_fr --- %
    ax(7) = subplot(337);
    plot(time_sim,Fx_fr,'LineWidth',2)
    grid on
    title('$Fx_{fr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fx_fl --- %
    ax(8) = subplot(338);
    plot(time_sim,Fx_fl,'LineWidth',2)
    grid on
    title('$Fx_{fl}$ [N]')
    xlim([0 time_sim(end)])
    
    % linkaxes(ax,'x')
    clear ax

    % ---------------------------------
    %% Plot wheel torques and wheel rates
    % ---------------------------------
    figure('Name','Wheel rates & torques','NumberTitle','off'), clf
    % --- omega_rr --- %
    ax(1) = subplot(331);
    plot(time_sim,omega_rr,'LineWidth',2)
    grid on
    title('$\omega_{rr}$ [rad/s]')
    xlim([0 time_sim(end)])
    % --- omega_rl --- %
    ax(2) = subplot(332);
    plot(time_sim,omega_rl,'LineWidth',2)
    grid on
    title('$\omega_{rl}$ [rad/s]')
    xlim([0 time_sim(end)])
    % --- omega_fr --- %
    ax(3) = subplot(333);
    plot(time_sim,omega_fr,'LineWidth',2)
    grid on
    title('$\omega_{fr}$ [rad/s]')
    xlim([0 time_sim(end)])
    % --- omega_fl --- %
    ax(4) = subplot(334);
    plot(time_sim,omega_fl,'LineWidth',2)
    grid on
    title('$\omega_{fl}$ [rad/s]')
    xlim([0 time_sim(end)])
    % --- Tw_rr --- %
    ax(5) = subplot(335);
    plot(time_sim,Tw_rr,'LineWidth',2)
    grid on
    title('$Tw_{rr}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Tw_rl --- %
    ax(6) = subplot(336);
    plot(time_sim,Tw_rl,'LineWidth',2)
    grid on
    title('$Tw_{rl}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Tw_fr --- %
    ax(7) = subplot(337);
    plot(time_sim,Tw_fr,'LineWidth',2)
    grid on
    title('$Tw_{fr}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Tw_fl --- %
    ax(8) = subplot(338);
    plot(time_sim,Tw_fl,'LineWidth',2)
    grid on
    title('$Tw_{fl}$ [Nm]')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax

    % ---------------------------------
    %% Plot vertical tire loads and self-aligning torques
    % ---------------------------------
    figure('Name','Vert loads & aligning torques','NumberTitle','off'), clf
    % --- Fz_rr --- %
    ax(1) = subplot(331);
    plot(time_sim,Fz_rr,'LineWidth',2)
    grid on
    title('$Fz_{rr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fz_rl --- %
    ax(2) = subplot(332);
    plot(time_sim,Fz_rl,'LineWidth',2)
    grid on
    title('$Fz_{rl}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fz_fr --- %
    ax(3) = subplot(333);
    plot(time_sim,Fz_fr,'LineWidth',2)
    grid on
    title('$Fz_{fr}$ [N]')
    xlim([0 time_sim(end)])
    % --- Fz_fl --- %
    ax(4) = subplot(334);
    plot(time_sim,Fz_fl,'LineWidth',2)
    grid on
    title('$Fz_{fl}$ [N]')
    xlim([0 time_sim(end)])
    % --- Mz_rr --- %
    ax(5) = subplot(335);
    plot(time_sim,Mz_rr,'LineWidth',2)
    grid on
    title('$Mz_{rr}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Mz_rl --- %
    ax(6) = subplot(336);
    plot(time_sim,Mz_rl,'LineWidth',2)
    grid on
    title('$Mz_{rl}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Mz_fr --- %
    ax(7) = subplot(337);
    plot(time_sim,Mz_fr,'LineWidth',2)
    grid on
    title('$Mz_{fr}$ [Nm]')
    xlim([0 time_sim(end)])
    % --- Mz_fl --- %
    ax(8) = subplot(338);
    plot(time_sim,Mz_fl,'LineWidth',2)
    grid on
    title('$Mz_{fl}$ [Nm]')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax
    
    % ---------------------------------
    %% Plot wheel camber
    % ---------------------------------
    figure('Name','Wheel camber','NumberTitle','off'), clf
    % --- gamma_rr --- %
    ax(1) = subplot(221);
    plot(time_sim,gamma_rr,'LineWidth',2)
    grid on
    title('$\gamma_{rr}$ [deg]')
    xlim([0 time_sim(end)])
    % --- gamma_rl --- %
    ax(2) = subplot(222);
    plot(time_sim,gamma_rl,'LineWidth',2)
    grid on
    title('$\gamma_{rl}$ [deg]')
    xlim([0 time_sim(end)])
    % --- gamma_fr --- %
    ax(3) = subplot(223);
    plot(time_sim,gamma_fr,'LineWidth',2)
    grid on
    title('$\gamma_{fr}$ [deg]')
    xlim([0 time_sim(end)])
    % --- gamma_fl --- %
    ax(4) = subplot(224);
    plot(time_sim,gamma_fl,'LineWidth',2)
    grid on
    title('$\gamma_{fl}$ [deg]')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax
    
    % ---------------------------------
    %% Plot accelerations, chassis side slip angle and curvature
    % ---------------------------------
    figure('Name','Pars extra','NumberTitle','off'), clf
    % --- ax --- %
    ax(1) = subplot(221);
    plot(time_sim(2:end),dot_u - Omega(2:end).*v(2:end),'LineWidth',2)
    hold on
    plot(time_sim(2:end),diff(u)/Ts,'--g','LineWidth',2)
    plot(time_sim(2:end),Ax_filt,'-.b','LineWidth',1)
    plot(time_sim(2:end),dot_u_filt,'-.r','LineWidth',1)
    grid on
    title('$a_{x}$ $[m/s^2]$')
    legend('$\dot{u}-\Omega v$','$\dot{u}$','filt $\dot{u}-\Omega v$','filt $\dot{u}$','Location','northeast')
    xlim([0 time_sim(end)])
    % --- ay --- %
    ax(2) = subplot(222);
    plot(time_sim(2:end),dot_v + Omega(2:end).*u(2:end),'LineWidth',2)
    hold on
    plot(time_sim(2:end),Omega(2:end).*u(2:end),'--g','LineWidth',1)
    grid on
    title('$a_{y}$ $[m/s^2]$')
    legend('$\dot{v}+\Omega u$','$\Omega u$','Location','best')
    xlim([0 time_sim(end)])
    % --- beta --- %
    ax(3) = subplot(223);
    plot(time_sim,rad2deg(beta),'LineWidth',2)
    grid on
    title('$\beta$ [deg]')
    xlim([0 time_sim(end)])
    % --- rho --- %
    ax(4) = subplot(224);
    plot(time_sim(5000:end),rho_ss(5000:end),'LineWidth',2)
    hold on
    plot(time_sim(5000:end-1),rho_tran(5000:end),'--g','LineWidth',1)
    grid on
    title('$\rho$ [$m^{-1}$]')
    legend('$\rho_{ss}$','$\rho_{transient}$','Location','best')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax

    % ---------------------------------
    %% Plot vehicle pose x,y,psi
    % ---------------------------------
    figure('Name','Pose','NumberTitle','off'), clf 
    % --- x --- %
    ax(1) = subplot(221);
    plot(time_sim,x_CoM,'LineWidth',2)
    grid on
    title('$x$ [m]')
    xlim([0 time_sim(end)])
    % --- y --- %
    ax(2) = subplot(222);
    plot(time_sim,y_CoM,'LineWidth',2)
    grid on
    title('$y$ [m]')
    xlim([0 time_sim(end)])
    % --- psi --- %
    ax(3) = subplot(223);
    plot(time_sim,rad2deg(psi),'LineWidth',2)
    grid on
    title('$\psi$ [deg]')
    xlim([0 time_sim(end)])

    % linkaxes(ax,'x')
    clear ax

    % -------------------------------
    %% Plot G-G diagram from simulation data
    % -------------------------------
    figure('Name','G-G plot','NumberTitle','off'), clf
    axis equal
    hold on
    plot3(Ay,Ax_filt,u(1:end-1),'Color',color('purple'),'LineWidth',3)
    xlabel('$a_y$ [m/s$^2$]')
    ylabel('$a_x$ [m/s$^2$]')
    zlabel('$u$ [m/s]')
    title('G-G diagram from simulation data','FontSize',18)
    grid on

    % -------------------------------
    %% Plot vehicle path
    % -------------------------------
    N = length(time_sim);
    figure('Name','Real Vehicle Path','NumberTitle','off'), clf
    set(gca,'fontsize',16)
    hold on
    axis equal
    xlabel('x-coord [m]')
    ylabel('y-coord [m]')
    title('Real Vehicle Path','FontSize',18)
    plot(x_CoM,y_CoM,'Color',color('gold'),'LineWidth',2)
    for i = 1:floor(N/20):N
        rot_mat = [cos(psi(i)) -sin(psi(i)) ; sin(psi(i)) cos(psi(i))];
        pos_rr = rot_mat*[-Lr -Wr/2]';
        pos_rl = rot_mat*[-Lr +Wr/2]';
        pos_fr = rot_mat*[+Lf -Wf/2]';
        pos_fl = rot_mat*[+Lf +Wf/2]';
        pos = [pos_rr pos_rl pos_fl pos_fr];
        p = patch(x_CoM(i) + pos(1,:),y_CoM(i) + pos(2,:),'blue');
        quiver(x_CoM(i), y_CoM(i), u(i)*cos(psi(i)), u(i)*sin(psi(i)), 'color', [1,0,0]);
        quiver(x_CoM(i), y_CoM(i), -v(i)*sin(psi(i)), v(i)*cos(psi(i)), 'color', [0.23,0.37,0.17]);
    end
    grid on
    hold off
    
    % -------------------------------
    %% Plot lateral load transfer
    % -------------------------------
    hGs = vehicle_data.vehicle.hGs; % CoM vertical position 
    hrcf = vehicle_data.front_suspension.h_rc_f; % Front roll centeer height
    hrcr =  vehicle_data.rear_suspension.h_rc_r; % Rear roll centeer height
    hr = hrcf + (hrcr-hrcf)*Lf/(Lr+Lf);  % Rolling axis height from ground at CoM position
    hs = hGs - hr; % Distance of CoM from rolling axis
    epsilon_phi = vehicle_data.suspension.epsilon_phi; % Stiffness ratio
    
    delta_Fz_f = m * Ay * ((hs *epsilon_phi)/(Wf) + (Lr * hrcf)/(Wf * L));
    delta_Fz_r = m * Ay * ((hs*(1-epsilon_phi)/Wr) + (Lf * hrcr)/(Wr * L)); % From rigid chassis solution
    Fz_r_sim = (Fz_rr - Fz_rl)./2;
    Fz_f_sim = (Fz_fr - Fz_fl)./2;
    
    figure('Name','Lateral load transfer','NumberTitle','off'), clf
    tiledlayout(2,1)
    nexttile
    hold on
    grid on
    plot(time_sim(2:end),delta_Fz_r,'Color',color('green'),'LineWidth',3)
    plot(time_sim(2:end),delta_Fz_f,'Color',color('red'),'LineWidth',3)
    plot(time_sim,Fz_r_sim,'--','Color',color('blue'),'LineWidth',2)
    plot(time_sim,Fz_f_sim,'--','Color',color('gold'),'LineWidth',2)
    xlabel('$Time$ [s]')
    ylabel('$\Delta\,F_z$ [N]')
    title('Lateral load transfer vs Time','FontSize',18)
    legend('$\Delta\,F_zr$ theoretical', '$\Delta\,F_zf$ theoretical', '$\Delta\,F_zr$ simulated', '$\Delta\,Fz_f$ simulated','Location', 'southeast')
    hold off
    clear ax
    nexttile
    hold on
    grid on
    plot(Ay,delta_Fz_r,'Color',color('green'),'LineWidth',3)
    plot(Ay,delta_Fz_f,'Color',color('red'),'LineWidth',3)
    plot(Ay,Fz_r_sim(2:end),'--','Color',color('blue'),'LineWidth',2)
    plot(Ay,Fz_f_sim(2:end),'--','Color',color('gold'),'LineWidth',2)
    xlabel('$a_y$ [m/s$^2$]')
    ylabel('$\Delta\,F_z$ [N]')
    title('Lateral load transfer vs lateral acceleration','FontSize',18)
    legend('$\Delta\,F_zr$ theoretical', '$\Delta\,F_zf$ theoretical', '$\Delta\,Fz_r$ simulated', '$\Delta\,Fz_f$ simulated','Location', 'southeast')
    hold off
    

    % ---------------------------------
    %% Normalized axle characteristic
    % ---------------------------------
    
    
    % Lateral forces - from double track
    Fzr0 = m * (Lf/L) * g;
    Fzf0 = m * (Lr/L) * g;

    % Total lateral forces on axles
    Fy_f = Fy_fl + Fy_fr;
    Fy_r = Fy_rl + Fy_rr;

    
    % Static load normalization
    Fyr_norm = Fy_r./Fzr0;
    Fyf_norm = Fy_f./Fzf0;

    alphaR = deg2rad(alpha_rr + alpha_rl)/2;
    alphaF = deg2rad(alpha_fr + alpha_fl)/2; % SS
    


    figure('Name','Normalized lateral forces','NumberTitle','off'), clf
    hold on
    grid on
    plot(alphaR,Fyr_norm,'LineWidth',2,'Color',color('blue'))
    plot(alphaF,Fyf_norm,'LineWidth',2,'Color',color('red'))
    legend('$F_yr/F_zr0=\mu_r$','$F_yf/F_zf0=\mu_f$','Location','southeast')
    xlabel('$\alpha_{R}$, $\alpha_{F}$ [rad]')
    ylabel('$\mu_r$, $\mu_f$ [-]')
    title('Normalized axle characteristics')


    % ---------------------------------
    %% Normalized cornering stiffnesses 
    % ---------------------------------
        
    % Select a region that is almost linear
    linear_threshold = 0.01; % Value of alpha
    linear_indexes = find(alphaR < linear_threshold);
    end_linear_region = linear_indexes(end);            
    alphaR_lin = alphaR(1:end_linear_region);
    alphaF_lin = alphaF(1:end_linear_region);
    Fy_R_lin = Fyr_norm(1:end_linear_region);
    Fy_F_lin = Fyf_norm(1:end_linear_region);
    % Fitting 
    C_alpha_R_fit = polyfit(alphaR_lin, Fy_R_lin, 1);
    C_alpha_F_fit = polyfit(alphaF_lin, Fy_F_lin, 1);
    C_alpha_RRR = C_alpha_R_fit(1);
    C_alpha_FFF = C_alpha_F_fit(1);
    %disp(C_alpha_RRR)
    %disp(C_alpha_FFF)
    C_alpha_R_fitted = polyval(C_alpha_R_fit,alphaR);
    C_alpha_F_fitted = polyval(C_alpha_F_fit,alphaF);
    figure('Name','Normalized cornering stiffnesses from fitting','NumberTitle','off'), clf
    hold on
    grid on
    plot(alphaR,Fyr_norm,'LineWidth',2);
    plot(alphaF,Fyf_norm,'LineWidth',2);
    plot(alphaR(1:30000),C_alpha_R_fitted(1:30000),"Color",color('black'),'LineWidth',2,LineStyle='-.');
    plot(alphaF(1:30000),C_alpha_F_fitted(1:30000),"Color",color('black'),'LineWidth',2,LineStyle='-.');
    legend({'$\mu_r$','$\mu_f$'})
    xlabel('$\alpha_{R}$, $\alpha_{F}$ [rad]')
    ylabel('$\mu_r$, $\mu_f$ [-]')
    title('Normalized cornering stiffnesses')
  
    %------------------------
    %% Understeering gradient
    %------------------------

    % Find cornering stiffnesses
    C_alpha_F = diff(Fyf_norm(30000:end))./diff(alphaF(30000:end));
    C_alpha_R = diff(Fyr_norm(30000:end))./diff(alphaR(30000:end));
    deAlphaF = diff(alphaF(1:end-1))./diff(Ay);
    deAlphaR = diff(alphaR(1:end-1))./diff(Ay);
    Kus_diff = -(deAlphaR-deAlphaF)*tau_D;
    Ackerman = deg2rad(delta_D)/(tau_D);
    Ackerman = Ackerman(1:length(rho_ss));
    Kus_fit2 = Ackerman-rho_ss*L;
    K_y_R = diff(Fy_r)./diff(alphaR);
    K_y_F = diff(Fy_f)./diff(alphaF);
   
    
    if Test_  <= 0 % Fixed steering angle, speed ramp

        %Kus = -(tau_D/L^2*g)*(1./C_alpha_R-1./C_alpha_F);
        %Kus_fit = -(tau_D/L^2*g)*(1./C_alpha_R_fitted-1./C_alpha_F_fitted);
        Kus = -(m*tau_D/L^2)*(Lf./K_y_R-Lr./K_y_F);
        index = 30000;
    elseif Test_ > 0 % Constant speed, steering ramp

        % Kus = -(tau_D/L*g)*(1./C_alpha_R-1./C_alpha_F);
        %Kus_fit = -(tau_D/L*g)*(1./C_alpha_R_fitted-1./C_alpha_F_fitted);
        Kus = -(m*tau_D/L)*(Lf./K_y_R-Lr./K_y_F);
        index = 10000;
        Kus_diff = -(1./(u(1:end-2).^2*L*1/tau_D)-Kus_diff);
    end

    figure('Name','Understeering gradient vs Ay','NumberTitle','off'), clf
    tiledlayout(2,1)
    nexttile
    hold on
    grid on
    plot(Ay(index:end)/g,Kus(index:end),'LineWidth',2);
    plot(Ay(index:end-1)/g,Kus_diff(index:end),'LineWidth',2);
    %plot(Ay(30000:end)/g,diff(delta_D(30000:end-1))./diff(Ay(30000:end)))
    xlabel('$A_{y}/g [-]$')
    ylabel('$K_{us}(A_{y}) [rad/g]$')
    legend('$K_{us}$ from formula','$K_{us}$ from differential','Location','south')
    title('Understeering gradient vs Ay')
    nexttile
    hold on
    grid on
    plot(Ay(index:end)/g,alphaF(index:end-1)-alphaR(index:end-1),'LineWidth',2);
    %plot(Ay(30000:end)/g,Kus_fit2(30000:end-1),'LineWidth',2);
    legend('$\Delta\alpha_{FR} = \alpha_F - \alpha_R = \delta_D/\tau_D-\rho_{ss}\cdot L$','Location','south')
    xlabel('$A_{y}/g [-]$')
    ylabel('$\Delta\alpha_{FR} [rad]$')
    title('Front and rear slip angles difference vs Ay')


    %%

    Ackerman = deg2rad(delta_D)/(tau_D);
    Ackerman = Ackerman(1:length(rho_ss));
    Rho2 = Omega./u*L;
    
    % Kus fitting for rho
    Kus_fitting = polyfit(Ay(14999:end)/g,Ackerman(15000:end)-Rho2(15000:end),5);
    
    Kus_fitting_poly = polyval(Kus_fitting,Ay(14999:end)/g);

    Kus1 = polyfit(Ay(14999:49999)/g,Ackerman(15000:50000)-Rho2(15000:50000),1);
    
    Kus1_retta = polyval(Kus1,Ay(14999:end)/g);

    Ackerman2 = Ackerman./L;
    figure('Name','Rho vs ay','NumberTitle','off'), clf
    hold on
    grid on
    plot(Ay(14999:end)/g,rho_ss(15000:end),'LineWidth',2);
    %yline(0,'LineWidth',2)
    plot(Ay(14999:end)/g,Ackerman2(15000:end),'LineWidth',2);
    legend('$\rho_{ss}$','Neutral steering','Location','east')
    xlabel('$A_y/g$ [-]')
    ylabel('$\rho_{ss} [1/m]$')
    title('$\rho_{ss} vs A_y/g$')

    figure('Name','Handling curve','NumberTitle','off'), clf
    hold on
    grid on
    yline(0)
    plot(Ay(14999:end)/g,Ackerman(15000:end)-Rho2(15000:end),'LineWidth',2);
    plot(Ay(14999:end)/g,Kus_fitting_poly,'LineWidth',2,'LineStyle','-.');
    plot(Ay(14999:end)/g,Kus1_retta)
    legend('','$\delta_D / \tau_D-\Omega /u \cdot L$','Fitted $K_{us}$ polynomial','Fitted linear $K_{us}$','Location','east')
    xlabel('$A_y/g$ [-]')
    ylabel('$\delta_D / \tau_D-\Omega /u \cdot L$')
    title('Handling curve')

 %% Yaw rate gain - Beta gain
  
    if(Test_ <=0)

        %Yaw
        yaw_rate_gain = u./(L*tau_D*(ones(size(u)) + Kus1(1)/L * u.^2));
        yaw_rate_gain2 = Omega./(delta);
        figure('Name','Yaw rate gain vs u','NumberTitle','off')
        hold on
        grid on
        plot(u*3.6,yaw_rate_gain,'LineWidth',2)
        plot(u*3.6,yaw_rate_gain2,'LineWidth',2)
        xline(81,'LineStyle',':','LineWidth',2)
        title('$\Omega/\delta_H$ vs $u$');
        xlabel('u [km/h]');
        ylabel('$\Omega/\delta_H$ [1/s]');
        legend({'Yaw rate gain from formula','Yaw rate gain from data', 'Critical speed'}, 'Location', 'northwest');
        hold off
              
        
        %Beta
        Kus_slope = Kus1(1);
        beta_gain = Lr/L-(m/(L^3).*(Lf^2./K_y_R + Lr^2./K_y_F).*1/tau_D.*((u(1:end-1).^2)./(L*ones(size(u(1:end-1))) + Kus_slope*(u(1:end-1).^2))));
        beta_gain_data = deg2rad(beta)./(delta);
        figure('Name','Beta gain vs u','NumberTitle','off')
        hold on
        grid on
        plot(u(1:end-1)*3.6,deg2rad(beta_gain),'LineWidth',2)
        plot(u(10000:end)*3.6,beta_gain_data(10000:end),'LineWidth',2)
        xline(81,'LineStyle',':','LineWidth',2)
        title('$\frac{\beta}{\delta_H}$ vs $u$');
        xlabel('u [km/h]');
        ylabel('$\frac{\beta}{\delta_H}$');
        legend({'Beta gain from formula','Beta gain from data', 'Critical speed'}, 'Location', 'southwest');
        hold off
    end

end
    

    
