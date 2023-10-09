#ifndef RTW_HEADER_Vehicle_Model_2Track_h_
#define RTW_HEADER_Vehicle_Model_2Track_h_
#ifndef Vehicle_Model_2Track_COMMON_INCLUDES_
#define Vehicle_Model_2Track_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Vehicle_Model_2Track_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME Vehicle_Model_2Track
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (22) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (2)   
#elif NCSTATES != 2
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { oilfipywik expl_temp ; a0kxnfb3h0 expl_temp_mbvzarwird ;
a0kxnfb3h0 expl_temp_cl54gopm0x ; a0kxnfb3h0 expl_temp_kkiq3xxxve ;
a0kxnfb3h0 expl_temp_cxarnvbvui ; a0kxnfb3h0 expl_temp_bhxxfovxdy ;
a0kxnfb3h0 expl_temp_pbm3vprmfu ; a0kxnfb3h0 expl_temp_cv5hdgrwft ;
a0kxnfb3h0 expl_temp_fqdqrf4qbc ; a0kxnfb3h0 expl_temp_g2mlkqadfk ;
a0kxnfb3h0 expl_temp_g1smspu5ke ; a0kxnfb3h0 expl_temp_merlcviukg ;
a0kxnfb3h0 expl_temp_nz4o0shxby ; a0kxnfb3h0 expl_temp_ppxrqq0gsf ;
a0kxnfb3h0 expl_temp_llw0u2ae0v ; a0kxnfb3h0 expl_temp_jwzvbuczlb ;
a0kxnfb3h0 expl_temp_dhmrxtyqop ; real_T d3xonmy1hw [ 23 ] ; real_T
czfib24vsx ; real_T dfl3kewuef ; real_T bf5octyrk4 ; real_T hgfsmvz4k1 ;
real_T k2jl0n1mcd [ 23 ] ; real_T ermlayis1n ; real_T is4elcsyhb ; real_T
ckx1d40g1x ; real_T hxvw03zyvr ; real_T lanjwes5zx ; real_T c5fwu3532g ;
real_T nnhdp4qv0s ; real_T l42j3en20w ; real_T gwxysfakeo ; real_T nbbgeyemhm
[ 23 ] ; real_T dyiczxwq2y [ 23 ] ; real_T Tb_r_req ; real_T Tb_f_req ;
real_T Fx__rr ; real_T AM__rr ; real_T Fx__rl ; real_T Fy__rl ; real_T AM__rl
; real_T Fx__fr ; real_T AM__fr ; real_T Fx__fl ; real_T Fy__fl ; real_T
AM__fl ; real_T VerticalForces_Fz_fl_ss ; real_T kappa__fr__ss ; real_T
kappa__fl__ss ; real_T alpha__rr__ss ; real_T alpha__rl__ss ; real_T
alpha__fr__ss ; real_T alpha__fl__ss ; real_T b_reqBrakeTorque ; real_T
c_reqBrakeTorque ; real_T Gxa ; real_T c_Gxa ; real_T c_SVyk ; real_T d_Gxa ;
real_T d_SVyk ; real_T Fz__rr_ss ; real_T Fz__rl_ss ; real_T Fz__fr_ss ;
real_T Fz__fl_ss ; real_T x ; real_T niasjzpy2p_guugdwf2m3 ; real_T
csniogz111_ldqodwenvz ; real_T nbnqhwwnzr_dhamdvybc1 ; real_T
mhu3nnfb2l_dypejvacrn ; real_T ly3rfxl5br_lxo5edjg3c ; real_T
nzjfcwcyup_owjr1h1vqy ; real_T e4qpx3tt5u_bjbgfqrolh ; real_T
psxc2mjkj5_nuebgmauvi ; real_T dh2fmuaxga_bsqwvugooi ; real_T bhrrju3n1h ;
real_T blo2ww1m3i_lnjdk5wtww ; real_T bs2k3vf20y_hv2ho1zopz ; real_T
btwyhd4j3u_bnlywzniup ; real_T ewn1toiu3a_dapv3jlyq5 ; real_T Gyk ; real_T fy
; real_T dfz ; real_T gamma__z ; real_T Cy ; real_T Cx ; real_T Dx ; real_T
Ex ; real_T SVx ; real_T b_SVyk ; real_T Fz01 ; real_T b_dfz ; real_T
gamma__s ; real_T Gxa_ezqlmfzvpq ; real_T Gyk_bjvjhhzy4i ; real_T a__1 ;
real_T a__2 ; real_T a__3 ; real_T a__5 ; } B ; typedef struct { real_T
d3fbkn3bca [ 23 ] ; real_T b2axcahws4 [ 23 ] ; real_T dqq0avvguz ; real_T
djnugtodz0 ; struct { void * LoggedData ; } d5dbtip34d ; struct { void *
AQHandles [ 2 ] ; } j321etzcwb ; struct { void * AQHandles ; } eqsmgxfrzv ;
struct { void * AQHandles ; } b5xx0e2w04 ; struct { void * AQHandles ; }
bk33az04mk ; struct { void * AQHandles ; } kvnkak3jpy ; struct { void *
AQHandles ; } n1rq3xz5qe ; struct { void * AQHandles [ 23 ] ; } aufl3dtfm4 ;
struct { void * AQHandles [ 23 ] ; } ln4wd0tmne ; struct { void * AQHandles [
3 ] ; } mnyaugpzdj ; struct { void * AQHandles [ 5 ] ; } kme550xfzk ; int32_T
jowpdqkr40 ; int32_T dsjvzjmnow ; uint8_T milaeogcvv ; uint8_T lqejqoyonp ;
boolean_T h2sjcswtty ; boolean_T pousxiyznf ; } DW ; typedef struct { real_T
bin4mpd0lm ; real_T ewdvz44yjg ; } X ; typedef struct { real_T bin4mpd0lm ;
real_T ewdvz44yjg ; } XDot ; typedef struct { boolean_T bin4mpd0lm ;
boolean_T ewdvz44yjg ; } XDis ; typedef struct { rtwCAPI_ModelMappingInfo mmi
; } DataMapInfo ; struct P_ { struct_TffyZBIiIMpjESkplMpAxB vehicle_data ;
real_T Const_DeltaH ; real_T Test_ ; real_T V0 ; real_T VF ; real_T V_const ;
real_T V_slope ; real_T X0 [ 23 ] ; real_T PIDController_D ; real_T
PIDController_I ; real_T DiscreteDerivative_ICPrevScaledInput ; real_T
DiscreteDerivative1_ICPrevScaledInput ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T
Conststeering_InitialOutput ; real_T Steeringramp_InitialOutput ; real_T
PIDController_LowerSaturationLimit ; real_T PIDController_N ; real_T
PIDController_P ; real_T PIDController_UpperSaturationLimit ; real_T
Steeringramp_slope ; real_T Conststeering_slope ; real_T Speedramp_start ;
real_T Steeringramp_start ; real_T Conststeering_start ; real_T
Saturation2_LowerSat ; real_T Saturation1_UpperSat ; real_T
Saturation1_LowerSat ; real_T Saturation3_LowerSat ; real_T
DiscreteTimeIntegrator_gainval ; real_T Step_Y0 ; real_T Pedal_Threshold ;
real_T Saturation_LowerSat ; real_T Step_Y0_esoe35nzod ; real_T
Step_Y0_elgkip05b4 ; real_T Steering_Threshold ; real_T Gain1_Gain ; real_T
Gain_Gain ; real_T Gain_Gain_i5lx5ddvss ; real_T Gain_Gain_hjp5rjecra ;
real_T Gain_Gain_jqswpxfqa4 ; real_T UnitDelay_InitialCondition [ 23 ] ;
real_T Gain_Gain_jcywftknhq ; real_T Gain_Gain_g0dvnhmpu3 ; real_T
Gain_Gain_m4rgufjtp0 ; real_T Gain_Gain_mnhwbspcdd ; real_T
Gain_Gain_fvorafzpg4 ; real_T Gain_Gain_ffibbzmb4h ; real_T
Gain_Gain_gisefcr1sl ; real_T TSamp_WtEt ; real_T TSamp_WtEt_icq4vcnz4z ; } ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern mxArray *
mr_Vehicle_Model_2Track_GetDWork ( ) ; extern void
mr_Vehicle_Model_2Track_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Vehicle_Model_2Track_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Vehicle_Model_2Track_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
