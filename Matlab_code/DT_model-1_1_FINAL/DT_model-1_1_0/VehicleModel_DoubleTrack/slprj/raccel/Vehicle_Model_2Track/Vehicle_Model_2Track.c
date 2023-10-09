#include "Vehicle_Model_2Track.h"
#include "rtwtypes.h"
#include "Vehicle_Model_2Track_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "Vehicle_Model_2Track_private.h"
#include "rt_logging_mmi.h"
#include "Vehicle_Model_2Track_capi.h"
#include "Vehicle_Model_2Track_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.9 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define h1elzvkwql (-1)
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T cvdfqotvpw ( real_T Tm_request , real_T
omega__wheel , real_T params_transmission_tau_red , real_T
params_transmission_eff_red , real_T params_motor_maxTorque , real_T
params_motor_speedForTorqueCut , real_T params_motor_maxRotSpeed , real_T
params_accumulator_maxPower ) ; static void kxvs5fe4yj ( real_T kappa ,
real_T phi , real_T Fz , const a0kxnfb3h0 * tyre_data , real_T * kappa__x ,
real_T * Bx , real_T * Cx , real_T * Dx , real_T * Ex , real_T * SVx , real_T
* Kxk ) ; static void g2npwespnp ( real_T u , real_T Omega , real_T kappa__rr
, real_T kappa__rl , real_T kappa__fr , real_T kappa__fl , real_T omega__rr ,
real_T omega__rl , real_T omega__fr , real_T omega__fl , real_T delta__fr ,
real_T delta__fl , real_T Fz__rr , real_T Fz__rl , real_T Fz__fr , real_T
Fz__fl , real_T gamma__rr , real_T gamma__rl , real_T gamma__fr , real_T
gamma__fl , const oilfipywik * b_vehicle_data , real_T * kappa__rr_corr ,
real_T * kappa__rl_corr , real_T * kappa__fr_corr , real_T * kappa__fl_corr )
; static void kjpd011q5n ( real_T kappa , real_T alpha , real_T phi , real_T
Fz , const a0kxnfb3h0 * tyre_data , real_T * Gxa , real_T * Gyk , real_T *
SVyk ) ; static real_T cyjnohd3ip ( real_T kappa , real_T alpha , real_T phi
, real_T Fz , const a0kxnfb3h0 * tyre_data ) ; static real_T mid0fak10y (
real_T alpha , real_T phi , real_T Fz , const a0kxnfb3h0 * tyre_data ) ;
static real_T d32el2qobw ( real_T kappa , real_T alpha , real_T phi , real_T
Fz , const a0kxnfb3h0 * tyre_data ) ; static void dror4fgqqt ( real_T
omega__rr , real_T omega__rl , real_T omega__fr , real_T omega__fl , real_T
Omega , real_T u , real_T delta__fr , real_T delta__fl , real_T
params_rear_wheel_Rr , real_T params_front_wheel_Rf , real_T
params_tire_Vlow_long , real_T params_vehicle_Lf , real_T params_vehicle_Wf ,
real_T params_vehicle_Wr , real_T * kappa__rr_ss , real_T * kappa__rl_ss ,
real_T * kappa__fr_ss , real_T * kappa__fl_ss ) ; static void o1ynddf4zi (
real_T Omega , real_T u , real_T v , real_T delta__fr , real_T delta__fl ,
real_T params_tire_Vlow_lat , real_T params_vehicle_Lf , real_T
params_vehicle_Lr , real_T params_vehicle_Wf , real_T params_vehicle_Wr ,
real_T * alpha__rr_ss , real_T * alpha__rl_ss , real_T * alpha__fr_ss ,
real_T * alpha__fl_ss ) ; static real_T cvdfqotvpw ( real_T Tm_request ,
real_T omega__wheel , real_T params_transmission_tau_red , real_T
params_transmission_eff_red , real_T params_motor_maxTorque , real_T
params_motor_speedForTorqueCut , real_T params_motor_maxRotSpeed , real_T
params_accumulator_maxPower ) { real_T Tw ; real_T maxPower_split ; real_T
omega__mot ; real_T omega_limit ; real_T omega_motTorqueCut ; real_T
omega_mot_max ; real_T slopeTorqueCut ; real_T torque_mot_at_max_speed ; if (
Tm_request < 0.0 ) { Tm_request = - Tm_request ; } omega__mot = omega__wheel
* params_transmission_tau_red ; maxPower_split = params_accumulator_maxPower
/ 2.0 ; if ( ( Tm_request <= params_motor_maxTorque ) && ( Tm_request >
0.0001 ) ) { omega_limit = maxPower_split * 1000.0 / Tm_request ; } else {
omega_limit = maxPower_split * 1000.0 / params_motor_maxTorque ; }
omega_mot_max = params_motor_maxRotSpeed * 3.1415926535897931 / 30.0 ;
omega_motTorqueCut = params_motor_speedForTorqueCut * 3.1415926535897931 /
30.0 ; torque_mot_at_max_speed = maxPower_split * 1000.0 / omega_motTorqueCut
; slopeTorqueCut = torque_mot_at_max_speed / ( omega_motTorqueCut -
omega_mot_max ) ; if ( ( omega__mot <= omega_limit ) && ( Tm_request <=
params_motor_maxTorque ) ) { if ( omega__mot > ( Tm_request -
torque_mot_at_max_speed ) / slopeTorqueCut + omega_motTorqueCut ) { Tw = ( (
omega__mot - omega_motTorqueCut ) * slopeTorqueCut + torque_mot_at_max_speed
) * params_transmission_tau_red * params_transmission_eff_red ; } else { Tw =
Tm_request * params_transmission_tau_red * params_transmission_eff_red ; } }
else if ( ( omega__mot > omega_limit ) && ( omega__mot <= omega_motTorqueCut
) ) { Tw = maxPower_split * 1000.0 * params_transmission_tau_red *
params_transmission_eff_red / omega__mot ; } else if ( ( omega__mot >
omega_motTorqueCut ) && ( omega__mot < omega_mot_max ) ) { Tw = ( (
omega__mot - omega_motTorqueCut ) * slopeTorqueCut + torque_mot_at_max_speed
) * params_transmission_tau_red * params_transmission_eff_red ; } else if ( (
omega__mot <= omega_limit ) && ( Tm_request > params_motor_maxTorque ) ) { Tw
= params_motor_maxTorque * params_transmission_tau_red *
params_transmission_eff_red ; } else { Tw = torque_mot_at_max_speed *
params_transmission_tau_red * params_transmission_eff_red ; } return Tw ; }
static void kxvs5fe4yj ( real_T kappa , real_T phi , real_T Fz , const
a0kxnfb3h0 * tyre_data , real_T * kappa__x , real_T * Bx , real_T * Cx ,
real_T * Dx , real_T * Ex , real_T * SVx , real_T * Kxk ) { real_T a ; real_T
dfz ; dfz = Fz / ( tyre_data -> lambda__Fz0 * tyre_data -> Fz0 ) - 1.0 ; *
SVx = ( dfz * tyre_data -> pVx2 + tyre_data -> pVx1 ) * Fz * tyre_data ->
lambda__Vx * tyre_data -> lambda__mu__x ; a = phi * tyre_data ->
lambda__gamma__y ; * kappa__x = ( dfz * tyre_data -> pHx2 + tyre_data -> pHx1
) * tyre_data -> lambda__Hx + kappa ; * Cx = tyre_data -> pCx1 * tyre_data ->
lambda__Cx ; * Dx = ( a * a * - tyre_data -> pDx3 + 1.0 ) * ( dfz * tyre_data
-> pDx2 + tyre_data -> pDx1 ) * tyre_data -> lambda__mu__x * Fz ; * Kxk = (
dfz * tyre_data -> pKx2 + tyre_data -> pKx1 ) * Fz * muDoubleScalarExp ( - (
tyre_data -> pKx3 * dfz ) ) * tyre_data -> lambda__Kxk ; * Ex = ( ( dfz * dfz
* tyre_data -> pEx3 + dfz * tyre_data -> pEx2 ) + tyre_data -> pEx1 ) * ( 1.0
- tyre_data -> pEx4 * muDoubleScalarSign ( * kappa__x ) ) * tyre_data ->
lambda__Ex ; * Bx = * Kxk / * Cx / * Dx ; } static void g2npwespnp ( real_T u
, real_T Omega , real_T kappa__rr , real_T kappa__rl , real_T kappa__fr ,
real_T kappa__fl , real_T omega__rr , real_T omega__rl , real_T omega__fr ,
real_T omega__fl , real_T delta__fr , real_T delta__fl , real_T Fz__rr ,
real_T Fz__rl , real_T Fz__fr , real_T Fz__fl , real_T gamma__rr , real_T
gamma__rl , real_T gamma__fr , real_T gamma__fl , const oilfipywik *
b_vehicle_data , real_T * kappa__rr_corr , real_T * kappa__rl_corr , real_T *
kappa__fr_corr , real_T * kappa__fl_corr ) { real_T CFk_rr ; real_T a__12 ;
real_T a__18 ; real_T a__24 ; real_T a__6 ; real_T kVlow ; kxvs5fe4yj (
kappa__rr , gamma__rr , Fz__rr , & b_vehicle_data -> tyre_data_r , & rtB .
a__1 , & rtB . a__2 , & rtB . a__3 , & kVlow , & rtB . a__5 , & a__6 , &
CFk_rr ) ; kxvs5fe4yj ( kappa__rl , gamma__rl , Fz__rl , & b_vehicle_data ->
tyre_data_r , & rtB . a__2 , & rtB . a__3 , & kVlow , & rtB . a__5 , & a__6 ,
& a__12 , & rtB . a__1 ) ; kxvs5fe4yj ( kappa__fr , gamma__fr , Fz__fr , &
b_vehicle_data -> tyre_data_f , & rtB . a__3 , & kVlow , & rtB . a__5 , &
a__6 , & a__12 , & a__18 , & rtB . a__2 ) ; kxvs5fe4yj ( kappa__fl ,
gamma__fl , Fz__fl , & b_vehicle_data -> tyre_data_f , & kVlow , & rtB . a__5
, & a__6 , & a__12 , & a__18 , & a__24 , & rtB . a__3 ) ; if (
muDoubleScalarAbs ( u ) <= b_vehicle_data -> tire . Vlow_long ) { kVlow = (
muDoubleScalarCos ( 3.1415926535897931 * muDoubleScalarAbs ( u ) /
b_vehicle_data -> tire . Vlow_long ) + 1.0 ) * 385.0 ; } else { kVlow = 0.0 ;
} * kappa__rr_corr = kappa__rr - ( ( Omega * b_vehicle_data -> vehicle . Wr /
2.0 + u ) - b_vehicle_data -> tyre_data_r . R0 * omega__rr ) * kVlow / CFk_rr
; * kappa__rl_corr = kappa__rl - ( ( - Omega * b_vehicle_data -> vehicle . Wr
/ 2.0 + u ) - b_vehicle_data -> tyre_data_r . R0 * omega__rl ) * kVlow / rtB
. a__1 ; * kappa__fr_corr = kappa__fr - ( ( ( 0.5 * Omega * b_vehicle_data ->
vehicle . Wf + u ) + b_vehicle_data -> vehicle . Lf * Omega * delta__fr ) -
b_vehicle_data -> tyre_data_f . R0 * omega__fr ) * kVlow / rtB . a__2 ; *
kappa__fl_corr = kappa__fl - ( ( ( - 0.5 * Omega * b_vehicle_data -> vehicle
. Wf + u ) + b_vehicle_data -> vehicle . Lf * Omega * delta__fl ) -
b_vehicle_data -> tyre_data_f . R0 * omega__fl ) * kVlow / rtB . a__3 ; }
static void kjpd011q5n ( real_T kappa , real_T alpha , real_T phi , real_T Fz
, const a0kxnfb3h0 * tyre_data , real_T * Gxa , real_T * Gyk , real_T * SVyk
) { real_T Bxa ; real_T gamma__s ; gamma__s = phi * tyre_data ->
lambda__gamma__y ; Bxa = muDoubleScalarPower ( kappa * kappa * ( tyre_data ->
rBx2 * tyre_data -> rBx2 ) + 1.0 , - 0.5 ) * tyre_data -> rBx1 * tyre_data ->
lambda__xa ; * Gxa = 1.0 / muDoubleScalarCos ( muDoubleScalarAtan ( Bxa *
tyre_data -> rHx1 ) * tyre_data -> rCx1 ) * muDoubleScalarCos (
muDoubleScalarAtan ( ( alpha + tyre_data -> rHx1 ) * Bxa ) * tyre_data ->
rCx1 ) ; * SVyk = ( ( Fz / ( tyre_data -> lambda__Fz0 * tyre_data -> Fz0 ) -
1.0 ) * tyre_data -> pDy2 + tyre_data -> pDy1 ) * ( gamma__s * gamma__s * -
tyre_data -> pDy3 + 1.0 ) * tyre_data -> lambda__mu__y * Fz * ( ( ( Fz / (
tyre_data -> lambda__Fz0 * tyre_data -> Fz0 ) - 1.0 ) * tyre_data -> rVy2 +
phi * tyre_data -> rVy3 ) + tyre_data -> rVy1 ) * muDoubleScalarPower ( alpha
* alpha * ( tyre_data -> rVy4 * tyre_data -> rVy4 ) + 1.0 , - 0.5 ) *
muDoubleScalarSin ( muDoubleScalarAtan ( tyre_data -> rVy6 * kappa ) *
tyre_data -> rVy5 ) * tyre_data -> lambda__Vyk ; gamma__s = alpha - tyre_data
-> rBy3 ; gamma__s = muDoubleScalarPower ( tyre_data -> rBy2 * tyre_data ->
rBy2 * ( gamma__s * gamma__s ) + 1.0 , - 0.5 ) * tyre_data -> rBy1 *
tyre_data -> lambda__yk ; * Gyk = 1.0 / muDoubleScalarCos (
muDoubleScalarAtan ( gamma__s * tyre_data -> rHy1 ) * tyre_data -> rCy1 ) *
muDoubleScalarCos ( muDoubleScalarAtan ( ( kappa + tyre_data -> rHy1 ) *
gamma__s ) * tyre_data -> rCy1 ) ; } static real_T cyjnohd3ip ( real_T kappa
, real_T alpha , real_T phi , real_T Fz , const a0kxnfb3h0 * tyre_data ) {
real_T Cx ; real_T SVyk ; real_T a ; real_T dfz ; real_T fx ; real_T kappa__x
; real_T t1 ; dfz = Fz / ( tyre_data -> lambda__Fz0 * tyre_data -> Fz0 ) -
1.0 ; a = phi * tyre_data -> lambda__gamma__y ; kappa__x = ( dfz * tyre_data
-> pHx2 + tyre_data -> pHx1 ) * tyre_data -> lambda__Hx + kappa ; Cx =
tyre_data -> pCx1 * tyre_data -> lambda__Cx ; a = ( a * a * - tyre_data ->
pDx3 + 1.0 ) * ( dfz * tyre_data -> pDx2 + tyre_data -> pDx1 ) * tyre_data ->
lambda__mu__x * Fz ; t1 = ( dfz * tyre_data -> pKx2 + tyre_data -> pKx1 ) *
Fz * muDoubleScalarExp ( - ( tyre_data -> pKx3 * dfz ) ) * tyre_data ->
lambda__Kxk / Cx / a * kappa__x ; kjpd011q5n ( kappa , alpha , phi , Fz ,
tyre_data , & rtB . Gxa_ezqlmfzvpq , & rtB . Gyk_bjvjhhzy4i , & SVyk ) ; fx =
( - muDoubleScalarSin ( muDoubleScalarAtan ( ( ( dfz * dfz * tyre_data ->
pEx3 + dfz * tyre_data -> pEx2 ) + tyre_data -> pEx1 ) * ( 1.0 - tyre_data ->
pEx4 * muDoubleScalarSign ( kappa__x ) ) * tyre_data -> lambda__Ex * ( t1 -
muDoubleScalarAtan ( t1 ) ) - t1 ) * Cx ) * a + ( dfz * tyre_data -> pVx2 +
tyre_data -> pVx1 ) * Fz * tyre_data -> lambda__Vx * tyre_data ->
lambda__mu__x ) * rtB . Gxa_ezqlmfzvpq ; return fx ; } static real_T
mid0fak10y ( real_T alpha , real_T phi , real_T Fz , const a0kxnfb3h0 *
tyre_data ) { real_T Cy ; real_T Dy ; real_T Fz01 ; real_T alpha__y ; real_T
dfz ; real_T gamma__s ; Fz01 = tyre_data -> lambda__Fz0 * tyre_data -> Fz0 ;
dfz = Fz / Fz01 - 1.0 ; gamma__s = phi * tyre_data -> lambda__gamma__y ;
alpha__y = ( ( dfz * tyre_data -> pHy2 + tyre_data -> pHy3 * gamma__s ) +
tyre_data -> pHy1 ) * tyre_data -> lambda__Hy + alpha ; Cy = tyre_data ->
pCy1 * tyre_data -> lambda__Cy ; Dy = ( gamma__s * gamma__s * - tyre_data ->
pDy3 + 1.0 ) * ( dfz * tyre_data -> pDy2 + tyre_data -> pDy1 ) * tyre_data ->
lambda__mu__y * Fz ; Fz01 = muDoubleScalarSin ( muDoubleScalarAtan ( Fz /
Fz01 / tyre_data -> pKy2 ) * 2.0 ) * ( Fz01 * tyre_data -> pKy1 ) * ( 1.0 -
tyre_data -> pKy3 * muDoubleScalarAbs ( gamma__s ) ) * tyre_data ->
lambda__Fz0 * tyre_data -> lambda__Kya / Cy / Dy * alpha__y ; return -
muDoubleScalarSin ( muDoubleScalarAtan ( ( 1.0 - ( tyre_data -> pEy4 *
gamma__s + tyre_data -> pEy3 ) * muDoubleScalarSign ( alpha__y ) ) * ( dfz *
tyre_data -> pEy2 + tyre_data -> pEy1 ) * tyre_data -> lambda__Ey * ( Fz01 -
muDoubleScalarAtan ( Fz01 ) ) - Fz01 ) * Cy ) * Dy + ( ( dfz * tyre_data ->
pVy4 + tyre_data -> pVy3 ) * gamma__s + ( tyre_data -> pVy2 * dfz + tyre_data
-> pVy1 ) ) * Fz * tyre_data -> lambda__Vy * tyre_data -> lambda__mu__y ; }
static real_T d32el2qobw ( real_T kappa , real_T alpha , real_T phi , real_T
Fz , const a0kxnfb3h0 * tyre_data ) { real_T mz ; kjpd011q5n ( kappa , alpha
, phi , Fz , tyre_data , & rtB . fy , & rtB . Gyk , & rtB . Fz01 ) ; if (
tyre_data -> sSz1 != 0.0 ) { kjpd011q5n ( kappa , alpha , phi , Fz ,
tyre_data , & rtB . fy , & rtB . Fz01 , & rtB . b_SVyk ) ; rtB . fy =
mid0fak10y ( alpha , phi , Fz , tyre_data ) * rtB . Fz01 + rtB . b_SVyk ; }
else { rtB . fy = 0.0 ; } rtB . Fz01 = tyre_data -> lambda__Fz0 * tyre_data
-> Fz0 ; rtB . b_dfz = Fz / rtB . Fz01 - 1.0 ; rtB . gamma__s = phi *
tyre_data -> lambda__gamma__y ; rtB . Cy = tyre_data -> pCy1 * tyre_data ->
lambda__Cy ; rtB . Fz01 = muDoubleScalarSin ( muDoubleScalarAtan ( Fz / rtB .
Fz01 / tyre_data -> pKy2 ) * 2.0 ) * ( rtB . Fz01 * tyre_data -> pKy1 ) * (
1.0 - tyre_data -> pKy3 * muDoubleScalarAbs ( rtB . gamma__s ) ) * tyre_data
-> lambda__Fz0 * tyre_data -> lambda__Kya ; kxvs5fe4yj ( kappa , phi , Fz ,
tyre_data , & rtB . dfz , & rtB . gamma__z , & rtB . Cx , & rtB . Dx , & rtB
. Ex , & rtB . SVx , & rtB . b_SVyk ) ; rtB . dfz = Fz / ( tyre_data ->
lambda__Fz0 * tyre_data -> Fz0 ) - 1.0 ; rtB . gamma__z = phi * tyre_data ->
lambda__gamma__y ; rtB . Cx = ( ( rtB . dfz * tyre_data -> qHz4 + tyre_data
-> qHz3 ) * rtB . gamma__z + ( tyre_data -> qHz2 * rtB . dfz + tyre_data ->
qHz1 ) ) + alpha ; rtB . Ex = ( ( ( rtB . b_dfz * tyre_data -> pVy4 +
tyre_data -> pVy3 ) * rtB . gamma__s + ( tyre_data -> pVy2 * rtB . b_dfz +
tyre_data -> pVy1 ) ) * Fz * tyre_data -> lambda__Vy * tyre_data ->
lambda__mu__y / rtB . Fz01 + ( ( rtB . b_dfz * tyre_data -> pHy2 + tyre_data
-> pHy3 * rtB . gamma__s ) + tyre_data -> pHy1 ) * tyre_data -> lambda__Hy )
+ alpha ; rtB . Dx = ( ( rtB . dfz * rtB . dfz * tyre_data -> qBz3 + rtB .
dfz * tyre_data -> qBz2 ) + tyre_data -> qBz1 ) * ( ( tyre_data -> qBz4 * rtB
. gamma__z + 1.0 ) + tyre_data -> qBz5 * muDoubleScalarAbs ( rtB . gamma__z )
) * tyre_data -> lambda__Ky / tyre_data -> lambda__mu__y ; rtB . b_dfz = rtB
. Fz01 / rtB . Cy / ( ( rtB . gamma__s * rtB . gamma__s * - tyre_data -> pDy3
+ 1.0 ) * ( rtB . b_dfz * tyre_data -> pDy2 + tyre_data -> pDy1 ) * tyre_data
-> lambda__mu__y * Fz ) * tyre_data -> qBz10 * rtB . Cy + tyre_data -> qBz9 *
tyre_data -> lambda__Ky / tyre_data -> lambda__mu__y ; rtB . gamma__s =
muDoubleScalarTan ( rtB . Cx ) ; rtB . Cy = muDoubleScalarTan ( rtB . Ex ) ;
rtB . Cy = muDoubleScalarAtan ( muDoubleScalarSqrt ( rtB . b_SVyk * rtB .
b_SVyk / ( rtB . Fz01 * rtB . Fz01 ) * ( kappa * kappa ) + rtB . Cy * rtB .
Cy ) ) * muDoubleScalarSign ( rtB . Ex ) ; rtB . Fz01 = muDoubleScalarAtan (
muDoubleScalarSqrt ( rtB . b_SVyk * rtB . b_SVyk / ( rtB . Fz01 * rtB . Fz01
) * ( kappa * kappa ) + rtB . gamma__s * rtB . gamma__s ) ) *
muDoubleScalarSign ( rtB . Cx ) * rtB . Dx ; mz = ( ( ( tyre_data -> sSz2 *
rtB . fy / tyre_data -> Fz0 + tyre_data -> sSz1 ) + ( rtB . dfz * tyre_data
-> sSz4 + tyre_data -> sSz3 ) * rtB . gamma__z ) * tyre_data -> R0 *
tyre_data -> lambda__s * cyjnohd3ip ( kappa , alpha , phi , Fz , tyre_data )
- muDoubleScalarCos ( muDoubleScalarAtan ( ( ( rtB . dfz * rtB . dfz *
tyre_data -> qEz3 + rtB . dfz * tyre_data -> qEz2 ) + tyre_data -> qEz1 ) * (
( tyre_data -> qEz5 * rtB . gamma__z + tyre_data -> qEz4 ) *
muDoubleScalarAtan ( rtB . Dx * tyre_data -> qCz1 * rtB . Cx ) + 1.0 ) * (
rtB . Fz01 - muDoubleScalarAtan ( rtB . Fz01 ) ) - rtB . Fz01 ) * tyre_data
-> qCz1 ) * muDoubleScalarCos ( alpha ) * ( ( ( rtB . gamma__z * rtB .
gamma__z * tyre_data -> qDz4 + tyre_data -> qDz3 * rtB . gamma__z ) + 1.0 ) *
( ( rtB . dfz * tyre_data -> qDz2 + tyre_data -> qDz1 ) * Fz ) * tyre_data ->
R0 / tyre_data -> Fz0 * tyre_data -> lambda__t ) * ( mid0fak10y ( alpha , phi
, Fz , tyre_data ) * rtB . Gyk ) ) + ( ( rtB . dfz * tyre_data -> qDz9 +
tyre_data -> qDz8 ) * rtB . gamma__z + ( tyre_data -> qDz7 * rtB . dfz +
tyre_data -> qDz6 ) ) * Fz * tyre_data -> R0 * tyre_data -> lambda__mu__y *
tyre_data -> lambda__Mr * ( muDoubleScalarCos ( alpha ) / muDoubleScalarSqrt
( rtB . Cy * rtB . Cy * ( rtB . b_dfz * rtB . b_dfz ) + 1.0 ) ) ; return mz ;
} static void dror4fgqqt ( real_T omega__rr , real_T omega__rl , real_T
omega__fr , real_T omega__fl , real_T Omega , real_T u , real_T delta__fr ,
real_T delta__fl , real_T params_rear_wheel_Rr , real_T params_front_wheel_Rf
, real_T params_tire_Vlow_long , real_T params_vehicle_Lf , real_T
params_vehicle_Wf , real_T params_vehicle_Wr , real_T * kappa__rr_ss , real_T
* kappa__rl_ss , real_T * kappa__fr_ss , real_T * kappa__fl_ss ) { real_T
V_cx_rr ; V_cx_rr = Omega * params_vehicle_Wr / 2.0 + u ; if ( V_cx_rr >
params_tire_Vlow_long ) { * kappa__rr_ss = - ( V_cx_rr - params_rear_wheel_Rr
* omega__rr ) / V_cx_rr ; } else { * kappa__rr_ss = ( V_cx_rr -
params_rear_wheel_Rr * omega__rr ) * - 2.0 / ( V_cx_rr * V_cx_rr /
params_tire_Vlow_long + params_tire_Vlow_long ) ; } V_cx_rr = - Omega *
params_vehicle_Wr / 2.0 + u ; if ( V_cx_rr > params_tire_Vlow_long ) { *
kappa__rl_ss = - ( V_cx_rr - params_rear_wheel_Rr * omega__rl ) / V_cx_rr ; }
else { * kappa__rl_ss = ( V_cx_rr - params_rear_wheel_Rr * omega__rl ) * -
2.0 / ( V_cx_rr * V_cx_rr / params_tire_Vlow_long + params_tire_Vlow_long ) ;
} V_cx_rr = ( 0.5 * Omega * params_vehicle_Wf + u ) + params_vehicle_Lf *
Omega * delta__fr ; if ( V_cx_rr > params_tire_Vlow_long ) { * kappa__fr_ss =
- ( V_cx_rr - params_front_wheel_Rf * omega__fr ) / V_cx_rr ; } else { *
kappa__fr_ss = ( V_cx_rr - params_front_wheel_Rf * omega__fr ) * - 2.0 / (
V_cx_rr * V_cx_rr / params_tire_Vlow_long + params_tire_Vlow_long ) ; }
V_cx_rr = ( - 0.5 * Omega * params_vehicle_Wf + u ) + params_vehicle_Lf *
Omega * delta__fl ; if ( V_cx_rr > params_tire_Vlow_long ) { * kappa__fl_ss =
- ( V_cx_rr - params_front_wheel_Rf * omega__fl ) / V_cx_rr ; } else { *
kappa__fl_ss = ( V_cx_rr - params_front_wheel_Rf * omega__fl ) * - 2.0 / (
V_cx_rr * V_cx_rr / params_tire_Vlow_long + params_tire_Vlow_long ) ; } }
static void o1ynddf4zi ( real_T Omega , real_T u , real_T v , real_T
delta__fr , real_T delta__fl , real_T params_tire_Vlow_lat , real_T
params_vehicle_Lf , real_T params_vehicle_Lr , real_T params_vehicle_Wf ,
real_T params_vehicle_Wr , real_T * alpha__rr_ss , real_T * alpha__rl_ss ,
real_T * alpha__fr_ss , real_T * alpha__fl_ss ) { real_T V_cx_rr ; V_cx_rr =
Omega * params_vehicle_Wr / 2.0 + u ; if ( muDoubleScalarAbs ( V_cx_rr ) <=
params_tire_Vlow_lat ) { * alpha__rr_ss = - muDoubleScalarAtan ( ( -
params_vehicle_Lr * Omega + v ) * 2.0 / ( V_cx_rr * V_cx_rr /
params_tire_Vlow_lat + params_tire_Vlow_lat ) ) ; } else { * alpha__rr_ss = -
muDoubleScalarAtan ( ( - params_vehicle_Lr * Omega + v ) / muDoubleScalarAbs
( V_cx_rr ) ) ; } V_cx_rr = - Omega * params_vehicle_Wr / 2.0 + u ; if (
muDoubleScalarAbs ( V_cx_rr ) <= params_tire_Vlow_lat ) { * alpha__rl_ss = -
muDoubleScalarAtan ( ( - params_vehicle_Lr * Omega + v ) * 2.0 / ( V_cx_rr *
V_cx_rr / params_tire_Vlow_lat + params_tire_Vlow_lat ) ) ; } else { *
alpha__rl_ss = - muDoubleScalarAtan ( ( - params_vehicle_Lr * Omega + v ) /
muDoubleScalarAbs ( V_cx_rr ) ) ; } V_cx_rr = ( 0.5 * Omega *
params_vehicle_Wf + u ) + params_vehicle_Lf * Omega * delta__fr ; if (
muDoubleScalarAbs ( V_cx_rr ) <= params_tire_Vlow_lat ) { * alpha__fr_ss = -
muDoubleScalarAtan ( ( ( Omega * params_vehicle_Lf + v ) - ( Omega *
params_vehicle_Wf + 2.0 * u ) * delta__fr / 2.0 ) * 2.0 / ( V_cx_rr * V_cx_rr
/ params_tire_Vlow_lat + params_tire_Vlow_lat ) ) ; } else { * alpha__fr_ss =
- muDoubleScalarAtan ( ( ( Omega * params_vehicle_Lf + v ) - ( Omega *
params_vehicle_Wf + 2.0 * u ) * delta__fr / 2.0 ) / muDoubleScalarAbs (
V_cx_rr ) ) ; } V_cx_rr = ( - 0.5 * Omega * params_vehicle_Wf + u ) +
params_vehicle_Lf * Omega * delta__fl ; if ( muDoubleScalarAbs ( V_cx_rr ) <=
params_tire_Vlow_lat ) { * alpha__fl_ss = - muDoubleScalarAtan ( ( ( ( Omega
* params_vehicle_Wf - 2.0 * u ) * delta__fl / 2.0 + Omega * params_vehicle_Lf
) + v ) * 2.0 / ( V_cx_rr * V_cx_rr / params_tire_Vlow_lat +
params_tire_Vlow_lat ) ) ; } else { * alpha__fl_ss = - muDoubleScalarAtan ( (
( ( Omega * params_vehicle_Wf - 2.0 * u ) * delta__fl / 2.0 + Omega *
params_vehicle_Lf ) + v ) / muDoubleScalarAbs ( V_cx_rr ) ) ; } } void
MdlInitialize ( void ) { rtX . bin4mpd0lm = rtP .
PIDController_InitialConditionForIntegrator ; rtX . ewdvz44yjg = rtP .
PIDController_InitialConditionForFilter ; memcpy ( & rtDW . d3fbkn3bca [ 0 ]
, & rtP . X0 [ 0 ] , 23U * sizeof ( real_T ) ) ; memcpy ( & rtDW . b2axcahws4
[ 0 ] , & rtP . UnitDelay_InitialCondition [ 0 ] , 23U * sizeof ( real_T ) )
; rtDW . dqq0avvguz = rtP . DiscreteDerivative_ICPrevScaledInput ; rtDW .
djnugtodz0 = rtP . DiscreteDerivative1_ICPrevScaledInput ; rtDW . dsjvzjmnow
= h1elzvkwql ; rtDW . lqejqoyonp = 0U ; rtDW . jowpdqkr40 = h1elzvkwql ; rtDW
. milaeogcvv = 0U ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars ( "Vehicle_Model_2Track/To Workspace1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 2 ] = { "" , "" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 2 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] . signalName =
sdiGetLabelFromChars ( ".ped_0" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".delta_D" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims
. dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ed14733d-2b33-4f15-be7c-71edb1ed9e5e" , 2 , leafElInfo , & rtDW . j321etzcwb
. AQHandles [ 0 ] , 1 , 0 , "Bus\nCreator1" , "" , "Bus\nCreator1" ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & rtDW . j321etzcwb . AQHandles [ 0
] , 2 * sizeof ( & rtDW . j321etzcwb . AQHandles [ 0 ] ) ) ; if ( rtDW .
j321etzcwb . AQHandles [ 0 ] ) { sdiLabelU loggedName = sdiGetLabelFromChars
( "Bus\nCreator1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Bus\nCreator1" ) ;
sdiSetSignalSampleTimeString ( rtDW . j321etzcwb . AQHandles [ 0 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . j321etzcwb .
AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . j321etzcwb . AQHandles
[ 0 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . j321etzcwb . AQHandles [ 0 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . j321etzcwb . AQHandles [ 0 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. j321etzcwb . AQHandles [ 0 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
j321etzcwb . AQHandles [ 1 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . j321etzcwb . AQHandles [ 1 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . j321etzcwb . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . j321etzcwb .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
j321etzcwb . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . j321etzcwb . AQHandles [ 1 ] ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName (
leafElInfo [ 0 ] . signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "inputs" ) ; sdiRegisterWksVariable ( rtDW .
j321etzcwb . AQHandles [ 0 ] , varName , "timeseries" ) ; sdiFreeLabel (
varName ) ; } } } } } { { { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Vehicle_Model_2Track/Extract and Save States/Demux1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 15 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
rtDW . eqsmgxfrzv . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1a4a8d26-9355-4102-a82f-3648f04af2c9" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . eqsmgxfrzv . AQHandles , hDT , & srcInfo ) ; if ( rtDW . eqsmgxfrzv .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . eqsmgxfrzv . AQHandles ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
eqsmgxfrzv . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . eqsmgxfrzv .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . eqsmgxfrzv . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . eqsmgxfrzv . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Vehicle_Model_2Track/Extract and Save States/Demux1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 16 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . b5xx0e2w04 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3148c4f0-d627-4bcb-a141-5adafa546ea3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . b5xx0e2w04 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . b5xx0e2w04 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . b5xx0e2w04 . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . b5xx0e2w04 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . b5xx0e2w04 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
b5xx0e2w04 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
b5xx0e2w04 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Vehicle_Model_2Track/Extract and Save States/Demux1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 17 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bk33az04mk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "889efa81-5c4d-4b7f-8562-7b9bf987becd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . bk33az04mk . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . bk33az04mk . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . bk33az04mk . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . bk33az04mk .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . bk33az04mk . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
bk33az04mk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
bk33az04mk . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Vehicle_Model_2Track/Extract and Save States/Demux1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 18 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kvnkak3jpy . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "375e4be7-ed3c-4cfa-bbcd-90233fb8d07c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . kvnkak3jpy . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . kvnkak3jpy . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . kvnkak3jpy . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kvnkak3jpy .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . kvnkak3jpy . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
kvnkak3jpy . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
kvnkak3jpy . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "u" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "u" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Vehicle_Model_2Track/Extract and Save States/Demux1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "u" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 3 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . n1rq3xz5qe . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "bc6dc415-f8ec-423d-a5a8-bc20f1edf6e0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . n1rq3xz5qe . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . n1rq3xz5qe . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . n1rq3xz5qe . AQHandles , "0.0001" ,
0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . n1rq3xz5qe .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . n1rq3xz5qe . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
n1rq3xz5qe . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
n1rq3xz5qe . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Vehicle_Model_2Track/Extract and Save States/To Workspace" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 23 ] = { "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 23 ]
; int_T childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ;
int_T childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ;
int_T childDimsArray4 [ 1 ] = { 1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ;
int_T childDimsArray6 [ 1 ] = { 1 } ; int_T childDimsArray7 [ 1 ] = { 1 } ;
int_T childDimsArray8 [ 1 ] = { 1 } ; int_T childDimsArray9 [ 1 ] = { 1 } ;
int_T childDimsArray10 [ 1 ] = { 1 } ; int_T childDimsArray11 [ 1 ] = { 1 } ;
int_T childDimsArray12 [ 1 ] = { 1 } ; int_T childDimsArray13 [ 1 ] = { 1 } ;
int_T childDimsArray14 [ 1 ] = { 1 } ; int_T childDimsArray15 [ 1 ] = { 1 } ;
int_T childDimsArray16 [ 1 ] = { 1 } ; int_T childDimsArray17 [ 1 ] = { 1 } ;
int_T childDimsArray18 [ 1 ] = { 1 } ; int_T childDimsArray19 [ 1 ] = { 1 } ;
int_T childDimsArray20 [ 1 ] = { 1 } ; int_T childDimsArray21 [ 1 ] = { 1 } ;
int_T childDimsArray22 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".x" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims .
dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 0 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".y" ) ; leafElInfo [ 1 ] . dims . nDims
= 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1
] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 0 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".psi" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims .
dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 0 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] .
signalName = sdiGetLabelFromChars ( ".u" ) ; leafElInfo [ 3 ] . dims . nDims
= 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3
] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 0 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".v" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims .
dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] .
signalName = sdiGetLabelFromChars ( ".Omega" ) ; leafElInfo [ 5 ] . dims .
nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 0 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".Fz_rr" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo [ 6 ] . dims .
dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 0 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".Fz_rl" ) ; leafElInfo [ 7 ] . dims .
nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions = childDimsArray7 ;
leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 7 ] .
complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 0 ; leafElInfo [ 7 ]
. units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 8 ]
. hDataType = hDT ; leafElInfo [ 8 ] . signalName = sdiGetLabelFromChars (
".Fz_fr" ) ; leafElInfo [ 8 ] . dims . nDims = 1 ; leafElInfo [ 8 ] . dims .
dimensions = childDimsArray8 ; leafElInfo [ 8 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] . complexity = REAL ; leafElInfo [ 8
] . isLinearInterp = 0 ; leafElInfo [ 8 ] . units = leafUnits [ 8 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ] . hDataType = hDT ; leafElInfo [ 9 ] .
signalName = sdiGetLabelFromChars ( ".Fz_fl" ) ; leafElInfo [ 9 ] . dims .
nDims = 1 ; leafElInfo [ 9 ] . dims . dimensions = childDimsArray9 ;
leafElInfo [ 9 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] .
complexity = REAL ; leafElInfo [ 9 ] . isLinearInterp = 0 ; leafElInfo [ 9 ]
. units = leafUnits [ 9 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ]
. hDataType = hDT ; leafElInfo [ 10 ] . signalName = sdiGetLabelFromChars (
".delta" ) ; leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims
. dimensions = childDimsArray10 ; leafElInfo [ 10 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [
10 ] . isLinearInterp = 0 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".omega_rr" ) ; leafElInfo [ 11 ] .
dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions = childDimsArray11 ;
leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 11 ] .
complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp = 0 ; leafElInfo [ 11
] . units = leafUnits [ 11 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 12 ]
. hDataType = hDT ; leafElInfo [ 12 ] . signalName = sdiGetLabelFromChars (
".omega_rl" ) ; leafElInfo [ 12 ] . dims . nDims = 1 ; leafElInfo [ 12 ] .
dims . dimensions = childDimsArray12 ; leafElInfo [ 12 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 12 ] . complexity = REAL ; leafElInfo [
12 ] . isLinearInterp = 0 ; leafElInfo [ 12 ] . units = leafUnits [ 12 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 13 ] . hDataType = hDT ; leafElInfo [ 13 ]
. signalName = sdiGetLabelFromChars ( ".omega_fr" ) ; leafElInfo [ 13 ] .
dims . nDims = 1 ; leafElInfo [ 13 ] . dims . dimensions = childDimsArray13 ;
leafElInfo [ 13 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 13 ] .
complexity = REAL ; leafElInfo [ 13 ] . isLinearInterp = 0 ; leafElInfo [ 13
] . units = leafUnits [ 13 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 14 ]
. hDataType = hDT ; leafElInfo [ 14 ] . signalName = sdiGetLabelFromChars (
".omega_fl" ) ; leafElInfo [ 14 ] . dims . nDims = 1 ; leafElInfo [ 14 ] .
dims . dimensions = childDimsArray14 ; leafElInfo [ 14 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 14 ] . complexity = REAL ; leafElInfo [
14 ] . isLinearInterp = 0 ; leafElInfo [ 14 ] . units = leafUnits [ 14 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 15 ] . hDataType = hDT ; leafElInfo [ 15 ]
. signalName = sdiGetLabelFromChars ( ".alpha_rr" ) ; leafElInfo [ 15 ] .
dims . nDims = 1 ; leafElInfo [ 15 ] . dims . dimensions = childDimsArray15 ;
leafElInfo [ 15 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 15 ] .
complexity = REAL ; leafElInfo [ 15 ] . isLinearInterp = 0 ; leafElInfo [ 15
] . units = leafUnits [ 15 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 16 ]
. hDataType = hDT ; leafElInfo [ 16 ] . signalName = sdiGetLabelFromChars (
".alpha_rl" ) ; leafElInfo [ 16 ] . dims . nDims = 1 ; leafElInfo [ 16 ] .
dims . dimensions = childDimsArray16 ; leafElInfo [ 16 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 16 ] . complexity = REAL ; leafElInfo [
16 ] . isLinearInterp = 0 ; leafElInfo [ 16 ] . units = leafUnits [ 16 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 17 ] . hDataType = hDT ; leafElInfo [ 17 ]
. signalName = sdiGetLabelFromChars ( ".alpha_fr" ) ; leafElInfo [ 17 ] .
dims . nDims = 1 ; leafElInfo [ 17 ] . dims . dimensions = childDimsArray17 ;
leafElInfo [ 17 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 17 ] .
complexity = REAL ; leafElInfo [ 17 ] . isLinearInterp = 0 ; leafElInfo [ 17
] . units = leafUnits [ 17 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 18 ]
. hDataType = hDT ; leafElInfo [ 18 ] . signalName = sdiGetLabelFromChars (
".alpha_fl" ) ; leafElInfo [ 18 ] . dims . nDims = 1 ; leafElInfo [ 18 ] .
dims . dimensions = childDimsArray18 ; leafElInfo [ 18 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 18 ] . complexity = REAL ; leafElInfo [
18 ] . isLinearInterp = 0 ; leafElInfo [ 18 ] . units = leafUnits [ 18 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 19 ] . hDataType = hDT ; leafElInfo [ 19 ]
. signalName = sdiGetLabelFromChars ( ".kappa_rr" ) ; leafElInfo [ 19 ] .
dims . nDims = 1 ; leafElInfo [ 19 ] . dims . dimensions = childDimsArray19 ;
leafElInfo [ 19 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 19 ] .
complexity = REAL ; leafElInfo [ 19 ] . isLinearInterp = 0 ; leafElInfo [ 19
] . units = leafUnits [ 19 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 20 ]
. hDataType = hDT ; leafElInfo [ 20 ] . signalName = sdiGetLabelFromChars (
".kappa_rl" ) ; leafElInfo [ 20 ] . dims . nDims = 1 ; leafElInfo [ 20 ] .
dims . dimensions = childDimsArray20 ; leafElInfo [ 20 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 20 ] . complexity = REAL ; leafElInfo [
20 ] . isLinearInterp = 0 ; leafElInfo [ 20 ] . units = leafUnits [ 20 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 21 ] . hDataType = hDT ; leafElInfo [ 21 ]
. signalName = sdiGetLabelFromChars ( ".kappa_fr" ) ; leafElInfo [ 21 ] .
dims . nDims = 1 ; leafElInfo [ 21 ] . dims . dimensions = childDimsArray21 ;
leafElInfo [ 21 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 21 ] .
complexity = REAL ; leafElInfo [ 21 ] . isLinearInterp = 0 ; leafElInfo [ 21
] . units = leafUnits [ 21 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 22 ]
. hDataType = hDT ; leafElInfo [ 22 ] . signalName = sdiGetLabelFromChars (
".kappa_fl" ) ; leafElInfo [ 22 ] . dims . nDims = 1 ; leafElInfo [ 22 ] .
dims . dimensions = childDimsArray22 ; leafElInfo [ 22 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 22 ] . complexity = REAL ; leafElInfo [
22 ] . isLinearInterp = 0 ; leafElInfo [ 22 ] . units = leafUnits [ 22 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c7c0adb1-2686-4da2-8918-5631522c0e34" , 23 , leafElInfo , & rtDW .
aufl3dtfm4 . AQHandles [ 0 ] , 1 , 0 , "Bus\nCreator1" , "" , "Bus\nCreator1"
) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & rtDW . aufl3dtfm4 . AQHandles
[ 0 ] , 23 * sizeof ( & rtDW . aufl3dtfm4 . AQHandles [ 0 ] ) ) ; if ( rtDW .
aufl3dtfm4 . AQHandles [ 0 ] ) { sdiLabelU loggedName = sdiGetLabelFromChars
( "Bus\nCreator1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Bus\nCreator1" ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 0 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 .
AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles
[ 0 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . aufl3dtfm4 . AQHandles [ 0 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [ 0 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. aufl3dtfm4 . AQHandles [ 0 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
aufl3dtfm4 . AQHandles [ 1 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 1 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 1 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 2 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 .
AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles
[ 2 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . aufl3dtfm4 . AQHandles [ 2 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [ 2 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. aufl3dtfm4 . AQHandles [ 2 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
aufl3dtfm4 . AQHandles [ 3 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 3 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 3 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 3 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 4 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 .
AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles
[ 4 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . aufl3dtfm4 . AQHandles [ 4 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [ 4 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. aufl3dtfm4 . AQHandles [ 4 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
aufl3dtfm4 . AQHandles [ 5 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 5 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 5 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 5 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 5 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 6 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 .
AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles
[ 6 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . aufl3dtfm4 . AQHandles [ 6 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [ 6 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. aufl3dtfm4 . AQHandles [ 6 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
aufl3dtfm4 . AQHandles [ 7 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 7 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 7 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 7 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 7 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 8 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 .
AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles
[ 8 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . aufl3dtfm4 . AQHandles [ 8 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [ 8 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. aufl3dtfm4 . AQHandles [ 8 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
aufl3dtfm4 . AQHandles [ 9 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 9 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 9 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 9 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 9 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 10 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 10 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 10 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
10 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 10 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 11 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 11 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 11 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 11 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 11 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 12 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 12 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 12 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 12 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
12 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 12 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 13 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 13 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 13 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 13 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 13 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 13 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 14 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 14 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 14 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 14 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
14 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 14 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 15 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 15 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 15 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 15 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 15 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 15 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 16 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 16 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 16 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 16 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
16 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 16 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 17 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 17 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 17 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 17 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 17 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 17 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 18 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 18 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 18 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 18 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
18 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 18 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 19 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 19 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 19 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 19 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 19 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 19 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 20 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 20 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 20 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 20 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
20 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 20 ] ) ; sdiSetSignalSampleTimeString (
rtDW . aufl3dtfm4 . AQHandles [ 21 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . aufl3dtfm4 . AQHandles [ 21 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . aufl3dtfm4 . AQHandles [ 21 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 .
AQHandles [ 21 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
aufl3dtfm4 . AQHandles [ 21 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . aufl3dtfm4 . AQHandles [ 21 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . aufl3dtfm4 . AQHandles [ 22 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
aufl3dtfm4 . AQHandles [ 22 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
aufl3dtfm4 . AQHandles [ 22 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . aufl3dtfm4 . AQHandles [ 22 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aufl3dtfm4 . AQHandles [
22 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . aufl3dtfm4 . AQHandles [ 22 ] ) ; sdiFreeLabel ( loggedName ) ;
sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName ( leafElInfo [ 2
] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo [ 5
] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; sdiFreeName ( leafElInfo [ 12 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 13 ] . signalName ) ; sdiFreeName ( leafElInfo [
14 ] . signalName ) ; sdiFreeName ( leafElInfo [ 15 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 16 ] . signalName ) ; sdiFreeName ( leafElInfo [
17 ] . signalName ) ; sdiFreeName ( leafElInfo [ 18 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 19 ] . signalName ) ; sdiFreeName ( leafElInfo [
20 ] . signalName ) ; sdiFreeName ( leafElInfo [ 21 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 22 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"states" ) ; sdiRegisterWksVariable ( rtDW . aufl3dtfm4 . AQHandles [ 0 ] ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Vehicle_Model_2Track/Params To Workspace/To Workspace2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 23 ] = { "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 23 ]
; int_T childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ;
int_T childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ;
int_T childDimsArray4 [ 1 ] = { 1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ;
int_T childDimsArray6 [ 1 ] = { 1 } ; int_T childDimsArray7 [ 1 ] = { 1 } ;
int_T childDimsArray8 [ 1 ] = { 1 } ; int_T childDimsArray9 [ 1 ] = { 1 } ;
int_T childDimsArray10 [ 1 ] = { 1 } ; int_T childDimsArray11 [ 1 ] = { 1 } ;
int_T childDimsArray12 [ 1 ] = { 1 } ; int_T childDimsArray13 [ 1 ] = { 1 } ;
int_T childDimsArray14 [ 1 ] = { 1 } ; int_T childDimsArray15 [ 1 ] = { 1 } ;
int_T childDimsArray16 [ 1 ] = { 1 } ; int_T childDimsArray17 [ 1 ] = { 1 } ;
int_T childDimsArray18 [ 1 ] = { 1 } ; int_T childDimsArray19 [ 1 ] = { 1 } ;
int_T childDimsArray20 [ 1 ] = { 1 } ; int_T childDimsArray21 [ 1 ] = { 1 } ;
int_T childDimsArray22 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".Tw_rr" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims .
dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".Tw_rl" ) ; leafElInfo [ 1 ] . dims .
nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ;
leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".Tw_fr" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims .
dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] .
signalName = sdiGetLabelFromChars ( ".Tw_fl" ) ; leafElInfo [ 3 ] . dims .
nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".Fx_rr" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims .
dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 1 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] .
signalName = sdiGetLabelFromChars ( ".Fx_rl" ) ; leafElInfo [ 5 ] . dims .
nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".Fx_fr" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo [ 6 ] . dims .
dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 1 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".Fx_fl" ) ; leafElInfo [ 7 ] . dims .
nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions = childDimsArray7 ;
leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 7 ] .
complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 1 ; leafElInfo [ 7 ]
. units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 8 ]
. hDataType = hDT ; leafElInfo [ 8 ] . signalName = sdiGetLabelFromChars (
".Fy_rr" ) ; leafElInfo [ 8 ] . dims . nDims = 1 ; leafElInfo [ 8 ] . dims .
dimensions = childDimsArray8 ; leafElInfo [ 8 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] . complexity = REAL ; leafElInfo [ 8
] . isLinearInterp = 1 ; leafElInfo [ 8 ] . units = leafUnits [ 8 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ] . hDataType = hDT ; leafElInfo [ 9 ] .
signalName = sdiGetLabelFromChars ( ".Fy_rl" ) ; leafElInfo [ 9 ] . dims .
nDims = 1 ; leafElInfo [ 9 ] . dims . dimensions = childDimsArray9 ;
leafElInfo [ 9 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] .
complexity = REAL ; leafElInfo [ 9 ] . isLinearInterp = 1 ; leafElInfo [ 9 ]
. units = leafUnits [ 9 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ]
. hDataType = hDT ; leafElInfo [ 10 ] . signalName = sdiGetLabelFromChars (
".Fy_fr" ) ; leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims
. dimensions = childDimsArray10 ; leafElInfo [ 10 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [
10 ] . isLinearInterp = 1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".Fy_fl" ) ; leafElInfo [ 11 ] . dims .
nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions = childDimsArray11 ;
leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 11 ] .
complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp = 1 ; leafElInfo [ 11
] . units = leafUnits [ 11 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 12 ]
. hDataType = hDT ; leafElInfo [ 12 ] . signalName = sdiGetLabelFromChars (
".Mz_rr" ) ; leafElInfo [ 12 ] . dims . nDims = 1 ; leafElInfo [ 12 ] . dims
. dimensions = childDimsArray12 ; leafElInfo [ 12 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 12 ] . complexity = REAL ; leafElInfo [
12 ] . isLinearInterp = 1 ; leafElInfo [ 12 ] . units = leafUnits [ 12 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 13 ] . hDataType = hDT ; leafElInfo [ 13 ]
. signalName = sdiGetLabelFromChars ( ".Mz_rl" ) ; leafElInfo [ 13 ] . dims .
nDims = 1 ; leafElInfo [ 13 ] . dims . dimensions = childDimsArray13 ;
leafElInfo [ 13 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 13 ] .
complexity = REAL ; leafElInfo [ 13 ] . isLinearInterp = 1 ; leafElInfo [ 13
] . units = leafUnits [ 13 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 14 ]
. hDataType = hDT ; leafElInfo [ 14 ] . signalName = sdiGetLabelFromChars (
".Mz_fr" ) ; leafElInfo [ 14 ] . dims . nDims = 1 ; leafElInfo [ 14 ] . dims
. dimensions = childDimsArray14 ; leafElInfo [ 14 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 14 ] . complexity = REAL ; leafElInfo [
14 ] . isLinearInterp = 1 ; leafElInfo [ 14 ] . units = leafUnits [ 14 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 15 ] . hDataType = hDT ; leafElInfo [ 15 ]
. signalName = sdiGetLabelFromChars ( ".Mz_fl" ) ; leafElInfo [ 15 ] . dims .
nDims = 1 ; leafElInfo [ 15 ] . dims . dimensions = childDimsArray15 ;
leafElInfo [ 15 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 15 ] .
complexity = REAL ; leafElInfo [ 15 ] . isLinearInterp = 1 ; leafElInfo [ 15
] . units = leafUnits [ 15 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 16 ]
. hDataType = hDT ; leafElInfo [ 16 ] . signalName = sdiGetLabelFromChars (
".gamma_rr" ) ; leafElInfo [ 16 ] . dims . nDims = 1 ; leafElInfo [ 16 ] .
dims . dimensions = childDimsArray16 ; leafElInfo [ 16 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 16 ] . complexity = REAL ; leafElInfo [
16 ] . isLinearInterp = 1 ; leafElInfo [ 16 ] . units = leafUnits [ 16 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 17 ] . hDataType = hDT ; leafElInfo [ 17 ]
. signalName = sdiGetLabelFromChars ( ".gamma_rl" ) ; leafElInfo [ 17 ] .
dims . nDims = 1 ; leafElInfo [ 17 ] . dims . dimensions = childDimsArray17 ;
leafElInfo [ 17 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 17 ] .
complexity = REAL ; leafElInfo [ 17 ] . isLinearInterp = 1 ; leafElInfo [ 17
] . units = leafUnits [ 17 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 18 ]
. hDataType = hDT ; leafElInfo [ 18 ] . signalName = sdiGetLabelFromChars (
".gamma_fr" ) ; leafElInfo [ 18 ] . dims . nDims = 1 ; leafElInfo [ 18 ] .
dims . dimensions = childDimsArray18 ; leafElInfo [ 18 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 18 ] . complexity = REAL ; leafElInfo [
18 ] . isLinearInterp = 1 ; leafElInfo [ 18 ] . units = leafUnits [ 18 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 19 ] . hDataType = hDT ; leafElInfo [ 19 ]
. signalName = sdiGetLabelFromChars ( ".gamma_fl" ) ; leafElInfo [ 19 ] .
dims . nDims = 1 ; leafElInfo [ 19 ] . dims . dimensions = childDimsArray19 ;
leafElInfo [ 19 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 19 ] .
complexity = REAL ; leafElInfo [ 19 ] . isLinearInterp = 1 ; leafElInfo [ 19
] . units = leafUnits [ 19 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 20 ]
. hDataType = hDT ; leafElInfo [ 20 ] . signalName = sdiGetLabelFromChars (
".delta_fr" ) ; leafElInfo [ 20 ] . dims . nDims = 1 ; leafElInfo [ 20 ] .
dims . dimensions = childDimsArray20 ; leafElInfo [ 20 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 20 ] . complexity = REAL ; leafElInfo [
20 ] . isLinearInterp = 1 ; leafElInfo [ 20 ] . units = leafUnits [ 20 ] ; }
{ sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 21 ] . hDataType = hDT ; leafElInfo [ 21 ]
. signalName = sdiGetLabelFromChars ( ".delta_fl" ) ; leafElInfo [ 21 ] .
dims . nDims = 1 ; leafElInfo [ 21 ] . dims . dimensions = childDimsArray21 ;
leafElInfo [ 21 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 21 ] .
complexity = REAL ; leafElInfo [ 21 ] . isLinearInterp = 1 ; leafElInfo [ 21
] . units = leafUnits [ 21 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 22 ]
. hDataType = hDT ; leafElInfo [ 22 ] . signalName = sdiGetLabelFromChars (
".delta_SW" ) ; leafElInfo [ 22 ] . dims . nDims = 1 ; leafElInfo [ 22 ] .
dims . dimensions = childDimsArray22 ; leafElInfo [ 22 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 22 ] . complexity = REAL ; leafElInfo [
22 ] . isLinearInterp = 1 ; leafElInfo [ 22 ] . units = leafUnits [ 22 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1f0ace4a-eddb-40f1-9ec7-d89bb8ac96b0" , 23 , leafElInfo , & rtDW .
ln4wd0tmne . AQHandles [ 0 ] , 1 , 0 , "Bus\nCreator2" , "" , "Bus\nCreator2"
) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & rtDW . ln4wd0tmne . AQHandles
[ 0 ] , 23 * sizeof ( & rtDW . ln4wd0tmne . AQHandles [ 0 ] ) ) ; if ( rtDW .
ln4wd0tmne . AQHandles [ 0 ] ) { sdiLabelU loggedName = sdiGetLabelFromChars
( "Bus\nCreator2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Bus\nCreator2" ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 0 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne .
AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles
[ 0 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . ln4wd0tmne . AQHandles [ 0 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [ 0 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. ln4wd0tmne . AQHandles [ 0 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
ln4wd0tmne . AQHandles [ 1 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 1 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 1 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 2 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne .
AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles
[ 2 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . ln4wd0tmne . AQHandles [ 2 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [ 2 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. ln4wd0tmne . AQHandles [ 2 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
ln4wd0tmne . AQHandles [ 3 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 3 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 3 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 3 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 4 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne .
AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles
[ 4 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . ln4wd0tmne . AQHandles [ 4 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [ 4 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. ln4wd0tmne . AQHandles [ 4 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
ln4wd0tmne . AQHandles [ 5 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 5 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 5 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 5 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 5 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 6 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne .
AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles
[ 6 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . ln4wd0tmne . AQHandles [ 6 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [ 6 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. ln4wd0tmne . AQHandles [ 6 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
ln4wd0tmne . AQHandles [ 7 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 7 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 7 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 7 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 7 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 8 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne .
AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles
[ 8 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . ln4wd0tmne . AQHandles [ 8 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [ 8 ] ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. ln4wd0tmne . AQHandles [ 8 ] ) ; sdiSetSignalSampleTimeString ( rtDW .
ln4wd0tmne . AQHandles [ 9 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 9 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 9 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 9 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 9 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 10 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 10 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 10 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
10 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 10 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 11 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 11 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 11 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 11 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 11 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 12 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 12 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 12 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 12 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
12 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 12 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 13 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 13 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 13 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 13 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 13 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 13 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 14 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 14 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 14 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 14 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
14 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 14 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 15 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 15 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 15 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 15 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 15 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 15 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 16 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 16 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 16 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 16 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
16 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 16 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 17 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 17 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 17 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 17 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 17 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 17 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 18 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 18 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 18 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 18 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
18 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 18 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 19 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 19 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 19 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 19 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 19 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 19 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 20 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 20 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 20 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 20 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
20 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 20 ] ) ; sdiSetSignalSampleTimeString (
rtDW . ln4wd0tmne . AQHandles [ 21 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS
) ) ; sdiSetSignalRefRate ( rtDW . ln4wd0tmne . AQHandles [ 21 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ln4wd0tmne . AQHandles [ 21 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne .
AQHandles [ 21 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ln4wd0tmne . AQHandles [ 21 ] , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ln4wd0tmne . AQHandles [ 21 ] ) ;
sdiSetSignalSampleTimeString ( rtDW . ln4wd0tmne . AQHandles [ 22 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ln4wd0tmne . AQHandles [ 22 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW .
ln4wd0tmne . AQHandles [ 22 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ln4wd0tmne . AQHandles [ 22 ] ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ln4wd0tmne . AQHandles [
22 ] , loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain
( rtDW . ln4wd0tmne . AQHandles [ 22 ] ) ; sdiFreeLabel ( loggedName ) ;
sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName ( leafElInfo [ 2
] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo [ 5
] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; sdiFreeName ( leafElInfo [ 12 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 13 ] . signalName ) ; sdiFreeName ( leafElInfo [
14 ] . signalName ) ; sdiFreeName ( leafElInfo [ 15 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 16 ] . signalName ) ; sdiFreeName ( leafElInfo [
17 ] . signalName ) ; sdiFreeName ( leafElInfo [ 18 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 19 ] . signalName ) ; sdiFreeName ( leafElInfo [
20 ] . signalName ) ; sdiFreeName ( leafElInfo [ 21 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 22 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"extra_params" ) ; sdiRegisterWksVariable ( rtDW . ln4wd0tmne . AQHandles [ 0
] , varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Vehicle_Model_2Track/Subsystem/IMU" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 3 ] = { "" , "" , ""
} ; sdiVirtualBusLeafElementInfoU leafElInfo [ 3 ] ; int_T childDimsArray0 [
1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1
] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".a_x" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims .
dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 0 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".a_y" ) ; leafElInfo [ 1 ] . dims .
nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ;
leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 0 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".Omega" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims .
dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 0 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"86ebf007-2432-4058-8107-813b882e8197" , 3 , leafElInfo , & rtDW . mnyaugpzdj
. AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ; slsaCacheDWorkDataForSimTargetOP
( rtS , & rtDW . mnyaugpzdj . AQHandles [ 0 ] , 3 * sizeof ( & rtDW .
mnyaugpzdj . AQHandles [ 0 ] ) ) ; if ( rtDW . mnyaugpzdj . AQHandles [ 0 ] )
{ sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiSetSignalSampleTimeString ( rtDW . mnyaugpzdj . AQHandles [ 0 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mnyaugpzdj . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . mnyaugpzdj
. AQHandles [ 0 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . mnyaugpzdj . AQHandles [ 0 ] , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . mnyaugpzdj . AQHandles [ 0 ]
, loggedName , origSigName , propName ) ; sdiSetSignalSampleTimeString ( rtDW
. mnyaugpzdj . AQHandles [ 1 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . mnyaugpzdj . AQHandles [ 1 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . mnyaugpzdj . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . mnyaugpzdj .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
mnyaugpzdj . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . mnyaugpzdj . AQHandles [ 2 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . mnyaugpzdj .
AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . mnyaugpzdj . AQHandles
[ 2 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . mnyaugpzdj . AQHandles [ 2 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . mnyaugpzdj . AQHandles [ 2 ] ,
loggedName , origSigName , propName ) ; sdiFreeLabel ( loggedName ) ;
sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName ( leafElInfo [ 2
] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Vehicle_Model_2Track/Subsystem/Bus Selector1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "" , "" , ""
, "" , "" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T
childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".delta_SW" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims
. dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".Tw_rr" ) ; leafElInfo [ 1 ] . dims .
nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ;
leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".Tw_rl" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims .
dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] .
signalName = sdiGetLabelFromChars ( ".Tw_fr" ) ; leafElInfo [ 3 ] . dims .
nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".Tw_fl" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims .
dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 1 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"753afd67-483f-4504-a1af-d3f25979d5d5" , 5 , leafElInfo , & rtDW . kme550xfzk
. AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ; slsaCacheDWorkDataForSimTargetOP
( rtS , & rtDW . kme550xfzk . AQHandles [ 0 ] , 5 * sizeof ( & rtDW .
kme550xfzk . AQHandles [ 0 ] ) ) ; if ( rtDW . kme550xfzk . AQHandles [ 0 ] )
{ sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiSetSignalSampleTimeString ( rtDW . kme550xfzk . AQHandles [ 0 ] ,
"0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
kme550xfzk . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . kme550xfzk
. AQHandles [ 0 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . kme550xfzk . AQHandles [ 0 ] , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . kme550xfzk . AQHandles [ 0 ]
, loggedName , origSigName , propName ) ; sdiSetSignalSampleTimeString ( rtDW
. kme550xfzk . AQHandles [ 1 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . kme550xfzk . AQHandles [ 1 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . kme550xfzk . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kme550xfzk .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
kme550xfzk . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . kme550xfzk . AQHandles [ 2 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kme550xfzk .
AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . kme550xfzk . AQHandles
[ 2 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . kme550xfzk . AQHandles [ 2 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . kme550xfzk . AQHandles [ 2 ] ,
loggedName , origSigName , propName ) ; sdiSetSignalSampleTimeString ( rtDW .
kme550xfzk . AQHandles [ 3 ] , "0.0001" , 0.0001 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . kme550xfzk . AQHandles [ 3 ] , 0.0 ) ;
sdiSetRunStartTime ( rtDW . kme550xfzk . AQHandles [ 3 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kme550xfzk .
AQHandles [ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
kme550xfzk . AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . kme550xfzk . AQHandles [ 4 ] , "0.0001"
, 0.0001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kme550xfzk .
AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime ( rtDW . kme550xfzk . AQHandles
[ 4 ] , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
rtDW . kme550xfzk . AQHandles [ 4 ] , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( rtDW . kme550xfzk . AQHandles [ 4 ] ,
loggedName , origSigName , propName ) ; sdiFreeLabel ( loggedName ) ;
sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName ( leafElInfo [ 2
] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy ( &
rtB . d3xonmy1hw [ 0 ] , & rtDW . d3fbkn3bca [ 0 ] , 23U * sizeof ( real_T )
) ; } if ( rtP . Test_ > rtP . Pedal_Threshold ) { rtB .
niasjzpy2p_guugdwf2m3 = rtP . V_const ; } else { if ( ssGetTaskTime ( rtS , 0
) < rtP . Speedramp_start ) { rtB . x = rtP . Step_Y0 ; } else { rtB . x =
rtP . V_slope ; } rtB . bhrrju3n1h = ( ssGetT ( rtS ) - rtP . Speedramp_start
) * rtB . x + rtP . V0 ; if ( rtB . bhrrju3n1h > rtP . VF ) { rtB .
niasjzpy2p_guugdwf2m3 = rtP . VF ; } else if ( rtB . bhrrju3n1h < rtP .
Saturation2_LowerSat ) { rtB . niasjzpy2p_guugdwf2m3 = rtP .
Saturation2_LowerSat ; } else { rtB . niasjzpy2p_guugdwf2m3 = rtB .
bhrrju3n1h ; } } if ( rtB . niasjzpy2p_guugdwf2m3 > rtP . VF ) { rtB . x =
rtP . VF ; } else if ( rtB . niasjzpy2p_guugdwf2m3 < rtP .
Saturation_LowerSat ) { rtB . x = rtP . Saturation_LowerSat ; } else { rtB .
x = rtB . niasjzpy2p_guugdwf2m3 ; } rtB . csniogz111_ldqodwenvz = rtB . x -
rtB . d3xonmy1hw [ 3 ] ; rtB . czfib24vsx = ( rtP . PIDController_D * rtB .
csniogz111_ldqodwenvz - rtX . ewdvz44yjg ) * rtP . PIDController_N ; rtB .
bhrrju3n1h = ( rtP . PIDController_P * rtB . csniogz111_ldqodwenvz + rtX .
bin4mpd0lm ) + rtB . czfib24vsx ; if ( rtB . bhrrju3n1h > rtP .
PIDController_UpperSaturationLimit ) { rtB . dfl3kewuef = rtP .
PIDController_UpperSaturationLimit ; } else if ( rtB . bhrrju3n1h < rtP .
PIDController_LowerSaturationLimit ) { rtB . dfl3kewuef = rtP .
PIDController_LowerSaturationLimit ; } else { rtB . dfl3kewuef = rtB .
bhrrju3n1h ; } if ( rtP . Test_ > rtP . Steering_Threshold ) { if (
ssGetTaskTime ( rtS , 0 ) < rtP . Steeringramp_start ) { rtB . x = rtP .
Step_Y0_esoe35nzod ; } else { rtB . x = rtP . Steeringramp_slope ; } rtB .
bhrrju3n1h = ( ssGetT ( rtS ) - rtP . Steeringramp_start ) * rtB . x + rtP .
Steeringramp_InitialOutput ; if ( rtB . bhrrju3n1h > rtP .
Saturation1_UpperSat ) { rtB . bf5octyrk4 = rtP . Saturation1_UpperSat ; }
else if ( rtB . bhrrju3n1h < rtP . Saturation1_LowerSat ) { rtB . bf5octyrk4
= rtP . Saturation1_LowerSat ; } else { rtB . bf5octyrk4 = rtB . bhrrju3n1h ;
} } else { if ( ssGetTaskTime ( rtS , 0 ) < rtP . Conststeering_start ) { rtB
. x = rtP . Step_Y0_elgkip05b4 ; } else { rtB . x = rtP . Conststeering_slope
; } rtB . bhrrju3n1h = ( ssGetT ( rtS ) - rtP . Conststeering_start ) * rtB .
x + rtP . Conststeering_InitialOutput ; if ( rtB . bhrrju3n1h > rtP .
Const_DeltaH ) { rtB . bf5octyrk4 = rtP . Const_DeltaH ; } else if ( rtB .
bhrrju3n1h < rtP . Saturation3_LowerSat ) { rtB . bf5octyrk4 = rtP .
Saturation3_LowerSat ; } else { rtB . bf5octyrk4 = rtB . bhrrju3n1h ; } } if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . j321etzcwb . AQHandles [ 0
] && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . j321etzcwb .
AQHandles [ 0 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dfl3kewuef +
0 ) ; sdiWriteSignal ( rtDW . j321etzcwb . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . bf5octyrk4 + 0 ) ; } } } rtDW . dsjvzjmnow =
h1elzvkwql ; rtB . bhrrju3n1h = ( muDoubleScalarTanh ( rtB . dfl3kewuef /
0.001 ) + 1.0 ) * rtB . dfl3kewuef / 2.0 * rtP . vehicle_data . motor .
maxTorque ; rtB . Tb_r_req = - ( ( muDoubleScalarTanh ( rtB . dfl3kewuef /
0.001 ) - 1.0 ) * rtB . dfl3kewuef / 2.0 ) * rtP . vehicle_data . braking .
totBrakeTorque * ( 1.0 - rtP . vehicle_data . braking . brakeRatio ) ; rtB .
Tb_f_req = - ( ( muDoubleScalarTanh ( rtB . dfl3kewuef / 0.001 ) - 1.0 ) *
rtB . dfl3kewuef / 2.0 ) * rtP . vehicle_data . braking . totBrakeTorque *
rtP . vehicle_data . braking . brakeRatio ; rtB . nbnqhwwnzr_dhamdvybc1 = rtP
. Gain1_Gain * rtB . bf5octyrk4 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( rtDW . eqsmgxfrzv . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . eqsmgxfrzv . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) &
rtB . d3xonmy1hw [ 15 ] + 0 ) ; } } { if ( rtDW . b5xx0e2w04 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . b5xx0e2w04 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 16 ] + 0 ) ; } }
{ if ( rtDW . bk33az04mk . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . bk33az04mk . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . d3xonmy1hw [ 17 ] + 0 ) ; } } { if ( rtDW . kvnkak3jpy .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . kvnkak3jpy .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 18 ]
+ 0 ) ; } } { if ( rtDW . n1rq3xz5qe . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . n1rq3xz5qe . AQHandles , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . d3xonmy1hw [ 3 ] + 0 ) ; } } rtB . mhu3nnfb2l_dypejvacrn
= rtP . Gain_Gain * rtB . d3xonmy1hw [ 15 ] ; rtB . ly3rfxl5br_lxo5edjg3c =
rtP . Gain_Gain_i5lx5ddvss * rtB . d3xonmy1hw [ 16 ] ; rtB .
nzjfcwcyup_owjr1h1vqy = rtP . Gain_Gain_hjp5rjecra * rtB . d3xonmy1hw [ 17 ]
; rtB . e4qpx3tt5u_bjbgfqrolh = rtP . Gain_Gain_jqswpxfqa4 * rtB . d3xonmy1hw
[ 18 ] ; { if ( rtDW . aufl3dtfm4 . AQHandles [ 0 ] && ssGetLogOutput ( rtS )
) { sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 0 ] , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 0 ] + 0 ) ; sdiWriteSignal ( rtDW
. aufl3dtfm4 . AQHandles [ 1 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. d3xonmy1hw [ 1 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 2
] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 2 ] + 0 ) ;
sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 3 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . d3xonmy1hw [ 3 ] + 0 ) ; sdiWriteSignal ( rtDW .
aufl3dtfm4 . AQHandles [ 4 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
d3xonmy1hw [ 4 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 5 ]
, ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 5 ] + 0 ) ;
sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 6 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . d3xonmy1hw [ 6 ] + 0 ) ; sdiWriteSignal ( rtDW .
aufl3dtfm4 . AQHandles [ 7 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
d3xonmy1hw [ 7 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 8 ]
, ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 8 ] + 0 ) ;
sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 9 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . d3xonmy1hw [ 9 ] + 0 ) ; sdiWriteSignal ( rtDW .
aufl3dtfm4 . AQHandles [ 10 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. d3xonmy1hw [ 10 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [
11 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 11 ] + 0 )
; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 12 ] , ssGetTaskTime ( rtS
, 1 ) , ( char * ) & rtB . d3xonmy1hw [ 12 ] + 0 ) ; sdiWriteSignal ( rtDW .
aufl3dtfm4 . AQHandles [ 13 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. d3xonmy1hw [ 13 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [
14 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 14 ] + 0 )
; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 15 ] , ssGetTaskTime ( rtS
, 1 ) , ( char * ) & rtB . mhu3nnfb2l_dypejvacrn + 0 ) ; sdiWriteSignal (
rtDW . aufl3dtfm4 . AQHandles [ 16 ] , ssGetTaskTime ( rtS , 1 ) , ( char * )
& rtB . ly3rfxl5br_lxo5edjg3c + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 .
AQHandles [ 17 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
nzjfcwcyup_owjr1h1vqy + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles
[ 18 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . e4qpx3tt5u_bjbgfqrolh
+ 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 19 ] , ssGetTaskTime
( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 19 ] + 0 ) ; sdiWriteSignal (
rtDW . aufl3dtfm4 . AQHandles [ 20 ] , ssGetTaskTime ( rtS , 1 ) , ( char * )
& rtB . d3xonmy1hw [ 20 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 .
AQHandles [ 21 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw
[ 21 ] + 0 ) ; sdiWriteSignal ( rtDW . aufl3dtfm4 . AQHandles [ 22 ] ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d3xonmy1hw [ 22 ] + 0 ) ; } }
memcpy ( & rtB . k2jl0n1mcd [ 0 ] , & rtDW . b2axcahws4 [ 0 ] , 23U * sizeof
( real_T ) ) ; } rtB . hgfsmvz4k1 = rtP . PIDController_I * rtB .
csniogz111_ldqodwenvz ; rtDW . jowpdqkr40 = h1elzvkwql ; rtB .
b_reqBrakeTorque = rtB . Tb_r_req ; rtB . c_reqBrakeTorque = rtB . Tb_f_req ;
if ( rtB . Tb_r_req > 0.0 ) { rtB . Tb_r_req = 0.0 ; rtB . b_reqBrakeTorque =
0.0 ; } if ( rtB . Tb_f_req > 0.0 ) { rtB . c_reqBrakeTorque = 0.0 ; rtB .
Tb_f_req = 0.0 ; } if ( muDoubleScalarAbs ( rtB . c_reqBrakeTorque ) < 3500.0
) { rtB . c_reqBrakeTorque *= muDoubleScalarSin ( muDoubleScalarAtan ( rtB .
d3xonmy1hw [ 13 ] ) ) ; } else { rtB . c_reqBrakeTorque = - 3500.0 *
muDoubleScalarSin ( muDoubleScalarAtan ( rtB . d3xonmy1hw [ 13 ] ) ) ; } if (
muDoubleScalarAbs ( rtB . Tb_f_req ) < 3500.0 ) { rtB . Tb_f_req *=
muDoubleScalarSin ( muDoubleScalarAtan ( rtB . d3xonmy1hw [ 14 ] ) ) ; } else
{ rtB . Tb_f_req = - 3500.0 * muDoubleScalarSin ( muDoubleScalarAtan ( rtB .
d3xonmy1hw [ 14 ] ) ) ; } if ( muDoubleScalarAbs ( rtB . Tb_r_req ) < 3500.0
) { rtB . x = rtB . Tb_r_req * muDoubleScalarSin ( muDoubleScalarAtan ( rtB .
d3xonmy1hw [ 11 ] ) ) ; } else { rtB . x = - 3500.0 * muDoubleScalarSin (
muDoubleScalarAtan ( rtB . d3xonmy1hw [ 11 ] ) ) ; } rtB . Tb_r_req = rtB . x
+ cvdfqotvpw ( rtB . bhrrju3n1h , rtB . d3xonmy1hw [ 11 ] ,
3.4666666666666668 , 0.93 , 100.0 , 4800.0 , 5200.0 , 175.0 ) ; if (
muDoubleScalarAbs ( rtB . b_reqBrakeTorque ) < 3500.0 ) { rtB . x = rtB .
b_reqBrakeTorque * muDoubleScalarSin ( muDoubleScalarAtan ( rtB . d3xonmy1hw
[ 12 ] ) ) ; } else { rtB . x = - 3500.0 * muDoubleScalarSin (
muDoubleScalarAtan ( rtB . d3xonmy1hw [ 12 ] ) ) ; } rtB . bhrrju3n1h = rtB .
x + cvdfqotvpw ( rtB . bhrrju3n1h , rtB . d3xonmy1hw [ 12 ] ,
3.4666666666666668 , 0.93 , 100.0 , 4800.0 , 5200.0 , 175.0 ) ; rtB .
dyiczxwq2y [ 16 ] = - 0.0 ; rtB . dyiczxwq2y [ 17 ] = 0.0 ; rtB . dyiczxwq2y
[ 18 ] = - 0.0 ; rtB . dyiczxwq2y [ 19 ] = 0.0 ; rtB . b_reqBrakeTorque =
muDoubleScalarAtan ( 3.4 * muDoubleScalarTan ( rtB . d3xonmy1hw [ 10 ] ) / (
( 1.26 * muDoubleScalarTan ( rtB . d3xonmy1hw [ 10 ] ) + 1.4 ) + 2.0 ) ) ;
rtB . x = muDoubleScalarAtan ( 3.4 * muDoubleScalarTan ( rtB . d3xonmy1hw [
10 ] ) / ( ( 1.26 * muDoubleScalarTan ( rtB . d3xonmy1hw [ 10 ] ) - 1.4 ) -
2.0 ) ) ; rtB . Fz__rl_ss = rtB . d3xonmy1hw [ 3 ] * rtB . d3xonmy1hw [ 3 ] *
0.5 ; rtB . Fz__fl_ss = rtB . d3xonmy1hw [ 3 ] * rtB . d3xonmy1hw [ 3 ] * 0.4
; rtB . expl_temp . vehicle . Lf = 1.0 ; rtB . expl_temp . vehicle . Lr = 0.7
; rtB . expl_temp . vehicle . L = 1.7 ; rtB . expl_temp . vehicle . hGs =
0.295 ; rtB . expl_temp . vehicle . Wf = 1.26 ; rtB . expl_temp . vehicle .
Wr = 1.21 ; rtB . expl_temp . vehicle . lx = 0.3 ; rtB . expl_temp . vehicle
. ly = 0.3 ; rtB . expl_temp . vehicle . m = 257.5 ; rtB . expl_temp .
vehicle . i_xx = 65.0 ; rtB . expl_temp . vehicle . i_yy = 90.0 ; rtB .
expl_temp . vehicle . i_zz = 130.0 ; rtB . expl_temp . vehicle . i_xz = 20.0
; rtB . expl_temp . vehicle . g = 9.81 ; rtB . expl_temp . vehicle . ms =
225.0 ; rtB . expl_temp . accumulator . maxPower = 175.0 ; rtB . expl_temp .
tyre_data_r . Fz0 = 220.0 ; rtB . expl_temp . tyre_data_r . R0 = 0.2304 ; rtB
. expl_temp . tyre_data_r . pCx1 = 1.5387936046317499 ; rtB . expl_temp .
tyre_data_r . pCy1 = 1.1266512680704623 ; rtB . expl_temp . tyre_data_r .
pDx1 = 3.1471334251245406 ; rtB . expl_temp . tyre_data_r . pDx2 = -
0.24966679758045818 ; rtB . expl_temp . tyre_data_r . pDx3 =
18.451212025074643 ; rtB . expl_temp . tyre_data_r . pDy1 =
2.7187677492920517 ; rtB . expl_temp . tyre_data_r . pDy2 = -
0.049810981841589462 ; rtB . expl_temp . tyre_data_r . pDy3 = -
2.5068877297645238 ; rtB . expl_temp . tyre_data_r . pEx1 =
0.010926002153390022 ; rtB . expl_temp . tyre_data_r . pEx2 = -
0.36192389013004767 ; rtB . expl_temp . tyre_data_r . pEx3 =
0.10584900639581085 ; rtB . expl_temp . tyre_data_r . pEx4 =
0.084235726797198915 ; rtB . expl_temp . tyre_data_r . pEy1 =
0.44596113300895551 ; rtB . expl_temp . tyre_data_r . pEy2 =
0.07630665195211285 ; rtB . expl_temp . tyre_data_r . pEy3 =
0.091920245082059482 ; rtB . expl_temp . tyre_data_r . pEy4 = -
11.348893524622783 ; rtB . expl_temp . tyre_data_r . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp . tyre_data_r . pHx2 =
0.0010493359389341034 ; rtB . expl_temp . tyre_data_r . pHy1 =
0.0038021518264314408 ; rtB . expl_temp . tyre_data_r . pHy2 =
0.000316181479240744 ; rtB . expl_temp . tyre_data_r . pHy3 = -
0.014482213612073495 ; rtB . expl_temp . tyre_data_r . pKx1 =
82.411460018669146 ; rtB . expl_temp . tyre_data_r . pKx2 = -
0.00061256627104921393 ; rtB . expl_temp . tyre_data_r . pKx3 =
0.15359052254656008 ; rtB . expl_temp . tyre_data_r . pKy1 = -
150.10145482808775 ; rtB . expl_temp . tyre_data_r . pKy2 = -
4.4161524509551757 ; rtB . expl_temp . tyre_data_r . pKy3 = 0.07718517111566
; rtB . expl_temp . tyre_data_r . pVx1 = - 0.085927595261286946 ; rtB .
expl_temp . tyre_data_r . pVx2 = - 0.02555265308118633 ; rtB . expl_temp .
tyre_data_r . pVy1 = - 0.07921124466727919 ; rtB . expl_temp . tyre_data_r .
pVy2 = 0.0060504222531290505 ; rtB . expl_temp . tyre_data_r . pVy3 =
1.8914508125438863 ; rtB . expl_temp . tyre_data_r . pVy4 =
0.12684322562281874 ; rtB . expl_temp . tyre_data_r . qBz1 =
1.5279739203602458 ; rtB . expl_temp . tyre_data_r . qBz10 =
0.10511724651210722 ; rtB . expl_temp . tyre_data_r . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp . tyre_data_r . qBz3 = -
0.012995423418534741 ; rtB . expl_temp . tyre_data_r . qBz4 =
0.22301364235368404 ; rtB . expl_temp . tyre_data_r . qBz5 = -
0.028011211434332741 ; rtB . expl_temp . tyre_data_r . qBz9 =
5.3472475990289441 ; rtB . expl_temp . tyre_data_r . qCz1 =
5.8677776192218287 ; rtB . expl_temp . tyre_data_r . qDz1 =
0.058214260475520967 ; rtB . expl_temp . tyre_data_r . qDz2 = -
0.0057103185685005234 ; rtB . expl_temp . tyre_data_r . qDz3 =
0.716094457980896 ; rtB . expl_temp . tyre_data_r . qDz4 = -
4.9857067728941056 ; rtB . expl_temp . tyre_data_r . qDz6 =
0.012414856580811123 ; rtB . expl_temp . tyre_data_r . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp . tyre_data_r . qDz8 =
1.2699751345537584 ; rtB . expl_temp . tyre_data_r . qDz9 =
0.0197040933269894 ; rtB . expl_temp . tyre_data_r . qEz1 = -
1.9997408073802374 ; rtB . expl_temp . tyre_data_r . qEz2 =
2.9998011239595122 ; rtB . expl_temp . tyre_data_r . qEz3 = -
0.4382232448812835 ; rtB . expl_temp . tyre_data_r . qEz4 = -
0.29680338193202216 ; rtB . expl_temp . tyre_data_r . qEz5 =
9.9993657087278045 ; rtB . expl_temp . tyre_data_r . qHz1 =
0.010181041873980484 ; rtB . expl_temp . tyre_data_r . qHz2 = -
0.000872660034720689 ; rtB . expl_temp . tyre_data_r . qHz3 = -
0.39314971819898387 ; rtB . expl_temp . tyre_data_r . qHz4 =
1.509194602343613E-16 ; rtB . expl_temp . tyre_data_r . rBx1 =
18.98428171806113 ; rtB . expl_temp . tyre_data_r . rBx2 = -
14.988778673926317 ; rtB . expl_temp . tyre_data_r . rBy1 =
8.9431247964263765 ; rtB . expl_temp . tyre_data_r . rBy2 = 11.27197245162861
; rtB . expl_temp . tyre_data_r . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp . tyre_data_r . rCx1 = 1.1336009219126777 ; rtB . expl_temp .
tyre_data_r . rCy1 = 1.2105864414932852 ; rtB . expl_temp . tyre_data_r .
rHx1 = - 0.0079321349153765545 ; rtB . expl_temp . tyre_data_r . rHy1 =
0.00086476734899675663 ; rtB . expl_temp . tyre_data_r . rVy1 = -
0.024616038671178269 ; rtB . expl_temp . tyre_data_r . rVy2 = 0.0 ; rtB .
expl_temp . tyre_data_r . rVy3 = 0.0 ; rtB . expl_temp . tyre_data_r . rVy4 =
16.576380991996519 ; rtB . expl_temp . tyre_data_r . rVy5 =
1.3615089656301738 ; rtB . expl_temp . tyre_data_r . rVy6 =
29.546630283393668 ; rtB . expl_temp . tyre_data_r . sSz1 = 0.0 ; rtB .
expl_temp . tyre_data_r . sSz2 = 0.0 ; rtB . expl_temp . tyre_data_r . sSz3 =
0.0 ; rtB . expl_temp . tyre_data_r . sSz4 = 0.0 ; rtB . expl_temp .
tyre_data_r . lambda__Cx = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Cy =
1.0 ; rtB . expl_temp . tyre_data_r . lambda__Ex = 1.0 ; rtB . expl_temp .
tyre_data_r . lambda__Ey = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Fz0
= 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Hx = 1.0 ; rtB . expl_temp .
tyre_data_r . lambda__Hy = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Kxk
= 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Ky = 1.0 ; rtB . expl_temp .
tyre_data_r . lambda__Kya = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Mr
= 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Vx = 1.0 ; rtB . expl_temp .
tyre_data_r . lambda__Vy = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__Vyk
= 1.0 ; rtB . expl_temp . tyre_data_r . lambda__gamma__y = 1.0 ; rtB .
expl_temp . tyre_data_r . lambda__mu__x = 1.0 ; rtB . expl_temp . tyre_data_r
. lambda__mu__y = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__s = 1.0 ; rtB
. expl_temp . tyre_data_r . lambda__t = 1.0 ; rtB . expl_temp . tyre_data_r .
lambda__xa = 1.0 ; rtB . expl_temp . tyre_data_r . lambda__yk = 1.0 ; rtB .
expl_temp . tyre_data_r . Fz01 = 0.0 ; rtB . expl_temp . tyre_data_f . Fz0 =
220.0 ; rtB . expl_temp . tyre_data_f . R0 = 0.2304 ; rtB . expl_temp .
tyre_data_f . pCx1 = 1.5387936046317499 ; rtB . expl_temp . tyre_data_f .
pCy1 = 1.1266512680704623 ; rtB . expl_temp . tyre_data_f . pDx1 =
3.1471334251245406 ; rtB . expl_temp . tyre_data_f . pDx2 = -
0.24966679758045818 ; rtB . expl_temp . tyre_data_f . pDx3 =
18.451212025074643 ; rtB . expl_temp . tyre_data_f . pDy1 =
2.7187677492920517 ; rtB . expl_temp . tyre_data_f . pDy2 = -
0.049810981841589462 ; rtB . expl_temp . tyre_data_f . pDy3 = -
2.5068877297645238 ; rtB . expl_temp . tyre_data_f . pEx1 =
0.010926002153390022 ; rtB . expl_temp . tyre_data_f . pEx2 = -
0.36192389013004767 ; rtB . expl_temp . tyre_data_f . pEx3 =
0.10584900639581085 ; rtB . expl_temp . tyre_data_f . pEx4 =
0.084235726797198915 ; rtB . expl_temp . tyre_data_f . pEy1 =
0.44596113300895551 ; rtB . expl_temp . tyre_data_f . pEy2 =
0.07630665195211285 ; rtB . expl_temp . tyre_data_f . pEy3 =
0.091920245082059482 ; rtB . expl_temp . tyre_data_f . pEy4 = -
11.348893524622783 ; rtB . expl_temp . tyre_data_f . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp . tyre_data_f . pHx2 =
0.0010493359389341034 ; rtB . expl_temp . tyre_data_f . pHy1 =
0.0038021518264314408 ; rtB . expl_temp . tyre_data_f . pHy2 =
0.000316181479240744 ; rtB . expl_temp . tyre_data_f . pHy3 = -
0.014482213612073495 ; rtB . expl_temp . tyre_data_f . pKx1 =
82.411460018669146 ; rtB . expl_temp . tyre_data_f . pKx2 = -
0.00061256627104921393 ; rtB . expl_temp . tyre_data_f . pKx3 =
0.15359052254656008 ; rtB . expl_temp . tyre_data_f . pKy1 = -
150.10145482808775 ; rtB . expl_temp . tyre_data_f . pKy2 = -
4.4161524509551757 ; rtB . expl_temp . tyre_data_f . pKy3 = 0.07718517111566
; rtB . expl_temp . tyre_data_f . pVx1 = - 0.085927595261286946 ; rtB .
expl_temp . tyre_data_f . pVx2 = - 0.02555265308118633 ; rtB . expl_temp .
tyre_data_f . pVy1 = - 0.07921124466727919 ; rtB . expl_temp . tyre_data_f .
pVy2 = 0.0060504222531290505 ; rtB . expl_temp . tyre_data_f . pVy3 =
1.8914508125438863 ; rtB . expl_temp . tyre_data_f . pVy4 =
0.12684322562281874 ; rtB . expl_temp . tyre_data_f . qBz1 =
1.5279739203602458 ; rtB . expl_temp . tyre_data_f . qBz10 =
0.10511724651210722 ; rtB . expl_temp . tyre_data_f . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp . tyre_data_f . qBz3 = -
0.012995423418534741 ; rtB . expl_temp . tyre_data_f . qBz4 =
0.22301364235368404 ; rtB . expl_temp . tyre_data_f . qBz5 = -
0.028011211434332741 ; rtB . expl_temp . tyre_data_f . qBz9 =
5.3472475990289441 ; rtB . expl_temp . tyre_data_f . qCz1 =
5.8677776192218287 ; rtB . expl_temp . tyre_data_f . qDz1 =
0.058214260475520967 ; rtB . expl_temp . tyre_data_f . qDz2 = -
0.0057103185685005234 ; rtB . expl_temp . tyre_data_f . qDz3 =
0.716094457980896 ; rtB . expl_temp . tyre_data_f . qDz4 = -
4.9857067728941056 ; rtB . expl_temp . tyre_data_f . qDz6 =
0.012414856580811123 ; rtB . expl_temp . tyre_data_f . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp . tyre_data_f . qDz8 =
1.2699751345537584 ; rtB . expl_temp . tyre_data_f . qDz9 =
0.0197040933269894 ; rtB . expl_temp . tyre_data_f . qEz1 = -
1.9997408073802374 ; rtB . expl_temp . tyre_data_f . qEz2 =
2.9998011239595122 ; rtB . expl_temp . tyre_data_f . qEz3 = -
0.4382232448812835 ; rtB . expl_temp . tyre_data_f . qEz4 = -
0.29680338193202216 ; rtB . expl_temp . tyre_data_f . qEz5 =
9.9993657087278045 ; rtB . expl_temp . tyre_data_f . qHz1 =
0.010181041873980484 ; rtB . expl_temp . tyre_data_f . qHz2 = -
0.000872660034720689 ; rtB . expl_temp . tyre_data_f . qHz3 = -
0.39314971819898387 ; rtB . expl_temp . tyre_data_f . qHz4 =
1.509194602343613E-16 ; rtB . expl_temp . tyre_data_f . rBx1 =
18.98428171806113 ; rtB . expl_temp . tyre_data_f . rBx2 = -
14.988778673926317 ; rtB . expl_temp . tyre_data_f . rBy1 =
8.9431247964263765 ; rtB . expl_temp . tyre_data_f . rBy2 = 11.27197245162861
; rtB . expl_temp . tyre_data_f . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp . tyre_data_f . rCx1 = 1.1336009219126777 ; rtB . expl_temp .
tyre_data_f . rCy1 = 1.2105864414932852 ; rtB . expl_temp . tyre_data_f .
rHx1 = - 0.0079321349153765545 ; rtB . expl_temp . tyre_data_f . rHy1 =
0.00086476734899675663 ; rtB . expl_temp . tyre_data_f . rVy1 = -
0.024616038671178269 ; rtB . expl_temp . tyre_data_f . rVy2 = 0.0 ; rtB .
expl_temp . tyre_data_f . rVy3 = 0.0 ; rtB . expl_temp . tyre_data_f . rVy4 =
16.576380991996519 ; rtB . expl_temp . tyre_data_f . rVy5 =
1.3615089656301738 ; rtB . expl_temp . tyre_data_f . rVy6 =
29.546630283393668 ; rtB . expl_temp . tyre_data_f . sSz1 = 0.0 ; rtB .
expl_temp . tyre_data_f . sSz2 = 0.0 ; rtB . expl_temp . tyre_data_f . sSz3 =
0.0 ; rtB . expl_temp . tyre_data_f . sSz4 = 0.0 ; rtB . expl_temp .
tyre_data_f . lambda__Cx = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Cy =
1.0 ; rtB . expl_temp . tyre_data_f . lambda__Ex = 1.0 ; rtB . expl_temp .
tyre_data_f . lambda__Ey = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Fz0
= 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Hx = 1.0 ; rtB . expl_temp .
tyre_data_f . lambda__Hy = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Kxk
= 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Ky = 1.0 ; rtB . expl_temp .
tyre_data_f . lambda__Kya = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Mr
= 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Vx = 1.0 ; rtB . expl_temp .
tyre_data_f . lambda__Vy = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__Vyk
= 1.0 ; rtB . expl_temp . tyre_data_f . lambda__gamma__y = 1.0 ; rtB .
expl_temp . tyre_data_f . lambda__mu__x = 1.0 ; rtB . expl_temp . tyre_data_f
. lambda__mu__y = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__s = 1.0 ; rtB
. expl_temp . tyre_data_f . lambda__t = 1.0 ; rtB . expl_temp . tyre_data_f .
lambda__xa = 1.0 ; rtB . expl_temp . tyre_data_f . lambda__yk = 1.0 ; rtB .
expl_temp . tyre_data_f . Fz01 = 0.0 ; rtB . expl_temp . tire . Vlow_long =
8.0 ; rtB . expl_temp . tire . Vlow_lat = 8.0 ; rtB . expl_temp . motor .
maxTorque = 100.0 ; rtB . expl_temp . motor . speedForTorqueCut = 4800.0 ;
rtB . expl_temp . motor . maxRotSpeed = 5200.0 ; rtB . expl_temp . motor .
k_torque = 0.83 ; rtB . expl_temp . motor . I_max = 100.0 ; rtB . expl_temp .
motor . tau_mot = 0.03 ; rtB . expl_temp . motor . tau_ped = 0.08 ; rtB .
expl_temp . front_wheel . Rf = 0.2304 ; rtB . expl_temp . front_wheel . width
= 0.15239999999999998 ; rtB . expl_temp . front_wheel . mass = 7.0 ; rtB .
expl_temp . front_wheel . iwd_f = 0.10644564 ; rtB . expl_temp . front_wheel
. iwa_f = 0.5 ; rtB . expl_temp . front_wheel . static_camber = 0.0 ; rtB .
expl_temp . rear_wheel . Rr = 0.2304 ; rtB . expl_temp . rear_wheel . width =
0.15239999999999998 ; rtB . expl_temp . rear_wheel . mass = 9.25 ; rtB .
expl_temp . rear_wheel . iwd_r = 0.14066030999999998 ; rtB . expl_temp .
rear_wheel . iwa_r = 0.5 ; rtB . expl_temp . rear_wheel . static_camber = 0.0
; rtB . expl_temp . transmission . tau_red = 3.4666666666666668 ; rtB .
expl_temp . transmission . eff_red = 0.93 ; g2npwespnp ( rtB . d3xonmy1hw [ 3
] , rtB . d3xonmy1hw [ 5 ] , rtB . d3xonmy1hw [ 19 ] , rtB . d3xonmy1hw [ 20
] , rtB . d3xonmy1hw [ 21 ] , rtB . d3xonmy1hw [ 22 ] , rtB . d3xonmy1hw [ 11
] , rtB . d3xonmy1hw [ 12 ] , rtB . d3xonmy1hw [ 13 ] , rtB . d3xonmy1hw [ 14
] , rtB . b_reqBrakeTorque , - rtB . x , rtB . d3xonmy1hw [ 6 ] , rtB .
d3xonmy1hw [ 7 ] , rtB . d3xonmy1hw [ 8 ] , rtB . d3xonmy1hw [ 9 ] , - 0.0 ,
0.0 , - 0.0 , 0.0 , & rtB . expl_temp , & rtB . AM__rr , & rtB . AM__rl , &
rtB . AM__fr , & rtB . AM__fl ) ; rtB . expl_temp_mbvzarwird . lambda__yk =
1.0 ; rtB . expl_temp_mbvzarwird . lambda__xa = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__t = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__s = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__mu__y = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__mu__x = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__gamma__y = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__Vyk = 1.0 ; rtB
. expl_temp_mbvzarwird . lambda__Vy = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__Vx = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__Mr = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__Kya = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__Ky = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__Kxk = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__Hy = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__Hx = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__Fz0 = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__Ey = 1.0 ; rtB . expl_temp_mbvzarwird .
lambda__Ex = 1.0 ; rtB . expl_temp_mbvzarwird . lambda__Cy = 1.0 ; rtB .
expl_temp_mbvzarwird . lambda__Cx = 1.0 ; rtB . expl_temp_mbvzarwird . sSz4 =
0.0 ; rtB . expl_temp_mbvzarwird . sSz3 = 0.0 ; rtB . expl_temp_mbvzarwird .
sSz2 = 0.0 ; rtB . expl_temp_mbvzarwird . sSz1 = 0.0 ; rtB .
expl_temp_mbvzarwird . rVy6 = 29.546630283393668 ; rtB . expl_temp_mbvzarwird
. rVy5 = 1.3615089656301738 ; rtB . expl_temp_mbvzarwird . rVy4 =
16.576380991996519 ; rtB . expl_temp_mbvzarwird . rVy3 = 0.0 ; rtB .
expl_temp_mbvzarwird . rVy2 = 0.0 ; rtB . expl_temp_mbvzarwird . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_mbvzarwird . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_mbvzarwird . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_mbvzarwird . rCy1 =
1.2105864414932852 ; rtB . expl_temp_mbvzarwird . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_mbvzarwird . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_mbvzarwird . rBy2 = 11.27197245162861 ; rtB . expl_temp_mbvzarwird
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_mbvzarwird . rBx2 = -
14.988778673926317 ; rtB . expl_temp_mbvzarwird . rBx1 = 18.98428171806113 ;
rtB . expl_temp_mbvzarwird . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_mbvzarwird . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_mbvzarwird . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_mbvzarwird . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_mbvzarwird . qEz5 = 9.9993657087278045 ; rtB . expl_temp_mbvzarwird
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_mbvzarwird . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_mbvzarwird . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_mbvzarwird . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_mbvzarwird . qDz9 = 0.0197040933269894 ; rtB . expl_temp_mbvzarwird
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_mbvzarwird . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_mbvzarwird . qDz6 =
0.012414856580811123 ; rtB . expl_temp_mbvzarwird . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_mbvzarwird . qDz3 = 0.716094457980896 ;
rtB . expl_temp_mbvzarwird . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_mbvzarwird . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_mbvzarwird . qCz1 = 5.8677776192218287 ; rtB . expl_temp_mbvzarwird
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_mbvzarwird . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_mbvzarwird . qBz4 =
0.22301364235368404 ; rtB . expl_temp_mbvzarwird . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_mbvzarwird . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_mbvzarwird . qBz10 =
0.10511724651210722 ; rtB . expl_temp_mbvzarwird . qBz1 = 1.5279739203602458
; rtB . expl_temp_mbvzarwird . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_mbvzarwird . pVy3 = 1.8914508125438863 ; rtB . expl_temp_mbvzarwird
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_mbvzarwird . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_mbvzarwird . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_mbvzarwird . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_mbvzarwird . pKy3 = 0.07718517111566 ;
rtB . expl_temp_mbvzarwird . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_mbvzarwird . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_mbvzarwird . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_mbvzarwird . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_mbvzarwird . pKx1 = 82.411460018669146 ; rtB . expl_temp_mbvzarwird
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_mbvzarwird . pHy2 =
0.000316181479240744 ; rtB . expl_temp_mbvzarwird . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_mbvzarwird . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_mbvzarwird . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_mbvzarwird . pEy4 = -
11.348893524622783 ; rtB . expl_temp_mbvzarwird . pEy3 = 0.091920245082059482
; rtB . expl_temp_mbvzarwird . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_mbvzarwird . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_mbvzarwird . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_mbvzarwird . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_mbvzarwird . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_mbvzarwird . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_mbvzarwird . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_mbvzarwird . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_mbvzarwird . pDy1 = 2.7187677492920517 ; rtB . expl_temp_mbvzarwird
. pDx3 = 18.451212025074643 ; rtB . expl_temp_mbvzarwird . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_mbvzarwird . pDx1 = 3.1471334251245406
; rtB . expl_temp_mbvzarwird . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_mbvzarwird . pCx1 = 1.5387936046317499 ; rtB . expl_temp_mbvzarwird
. R0 = 0.2304 ; rtB . expl_temp_mbvzarwird . Fz0 = 220.0 ; rtB . Fx__rr =
cyjnohd3ip ( rtB . AM__rr , - rtB . d3xonmy1hw [ 15 ] , 0.0 , rtB .
d3xonmy1hw [ 6 ] , & rtB . expl_temp_mbvzarwird ) ; rtB .
expl_temp_cl54gopm0x . lambda__yk = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__xa = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__t = 1.0 ; rtB .
expl_temp_cl54gopm0x . lambda__s = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__mu__y = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__mu__x = 1.0 ; rtB
. expl_temp_cl54gopm0x . lambda__gamma__y = 1.0 ; rtB . expl_temp_cl54gopm0x
. lambda__Vyk = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__Vy = 1.0 ; rtB .
expl_temp_cl54gopm0x . lambda__Vx = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__Mr = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__Kya = 1.0 ; rtB .
expl_temp_cl54gopm0x . lambda__Ky = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__Kxk = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__Hy = 1.0 ; rtB .
expl_temp_cl54gopm0x . lambda__Hx = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__Fz0 = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__Ey = 1.0 ; rtB .
expl_temp_cl54gopm0x . lambda__Ex = 1.0 ; rtB . expl_temp_cl54gopm0x .
lambda__Cy = 1.0 ; rtB . expl_temp_cl54gopm0x . lambda__Cx = 1.0 ; rtB .
expl_temp_cl54gopm0x . sSz4 = 0.0 ; rtB . expl_temp_cl54gopm0x . sSz3 = 0.0 ;
rtB . expl_temp_cl54gopm0x . sSz2 = 0.0 ; rtB . expl_temp_cl54gopm0x . sSz1 =
0.0 ; rtB . expl_temp_cl54gopm0x . rVy6 = 29.546630283393668 ; rtB .
expl_temp_cl54gopm0x . rVy5 = 1.3615089656301738 ; rtB . expl_temp_cl54gopm0x
. rVy4 = 16.576380991996519 ; rtB . expl_temp_cl54gopm0x . rVy3 = 0.0 ; rtB .
expl_temp_cl54gopm0x . rVy2 = 0.0 ; rtB . expl_temp_cl54gopm0x . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_cl54gopm0x . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_cl54gopm0x . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_cl54gopm0x . rCy1 =
1.2105864414932852 ; rtB . expl_temp_cl54gopm0x . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_cl54gopm0x . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_cl54gopm0x . rBy2 = 11.27197245162861 ; rtB . expl_temp_cl54gopm0x
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_cl54gopm0x . rBx2 = -
14.988778673926317 ; rtB . expl_temp_cl54gopm0x . rBx1 = 18.98428171806113 ;
rtB . expl_temp_cl54gopm0x . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_cl54gopm0x . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_cl54gopm0x . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_cl54gopm0x . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_cl54gopm0x . qEz5 = 9.9993657087278045 ; rtB . expl_temp_cl54gopm0x
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_cl54gopm0x . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_cl54gopm0x . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_cl54gopm0x . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_cl54gopm0x . qDz9 = 0.0197040933269894 ; rtB . expl_temp_cl54gopm0x
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_cl54gopm0x . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_cl54gopm0x . qDz6 =
0.012414856580811123 ; rtB . expl_temp_cl54gopm0x . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_cl54gopm0x . qDz3 = 0.716094457980896 ;
rtB . expl_temp_cl54gopm0x . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_cl54gopm0x . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_cl54gopm0x . qCz1 = 5.8677776192218287 ; rtB . expl_temp_cl54gopm0x
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_cl54gopm0x . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_cl54gopm0x . qBz4 =
0.22301364235368404 ; rtB . expl_temp_cl54gopm0x . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_cl54gopm0x . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_cl54gopm0x . qBz10 =
0.10511724651210722 ; rtB . expl_temp_cl54gopm0x . qBz1 = 1.5279739203602458
; rtB . expl_temp_cl54gopm0x . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_cl54gopm0x . pVy3 = 1.8914508125438863 ; rtB . expl_temp_cl54gopm0x
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_cl54gopm0x . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_cl54gopm0x . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_cl54gopm0x . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_cl54gopm0x . pKy3 = 0.07718517111566 ;
rtB . expl_temp_cl54gopm0x . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_cl54gopm0x . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_cl54gopm0x . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_cl54gopm0x . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_cl54gopm0x . pKx1 = 82.411460018669146 ; rtB . expl_temp_cl54gopm0x
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_cl54gopm0x . pHy2 =
0.000316181479240744 ; rtB . expl_temp_cl54gopm0x . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_cl54gopm0x . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_cl54gopm0x . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_cl54gopm0x . pEy4 = -
11.348893524622783 ; rtB . expl_temp_cl54gopm0x . pEy3 = 0.091920245082059482
; rtB . expl_temp_cl54gopm0x . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_cl54gopm0x . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_cl54gopm0x . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_cl54gopm0x . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_cl54gopm0x . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_cl54gopm0x . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_cl54gopm0x . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_cl54gopm0x . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_cl54gopm0x . pDy1 = 2.7187677492920517 ; rtB . expl_temp_cl54gopm0x
. pDx3 = 18.451212025074643 ; rtB . expl_temp_cl54gopm0x . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_cl54gopm0x . pDx1 = 3.1471334251245406
; rtB . expl_temp_cl54gopm0x . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_cl54gopm0x . pCx1 = 1.5387936046317499 ; rtB . expl_temp_cl54gopm0x
. R0 = 0.2304 ; rtB . expl_temp_cl54gopm0x . Fz0 = 220.0 ; kjpd011q5n ( rtB .
AM__rr , rtB . d3xonmy1hw [ 15 ] , 0.0 , rtB . d3xonmy1hw [ 6 ] , & rtB .
expl_temp_cl54gopm0x , & rtB . Gxa , & rtB . Fx__rl , & rtB . Fx__fr ) ; rtB
. expl_temp_kkiq3xxxve . lambda__yk = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__xa = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__t = 1.0 ; rtB .
expl_temp_kkiq3xxxve . lambda__s = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__mu__y = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__mu__x = 1.0 ; rtB
. expl_temp_kkiq3xxxve . lambda__gamma__y = 1.0 ; rtB . expl_temp_kkiq3xxxve
. lambda__Vyk = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__Vy = 1.0 ; rtB .
expl_temp_kkiq3xxxve . lambda__Vx = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__Mr = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__Kya = 1.0 ; rtB .
expl_temp_kkiq3xxxve . lambda__Ky = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__Kxk = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__Hy = 1.0 ; rtB .
expl_temp_kkiq3xxxve . lambda__Hx = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__Fz0 = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__Ey = 1.0 ; rtB .
expl_temp_kkiq3xxxve . lambda__Ex = 1.0 ; rtB . expl_temp_kkiq3xxxve .
lambda__Cy = 1.0 ; rtB . expl_temp_kkiq3xxxve . lambda__Cx = 1.0 ; rtB .
expl_temp_kkiq3xxxve . sSz4 = 0.0 ; rtB . expl_temp_kkiq3xxxve . sSz3 = 0.0 ;
rtB . expl_temp_kkiq3xxxve . sSz2 = 0.0 ; rtB . expl_temp_kkiq3xxxve . sSz1 =
0.0 ; rtB . expl_temp_kkiq3xxxve . rVy6 = 29.546630283393668 ; rtB .
expl_temp_kkiq3xxxve . rVy5 = 1.3615089656301738 ; rtB . expl_temp_kkiq3xxxve
. rVy4 = 16.576380991996519 ; rtB . expl_temp_kkiq3xxxve . rVy3 = 0.0 ; rtB .
expl_temp_kkiq3xxxve . rVy2 = 0.0 ; rtB . expl_temp_kkiq3xxxve . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_kkiq3xxxve . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_kkiq3xxxve . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_kkiq3xxxve . rCy1 =
1.2105864414932852 ; rtB . expl_temp_kkiq3xxxve . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_kkiq3xxxve . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_kkiq3xxxve . rBy2 = 11.27197245162861 ; rtB . expl_temp_kkiq3xxxve
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_kkiq3xxxve . rBx2 = -
14.988778673926317 ; rtB . expl_temp_kkiq3xxxve . rBx1 = 18.98428171806113 ;
rtB . expl_temp_kkiq3xxxve . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_kkiq3xxxve . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_kkiq3xxxve . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_kkiq3xxxve . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_kkiq3xxxve . qEz5 = 9.9993657087278045 ; rtB . expl_temp_kkiq3xxxve
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_kkiq3xxxve . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_kkiq3xxxve . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_kkiq3xxxve . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_kkiq3xxxve . qDz9 = 0.0197040933269894 ; rtB . expl_temp_kkiq3xxxve
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_kkiq3xxxve . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_kkiq3xxxve . qDz6 =
0.012414856580811123 ; rtB . expl_temp_kkiq3xxxve . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_kkiq3xxxve . qDz3 = 0.716094457980896 ;
rtB . expl_temp_kkiq3xxxve . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_kkiq3xxxve . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_kkiq3xxxve . qCz1 = 5.8677776192218287 ; rtB . expl_temp_kkiq3xxxve
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_kkiq3xxxve . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_kkiq3xxxve . qBz4 =
0.22301364235368404 ; rtB . expl_temp_kkiq3xxxve . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_kkiq3xxxve . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_kkiq3xxxve . qBz10 =
0.10511724651210722 ; rtB . expl_temp_kkiq3xxxve . qBz1 = 1.5279739203602458
; rtB . expl_temp_kkiq3xxxve . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_kkiq3xxxve . pVy3 = 1.8914508125438863 ; rtB . expl_temp_kkiq3xxxve
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_kkiq3xxxve . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_kkiq3xxxve . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_kkiq3xxxve . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_kkiq3xxxve . pKy3 = 0.07718517111566 ;
rtB . expl_temp_kkiq3xxxve . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_kkiq3xxxve . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_kkiq3xxxve . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_kkiq3xxxve . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_kkiq3xxxve . pKx1 = 82.411460018669146 ; rtB . expl_temp_kkiq3xxxve
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_kkiq3xxxve . pHy2 =
0.000316181479240744 ; rtB . expl_temp_kkiq3xxxve . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_kkiq3xxxve . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_kkiq3xxxve . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_kkiq3xxxve . pEy4 = -
11.348893524622783 ; rtB . expl_temp_kkiq3xxxve . pEy3 = 0.091920245082059482
; rtB . expl_temp_kkiq3xxxve . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_kkiq3xxxve . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_kkiq3xxxve . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_kkiq3xxxve . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_kkiq3xxxve . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_kkiq3xxxve . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_kkiq3xxxve . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_kkiq3xxxve . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_kkiq3xxxve . pDy1 = 2.7187677492920517 ; rtB . expl_temp_kkiq3xxxve
. pDx3 = 18.451212025074643 ; rtB . expl_temp_kkiq3xxxve . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_kkiq3xxxve . pDx1 = 3.1471334251245406
; rtB . expl_temp_kkiq3xxxve . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_kkiq3xxxve . pCx1 = 1.5387936046317499 ; rtB . expl_temp_kkiq3xxxve
. R0 = 0.2304 ; rtB . expl_temp_kkiq3xxxve . Fz0 = 220.0 ; rtB . Gxa =
mid0fak10y ( rtB . d3xonmy1hw [ 15 ] , 0.0 , rtB . d3xonmy1hw [ 6 ] , & rtB .
expl_temp_kkiq3xxxve ) * rtB . Fx__rl + rtB . Fx__fr ; rtB .
expl_temp_cxarnvbvui . lambda__yk = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__xa = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__t = 1.0 ; rtB .
expl_temp_cxarnvbvui . lambda__s = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__mu__y = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__mu__x = 1.0 ; rtB
. expl_temp_cxarnvbvui . lambda__gamma__y = 1.0 ; rtB . expl_temp_cxarnvbvui
. lambda__Vyk = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__Vy = 1.0 ; rtB .
expl_temp_cxarnvbvui . lambda__Vx = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__Mr = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__Kya = 1.0 ; rtB .
expl_temp_cxarnvbvui . lambda__Ky = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__Kxk = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__Hy = 1.0 ; rtB .
expl_temp_cxarnvbvui . lambda__Hx = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__Fz0 = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__Ey = 1.0 ; rtB .
expl_temp_cxarnvbvui . lambda__Ex = 1.0 ; rtB . expl_temp_cxarnvbvui .
lambda__Cy = 1.0 ; rtB . expl_temp_cxarnvbvui . lambda__Cx = 1.0 ; rtB .
expl_temp_cxarnvbvui . sSz4 = 0.0 ; rtB . expl_temp_cxarnvbvui . sSz3 = 0.0 ;
rtB . expl_temp_cxarnvbvui . sSz2 = 0.0 ; rtB . expl_temp_cxarnvbvui . sSz1 =
0.0 ; rtB . expl_temp_cxarnvbvui . rVy6 = 29.546630283393668 ; rtB .
expl_temp_cxarnvbvui . rVy5 = 1.3615089656301738 ; rtB . expl_temp_cxarnvbvui
. rVy4 = 16.576380991996519 ; rtB . expl_temp_cxarnvbvui . rVy3 = 0.0 ; rtB .
expl_temp_cxarnvbvui . rVy2 = 0.0 ; rtB . expl_temp_cxarnvbvui . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_cxarnvbvui . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_cxarnvbvui . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_cxarnvbvui . rCy1 =
1.2105864414932852 ; rtB . expl_temp_cxarnvbvui . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_cxarnvbvui . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_cxarnvbvui . rBy2 = 11.27197245162861 ; rtB . expl_temp_cxarnvbvui
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_cxarnvbvui . rBx2 = -
14.988778673926317 ; rtB . expl_temp_cxarnvbvui . rBx1 = 18.98428171806113 ;
rtB . expl_temp_cxarnvbvui . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_cxarnvbvui . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_cxarnvbvui . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_cxarnvbvui . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_cxarnvbvui . qEz5 = 9.9993657087278045 ; rtB . expl_temp_cxarnvbvui
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_cxarnvbvui . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_cxarnvbvui . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_cxarnvbvui . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_cxarnvbvui . qDz9 = 0.0197040933269894 ; rtB . expl_temp_cxarnvbvui
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_cxarnvbvui . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_cxarnvbvui . qDz6 =
0.012414856580811123 ; rtB . expl_temp_cxarnvbvui . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_cxarnvbvui . qDz3 = 0.716094457980896 ;
rtB . expl_temp_cxarnvbvui . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_cxarnvbvui . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_cxarnvbvui . qCz1 = 5.8677776192218287 ; rtB . expl_temp_cxarnvbvui
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_cxarnvbvui . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_cxarnvbvui . qBz4 =
0.22301364235368404 ; rtB . expl_temp_cxarnvbvui . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_cxarnvbvui . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_cxarnvbvui . qBz10 =
0.10511724651210722 ; rtB . expl_temp_cxarnvbvui . qBz1 = 1.5279739203602458
; rtB . expl_temp_cxarnvbvui . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_cxarnvbvui . pVy3 = 1.8914508125438863 ; rtB . expl_temp_cxarnvbvui
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_cxarnvbvui . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_cxarnvbvui . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_cxarnvbvui . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_cxarnvbvui . pKy3 = 0.07718517111566 ;
rtB . expl_temp_cxarnvbvui . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_cxarnvbvui . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_cxarnvbvui . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_cxarnvbvui . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_cxarnvbvui . pKx1 = 82.411460018669146 ; rtB . expl_temp_cxarnvbvui
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_cxarnvbvui . pHy2 =
0.000316181479240744 ; rtB . expl_temp_cxarnvbvui . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_cxarnvbvui . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_cxarnvbvui . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_cxarnvbvui . pEy4 = -
11.348893524622783 ; rtB . expl_temp_cxarnvbvui . pEy3 = 0.091920245082059482
; rtB . expl_temp_cxarnvbvui . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_cxarnvbvui . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_cxarnvbvui . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_cxarnvbvui . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_cxarnvbvui . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_cxarnvbvui . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_cxarnvbvui . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_cxarnvbvui . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_cxarnvbvui . pDy1 = 2.7187677492920517 ; rtB . expl_temp_cxarnvbvui
. pDx3 = 18.451212025074643 ; rtB . expl_temp_cxarnvbvui . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_cxarnvbvui . pDx1 = 3.1471334251245406
; rtB . expl_temp_cxarnvbvui . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_cxarnvbvui . pCx1 = 1.5387936046317499 ; rtB . expl_temp_cxarnvbvui
. R0 = 0.2304 ; rtB . expl_temp_cxarnvbvui . Fz0 = 220.0 ; rtB . Fx__rl =
cyjnohd3ip ( rtB . AM__rl , - rtB . d3xonmy1hw [ 16 ] , 0.0 , rtB .
d3xonmy1hw [ 7 ] , & rtB . expl_temp_cxarnvbvui ) ; rtB .
expl_temp_bhxxfovxdy . lambda__yk = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__xa = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__t = 1.0 ; rtB .
expl_temp_bhxxfovxdy . lambda__s = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__mu__y = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__mu__x = 1.0 ; rtB
. expl_temp_bhxxfovxdy . lambda__gamma__y = 1.0 ; rtB . expl_temp_bhxxfovxdy
. lambda__Vyk = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__Vy = 1.0 ; rtB .
expl_temp_bhxxfovxdy . lambda__Vx = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__Mr = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__Kya = 1.0 ; rtB .
expl_temp_bhxxfovxdy . lambda__Ky = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__Kxk = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__Hy = 1.0 ; rtB .
expl_temp_bhxxfovxdy . lambda__Hx = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__Fz0 = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__Ey = 1.0 ; rtB .
expl_temp_bhxxfovxdy . lambda__Ex = 1.0 ; rtB . expl_temp_bhxxfovxdy .
lambda__Cy = 1.0 ; rtB . expl_temp_bhxxfovxdy . lambda__Cx = 1.0 ; rtB .
expl_temp_bhxxfovxdy . sSz4 = 0.0 ; rtB . expl_temp_bhxxfovxdy . sSz3 = 0.0 ;
rtB . expl_temp_bhxxfovxdy . sSz2 = 0.0 ; rtB . expl_temp_bhxxfovxdy . sSz1 =
0.0 ; rtB . expl_temp_bhxxfovxdy . rVy6 = 29.546630283393668 ; rtB .
expl_temp_bhxxfovxdy . rVy5 = 1.3615089656301738 ; rtB . expl_temp_bhxxfovxdy
. rVy4 = 16.576380991996519 ; rtB . expl_temp_bhxxfovxdy . rVy3 = 0.0 ; rtB .
expl_temp_bhxxfovxdy . rVy2 = 0.0 ; rtB . expl_temp_bhxxfovxdy . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_bhxxfovxdy . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_bhxxfovxdy . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_bhxxfovxdy . rCy1 =
1.2105864414932852 ; rtB . expl_temp_bhxxfovxdy . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_bhxxfovxdy . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_bhxxfovxdy . rBy2 = 11.27197245162861 ; rtB . expl_temp_bhxxfovxdy
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_bhxxfovxdy . rBx2 = -
14.988778673926317 ; rtB . expl_temp_bhxxfovxdy . rBx1 = 18.98428171806113 ;
rtB . expl_temp_bhxxfovxdy . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_bhxxfovxdy . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_bhxxfovxdy . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_bhxxfovxdy . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_bhxxfovxdy . qEz5 = 9.9993657087278045 ; rtB . expl_temp_bhxxfovxdy
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_bhxxfovxdy . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_bhxxfovxdy . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_bhxxfovxdy . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_bhxxfovxdy . qDz9 = 0.0197040933269894 ; rtB . expl_temp_bhxxfovxdy
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_bhxxfovxdy . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_bhxxfovxdy . qDz6 =
0.012414856580811123 ; rtB . expl_temp_bhxxfovxdy . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_bhxxfovxdy . qDz3 = 0.716094457980896 ;
rtB . expl_temp_bhxxfovxdy . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_bhxxfovxdy . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_bhxxfovxdy . qCz1 = 5.8677776192218287 ; rtB . expl_temp_bhxxfovxdy
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_bhxxfovxdy . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_bhxxfovxdy . qBz4 =
0.22301364235368404 ; rtB . expl_temp_bhxxfovxdy . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_bhxxfovxdy . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_bhxxfovxdy . qBz10 =
0.10511724651210722 ; rtB . expl_temp_bhxxfovxdy . qBz1 = 1.5279739203602458
; rtB . expl_temp_bhxxfovxdy . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_bhxxfovxdy . pVy3 = 1.8914508125438863 ; rtB . expl_temp_bhxxfovxdy
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_bhxxfovxdy . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_bhxxfovxdy . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_bhxxfovxdy . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_bhxxfovxdy . pKy3 = 0.07718517111566 ;
rtB . expl_temp_bhxxfovxdy . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_bhxxfovxdy . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_bhxxfovxdy . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_bhxxfovxdy . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_bhxxfovxdy . pKx1 = 82.411460018669146 ; rtB . expl_temp_bhxxfovxdy
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_bhxxfovxdy . pHy2 =
0.000316181479240744 ; rtB . expl_temp_bhxxfovxdy . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_bhxxfovxdy . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_bhxxfovxdy . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_bhxxfovxdy . pEy4 = -
11.348893524622783 ; rtB . expl_temp_bhxxfovxdy . pEy3 = 0.091920245082059482
; rtB . expl_temp_bhxxfovxdy . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_bhxxfovxdy . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_bhxxfovxdy . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_bhxxfovxdy . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_bhxxfovxdy . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_bhxxfovxdy . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_bhxxfovxdy . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_bhxxfovxdy . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_bhxxfovxdy . pDy1 = 2.7187677492920517 ; rtB . expl_temp_bhxxfovxdy
. pDx3 = 18.451212025074643 ; rtB . expl_temp_bhxxfovxdy . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_bhxxfovxdy . pDx1 = 3.1471334251245406
; rtB . expl_temp_bhxxfovxdy . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_bhxxfovxdy . pCx1 = 1.5387936046317499 ; rtB . expl_temp_bhxxfovxdy
. R0 = 0.2304 ; rtB . expl_temp_bhxxfovxdy . Fz0 = 220.0 ; kjpd011q5n ( rtB .
AM__rl , - rtB . d3xonmy1hw [ 16 ] , 0.0 , rtB . d3xonmy1hw [ 7 ] , & rtB .
expl_temp_bhxxfovxdy , & rtB . Fx__fr , & rtB . Fy__rl , & rtB . Fy__fl ) ;
rtB . expl_temp_pbm3vprmfu . lambda__yk = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__xa = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__t = 1.0 ; rtB .
expl_temp_pbm3vprmfu . lambda__s = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__mu__y = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__mu__x = 1.0 ; rtB
. expl_temp_pbm3vprmfu . lambda__gamma__y = 1.0 ; rtB . expl_temp_pbm3vprmfu
. lambda__Vyk = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__Vy = 1.0 ; rtB .
expl_temp_pbm3vprmfu . lambda__Vx = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__Mr = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__Kya = 1.0 ; rtB .
expl_temp_pbm3vprmfu . lambda__Ky = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__Kxk = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__Hy = 1.0 ; rtB .
expl_temp_pbm3vprmfu . lambda__Hx = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__Fz0 = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__Ey = 1.0 ; rtB .
expl_temp_pbm3vprmfu . lambda__Ex = 1.0 ; rtB . expl_temp_pbm3vprmfu .
lambda__Cy = 1.0 ; rtB . expl_temp_pbm3vprmfu . lambda__Cx = 1.0 ; rtB .
expl_temp_pbm3vprmfu . sSz4 = 0.0 ; rtB . expl_temp_pbm3vprmfu . sSz3 = 0.0 ;
rtB . expl_temp_pbm3vprmfu . sSz2 = 0.0 ; rtB . expl_temp_pbm3vprmfu . sSz1 =
0.0 ; rtB . expl_temp_pbm3vprmfu . rVy6 = 29.546630283393668 ; rtB .
expl_temp_pbm3vprmfu . rVy5 = 1.3615089656301738 ; rtB . expl_temp_pbm3vprmfu
. rVy4 = 16.576380991996519 ; rtB . expl_temp_pbm3vprmfu . rVy3 = 0.0 ; rtB .
expl_temp_pbm3vprmfu . rVy2 = 0.0 ; rtB . expl_temp_pbm3vprmfu . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_pbm3vprmfu . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_pbm3vprmfu . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_pbm3vprmfu . rCy1 =
1.2105864414932852 ; rtB . expl_temp_pbm3vprmfu . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_pbm3vprmfu . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_pbm3vprmfu . rBy2 = 11.27197245162861 ; rtB . expl_temp_pbm3vprmfu
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_pbm3vprmfu . rBx2 = -
14.988778673926317 ; rtB . expl_temp_pbm3vprmfu . rBx1 = 18.98428171806113 ;
rtB . expl_temp_pbm3vprmfu . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_pbm3vprmfu . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_pbm3vprmfu . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_pbm3vprmfu . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_pbm3vprmfu . qEz5 = 9.9993657087278045 ; rtB . expl_temp_pbm3vprmfu
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_pbm3vprmfu . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_pbm3vprmfu . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_pbm3vprmfu . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_pbm3vprmfu . qDz9 = 0.0197040933269894 ; rtB . expl_temp_pbm3vprmfu
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_pbm3vprmfu . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_pbm3vprmfu . qDz6 =
0.012414856580811123 ; rtB . expl_temp_pbm3vprmfu . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_pbm3vprmfu . qDz3 = 0.716094457980896 ;
rtB . expl_temp_pbm3vprmfu . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_pbm3vprmfu . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_pbm3vprmfu . qCz1 = 5.8677776192218287 ; rtB . expl_temp_pbm3vprmfu
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_pbm3vprmfu . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_pbm3vprmfu . qBz4 =
0.22301364235368404 ; rtB . expl_temp_pbm3vprmfu . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_pbm3vprmfu . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_pbm3vprmfu . qBz10 =
0.10511724651210722 ; rtB . expl_temp_pbm3vprmfu . qBz1 = 1.5279739203602458
; rtB . expl_temp_pbm3vprmfu . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_pbm3vprmfu . pVy3 = 1.8914508125438863 ; rtB . expl_temp_pbm3vprmfu
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_pbm3vprmfu . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_pbm3vprmfu . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_pbm3vprmfu . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_pbm3vprmfu . pKy3 = 0.07718517111566 ;
rtB . expl_temp_pbm3vprmfu . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_pbm3vprmfu . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_pbm3vprmfu . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_pbm3vprmfu . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_pbm3vprmfu . pKx1 = 82.411460018669146 ; rtB . expl_temp_pbm3vprmfu
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_pbm3vprmfu . pHy2 =
0.000316181479240744 ; rtB . expl_temp_pbm3vprmfu . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_pbm3vprmfu . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_pbm3vprmfu . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_pbm3vprmfu . pEy4 = -
11.348893524622783 ; rtB . expl_temp_pbm3vprmfu . pEy3 = 0.091920245082059482
; rtB . expl_temp_pbm3vprmfu . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_pbm3vprmfu . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_pbm3vprmfu . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_pbm3vprmfu . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_pbm3vprmfu . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_pbm3vprmfu . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_pbm3vprmfu . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_pbm3vprmfu . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_pbm3vprmfu . pDy1 = 2.7187677492920517 ; rtB . expl_temp_pbm3vprmfu
. pDx3 = 18.451212025074643 ; rtB . expl_temp_pbm3vprmfu . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_pbm3vprmfu . pDx1 = 3.1471334251245406
; rtB . expl_temp_pbm3vprmfu . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_pbm3vprmfu . pCx1 = 1.5387936046317499 ; rtB . expl_temp_pbm3vprmfu
. R0 = 0.2304 ; rtB . expl_temp_pbm3vprmfu . Fz0 = 220.0 ; rtB . Fx__fr =
cyjnohd3ip ( rtB . AM__fr , - rtB . d3xonmy1hw [ 17 ] , 0.0 , rtB .
d3xonmy1hw [ 8 ] , & rtB . expl_temp_pbm3vprmfu ) ; rtB .
expl_temp_cv5hdgrwft . lambda__yk = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__xa = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__t = 1.0 ; rtB .
expl_temp_cv5hdgrwft . lambda__s = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__mu__y = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__mu__x = 1.0 ; rtB
. expl_temp_cv5hdgrwft . lambda__gamma__y = 1.0 ; rtB . expl_temp_cv5hdgrwft
. lambda__Vyk = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__Vy = 1.0 ; rtB .
expl_temp_cv5hdgrwft . lambda__Vx = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__Mr = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__Kya = 1.0 ; rtB .
expl_temp_cv5hdgrwft . lambda__Ky = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__Kxk = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__Hy = 1.0 ; rtB .
expl_temp_cv5hdgrwft . lambda__Hx = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__Fz0 = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__Ey = 1.0 ; rtB .
expl_temp_cv5hdgrwft . lambda__Ex = 1.0 ; rtB . expl_temp_cv5hdgrwft .
lambda__Cy = 1.0 ; rtB . expl_temp_cv5hdgrwft . lambda__Cx = 1.0 ; rtB .
expl_temp_cv5hdgrwft . sSz4 = 0.0 ; rtB . expl_temp_cv5hdgrwft . sSz3 = 0.0 ;
rtB . expl_temp_cv5hdgrwft . sSz2 = 0.0 ; rtB . expl_temp_cv5hdgrwft . sSz1 =
0.0 ; rtB . expl_temp_cv5hdgrwft . rVy6 = 29.546630283393668 ; rtB .
expl_temp_cv5hdgrwft . rVy5 = 1.3615089656301738 ; rtB . expl_temp_cv5hdgrwft
. rVy4 = 16.576380991996519 ; rtB . expl_temp_cv5hdgrwft . rVy3 = 0.0 ; rtB .
expl_temp_cv5hdgrwft . rVy2 = 0.0 ; rtB . expl_temp_cv5hdgrwft . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_cv5hdgrwft . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_cv5hdgrwft . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_cv5hdgrwft . rCy1 =
1.2105864414932852 ; rtB . expl_temp_cv5hdgrwft . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_cv5hdgrwft . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_cv5hdgrwft . rBy2 = 11.27197245162861 ; rtB . expl_temp_cv5hdgrwft
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_cv5hdgrwft . rBx2 = -
14.988778673926317 ; rtB . expl_temp_cv5hdgrwft . rBx1 = 18.98428171806113 ;
rtB . expl_temp_cv5hdgrwft . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_cv5hdgrwft . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_cv5hdgrwft . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_cv5hdgrwft . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_cv5hdgrwft . qEz5 = 9.9993657087278045 ; rtB . expl_temp_cv5hdgrwft
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_cv5hdgrwft . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_cv5hdgrwft . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_cv5hdgrwft . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_cv5hdgrwft . qDz9 = 0.0197040933269894 ; rtB . expl_temp_cv5hdgrwft
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_cv5hdgrwft . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_cv5hdgrwft . qDz6 =
0.012414856580811123 ; rtB . expl_temp_cv5hdgrwft . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_cv5hdgrwft . qDz3 = 0.716094457980896 ;
rtB . expl_temp_cv5hdgrwft . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_cv5hdgrwft . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_cv5hdgrwft . qCz1 = 5.8677776192218287 ; rtB . expl_temp_cv5hdgrwft
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_cv5hdgrwft . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_cv5hdgrwft . qBz4 =
0.22301364235368404 ; rtB . expl_temp_cv5hdgrwft . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_cv5hdgrwft . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_cv5hdgrwft . qBz10 =
0.10511724651210722 ; rtB . expl_temp_cv5hdgrwft . qBz1 = 1.5279739203602458
; rtB . expl_temp_cv5hdgrwft . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_cv5hdgrwft . pVy3 = 1.8914508125438863 ; rtB . expl_temp_cv5hdgrwft
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_cv5hdgrwft . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_cv5hdgrwft . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_cv5hdgrwft . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_cv5hdgrwft . pKy3 = 0.07718517111566 ;
rtB . expl_temp_cv5hdgrwft . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_cv5hdgrwft . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_cv5hdgrwft . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_cv5hdgrwft . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_cv5hdgrwft . pKx1 = 82.411460018669146 ; rtB . expl_temp_cv5hdgrwft
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_cv5hdgrwft . pHy2 =
0.000316181479240744 ; rtB . expl_temp_cv5hdgrwft . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_cv5hdgrwft . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_cv5hdgrwft . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_cv5hdgrwft . pEy4 = -
11.348893524622783 ; rtB . expl_temp_cv5hdgrwft . pEy3 = 0.091920245082059482
; rtB . expl_temp_cv5hdgrwft . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_cv5hdgrwft . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_cv5hdgrwft . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_cv5hdgrwft . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_cv5hdgrwft . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_cv5hdgrwft . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_cv5hdgrwft . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_cv5hdgrwft . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_cv5hdgrwft . pDy1 = 2.7187677492920517 ; rtB . expl_temp_cv5hdgrwft
. pDx3 = 18.451212025074643 ; rtB . expl_temp_cv5hdgrwft . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_cv5hdgrwft . pDx1 = 3.1471334251245406
; rtB . expl_temp_cv5hdgrwft . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_cv5hdgrwft . pCx1 = 1.5387936046317499 ; rtB . expl_temp_cv5hdgrwft
. R0 = 0.2304 ; rtB . expl_temp_cv5hdgrwft . Fz0 = 220.0 ; kjpd011q5n ( rtB .
AM__fr , rtB . d3xonmy1hw [ 17 ] , 0.0 , rtB . d3xonmy1hw [ 8 ] , & rtB .
expl_temp_cv5hdgrwft , & rtB . c_Gxa , & rtB . Fx__fl , & rtB . c_SVyk ) ;
rtB . expl_temp_fqdqrf4qbc . lambda__yk = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__xa = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__t = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . lambda__s = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__mu__y = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__mu__x = 1.0 ; rtB
. expl_temp_fqdqrf4qbc . lambda__gamma__y = 1.0 ; rtB . expl_temp_fqdqrf4qbc
. lambda__Vyk = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__Vy = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . lambda__Vx = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__Mr = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__Kya = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . lambda__Ky = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__Kxk = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__Hy = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . lambda__Hx = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__Fz0 = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__Ey = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . lambda__Ex = 1.0 ; rtB . expl_temp_fqdqrf4qbc .
lambda__Cy = 1.0 ; rtB . expl_temp_fqdqrf4qbc . lambda__Cx = 1.0 ; rtB .
expl_temp_fqdqrf4qbc . sSz4 = 0.0 ; rtB . expl_temp_fqdqrf4qbc . sSz3 = 0.0 ;
rtB . expl_temp_fqdqrf4qbc . sSz2 = 0.0 ; rtB . expl_temp_fqdqrf4qbc . sSz1 =
0.0 ; rtB . expl_temp_fqdqrf4qbc . rVy6 = 29.546630283393668 ; rtB .
expl_temp_fqdqrf4qbc . rVy5 = 1.3615089656301738 ; rtB . expl_temp_fqdqrf4qbc
. rVy4 = 16.576380991996519 ; rtB . expl_temp_fqdqrf4qbc . rVy3 = 0.0 ; rtB .
expl_temp_fqdqrf4qbc . rVy2 = 0.0 ; rtB . expl_temp_fqdqrf4qbc . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_fqdqrf4qbc . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_fqdqrf4qbc . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_fqdqrf4qbc . rCy1 =
1.2105864414932852 ; rtB . expl_temp_fqdqrf4qbc . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_fqdqrf4qbc . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_fqdqrf4qbc . rBy2 = 11.27197245162861 ; rtB . expl_temp_fqdqrf4qbc
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_fqdqrf4qbc . rBx2 = -
14.988778673926317 ; rtB . expl_temp_fqdqrf4qbc . rBx1 = 18.98428171806113 ;
rtB . expl_temp_fqdqrf4qbc . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_fqdqrf4qbc . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_fqdqrf4qbc . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_fqdqrf4qbc . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_fqdqrf4qbc . qEz5 = 9.9993657087278045 ; rtB . expl_temp_fqdqrf4qbc
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_fqdqrf4qbc . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_fqdqrf4qbc . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_fqdqrf4qbc . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_fqdqrf4qbc . qDz9 = 0.0197040933269894 ; rtB . expl_temp_fqdqrf4qbc
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_fqdqrf4qbc . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_fqdqrf4qbc . qDz6 =
0.012414856580811123 ; rtB . expl_temp_fqdqrf4qbc . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_fqdqrf4qbc . qDz3 = 0.716094457980896 ;
rtB . expl_temp_fqdqrf4qbc . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_fqdqrf4qbc . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_fqdqrf4qbc . qCz1 = 5.8677776192218287 ; rtB . expl_temp_fqdqrf4qbc
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_fqdqrf4qbc . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_fqdqrf4qbc . qBz4 =
0.22301364235368404 ; rtB . expl_temp_fqdqrf4qbc . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_fqdqrf4qbc . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_fqdqrf4qbc . qBz10 =
0.10511724651210722 ; rtB . expl_temp_fqdqrf4qbc . qBz1 = 1.5279739203602458
; rtB . expl_temp_fqdqrf4qbc . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_fqdqrf4qbc . pVy3 = 1.8914508125438863 ; rtB . expl_temp_fqdqrf4qbc
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_fqdqrf4qbc . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_fqdqrf4qbc . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_fqdqrf4qbc . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_fqdqrf4qbc . pKy3 = 0.07718517111566 ;
rtB . expl_temp_fqdqrf4qbc . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_fqdqrf4qbc . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_fqdqrf4qbc . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_fqdqrf4qbc . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_fqdqrf4qbc . pKx1 = 82.411460018669146 ; rtB . expl_temp_fqdqrf4qbc
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_fqdqrf4qbc . pHy2 =
0.000316181479240744 ; rtB . expl_temp_fqdqrf4qbc . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_fqdqrf4qbc . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_fqdqrf4qbc . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_fqdqrf4qbc . pEy4 = -
11.348893524622783 ; rtB . expl_temp_fqdqrf4qbc . pEy3 = 0.091920245082059482
; rtB . expl_temp_fqdqrf4qbc . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_fqdqrf4qbc . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_fqdqrf4qbc . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_fqdqrf4qbc . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_fqdqrf4qbc . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_fqdqrf4qbc . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_fqdqrf4qbc . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_fqdqrf4qbc . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_fqdqrf4qbc . pDy1 = 2.7187677492920517 ; rtB . expl_temp_fqdqrf4qbc
. pDx3 = 18.451212025074643 ; rtB . expl_temp_fqdqrf4qbc . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_fqdqrf4qbc . pDx1 = 3.1471334251245406
; rtB . expl_temp_fqdqrf4qbc . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_fqdqrf4qbc . pCx1 = 1.5387936046317499 ; rtB . expl_temp_fqdqrf4qbc
. R0 = 0.2304 ; rtB . expl_temp_fqdqrf4qbc . Fz0 = 220.0 ; rtB . c_Gxa =
mid0fak10y ( rtB . d3xonmy1hw [ 17 ] , 0.0 , rtB . d3xonmy1hw [ 8 ] , & rtB .
expl_temp_fqdqrf4qbc ) * rtB . Fx__fl + rtB . c_SVyk ; rtB .
expl_temp_g2mlkqadfk . lambda__yk = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__xa = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__t = 1.0 ; rtB .
expl_temp_g2mlkqadfk . lambda__s = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__mu__y = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__mu__x = 1.0 ; rtB
. expl_temp_g2mlkqadfk . lambda__gamma__y = 1.0 ; rtB . expl_temp_g2mlkqadfk
. lambda__Vyk = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__Vy = 1.0 ; rtB .
expl_temp_g2mlkqadfk . lambda__Vx = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__Mr = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__Kya = 1.0 ; rtB .
expl_temp_g2mlkqadfk . lambda__Ky = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__Kxk = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__Hy = 1.0 ; rtB .
expl_temp_g2mlkqadfk . lambda__Hx = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__Fz0 = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__Ey = 1.0 ; rtB .
expl_temp_g2mlkqadfk . lambda__Ex = 1.0 ; rtB . expl_temp_g2mlkqadfk .
lambda__Cy = 1.0 ; rtB . expl_temp_g2mlkqadfk . lambda__Cx = 1.0 ; rtB .
expl_temp_g2mlkqadfk . sSz4 = 0.0 ; rtB . expl_temp_g2mlkqadfk . sSz3 = 0.0 ;
rtB . expl_temp_g2mlkqadfk . sSz2 = 0.0 ; rtB . expl_temp_g2mlkqadfk . sSz1 =
0.0 ; rtB . expl_temp_g2mlkqadfk . rVy6 = 29.546630283393668 ; rtB .
expl_temp_g2mlkqadfk . rVy5 = 1.3615089656301738 ; rtB . expl_temp_g2mlkqadfk
. rVy4 = 16.576380991996519 ; rtB . expl_temp_g2mlkqadfk . rVy3 = 0.0 ; rtB .
expl_temp_g2mlkqadfk . rVy2 = 0.0 ; rtB . expl_temp_g2mlkqadfk . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_g2mlkqadfk . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_g2mlkqadfk . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_g2mlkqadfk . rCy1 =
1.2105864414932852 ; rtB . expl_temp_g2mlkqadfk . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_g2mlkqadfk . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_g2mlkqadfk . rBy2 = 11.27197245162861 ; rtB . expl_temp_g2mlkqadfk
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_g2mlkqadfk . rBx2 = -
14.988778673926317 ; rtB . expl_temp_g2mlkqadfk . rBx1 = 18.98428171806113 ;
rtB . expl_temp_g2mlkqadfk . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_g2mlkqadfk . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_g2mlkqadfk . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_g2mlkqadfk . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_g2mlkqadfk . qEz5 = 9.9993657087278045 ; rtB . expl_temp_g2mlkqadfk
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_g2mlkqadfk . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_g2mlkqadfk . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_g2mlkqadfk . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_g2mlkqadfk . qDz9 = 0.0197040933269894 ; rtB . expl_temp_g2mlkqadfk
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_g2mlkqadfk . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_g2mlkqadfk . qDz6 =
0.012414856580811123 ; rtB . expl_temp_g2mlkqadfk . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_g2mlkqadfk . qDz3 = 0.716094457980896 ;
rtB . expl_temp_g2mlkqadfk . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_g2mlkqadfk . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_g2mlkqadfk . qCz1 = 5.8677776192218287 ; rtB . expl_temp_g2mlkqadfk
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_g2mlkqadfk . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_g2mlkqadfk . qBz4 =
0.22301364235368404 ; rtB . expl_temp_g2mlkqadfk . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_g2mlkqadfk . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_g2mlkqadfk . qBz10 =
0.10511724651210722 ; rtB . expl_temp_g2mlkqadfk . qBz1 = 1.5279739203602458
; rtB . expl_temp_g2mlkqadfk . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_g2mlkqadfk . pVy3 = 1.8914508125438863 ; rtB . expl_temp_g2mlkqadfk
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_g2mlkqadfk . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_g2mlkqadfk . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_g2mlkqadfk . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_g2mlkqadfk . pKy3 = 0.07718517111566 ;
rtB . expl_temp_g2mlkqadfk . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_g2mlkqadfk . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_g2mlkqadfk . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_g2mlkqadfk . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_g2mlkqadfk . pKx1 = 82.411460018669146 ; rtB . expl_temp_g2mlkqadfk
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_g2mlkqadfk . pHy2 =
0.000316181479240744 ; rtB . expl_temp_g2mlkqadfk . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_g2mlkqadfk . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_g2mlkqadfk . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_g2mlkqadfk . pEy4 = -
11.348893524622783 ; rtB . expl_temp_g2mlkqadfk . pEy3 = 0.091920245082059482
; rtB . expl_temp_g2mlkqadfk . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_g2mlkqadfk . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_g2mlkqadfk . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_g2mlkqadfk . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_g2mlkqadfk . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_g2mlkqadfk . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_g2mlkqadfk . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_g2mlkqadfk . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_g2mlkqadfk . pDy1 = 2.7187677492920517 ; rtB . expl_temp_g2mlkqadfk
. pDx3 = 18.451212025074643 ; rtB . expl_temp_g2mlkqadfk . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_g2mlkqadfk . pDx1 = 3.1471334251245406
; rtB . expl_temp_g2mlkqadfk . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_g2mlkqadfk . pCx1 = 1.5387936046317499 ; rtB . expl_temp_g2mlkqadfk
. R0 = 0.2304 ; rtB . expl_temp_g2mlkqadfk . Fz0 = 220.0 ; rtB . Fx__fl =
cyjnohd3ip ( rtB . AM__fl , - rtB . d3xonmy1hw [ 18 ] , 0.0 , rtB .
d3xonmy1hw [ 9 ] , & rtB . expl_temp_g2mlkqadfk ) ; rtB .
expl_temp_g1smspu5ke . lambda__yk = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__xa = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__t = 1.0 ; rtB .
expl_temp_g1smspu5ke . lambda__s = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__mu__y = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__mu__x = 1.0 ; rtB
. expl_temp_g1smspu5ke . lambda__gamma__y = 1.0 ; rtB . expl_temp_g1smspu5ke
. lambda__Vyk = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__Vy = 1.0 ; rtB .
expl_temp_g1smspu5ke . lambda__Vx = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__Mr = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__Kya = 1.0 ; rtB .
expl_temp_g1smspu5ke . lambda__Ky = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__Kxk = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__Hy = 1.0 ; rtB .
expl_temp_g1smspu5ke . lambda__Hx = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__Fz0 = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__Ey = 1.0 ; rtB .
expl_temp_g1smspu5ke . lambda__Ex = 1.0 ; rtB . expl_temp_g1smspu5ke .
lambda__Cy = 1.0 ; rtB . expl_temp_g1smspu5ke . lambda__Cx = 1.0 ; rtB .
expl_temp_g1smspu5ke . sSz4 = 0.0 ; rtB . expl_temp_g1smspu5ke . sSz3 = 0.0 ;
rtB . expl_temp_g1smspu5ke . sSz2 = 0.0 ; rtB . expl_temp_g1smspu5ke . sSz1 =
0.0 ; rtB . expl_temp_g1smspu5ke . rVy6 = 29.546630283393668 ; rtB .
expl_temp_g1smspu5ke . rVy5 = 1.3615089656301738 ; rtB . expl_temp_g1smspu5ke
. rVy4 = 16.576380991996519 ; rtB . expl_temp_g1smspu5ke . rVy3 = 0.0 ; rtB .
expl_temp_g1smspu5ke . rVy2 = 0.0 ; rtB . expl_temp_g1smspu5ke . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_g1smspu5ke . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_g1smspu5ke . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_g1smspu5ke . rCy1 =
1.2105864414932852 ; rtB . expl_temp_g1smspu5ke . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_g1smspu5ke . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_g1smspu5ke . rBy2 = 11.27197245162861 ; rtB . expl_temp_g1smspu5ke
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_g1smspu5ke . rBx2 = -
14.988778673926317 ; rtB . expl_temp_g1smspu5ke . rBx1 = 18.98428171806113 ;
rtB . expl_temp_g1smspu5ke . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_g1smspu5ke . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_g1smspu5ke . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_g1smspu5ke . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_g1smspu5ke . qEz5 = 9.9993657087278045 ; rtB . expl_temp_g1smspu5ke
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_g1smspu5ke . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_g1smspu5ke . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_g1smspu5ke . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_g1smspu5ke . qDz9 = 0.0197040933269894 ; rtB . expl_temp_g1smspu5ke
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_g1smspu5ke . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_g1smspu5ke . qDz6 =
0.012414856580811123 ; rtB . expl_temp_g1smspu5ke . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_g1smspu5ke . qDz3 = 0.716094457980896 ;
rtB . expl_temp_g1smspu5ke . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_g1smspu5ke . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_g1smspu5ke . qCz1 = 5.8677776192218287 ; rtB . expl_temp_g1smspu5ke
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_g1smspu5ke . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_g1smspu5ke . qBz4 =
0.22301364235368404 ; rtB . expl_temp_g1smspu5ke . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_g1smspu5ke . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_g1smspu5ke . qBz10 =
0.10511724651210722 ; rtB . expl_temp_g1smspu5ke . qBz1 = 1.5279739203602458
; rtB . expl_temp_g1smspu5ke . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_g1smspu5ke . pVy3 = 1.8914508125438863 ; rtB . expl_temp_g1smspu5ke
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_g1smspu5ke . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_g1smspu5ke . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_g1smspu5ke . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_g1smspu5ke . pKy3 = 0.07718517111566 ;
rtB . expl_temp_g1smspu5ke . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_g1smspu5ke . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_g1smspu5ke . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_g1smspu5ke . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_g1smspu5ke . pKx1 = 82.411460018669146 ; rtB . expl_temp_g1smspu5ke
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_g1smspu5ke . pHy2 =
0.000316181479240744 ; rtB . expl_temp_g1smspu5ke . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_g1smspu5ke . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_g1smspu5ke . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_g1smspu5ke . pEy4 = -
11.348893524622783 ; rtB . expl_temp_g1smspu5ke . pEy3 = 0.091920245082059482
; rtB . expl_temp_g1smspu5ke . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_g1smspu5ke . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_g1smspu5ke . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_g1smspu5ke . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_g1smspu5ke . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_g1smspu5ke . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_g1smspu5ke . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_g1smspu5ke . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_g1smspu5ke . pDy1 = 2.7187677492920517 ; rtB . expl_temp_g1smspu5ke
. pDx3 = 18.451212025074643 ; rtB . expl_temp_g1smspu5ke . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_g1smspu5ke . pDx1 = 3.1471334251245406
; rtB . expl_temp_g1smspu5ke . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_g1smspu5ke . pCx1 = 1.5387936046317499 ; rtB . expl_temp_g1smspu5ke
. R0 = 0.2304 ; rtB . expl_temp_g1smspu5ke . Fz0 = 220.0 ; kjpd011q5n ( rtB .
AM__fl , - rtB . d3xonmy1hw [ 18 ] , 0.0 , rtB . d3xonmy1hw [ 9 ] , & rtB .
expl_temp_g1smspu5ke , & rtB . d_Gxa , & rtB . c_SVyk , & rtB . d_SVyk ) ;
rtB . expl_temp_merlcviukg . lambda__yk = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__xa = 1.0 ; rtB . expl_temp_merlcviukg . lambda__t = 1.0 ; rtB .
expl_temp_merlcviukg . lambda__s = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__mu__y = 1.0 ; rtB . expl_temp_merlcviukg . lambda__mu__x = 1.0 ; rtB
. expl_temp_merlcviukg . lambda__gamma__y = 1.0 ; rtB . expl_temp_merlcviukg
. lambda__Vyk = 1.0 ; rtB . expl_temp_merlcviukg . lambda__Vy = 1.0 ; rtB .
expl_temp_merlcviukg . lambda__Vx = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__Mr = 1.0 ; rtB . expl_temp_merlcviukg . lambda__Kya = 1.0 ; rtB .
expl_temp_merlcviukg . lambda__Ky = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__Kxk = 1.0 ; rtB . expl_temp_merlcviukg . lambda__Hy = 1.0 ; rtB .
expl_temp_merlcviukg . lambda__Hx = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__Fz0 = 1.0 ; rtB . expl_temp_merlcviukg . lambda__Ey = 1.0 ; rtB .
expl_temp_merlcviukg . lambda__Ex = 1.0 ; rtB . expl_temp_merlcviukg .
lambda__Cy = 1.0 ; rtB . expl_temp_merlcviukg . lambda__Cx = 1.0 ; rtB .
expl_temp_merlcviukg . sSz4 = 0.0 ; rtB . expl_temp_merlcviukg . sSz3 = 0.0 ;
rtB . expl_temp_merlcviukg . sSz2 = 0.0 ; rtB . expl_temp_merlcviukg . sSz1 =
0.0 ; rtB . expl_temp_merlcviukg . rVy6 = 29.546630283393668 ; rtB .
expl_temp_merlcviukg . rVy5 = 1.3615089656301738 ; rtB . expl_temp_merlcviukg
. rVy4 = 16.576380991996519 ; rtB . expl_temp_merlcviukg . rVy3 = 0.0 ; rtB .
expl_temp_merlcviukg . rVy2 = 0.0 ; rtB . expl_temp_merlcviukg . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_merlcviukg . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_merlcviukg . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_merlcviukg . rCy1 =
1.2105864414932852 ; rtB . expl_temp_merlcviukg . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_merlcviukg . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_merlcviukg . rBy2 = 11.27197245162861 ; rtB . expl_temp_merlcviukg
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_merlcviukg . rBx2 = -
14.988778673926317 ; rtB . expl_temp_merlcviukg . rBx1 = 18.98428171806113 ;
rtB . expl_temp_merlcviukg . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_merlcviukg . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_merlcviukg . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_merlcviukg . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_merlcviukg . qEz5 = 9.9993657087278045 ; rtB . expl_temp_merlcviukg
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_merlcviukg . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_merlcviukg . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_merlcviukg . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_merlcviukg . qDz9 = 0.0197040933269894 ; rtB . expl_temp_merlcviukg
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_merlcviukg . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_merlcviukg . qDz6 =
0.012414856580811123 ; rtB . expl_temp_merlcviukg . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_merlcviukg . qDz3 = 0.716094457980896 ;
rtB . expl_temp_merlcviukg . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_merlcviukg . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_merlcviukg . qCz1 = 5.8677776192218287 ; rtB . expl_temp_merlcviukg
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_merlcviukg . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_merlcviukg . qBz4 =
0.22301364235368404 ; rtB . expl_temp_merlcviukg . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_merlcviukg . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_merlcviukg . qBz10 =
0.10511724651210722 ; rtB . expl_temp_merlcviukg . qBz1 = 1.5279739203602458
; rtB . expl_temp_merlcviukg . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_merlcviukg . pVy3 = 1.8914508125438863 ; rtB . expl_temp_merlcviukg
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_merlcviukg . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_merlcviukg . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_merlcviukg . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_merlcviukg . pKy3 = 0.07718517111566 ;
rtB . expl_temp_merlcviukg . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_merlcviukg . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_merlcviukg . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_merlcviukg . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_merlcviukg . pKx1 = 82.411460018669146 ; rtB . expl_temp_merlcviukg
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_merlcviukg . pHy2 =
0.000316181479240744 ; rtB . expl_temp_merlcviukg . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_merlcviukg . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_merlcviukg . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_merlcviukg . pEy4 = -
11.348893524622783 ; rtB . expl_temp_merlcviukg . pEy3 = 0.091920245082059482
; rtB . expl_temp_merlcviukg . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_merlcviukg . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_merlcviukg . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_merlcviukg . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_merlcviukg . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_merlcviukg . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_merlcviukg . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_merlcviukg . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_merlcviukg . pDy1 = 2.7187677492920517 ; rtB . expl_temp_merlcviukg
. pDx3 = 18.451212025074643 ; rtB . expl_temp_merlcviukg . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_merlcviukg . pDx1 = 3.1471334251245406
; rtB . expl_temp_merlcviukg . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_merlcviukg . pCx1 = 1.5387936046317499 ; rtB . expl_temp_merlcviukg
. R0 = 0.2304 ; rtB . expl_temp_merlcviukg . Fz0 = 220.0 ; rtB . Fy__rl = - (
mid0fak10y ( - rtB . d3xonmy1hw [ 16 ] , 0.0 , rtB . d3xonmy1hw [ 7 ] , & rtB
. expl_temp_merlcviukg ) * rtB . Fy__rl + rtB . Fy__fl ) ; rtB .
expl_temp_nz4o0shxby . lambda__yk = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__xa = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__t = 1.0 ; rtB .
expl_temp_nz4o0shxby . lambda__s = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__mu__y = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__mu__x = 1.0 ; rtB
. expl_temp_nz4o0shxby . lambda__gamma__y = 1.0 ; rtB . expl_temp_nz4o0shxby
. lambda__Vyk = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__Vy = 1.0 ; rtB .
expl_temp_nz4o0shxby . lambda__Vx = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__Mr = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__Kya = 1.0 ; rtB .
expl_temp_nz4o0shxby . lambda__Ky = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__Kxk = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__Hy = 1.0 ; rtB .
expl_temp_nz4o0shxby . lambda__Hx = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__Fz0 = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__Ey = 1.0 ; rtB .
expl_temp_nz4o0shxby . lambda__Ex = 1.0 ; rtB . expl_temp_nz4o0shxby .
lambda__Cy = 1.0 ; rtB . expl_temp_nz4o0shxby . lambda__Cx = 1.0 ; rtB .
expl_temp_nz4o0shxby . sSz4 = 0.0 ; rtB . expl_temp_nz4o0shxby . sSz3 = 0.0 ;
rtB . expl_temp_nz4o0shxby . sSz2 = 0.0 ; rtB . expl_temp_nz4o0shxby . sSz1 =
0.0 ; rtB . expl_temp_nz4o0shxby . rVy6 = 29.546630283393668 ; rtB .
expl_temp_nz4o0shxby . rVy5 = 1.3615089656301738 ; rtB . expl_temp_nz4o0shxby
. rVy4 = 16.576380991996519 ; rtB . expl_temp_nz4o0shxby . rVy3 = 0.0 ; rtB .
expl_temp_nz4o0shxby . rVy2 = 0.0 ; rtB . expl_temp_nz4o0shxby . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_nz4o0shxby . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_nz4o0shxby . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_nz4o0shxby . rCy1 =
1.2105864414932852 ; rtB . expl_temp_nz4o0shxby . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_nz4o0shxby . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_nz4o0shxby . rBy2 = 11.27197245162861 ; rtB . expl_temp_nz4o0shxby
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_nz4o0shxby . rBx2 = -
14.988778673926317 ; rtB . expl_temp_nz4o0shxby . rBx1 = 18.98428171806113 ;
rtB . expl_temp_nz4o0shxby . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_nz4o0shxby . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_nz4o0shxby . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_nz4o0shxby . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_nz4o0shxby . qEz5 = 9.9993657087278045 ; rtB . expl_temp_nz4o0shxby
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_nz4o0shxby . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_nz4o0shxby . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_nz4o0shxby . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_nz4o0shxby . qDz9 = 0.0197040933269894 ; rtB . expl_temp_nz4o0shxby
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_nz4o0shxby . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_nz4o0shxby . qDz6 =
0.012414856580811123 ; rtB . expl_temp_nz4o0shxby . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_nz4o0shxby . qDz3 = 0.716094457980896 ;
rtB . expl_temp_nz4o0shxby . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_nz4o0shxby . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_nz4o0shxby . qCz1 = 5.8677776192218287 ; rtB . expl_temp_nz4o0shxby
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_nz4o0shxby . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_nz4o0shxby . qBz4 =
0.22301364235368404 ; rtB . expl_temp_nz4o0shxby . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_nz4o0shxby . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_nz4o0shxby . qBz10 =
0.10511724651210722 ; rtB . expl_temp_nz4o0shxby . qBz1 = 1.5279739203602458
; rtB . expl_temp_nz4o0shxby . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_nz4o0shxby . pVy3 = 1.8914508125438863 ; rtB . expl_temp_nz4o0shxby
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_nz4o0shxby . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_nz4o0shxby . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_nz4o0shxby . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_nz4o0shxby . pKy3 = 0.07718517111566 ;
rtB . expl_temp_nz4o0shxby . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_nz4o0shxby . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_nz4o0shxby . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_nz4o0shxby . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_nz4o0shxby . pKx1 = 82.411460018669146 ; rtB . expl_temp_nz4o0shxby
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_nz4o0shxby . pHy2 =
0.000316181479240744 ; rtB . expl_temp_nz4o0shxby . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_nz4o0shxby . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_nz4o0shxby . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_nz4o0shxby . pEy4 = -
11.348893524622783 ; rtB . expl_temp_nz4o0shxby . pEy3 = 0.091920245082059482
; rtB . expl_temp_nz4o0shxby . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_nz4o0shxby . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_nz4o0shxby . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_nz4o0shxby . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_nz4o0shxby . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_nz4o0shxby . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_nz4o0shxby . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_nz4o0shxby . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_nz4o0shxby . pDy1 = 2.7187677492920517 ; rtB . expl_temp_nz4o0shxby
. pDx3 = 18.451212025074643 ; rtB . expl_temp_nz4o0shxby . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_nz4o0shxby . pDx1 = 3.1471334251245406
; rtB . expl_temp_nz4o0shxby . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_nz4o0shxby . pCx1 = 1.5387936046317499 ; rtB . expl_temp_nz4o0shxby
. R0 = 0.2304 ; rtB . expl_temp_nz4o0shxby . Fz0 = 220.0 ; rtB . Fy__fl = - (
mid0fak10y ( - rtB . d3xonmy1hw [ 18 ] , 0.0 , rtB . d3xonmy1hw [ 9 ] , & rtB
. expl_temp_nz4o0shxby ) * rtB . c_SVyk + rtB . d_SVyk ) ; rtB .
expl_temp_ppxrqq0gsf . lambda__yk = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__xa = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__t = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . lambda__s = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__mu__y = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__mu__x = 1.0 ; rtB
. expl_temp_ppxrqq0gsf . lambda__gamma__y = 1.0 ; rtB . expl_temp_ppxrqq0gsf
. lambda__Vyk = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__Vy = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . lambda__Vx = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__Mr = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__Kya = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . lambda__Ky = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__Kxk = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__Hy = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . lambda__Hx = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__Fz0 = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__Ey = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . lambda__Ex = 1.0 ; rtB . expl_temp_ppxrqq0gsf .
lambda__Cy = 1.0 ; rtB . expl_temp_ppxrqq0gsf . lambda__Cx = 1.0 ; rtB .
expl_temp_ppxrqq0gsf . sSz4 = 0.0 ; rtB . expl_temp_ppxrqq0gsf . sSz3 = 0.0 ;
rtB . expl_temp_ppxrqq0gsf . sSz2 = 0.0 ; rtB . expl_temp_ppxrqq0gsf . sSz1 =
0.0 ; rtB . expl_temp_ppxrqq0gsf . rVy6 = 29.546630283393668 ; rtB .
expl_temp_ppxrqq0gsf . rVy5 = 1.3615089656301738 ; rtB . expl_temp_ppxrqq0gsf
. rVy4 = 16.576380991996519 ; rtB . expl_temp_ppxrqq0gsf . rVy3 = 0.0 ; rtB .
expl_temp_ppxrqq0gsf . rVy2 = 0.0 ; rtB . expl_temp_ppxrqq0gsf . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_ppxrqq0gsf . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_ppxrqq0gsf . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_ppxrqq0gsf . rCy1 =
1.2105864414932852 ; rtB . expl_temp_ppxrqq0gsf . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_ppxrqq0gsf . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_ppxrqq0gsf . rBy2 = 11.27197245162861 ; rtB . expl_temp_ppxrqq0gsf
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_ppxrqq0gsf . rBx2 = -
14.988778673926317 ; rtB . expl_temp_ppxrqq0gsf . rBx1 = 18.98428171806113 ;
rtB . expl_temp_ppxrqq0gsf . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_ppxrqq0gsf . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_ppxrqq0gsf . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_ppxrqq0gsf . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_ppxrqq0gsf . qEz5 = 9.9993657087278045 ; rtB . expl_temp_ppxrqq0gsf
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_ppxrqq0gsf . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_ppxrqq0gsf . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_ppxrqq0gsf . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_ppxrqq0gsf . qDz9 = 0.0197040933269894 ; rtB . expl_temp_ppxrqq0gsf
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_ppxrqq0gsf . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_ppxrqq0gsf . qDz6 =
0.012414856580811123 ; rtB . expl_temp_ppxrqq0gsf . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_ppxrqq0gsf . qDz3 = 0.716094457980896 ;
rtB . expl_temp_ppxrqq0gsf . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_ppxrqq0gsf . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_ppxrqq0gsf . qCz1 = 5.8677776192218287 ; rtB . expl_temp_ppxrqq0gsf
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_ppxrqq0gsf . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_ppxrqq0gsf . qBz4 =
0.22301364235368404 ; rtB . expl_temp_ppxrqq0gsf . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_ppxrqq0gsf . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_ppxrqq0gsf . qBz10 =
0.10511724651210722 ; rtB . expl_temp_ppxrqq0gsf . qBz1 = 1.5279739203602458
; rtB . expl_temp_ppxrqq0gsf . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_ppxrqq0gsf . pVy3 = 1.8914508125438863 ; rtB . expl_temp_ppxrqq0gsf
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_ppxrqq0gsf . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_ppxrqq0gsf . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_ppxrqq0gsf . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_ppxrqq0gsf . pKy3 = 0.07718517111566 ;
rtB . expl_temp_ppxrqq0gsf . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_ppxrqq0gsf . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_ppxrqq0gsf . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_ppxrqq0gsf . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_ppxrqq0gsf . pKx1 = 82.411460018669146 ; rtB . expl_temp_ppxrqq0gsf
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_ppxrqq0gsf . pHy2 =
0.000316181479240744 ; rtB . expl_temp_ppxrqq0gsf . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_ppxrqq0gsf . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_ppxrqq0gsf . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_ppxrqq0gsf . pEy4 = -
11.348893524622783 ; rtB . expl_temp_ppxrqq0gsf . pEy3 = 0.091920245082059482
; rtB . expl_temp_ppxrqq0gsf . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_ppxrqq0gsf . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_ppxrqq0gsf . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_ppxrqq0gsf . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_ppxrqq0gsf . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_ppxrqq0gsf . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_ppxrqq0gsf . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_ppxrqq0gsf . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_ppxrqq0gsf . pDy1 = 2.7187677492920517 ; rtB . expl_temp_ppxrqq0gsf
. pDx3 = 18.451212025074643 ; rtB . expl_temp_ppxrqq0gsf . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_ppxrqq0gsf . pDx1 = 3.1471334251245406
; rtB . expl_temp_ppxrqq0gsf . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_ppxrqq0gsf . pCx1 = 1.5387936046317499 ; rtB . expl_temp_ppxrqq0gsf
. R0 = 0.2304 ; rtB . expl_temp_ppxrqq0gsf . Fz0 = 220.0 ; rtB . AM__rr =
d32el2qobw ( rtB . AM__rr , rtB . d3xonmy1hw [ 15 ] , 0.0 , rtB . d3xonmy1hw
[ 6 ] , & rtB . expl_temp_ppxrqq0gsf ) ; rtB . expl_temp_llw0u2ae0v .
lambda__yk = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__xa = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__t = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__s = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__mu__y = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__mu__x = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__gamma__y = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__Vyk = 1.0 ; rtB
. expl_temp_llw0u2ae0v . lambda__Vy = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__Vx = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__Mr = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__Kya = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__Ky = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__Kxk = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__Hy = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__Hx = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__Fz0 = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__Ey = 1.0 ; rtB . expl_temp_llw0u2ae0v .
lambda__Ex = 1.0 ; rtB . expl_temp_llw0u2ae0v . lambda__Cy = 1.0 ; rtB .
expl_temp_llw0u2ae0v . lambda__Cx = 1.0 ; rtB . expl_temp_llw0u2ae0v . sSz4 =
0.0 ; rtB . expl_temp_llw0u2ae0v . sSz3 = 0.0 ; rtB . expl_temp_llw0u2ae0v .
sSz2 = 0.0 ; rtB . expl_temp_llw0u2ae0v . sSz1 = 0.0 ; rtB .
expl_temp_llw0u2ae0v . rVy6 = 29.546630283393668 ; rtB . expl_temp_llw0u2ae0v
. rVy5 = 1.3615089656301738 ; rtB . expl_temp_llw0u2ae0v . rVy4 =
16.576380991996519 ; rtB . expl_temp_llw0u2ae0v . rVy3 = 0.0 ; rtB .
expl_temp_llw0u2ae0v . rVy2 = 0.0 ; rtB . expl_temp_llw0u2ae0v . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_llw0u2ae0v . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_llw0u2ae0v . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_llw0u2ae0v . rCy1 =
1.2105864414932852 ; rtB . expl_temp_llw0u2ae0v . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_llw0u2ae0v . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_llw0u2ae0v . rBy2 = 11.27197245162861 ; rtB . expl_temp_llw0u2ae0v
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_llw0u2ae0v . rBx2 = -
14.988778673926317 ; rtB . expl_temp_llw0u2ae0v . rBx1 = 18.98428171806113 ;
rtB . expl_temp_llw0u2ae0v . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_llw0u2ae0v . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_llw0u2ae0v . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_llw0u2ae0v . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_llw0u2ae0v . qEz5 = 9.9993657087278045 ; rtB . expl_temp_llw0u2ae0v
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_llw0u2ae0v . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_llw0u2ae0v . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_llw0u2ae0v . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_llw0u2ae0v . qDz9 = 0.0197040933269894 ; rtB . expl_temp_llw0u2ae0v
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_llw0u2ae0v . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_llw0u2ae0v . qDz6 =
0.012414856580811123 ; rtB . expl_temp_llw0u2ae0v . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_llw0u2ae0v . qDz3 = 0.716094457980896 ;
rtB . expl_temp_llw0u2ae0v . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_llw0u2ae0v . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_llw0u2ae0v . qCz1 = 5.8677776192218287 ; rtB . expl_temp_llw0u2ae0v
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_llw0u2ae0v . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_llw0u2ae0v . qBz4 =
0.22301364235368404 ; rtB . expl_temp_llw0u2ae0v . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_llw0u2ae0v . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_llw0u2ae0v . qBz10 =
0.10511724651210722 ; rtB . expl_temp_llw0u2ae0v . qBz1 = 1.5279739203602458
; rtB . expl_temp_llw0u2ae0v . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_llw0u2ae0v . pVy3 = 1.8914508125438863 ; rtB . expl_temp_llw0u2ae0v
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_llw0u2ae0v . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_llw0u2ae0v . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_llw0u2ae0v . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_llw0u2ae0v . pKy3 = 0.07718517111566 ;
rtB . expl_temp_llw0u2ae0v . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_llw0u2ae0v . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_llw0u2ae0v . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_llw0u2ae0v . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_llw0u2ae0v . pKx1 = 82.411460018669146 ; rtB . expl_temp_llw0u2ae0v
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_llw0u2ae0v . pHy2 =
0.000316181479240744 ; rtB . expl_temp_llw0u2ae0v . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_llw0u2ae0v . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_llw0u2ae0v . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_llw0u2ae0v . pEy4 = -
11.348893524622783 ; rtB . expl_temp_llw0u2ae0v . pEy3 = 0.091920245082059482
; rtB . expl_temp_llw0u2ae0v . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_llw0u2ae0v . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_llw0u2ae0v . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_llw0u2ae0v . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_llw0u2ae0v . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_llw0u2ae0v . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_llw0u2ae0v . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_llw0u2ae0v . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_llw0u2ae0v . pDy1 = 2.7187677492920517 ; rtB . expl_temp_llw0u2ae0v
. pDx3 = 18.451212025074643 ; rtB . expl_temp_llw0u2ae0v . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_llw0u2ae0v . pDx1 = 3.1471334251245406
; rtB . expl_temp_llw0u2ae0v . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_llw0u2ae0v . pCx1 = 1.5387936046317499 ; rtB . expl_temp_llw0u2ae0v
. R0 = 0.2304 ; rtB . expl_temp_llw0u2ae0v . Fz0 = 220.0 ; rtB . AM__rl = -
d32el2qobw ( rtB . AM__rl , - rtB . d3xonmy1hw [ 16 ] , 0.0 , rtB .
d3xonmy1hw [ 7 ] , & rtB . expl_temp_llw0u2ae0v ) ; rtB .
expl_temp_jwzvbuczlb . lambda__yk = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__xa = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__t = 1.0 ; rtB .
expl_temp_jwzvbuczlb . lambda__s = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__mu__y = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__mu__x = 1.0 ; rtB
. expl_temp_jwzvbuczlb . lambda__gamma__y = 1.0 ; rtB . expl_temp_jwzvbuczlb
. lambda__Vyk = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__Vy = 1.0 ; rtB .
expl_temp_jwzvbuczlb . lambda__Vx = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__Mr = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__Kya = 1.0 ; rtB .
expl_temp_jwzvbuczlb . lambda__Ky = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__Kxk = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__Hy = 1.0 ; rtB .
expl_temp_jwzvbuczlb . lambda__Hx = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__Fz0 = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__Ey = 1.0 ; rtB .
expl_temp_jwzvbuczlb . lambda__Ex = 1.0 ; rtB . expl_temp_jwzvbuczlb .
lambda__Cy = 1.0 ; rtB . expl_temp_jwzvbuczlb . lambda__Cx = 1.0 ; rtB .
expl_temp_jwzvbuczlb . sSz4 = 0.0 ; rtB . expl_temp_jwzvbuczlb . sSz3 = 0.0 ;
rtB . expl_temp_jwzvbuczlb . sSz2 = 0.0 ; rtB . expl_temp_jwzvbuczlb . sSz1 =
0.0 ; rtB . expl_temp_jwzvbuczlb . rVy6 = 29.546630283393668 ; rtB .
expl_temp_jwzvbuczlb . rVy5 = 1.3615089656301738 ; rtB . expl_temp_jwzvbuczlb
. rVy4 = 16.576380991996519 ; rtB . expl_temp_jwzvbuczlb . rVy3 = 0.0 ; rtB .
expl_temp_jwzvbuczlb . rVy2 = 0.0 ; rtB . expl_temp_jwzvbuczlb . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_jwzvbuczlb . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_jwzvbuczlb . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_jwzvbuczlb . rCy1 =
1.2105864414932852 ; rtB . expl_temp_jwzvbuczlb . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_jwzvbuczlb . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_jwzvbuczlb . rBy2 = 11.27197245162861 ; rtB . expl_temp_jwzvbuczlb
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_jwzvbuczlb . rBx2 = -
14.988778673926317 ; rtB . expl_temp_jwzvbuczlb . rBx1 = 18.98428171806113 ;
rtB . expl_temp_jwzvbuczlb . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_jwzvbuczlb . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_jwzvbuczlb . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_jwzvbuczlb . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_jwzvbuczlb . qEz5 = 9.9993657087278045 ; rtB . expl_temp_jwzvbuczlb
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_jwzvbuczlb . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_jwzvbuczlb . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_jwzvbuczlb . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_jwzvbuczlb . qDz9 = 0.0197040933269894 ; rtB . expl_temp_jwzvbuczlb
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_jwzvbuczlb . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_jwzvbuczlb . qDz6 =
0.012414856580811123 ; rtB . expl_temp_jwzvbuczlb . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_jwzvbuczlb . qDz3 = 0.716094457980896 ;
rtB . expl_temp_jwzvbuczlb . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_jwzvbuczlb . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_jwzvbuczlb . qCz1 = 5.8677776192218287 ; rtB . expl_temp_jwzvbuczlb
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_jwzvbuczlb . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_jwzvbuczlb . qBz4 =
0.22301364235368404 ; rtB . expl_temp_jwzvbuczlb . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_jwzvbuczlb . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_jwzvbuczlb . qBz10 =
0.10511724651210722 ; rtB . expl_temp_jwzvbuczlb . qBz1 = 1.5279739203602458
; rtB . expl_temp_jwzvbuczlb . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_jwzvbuczlb . pVy3 = 1.8914508125438863 ; rtB . expl_temp_jwzvbuczlb
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_jwzvbuczlb . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_jwzvbuczlb . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_jwzvbuczlb . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_jwzvbuczlb . pKy3 = 0.07718517111566 ;
rtB . expl_temp_jwzvbuczlb . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_jwzvbuczlb . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_jwzvbuczlb . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_jwzvbuczlb . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_jwzvbuczlb . pKx1 = 82.411460018669146 ; rtB . expl_temp_jwzvbuczlb
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_jwzvbuczlb . pHy2 =
0.000316181479240744 ; rtB . expl_temp_jwzvbuczlb . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_jwzvbuczlb . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_jwzvbuczlb . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_jwzvbuczlb . pEy4 = -
11.348893524622783 ; rtB . expl_temp_jwzvbuczlb . pEy3 = 0.091920245082059482
; rtB . expl_temp_jwzvbuczlb . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_jwzvbuczlb . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_jwzvbuczlb . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_jwzvbuczlb . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_jwzvbuczlb . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_jwzvbuczlb . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_jwzvbuczlb . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_jwzvbuczlb . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_jwzvbuczlb . pDy1 = 2.7187677492920517 ; rtB . expl_temp_jwzvbuczlb
. pDx3 = 18.451212025074643 ; rtB . expl_temp_jwzvbuczlb . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_jwzvbuczlb . pDx1 = 3.1471334251245406
; rtB . expl_temp_jwzvbuczlb . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_jwzvbuczlb . pCx1 = 1.5387936046317499 ; rtB . expl_temp_jwzvbuczlb
. R0 = 0.2304 ; rtB . expl_temp_jwzvbuczlb . Fz0 = 220.0 ; rtB . AM__fr =
d32el2qobw ( rtB . AM__fr , rtB . d3xonmy1hw [ 17 ] , 0.0 , rtB . d3xonmy1hw
[ 8 ] , & rtB . expl_temp_jwzvbuczlb ) ; rtB . expl_temp_dhmrxtyqop .
lambda__yk = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__xa = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__t = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__s = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__mu__y = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__mu__x = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__gamma__y = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__Vyk = 1.0 ; rtB
. expl_temp_dhmrxtyqop . lambda__Vy = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__Vx = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__Mr = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__Kya = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__Ky = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__Kxk = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__Hy = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__Hx = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__Fz0 = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__Ey = 1.0 ; rtB . expl_temp_dhmrxtyqop .
lambda__Ex = 1.0 ; rtB . expl_temp_dhmrxtyqop . lambda__Cy = 1.0 ; rtB .
expl_temp_dhmrxtyqop . lambda__Cx = 1.0 ; rtB . expl_temp_dhmrxtyqop . sSz4 =
0.0 ; rtB . expl_temp_dhmrxtyqop . sSz3 = 0.0 ; rtB . expl_temp_dhmrxtyqop .
sSz2 = 0.0 ; rtB . expl_temp_dhmrxtyqop . sSz1 = 0.0 ; rtB .
expl_temp_dhmrxtyqop . rVy6 = 29.546630283393668 ; rtB . expl_temp_dhmrxtyqop
. rVy5 = 1.3615089656301738 ; rtB . expl_temp_dhmrxtyqop . rVy4 =
16.576380991996519 ; rtB . expl_temp_dhmrxtyqop . rVy3 = 0.0 ; rtB .
expl_temp_dhmrxtyqop . rVy2 = 0.0 ; rtB . expl_temp_dhmrxtyqop . rVy1 = -
0.024616038671178269 ; rtB . expl_temp_dhmrxtyqop . rHy1 =
0.00086476734899675663 ; rtB . expl_temp_dhmrxtyqop . rHx1 = -
0.0079321349153765545 ; rtB . expl_temp_dhmrxtyqop . rCy1 =
1.2105864414932852 ; rtB . expl_temp_dhmrxtyqop . rCx1 = 1.1336009219126777 ;
rtB . expl_temp_dhmrxtyqop . rBy3 = 0.0065118999208225864 ; rtB .
expl_temp_dhmrxtyqop . rBy2 = 11.27197245162861 ; rtB . expl_temp_dhmrxtyqop
. rBy1 = 8.9431247964263765 ; rtB . expl_temp_dhmrxtyqop . rBx2 = -
14.988778673926317 ; rtB . expl_temp_dhmrxtyqop . rBx1 = 18.98428171806113 ;
rtB . expl_temp_dhmrxtyqop . qHz4 = 1.509194602343613E-16 ; rtB .
expl_temp_dhmrxtyqop . qHz3 = - 0.39314971819898387 ; rtB .
expl_temp_dhmrxtyqop . qHz2 = - 0.000872660034720689 ; rtB .
expl_temp_dhmrxtyqop . qHz1 = 0.010181041873980484 ; rtB .
expl_temp_dhmrxtyqop . qEz5 = 9.9993657087278045 ; rtB . expl_temp_dhmrxtyqop
. qEz4 = - 0.29680338193202216 ; rtB . expl_temp_dhmrxtyqop . qEz3 = -
0.4382232448812835 ; rtB . expl_temp_dhmrxtyqop . qEz2 = 2.9998011239595122 ;
rtB . expl_temp_dhmrxtyqop . qEz1 = - 1.9997408073802374 ; rtB .
expl_temp_dhmrxtyqop . qDz9 = 0.0197040933269894 ; rtB . expl_temp_dhmrxtyqop
. qDz8 = 1.2699751345537584 ; rtB . expl_temp_dhmrxtyqop . qDz7 = -
0.0029119198468388705 ; rtB . expl_temp_dhmrxtyqop . qDz6 =
0.012414856580811123 ; rtB . expl_temp_dhmrxtyqop . qDz4 = -
4.9857067728941056 ; rtB . expl_temp_dhmrxtyqop . qDz3 = 0.716094457980896 ;
rtB . expl_temp_dhmrxtyqop . qDz2 = - 0.0057103185685005234 ; rtB .
expl_temp_dhmrxtyqop . qDz1 = 0.058214260475520967 ; rtB .
expl_temp_dhmrxtyqop . qCz1 = 5.8677776192218287 ; rtB . expl_temp_dhmrxtyqop
. qBz9 = 5.3472475990289441 ; rtB . expl_temp_dhmrxtyqop . qBz5 = -
0.028011211434332741 ; rtB . expl_temp_dhmrxtyqop . qBz4 =
0.22301364235368404 ; rtB . expl_temp_dhmrxtyqop . qBz3 = -
0.012995423418534741 ; rtB . expl_temp_dhmrxtyqop . qBz2 = -
0.0093401848919285185 ; rtB . expl_temp_dhmrxtyqop . qBz10 =
0.10511724651210722 ; rtB . expl_temp_dhmrxtyqop . qBz1 = 1.5279739203602458
; rtB . expl_temp_dhmrxtyqop . pVy4 = 0.12684322562281874 ; rtB .
expl_temp_dhmrxtyqop . pVy3 = 1.8914508125438863 ; rtB . expl_temp_dhmrxtyqop
. pVy2 = 0.0060504222531290505 ; rtB . expl_temp_dhmrxtyqop . pVy1 = -
0.07921124466727919 ; rtB . expl_temp_dhmrxtyqop . pVx2 = -
0.02555265308118633 ; rtB . expl_temp_dhmrxtyqop . pVx1 = -
0.085927595261286946 ; rtB . expl_temp_dhmrxtyqop . pKy3 = 0.07718517111566 ;
rtB . expl_temp_dhmrxtyqop . pKy2 = - 4.4161524509551757 ; rtB .
expl_temp_dhmrxtyqop . pKy1 = - 150.10145482808775 ; rtB .
expl_temp_dhmrxtyqop . pKx3 = 0.15359052254656008 ; rtB .
expl_temp_dhmrxtyqop . pKx2 = - 0.00061256627104921393 ; rtB .
expl_temp_dhmrxtyqop . pKx1 = 82.411460018669146 ; rtB . expl_temp_dhmrxtyqop
. pHy3 = - 0.014482213612073495 ; rtB . expl_temp_dhmrxtyqop . pHy2 =
0.000316181479240744 ; rtB . expl_temp_dhmrxtyqop . pHy1 =
0.0038021518264314408 ; rtB . expl_temp_dhmrxtyqop . pHx2 =
0.0010493359389341034 ; rtB . expl_temp_dhmrxtyqop . pHx1 = -
1.881125265688376E-5 ; rtB . expl_temp_dhmrxtyqop . pEy4 = -
11.348893524622783 ; rtB . expl_temp_dhmrxtyqop . pEy3 = 0.091920245082059482
; rtB . expl_temp_dhmrxtyqop . pEy2 = 0.07630665195211285 ; rtB .
expl_temp_dhmrxtyqop . pEy1 = 0.44596113300895551 ; rtB .
expl_temp_dhmrxtyqop . pEx4 = 0.084235726797198915 ; rtB .
expl_temp_dhmrxtyqop . pEx3 = 0.10584900639581085 ; rtB .
expl_temp_dhmrxtyqop . pEx2 = - 0.36192389013004767 ; rtB .
expl_temp_dhmrxtyqop . pEx1 = 0.010926002153390022 ; rtB .
expl_temp_dhmrxtyqop . pDy3 = - 2.5068877297645238 ; rtB .
expl_temp_dhmrxtyqop . pDy2 = - 0.049810981841589462 ; rtB .
expl_temp_dhmrxtyqop . pDy1 = 2.7187677492920517 ; rtB . expl_temp_dhmrxtyqop
. pDx3 = 18.451212025074643 ; rtB . expl_temp_dhmrxtyqop . pDx2 = -
0.24966679758045818 ; rtB . expl_temp_dhmrxtyqop . pDx1 = 3.1471334251245406
; rtB . expl_temp_dhmrxtyqop . pCy1 = 1.1266512680704623 ; rtB .
expl_temp_dhmrxtyqop . pCx1 = 1.5387936046317499 ; rtB . expl_temp_dhmrxtyqop
. R0 = 0.2304 ; rtB . expl_temp_dhmrxtyqop . Fz0 = 220.0 ; rtB . AM__fl = -
d32el2qobw ( rtB . AM__fl , - rtB . d3xonmy1hw [ 18 ] , 0.0 , rtB .
d3xonmy1hw [ 9 ] , & rtB . expl_temp_dhmrxtyqop ) ; rtB . c_SVyk = 0.0 ; rtB
. d_SVyk = 0.0 ; rtB . d_Gxa = 0.0 ; rtB . VerticalForces_Fz_fl_ss = 0.0 ;
rtB . Fz__rr_ss = ( ( ( ( ( 0.066 * rtB . AM__fl + 0.066 * rtB . AM__fr ) +
0.066 * rtB . AM__rl ) + 0.066 * rtB . AM__rr ) + ( 0.295 * rtB . k2jl0n1mcd
[ 3 ] + 9.81 ) * 311.575 ) * 37301.587301587308 + ( 5.1961047619047631E+6 *
rtB . d3xonmy1hw [ 5 ] * rtB . d3xonmy1hw [ 3 ] + 76729.365079365089 * rtB .
Fz__rl_ss ) ) / 1.7 / 1.21 / 37301.587301587308 / 2.0 ; rtB . Fz__rl_ss = ( (
( ( ( - 0.066 * rtB . AM__fl - 0.066 * rtB . AM__fr ) - 0.066 * rtB . AM__rl
) - 0.066 * rtB . AM__rr ) + ( 0.295 * rtB . k2jl0n1mcd [ 3 ] + 9.81 ) *
311.575 ) * 37301.587301587308 + ( 76729.365079365089 * rtB . Fz__rl_ss -
5.1961047619047631E+6 * rtB . d3xonmy1hw [ 5 ] * rtB . d3xonmy1hw [ 3 ] ) ) /
1.7 / 1.21 / 37301.587301587308 / 2.0 ; rtB . Fz__fr_ss = ( ( ( ( ( - 0.112 *
rtB . AM__fl - 0.112 * rtB . AM__fr ) - 0.112 * rtB . AM__rl ) - 0.112 * rtB
. AM__rr ) + ( 6.867 - 0.295 * rtB . k2jl0n1mcd [ 3 ] ) * 324.45 ) *
37301.587301587308 + ( 4.437869444444445E+6 * rtB . d3xonmy1hw [ 5 ] * rtB .
d3xonmy1hw [ 3 ] + 79900.000000000015 * rtB . Fz__fl_ss ) ) / 1.7 / 1.26 /
37301.587301587308 / 2.0 ; rtB . Fz__fl_ss = ( ( ( ( ( 0.112 * rtB . AM__fl +
0.112 * rtB . AM__fr ) + 0.112 * rtB . AM__rl ) + 0.112 * rtB . AM__rr ) + (
6.867 - 0.295 * rtB . k2jl0n1mcd [ 3 ] ) * 324.45 ) * 37301.587301587308 + (
79900.000000000015 * rtB . Fz__fl_ss - 4.437869444444445E+6 * rtB .
d3xonmy1hw [ 5 ] * rtB . d3xonmy1hw [ 3 ] ) ) / 1.7 / 1.26 /
37301.587301587308 / 2.0 ; if ( rtB . Fz__rr_ss >= 0.0 ) { rtB . c_SVyk = rtB
. Fz__rr_ss ; } if ( rtB . Fz__rl_ss >= 0.0 ) { rtB . d_SVyk = rtB .
Fz__rl_ss ; } if ( rtB . Fz__fr_ss >= 0.0 ) { rtB . d_Gxa = rtB . Fz__fr_ss ;
} if ( rtB . Fz__fl_ss >= 0.0 ) { rtB . VerticalForces_Fz_fl_ss = rtB .
Fz__fl_ss ; } rtB . Fz__fl_ss = rtB . Fy__rl + rtB . Gxa ; rtB . Fz__rl_ss =
( ( muDoubleScalarSin ( - rtB . x ) * rtB . Fx__fl + rtB . Fy__fl ) +
muDoubleScalarSin ( rtB . b_reqBrakeTorque ) * rtB . Fx__fr ) + rtB . c_Gxa ;
dror4fgqqt ( rtB . d3xonmy1hw [ 11 ] , rtB . d3xonmy1hw [ 12 ] , rtB .
d3xonmy1hw [ 13 ] , rtB . d3xonmy1hw [ 14 ] , rtB . d3xonmy1hw [ 5 ] , rtB .
d3xonmy1hw [ 3 ] , rtB . b_reqBrakeTorque , - rtB . x , 0.2304 , 0.2304 , 8.0
, 1.0 , 1.26 , 1.21 , & rtB . Fz__rr_ss , & rtB . Fz__fr_ss , & rtB .
kappa__fr__ss , & rtB . kappa__fl__ss ) ; o1ynddf4zi ( rtB . d3xonmy1hw [ 5 ]
, rtB . d3xonmy1hw [ 3 ] , rtB . d3xonmy1hw [ 4 ] , rtB . b_reqBrakeTorque ,
- rtB . x , 8.0 , 1.0 , 0.7 , 1.26 , 1.21 , & rtB . alpha__rr__ss , & rtB .
alpha__rl__ss , & rtB . alpha__fr__ss , & rtB . alpha__fl__ss ) ; rtB .
nbbgeyemhm [ 0 ] = rtB . d3xonmy1hw [ 3 ] * muDoubleScalarCos ( rtB .
d3xonmy1hw [ 2 ] ) - rtB . d3xonmy1hw [ 4 ] * muDoubleScalarSin ( rtB .
d3xonmy1hw [ 2 ] ) ; rtB . nbbgeyemhm [ 1 ] = rtB . d3xonmy1hw [ 4 ] *
muDoubleScalarCos ( rtB . d3xonmy1hw [ 2 ] ) + rtB . d3xonmy1hw [ 3 ] *
muDoubleScalarSin ( rtB . d3xonmy1hw [ 2 ] ) ; rtB . nbbgeyemhm [ 3 ] = ( ( (
( ( rtB . Fx__fl - muDoubleScalarSin ( - rtB . x ) * rtB . Fy__fl ) + rtB .
Fx__fr ) - muDoubleScalarSin ( rtB . b_reqBrakeTorque ) * rtB . c_Gxa ) + (
rtB . d3xonmy1hw [ 5 ] * 257.5 * rtB . d3xonmy1hw [ 4 ] - rtB . d3xonmy1hw [
3 ] * rtB . d3xonmy1hw [ 3 ] * 0.8 ) ) + ( rtB . Fx__rr + rtB . Fx__rl ) ) /
257.5 ; rtB . nbbgeyemhm [ 4 ] = ( ( - rtB . d3xonmy1hw [ 5 ] * 257.5 * rtB .
d3xonmy1hw [ 3 ] + rtB . Fz__rl_ss ) + rtB . Fz__fl_ss ) / 257.5 ; rtB .
nbbgeyemhm [ 5 ] = ( ( ( ( ( ( ( ( rtB . Fx__fr - muDoubleScalarSin ( rtB .
b_reqBrakeTorque ) * rtB . c_Gxa ) - ( rtB . Fx__fl - muDoubleScalarSin ( -
rtB . x ) * rtB . Fy__fl ) ) / 2.0 * 1.26 + ( rtB . Fz__rl_ss - 0.7 * rtB .
Fz__fl_ss ) ) + ( rtB . Fx__rr - rtB . Fx__rl ) / 2.0 * 1.21 ) + rtB . AM__fl
) + rtB . AM__fr ) + rtB . AM__rl ) + rtB . AM__rr ) / 130.0 ; rtB .
nbbgeyemhm [ 6 ] = ( - rtB . d3xonmy1hw [ 6 ] + rtB . c_SVyk ) / 0.06 ; rtB .
nbbgeyemhm [ 7 ] = ( - rtB . d3xonmy1hw [ 7 ] + rtB . d_SVyk ) / 0.06 ; rtB .
nbbgeyemhm [ 8 ] = ( - rtB . d3xonmy1hw [ 8 ] + rtB . d_Gxa ) / 0.06 ; rtB .
nbbgeyemhm [ 9 ] = ( - rtB . d3xonmy1hw [ 9 ] + rtB . VerticalForces_Fz_fl_ss
) / 0.06 ; rtB . nbbgeyemhm [ 10 ] = ( - rtB . d3xonmy1hw [ 10 ] * 12.0 + rtB
. nbnqhwwnzr_dhamdvybc1 ) / 12.0 / 0.083333333333333329 ; rtB . nbbgeyemhm [
15 ] = - ( rtB . d3xonmy1hw [ 15 ] - rtB . alpha__rr__ss ) *
muDoubleScalarAbs ( rtB . d3xonmy1hw [ 3 ] ) / 0.3 ; rtB . nbbgeyemhm [ 16 ]
= - ( rtB . d3xonmy1hw [ 16 ] - rtB . alpha__rl__ss ) * muDoubleScalarAbs (
rtB . d3xonmy1hw [ 3 ] ) / 0.3 ; rtB . nbbgeyemhm [ 17 ] = - ( rtB .
d3xonmy1hw [ 17 ] - rtB . alpha__fr__ss ) * muDoubleScalarAbs ( rtB .
d3xonmy1hw [ 3 ] ) / 0.3 ; rtB . nbbgeyemhm [ 18 ] = - ( rtB . d3xonmy1hw [
18 ] - rtB . alpha__fl__ss ) * muDoubleScalarAbs ( rtB . d3xonmy1hw [ 3 ] ) /
0.3 ; rtB . nbbgeyemhm [ 19 ] = ( rtB . d3xonmy1hw [ 19 ] - rtB . Fz__rr_ss )
* - muDoubleScalarAbs ( rtB . d3xonmy1hw [ 3 ] ) / 0.3 ; rtB . nbbgeyemhm [
20 ] = ( rtB . d3xonmy1hw [ 20 ] - rtB . Fz__fr_ss ) * - muDoubleScalarAbs (
rtB . d3xonmy1hw [ 3 ] ) / 0.3 ; rtB . nbbgeyemhm [ 21 ] = ( rtB . d3xonmy1hw
[ 21 ] - rtB . kappa__fr__ss ) * - muDoubleScalarAbs ( rtB . d3xonmy1hw [ 3 ]
) / 0.3 ; rtB . nbbgeyemhm [ 22 ] = ( rtB . d3xonmy1hw [ 22 ] - rtB .
kappa__fl__ss ) * - muDoubleScalarAbs ( rtB . d3xonmy1hw [ 3 ] ) / 0.3 ; rtB
. nbbgeyemhm [ 11 ] = ( - rtB . Fx__rr * 0.2304 + rtB . Tb_r_req ) / 0.5 ;
rtB . nbbgeyemhm [ 12 ] = ( - rtB . Fx__rl * 0.2304 + rtB . bhrrju3n1h ) /
0.5 ; rtB . nbbgeyemhm [ 13 ] = ( - rtB . Fx__fr * 0.2304 + rtB .
c_reqBrakeTorque ) / 0.5 ; rtB . nbbgeyemhm [ 14 ] = ( - rtB . Fx__fl *
0.2304 + rtB . Tb_f_req ) / 0.5 ; rtB . nbbgeyemhm [ 2 ] = rtB . d3xonmy1hw [
5 ] ; rtB . dyiczxwq2y [ 0 ] = rtB . Tb_r_req ; rtB . dyiczxwq2y [ 1 ] = rtB
. bhrrju3n1h ; rtB . dyiczxwq2y [ 2 ] = rtB . c_reqBrakeTorque ; rtB .
dyiczxwq2y [ 3 ] = rtB . Tb_f_req ; rtB . dyiczxwq2y [ 4 ] = rtB . Fx__rr ;
rtB . dyiczxwq2y [ 5 ] = rtB . Fx__rl ; rtB . dyiczxwq2y [ 6 ] = rtB . Fx__fr
; rtB . dyiczxwq2y [ 7 ] = rtB . Fx__fl ; rtB . dyiczxwq2y [ 8 ] = rtB . Gxa
; rtB . dyiczxwq2y [ 9 ] = rtB . Fy__rl ; rtB . dyiczxwq2y [ 10 ] = rtB .
c_Gxa ; rtB . dyiczxwq2y [ 11 ] = rtB . Fy__fl ; rtB . dyiczxwq2y [ 12 ] =
rtB . AM__rr ; rtB . dyiczxwq2y [ 13 ] = rtB . AM__rl ; rtB . dyiczxwq2y [ 14
] = rtB . AM__fr ; rtB . dyiczxwq2y [ 15 ] = rtB . AM__fl ; rtB . dyiczxwq2y
[ 20 ] = rtB . b_reqBrakeTorque ; rtB . dyiczxwq2y [ 21 ] = - rtB . x ; rtB .
dyiczxwq2y [ 22 ] = rtB . nbnqhwwnzr_dhamdvybc1 ; rtB . ermlayis1n = rtP .
Gain_Gain_jcywftknhq * rtB . dyiczxwq2y [ 16 ] ; rtB . is4elcsyhb = rtP .
Gain_Gain_g0dvnhmpu3 * rtB . dyiczxwq2y [ 17 ] ; rtB . ckx1d40g1x = rtP .
Gain_Gain_m4rgufjtp0 * rtB . dyiczxwq2y [ 18 ] ; rtB . hxvw03zyvr = rtP .
Gain_Gain_mnhwbspcdd * rtB . dyiczxwq2y [ 19 ] ; rtB . lanjwes5zx = rtP .
Gain_Gain_fvorafzpg4 * rtB . dyiczxwq2y [ 20 ] ; rtB . c5fwu3532g = rtP .
Gain_Gain_ffibbzmb4h * rtB . dyiczxwq2y [ 21 ] ; rtB . nnhdp4qv0s = rtP .
Gain_Gain_gisefcr1sl * rtB . dyiczxwq2y [ 22 ] ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { { if ( rtDW . ln4wd0tmne . AQHandles [ 0 ] && ssGetLogOutput ( rtS
) ) { sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 0 ] , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 0 ] + 0 ) ; sdiWriteSignal ( rtDW
. ln4wd0tmne . AQHandles [ 1 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. dyiczxwq2y [ 1 ] + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 2
] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 2 ] + 0 ) ;
sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 3 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . dyiczxwq2y [ 3 ] + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 4 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
dyiczxwq2y [ 4 ] + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 5 ]
, ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 5 ] + 0 ) ;
sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 6 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . dyiczxwq2y [ 6 ] + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 7 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
dyiczxwq2y [ 7 ] + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 8 ]
, ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 8 ] + 0 ) ;
sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 9 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . dyiczxwq2y [ 9 ] + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 10 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. dyiczxwq2y [ 10 ] + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [
11 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 11 ] + 0 )
; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 12 ] , ssGetTaskTime ( rtS
, 1 ) , ( char * ) & rtB . dyiczxwq2y [ 12 ] + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 13 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. dyiczxwq2y [ 13 ] + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [
14 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 14 ] + 0 )
; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 15 ] , ssGetTaskTime ( rtS
, 1 ) , ( char * ) & rtB . dyiczxwq2y [ 15 ] + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 16 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. ermlayis1n + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 17 ] ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . is4elcsyhb + 0 ) ;
sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 18 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . ckx1d40g1x + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 19 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. hxvw03zyvr + 0 ) ; sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 20 ] ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . lanjwes5zx + 0 ) ;
sdiWriteSignal ( rtDW . ln4wd0tmne . AQHandles [ 21 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . c5fwu3532g + 0 ) ; sdiWriteSignal ( rtDW .
ln4wd0tmne . AQHandles [ 22 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. nnhdp4qv0s + 0 ) ; } } rtB . l42j3en20w = rtB . d3xonmy1hw [ 3 ] * rtP .
TSamp_WtEt ; rtB . blo2ww1m3i_lnjdk5wtww = rtDW . dqq0avvguz ; rtB .
bs2k3vf20y_hv2ho1zopz = rtB . l42j3en20w - rtB . blo2ww1m3i_lnjdk5wtww ; rtB
. psxc2mjkj5_nuebgmauvi = rtB . bs2k3vf20y_hv2ho1zopz - rtB . d3xonmy1hw [ 4
] * rtB . d3xonmy1hw [ 5 ] ; rtB . gwxysfakeo = rtB . d3xonmy1hw [ 4 ] * rtP
. TSamp_WtEt_icq4vcnz4z ; rtB . btwyhd4j3u_bnlywzniup = rtDW . djnugtodz0 ;
rtB . ewn1toiu3a_dapv3jlyq5 = rtB . gwxysfakeo - rtB . btwyhd4j3u_bnlywzniup
; rtB . dh2fmuaxga_bsqwvugooi = rtB . d3xonmy1hw [ 3 ] * rtB . d3xonmy1hw [ 5
] + rtB . ewn1toiu3a_dapv3jlyq5 ; { if ( rtDW . mnyaugpzdj . AQHandles [ 0 ]
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . mnyaugpzdj . AQHandles
[ 0 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . psxc2mjkj5_nuebgmauvi
+ 0 ) ; sdiWriteSignal ( rtDW . mnyaugpzdj . AQHandles [ 1 ] , ssGetTaskTime
( rtS , 1 ) , ( char * ) & rtB . dh2fmuaxga_bsqwvugooi + 0 ) ; sdiWriteSignal
( rtDW . mnyaugpzdj . AQHandles [ 2 ] , ssGetTaskTime ( rtS , 1 ) , ( char *
) & rtB . d3xonmy1hw [ 5 ] + 0 ) ; } } { if ( rtDW . kme550xfzk . AQHandles [
0 ] && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . kme550xfzk .
AQHandles [ 0 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . nnhdp4qv0s +
0 ) ; sdiWriteSignal ( rtDW . kme550xfzk . AQHandles [ 1 ] , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 0 ] + 0 ) ; sdiWriteSignal ( rtDW
. kme550xfzk . AQHandles [ 2 ] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. dyiczxwq2y [ 1 ] + 0 ) ; sdiWriteSignal ( rtDW . kme550xfzk . AQHandles [ 3
] , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dyiczxwq2y [ 2 ] + 0 ) ;
sdiWriteSignal ( rtDW . kme550xfzk . AQHandles [ 4 ] , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & rtB . dyiczxwq2y [ 3 ] + 0 ) ; } } } UNUSED_PARAMETER (
tid ) ; } void MdlOutputsTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlUpdate ( int_T tid ) { int32_T i ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { for ( i = 0 ; i < 23 ; i ++ ) { rtDW . d3fbkn3bca [ i ] += rtP .
DiscreteTimeIntegrator_gainval * rtB . nbbgeyemhm [ i ] ; } memcpy ( & rtDW .
b2axcahws4 [ 0 ] , & rtB . nbbgeyemhm [ 0 ] , 23U * sizeof ( real_T ) ) ;
rtDW . dqq0avvguz = rtB . l42j3en20w ; rtDW . djnugtodz0 = rtB . gwxysfakeo ;
} UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> bin4mpd0lm = rtB .
hgfsmvz4k1 ; _rtXdot -> ewdvz44yjg = rtB . czfib24vsx ; } void MdlProjection
( void ) { } void MdlTerminate ( void ) { { if ( rtDW . j321etzcwb .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & rtDW . j321etzcwb . AQHandles [
0 ] ) ; } if ( rtDW . j321etzcwb . AQHandles [ 1 ] ) { sdiTerminateStreaming
( & rtDW . j321etzcwb . AQHandles [ 1 ] ) ; } } { if ( rtDW . eqsmgxfrzv .
AQHandles ) { sdiTerminateStreaming ( & rtDW . eqsmgxfrzv . AQHandles ) ; } }
{ if ( rtDW . b5xx0e2w04 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
b5xx0e2w04 . AQHandles ) ; } } { if ( rtDW . bk33az04mk . AQHandles ) {
sdiTerminateStreaming ( & rtDW . bk33az04mk . AQHandles ) ; } } { if ( rtDW .
kvnkak3jpy . AQHandles ) { sdiTerminateStreaming ( & rtDW . kvnkak3jpy .
AQHandles ) ; } } { if ( rtDW . n1rq3xz5qe . AQHandles ) {
sdiTerminateStreaming ( & rtDW . n1rq3xz5qe . AQHandles ) ; } } { if ( rtDW .
aufl3dtfm4 . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4
. AQHandles [ 0 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 1 ] ) ; } if ( rtDW
. aufl3dtfm4 . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 2 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 3 ] )
{ sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 3 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 4 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 4 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 5 ] )
{ sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 5 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 6 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 6 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 7 ] )
{ sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 7 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 8 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 8 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 9 ] )
{ sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 9 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 10 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 10 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 11 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 11 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 12 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 12 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 13 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 13 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 14 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 14 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 15 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 15 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 16 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 16 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 17 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 17 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 18 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 18 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 19 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 19 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 20 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 20 ] ) ; } if ( rtDW . aufl3dtfm4 . AQHandles [ 21 ]
) { sdiTerminateStreaming ( & rtDW . aufl3dtfm4 . AQHandles [ 21 ] ) ; } if (
rtDW . aufl3dtfm4 . AQHandles [ 22 ] ) { sdiTerminateStreaming ( & rtDW .
aufl3dtfm4 . AQHandles [ 22 ] ) ; } } { if ( rtDW . ln4wd0tmne . AQHandles [
0 ] ) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 0 ] ) ; }
if ( rtDW . ln4wd0tmne . AQHandles [ 1 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 1 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 2 ] )
{ sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 2 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 3 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 3 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 4 ] )
{ sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 4 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 5 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 5 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 6 ] )
{ sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 6 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 7 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 7 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 8 ] )
{ sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 8 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 9 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 9 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 10 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 10 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 11 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 11 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 12 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 12 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 13 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 13 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 14 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 14 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 15 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 15 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 16 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 16 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 17 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 17 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 18 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 18 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 19 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 19 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 20 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 20 ] ) ; } if (
rtDW . ln4wd0tmne . AQHandles [ 21 ] ) { sdiTerminateStreaming ( & rtDW .
ln4wd0tmne . AQHandles [ 21 ] ) ; } if ( rtDW . ln4wd0tmne . AQHandles [ 22 ]
) { sdiTerminateStreaming ( & rtDW . ln4wd0tmne . AQHandles [ 22 ] ) ; } } {
if ( rtDW . mnyaugpzdj . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & rtDW .
mnyaugpzdj . AQHandles [ 0 ] ) ; } if ( rtDW . mnyaugpzdj . AQHandles [ 1 ] )
{ sdiTerminateStreaming ( & rtDW . mnyaugpzdj . AQHandles [ 1 ] ) ; } if (
rtDW . mnyaugpzdj . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & rtDW .
mnyaugpzdj . AQHandles [ 2 ] ) ; } } { if ( rtDW . kme550xfzk . AQHandles [ 0
] ) { sdiTerminateStreaming ( & rtDW . kme550xfzk . AQHandles [ 0 ] ) ; } if
( rtDW . kme550xfzk . AQHandles [ 1 ] ) { sdiTerminateStreaming ( & rtDW .
kme550xfzk . AQHandles [ 1 ] ) ; } if ( rtDW . kme550xfzk . AQHandles [ 2 ] )
{ sdiTerminateStreaming ( & rtDW . kme550xfzk . AQHandles [ 2 ] ) ; } if (
rtDW . kme550xfzk . AQHandles [ 3 ] ) { sdiTerminateStreaming ( & rtDW .
kme550xfzk . AQHandles [ 3 ] ) ; } if ( rtDW . kme550xfzk . AQHandles [ 4 ] )
{ sdiTerminateStreaming ( & rtDW . kme550xfzk . AQHandles [ 4 ] ) ; } } }
static void mr_Vehicle_Model_2Track_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Vehicle_Model_2Track_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_Vehicle_Model_2Track_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Vehicle_Model_2Track_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Vehicle_Model_2Track_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Vehicle_Model_2Track_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Vehicle_Model_2Track_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Vehicle_Model_2Track_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Vehicle_Model_2Track_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Vehicle_Model_2Track_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Vehicle_Model_2Track_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Vehicle_Model_2Track_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Vehicle_Model_2Track_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Vehicle_Model_2Track_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_Vehicle_Model_2Track_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Vehicle_Model_2Track_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Vehicle_Model_2Track_cacheDataAsMxArray ( ssDW , 0 , 0
, ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 10 ] = { "rtDW.d3fbkn3bca" , "rtDW.b2axcahws4" ,
"rtDW.dqq0avvguz" , "rtDW.djnugtodz0" , "rtDW.jowpdqkr40" , "rtDW.dsjvzjmnow"
, "rtDW.milaeogcvv" , "rtDW.lqejqoyonp" , "rtDW.h2sjcswtty" ,
"rtDW.pousxiyznf" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
10 , rtdwDataFieldNames ) ; mr_Vehicle_Model_2Track_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . d3fbkn3bca ) , sizeof ( rtDW .
d3fbkn3bca ) ) ; mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 ,
1 , ( const void * ) & ( rtDW . b2axcahws4 ) , sizeof ( rtDW . b2axcahws4 ) )
; mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . dqq0avvguz ) , sizeof ( rtDW . dqq0avvguz ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void
* ) & ( rtDW . djnugtodz0 ) , sizeof ( rtDW . djnugtodz0 ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void
* ) & ( rtDW . jowpdqkr40 ) , sizeof ( rtDW . jowpdqkr40 ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . dsjvzjmnow ) , sizeof ( rtDW . dsjvzjmnow ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void
* ) & ( rtDW . milaeogcvv ) , sizeof ( rtDW . milaeogcvv ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void
* ) & ( rtDW . lqejqoyonp ) , sizeof ( rtDW . lqejqoyonp ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . h2sjcswtty ) , sizeof ( rtDW . h2sjcswtty ) ) ;
mr_Vehicle_Model_2Track_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void
* ) & ( rtDW . pousxiyznf ) , sizeof ( rtDW . pousxiyznf ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Vehicle_Model_2Track_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW
, 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber
( ssDW , 0 , 1 ) ; mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void *
) & ( rtDW . d3fbkn3bca ) , rtdwData , 0 , 0 , sizeof ( rtDW . d3fbkn3bca ) )
; mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b2axcahws4 ) , rtdwData , 0 , 1 , sizeof ( rtDW . b2axcahws4 ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dqq0avvguz ) , rtdwData , 0 , 2 , sizeof ( rtDW . dqq0avvguz ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
djnugtodz0 ) , rtdwData , 0 , 3 , sizeof ( rtDW . djnugtodz0 ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jowpdqkr40 ) , rtdwData , 0 , 4 , sizeof ( rtDW . jowpdqkr40 ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dsjvzjmnow ) , rtdwData , 0 , 5 , sizeof ( rtDW . dsjvzjmnow ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
milaeogcvv ) , rtdwData , 0 , 6 , sizeof ( rtDW . milaeogcvv ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lqejqoyonp ) , rtdwData , 0 , 7 , sizeof ( rtDW . lqejqoyonp ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h2sjcswtty ) , rtdwData , 0 , 8 , sizeof ( rtDW . h2sjcswtty ) ) ;
mr_Vehicle_Model_2Track_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pousxiyznf ) , rtdwData , 0 , 9 , sizeof ( rtDW . pousxiyznf ) ) ; } }
mxArray * mr_Vehicle_Model_2Track_GetSimStateDisallowedBlocks ( ) { mxArray *
data = mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static
const char_T * blockType [ 1 ] = { "Scope" , } ; static const char_T *
blockPath [ 1 ] = { "Vehicle_Model_2Track/Scope" , } ; static const int
reason [ 1 ] = { 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 1 ; ++ ( subs [
0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 2 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 83 ) ;
ssSetNumBlockIO ( rtS , 22 ) ; ssSetNumBlockParams ( rtS , 95 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1253880540U ) ; ssSetChecksumVal ( rtS , 1 ,
3128183577U ) ; ssSetChecksumVal ( rtS , 2 , 784115524U ) ; ssSetChecksumVal
( rtS , 3 , 2032923447U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { real_T * x
= ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void
* ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 40 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Vehicle_Model_2Track_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Vehicle_Model_2Track" ) ; ssSetPath ( rtS , "Vehicle_Model_2Track" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 100.0 ) ; ssSetStepSize ( rtS
, 0.0001 ) ; ssSetFixedStepSize ( rtS , 0.0001 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 23 , 23 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 23 , 23 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{ "Vehicle_Model_2Track/PID Controller/Integrator/Continuous/Integrator" ,
"Vehicle_Model_2Track/PID Controller/Filter/Cont. Filter/Filter" ,
"Vehicle_Model_2Track/Discrete-Time\nIntegrator" ,
"Vehicle_Model_2Track/Unit Delay" ,
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative/UD" ,
"Vehicle_Model_2Track/Subsystem/IMU/Discrete Derivative1/UD" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 0 , 1 , 2 , 3 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 6 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 6 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . bin4mpd0lm ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . ewdvz44yjg ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . d3fbkn3bca ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . b2axcahws4 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . dqq0avvguz ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . djnugtodz0 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 2 ] ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 1 ] = { { 23 * sizeof (
real_T ) , ( char * ) ( & rtB . d3xonmy1hw [ 0 ] ) , ( NULL ) } } ;
ssSetNumNonContDerivSigInfos ( rtS , 1 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode4" ) ; ssSetVariableStepSolver ( rtS , 0 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate )
; ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetTNextTid ( rtS ,
INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; } ssSetChecksumVal ( rtS , 0 , 1253880540U ) ;
ssSetChecksumVal ( rtS , 1 , 3128183577U ) ; ssSetChecksumVal ( rtS , 2 ,
784115524U ) ; ssSetChecksumVal ( rtS , 3 , 2032923447U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 6 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Vehicle_Model_2Track_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Vehicle_Model_2Track_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Vehicle_Model_2Track_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
