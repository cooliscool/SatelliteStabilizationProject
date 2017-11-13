#include "__cf_mainModel_matlab2013a.h"
#ifndef RTW_HEADER_mainModel_matlab2013a_h_
#define RTW_HEADER_mainModel_matlab2013a_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013a_COMMON_INCLUDES_
#define mainModel_matlab2013a_COMMON_INCLUDES_
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
#include "mainModel_matlab2013a_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME mainModel_matlab2013a
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (9) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (10)   
#elif NCSTATES != 10
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
typedef struct { real_T lsvistcdke [ 4 ] ; real_T imaxglwpam [ 3 ] ; real_T
pqvw0y53rd [ 3 ] ; real_T icv3szrgyv [ 3 ] ; real_T gc2jbymdlz [ 3 ] ; real_T
f5dkugssxf [ 3 ] ; real_T bolfbkf5bm [ 3 ] ; real_T lfcefqioah [ 3 ] ; real_T
myuvxki5uz [ 4 ] ; } B ; typedef struct { struct { void * LoggedData ; }
ht24oybvsi ; int_T dwvympwnqe ; int_T kpaaqs1xgt ; int_T kgvzigyyvz ; int_T
gvver4kgdc [ 4 ] ; } DW ; typedef struct { real_T jyci2cli0a [ 4 ] ; real_T
affdlhtmjo [ 3 ] ; real_T olx0irmnay [ 3 ] ; } X ; typedef struct { real_T
jyci2cli0a [ 4 ] ; real_T affdlhtmjo [ 3 ] ; real_T olx0irmnay [ 3 ] ; } XDot
; typedef struct { boolean_T jyci2cli0a [ 4 ] ; boolean_T affdlhtmjo [ 3 ] ;
boolean_T olx0irmnay [ 3 ] ; } XDis ; typedef struct { real_T jyci2cli0a [ 4
] ; real_T affdlhtmjo [ 3 ] ; real_T olx0irmnay [ 3 ] ; } CStateAbsTol ;
typedef struct { real_T friquz4qw4 [ 4 ] ; real_T lfel3hyyxk [ 4 ] ; real_T
mnjyl0hqhi [ 4 ] ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T speeds_Value [ 4 ] ; real_T
Integrator2_UpperSat ; real_T Integrator2_LowerSat ; real_T
pitchrollyawdesired_Value [ 3 ] ; real_T pitchrollyawInitial_Value [ 3 ] ;
real_T eachwheelInertia_Value ; real_T initialOmega_Value [ 3 ] ; real_T
zerodisrturbance_Value [ 3 ] ; real_T magTorq_Value ; real_T radToDeg_Value ;
} ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * mainModel_matlab2013a_GetCAPIStaticMap (
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
