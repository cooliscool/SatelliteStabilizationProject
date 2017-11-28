#include "__cf_mainModel_withGravityGradientTorq.h"
#ifndef RTW_HEADER_mainModel_withGravityGradientTorq_h_
#define RTW_HEADER_mainModel_withGravityGradientTorq_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_withGravityGradientTorq_COMMON_INCLUDES_
#define mainModel_withGravityGradientTorq_COMMON_INCLUDES_
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
#include "mainModel_withGravityGradientTorq_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME mainModel_withGravityGradientTorq
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (34) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (14)   
#elif NCSTATES != 14
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
typedef struct { real_T b3df0zasta [ 3 ] ; real_T ehgllpce2p [ 3 ] ; real_T
bjwwtfmyww [ 3 ] ; real_T ll40aiwkwf ; real_T abbitn03eu ; real_T d5hbg0jkef
; real_T mu0naw1zj5 ; real_T g0chwgh3go ; real_T fg2zpi0j3m ; real_T
i0bn02w1pb ; real_T gshuyvitub ; real_T gu20ekck0c ; real_T kiybllzdza ;
real_T hlrkn22nxk ; real_T nlysd2yp3g ; real_T mwvkdoiuaf ; real_T e2ymaervjk
; real_T ol0bfpbs1q ; real_T kcc3jbqzn2 [ 4 ] ; real_T e1tpxn0dv0 [ 3 ] ;
real_T pscpolimhb [ 3 ] ; real_T gyeenk5wbs [ 3 ] ; real_T ajleipz340 ;
real_T oon4uvp3pu [ 4 ] ; real_T hp0bpyvmgi [ 4 ] ; real_T pgaix3hgw2 [ 4 ] ;
real_T eruyw0qvm2 ; real_T ahz4pnrpcr ; real_T mgmxosp5d2 ; real_T e3kbs4mpqn
[ 4 ] ; real_T oxhd25rcd0 ; real_T d03arivfzz [ 3 ] ; real_T hrirjfhalh [ 3 ]
; real_T j2jysucitj [ 3 ] ; } B ; typedef struct { real_T l2ffbaetqv ; real_T
ibjngjvofk ; real_T avwj35pia3 ; real_T hj3jtxbkf2 ; real_T iopcbnf0vh ;
real_T ou2fve2vpo ; real_T iqx524yuyw ; real_T n1xydktaww ; real_T iaevx1nlny
; real_T dsmbjm0mq3 ; real_T a154qpijg4 ; real_T b0kr51lh3l ; struct { void *
LoggedData ; } mwngb1ix2a ; struct { void * LoggedData ; } i3nc0duvyc ; int_T
g2pyfvrqkr ; int_T lk3hnbe0hc ; int_T mctj2hhha3 ; int_T f35yrlgbqg [ 4 ] ;
int_T otyjvhje1y [ 4 ] ; } DW ; typedef struct { real_T ep0nmfhrpv [ 3 ] ;
real_T gj4ahlupaj ; real_T lwlapfcycq ; real_T jq5lewmfbj ; real_T lfre3u0ztj
[ 3 ] ; real_T j0j4s1drzg ; real_T oyvmzo51w4 [ 4 ] ; } X ; typedef struct {
real_T ep0nmfhrpv [ 3 ] ; real_T gj4ahlupaj ; real_T lwlapfcycq ; real_T
jq5lewmfbj ; real_T lfre3u0ztj [ 3 ] ; real_T j0j4s1drzg ; real_T oyvmzo51w4
[ 4 ] ; } XDot ; typedef struct { boolean_T ep0nmfhrpv [ 3 ] ; boolean_T
gj4ahlupaj ; boolean_T lwlapfcycq ; boolean_T jq5lewmfbj ; boolean_T
lfre3u0ztj [ 3 ] ; boolean_T j0j4s1drzg ; boolean_T oyvmzo51w4 [ 4 ] ; } XDis
; typedef struct { real_T ep0nmfhrpv [ 3 ] ; real_T gj4ahlupaj ; real_T
lwlapfcycq ; real_T jq5lewmfbj ; real_T lfre3u0ztj [ 3 ] ; real_T j0j4s1drzg
; real_T oyvmzo51w4 [ 4 ] ; } CStateAbsTol ; typedef struct { real_T
oahasvmkeh [ 4 ] ; real_T jp4c3x5zei [ 4 ] ; real_T o5qipikske [ 4 ] ; real_T
f3tstaka5o [ 4 ] ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T pitchrollyawdesired_Value [ 3 ] ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T Gain1_Gain ; real_T Integrator_IC ;
real_T Gain_Gain ; real_T Gain1_Gain_jkygvdcm0j ; real_T
Integrator_IC_hsiqnplk4j ; real_T Gain_Gain_j0nwylexu1 ; real_T
Gain1_Gain_jyeaph4bso ; real_T Integrator_IC_mi1nfze151 ; real_T
Gain_Gain_hvers1lhk2 ; real_T eachwheelInertia_Value ; real_T
initialOmega_Value [ 3 ] ; real_T magTorq_Value [ 3 ] ; real_T radToDeg_Value
; real_T Integrator3_IC ; real_T speeds2_Value ; real_T initialrpms_Value [ 4
] ; real_T Integrator2_UpperSat ; real_T Integrator2_LowerSat ; real_T
Gain2_Gain ; real_T Gain2_Gain_nggjdhdyc1 ; real_T Gain2_Gain_cddumad5uc ; }
; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo *
mainModel_withGravityGradientTorq_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
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
