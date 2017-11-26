#include "__cf_mainModel_matlab2013b.h"
#ifndef RTW_HEADER_mainModel_matlab2013b_h_
#define RTW_HEADER_mainModel_matlab2013b_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013b_COMMON_INCLUDES_
#define mainModel_matlab2013b_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "mainModel_matlab2013b_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME mainModel_matlab2013b
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (19) 
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
typedef struct { real_T gu33yk2b0b [ 4 ] ; real_T dj0rkgtnut [ 4 ] ; real_T
f4cnibc0yp [ 3 ] ; real_T gql0wk3mwf [ 3 ] ; real_T c1y3q10fae ; real_T
lhuvpri5ep ; real_T lphf5r10kk ; real_T dsjkt0iimr ; real_T hvqlinfhmr [ 3 ]
; real_T fgsqhcujs1 [ 3 ] ; real_T auxcmgkg3f [ 3 ] ; real_T eseqxvyzd5 [ 4 ]
; real_T dobxpgbpqd ; real_T cphprmxoop ; real_T b4fvzvbgxk ; real_T
iaj5fdksww [ 3 ] ; real_T k0rntabv5l [ 3 ] ; real_T kpagd5p4kf [ 3 ] ; real_T
iaa2mgugws [ 4 ] ; } B ; typedef struct { real_T dpr3vhdeyz ; real_T
cj43bhsm41 ; real_T p5d5ekcpzh ; real_T mqd11owwhw ; real_T czikc5k5vu ;
real_T mbydmjewhh ; real_T aojx1pzz3c ; real_T nnctei5jyn ; real_T cnvp0sxujk
; real_T aj5m13tdgs ; real_T mi4lsefx2o ; real_T od50nljeou ; struct { void *
LoggedData ; } ewc0ii2kgd ; int_T kpflfszbya ; int_T bzfbd3uylg ; int_T
k3lkivxt00 ; int_T m03lillh30 [ 4 ] ; } DW ; typedef struct { real_T
dtwka2mguf [ 4 ] ; real_T dx350vwtm4 [ 3 ] ; real_T a5wtb1v2rl ; real_T
nkzf5u4rmw ; real_T flkofk5wk3 ; real_T bc2nkq2up4 [ 3 ] ; } X ; typedef
struct { real_T dtwka2mguf [ 4 ] ; real_T dx350vwtm4 [ 3 ] ; real_T
a5wtb1v2rl ; real_T nkzf5u4rmw ; real_T flkofk5wk3 ; real_T bc2nkq2up4 [ 3 ]
; } XDot ; typedef struct { boolean_T dtwka2mguf [ 4 ] ; boolean_T dx350vwtm4
[ 3 ] ; boolean_T a5wtb1v2rl ; boolean_T nkzf5u4rmw ; boolean_T flkofk5wk3 ;
boolean_T bc2nkq2up4 [ 3 ] ; } XDis ; typedef struct { real_T dtwka2mguf [ 4
] ; real_T dx350vwtm4 [ 3 ] ; real_T a5wtb1v2rl ; real_T nkzf5u4rmw ; real_T
flkofk5wk3 ; real_T bc2nkq2up4 [ 3 ] ; } CStateAbsTol ; typedef struct {
real_T i0jblazcc1 [ 4 ] ; real_T o1k01bbejo [ 4 ] ; real_T fdcainosp5 [ 4 ] ;
} ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T speeds_Value [ 4 ] ; real_T Integrator2_UpperSat ; real_T
Integrator2_LowerSat ; real_T pitchrollyawdesired_Value [ 3 ] ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T Gain1_Gain ; real_T Integrator_IC ;
real_T Gain_Gain ; real_T Gain1_Gain_jkygvdcm0j ; real_T
Integrator_IC_hsiqnplk4j ; real_T Gain_Gain_j0nwylexu1 ; real_T
Gain1_Gain_akkqzazk2e ; real_T Integrator_IC_it4x1oof30 ; real_T
Gain_Gain_hskt0iupyl ; real_T uI1_Gain ; real_T eachwheelInertia_Value ;
real_T initialOmega_Value [ 3 ] ; real_T disturbTorques_Value [ 3 ] ; real_T
magTorq_Value ; real_T radToDeg_Value ; real_T uI_Gain ; real_T Gain2_Gain ;
real_T Gain2_Gain_nggjdhdyc1 ; real_T Gain2_Gain_cddumad5uc ; } ; extern P
rtP ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern
X rtX ; extern DW rtDW ; extern const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
