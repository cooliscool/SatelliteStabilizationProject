#include "__cf_mainModel_matlab2013b_.h"
#ifndef RTW_HEADER_mainModel_matlab2013b__h_
#define RTW_HEADER_mainModel_matlab2013b__h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013b__COMMON_INCLUDES_
#define mainModel_matlab2013b__COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "mainModel_matlab2013b__types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME mainModel_matlab2013b_
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (30) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (13)   
#elif NCSTATES != 13
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
typedef struct { real_T adwnxz5ipz [ 4 ] ; real_T fh4fxhb3dg [ 4 ] ; real_T
exnul2rleq [ 3 ] ; real_T dkrturai3y [ 3 ] ; real_T fdz33yjl0b [ 3 ] ; real_T
hn3ztypum0 ; real_T mgwbg2t02h ; real_T itn1bkplfv ; real_T hapxy3vao0 ;
real_T oy1dkzfhxx ; real_T c2phj3ex1u ; real_T bxrlwyn0fd ; real_T bdbf4kguln
; real_T pw0fmdvka1 ; real_T k3akangvw5 ; real_T adi0v32ets ; real_T
hpt1qkyizv ; real_T iqcex3uruq ; real_T cqshzwlwog ; real_T npbvq0qily ;
real_T n0vk5nkgs4 [ 4 ] ; real_T k1felwmdht [ 3 ] ; real_T brzszdbn0r [ 3 ] ;
real_T fzngedcyzz [ 3 ] ; real_T dpmunjkbhb ; real_T mdbqqd0snu ; real_T
ftdouwbfxw ; real_T jqsj3svek0 [ 3 ] ; real_T nlljjmakob [ 3 ] ; real_T
dkfmpnas3p [ 3 ] ; } B ; typedef struct { real_T ak5rdpmsmz ; real_T
foqrciusel ; real_T c3ktouvv30 ; real_T goyla3ngee ; real_T jj2dwxwohg ;
real_T fxofrcfu4n ; real_T eealhk5q4c ; real_T mrsbfmqp2d ; real_T mruqdd4fxa
; real_T cg1m0nct3u ; real_T en5yifcisr ; real_T eivvrtbw1v ; struct { void *
LoggedData ; } nqjhe3jygt ; int_T ijwm01234w ; int_T j3qdiyfhss ; int_T
dw32h4dvva ; int_T dqo0xdescv [ 4 ] ; } DW ; typedef struct { real_T
na0kwbhiuw [ 4 ] ; real_T kmrvp24iak [ 3 ] ; real_T blaoeqyfri ; real_T
eefvuab0yx ; real_T awawpknawq ; real_T mz0jfaypkk [ 3 ] ; } X ; typedef
struct { real_T na0kwbhiuw [ 4 ] ; real_T kmrvp24iak [ 3 ] ; real_T
blaoeqyfri ; real_T eefvuab0yx ; real_T awawpknawq ; real_T mz0jfaypkk [ 3 ]
; } XDot ; typedef struct { boolean_T na0kwbhiuw [ 4 ] ; boolean_T kmrvp24iak
[ 3 ] ; boolean_T blaoeqyfri ; boolean_T eefvuab0yx ; boolean_T awawpknawq ;
boolean_T mz0jfaypkk [ 3 ] ; } XDis ; typedef struct { real_T na0kwbhiuw [ 4
] ; real_T kmrvp24iak [ 3 ] ; real_T blaoeqyfri ; real_T eefvuab0yx ; real_T
awawpknawq ; real_T mz0jfaypkk [ 3 ] ; } CStateAbsTol ; typedef struct {
real_T b5zblesmzs [ 4 ] ; real_T axdzhvpb2w [ 4 ] ; real_T nuks2zj5bu [ 4 ] ;
} ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T speeds_Value [ 4 ] ; real_T Integrator2_UpperSat ; real_T
Integrator2_LowerSat ; real_T pitchrollyawdesired_Value [ 3 ] ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T Gain1_Gain ; real_T Integrator_IC ;
real_T Gain_Gain ; real_T Gain1_Gain_jkygvdcm0j ; real_T
Integrator_IC_hsiqnplk4j ; real_T Gain_Gain_j0nwylexu1 ; real_T
Gain1_Gain_akkqzazk2e ; real_T Integrator_IC_it4x1oof30 ; real_T
Gain_Gain_hskt0iupyl ; real_T eachwheelInertia_Value ; real_T
initialOmega_Value [ 3 ] ; real_T zerodisrturbance_Value [ 3 ] ; real_T
magTorq_Value [ 3 ] ; real_T radToDeg_Value ; real_T Gain2_Gain ; real_T
Gain2_Gain_nggjdhdyc1 ; real_T Gain2_Gain_cddumad5uc ; } ; extern const char
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b__GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern size_t gblCurrentSFcnIdx ;
extern size_t * gblChildIdxToInfoIdx ; extern DataMapInfo * rt_dataMapInfoPtr
; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
