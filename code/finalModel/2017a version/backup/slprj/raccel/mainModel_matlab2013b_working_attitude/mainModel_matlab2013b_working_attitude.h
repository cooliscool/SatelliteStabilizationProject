#include "__cf_mainModel_matlab2013b_working_attitude.h"
#ifndef RTW_HEADER_mainModel_matlab2013b_working_attitude_h_
#define RTW_HEADER_mainModel_matlab2013b_working_attitude_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013b_working_attitude_COMMON_INCLUDES_
#define mainModel_matlab2013b_working_attitude_COMMON_INCLUDES_
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
#include "mainModel_matlab2013b_working_attitude_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME mainModel_matlab2013b_working_attitude
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
typedef struct { real_T j242gvklzp [ 3 ] ; real_T opuriyedv5 [ 3 ] ; real_T
orau2tzp4m [ 3 ] ; real_T ocl3m0dxtp ; real_T mgfx13stav ; real_T emo54xl1nm
; real_T kjlahy3veo ; real_T hgkvorfmp1 ; real_T h5mdsiajxq ; real_T
gy3r40ngvs ; real_T mdrm0m2uev ; real_T au3ih54l51 ; real_T ddvv2mb4q1 ;
real_T indmgstqaw ; real_T jy0q2ywt2j ; real_T klldvinnn2 ; real_T ae34v1uhhb
; real_T bs1e1pomfr ; real_T ntaykcqfbm [ 4 ] ; real_T ij0ukvecpm [ 3 ] ;
real_T ciu3iftexw [ 3 ] ; real_T feo55pwd4v [ 3 ] ; real_T m3lvyi4r0k ;
real_T aiazydzpqj [ 4 ] ; real_T etpz3h2yod [ 4 ] ; real_T n1ohjrgzng [ 4 ] ;
real_T jj1m4pu4xq ; real_T pnr1rsr5m2 ; real_T jhmk22jwb1 ; real_T cdqa1b2rvw
[ 4 ] ; real_T op2c2ayack ; real_T m3fzt0sb4m [ 3 ] ; real_T k2osk23xhu [ 3 ]
; real_T iquwqtloz2 [ 3 ] ; } B ; typedef struct { real_T i5ihhyg3t3 ; real_T
fi3xs4xgh4 ; real_T oifw0jfvcb ; real_T cnrljrwq5q ; real_T ndzhnxmlbe ;
real_T pgylabzfah ; real_T eakx22dv4l ; real_T flegpay2y0 ; real_T fo5jnezz0v
; real_T m2qm2lzxid ; real_T ktbxjai4kr ; real_T lsav5m24co ; struct { void *
LoggedData ; } ewij00y0yc ; struct { void * LoggedData ; } ezynoo4fu5 ; int_T
dlz4fzirji ; int_T k2msqlawib ; int_T ettvxhsewb ; int_T kgldsbhmgx [ 4 ] ;
int_T f4pawnt0hj [ 4 ] ; } DW ; typedef struct { real_T gaocubqvzp [ 3 ] ;
real_T izvl5sslbs ; real_T iajjy5lruz ; real_T gklzlaz1qk ; real_T n2z4nfjamx
[ 3 ] ; real_T awxsvjgvlk ; real_T gswyw4gv0d [ 4 ] ; } X ; typedef struct {
real_T gaocubqvzp [ 3 ] ; real_T izvl5sslbs ; real_T iajjy5lruz ; real_T
gklzlaz1qk ; real_T n2z4nfjamx [ 3 ] ; real_T awxsvjgvlk ; real_T gswyw4gv0d
[ 4 ] ; } XDot ; typedef struct { boolean_T gaocubqvzp [ 3 ] ; boolean_T
izvl5sslbs ; boolean_T iajjy5lruz ; boolean_T gklzlaz1qk ; boolean_T
n2z4nfjamx [ 3 ] ; boolean_T awxsvjgvlk ; boolean_T gswyw4gv0d [ 4 ] ; } XDis
; typedef struct { real_T gaocubqvzp [ 3 ] ; real_T izvl5sslbs ; real_T
iajjy5lruz ; real_T gklzlaz1qk ; real_T n2z4nfjamx [ 3 ] ; real_T awxsvjgvlk
; real_T gswyw4gv0d [ 4 ] ; } CStateAbsTol ; typedef struct { real_T
lagi5bbqa4 [ 4 ] ; real_T ggcau304xb [ 4 ] ; real_T ca5inishgh [ 4 ] ; real_T
ifq0vw25v4 [ 4 ] ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T pitchrollyawdesired_Value [ 3 ] ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T Gain1_Gain ; real_T Integrator_IC ;
real_T Gain_Gain ; real_T Gain1_Gain_jkygvdcm0j ; real_T
Integrator_IC_hsiqnplk4j ; real_T Gain_Gain_j0nwylexu1 ; real_T
Gain1_Gain_jyeaph4bso ; real_T Integrator_IC_mi1nfze151 ; real_T
Gain_Gain_hvers1lhk2 ; real_T eachwheelInertia_Value ; real_T
initialOmega_Value [ 3 ] ; real_T disturbTorques_Value [ 3 ] ; real_T
magTorq_Value [ 3 ] ; real_T radToDeg_Value ; real_T Integrator3_IC ; real_T
speeds2_Value ; real_T initialrpms_Value [ 4 ] ; real_T Integrator2_UpperSat
; real_T Integrator2_LowerSat ; real_T Gain2_Gain ; real_T
Gain2_Gain_nggjdhdyc1 ; real_T Gain2_Gain_cddumad5uc ; } ; extern const char
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b_working_attitude_GetCAPIStaticMap ( void ) ; extern
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
