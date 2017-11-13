#include "__cf_mainModel_matlab2013a_debugVersion.h"
#ifndef RTW_HEADER_mainModel_matlab2013a_debugVersion_h_
#define RTW_HEADER_mainModel_matlab2013a_debugVersion_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013a_debugVersion_COMMON_INCLUDES_
#define mainModel_matlab2013a_debugVersion_COMMON_INCLUDES_
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
#include "mainModel_matlab2013a_debugVersion_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME mainModel_matlab2013a_debugVersion
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (12) 
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
typedef struct { real_T jhhwutstv4 [ 4 ] ; real_T jcw4uwsbuk [ 4 ] ; real_T
dbndezqpsz [ 3 ] ; real_T npz23xukiv [ 3 ] ; real_T ixylsjphip [ 3 ] ; real_T
iavo2yiw5k [ 3 ] ; real_T mlj4oqsqq0 [ 3 ] ; real_T aacbkzxdi2 [ 3 ] ; real_T
gr1z41kuv0 [ 3 ] ; real_T evsm35ybx5 [ 3 ] ; real_T a43erptiha [ 3 ] ; real_T
alhexilcl1 [ 4 ] ; } B ; typedef struct { struct { void * LoggedData ; }
dduqlj1v4r ; struct { void * LoggedData ; } n1cb0h4zme ; int_T g1li03p4if ;
int_T d15qatvd24 ; int_T dnbutp1xv1 ; int_T oovnnqwvs1 [ 4 ] ; } DW ; typedef
struct { real_T dpnjtbchyj [ 4 ] ; real_T fbqhtwkmoe [ 3 ] ; real_T
f0ptt33h1b [ 3 ] ; } X ; typedef struct { real_T dpnjtbchyj [ 4 ] ; real_T
fbqhtwkmoe [ 3 ] ; real_T f0ptt33h1b [ 3 ] ; } XDot ; typedef struct {
boolean_T dpnjtbchyj [ 4 ] ; boolean_T fbqhtwkmoe [ 3 ] ; boolean_T
f0ptt33h1b [ 3 ] ; } XDis ; typedef struct { real_T dpnjtbchyj [ 4 ] ; real_T
fbqhtwkmoe [ 3 ] ; real_T f0ptt33h1b [ 3 ] ; } CStateAbsTol ; typedef struct
{ real_T is5uvt3gd3 [ 4 ] ; real_T in5bbr0byr [ 4 ] ; real_T ayjwthjbxp [ 4 ]
; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T speeds_Value [ 4 ] ; real_T Integrator2_UpperSat ; real_T
Integrator2_LowerSat ; real_T pitchrollyawdesired_Value [ 3 ] ; real_T
pitchrollyawInitial_Value [ 3 ] ; real_T eachwheelInertia_Value ; real_T
initialOmega_Value [ 3 ] ; real_T zerodisrturbance_Value [ 3 ] ; real_T
zero1_Value [ 3 ] ; real_T magTorq_Value [ 3 ] ; real_T radToDeg_Value ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX
; extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo
* mainModel_matlab2013a_debugVersion_GetCAPIStaticMap ( void ) ; extern
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
