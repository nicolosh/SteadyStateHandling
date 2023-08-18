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
 % - the simulation time is increased: Tf = 120s for better plotting
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
V0 = 50/3.6; % Initial speed
X0 = loadInitialConditions(V0);

acc_x = 0.16; % low value [m/s^2]
Vi = V0;
Tf = 120;
t1 = Tf/10;
t2 = Tf - t1;

steer_ang_slp = 0.15;
const_steer_angle = 10; % [deg]
const_des_speed = 50/3.6; % [m/s]
test_type = 1; % 1 = SpRT with const steer, 2 = StRT with const speed;
%% Simulation parameters
% ----------------------------
simulationPars = getSimulationParams(); 
Ts = simulationPars.times.step_size;  % integration step for the simulation (fixed step)
T0 = simulationPars.times.t0;         % starting time of the simulation
Tf = simulationPars.times.tf;         % stop time of the simulation

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
dataAnalysis(model_sim,vehicle_data,Ts);
vehicleAnimation(model_sim,vehicle_data,Ts);
