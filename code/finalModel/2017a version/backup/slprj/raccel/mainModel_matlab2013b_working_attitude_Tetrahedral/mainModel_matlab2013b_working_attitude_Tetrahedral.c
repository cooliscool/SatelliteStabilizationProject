#include "__cf_mainModel_matlab2013b_working_attitude_Tetrahedral.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013b_working_attitude_Tetrahedral_capi.h"
#include <math.h>
#include "mainModel_matlab2013b_working_attitude_Tetrahedral.h"
#include "mainModel_matlab2013b_working_attitude_Tetrahedral_private.h"
#include "mainModel_matlab2013b_working_attitude_Tetrahedral_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; } const int_T gblNumToFiles = 0 ; const int_T
gblNumFrFiles = 0 ; const int_T gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "8.12 (R2017a) 16-Feb-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
 "slprj//raccel//mainModel_matlab2013b_working_attitude_Tetrahedral//mainModel_matlab2013b_working_attitude_Tetrahedral_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { if ( ssIsFirstInitCond ( rtS ) ) {
rtX . bmi1faj1xs [ 0 ] = 0.0 ; rtX . bmi1faj1xs [ 1 ] = 0.0 ; rtX .
bmi1faj1xs [ 2 ] = 0.0 ; rtX . atqybikdjr [ 0 ] = 0.0 ; rtX . atqybikdjr [ 1
] = 0.0 ; rtX . atqybikdjr [ 2 ] = 0.0 ; } rtDW . oxwi2zlggz = 1 ; rtDW .
nvmt5ejec1 = ( rtInf ) ; rtDW . jpxj5p2zug = ( rtInf ) ; rtX . dvbyebomi5 =
rtP . Integrator_IC ; rtDW . fwpgdori5o = ( rtInf ) ; rtDW . eh4dedqq2g = (
rtInf ) ; rtX . ihwnrj44xy = rtP . Integrator_IC_hsiqnplk4j ; rtDW .
ogxld50bto = ( rtInf ) ; rtDW . f42zh3jope = ( rtInf ) ; rtX . ew4q35tavw =
rtP . Integrator_IC_mi1nfze151 ; rtDW . hbh24wsp3i = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . m0h3y5azam [ 0 ] = 1000.0 ; rtX .
m0h3y5azam [ 1 ] = 1000.0 ; rtX . m0h3y5azam [ 2 ] = 1000.0 ; rtX .
m0h3y5azam [ 3 ] = 1732.0 ; } rtDW . n5fov3ziup = 1 ; } void MdlStart ( void
) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = (
NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } rtB . brkeqz2pfv [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB .
ficvlk1zye [ 0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . brkeqz2pfv [ 1 ] =
rtP . pitchrollyawInitial_Value [ 1 ] ; rtB . ficvlk1zye [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . brkeqz2pfv [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ficvlk1zye [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . br2rmekq50 [ 0 ] = rtP . speeds_Value [ 0 ]
; rtB . br2rmekq50 [ 1 ] = rtP . speeds_Value [ 1 ] ; rtB . br2rmekq50 [ 2 ]
= rtP . speeds_Value [ 2 ] ; rtB . br2rmekq50 [ 3 ] = rtP . speeds_Value [ 3
] ; MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ; void
* pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { real_T * lastU ; static const real_T a [
12 ] = { 0.4330127018922193 , - 0.4330127018922193 , - 0.4330127018922193 ,
0.4330127018922193 , 0.4330127018922193 , - 0.4330127018922193 ,
0.4330127018922193 , - 0.4330127018922193 , 0.4330127018922193 ,
0.4330127018922193 , - 0.4330127018922193 , - 0.4330127018922193 } ; static
const real_T b [ 12 ] = { 0.57735026918962584 , 0.57735026918962584 ,
0.57735026918962584 , - 0.57735026918962584 , - 0.57735026918962584 ,
0.57735026918962584 , - 0.57735026918962584 , 0.57735026918962584 , -
0.57735026918962584 , 0.57735026918962584 , - 0.57735026918962584 , -
0.57735026918962584 } ; real_T Cbo [ 9 ] ; real_T temp1 [ 3 ] ; real_T y [ 3
] ; real_T b_y [ 3 ] ; static const real_T b_p [ 3 ] = { 0.0 , 0.0 ,
0.0010741000000000001 } ; static const int16_T a_p [ 9 ] = { 1800 , - 50 , -
15 , - 50 , 1600 , 25 , - 15 , 25 , 1200 } ; static const int8_T c [ 3 ] = {
0 , 0 , 1 } ; int32_T r2 ; int32_T r3 ; real_T maxval ; real_T a21 ; int32_T
rtemp ; int32_T i ; real_T d [ 9 ] ; real_T tmp [ 9 ] ; real_T d_p [ 9 ] ;
real_T tmp_p [ 9 ] ; if ( rtDW . oxwi2zlggz != 0 ) { rtX . bmi1faj1xs [ 0 ] =
rtB . brkeqz2pfv [ 0 ] ; rtX . bmi1faj1xs [ 1 ] = rtB . brkeqz2pfv [ 1 ] ;
rtX . bmi1faj1xs [ 2 ] = rtB . brkeqz2pfv [ 2 ] ; } rtB . ptgoe03tvr [ 0 ] =
rtX . bmi1faj1xs [ 0 ] ; rtB . i1rpglh0rk [ 0 ] = rtP .
pitchrollyawdesired_Value [ 0 ] - rtB . ptgoe03tvr [ 0 ] ; rtB . ptgoe03tvr [
1 ] = rtX . bmi1faj1xs [ 1 ] ; rtB . i1rpglh0rk [ 1 ] = rtP .
pitchrollyawdesired_Value [ 1 ] - rtB . ptgoe03tvr [ 1 ] ; rtB . ptgoe03tvr [
2 ] = rtX . bmi1faj1xs [ 2 ] ; rtB . i1rpglh0rk [ 2 ] = rtP .
pitchrollyawdesired_Value [ 2 ] - rtB . ptgoe03tvr [ 2 ] ; rtB . evw2wf1zvf =
rtP . Gain1_Gain * rtB . i1rpglh0rk [ 2 ] ; if ( ( rtDW . nvmt5ejec1 >=
ssGetT ( rtS ) ) && ( rtDW . jpxj5p2zug >= ssGetT ( rtS ) ) ) { rtB .
haev0shbm4 = 0.0 ; } else { maxval = rtDW . nvmt5ejec1 ; lastU = & rtDW .
japb5gtzs0 ; if ( rtDW . nvmt5ejec1 < rtDW . jpxj5p2zug ) { if ( rtDW .
jpxj5p2zug < ssGetT ( rtS ) ) { maxval = rtDW . jpxj5p2zug ; lastU = & rtDW .
dezvtc5kyw ; } } else { if ( rtDW . nvmt5ejec1 >= ssGetT ( rtS ) ) { maxval =
rtDW . jpxj5p2zug ; lastU = & rtDW . dezvtc5kyw ; } } rtB . haev0shbm4 = (
rtB . evw2wf1zvf - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; } rtB .
egzfwpp1ps = rtX . dvbyebomi5 ; rtB . lx3subhkuw = rtP . Gain_Gain * rtB .
i1rpglh0rk [ 2 ] ; rtB . mytiiwu2tf = ( rtB . haev0shbm4 + rtB . egzfwpp1ps )
+ rtB . lx3subhkuw ; rtB . plzbbm0m0n = rtP . Gain1_Gain_jkygvdcm0j * rtB .
i1rpglh0rk [ 1 ] ; if ( ( rtDW . fwpgdori5o >= ssGetT ( rtS ) ) && ( rtDW .
eh4dedqq2g >= ssGetT ( rtS ) ) ) { rtB . gjb3pj0jz1 = 0.0 ; } else { maxval =
rtDW . fwpgdori5o ; lastU = & rtDW . p0215xzpem ; if ( rtDW . fwpgdori5o <
rtDW . eh4dedqq2g ) { if ( rtDW . eh4dedqq2g < ssGetT ( rtS ) ) { maxval =
rtDW . eh4dedqq2g ; lastU = & rtDW . gvtpg0pgrv ; } } else { if ( rtDW .
fwpgdori5o >= ssGetT ( rtS ) ) { maxval = rtDW . eh4dedqq2g ; lastU = & rtDW
. gvtpg0pgrv ; } } rtB . gjb3pj0jz1 = ( rtB . plzbbm0m0n - * lastU ) / (
ssGetT ( rtS ) - maxval ) ; } rtB . mb5hqohkyg = rtX . ihwnrj44xy ; rtB .
aswuxjeept = rtP . Gain_Gain_j0nwylexu1 * rtB . i1rpglh0rk [ 1 ] ; rtB .
mjn504rlhx = ( rtB . gjb3pj0jz1 + rtB . mb5hqohkyg ) + rtB . aswuxjeept ; rtB
. cbnfwiqn0t = rtP . Gain1_Gain_jyeaph4bso * rtB . i1rpglh0rk [ 0 ] ; if ( (
rtDW . ogxld50bto >= ssGetT ( rtS ) ) && ( rtDW . f42zh3jope >= ssGetT ( rtS
) ) ) { rtB . n4hc35vufj = 0.0 ; } else { maxval = rtDW . ogxld50bto ; lastU
= & rtDW . md5v1s5dr3 ; if ( rtDW . ogxld50bto < rtDW . f42zh3jope ) { if (
rtDW . f42zh3jope < ssGetT ( rtS ) ) { maxval = rtDW . f42zh3jope ; lastU = &
rtDW . egrbfzytlm ; } } else { if ( rtDW . ogxld50bto >= ssGetT ( rtS ) ) {
maxval = rtDW . f42zh3jope ; lastU = & rtDW . egrbfzytlm ; } } rtB .
n4hc35vufj = ( rtB . cbnfwiqn0t - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; }
rtB . nu3puwrer0 = rtX . ew4q35tavw ; rtB . jlf40ljcp0 = rtP .
Gain_Gain_hvers1lhk2 * rtB . i1rpglh0rk [ 0 ] ; rtB . dd50ahg4eq = ( rtB .
n4hc35vufj + rtB . nu3puwrer0 ) + rtB . jlf40ljcp0 ; for ( i = 0 ; i < 4 ; i
++ ) { rtB . evkkq2irpt [ i ] = ( ( a [ i + 4 ] * rtB . mjn504rlhx + a [ i ]
* rtB . mytiiwu2tf ) + a [ i + 8 ] * rtB . dd50ahg4eq ) / rtP .
eachwheelInertia_Value ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . aduxeibqgo [
i ] = 0.0 ; rtB . aduxeibqgo [ i ] += rtP . eachwheelInertia_Value * b [ i ]
* rtB . evkkq2irpt [ 0 ] ; rtB . aduxeibqgo [ i ] += b [ i + 3 ] * rtP .
eachwheelInertia_Value * rtB . evkkq2irpt [ 1 ] ; rtB . aduxeibqgo [ i ] += b
[ i + 6 ] * rtP . eachwheelInertia_Value * rtB . evkkq2irpt [ 2 ] ; rtB .
aduxeibqgo [ i ] += b [ i + 9 ] * rtP . eachwheelInertia_Value * rtB .
evkkq2irpt [ 3 ] ; } if ( rtDW . hbh24wsp3i != 0 ) { rtX . atqybikdjr [ 0 ] =
rtB . ficvlk1zye [ 0 ] ; rtX . atqybikdjr [ 1 ] = rtB . ficvlk1zye [ 1 ] ;
rtX . atqybikdjr [ 2 ] = rtB . ficvlk1zye [ 2 ] ; } d [ 1 ] = 0.0 ; d [ 4 ] =
muDoubleScalarCos ( rtB . ptgoe03tvr [ 2 ] ) ; d [ 7 ] = muDoubleScalarSin (
rtB . ptgoe03tvr [ 2 ] ) ; d [ 2 ] = 0.0 ; d [ 5 ] = - muDoubleScalarSin (
rtB . ptgoe03tvr [ 2 ] ) ; d [ 8 ] = muDoubleScalarCos ( rtB . ptgoe03tvr [ 2
] ) ; tmp [ 0 ] = muDoubleScalarCos ( rtB . ptgoe03tvr [ 1 ] ) ; tmp [ 3 ] =
0.0 ; tmp [ 6 ] = - muDoubleScalarSin ( rtB . ptgoe03tvr [ 1 ] ) ; rtB .
iyuf3pmi5n [ 0 ] = rtX . atqybikdjr [ 0 ] ; d [ 0 ] = 1.0 ; tmp [ 1 ] = 0.0 ;
rtB . iyuf3pmi5n [ 1 ] = rtX . atqybikdjr [ 1 ] ; d [ 3 ] = 0.0 ; tmp [ 4 ] =
1.0 ; rtB . iyuf3pmi5n [ 2 ] = rtX . atqybikdjr [ 2 ] ; d [ 6 ] = 0.0 ; tmp [
7 ] = 0.0 ; tmp [ 2 ] = muDoubleScalarSin ( rtB . ptgoe03tvr [ 1 ] ) ; tmp [
5 ] = 0.0 ; tmp [ 8 ] = muDoubleScalarCos ( rtB . ptgoe03tvr [ 1 ] ) ; tmp_p
[ 0 ] = muDoubleScalarCos ( rtB . ptgoe03tvr [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . ptgoe03tvr [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . ptgoe03tvr [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . ptgoe03tvr [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_p [ i + 3 * r2 ] =
0.0 ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d [ i ] ; d_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * d [ i + 3 ] ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
d [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { maxval = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { Cbo [ i + 3 * r2 ] = 0.0
; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * d_p [ i ] ; Cbo [ i + 3 * r2 ] +=
tmp_p [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; maxval += Cbo [ 3 * r2 + i ] * b_p [ r2 ] ; } temp1 [ i
] = rtB . iyuf3pmi5n [ i ] - maxval ; y [ i ] = Cbo [ i + 6 ] *
0.0010741000000000001 + ( Cbo [ i + 3 ] * 0.0 + Cbo [ i ] * 0.0 ) ; } for ( i
= 0 ; i < 3 ; i ++ ) { b_y [ i ] = ( real_T ) a_p [ i + 6 ] * temp1 [ 2 ] + (
( real_T ) a_p [ i + 3 ] * temp1 [ 1 ] + ( real_T ) a_p [ i ] * temp1 [ 0 ] )
; } maxval = ( ( rtP . disturbTorques_Value [ 0 ] + rtP . magTorq_Value [ 0 ]
) - rtB . aduxeibqgo [ 0 ] ) - ( temp1 [ 1 ] * b_y [ 2 ] - temp1 [ 2 ] * b_y
[ 1 ] ) ; a21 = ( ( rtP . disturbTorques_Value [ 2 ] + rtP . magTorq_Value [
2 ] ) - rtB . aduxeibqgo [ 2 ] ) - ( temp1 [ 0 ] * b_y [ 1 ] - temp1 [ 1 ] *
b_y [ 0 ] ) ; temp1 [ 1 ] = ( ( ( rtP . disturbTorques_Value [ 1 ] + rtP .
magTorq_Value [ 1 ] ) - rtB . aduxeibqgo [ 1 ] ) - ( temp1 [ 2 ] * b_y [ 0 ]
- temp1 [ 0 ] * b_y [ 2 ] ) ) - maxval * - 0.027777777777777776 ; temp1 [ 2 ]
= ( a21 - maxval * - 0.0083333333333333332 ) - temp1 [ 1 ] *
0.015377932232841007 ; temp1 [ 2 ] /= 1199.4969591659426 ; temp1 [ 0 ] =
maxval - temp1 [ 2 ] * - 15.0 ; temp1 [ 1 ] -= temp1 [ 2 ] *
24.583333333333332 ; temp1 [ 1 ] /= 1598.6111111111111 ; temp1 [ 0 ] -= temp1
[ 1 ] * - 50.0 ; temp1 [ 0 ] /= 1800.0 ; rtB . nsguhsqxcw [ 0 ] = temp1 [ 0 ]
- ( rtB . iyuf3pmi5n [ 1 ] * y [ 2 ] - rtB . iyuf3pmi5n [ 2 ] * y [ 1 ] ) ;
rtB . nsguhsqxcw [ 1 ] = temp1 [ 1 ] - ( rtB . iyuf3pmi5n [ 2 ] * y [ 0 ] -
rtB . iyuf3pmi5n [ 0 ] * y [ 2 ] ) ; rtB . nsguhsqxcw [ 2 ] = temp1 [ 2 ] - (
rtB . iyuf3pmi5n [ 0 ] * y [ 1 ] - rtB . iyuf3pmi5n [ 1 ] * y [ 0 ] ) ; if (
rtDW . n5fov3ziup != 0 ) { rtX . m0h3y5azam [ 0 ] = rtB . br2rmekq50 [ 0 ] ;
rtX . m0h3y5azam [ 1 ] = rtB . br2rmekq50 [ 1 ] ; rtX . m0h3y5azam [ 2 ] =
rtB . br2rmekq50 [ 2 ] ; rtX . m0h3y5azam [ 3 ] = rtB . br2rmekq50 [ 3 ] ;
ssSetBlkStateChange ( rtS ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX .
m0h3y5azam [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX . m0h3y5azam [ 0 ] =
rtP . Integrator2_UpperSat ; } else { if ( rtX . m0h3y5azam [ 0 ] <= rtP .
Integrator2_LowerSat ) { rtX . m0h3y5azam [ 0 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . m0h3y5azam [ 1 ] >= rtP . Integrator2_UpperSat ) { rtX .
m0h3y5azam [ 1 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
m0h3y5azam [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX . m0h3y5azam [ 1 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . m0h3y5azam [ 2 ] >= rtP .
Integrator2_UpperSat ) { rtX . m0h3y5azam [ 2 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . m0h3y5azam [ 2 ] <= rtP . Integrator2_LowerSat ) { rtX
. m0h3y5azam [ 2 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . m0h3y5azam [
3 ] >= rtP . Integrator2_UpperSat ) { rtX . m0h3y5azam [ 3 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . m0h3y5azam [ 3 ] <= rtP .
Integrator2_LowerSat ) { rtX . m0h3y5azam [ 3 ] = rtP . Integrator2_LowerSat
; } } } rtB . mpypoua0wh [ 0 ] = rtX . m0h3y5azam [ 0 ] ; rtB . mpypoua0wh [
1 ] = rtX . m0h3y5azam [ 1 ] ; rtB . mpypoua0wh [ 2 ] = rtX . m0h3y5azam [ 2
] ; rtB . mpypoua0wh [ 3 ] = rtX . m0h3y5azam [ 3 ] ; rtB . ovrokjeois [ 0 ]
= rtB . ptgoe03tvr [ 0 ] * rtP . radToDeg_Value ; rtB . ovrokjeois [ 1 ] =
rtB . ptgoe03tvr [ 1 ] * rtP . radToDeg_Value ; rtB . ovrokjeois [ 2 ] = rtB
. ptgoe03tvr [ 2 ] * rtP . radToDeg_Value ; rtB . arbmarg4hj = rtP .
Gain2_Gain * rtB . i1rpglh0rk [ 0 ] ; rtB . epbuw5rgnc = rtP .
Gain2_Gain_nggjdhdyc1 * rtB . i1rpglh0rk [ 1 ] ; rtB . nnabu04l1n = rtP .
Gain2_Gain_cddumad5uc * rtB . i1rpglh0rk [ 2 ] ; Cbo [ 0 ] = -
muDoubleScalarSin ( rtB . ptgoe03tvr [ 1 ] ) ; Cbo [ 3 ] = 0.0 ; Cbo [ 6 ] =
1.0 ; Cbo [ 1 ] = muDoubleScalarCos ( rtB . ptgoe03tvr [ 1 ] ) *
muDoubleScalarSin ( rtB . ptgoe03tvr [ 2 ] ) ; Cbo [ 4 ] = muDoubleScalarCos
( rtB . ptgoe03tvr [ 2 ] ) ; Cbo [ 7 ] = 0.0 ; Cbo [ 2 ] = muDoubleScalarCos
( rtB . ptgoe03tvr [ 1 ] ) * muDoubleScalarCos ( rtB . ptgoe03tvr [ 2 ] ) ;
Cbo [ 5 ] = - muDoubleScalarSin ( rtB . ptgoe03tvr [ 2 ] ) ; Cbo [ 8 ] = 0.0
; i = 0 ; r2 = 1 ; r3 = 2 ; maxval = muDoubleScalarAbs ( Cbo [ 0 ] ) ; a21 =
muDoubleScalarAbs ( Cbo [ 1 ] ) ; if ( a21 > maxval ) { maxval = a21 ; i = 1
; r2 = 0 ; } if ( muDoubleScalarAbs ( Cbo [ 2 ] ) > maxval ) { i = 2 ; r2 = 1
; r3 = 0 ; } Cbo [ r2 ] /= Cbo [ i ] ; Cbo [ r3 ] /= Cbo [ i ] ; Cbo [ 3 + r2
] -= Cbo [ 3 + i ] * Cbo [ r2 ] ; Cbo [ 3 + r3 ] -= Cbo [ 3 + i ] * Cbo [ r3
] ; Cbo [ 6 + r2 ] -= Cbo [ 6 + i ] * Cbo [ r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 6
+ i ] * Cbo [ r3 ] ; if ( muDoubleScalarAbs ( Cbo [ 3 + r3 ] ) >
muDoubleScalarAbs ( Cbo [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 = rtemp ;
} Cbo [ 3 + r3 ] /= Cbo [ 3 + r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 3 + r3 ] * Cbo [
6 + r2 ] ; rtB . hbj0iaqdi0 [ 0 ] = rtB . iyuf3pmi5n [ i ] ; rtB . hbj0iaqdi0
[ 1 ] = rtB . iyuf3pmi5n [ r2 ] - rtB . hbj0iaqdi0 [ 0 ] * Cbo [ r2 ] ; rtB .
hbj0iaqdi0 [ 2 ] = ( rtB . iyuf3pmi5n [ r3 ] - rtB . hbj0iaqdi0 [ 0 ] * Cbo [
r3 ] ) - Cbo [ 3 + r3 ] * rtB . hbj0iaqdi0 [ 1 ] ; rtB . hbj0iaqdi0 [ 2 ] /=
Cbo [ 6 + r3 ] ; rtB . hbj0iaqdi0 [ 0 ] -= Cbo [ 6 + i ] * rtB . hbj0iaqdi0 [
2 ] ; rtB . hbj0iaqdi0 [ 1 ] -= Cbo [ 6 + r2 ] * rtB . hbj0iaqdi0 [ 2 ] ; rtB
. hbj0iaqdi0 [ 1 ] /= Cbo [ 3 + r2 ] ; rtB . hbj0iaqdi0 [ 0 ] -= Cbo [ 3 + i
] * rtB . hbj0iaqdi0 [ 1 ] ; rtB . hbj0iaqdi0 [ 0 ] /= Cbo [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T tid ) { rtB .
brkeqz2pfv [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB . ficvlk1zye [
0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . brkeqz2pfv [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . ficvlk1zye [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . brkeqz2pfv [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ficvlk1zye [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . br2rmekq50 [ 0 ] = rtP . speeds_Value [ 0 ]
; rtB . br2rmekq50 [ 1 ] = rtP . speeds_Value [ 1 ] ; rtB . br2rmekq50 [ 2 ]
= rtP . speeds_Value [ 2 ] ; rtB . br2rmekq50 [ 3 ] = rtP . speeds_Value [ 3
] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T *
lastU ; rtDW . oxwi2zlggz = 0 ; if ( rtDW . nvmt5ejec1 == ( rtInf ) ) { rtDW
. nvmt5ejec1 = ssGetT ( rtS ) ; lastU = & rtDW . japb5gtzs0 ; } else if (
rtDW . jpxj5p2zug == ( rtInf ) ) { rtDW . jpxj5p2zug = ssGetT ( rtS ) ; lastU
= & rtDW . dezvtc5kyw ; } else if ( rtDW . nvmt5ejec1 < rtDW . jpxj5p2zug ) {
rtDW . nvmt5ejec1 = ssGetT ( rtS ) ; lastU = & rtDW . japb5gtzs0 ; } else {
rtDW . jpxj5p2zug = ssGetT ( rtS ) ; lastU = & rtDW . dezvtc5kyw ; } * lastU
= rtB . evw2wf1zvf ; if ( rtDW . fwpgdori5o == ( rtInf ) ) { rtDW .
fwpgdori5o = ssGetT ( rtS ) ; lastU = & rtDW . p0215xzpem ; } else if ( rtDW
. eh4dedqq2g == ( rtInf ) ) { rtDW . eh4dedqq2g = ssGetT ( rtS ) ; lastU = &
rtDW . gvtpg0pgrv ; } else if ( rtDW . fwpgdori5o < rtDW . eh4dedqq2g ) {
rtDW . fwpgdori5o = ssGetT ( rtS ) ; lastU = & rtDW . p0215xzpem ; } else {
rtDW . eh4dedqq2g = ssGetT ( rtS ) ; lastU = & rtDW . gvtpg0pgrv ; } * lastU
= rtB . plzbbm0m0n ; if ( rtDW . ogxld50bto == ( rtInf ) ) { rtDW .
ogxld50bto = ssGetT ( rtS ) ; lastU = & rtDW . md5v1s5dr3 ; } else if ( rtDW
. f42zh3jope == ( rtInf ) ) { rtDW . f42zh3jope = ssGetT ( rtS ) ; lastU = &
rtDW . egrbfzytlm ; } else if ( rtDW . ogxld50bto < rtDW . f42zh3jope ) {
rtDW . ogxld50bto = ssGetT ( rtS ) ; lastU = & rtDW . md5v1s5dr3 ; } else {
rtDW . f42zh3jope = ssGetT ( rtS ) ; lastU = & rtDW . egrbfzytlm ; } * lastU
= rtB . cbnfwiqn0t ; rtDW . hbh24wsp3i = 0 ; rtDW . n5fov3ziup = 0 ; if ( rtX
. m0h3y5azam [ 0 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW .
phlknw1yzh [ 0 ] ) { case 3 : if ( rtB . evkkq2irpt [ 0 ] < 0.0 ) {
ssSetSolverNeedsReset ( rtS ) ; rtDW . phlknw1yzh [ 0 ] = 1 ; } break ; case
1 : if ( rtB . evkkq2irpt [ 0 ] >= 0.0 ) { rtDW . phlknw1yzh [ 0 ] = 3 ;
ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . evkkq2irpt [ 0 ] < 0.0 ) { rtDW . phlknw1yzh [ 0 ] = 1 ; }
else { rtDW . phlknw1yzh [ 0 ] = 3 ; } break ; } } else if ( rtX . m0h3y5azam
[ 0 ] == rtP . Integrator2_LowerSat ) { switch ( rtDW . phlknw1yzh [ 0 ] ) {
case 4 : if ( rtB . evkkq2irpt [ 0 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . phlknw1yzh [ 0 ] = 2 ; } break ; case 2 : if ( rtB . evkkq2irpt [ 0
] <= 0.0 ) { rtDW . phlknw1yzh [ 0 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 0 ]
> 0.0 ) { rtDW . phlknw1yzh [ 0 ] = 2 ; } else { rtDW . phlknw1yzh [ 0 ] = 4
; } break ; } } else { rtDW . phlknw1yzh [ 0 ] = 0 ; } if ( rtX . m0h3y5azam
[ 1 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . phlknw1yzh [ 1 ] ) {
case 3 : if ( rtB . evkkq2irpt [ 1 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . phlknw1yzh [ 1 ] = 1 ; } break ; case 1 : if ( rtB . evkkq2irpt [ 1
] >= 0.0 ) { rtDW . phlknw1yzh [ 1 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 1 ]
< 0.0 ) { rtDW . phlknw1yzh [ 1 ] = 1 ; } else { rtDW . phlknw1yzh [ 1 ] = 3
; } break ; } } else if ( rtX . m0h3y5azam [ 1 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . phlknw1yzh [ 1 ] ) { case 4 : if (
rtB . evkkq2irpt [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
phlknw1yzh [ 1 ] = 2 ; } break ; case 2 : if ( rtB . evkkq2irpt [ 1 ] <= 0.0
) { rtDW . phlknw1yzh [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 1 ] > 0.0 )
{ rtDW . phlknw1yzh [ 1 ] = 2 ; } else { rtDW . phlknw1yzh [ 1 ] = 4 ; }
break ; } } else { rtDW . phlknw1yzh [ 1 ] = 0 ; } if ( rtX . m0h3y5azam [ 2
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . phlknw1yzh [ 2 ] ) { case
3 : if ( rtB . evkkq2irpt [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . phlknw1yzh [ 2 ] = 1 ; } break ; case 1 : if ( rtB . evkkq2irpt [ 2 ]
>= 0.0 ) { rtDW . phlknw1yzh [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 2 ]
< 0.0 ) { rtDW . phlknw1yzh [ 2 ] = 1 ; } else { rtDW . phlknw1yzh [ 2 ] = 3
; } break ; } } else if ( rtX . m0h3y5azam [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . phlknw1yzh [ 2 ] ) { case 4 : if (
rtB . evkkq2irpt [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
phlknw1yzh [ 2 ] = 2 ; } break ; case 2 : if ( rtB . evkkq2irpt [ 2 ] <= 0.0
) { rtDW . phlknw1yzh [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 2 ] > 0.0 )
{ rtDW . phlknw1yzh [ 2 ] = 2 ; } else { rtDW . phlknw1yzh [ 2 ] = 4 ; }
break ; } } else { rtDW . phlknw1yzh [ 2 ] = 0 ; } if ( rtX . m0h3y5azam [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . phlknw1yzh [ 3 ] ) { case
3 : if ( rtB . evkkq2irpt [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . phlknw1yzh [ 3 ] = 1 ; } break ; case 1 : if ( rtB . evkkq2irpt [ 3 ]
>= 0.0 ) { rtDW . phlknw1yzh [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 3 ]
< 0.0 ) { rtDW . phlknw1yzh [ 3 ] = 1 ; } else { rtDW . phlknw1yzh [ 3 ] = 3
; } break ; } } else if ( rtX . m0h3y5azam [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . phlknw1yzh [ 3 ] ) { case 4 : if (
rtB . evkkq2irpt [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
phlknw1yzh [ 3 ] = 2 ; } break ; case 2 : if ( rtB . evkkq2irpt [ 3 ] <= 0.0
) { rtDW . phlknw1yzh [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . evkkq2irpt [ 3 ] > 0.0 )
{ rtDW . phlknw1yzh [ 3 ] = 2 ; } else { rtDW . phlknw1yzh [ 3 ] = 4 ; }
break ; } } else { rtDW . phlknw1yzh [ 3 ] = 0 ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> dvbyebomi5 = rtB . nnabu04l1n ; _rtXdot -> ihwnrj44xy =
rtB . epbuw5rgnc ; _rtXdot -> ew4q35tavw = rtB . arbmarg4hj ; _rtXdot ->
bmi1faj1xs [ 0 ] = rtB . hbj0iaqdi0 [ 0 ] ; _rtXdot -> atqybikdjr [ 0 ] = rtB
. nsguhsqxcw [ 0 ] ; _rtXdot -> bmi1faj1xs [ 1 ] = rtB . hbj0iaqdi0 [ 1 ] ;
_rtXdot -> atqybikdjr [ 1 ] = rtB . nsguhsqxcw [ 1 ] ; _rtXdot -> bmi1faj1xs
[ 2 ] = rtB . hbj0iaqdi0 [ 2 ] ; _rtXdot -> atqybikdjr [ 2 ] = rtB .
nsguhsqxcw [ 2 ] ; if ( ( rtDW . phlknw1yzh [ 0 ] != 3 ) && ( rtDW .
phlknw1yzh [ 0 ] != 4 ) ) { _rtXdot -> m0h3y5azam [ 0 ] = rtB . evkkq2irpt [
0 ] ; _rtXdis -> m0h3y5azam [ 0 ] = false ; } else { _rtXdot -> m0h3y5azam [
0 ] = 0.0 ; if ( ( rtDW . phlknw1yzh [ 0 ] == 3 ) || ( rtDW . phlknw1yzh [ 0
] == 4 ) ) { _rtXdis -> m0h3y5azam [ 0 ] = true ; } } if ( ( rtDW .
phlknw1yzh [ 1 ] != 3 ) && ( rtDW . phlknw1yzh [ 1 ] != 4 ) ) { _rtXdot ->
m0h3y5azam [ 1 ] = rtB . evkkq2irpt [ 1 ] ; _rtXdis -> m0h3y5azam [ 1 ] =
false ; } else { _rtXdot -> m0h3y5azam [ 1 ] = 0.0 ; if ( ( rtDW . phlknw1yzh
[ 1 ] == 3 ) || ( rtDW . phlknw1yzh [ 1 ] == 4 ) ) { _rtXdis -> m0h3y5azam [
1 ] = true ; } } if ( ( rtDW . phlknw1yzh [ 2 ] != 3 ) && ( rtDW . phlknw1yzh
[ 2 ] != 4 ) ) { _rtXdot -> m0h3y5azam [ 2 ] = rtB . evkkq2irpt [ 2 ] ;
_rtXdis -> m0h3y5azam [ 2 ] = false ; } else { _rtXdot -> m0h3y5azam [ 2 ] =
0.0 ; if ( ( rtDW . phlknw1yzh [ 2 ] == 3 ) || ( rtDW . phlknw1yzh [ 2 ] == 4
) ) { _rtXdis -> m0h3y5azam [ 2 ] = true ; } } if ( ( rtDW . phlknw1yzh [ 3 ]
!= 3 ) && ( rtDW . phlknw1yzh [ 3 ] != 4 ) ) { _rtXdot -> m0h3y5azam [ 3 ] =
rtB . evkkq2irpt [ 3 ] ; _rtXdis -> m0h3y5azam [ 3 ] = false ; } else {
_rtXdot -> m0h3y5azam [ 3 ] = 0.0 ; if ( ( rtDW . phlknw1yzh [ 3 ] == 3 ) ||
( rtDW . phlknw1yzh [ 3 ] == 4 ) ) { _rtXdis -> m0h3y5azam [ 3 ] = true ; } }
} void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; if ( (
rtDW . phlknw1yzh [ 0 ] == 1 ) && ( rtX . m0h3y5azam [ 0 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> arcmvpy34i [ 0 ] = 0.0 ; } else {
_rtZCSV -> arcmvpy34i [ 0 ] = rtX . m0h3y5azam [ 0 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . phlknw1yzh [ 0 ] == 2 ) && ( rtX .
m0h3y5azam [ 0 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> j3oxfb0lgx [
0 ] = 0.0 ; } else { _rtZCSV -> j3oxfb0lgx [ 0 ] = rtX . m0h3y5azam [ 0 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . phlknw1yzh [ 0 ] == 3 ) || (
rtDW . phlknw1yzh [ 0 ] == 4 ) ) { _rtZCSV -> j0epmfhdc4 [ 0 ] = rtB .
evkkq2irpt [ 0 ] ; } else { _rtZCSV -> j0epmfhdc4 [ 0 ] = 0.0 ; } if ( ( rtDW
. phlknw1yzh [ 1 ] == 1 ) && ( rtX . m0h3y5azam [ 1 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> arcmvpy34i [ 1 ] = 0.0 ; } else {
_rtZCSV -> arcmvpy34i [ 1 ] = rtX . m0h3y5azam [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . phlknw1yzh [ 1 ] == 2 ) && ( rtX .
m0h3y5azam [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> j3oxfb0lgx [
1 ] = 0.0 ; } else { _rtZCSV -> j3oxfb0lgx [ 1 ] = rtX . m0h3y5azam [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . phlknw1yzh [ 1 ] == 3 ) || (
rtDW . phlknw1yzh [ 1 ] == 4 ) ) { _rtZCSV -> j0epmfhdc4 [ 1 ] = rtB .
evkkq2irpt [ 1 ] ; } else { _rtZCSV -> j0epmfhdc4 [ 1 ] = 0.0 ; } if ( ( rtDW
. phlknw1yzh [ 2 ] == 1 ) && ( rtX . m0h3y5azam [ 2 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> arcmvpy34i [ 2 ] = 0.0 ; } else {
_rtZCSV -> arcmvpy34i [ 2 ] = rtX . m0h3y5azam [ 2 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . phlknw1yzh [ 2 ] == 2 ) && ( rtX .
m0h3y5azam [ 2 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> j3oxfb0lgx [
2 ] = 0.0 ; } else { _rtZCSV -> j3oxfb0lgx [ 2 ] = rtX . m0h3y5azam [ 2 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . phlknw1yzh [ 2 ] == 3 ) || (
rtDW . phlknw1yzh [ 2 ] == 4 ) ) { _rtZCSV -> j0epmfhdc4 [ 2 ] = rtB .
evkkq2irpt [ 2 ] ; } else { _rtZCSV -> j0epmfhdc4 [ 2 ] = 0.0 ; } if ( ( rtDW
. phlknw1yzh [ 3 ] == 1 ) && ( rtX . m0h3y5azam [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> arcmvpy34i [ 3 ] = 0.0 ; } else {
_rtZCSV -> arcmvpy34i [ 3 ] = rtX . m0h3y5azam [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . phlknw1yzh [ 3 ] == 2 ) && ( rtX .
m0h3y5azam [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> j3oxfb0lgx [
3 ] = 0.0 ; } else { _rtZCSV -> j3oxfb0lgx [ 3 ] = rtX . m0h3y5azam [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . phlknw1yzh [ 3 ] == 3 ) || (
rtDW . phlknw1yzh [ 3 ] == 4 ) ) { _rtZCSV -> j0epmfhdc4 [ 3 ] = rtB .
evkkq2irpt [ 3 ] ; } else { _rtZCSV -> j0epmfhdc4 [ 3 ] = 0.0 ; } } void
MdlTerminate ( void ) { { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwCreateSigstreamSlioClient (
rt_GetOSigstreamManager ( ) , rtwGetPointerFromUniquePtr ( rt_slioCatalogue (
) ) ) ; rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) , rt_GetMatSigstreamLoggingFileName ( ) ) ;
rtwOSigstreamManagerDestroyInstance ( rt_GetOSigstreamManager ( ) ) ;
rtwTerminateSlioCatalogue ( slioCatalogueAddr ) ; * slioCatalogueAddr = (
NULL ) ; } } } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
13 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 48 ) ;
ssSetNumBlockIO ( rtS , 30 ) ; ssSetNumBlockParams ( rtS , 35 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 720860282U ) ; ssSetChecksumVal ( rtS ,
1 , 672568504U ) ; ssSetChecksumVal ( rtS , 2 , 1143932855U ) ;
ssSetChecksumVal ( rtS , 3 , 4128612897U ) ; } SimStruct *
raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo ; ( void )
memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( (
char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr (
rtS , & mdlInfo ) ; { static time_T mdlPeriod [ NSAMPLE_TIMES ] ; static
time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T mdlTaskTimes [
NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ; static int_T
mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T mdlTNextWasAdjustedPtr [
NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits [ NSAMPLE_TIMES *
NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; {
int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ;
mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ;
mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] )
; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ;
ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr
( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS ,
& mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = ( real_T * )
& rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 ,
sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS
, dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; }
mainModel_matlab2013b_working_attitude_Tetrahedral_InitializeDataMapInfo ( )
; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_matlab2013b_working_attitude_Tetrahedral" ) ; ssSetPath ( rtS ,
"mainModel_matlab2013b_working_attitude_Tetrahedral" ) ; ssSetTStart ( rtS ,
0.0 ) ; ssSetTFinal ( rtS , 1000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo
; rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 1
, 1 , 1 , 3 , 4 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 ,
1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 3 , 1 , 1 , 1
, 3 , 4 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 ,
0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"mainModel_matlab2013b_working_attitude_Tetrahedral/Integrator1" ,
 "mainModel_matlab2013b_working_attitude_Tetrahedral/Attitude Controller/PID_3/Integrator"
,
 "mainModel_matlab2013b_working_attitude_Tetrahedral/Attitude Controller/PID_2/Integrator"
,
 "mainModel_matlab2013b_working_attitude_Tetrahedral/Attitude Controller/PID_1/Integrator"
, "mainModel_matlab2013b_working_attitude_Tetrahedral/Integrator" ,
"mainModel_matlab2013b_working_attitude_Tetrahedral/Integrator2" } ; static
const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 6 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 6 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . bmi1faj1xs [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dvbyebomi5 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . ihwnrj44xy ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ew4q35tavw ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . atqybikdjr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . m0h3y5azam [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 13 ] ; static
real_T absTol [ 13 ] = { 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9
, 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 } ; static
uint8_T absTolControl [ 13 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [ 12 ] = { (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; ssSetSolverRelTol ( rtS , 1.0E-6 )
; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , 5 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode15s" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector (
rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 12 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 12 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 720860282U ) ; ssSetChecksumVal ( rtS , 1 ,
672568504U ) ; ssSetChecksumVal ( rtS , 2 , 1143932855U ) ; ssSetChecksumVal
( rtS , 3 , 4128612897U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; } const int_T gblParameterTuningTid = 1 ; void
MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID1 ( tid ) ; }
