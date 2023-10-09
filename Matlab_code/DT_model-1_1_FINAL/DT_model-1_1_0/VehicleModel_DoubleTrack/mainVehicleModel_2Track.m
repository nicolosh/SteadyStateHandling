% ----------------------------------------------------------------
%% Main script for a basic simulation framework with a double track vehcile model
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
%% Define initial conditions for the simulation
% ----------------------------
V0 = 0; % Initial speed
X0 = loadInitialConditions(V0);
VF = 150/3.6; % Target speed
V_const = 60/3.6;
V_slope = 0.2;
Const_DeltaH = 30; % Steering angle for constant steering angle test
DeltaH0 = 0; % Initial steering angle for constant speed test
DeltaHF = 20; % Final steering angle for constant speed test
Test_ = 0; % Constant steering-> Test_<=0 Constant speed-> Test_>0
% ----------------------------
%% Simulation parameters
% ----------------------------
simulationPars = getSimulationParams(); 
Ts = 1e-3;  % integration step for the simulation (fixed step)
T0 = simulationPars.times.t0;         % starting time of the simulation
if Test_ <= 0
    Tf = 115.5;         % stop time of the simulation
else
    Tf = 63;
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
dataAnalysis(model_sim,vehicle_data,Ts,Test_);
%%
if Test_ <= 0
clc
Tf = 90;
suspensions(vehicle_data,Ts,Tf);
%
vehicle_data = getVehicleDataStruct();
toe(vehicle_data,Ts,Tf);
%
vehicle_data = getVehicleDataStruct();
camber_front(vehicle_data,Ts,Tf);
%
vehicle_data = getVehicleDataStruct();
camber_rear(vehicle_data,Ts,Tf);
end
%vehicleAnimation(model_sim,vehicle_data,Ts);

