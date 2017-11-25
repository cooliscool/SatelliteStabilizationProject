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
#include "mainModel_matlab2013b_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME mainModel_matlab2013b
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (18)   
#elif NCSTATES != 18
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
typedef struct { real_T gu33yk2b0b [ 4 ] ; real_T f4cnibc0yp [ 3 ] ; real_T
i3yrvpnj1b ; real_T gcc2inn5w5 ; real_T dz2lr3swp4 ; real_T hvqlinfhmr [ 3 ]
; real_T fgsqhcujs1 [ 3 ] ; real_T auxcmgkg3f [ 3 ] ; real_T eseqxvyzd5 [ 4 ]
; real_T anxrores0z ; real_T kk5yzthjex ; real_T f4ykmpllaj ; real_T
ifro01qjvs ; real_T kyhzfztygn ; real_T o5hf3jbkmr ; real_T p5tu0n4aab [ 3 ]
; real_T l50wuyy3c2 [ 3 ] ; real_T d3fqmonb1x [ 3 ] ; } B ; typedef struct {
struct { void * LoggedData ; } ewc0ii2kgd ; int_T kpflfszbya ; int_T
bzfbd3uylg ; int_T k3lkivxt00 ; int_T m03lillh30 [ 4 ] ; } DW ; typedef
struct { real_T dtwka2mguf [ 4 ] ; real_T dx350vwtm4 [ 3 ] ; real_T
k5vubekurs ; real_T mhrzvsnlg3 ; real_T bvwkqybxgx ; real_T oxhwiqtsep ;
real_T jl2xc4kdza ; real_T d0xv3vquqw ; real_T bc2nkq2up4 [ 3 ] ; real_T
ftuobu325x ; real_T jf2dbuuafz ; } X ; typedef struct { real_T dtwka2mguf [ 4
] ; real_T dx350vwtm4 [ 3 ] ; real_T k5vubekurs ; real_T mhrzvsnlg3 ; real_T
bvwkqybxgx ; real_T oxhwiqtsep ; real_T jl2xc4kdza ; real_T d0xv3vquqw ;
real_T bc2nkq2up4 [ 3 ] ; real_T ftuobu325x ; real_T jf2dbuuafz ; } XDot ;
typedef struct { boolean_T dtwka2mguf [ 4 ] ; boolean_T dx350vwtm4 [ 3 ] ;
boolean_T k5vubekurs ; boolean_T mhrzvsnlg3 ; boolean_T bvwkqybxgx ;
boolean_T oxhwiqtsep ; boolean_T jl2xc4kdza ; boolean_T d0xv3vquqw ;
boolean_T bc2nkq2up4 [ 3 ] ; boolean_T ftuobu325x ; boolean_T jf2dbuuafz ; }
XDis ; typedef struct { real_T dtwka2mguf [ 4 ] ; real_T dx350vwtm4 [ 3 ] ;
real_T k5vubekurs ; real_T mhrzvsnlg3 ; real_T bvwkqybxgx ; real_T oxhwiqtsep
; real_T jl2xc4kdza ; real_T d0xv3vquqw ; real_T bc2nkq2up4 [ 3 ] ; real_T
ftuobu325x ; real_T jf2dbuuafz ; } CStateAbsTol ; typedef struct { real_T
i0jblazcc1 [ 4 ] ; real_T o1k01bbejo [ 4 ] ; real_T fdcainosp5 [ 4 ] ; } ZCV
; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T C1_D ; real_T C2_D ; real_T C3_D ; real_T PIDController2DOF_D ; real_T
C1_I ; real_T C2_I ; real_T C3_I ; real_T PIDController2DOF_I ; real_T C1_N ;
real_T C2_N ; real_T C3_N ; real_T PIDController2DOF_N ; real_T C1_P ; real_T
C2_P ; real_T C3_P ; real_T PIDController2DOF_c ; real_T speeds_Value [ 4 ] ;
real_T Integrator2_UpperSat ; real_T Integrator2_LowerSat ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T Integrator_IC ; real_T Filter_IC ;
real_T Integrator_IC_bho2zujcez ; real_T Filter_IC_pu4motvsw4 ; real_T
Integrator_IC_ip1szac0vi ; real_T Filter_IC_kxhduaasun ; real_T
eachwheelInertia_Value ; real_T initialOmega_Value [ 3 ] ; real_T
disturbTorques_Value [ 3 ] ; real_T magTorq_Value ; real_T radToDeg_Value ;
real_T uI_Gain ; real_T Filter_IC_fkv2yqdqrh ; real_T
Integrator_IC_kv0s2wisqu ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR
; extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * mainModel_matlab2013b_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
size_t gblCurrentSFcnIdx ; extern size_t * gblChildIdxToInfoIdx ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
