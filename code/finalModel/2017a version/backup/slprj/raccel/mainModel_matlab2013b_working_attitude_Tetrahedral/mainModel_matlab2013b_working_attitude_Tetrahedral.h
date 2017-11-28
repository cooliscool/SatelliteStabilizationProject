#include "__cf_mainModel_matlab2013b_working_attitude_Tetrahedral.h"
#ifndef RTW_HEADER_mainModel_matlab2013b_working_attitude_Tetrahedral_h_
#define RTW_HEADER_mainModel_matlab2013b_working_attitude_Tetrahedral_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef mainModel_matlab2013b_working_attitude_Tetrahedral_COMMON_INCLUDES_
#define mainModel_matlab2013b_working_attitude_Tetrahedral_COMMON_INCLUDES_
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
#include "mainModel_matlab2013b_working_attitude_Tetrahedral_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME mainModel_matlab2013b_working_attitude_Tetrahedral
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
typedef struct { real_T brkeqz2pfv [ 3 ] ; real_T ptgoe03tvr [ 3 ] ; real_T
i1rpglh0rk [ 3 ] ; real_T evw2wf1zvf ; real_T haev0shbm4 ; real_T egzfwpp1ps
; real_T lx3subhkuw ; real_T mytiiwu2tf ; real_T plzbbm0m0n ; real_T
gjb3pj0jz1 ; real_T mb5hqohkyg ; real_T aswuxjeept ; real_T mjn504rlhx ;
real_T cbnfwiqn0t ; real_T n4hc35vufj ; real_T nu3puwrer0 ; real_T jlf40ljcp0
; real_T dd50ahg4eq ; real_T evkkq2irpt [ 4 ] ; real_T ficvlk1zye [ 3 ] ;
real_T iyuf3pmi5n [ 3 ] ; real_T br2rmekq50 [ 4 ] ; real_T mpypoua0wh [ 4 ] ;
real_T dcn2x2whzh [ 4 ] ; real_T ovrokjeois [ 3 ] ; real_T e10cmthaaa ;
real_T arbmarg4hj ; real_T epbuw5rgnc ; real_T nnabu04l1n ; real_T cckri010rx
[ 4 ] ; real_T n2iwizln4m ; real_T hbj0iaqdi0 [ 3 ] ; real_T nsguhsqxcw [ 3 ]
; real_T aduxeibqgo [ 3 ] ; } B ; typedef struct { real_T nvmt5ejec1 ; real_T
japb5gtzs0 ; real_T jpxj5p2zug ; real_T dezvtc5kyw ; real_T fwpgdori5o ;
real_T p0215xzpem ; real_T eh4dedqq2g ; real_T gvtpg0pgrv ; real_T ogxld50bto
; real_T md5v1s5dr3 ; real_T f42zh3jope ; real_T egrbfzytlm ; struct { void *
LoggedData ; } ce55aidx01 ; int_T oxwi2zlggz ; int_T hbh24wsp3i ; int_T
n5fov3ziup ; int_T phlknw1yzh [ 4 ] ; int_T lredu2e0uc [ 4 ] ; } DW ; typedef
struct { real_T bmi1faj1xs [ 3 ] ; real_T dvbyebomi5 ; real_T ihwnrj44xy ;
real_T ew4q35tavw ; real_T atqybikdjr [ 3 ] ; real_T m0h3y5azam [ 4 ] ;
real_T pfswtv3d1x ; } X ; typedef struct { real_T bmi1faj1xs [ 3 ] ; real_T
dvbyebomi5 ; real_T ihwnrj44xy ; real_T ew4q35tavw ; real_T atqybikdjr [ 3 ]
; real_T m0h3y5azam [ 4 ] ; real_T pfswtv3d1x ; } XDot ; typedef struct {
boolean_T bmi1faj1xs [ 3 ] ; boolean_T dvbyebomi5 ; boolean_T ihwnrj44xy ;
boolean_T ew4q35tavw ; boolean_T atqybikdjr [ 3 ] ; boolean_T m0h3y5azam [ 4
] ; boolean_T pfswtv3d1x ; } XDis ; typedef struct { real_T bmi1faj1xs [ 3 ]
; real_T dvbyebomi5 ; real_T ihwnrj44xy ; real_T ew4q35tavw ; real_T
atqybikdjr [ 3 ] ; real_T m0h3y5azam [ 4 ] ; real_T pfswtv3d1x ; }
CStateAbsTol ; typedef struct { real_T arcmvpy34i [ 4 ] ; real_T j3oxfb0lgx [
4 ] ; real_T j0epmfhdc4 [ 4 ] ; real_T inimzqmgwk [ 4 ] ; } ZCV ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
pitchrollyawdesired_Value [ 3 ] ; real_T pitchrollyawInitial_Value [ 3 ] ;
real_T Gain1_Gain ; real_T Integrator_IC ; real_T Gain_Gain ; real_T
Gain1_Gain_jkygvdcm0j ; real_T Integrator_IC_hsiqnplk4j ; real_T
Gain_Gain_j0nwylexu1 ; real_T Gain1_Gain_jyeaph4bso ; real_T
Integrator_IC_mi1nfze151 ; real_T Gain_Gain_hvers1lhk2 ; real_T
eachwheelInertia_Value ; real_T initialOmega_Value [ 3 ] ; real_T
disturbTorques_Value [ 3 ] ; real_T magTorq_Value [ 3 ] ; real_T
speeds1_Value ; real_T speeds_Value [ 4 ] ; real_T Integrator2_UpperSat ;
real_T Integrator2_LowerSat ; real_T radToDeg_Value ; real_T Integrator3_IC ;
real_T Gain2_Gain ; real_T Gain2_Gain_nggjdhdyc1 ; real_T
Gain2_Gain_cddumad5uc ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b_working_attitude_Tetrahedral_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
size_t gblCurrentSFcnIdx ; extern size_t * gblChildIdxToInfoIdx ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
