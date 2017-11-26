#include "__cf_mainModel_matlab2013b_.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013b__capi.h"
#include <math.h>
#include "mainModel_matlab2013b_.h"
#include "mainModel_matlab2013b__private.h"
#include "mainModel_matlab2013b__dt.h"
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
"slprj//raccel//mainModel_matlab2013b_//mainModel_matlab2013b__Jpattern.mat"
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
rtX . na0kwbhiuw [ 0 ] = 1000.0 ; rtX . na0kwbhiuw [ 1 ] = 1000.0 ; rtX .
na0kwbhiuw [ 2 ] = 1000.0 ; rtX . na0kwbhiuw [ 3 ] = 1732.0 ; rtX .
kmrvp24iak [ 0 ] = 0.0 ; rtX . kmrvp24iak [ 1 ] = 0.0 ; rtX . kmrvp24iak [ 2
] = 0.0 ; } rtDW . ijwm01234w = 1 ; rtDW . j3qdiyfhss = 1 ; rtDW . mruqdd4fxa
= ( rtInf ) ; rtDW . en5yifcisr = ( rtInf ) ; rtX . awawpknawq = rtP .
Integrator_IC ; rtDW . jj2dwxwohg = ( rtInf ) ; rtDW . eealhk5q4c = ( rtInf )
; rtX . eefvuab0yx = rtP . Integrator_IC_hsiqnplk4j ; rtDW . ak5rdpmsmz = (
rtInf ) ; rtDW . c3ktouvv30 = ( rtInf ) ; rtX . blaoeqyfri = rtP .
Integrator_IC_mi1nfze151 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX .
mz0jfaypkk [ 0 ] = 0.0 ; rtX . mz0jfaypkk [ 1 ] = 0.0 ; rtX . mz0jfaypkk [ 2
] = 0.0 ; } rtDW . dw32h4dvva = 1 ; } void MdlStart ( void ) { { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const char *
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
} } rtB . adwnxz5ipz [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . adwnxz5ipz [ 1
] = rtP . speeds_Value [ 1 ] ; rtB . adwnxz5ipz [ 2 ] = rtP . speeds_Value [
2 ] ; rtB . adwnxz5ipz [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . exnul2rleq [
0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB . k1felwmdht [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . exnul2rleq [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . k1felwmdht [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . exnul2rleq [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . k1felwmdht [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
real_T * lastU ; static const real_T a [ 12 ] = { 0.83333333333333348 , -
0.16666666666666671 , - 0.16666666666666671 , - 0.28867513459481292 , -
0.16666666666666671 , 0.83333333333333348 , - 0.16666666666666671 , -
0.28867513459481292 , - 0.16666666666666671 , - 0.16666666666666671 ,
0.83333333333333348 , - 0.28867513459481292 } ; real_T Cbo [ 9 ] ; real_T
temp1 [ 3 ] ; real_T y [ 3 ] ; real_T b_y [ 3 ] ; static const real_T b [ 3 ]
= { 0.0 , 0.0 , 0.0010741000000000001 } ; static const int16_T a_p [ 9 ] = {
1800 , - 50 , - 15 , - 50 , 1600 , 25 , - 15 , 25 , 1200 } ; static const
int8_T c [ 3 ] = { 0 , 0 , 1 } ; int32_T r2 ; int32_T r3 ; real_T maxval ;
real_T a21 ; int32_T rtemp ; real_T d [ 9 ] ; real_T tmp [ 9 ] ; real_T d_p [
9 ] ; real_T tmp_p [ 9 ] ; int32_T i ; if ( rtDW . ijwm01234w != 0 ) { rtX .
na0kwbhiuw [ 0 ] = rtB . adwnxz5ipz [ 0 ] ; rtX . na0kwbhiuw [ 1 ] = rtB .
adwnxz5ipz [ 1 ] ; rtX . na0kwbhiuw [ 2 ] = rtB . adwnxz5ipz [ 2 ] ; rtX .
na0kwbhiuw [ 3 ] = rtB . adwnxz5ipz [ 3 ] ; } if ( ssIsMajorTimeStep ( rtS )
) { if ( rtX . na0kwbhiuw [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX .
na0kwbhiuw [ 0 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
na0kwbhiuw [ 0 ] <= rtP . Integrator2_LowerSat ) { rtX . na0kwbhiuw [ 0 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . na0kwbhiuw [ 1 ] >= rtP .
Integrator2_UpperSat ) { rtX . na0kwbhiuw [ 1 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . na0kwbhiuw [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX
. na0kwbhiuw [ 1 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . na0kwbhiuw [
2 ] >= rtP . Integrator2_UpperSat ) { rtX . na0kwbhiuw [ 2 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . na0kwbhiuw [ 2 ] <= rtP .
Integrator2_LowerSat ) { rtX . na0kwbhiuw [ 2 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . na0kwbhiuw [ 3 ] >= rtP . Integrator2_UpperSat ) { rtX .
na0kwbhiuw [ 3 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
na0kwbhiuw [ 3 ] <= rtP . Integrator2_LowerSat ) { rtX . na0kwbhiuw [ 3 ] =
rtP . Integrator2_LowerSat ; } } } rtB . fh4fxhb3dg [ 0 ] = rtX . na0kwbhiuw
[ 0 ] ; rtB . fh4fxhb3dg [ 1 ] = rtX . na0kwbhiuw [ 1 ] ; rtB . fh4fxhb3dg [
2 ] = rtX . na0kwbhiuw [ 2 ] ; rtB . fh4fxhb3dg [ 3 ] = rtX . na0kwbhiuw [ 3
] ; if ( rtDW . j3qdiyfhss != 0 ) { rtX . kmrvp24iak [ 0 ] = rtB . exnul2rleq
[ 0 ] ; rtX . kmrvp24iak [ 1 ] = rtB . exnul2rleq [ 1 ] ; rtX . kmrvp24iak [
2 ] = rtB . exnul2rleq [ 2 ] ; } rtB . dkrturai3y [ 0 ] = rtX . kmrvp24iak [
0 ] ; rtB . fdz33yjl0b [ 0 ] = rtP . pitchrollyawdesired_Value [ 0 ] - rtB .
dkrturai3y [ 0 ] ; rtB . dkrturai3y [ 1 ] = rtX . kmrvp24iak [ 1 ] ; rtB .
fdz33yjl0b [ 1 ] = rtP . pitchrollyawdesired_Value [ 1 ] - rtB . dkrturai3y [
1 ] ; rtB . dkrturai3y [ 2 ] = rtX . kmrvp24iak [ 2 ] ; rtB . fdz33yjl0b [ 2
] = rtP . pitchrollyawdesired_Value [ 2 ] - rtB . dkrturai3y [ 2 ] ; rtB .
adi0v32ets = rtP . Gain1_Gain * rtB . fdz33yjl0b [ 2 ] ; if ( ( rtDW .
mruqdd4fxa >= ssGetT ( rtS ) ) && ( rtDW . en5yifcisr >= ssGetT ( rtS ) ) ) {
rtB . hpt1qkyizv = 0.0 ; } else { maxval = rtDW . mruqdd4fxa ; lastU = & rtDW
. cg1m0nct3u ; if ( rtDW . mruqdd4fxa < rtDW . en5yifcisr ) { if ( rtDW .
en5yifcisr < ssGetT ( rtS ) ) { maxval = rtDW . en5yifcisr ; lastU = & rtDW .
eivvrtbw1v ; } } else { if ( rtDW . mruqdd4fxa >= ssGetT ( rtS ) ) { maxval =
rtDW . en5yifcisr ; lastU = & rtDW . eivvrtbw1v ; } } rtB . hpt1qkyizv = (
rtB . adi0v32ets - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; } rtB .
iqcex3uruq = rtX . awawpknawq ; rtB . cqshzwlwog = rtP . Gain_Gain * rtB .
fdz33yjl0b [ 2 ] ; rtB . npbvq0qily = ( rtB . hpt1qkyizv + rtB . iqcex3uruq )
+ rtB . cqshzwlwog ; rtB . c2phj3ex1u = rtP . Gain1_Gain_jkygvdcm0j * rtB .
fdz33yjl0b [ 1 ] ; if ( ( rtDW . jj2dwxwohg >= ssGetT ( rtS ) ) && ( rtDW .
eealhk5q4c >= ssGetT ( rtS ) ) ) { rtB . bxrlwyn0fd = 0.0 ; } else { maxval =
rtDW . jj2dwxwohg ; lastU = & rtDW . fxofrcfu4n ; if ( rtDW . jj2dwxwohg <
rtDW . eealhk5q4c ) { if ( rtDW . eealhk5q4c < ssGetT ( rtS ) ) { maxval =
rtDW . eealhk5q4c ; lastU = & rtDW . mrsbfmqp2d ; } } else { if ( rtDW .
jj2dwxwohg >= ssGetT ( rtS ) ) { maxval = rtDW . eealhk5q4c ; lastU = & rtDW
. mrsbfmqp2d ; } } rtB . bxrlwyn0fd = ( rtB . c2phj3ex1u - * lastU ) / (
ssGetT ( rtS ) - maxval ) ; } rtB . bdbf4kguln = rtX . eefvuab0yx ; rtB .
pw0fmdvka1 = rtP . Gain_Gain_j0nwylexu1 * rtB . fdz33yjl0b [ 1 ] ; rtB .
k3akangvw5 = ( rtB . bxrlwyn0fd + rtB . bdbf4kguln ) + rtB . pw0fmdvka1 ; rtB
. hn3ztypum0 = rtP . Gain1_Gain_jyeaph4bso * rtB . fdz33yjl0b [ 0 ] ; if ( (
rtDW . ak5rdpmsmz >= ssGetT ( rtS ) ) && ( rtDW . c3ktouvv30 >= ssGetT ( rtS
) ) ) { rtB . mgwbg2t02h = 0.0 ; } else { maxval = rtDW . ak5rdpmsmz ; lastU
= & rtDW . foqrciusel ; if ( rtDW . ak5rdpmsmz < rtDW . c3ktouvv30 ) { if (
rtDW . c3ktouvv30 < ssGetT ( rtS ) ) { maxval = rtDW . c3ktouvv30 ; lastU = &
rtDW . goyla3ngee ; } } else { if ( rtDW . ak5rdpmsmz >= ssGetT ( rtS ) ) {
maxval = rtDW . c3ktouvv30 ; lastU = & rtDW . goyla3ngee ; } } rtB .
mgwbg2t02h = ( rtB . hn3ztypum0 - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; }
rtB . itn1bkplfv = rtX . blaoeqyfri ; rtB . hapxy3vao0 = rtP .
Gain_Gain_hvers1lhk2 * rtB . fdz33yjl0b [ 0 ] ; rtB . oy1dkzfhxx = ( rtB .
mgwbg2t02h + rtB . itn1bkplfv ) + rtB . hapxy3vao0 ; for ( i = 0 ; i < 4 ; i
++ ) { rtB . pdyphp2e0m [ i ] = ( ( a [ i + 4 ] * rtB . k3akangvw5 + a [ i ]
* rtB . npbvq0qily ) + a [ i + 8 ] * rtB . oy1dkzfhxx ) / rtP .
eachwheelInertia_Value ; } if ( rtDW . dw32h4dvva != 0 ) { rtX . mz0jfaypkk [
0 ] = rtB . k1felwmdht [ 0 ] ; rtX . mz0jfaypkk [ 1 ] = rtB . k1felwmdht [ 1
] ; rtX . mz0jfaypkk [ 2 ] = rtB . k1felwmdht [ 2 ] ; } rtB . dkfmpnas3p [ 0
] = ( rtB . pdyphp2e0m [ 0 ] - 0.57735026918962584 * rtB . pdyphp2e0m [ 3 ] )
* rtP . eachwheelInertia_Value ; rtB . dkfmpnas3p [ 1 ] = ( rtB . pdyphp2e0m
[ 1 ] - 0.57735026918962584 * rtB . pdyphp2e0m [ 3 ] ) * rtP .
eachwheelInertia_Value ; rtB . dkfmpnas3p [ 2 ] = ( rtB . pdyphp2e0m [ 2 ] -
0.57735026918962584 * rtB . pdyphp2e0m [ 3 ] ) * rtP . eachwheelInertia_Value
; d [ 1 ] = 0.0 ; d [ 4 ] = muDoubleScalarCos ( rtB . dkrturai3y [ 2 ] ) ; d
[ 7 ] = muDoubleScalarSin ( rtB . dkrturai3y [ 2 ] ) ; d [ 2 ] = 0.0 ; d [ 5
] = - muDoubleScalarSin ( rtB . dkrturai3y [ 2 ] ) ; d [ 8 ] =
muDoubleScalarCos ( rtB . dkrturai3y [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos
( rtB . dkrturai3y [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = -
muDoubleScalarSin ( rtB . dkrturai3y [ 1 ] ) ; rtB . brzszdbn0r [ 0 ] = rtX .
mz0jfaypkk [ 0 ] ; d [ 0 ] = 1.0 ; tmp [ 1 ] = 0.0 ; rtB . brzszdbn0r [ 1 ] =
rtX . mz0jfaypkk [ 1 ] ; d [ 3 ] = 0.0 ; tmp [ 4 ] = 1.0 ; rtB . brzszdbn0r [
2 ] = rtX . mz0jfaypkk [ 2 ] ; d [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0 ; tmp [ 2 ] =
muDoubleScalarSin ( rtB . dkrturai3y [ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp [ 8 ] =
muDoubleScalarCos ( rtB . dkrturai3y [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtB . dkrturai3y [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . dkrturai3y [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . dkrturai3y [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . dkrturai3y [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_p [ i + 3 * r2 ] =
0.0 ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d [ i ] ; d_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * d [ i + 3 ] ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
d [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { maxval = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { Cbo [ i + 3 * r2 ] = 0.0
; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * d_p [ i ] ; Cbo [ i + 3 * r2 ] +=
tmp_p [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; maxval += Cbo [ 3 * r2 + i ] * b [ r2 ] ; } temp1 [ i ]
= rtB . brzszdbn0r [ i ] - maxval ; y [ i ] = Cbo [ i + 6 ] *
0.0010741000000000001 + ( Cbo [ i + 3 ] * 0.0 + Cbo [ i ] * 0.0 ) ; } for ( i
= 0 ; i < 3 ; i ++ ) { rtB . fzngedcyzz [ i ] = rtB . dkrturai3y [ i ] * rtP
. radToDeg_Value ; b_y [ i ] = ( real_T ) a_p [ i + 6 ] * temp1 [ 2 ] + ( (
real_T ) a_p [ i + 3 ] * temp1 [ 1 ] + ( real_T ) a_p [ i ] * temp1 [ 0 ] ) ;
} maxval = ( ( rtP . disturbTorques_Value [ 0 ] + rtP . magTorq_Value [ 0 ] )
- rtB . dkfmpnas3p [ 0 ] ) - ( temp1 [ 1 ] * b_y [ 2 ] - temp1 [ 2 ] * b_y [
1 ] ) ; a21 = ( ( rtP . disturbTorques_Value [ 2 ] + rtP . magTorq_Value [ 2
] ) - rtB . dkfmpnas3p [ 2 ] ) - ( temp1 [ 0 ] * b_y [ 1 ] - temp1 [ 1 ] *
b_y [ 0 ] ) ; temp1 [ 1 ] = ( ( ( rtP . disturbTorques_Value [ 1 ] + rtP .
magTorq_Value [ 1 ] ) - rtB . dkfmpnas3p [ 1 ] ) - ( temp1 [ 2 ] * b_y [ 0 ]
- temp1 [ 0 ] * b_y [ 2 ] ) ) - maxval * - 0.027777777777777776 ; temp1 [ 2 ]
= ( a21 - maxval * - 0.0083333333333333332 ) - temp1 [ 1 ] *
0.015377932232841007 ; temp1 [ 2 ] /= 1199.4969591659426 ; temp1 [ 0 ] =
maxval - temp1 [ 2 ] * - 15.0 ; temp1 [ 1 ] -= temp1 [ 2 ] *
24.583333333333332 ; temp1 [ 1 ] /= 1598.6111111111111 ; temp1 [ 0 ] -= temp1
[ 1 ] * - 50.0 ; temp1 [ 0 ] /= 1800.0 ; rtB . nlljjmakob [ 0 ] = temp1 [ 0 ]
- ( rtB . brzszdbn0r [ 1 ] * y [ 2 ] - rtB . brzszdbn0r [ 2 ] * y [ 1 ] ) ;
rtB . nlljjmakob [ 1 ] = temp1 [ 1 ] - ( rtB . brzszdbn0r [ 2 ] * y [ 0 ] -
rtB . brzszdbn0r [ 0 ] * y [ 2 ] ) ; rtB . nlljjmakob [ 2 ] = temp1 [ 2 ] - (
rtB . brzszdbn0r [ 0 ] * y [ 1 ] - rtB . brzszdbn0r [ 1 ] * y [ 0 ] ) ; rtB .
dpmunjkbhb = rtP . Gain2_Gain * rtB . fdz33yjl0b [ 0 ] ; rtB . mdbqqd0snu =
rtP . Gain2_Gain_nggjdhdyc1 * rtB . fdz33yjl0b [ 1 ] ; rtB . ftdouwbfxw = rtP
. Gain2_Gain_cddumad5uc * rtB . fdz33yjl0b [ 2 ] ; Cbo [ 0 ] = -
muDoubleScalarSin ( rtB . dkrturai3y [ 1 ] ) ; Cbo [ 3 ] = 0.0 ; Cbo [ 6 ] =
1.0 ; Cbo [ 1 ] = muDoubleScalarCos ( rtB . dkrturai3y [ 1 ] ) *
muDoubleScalarSin ( rtB . dkrturai3y [ 2 ] ) ; Cbo [ 4 ] = muDoubleScalarCos
( rtB . dkrturai3y [ 2 ] ) ; Cbo [ 7 ] = 0.0 ; Cbo [ 2 ] = muDoubleScalarCos
( rtB . dkrturai3y [ 1 ] ) * muDoubleScalarCos ( rtB . dkrturai3y [ 2 ] ) ;
Cbo [ 5 ] = - muDoubleScalarSin ( rtB . dkrturai3y [ 2 ] ) ; Cbo [ 8 ] = 0.0
; i = 0 ; r2 = 1 ; r3 = 2 ; maxval = muDoubleScalarAbs ( Cbo [ 0 ] ) ; a21 =
muDoubleScalarAbs ( Cbo [ 1 ] ) ; if ( a21 > maxval ) { maxval = a21 ; i = 1
; r2 = 0 ; } if ( muDoubleScalarAbs ( Cbo [ 2 ] ) > maxval ) { i = 2 ; r2 = 1
; r3 = 0 ; } Cbo [ r2 ] /= Cbo [ i ] ; Cbo [ r3 ] /= Cbo [ i ] ; Cbo [ 3 + r2
] -= Cbo [ 3 + i ] * Cbo [ r2 ] ; Cbo [ 3 + r3 ] -= Cbo [ 3 + i ] * Cbo [ r3
] ; Cbo [ 6 + r2 ] -= Cbo [ 6 + i ] * Cbo [ r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 6
+ i ] * Cbo [ r3 ] ; if ( muDoubleScalarAbs ( Cbo [ 3 + r3 ] ) >
muDoubleScalarAbs ( Cbo [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 = rtemp ;
} Cbo [ 3 + r3 ] /= Cbo [ 3 + r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 3 + r3 ] * Cbo [
6 + r2 ] ; rtB . jqsj3svek0 [ 0 ] = rtB . brzszdbn0r [ i ] ; rtB . jqsj3svek0
[ 1 ] = rtB . brzszdbn0r [ r2 ] - rtB . jqsj3svek0 [ 0 ] * Cbo [ r2 ] ; rtB .
jqsj3svek0 [ 2 ] = ( rtB . brzszdbn0r [ r3 ] - rtB . jqsj3svek0 [ 0 ] * Cbo [
r3 ] ) - Cbo [ 3 + r3 ] * rtB . jqsj3svek0 [ 1 ] ; rtB . jqsj3svek0 [ 2 ] /=
Cbo [ 6 + r3 ] ; rtB . jqsj3svek0 [ 0 ] -= Cbo [ 6 + i ] * rtB . jqsj3svek0 [
2 ] ; rtB . jqsj3svek0 [ 1 ] -= Cbo [ 6 + r2 ] * rtB . jqsj3svek0 [ 2 ] ; rtB
. jqsj3svek0 [ 1 ] /= Cbo [ 3 + r2 ] ; rtB . jqsj3svek0 [ 0 ] -= Cbo [ 3 + i
] * rtB . jqsj3svek0 [ 1 ] ; rtB . jqsj3svek0 [ 0 ] /= Cbo [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T tid ) { rtB .
adwnxz5ipz [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . adwnxz5ipz [ 1 ] = rtP .
speeds_Value [ 1 ] ; rtB . adwnxz5ipz [ 2 ] = rtP . speeds_Value [ 2 ] ; rtB
. adwnxz5ipz [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . exnul2rleq [ 0 ] = rtP
. pitchrollyawInitial_Value [ 0 ] ; rtB . k1felwmdht [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . exnul2rleq [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . k1felwmdht [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . exnul2rleq [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . k1felwmdht [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T * lastU ; rtDW . ijwm01234w = 0 ; if ( rtX . na0kwbhiuw
[ 0 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . dqo0xdescv [ 0 ] ) {
case 3 : if ( rtB . pdyphp2e0m [ 0 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . dqo0xdescv [ 0 ] = 1 ; } break ; case 1 : if ( rtB . pdyphp2e0m [ 0
] >= 0.0 ) { rtDW . dqo0xdescv [ 0 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 0 ]
< 0.0 ) { rtDW . dqo0xdescv [ 0 ] = 1 ; } else { rtDW . dqo0xdescv [ 0 ] = 3
; } break ; } } else if ( rtX . na0kwbhiuw [ 0 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . dqo0xdescv [ 0 ] ) { case 4 : if (
rtB . pdyphp2e0m [ 0 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
dqo0xdescv [ 0 ] = 2 ; } break ; case 2 : if ( rtB . pdyphp2e0m [ 0 ] <= 0.0
) { rtDW . dqo0xdescv [ 0 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 0 ] > 0.0 )
{ rtDW . dqo0xdescv [ 0 ] = 2 ; } else { rtDW . dqo0xdescv [ 0 ] = 4 ; }
break ; } } else { rtDW . dqo0xdescv [ 0 ] = 0 ; } if ( rtX . na0kwbhiuw [ 1
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . dqo0xdescv [ 1 ] ) { case
3 : if ( rtB . pdyphp2e0m [ 1 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . dqo0xdescv [ 1 ] = 1 ; } break ; case 1 : if ( rtB . pdyphp2e0m [ 1 ]
>= 0.0 ) { rtDW . dqo0xdescv [ 1 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 1 ]
< 0.0 ) { rtDW . dqo0xdescv [ 1 ] = 1 ; } else { rtDW . dqo0xdescv [ 1 ] = 3
; } break ; } } else if ( rtX . na0kwbhiuw [ 1 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . dqo0xdescv [ 1 ] ) { case 4 : if (
rtB . pdyphp2e0m [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
dqo0xdescv [ 1 ] = 2 ; } break ; case 2 : if ( rtB . pdyphp2e0m [ 1 ] <= 0.0
) { rtDW . dqo0xdescv [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 1 ] > 0.0 )
{ rtDW . dqo0xdescv [ 1 ] = 2 ; } else { rtDW . dqo0xdescv [ 1 ] = 4 ; }
break ; } } else { rtDW . dqo0xdescv [ 1 ] = 0 ; } if ( rtX . na0kwbhiuw [ 2
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . dqo0xdescv [ 2 ] ) { case
3 : if ( rtB . pdyphp2e0m [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . dqo0xdescv [ 2 ] = 1 ; } break ; case 1 : if ( rtB . pdyphp2e0m [ 2 ]
>= 0.0 ) { rtDW . dqo0xdescv [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 2 ]
< 0.0 ) { rtDW . dqo0xdescv [ 2 ] = 1 ; } else { rtDW . dqo0xdescv [ 2 ] = 3
; } break ; } } else if ( rtX . na0kwbhiuw [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . dqo0xdescv [ 2 ] ) { case 4 : if (
rtB . pdyphp2e0m [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
dqo0xdescv [ 2 ] = 2 ; } break ; case 2 : if ( rtB . pdyphp2e0m [ 2 ] <= 0.0
) { rtDW . dqo0xdescv [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 2 ] > 0.0 )
{ rtDW . dqo0xdescv [ 2 ] = 2 ; } else { rtDW . dqo0xdescv [ 2 ] = 4 ; }
break ; } } else { rtDW . dqo0xdescv [ 2 ] = 0 ; } if ( rtX . na0kwbhiuw [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . dqo0xdescv [ 3 ] ) { case
3 : if ( rtB . pdyphp2e0m [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . dqo0xdescv [ 3 ] = 1 ; } break ; case 1 : if ( rtB . pdyphp2e0m [ 3 ]
>= 0.0 ) { rtDW . dqo0xdescv [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 3 ]
< 0.0 ) { rtDW . dqo0xdescv [ 3 ] = 1 ; } else { rtDW . dqo0xdescv [ 3 ] = 3
; } break ; } } else if ( rtX . na0kwbhiuw [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . dqo0xdescv [ 3 ] ) { case 4 : if (
rtB . pdyphp2e0m [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
dqo0xdescv [ 3 ] = 2 ; } break ; case 2 : if ( rtB . pdyphp2e0m [ 3 ] <= 0.0
) { rtDW . dqo0xdescv [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . pdyphp2e0m [ 3 ] > 0.0 )
{ rtDW . dqo0xdescv [ 3 ] = 2 ; } else { rtDW . dqo0xdescv [ 3 ] = 4 ; }
break ; } } else { rtDW . dqo0xdescv [ 3 ] = 0 ; } rtDW . j3qdiyfhss = 0 ; if
( rtDW . mruqdd4fxa == ( rtInf ) ) { rtDW . mruqdd4fxa = ssGetT ( rtS ) ;
lastU = & rtDW . cg1m0nct3u ; } else if ( rtDW . en5yifcisr == ( rtInf ) ) {
rtDW . en5yifcisr = ssGetT ( rtS ) ; lastU = & rtDW . eivvrtbw1v ; } else if
( rtDW . mruqdd4fxa < rtDW . en5yifcisr ) { rtDW . mruqdd4fxa = ssGetT ( rtS
) ; lastU = & rtDW . cg1m0nct3u ; } else { rtDW . en5yifcisr = ssGetT ( rtS )
; lastU = & rtDW . eivvrtbw1v ; } * lastU = rtB . adi0v32ets ; if ( rtDW .
jj2dwxwohg == ( rtInf ) ) { rtDW . jj2dwxwohg = ssGetT ( rtS ) ; lastU = &
rtDW . fxofrcfu4n ; } else if ( rtDW . eealhk5q4c == ( rtInf ) ) { rtDW .
eealhk5q4c = ssGetT ( rtS ) ; lastU = & rtDW . mrsbfmqp2d ; } else if ( rtDW
. jj2dwxwohg < rtDW . eealhk5q4c ) { rtDW . jj2dwxwohg = ssGetT ( rtS ) ;
lastU = & rtDW . fxofrcfu4n ; } else { rtDW . eealhk5q4c = ssGetT ( rtS ) ;
lastU = & rtDW . mrsbfmqp2d ; } * lastU = rtB . c2phj3ex1u ; if ( rtDW .
ak5rdpmsmz == ( rtInf ) ) { rtDW . ak5rdpmsmz = ssGetT ( rtS ) ; lastU = &
rtDW . foqrciusel ; } else if ( rtDW . c3ktouvv30 == ( rtInf ) ) { rtDW .
c3ktouvv30 = ssGetT ( rtS ) ; lastU = & rtDW . goyla3ngee ; } else if ( rtDW
. ak5rdpmsmz < rtDW . c3ktouvv30 ) { rtDW . ak5rdpmsmz = ssGetT ( rtS ) ;
lastU = & rtDW . foqrciusel ; } else { rtDW . c3ktouvv30 = ssGetT ( rtS ) ;
lastU = & rtDW . goyla3ngee ; } * lastU = rtB . hn3ztypum0 ; rtDW .
dw32h4dvva = 0 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot *
_rtXdot ; XDis * _rtXdis ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; if ( ( rtDW . dqo0xdescv
[ 0 ] != 3 ) && ( rtDW . dqo0xdescv [ 0 ] != 4 ) ) { _rtXdot -> na0kwbhiuw [
0 ] = rtB . pdyphp2e0m [ 0 ] ; _rtXdis -> na0kwbhiuw [ 0 ] = false ; } else {
_rtXdot -> na0kwbhiuw [ 0 ] = 0.0 ; if ( ( rtDW . dqo0xdescv [ 0 ] == 3 ) ||
( rtDW . dqo0xdescv [ 0 ] == 4 ) ) { _rtXdis -> na0kwbhiuw [ 0 ] = true ; } }
if ( ( rtDW . dqo0xdescv [ 1 ] != 3 ) && ( rtDW . dqo0xdescv [ 1 ] != 4 ) ) {
_rtXdot -> na0kwbhiuw [ 1 ] = rtB . pdyphp2e0m [ 1 ] ; _rtXdis -> na0kwbhiuw
[ 1 ] = false ; } else { _rtXdot -> na0kwbhiuw [ 1 ] = 0.0 ; if ( ( rtDW .
dqo0xdescv [ 1 ] == 3 ) || ( rtDW . dqo0xdescv [ 1 ] == 4 ) ) { _rtXdis ->
na0kwbhiuw [ 1 ] = true ; } } if ( ( rtDW . dqo0xdescv [ 2 ] != 3 ) && ( rtDW
. dqo0xdescv [ 2 ] != 4 ) ) { _rtXdot -> na0kwbhiuw [ 2 ] = rtB . pdyphp2e0m
[ 2 ] ; _rtXdis -> na0kwbhiuw [ 2 ] = false ; } else { _rtXdot -> na0kwbhiuw
[ 2 ] = 0.0 ; if ( ( rtDW . dqo0xdescv [ 2 ] == 3 ) || ( rtDW . dqo0xdescv [
2 ] == 4 ) ) { _rtXdis -> na0kwbhiuw [ 2 ] = true ; } } if ( ( rtDW .
dqo0xdescv [ 3 ] != 3 ) && ( rtDW . dqo0xdescv [ 3 ] != 4 ) ) { _rtXdot ->
na0kwbhiuw [ 3 ] = rtB . pdyphp2e0m [ 3 ] ; _rtXdis -> na0kwbhiuw [ 3 ] =
false ; } else { _rtXdot -> na0kwbhiuw [ 3 ] = 0.0 ; if ( ( rtDW . dqo0xdescv
[ 3 ] == 3 ) || ( rtDW . dqo0xdescv [ 3 ] == 4 ) ) { _rtXdis -> na0kwbhiuw [
3 ] = true ; } } _rtXdot -> awawpknawq = rtB . ftdouwbfxw ; _rtXdot ->
eefvuab0yx = rtB . mdbqqd0snu ; _rtXdot -> blaoeqyfri = rtB . dpmunjkbhb ;
_rtXdot -> kmrvp24iak [ 0 ] = rtB . jqsj3svek0 [ 0 ] ; _rtXdot -> mz0jfaypkk
[ 0 ] = rtB . nlljjmakob [ 0 ] ; _rtXdot -> kmrvp24iak [ 1 ] = rtB .
jqsj3svek0 [ 1 ] ; _rtXdot -> mz0jfaypkk [ 1 ] = rtB . nlljjmakob [ 1 ] ;
_rtXdot -> kmrvp24iak [ 2 ] = rtB . jqsj3svek0 [ 2 ] ; _rtXdot -> mz0jfaypkk
[ 2 ] = rtB . nlljjmakob [ 2 ] ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; if ( ( rtDW . dqo0xdescv [ 0 ] == 1 )
&& ( rtX . na0kwbhiuw [ 0 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV ->
b5zblesmzs [ 0 ] = 0.0 ; } else { _rtZCSV -> b5zblesmzs [ 0 ] = rtX .
na0kwbhiuw [ 0 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . dqo0xdescv [
0 ] == 2 ) && ( rtX . na0kwbhiuw [ 0 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> axdzhvpb2w [ 0 ] = 0.0 ; } else { _rtZCSV -> axdzhvpb2w [ 0 ] =
rtX . na0kwbhiuw [ 0 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
dqo0xdescv [ 0 ] == 3 ) || ( rtDW . dqo0xdescv [ 0 ] == 4 ) ) { _rtZCSV ->
nuks2zj5bu [ 0 ] = rtB . pdyphp2e0m [ 0 ] ; } else { _rtZCSV -> nuks2zj5bu [
0 ] = 0.0 ; } if ( ( rtDW . dqo0xdescv [ 1 ] == 1 ) && ( rtX . na0kwbhiuw [ 1
] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV -> b5zblesmzs [ 1 ] = 0.0 ; }
else { _rtZCSV -> b5zblesmzs [ 1 ] = rtX . na0kwbhiuw [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . dqo0xdescv [ 1 ] == 2 ) && ( rtX .
na0kwbhiuw [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> axdzhvpb2w [
1 ] = 0.0 ; } else { _rtZCSV -> axdzhvpb2w [ 1 ] = rtX . na0kwbhiuw [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . dqo0xdescv [ 1 ] == 3 ) || (
rtDW . dqo0xdescv [ 1 ] == 4 ) ) { _rtZCSV -> nuks2zj5bu [ 1 ] = rtB .
pdyphp2e0m [ 1 ] ; } else { _rtZCSV -> nuks2zj5bu [ 1 ] = 0.0 ; } if ( ( rtDW
. dqo0xdescv [ 2 ] == 1 ) && ( rtX . na0kwbhiuw [ 2 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> b5zblesmzs [ 2 ] = 0.0 ; } else {
_rtZCSV -> b5zblesmzs [ 2 ] = rtX . na0kwbhiuw [ 2 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . dqo0xdescv [ 2 ] == 2 ) && ( rtX .
na0kwbhiuw [ 2 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> axdzhvpb2w [
2 ] = 0.0 ; } else { _rtZCSV -> axdzhvpb2w [ 2 ] = rtX . na0kwbhiuw [ 2 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . dqo0xdescv [ 2 ] == 3 ) || (
rtDW . dqo0xdescv [ 2 ] == 4 ) ) { _rtZCSV -> nuks2zj5bu [ 2 ] = rtB .
pdyphp2e0m [ 2 ] ; } else { _rtZCSV -> nuks2zj5bu [ 2 ] = 0.0 ; } if ( ( rtDW
. dqo0xdescv [ 3 ] == 1 ) && ( rtX . na0kwbhiuw [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> b5zblesmzs [ 3 ] = 0.0 ; } else {
_rtZCSV -> b5zblesmzs [ 3 ] = rtX . na0kwbhiuw [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . dqo0xdescv [ 3 ] == 2 ) && ( rtX .
na0kwbhiuw [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> axdzhvpb2w [
3 ] = 0.0 ; } else { _rtZCSV -> axdzhvpb2w [ 3 ] = rtX . na0kwbhiuw [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . dqo0xdescv [ 3 ] == 3 ) || (
rtDW . dqo0xdescv [ 3 ] == 4 ) ) { _rtZCSV -> nuks2zj5bu [ 3 ] = rtB .
pdyphp2e0m [ 3 ] ; } else { _rtZCSV -> nuks2zj5bu [ 3 ] = 0.0 ; } } void
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
rtS ) { ssSetChecksumVal ( rtS , 0 , 3755142936U ) ; ssSetChecksumVal ( rtS ,
1 , 3743815007U ) ; ssSetChecksumVal ( rtS , 2 , 1291012381U ) ;
ssSetChecksumVal ( rtS , 3 , 1741832553U ) ; } SimStruct *
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
mainModel_matlab2013b__InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_matlab2013b_" ) ; ssSetPath ( rtS , "mainModel_matlab2013b_" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 10000.0 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 4 , 3 , 1 , 1 , 1 , 3 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 4 , 3 , 1 , 1 , 1 , 3 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "mainModel_matlab2013b_/Integrator2" ,
"mainModel_matlab2013b_/Integrator1" ,
"mainModel_matlab2013b_/Attitude Controller/PID_3/Integrator" ,
"mainModel_matlab2013b_/Attitude Controller/PID_2/Integrator" ,
"mainModel_matlab2013b_/Attitude Controller/PID_1/Integrator" ,
"mainModel_matlab2013b_/Integrator" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . na0kwbhiuw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . kmrvp24iak [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . awawpknawq ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . eefvuab0yx ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . blaoeqyfri ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . mz0jfaypkk [ 0 ] ; }
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
ssSetChecksumVal ( rtS , 0 , 3755142936U ) ; ssSetChecksumVal ( rtS , 1 ,
3743815007U ) ; ssSetChecksumVal ( rtS , 2 , 1291012381U ) ; ssSetChecksumVal
( rtS , 3 , 1741832553U ) ; { static const sysRanDType rtAlwaysEnabled =
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
