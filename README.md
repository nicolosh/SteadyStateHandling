# Dynamics of Vehicles (HW-2) :: Steady State Handling
Second assignment for the Biral's Project for the MSc Degree @ UNITN  (Dynamics of Vehicles course):
the focus for this project will be about Steady State Handling

## Repository overview of files and folder
In the folder [Matlab_code](https://github.com/nicolosh/SteadyStateHandling/Matlab_code) there are all the materials related to the second assignment of the course, which aim is the analysis of the steady-state behaviour of a F-SAE formula type car, given its double track model and loading the tyre coefficients of the first assignment about tyre data fitting with [__MF96__](https://it.mathworks.com/help/sdl/ref/tireroadinteractionmagicformula.html). 

Two different tests have been carried out using the vehicle model to simulate 2 steady state tests, modifying the [_Simulink_](https://it.mathworks.com/products/simulink.html) file:
1. steer ramp test at constant speed
2. speed ramp test at constant steering angle

In particular, the main requests, for each test, were the computation/derivation of:
1. Corresponding normalised axle characteristics
2. Handling diagram
3. Lateral load transfer
4. Yaw gain and beta gain
5. compare the theoretical with the fitted steering gradients
6. Analyse the effect of suspension roll stiffness, camber and toe angle on steering characteristics

The type of test to be carried out can be selected through the variable test_type in the [main file](https://github.com/nicolosh/SteadyStateHandling/blob/main/Matlab_code/DT_model-1_1_FINAL/DT_model-1_1_0/VehicleModel_DoubleTrack/mainVehicleModel_2Track.m).

In the folder [Report](https://github.com/nicolosh/SteadyStateHandling/Report) can be found the report for this second and final assignment,
