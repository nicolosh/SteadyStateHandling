#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Vehicle_Model_2Track_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 34
#endif
#ifndef SS_INT64
#define SS_INT64 35
#endif
#else
#include "builtin_typeid_types.h"
#include "Vehicle_Model_2Track.h"
#include "Vehicle_Model_2Track_capi.h"
#include "Vehicle_Model_2Track_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 5 , TARGET_STRING (
"Vehicle_Model_2Track/Vehicle Model" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 5 , TARGET_STRING ( "Vehicle_Model_2Track/Vehicle Model" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Vehicle Model/is_active_c6_Vehicle_Model_2Track" ) ,
TARGET_STRING ( "is_active_c6_Vehicle_Model_2Track" ) , 0 , 1 , 1 , 0 , 0 } ,
{ 3 , 0 , TARGET_STRING ( "Vehicle_Model_2Track/Discrete-Time Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Steering" ) , TARGET_STRING ( "delta_D" ) , 0 , 0 , 1 ,
0 , 0 } , { 5 , 0 , TARGET_STRING ( "Vehicle_Model_2Track/Unit Delay" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
 "Vehicle_Model_2Track/ABS and Wheel torque generation/Powertrain/is_active_c1_Vehicle_Model_2Track"
) , TARGET_STRING ( "is_active_c1_Vehicle_Model_2Track" ) , 0 , 1 , 1 , 0 , 0
} , { 7 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees11/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees12/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees4/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "Vehicle_Model_2Track/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller/Saturation/Enabled/Saturation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative/TSamp" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative1/TSamp" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 19 , TARGET_STRING (
"Vehicle_Model_2Track/Const steering" ) , TARGET_STRING ( "slope" ) , 0 , 1 ,
0 } , { 20 , TARGET_STRING ( "Vehicle_Model_2Track/Const steering" ) ,
TARGET_STRING ( "start" ) , 0 , 1 , 0 } , { 21 , TARGET_STRING (
"Vehicle_Model_2Track/Const steering" ) , TARGET_STRING ( "InitialOutput" ) ,
0 , 1 , 0 } , { 22 , TARGET_STRING ( "Vehicle_Model_2Track/PID Controller" )
, TARGET_STRING ( "P" ) , 0 , 1 , 0 } , { 23 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 1 , 0 }
, { 24 , TARGET_STRING ( "Vehicle_Model_2Track/PID Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller" ) , TARGET_STRING ( "N" ) , 0 , 1 , 0 }
, { 26 , TARGET_STRING ( "Vehicle_Model_2Track/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 1 , 0 } , { 27 ,
TARGET_STRING ( "Vehicle_Model_2Track/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 1 , 0 } , { 28 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING (
"Vehicle_Model_2Track/PID Controller" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 1 , 0 } , { 30 , TARGET_STRING (
"Vehicle_Model_2Track/Speed ramp" ) , TARGET_STRING ( "start" ) , 0 , 1 , 0 }
, { 31 , TARGET_STRING ( "Vehicle_Model_2Track/Steering ramp" ) ,
TARGET_STRING ( "slope" ) , 0 , 1 , 0 } , { 32 , TARGET_STRING (
"Vehicle_Model_2Track/Steering ramp" ) , TARGET_STRING ( "start" ) , 0 , 1 ,
0 } , { 33 , TARGET_STRING ( "Vehicle_Model_2Track/Steering ramp" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 34 , TARGET_STRING (
"Vehicle_Model_2Track/Discrete-Time Integrator" ) , TARGET_STRING ( "gainval"
) , 0 , 1 , 0 } , { 35 , TARGET_STRING ( "Vehicle_Model_2Track/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 36 , TARGET_STRING (
"Vehicle_Model_2Track/Saturation1" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 1
, 0 } , { 37 , TARGET_STRING ( "Vehicle_Model_2Track/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
"Vehicle_Model_2Track/Saturation2" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 1
, 0 } , { 39 , TARGET_STRING ( "Vehicle_Model_2Track/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 40 , TARGET_STRING (
"Vehicle_Model_2Track/Pedal" ) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 }
, { 41 , TARGET_STRING ( "Vehicle_Model_2Track/Steering" ) , TARGET_STRING (
"Threshold" ) , 0 , 1 , 0 } , { 42 , TARGET_STRING (
"Vehicle_Model_2Track/Unit Delay" ) , TARGET_STRING ( "InitialCondition" ) ,
0 , 2 , 0 } , { 43 , TARGET_STRING (
"Vehicle_Model_2Track/Const steering/Step" ) , TARGET_STRING ( "Before" ) , 0
, 1 , 0 } , { 44 , TARGET_STRING (
"Vehicle_Model_2Track/Degrees to Radians/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 1 , 0 } , { 45 , TARGET_STRING ( "Vehicle_Model_2Track/Speed ramp/Step"
) , TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 46 , TARGET_STRING (
"Vehicle_Model_2Track/Steering ramp/Step" ) , TARGET_STRING ( "Before" ) , 0
, 1 , 0 } , { 47 , TARGET_STRING (
"Vehicle_Model_2Track/Extract and Save States/Radians to Degrees1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 48 , TARGET_STRING (
"Vehicle_Model_2Track/Extract and Save States/Radians to Degrees2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 49 , TARGET_STRING (
"Vehicle_Model_2Track/Extract and Save States/Radians to Degrees3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 50 , TARGET_STRING (
"Vehicle_Model_2Track/Extract and Save States/Radians to Degrees4/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 51 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 52 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 53 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees11/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 54 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees12/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 55 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 57 , TARGET_STRING (
"Vehicle_Model_2Track/Params To Workspace/Radians to Degrees4/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 58 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative" ) , TARGET_STRING (
"ICPrevScaledInput" ) , 0 , 1 , 0 } , { 59 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative1" ) , TARGET_STRING (
"ICPrevScaledInput" ) , 0 , 1 , 0 } , { 60 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative/TSamp" ) ,
TARGET_STRING ( "WtEt" ) , 0 , 1 , 0 } , { 61 , TARGET_STRING (
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative1/TSamp" ) ,
TARGET_STRING ( "WtEt" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 62 , TARGET_STRING (
"vehicle_data" ) , 18 , 1 , 0 } , { 63 , TARGET_STRING ( "Const_DeltaH" ) , 0
, 1 , 0 } , { 64 , TARGET_STRING ( "Test_" ) , 0 , 1 , 0 } , { 65 ,
TARGET_STRING ( "V0" ) , 0 , 1 , 0 } , { 66 , TARGET_STRING ( "VF" ) , 0 , 1
, 0 } , { 67 , TARGET_STRING ( "V_const" ) , 0 , 1 , 0 } , { 68 ,
TARGET_STRING ( "V_slope" ) , 0 , 1 , 0 } , { 69 , TARGET_STRING ( "X0" ) , 0
, 2 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . nbbgeyemhm [ 0 ] , & rtB .
dyiczxwq2y [ 0 ] , & rtDW . milaeogcvv , & rtB . d3xonmy1hw [ 0 ] , & rtB .
bf5octyrk4 , & rtB . k2jl0n1mcd [ 0 ] , & rtDW . lqejqoyonp , & rtB .
is4elcsyhb , & rtB . ermlayis1n , & rtB . lanjwes5zx , & rtB . c5fwu3532g , &
rtB . ckx1d40g1x , & rtB . hxvw03zyvr , & rtB . nnhdp4qv0s , & rtB .
hgfsmvz4k1 , & rtB . czfib24vsx , & rtB . dfl3kewuef , & rtB . l42j3en20w , &
rtB . gwxysfakeo , & rtP . Conststeering_slope , & rtP . Conststeering_start
, & rtP . Conststeering_InitialOutput , & rtP . PIDController_P , & rtP .
PIDController_I , & rtP . PIDController_D , & rtP . PIDController_N , & rtP .
PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP .
PIDController_UpperSaturationLimit , & rtP .
PIDController_LowerSaturationLimit , & rtP . Speedramp_start , & rtP .
Steeringramp_slope , & rtP . Steeringramp_start , & rtP .
Steeringramp_InitialOutput , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
Saturation_LowerSat , & rtP . Saturation1_UpperSat , & rtP .
Saturation1_LowerSat , & rtP . Saturation2_LowerSat , & rtP .
Saturation3_LowerSat , & rtP . Pedal_Threshold , & rtP . Steering_Threshold ,
& rtP . UnitDelay_InitialCondition [ 0 ] , & rtP . Step_Y0_elgkip05b4 , & rtP
. Gain1_Gain , & rtP . Step_Y0 , & rtP . Step_Y0_esoe35nzod , & rtP .
Gain_Gain_i5lx5ddvss , & rtP . Gain_Gain , & rtP . Gain_Gain_hjp5rjecra , &
rtP . Gain_Gain_jqswpxfqa4 , & rtP . Gain_Gain_g0dvnhmpu3 , & rtP .
Gain_Gain_jcywftknhq , & rtP . Gain_Gain_fvorafzpg4 , & rtP .
Gain_Gain_ffibbzmb4h , & rtP . Gain_Gain_m4rgufjtp0 , & rtP .
Gain_Gain_mnhwbspcdd , & rtP . Gain_Gain_gisefcr1sl , & rtP .
DiscreteDerivative_ICPrevScaledInput , & rtP .
DiscreteDerivative1_ICPrevScaledInput , & rtP . TSamp_WtEt , & rtP .
TSamp_WtEt_icq4vcnz4z , & rtP . vehicle_data , & rtP . Const_DeltaH , & rtP .
Test_ , & rtP . V0 , & rtP . VF , & rtP . V_const , & rtP . V_slope , & rtP .
X0 [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "struct" , "struct_wJ1El33Mk52QuwzDLEuotF" , 4 , 1
, sizeof ( struct_wJ1El33Mk52QuwzDLEuotF ) , ( uint8_T ) SS_STRUCT , 0 , 0 ,
0 } , { "struct" , "struct_ZRUF3KhXFRYvP5folOM1TB" , 3 , 5 , sizeof (
struct_ZRUF3KhXFRYvP5folOM1TB ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_dTcJHz0o7i9sm4sjv5ngsH" , 2 , 8 , sizeof (
struct_dTcJHz0o7i9sm4sjv5ngsH ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_SpzLGiryLr8KmNTzcKmWiF" , 2 , 10 , sizeof (
struct_SpzLGiryLr8KmNTzcKmWiF ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_Oct2zUo2CydimxV0XiGWY" , 1 , 12 , sizeof (
struct_Oct2zUo2CydimxV0XiGWY ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_OAMH7Qwj0h8uLDH027x7qC" , 6 , 13 , sizeof (
struct_OAMH7Qwj0h8uLDH027x7qC ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_rABjVl0UfkMcoNVYwlxNxD" , 6 , 19 , sizeof (
struct_rABjVl0UfkMcoNVYwlxNxD ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_QAb0Ilx1yjnHWWRDNeUOSC" , 4 , 25 , sizeof (
struct_QAb0Ilx1yjnHWWRDNeUOSC ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_950VGV7snJrVrzqYwt1XjG" , 11 , 29 , sizeof (
struct_950VGV7snJrVrzqYwt1XjG ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_NrsHEQiGh6j4fuROFu66i" , 10 , 40 , sizeof (
struct_NrsHEQiGh6j4fuROFu66i ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_o3Y3sa8fxKXdOg0eNUVdy" , 7 , 50 , sizeof (
struct_o3Y3sa8fxKXdOg0eNUVdy ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_hquwOvpzysS5ksrfqDad3B" , 6 , 57 , sizeof (
struct_hquwOvpzysS5ksrfqDad3B ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_eecRm0WjdBFDPQYjgNpH3F" , 2 , 63 , sizeof (
struct_eecRm0WjdBFDPQYjgNpH3F ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_5JuCLKSx3OjOQirRvNgS9G" , 101 , 65 , sizeof (
struct_5JuCLKSx3OjOQirRvNgS9G ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_H2nwtcPvWoOjJyhrWtEKfE" , 1 , 166 , sizeof (
struct_H2nwtcPvWoOjJyhrWtEKfE ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_idlOjeEbND8QT96FWUxqj" , 15 , 167 , sizeof (
struct_idlOjeEbND8QT96FWUxqj ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_TffyZBIiIMpjESkplMpAxB" , 18 , 182 , sizeof (
struct_TffyZBIiIMpjESkplMpAxB ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "is_xx" , rt_offsetof ( struct_wJ1El33Mk52QuwzDLEuotF , is_xx
) , 0 , 3 , 0 } , { "is_yy" , rt_offsetof ( struct_wJ1El33Mk52QuwzDLEuotF ,
is_yy ) , 0 , 3 , 0 } , { "is_zz" , rt_offsetof (
struct_wJ1El33Mk52QuwzDLEuotF , is_zz ) , 0 , 3 , 0 } , { "is_xz" ,
rt_offsetof ( struct_wJ1El33Mk52QuwzDLEuotF , is_xz ) , 0 , 3 , 0 } , { "CAx"
, rt_offsetof ( struct_ZRUF3KhXFRYvP5folOM1TB , CAx ) , 0 , 3 , 0 } , {
"CAzf" , rt_offsetof ( struct_ZRUF3KhXFRYvP5folOM1TB , CAzf ) , 0 , 3 , 0 } ,
{ "CAzr" , rt_offsetof ( struct_ZRUF3KhXFRYvP5folOM1TB , CAzr ) , 0 , 3 , 0 }
, { "tau_red" , rt_offsetof ( struct_dTcJHz0o7i9sm4sjv5ngsH , tau_red ) , 0 ,
3 , 0 } , { "eff_red" , rt_offsetof ( struct_dTcJHz0o7i9sm4sjv5ngsH , eff_red
) , 0 , 3 , 0 } , { "tau_D" , rt_offsetof ( struct_SpzLGiryLr8KmNTzcKmWiF ,
tau_D ) , 0 , 3 , 0 } , { "tau_H" , rt_offsetof (
struct_SpzLGiryLr8KmNTzcKmWiF , tau_H ) , 0 , 3 , 0 } , { "mass" ,
rt_offsetof ( struct_Oct2zUo2CydimxV0XiGWY , mass ) , 0 , 3 , 0 } , { "Rr" ,
rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC , Rr ) , 0 , 3 , 0 } , { "width"
, rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC , width ) , 0 , 3 , 0 } , {
"mass" , rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC , mass ) , 0 , 3 , 0 } ,
{ "iwd_r" , rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC , iwd_r ) , 0 , 3 , 0
} , { "iwa_r" , rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC , iwa_r ) , 0 , 3
, 0 } , { "static_camber" , rt_offsetof ( struct_OAMH7Qwj0h8uLDH027x7qC ,
static_camber ) , 0 , 3 , 0 } , { "Rf" , rt_offsetof (
struct_rABjVl0UfkMcoNVYwlxNxD , Rf ) , 0 , 3 , 0 } , { "width" , rt_offsetof
( struct_rABjVl0UfkMcoNVYwlxNxD , width ) , 0 , 3 , 0 } , { "mass" ,
rt_offsetof ( struct_rABjVl0UfkMcoNVYwlxNxD , mass ) , 0 , 3 , 0 } , {
"iwd_f" , rt_offsetof ( struct_rABjVl0UfkMcoNVYwlxNxD , iwd_f ) , 0 , 3 , 0 }
, { "iwa_f" , rt_offsetof ( struct_rABjVl0UfkMcoNVYwlxNxD , iwa_f ) , 0 , 3 ,
0 } , { "static_camber" , rt_offsetof ( struct_rABjVl0UfkMcoNVYwlxNxD ,
static_camber ) , 0 , 3 , 0 } , { "camber_gain" , rt_offsetof (
struct_QAb0Ilx1yjnHWWRDNeUOSC , camber_gain ) , 0 , 3 , 0 } , { "tau_N" ,
rt_offsetof ( struct_QAb0Ilx1yjnHWWRDNeUOSC , tau_N ) , 0 , 3 , 0 } , { "KsT"
, rt_offsetof ( struct_QAb0Ilx1yjnHWWRDNeUOSC , KsT ) , 0 , 3 , 0 } , {
"epsilon_phi" , rt_offsetof ( struct_QAb0Ilx1yjnHWWRDNeUOSC , epsilon_phi ) ,
0 , 3 , 0 } , { "Ks_r" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , Ks_r )
, 0 , 3 , 0 } , { "Cs_r" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , Cs_r
) , 0 , 3 , 0 } , { "Cs_r_b" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG ,
Cs_r_b ) , 0 , 3 , 0 } , { "Cs_r_r" , rt_offsetof (
struct_950VGV7snJrVrzqYwt1XjG , Cs_r_r ) , 0 , 3 , 0 } , { "Karb_r" ,
rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , Karb_r ) , 0 , 3 , 0 } , {
"stroke_r" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , stroke_r ) , 0 , 3
, 0 } , { "K_es_r" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , K_es_r ) ,
0 , 3 , 0 } , { "C_es_r" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG ,
C_es_r ) , 0 , 3 , 0 } , { "h_rc_r" , rt_offsetof (
struct_950VGV7snJrVrzqYwt1XjG , h_rc_r ) , 0 , 3 , 0 } , { "z__rlx_r" ,
rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , z__rlx_r ) , 0 , 3 , 0 } , {
"reg_fact" , rt_offsetof ( struct_950VGV7snJrVrzqYwt1XjG , reg_fact ) , 0 , 3
, 0 } , { "Ks_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , Ks_f ) , 0 ,
3 , 0 } , { "Cs_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , Cs_f ) , 0
, 3 , 0 } , { "Cs_f_b" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , Cs_f_b
) , 0 , 3 , 0 } , { "Cs_f_r" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i ,
Cs_f_r ) , 0 , 3 , 0 } , { "Karb_f" , rt_offsetof (
struct_NrsHEQiGh6j4fuROFu66i , Karb_f ) , 0 , 3 , 0 } , { "stroke_f" ,
rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , stroke_f ) , 0 , 3 , 0 } , {
"K_es_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , K_es_f ) , 0 , 3 , 0
} , { "C_es_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , C_es_f ) , 0 ,
3 , 0 } , { "h_rc_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i , h_rc_f )
, 0 , 3 , 0 } , { "z__rlx_f" , rt_offsetof ( struct_NrsHEQiGh6j4fuROFu66i ,
z__rlx_f ) , 0 , 3 , 0 } , { "maxTorque" , rt_offsetof (
struct_o3Y3sa8fxKXdOg0eNUVdy , maxTorque ) , 0 , 3 , 0 } , {
"speedForTorqueCut" , rt_offsetof ( struct_o3Y3sa8fxKXdOg0eNUVdy ,
speedForTorqueCut ) , 0 , 3 , 0 } , { "maxRotSpeed" , rt_offsetof (
struct_o3Y3sa8fxKXdOg0eNUVdy , maxRotSpeed ) , 0 , 3 , 0 } , { "k_torque" ,
rt_offsetof ( struct_o3Y3sa8fxKXdOg0eNUVdy , k_torque ) , 0 , 3 , 0 } , {
"I_max" , rt_offsetof ( struct_o3Y3sa8fxKXdOg0eNUVdy , I_max ) , 0 , 3 , 0 }
, { "tau_mot" , rt_offsetof ( struct_o3Y3sa8fxKXdOg0eNUVdy , tau_mot ) , 0 ,
3 , 0 } , { "tau_ped" , rt_offsetof ( struct_o3Y3sa8fxKXdOg0eNUVdy , tau_ped
) , 0 , 3 , 0 } , { "max_brake_torque_front" , rt_offsetof (
struct_hquwOvpzysS5ksrfqDad3B , max_brake_torque_front ) , 0 , 3 , 0 } , {
"max_brake_torque_rear" , rt_offsetof ( struct_hquwOvpzysS5ksrfqDad3B ,
max_brake_torque_rear ) , 0 , 3 , 0 } , { "brakeRatio" , rt_offsetof (
struct_hquwOvpzysS5ksrfqDad3B , brakeRatio ) , 0 , 3 , 0 } , {
"totBrakeTorque" , rt_offsetof ( struct_hquwOvpzysS5ksrfqDad3B ,
totBrakeTorque ) , 0 , 3 , 0 } , { "tau_br" , rt_offsetof (
struct_hquwOvpzysS5ksrfqDad3B , tau_br ) , 0 , 3 , 0 } , { "regularSignScale"
, rt_offsetof ( struct_hquwOvpzysS5ksrfqDad3B , regularSignScale ) , 0 , 3 ,
0 } , { "Vlow_long" , rt_offsetof ( struct_eecRm0WjdBFDPQYjgNpH3F , Vlow_long
) , 0 , 3 , 0 } , { "Vlow_lat" , rt_offsetof ( struct_eecRm0WjdBFDPQYjgNpH3F
, Vlow_lat ) , 0 , 3 , 0 } , { "Fz0" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , Fz0 ) , 0 , 3 , 0 } , { "R0" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , R0 ) , 0 , 3 , 0 } , { "pCx1" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , pCx1 ) , 0 , 3 , 0 } , { "pCy1" , rt_offsetof
( struct_5JuCLKSx3OjOQirRvNgS9G , pCy1 ) , 0 , 3 , 0 } , { "pDx1" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDx1 ) , 0 , 3 , 0 } , { "pDx2"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDx2 ) , 0 , 3 , 0 } , {
"pDx3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDx3 ) , 0 , 3 , 0 } ,
{ "pDy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDy1 ) , 0 , 3 , 0 }
, { "pDy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDy2 ) , 0 , 3 , 0
} , { "pDy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pDy3 ) , 0 , 3 ,
0 } , { "pEx1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEx1 ) , 0 , 3
, 0 } , { "pEx2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEx2 ) , 0 ,
3 , 0 } , { "pEx3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEx3 ) , 0
, 3 , 0 } , { "pEx4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEx4 ) ,
0 , 3 , 0 } , { "pEy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEy1 )
, 0 , 3 , 0 } , { "pEy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pEy2
) , 0 , 3 , 0 } , { "pEy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
pEy3 ) , 0 , 3 , 0 } , { "pEy4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G
, pEy4 ) , 0 , 3 , 0 } , { "pHx1" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , pHx1 ) , 0 , 3 , 0 } , { "pHx2" , rt_offsetof
( struct_5JuCLKSx3OjOQirRvNgS9G , pHx2 ) , 0 , 3 , 0 } , { "pHy1" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pHy1 ) , 0 , 3 , 0 } , { "pHy2"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pHy2 ) , 0 , 3 , 0 } , {
"pHy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pHy3 ) , 0 , 3 , 0 } ,
{ "pKx1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKx1 ) , 0 , 3 , 0 }
, { "pKx2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKx2 ) , 0 , 3 , 0
} , { "pKx3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKx3 ) , 0 , 3 ,
0 } , { "pKy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKy1 ) , 0 , 3
, 0 } , { "pKy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKy2 ) , 0 ,
3 , 0 } , { "pKy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pKy3 ) , 0
, 3 , 0 } , { "pVx1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pVx1 ) ,
0 , 3 , 0 } , { "pVx2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pVx2 )
, 0 , 3 , 0 } , { "pVy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , pVy1
) , 0 , 3 , 0 } , { "pVy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
pVy2 ) , 0 , 3 , 0 } , { "pVy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G
, pVy3 ) , 0 , 3 , 0 } , { "pVy4" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , pVy4 ) , 0 , 3 , 0 } , { "qBz1" , rt_offsetof
( struct_5JuCLKSx3OjOQirRvNgS9G , qBz1 ) , 0 , 3 , 0 } , { "qBz10" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz10 ) , 0 , 3 , 0 } , {
"qBz2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz2 ) , 0 , 3 , 0 } ,
{ "qBz3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz3 ) , 0 , 3 , 0 }
, { "qBz4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz4 ) , 0 , 3 , 0
} , { "qBz5" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz5 ) , 0 , 3 ,
0 } , { "qBz9" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qBz9 ) , 0 , 3
, 0 } , { "qCz1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qCz1 ) , 0 ,
3 , 0 } , { "qDz1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qDz1 ) , 0
, 3 , 0 } , { "qDz2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qDz2 ) ,
0 , 3 , 0 } , { "qDz3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qDz3 )
, 0 , 3 , 0 } , { "qDz4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qDz4
) , 0 , 3 , 0 } , { "qDz6" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
qDz6 ) , 0 , 3 , 0 } , { "qDz7" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G
, qDz7 ) , 0 , 3 , 0 } , { "qDz8" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , qDz8 ) , 0 , 3 , 0 } , { "qDz9" , rt_offsetof
( struct_5JuCLKSx3OjOQirRvNgS9G , qDz9 ) , 0 , 3 , 0 } , { "qEz1" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qEz1 ) , 0 , 3 , 0 } , { "qEz2"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qEz2 ) , 0 , 3 , 0 } , {
"qEz3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qEz3 ) , 0 , 3 , 0 } ,
{ "qEz4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qEz4 ) , 0 , 3 , 0 }
, { "qEz5" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qEz5 ) , 0 , 3 , 0
} , { "qHz1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qHz1 ) , 0 , 3 ,
0 } , { "qHz2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qHz2 ) , 0 , 3
, 0 } , { "qHz3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qHz3 ) , 0 ,
3 , 0 } , { "qHz4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , qHz4 ) , 0
, 3 , 0 } , { "rBx1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rBx1 ) ,
0 , 3 , 0 } , { "rBx2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rBx2 )
, 0 , 3 , 0 } , { "rBy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rBy1
) , 0 , 3 , 0 } , { "rBy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
rBy2 ) , 0 , 3 , 0 } , { "rBy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G
, rBy3 ) , 0 , 3 , 0 } , { "rCx1" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , rCx1 ) , 0 , 3 , 0 } , { "rCy1" , rt_offsetof
( struct_5JuCLKSx3OjOQirRvNgS9G , rCy1 ) , 0 , 3 , 0 } , { "rHx1" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rHx1 ) , 0 , 3 , 0 } , { "rHy1"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rHy1 ) , 0 , 3 , 0 } , {
"rVy1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy1 ) , 0 , 3 , 0 } ,
{ "rVy2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy2 ) , 0 , 3 , 0 }
, { "rVy3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy3 ) , 0 , 3 , 0
} , { "rVy4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy4 ) , 0 , 3 ,
0 } , { "rVy5" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy5 ) , 0 , 3
, 0 } , { "rVy6" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , rVy6 ) , 0 ,
3 , 0 } , { "sSz1" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , sSz1 ) , 0
, 3 , 0 } , { "sSz2" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , sSz2 ) ,
0 , 3 , 0 } , { "sSz3" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , sSz3 )
, 0 , 3 , 0 } , { "sSz4" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , sSz4
) , 0 , 3 , 0 } , { "lambda__Cx" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Cx ) , 0 , 3 , 0 } , { "lambda__Cy" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Cy ) , 0 , 3 , 0 } , {
"lambda__Ex" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Ex ) , 0
, 3 , 0 } , { "lambda__Ey" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
lambda__Ey ) , 0 , 3 , 0 } , { "lambda__Fz0" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Fz0 ) , 0 , 3 , 0 } , { "lambda__Hx"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Hx ) , 0 , 3 , 0 } ,
{ "lambda__Hy" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Hy ) ,
0 , 3 , 0 } , { "lambda__Kxk" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
lambda__Kxk ) , 0 , 3 , 0 } , { "lambda__Ky" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Ky ) , 0 , 3 , 0 } , { "lambda__Kya"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Kya ) , 0 , 3 , 0 } ,
{ "lambda__Mr" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Mr ) ,
0 , 3 , 0 } , { "lambda__Vx" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
lambda__Vx ) , 0 , 3 , 0 } , { "lambda__Vy" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Vy ) , 0 , 3 , 0 } , { "lambda__Vyk"
, rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__Vyk ) , 0 , 3 , 0 } ,
{ "lambda__gamma__y" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G ,
lambda__gamma__y ) , 0 , 3 , 0 } , { "lambda__mu__x" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__mu__x ) , 0 , 3 , 0 } , {
"lambda__mu__y" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__mu__y
) , 0 , 3 , 0 } , { "lambda__s" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G
, lambda__s ) , 0 , 3 , 0 } , { "lambda__t" , rt_offsetof (
struct_5JuCLKSx3OjOQirRvNgS9G , lambda__t ) , 0 , 3 , 0 } , { "lambda__xa" ,
rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__xa ) , 0 , 3 , 0 } , {
"lambda__yk" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , lambda__yk ) , 0
, 3 , 0 } , { "Fz01" , rt_offsetof ( struct_5JuCLKSx3OjOQirRvNgS9G , Fz01 ) ,
0 , 3 , 0 } , { "maxPower" , rt_offsetof ( struct_H2nwtcPvWoOjJyhrWtEKfE ,
maxPower ) , 0 , 3 , 0 } , { "Lf" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , Lf ) , 0 , 3 , 0 } , { "Lr" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , Lr ) , 0 , 3 , 0 } , { "L" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , L ) , 0 , 3 , 0 } , { "hGs" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , hGs ) , 0 , 3 , 0 } , { "Wf" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , Wf ) , 0 , 3 , 0 } , { "Wr" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , Wr ) , 0 , 3 , 0 } , { "lx" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , lx ) , 0 , 3 , 0 } , { "ly" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , ly ) , 0 , 3 , 0 } , { "m" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , m ) , 0 , 3 , 0 } , { "i_xx" , rt_offsetof (
struct_idlOjeEbND8QT96FWUxqj , i_xx ) , 0 , 3 , 0 } , { "i_yy" , rt_offsetof
( struct_idlOjeEbND8QT96FWUxqj , i_yy ) , 0 , 3 , 0 } , { "i_zz" ,
rt_offsetof ( struct_idlOjeEbND8QT96FWUxqj , i_zz ) , 0 , 3 , 0 } , { "i_xz"
, rt_offsetof ( struct_idlOjeEbND8QT96FWUxqj , i_xz ) , 0 , 3 , 0 } , { "g" ,
rt_offsetof ( struct_idlOjeEbND8QT96FWUxqj , g ) , 0 , 3 , 0 } , { "ms" ,
rt_offsetof ( struct_idlOjeEbND8QT96FWUxqj , ms ) , 0 , 3 , 0 } , { "chassis"
, rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , chassis ) , 2 , 3 , 0 } , {
"aerodynamics" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , aerodynamics )
, 3 , 3 , 0 } , { "transmission" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , transmission ) , 4 , 3 , 0 } , {
"steering_system" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB ,
steering_system ) , 5 , 3 , 0 } , { "rear_unsprung" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , rear_unsprung ) , 6 , 3 , 0 } , {
"front_unsprung" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB ,
front_unsprung ) , 6 , 3 , 0 } , { "rear_wheel" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , rear_wheel ) , 7 , 3 , 0 } , { "front_wheel"
, rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , front_wheel ) , 8 , 3 , 0 } ,
{ "suspension" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , suspension ) ,
9 , 3 , 0 } , { "rear_suspension" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , rear_suspension ) , 10 , 3 , 0 } , {
"front_suspension" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB ,
front_suspension ) , 11 , 3 , 0 } , { "motor" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , motor ) , 12 , 3 , 0 } , { "braking" ,
rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , braking ) , 13 , 3 , 0 } , {
"tire" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , tire ) , 14 , 3 , 0 }
, { "tyre_data_f" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , tyre_data_f
) , 15 , 3 , 0 } , { "tyre_data_r" , rt_offsetof (
struct_TffyZBIiIMpjESkplMpAxB , tyre_data_r ) , 15 , 3 , 0 } , {
"accumulator" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB , accumulator ) ,
16 , 3 , 0 } , { "vehicle" , rt_offsetof ( struct_TffyZBIiIMpjESkplMpAxB ,
vehicle ) , 17 , 3 , 0 } } ; static const rtwCAPI_DimensionMap rtDimensionMap
[ ] = { { rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 23 , 1 , 1 , 1 , 1 , 23 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.0001 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
19 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 43 ,
rtModelParameters , 8 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1253880540U , 3128183577U , 784115524U , 2032923447U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Vehicle_Model_2Track_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Vehicle_Model_2Track_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion
( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Vehicle_Model_2Track_host_InitializeDataMapInfo (
Vehicle_Model_2Track_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
