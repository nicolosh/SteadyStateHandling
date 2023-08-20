% ----------------------------------------------------------------
%% Main script for a basic simulation framework with a double track vehicle model
%  authors: 
%  rev. 1.0 Mattia Piccinini & Gastone Pietro Papini Rosati
%  rev. 2.0 Edoardo Pagot
%  date:
%  rev 1.0:    13/10/2020
%  rev 2.0:    16/05/2022
%  rev 2.1:    08/07/2022 (Biral)
%       - added Fz saturation. Correceted error in Fx
%       - initial condition is now parametric in initial speed
%       - changed the braking torque parameters to adapt to a GP2 model
% ----------------------------------------------------------------

% ----------------------------
%% Initialization
% ----------------------------
initialize_environment;

% ----------------------------
% Set LaTeX as default interpreter for axis labels, ticks and legends
set(0,'defaulttextinterpreter','latex')
set(groot, 'defaultAxesTickLabelInterpreter','latex');
set(groot, 'defaultLegendInterpreter','latex');
% ----------------------------
%% Load vehicle data
% ----------------------------

% test_tyre_model; % some plot to visualize the curvers resulting from the
% loaded data

vehicle_data = getVehicleDataStruct();
% pacejkaParam = loadPacejkaParam();

% ----------------------------
%% Define initial conditions for the simulation and the type of test
% ----------------------------
% Description:
 % - the simulation time is increased: Tf = 180s for better plotting
 % purposes
 % - if test_type = 1 -> speed ramp test at constant steering angle (SpRT)
 % - if test_type = 2 -> steer ramp test at constant speed (StRT)
 % Parameters description for each test (trapezoidal profile): 
 % - t1 = time at which the transient ends -> the desired
 %           velocity is reached (PID controller);
 % - t2 = time at which the ramp ends -> after t2 the
 %           imposed velocity/steer remains constant up to Tf
 % - acc_x = imposed longitudinal acceleration imposed during the
 %           speed ramp test
 % - steer_ang_slp = the gradient of the steering angle during steer ramp test is imposed equal
 %           to 0.15 (in order to achive 15 deg of steer angle)

% V0 = 30/3.6; % Initial speed [m/s]
% X0 = loadInitialConditions(V0);
Vf = 95/3.6; % [m/s]
t1_speed = 1;
t1_steer = 0.5;
% acc_x = 0.145; % low value [m/s^2]
% Vi = V0;
% Tf = 180;
% t1 = Tf/100;
% t2 = Tf - t1;
t1_ramp_steer = 15;

deltaH_fin = 25; % [deg]
% steer_ang_slp = 0.15;
const_steer_angle = 15; % [deg]
const_des_speed = 70/3.6; % [m/s]
test_type = 1; % 1 = SpRT with const steer, 2 = StRT with const speed;

if(test_type==1)
     proportional=0.0149079382355932;
     integral=0.209186882089226;
     derivative=0.206343298118274;
     filter_coeff=2.92564365922541;

     Vi = 5/3.6; % Initial speed
     X0 = loadInitialConditions(Vi);
 elseif(test_type==2)
     proportional=0.0135879338655985;
     integral=0.00180259308311908;
     derivative=-0.000759112239547322;
     filter_coeff=17.8997691747157;

     Vi = 30/3.6; % Initial speed
     X0 = loadInitialConditions(Vi);
 end

% ----------------------------
%% Simulation parameters
% ----------------------------
simulationPars = getSimulationParams(); 
Ts = simulationPars.times.step_size;  % integration step for the simulation (fixed step)
T0 = simulationPars.times.t0;         % starting time of the simulation
% Tf = simulationPars.times.tf;         % stop time of the simulation
if(test_type==1)
     Tf = 200;         % stop time of the simulation
elseif(test_type==2)
     Tf = 80;
end

% ----------------------------
%% Start Simulation
% ----------------------------
fprintf('Starting Simulation\n')
tic;
model_sim = sim('Vehicle_Model_2Track');
elapsed_time_simulation = toc;
fprintf('Simulation completed\n')
fprintf('The total simulation time was %.2f seconds\n',elapsed_time_simulation)

% ----------------------------
%% Post-Processing
% ----------------------------
dataAnalysis(model_sim,vehicle_data,Ts, test_type);
% vehicleAnimation(model_sim,vehicle_data,Ts); # Useless
% suspensionsEffect(vehicle_data, Ts, Tf);
% vehicle_data = getVehicleDataStruct();
% toeEffect(vehicle_data,Ts,Tf);
% vehicle_data = getVehicleDataStruct();
% camberEffect(vehicle_data,Ts,Tf); 
