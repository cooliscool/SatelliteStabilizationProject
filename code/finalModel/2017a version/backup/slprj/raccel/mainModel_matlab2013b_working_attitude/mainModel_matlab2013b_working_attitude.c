#include "__cf_mainModel_matlab2013b_working_attitude.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013b_working_attitude_capi.h"
#include <math.h>
#include "mainModel_matlab2013b_working_attitude.h"
#include "mainModel_matlab2013b_working_attitude_private.h"
#include "mainModel_matlab2013b_working_attitude_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; } const int_T gblNumToFiles = 0 ; const int_T
gblNumFrFiles = 0 ; const int_T gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
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
 "slprj//raccel//mainModel_matlab2013b_working_attitude//mainModel_matlab2013b_working_attitude_Jpattern.mat"
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
rtX . gaocubqvzp [ 0 ] = 0.0 ; rtX . gaocubqvzp [ 1 ] = 0.0 ; rtX .
gaocubqvzp [ 2 ] = 0.0 ; rtX . n2z4nfjamx [ 0 ] = 0.0 ; rtX . n2z4nfjamx [ 1
] = 0.0 ; rtX . n2z4nfjamx [ 2 ] = 0.0 ; } rtDW . dlz4fzirji = 1 ; rtDW .
i5ihhyg3t3 = ( rtInf ) ; rtDW . oifw0jfvcb = ( rtInf ) ; rtX . izvl5sslbs =
rtP . Integrator_IC ; rtDW . ndzhnxmlbe = ( rtInf ) ; rtDW . eakx22dv4l = (
rtInf ) ; rtX . iajjy5lruz = rtP . Integrator_IC_hsiqnplk4j ; rtDW .
fo5jnezz0v = ( rtInf ) ; rtDW . ktbxjai4kr = ( rtInf ) ; rtX . gklzlaz1qk =
rtP . Integrator_IC_mi1nfze151 ; rtDW . k2msqlawib = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . gswyw4gv0d [ 0 ] = 104.71975511965977 ;
rtX . gswyw4gv0d [ 1 ] = 104.71975511965977 ; rtX . gswyw4gv0d [ 2 ] =
104.71975511965977 ; rtX . gswyw4gv0d [ 3 ] = 181.37461586725072 ; } rtDW .
ettvxhsewb = 1 ; rtX . awxsvjgvlk = rtP . Integrator3_IC ; } void MdlStart (
void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2
= ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const char *
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
} } rtB . j242gvklzp [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB .
ij0ukvecpm [ 0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . j242gvklzp [ 1 ] =
rtP . pitchrollyawInitial_Value [ 1 ] ; rtB . ij0ukvecpm [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . j242gvklzp [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ij0ukvecpm [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . owwhqvbcwo [ 0 ] = rtP . speeds1_Value [ 0 ]
; rtB . owwhqvbcwo [ 1 ] = rtP . speeds1_Value [ 1 ] ; rtB . owwhqvbcwo [ 2 ]
= rtP . speeds1_Value [ 2 ] ; rtB . owwhqvbcwo [ 3 ] = rtP . speeds1_Value [
3 ] ; MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ;
void * pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { real_T * lastU ; static const real_T a [
12 ] = { 0.83333333333333348 , - 0.16666666666666671 , - 0.16666666666666671
, - 0.28867513459481292 , - 0.16666666666666671 , 0.83333333333333348 , -
0.16666666666666671 , - 0.28867513459481292 , - 0.16666666666666671 , -
0.16666666666666671 , 0.83333333333333348 , - 0.28867513459481292 } ; real_T
Cbo [ 9 ] ; real_T temp1 [ 3 ] ; real_T y [ 3 ] ; real_T b_y [ 3 ] ; static
const real_T b [ 3 ] = { 0.0 , 0.0 , 0.0010741000000000001 } ; static const
int16_T a_p [ 9 ] = { 1800 , - 50 , - 15 , - 50 , 1600 , 25 , - 15 , 25 ,
1200 } ; static const int8_T c [ 3 ] = { 0 , 0 , 1 } ; int32_T r2 ; int32_T
r3 ; real_T maxval ; real_T a21 ; int32_T rtemp ; int32_T i ; real_T d [ 9 ]
; real_T tmp [ 9 ] ; real_T d_p [ 9 ] ; real_T tmp_p [ 9 ] ; if ( rtDW .
dlz4fzirji != 0 ) { rtX . gaocubqvzp [ 0 ] = rtB . j242gvklzp [ 0 ] ; rtX .
gaocubqvzp [ 1 ] = rtB . j242gvklzp [ 1 ] ; rtX . gaocubqvzp [ 2 ] = rtB .
j242gvklzp [ 2 ] ; } rtB . opuriyedv5 [ 0 ] = rtX . gaocubqvzp [ 0 ] ; rtB .
orau2tzp4m [ 0 ] = rtP . pitchrollyawdesired_Value [ 0 ] - rtB . opuriyedv5 [
0 ] ; rtB . opuriyedv5 [ 1 ] = rtX . gaocubqvzp [ 1 ] ; rtB . orau2tzp4m [ 1
] = rtP . pitchrollyawdesired_Value [ 1 ] - rtB . opuriyedv5 [ 1 ] ; rtB .
opuriyedv5 [ 2 ] = rtX . gaocubqvzp [ 2 ] ; rtB . orau2tzp4m [ 2 ] = rtP .
pitchrollyawdesired_Value [ 2 ] - rtB . opuriyedv5 [ 2 ] ; rtB . ocl3m0dxtp =
rtP . Gain1_Gain * rtB . orau2tzp4m [ 2 ] ; if ( ( rtDW . i5ihhyg3t3 >=
ssGetT ( rtS ) ) && ( rtDW . oifw0jfvcb >= ssGetT ( rtS ) ) ) { rtB .
mgfx13stav = 0.0 ; } else { maxval = rtDW . i5ihhyg3t3 ; lastU = & rtDW .
fi3xs4xgh4 ; if ( rtDW . i5ihhyg3t3 < rtDW . oifw0jfvcb ) { if ( rtDW .
oifw0jfvcb < ssGetT ( rtS ) ) { maxval = rtDW . oifw0jfvcb ; lastU = & rtDW .
cnrljrwq5q ; } } else { if ( rtDW . i5ihhyg3t3 >= ssGetT ( rtS ) ) { maxval =
rtDW . oifw0jfvcb ; lastU = & rtDW . cnrljrwq5q ; } } rtB . mgfx13stav = (
rtB . ocl3m0dxtp - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; } rtB .
emo54xl1nm = rtX . izvl5sslbs ; rtB . kjlahy3veo = rtP . Gain_Gain * rtB .
orau2tzp4m [ 2 ] ; rtB . hgkvorfmp1 = ( rtB . mgfx13stav + rtB . emo54xl1nm )
+ rtB . kjlahy3veo ; rtB . h5mdsiajxq = rtP . Gain1_Gain_jkygvdcm0j * rtB .
orau2tzp4m [ 1 ] ; if ( ( rtDW . ndzhnxmlbe >= ssGetT ( rtS ) ) && ( rtDW .
eakx22dv4l >= ssGetT ( rtS ) ) ) { rtB . gy3r40ngvs = 0.0 ; } else { maxval =
rtDW . ndzhnxmlbe ; lastU = & rtDW . pgylabzfah ; if ( rtDW . ndzhnxmlbe <
rtDW . eakx22dv4l ) { if ( rtDW . eakx22dv4l < ssGetT ( rtS ) ) { maxval =
rtDW . eakx22dv4l ; lastU = & rtDW . flegpay2y0 ; } } else { if ( rtDW .
ndzhnxmlbe >= ssGetT ( rtS ) ) { maxval = rtDW . eakx22dv4l ; lastU = & rtDW
. flegpay2y0 ; } } rtB . gy3r40ngvs = ( rtB . h5mdsiajxq - * lastU ) / (
ssGetT ( rtS ) - maxval ) ; } rtB . mdrm0m2uev = rtX . iajjy5lruz ; rtB .
au3ih54l51 = rtP . Gain_Gain_j0nwylexu1 * rtB . orau2tzp4m [ 1 ] ; rtB .
ddvv2mb4q1 = ( rtB . gy3r40ngvs + rtB . mdrm0m2uev ) + rtB . au3ih54l51 ; rtB
. indmgstqaw = rtP . Gain1_Gain_jyeaph4bso * rtB . orau2tzp4m [ 0 ] ; if ( (
rtDW . fo5jnezz0v >= ssGetT ( rtS ) ) && ( rtDW . ktbxjai4kr >= ssGetT ( rtS
) ) ) { rtB . jy0q2ywt2j = 0.0 ; } else { maxval = rtDW . fo5jnezz0v ; lastU
= & rtDW . m2qm2lzxid ; if ( rtDW . fo5jnezz0v < rtDW . ktbxjai4kr ) { if (
rtDW . ktbxjai4kr < ssGetT ( rtS ) ) { maxval = rtDW . ktbxjai4kr ; lastU = &
rtDW . lsav5m24co ; } } else { if ( rtDW . fo5jnezz0v >= ssGetT ( rtS ) ) {
maxval = rtDW . ktbxjai4kr ; lastU = & rtDW . lsav5m24co ; } } rtB .
jy0q2ywt2j = ( rtB . indmgstqaw - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; }
rtB . klldvinnn2 = rtX . gklzlaz1qk ; rtB . ae34v1uhhb = rtP .
Gain_Gain_hvers1lhk2 * rtB . orau2tzp4m [ 0 ] ; rtB . bs1e1pomfr = ( rtB .
jy0q2ywt2j + rtB . klldvinnn2 ) + rtB . ae34v1uhhb ; for ( i = 0 ; i < 4 ; i
++ ) { rtB . ntaykcqfbm [ i ] = ( ( a [ i + 4 ] * rtB . ddvv2mb4q1 + a [ i ]
* rtB . hgkvorfmp1 ) + a [ i + 8 ] * rtB . bs1e1pomfr ) / rtP .
eachwheelInertia_Value ; } rtB . iquwqtloz2 [ 0 ] = ( rtB . ntaykcqfbm [ 0 ]
- 0.57735026918962584 * rtB . ntaykcqfbm [ 3 ] ) * rtP .
eachwheelInertia_Value ; rtB . iquwqtloz2 [ 1 ] = ( rtB . ntaykcqfbm [ 1 ] -
0.57735026918962584 * rtB . ntaykcqfbm [ 3 ] ) * rtP . eachwheelInertia_Value
; rtB . iquwqtloz2 [ 2 ] = ( rtB . ntaykcqfbm [ 2 ] - 0.57735026918962584 *
rtB . ntaykcqfbm [ 3 ] ) * rtP . eachwheelInertia_Value ; if ( rtDW .
k2msqlawib != 0 ) { rtX . n2z4nfjamx [ 0 ] = rtB . ij0ukvecpm [ 0 ] ; rtX .
n2z4nfjamx [ 1 ] = rtB . ij0ukvecpm [ 1 ] ; rtX . n2z4nfjamx [ 2 ] = rtB .
ij0ukvecpm [ 2 ] ; } d [ 1 ] = 0.0 ; d [ 4 ] = muDoubleScalarCos ( rtB .
opuriyedv5 [ 2 ] ) ; d [ 7 ] = muDoubleScalarSin ( rtB . opuriyedv5 [ 2 ] ) ;
d [ 2 ] = 0.0 ; d [ 5 ] = - muDoubleScalarSin ( rtB . opuriyedv5 [ 2 ] ) ; d
[ 8 ] = muDoubleScalarCos ( rtB . opuriyedv5 [ 2 ] ) ; tmp [ 0 ] =
muDoubleScalarCos ( rtB . opuriyedv5 [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] =
- muDoubleScalarSin ( rtB . opuriyedv5 [ 1 ] ) ; rtB . ciu3iftexw [ 0 ] = rtX
. n2z4nfjamx [ 0 ] ; d [ 0 ] = 1.0 ; tmp [ 1 ] = 0.0 ; rtB . ciu3iftexw [ 1 ]
= rtX . n2z4nfjamx [ 1 ] ; d [ 3 ] = 0.0 ; tmp [ 4 ] = 1.0 ; rtB . ciu3iftexw
[ 2 ] = rtX . n2z4nfjamx [ 2 ] ; d [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0 ; tmp [ 2 ]
= muDoubleScalarSin ( rtB . opuriyedv5 [ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp [ 8 ]
= muDoubleScalarCos ( rtB . opuriyedv5 [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtB . opuriyedv5 [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . opuriyedv5 [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . opuriyedv5 [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . opuriyedv5 [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_p [ i + 3 * r2 ] =
0.0 ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d [ i ] ; d_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * d [ i + 3 ] ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
d [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { maxval = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { Cbo [ i + 3 * r2 ] = 0.0
; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * d_p [ i ] ; Cbo [ i + 3 * r2 ] +=
tmp_p [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; maxval += Cbo [ 3 * r2 + i ] * b [ r2 ] ; } temp1 [ i ]
= rtB . ciu3iftexw [ i ] - maxval ; y [ i ] = Cbo [ i + 6 ] *
0.0010741000000000001 + ( Cbo [ i + 3 ] * 0.0 + Cbo [ i ] * 0.0 ) ; } for ( i
= 0 ; i < 3 ; i ++ ) { b_y [ i ] = ( real_T ) a_p [ i + 6 ] * temp1 [ 2 ] + (
( real_T ) a_p [ i + 3 ] * temp1 [ 1 ] + ( real_T ) a_p [ i ] * temp1 [ 0 ] )
; } maxval = ( ( rtP . disturbTorques_Value [ 0 ] + rtP . magTorq_Value [ 0 ]
) - rtB . iquwqtloz2 [ 0 ] ) - ( temp1 [ 1 ] * b_y [ 2 ] - temp1 [ 2 ] * b_y
[ 1 ] ) ; a21 = ( ( rtP . disturbTorques_Value [ 2 ] + rtP . magTorq_Value [
2 ] ) - rtB . iquwqtloz2 [ 2 ] ) - ( temp1 [ 0 ] * b_y [ 1 ] - temp1 [ 1 ] *
b_y [ 0 ] ) ; temp1 [ 1 ] = ( ( ( rtP . disturbTorques_Value [ 1 ] + rtP .
magTorq_Value [ 1 ] ) - rtB . iquwqtloz2 [ 1 ] ) - ( temp1 [ 2 ] * b_y [ 0 ]
- temp1 [ 0 ] * b_y [ 2 ] ) ) - maxval * - 0.027777777777777776 ; temp1 [ 2 ]
= ( a21 - maxval * - 0.0083333333333333332 ) - temp1 [ 1 ] *
0.015377932232841007 ; temp1 [ 2 ] /= 1199.4969591659426 ; temp1 [ 0 ] =
maxval - temp1 [ 2 ] * - 15.0 ; temp1 [ 1 ] -= temp1 [ 2 ] *
24.583333333333332 ; temp1 [ 1 ] /= 1598.6111111111111 ; temp1 [ 0 ] -= temp1
[ 1 ] * - 50.0 ; temp1 [ 0 ] /= 1800.0 ; rtB . k2osk23xhu [ 0 ] = temp1 [ 0 ]
- ( rtB . ciu3iftexw [ 1 ] * y [ 2 ] - rtB . ciu3iftexw [ 2 ] * y [ 1 ] ) ;
rtB . k2osk23xhu [ 1 ] = temp1 [ 1 ] - ( rtB . ciu3iftexw [ 2 ] * y [ 0 ] -
rtB . ciu3iftexw [ 0 ] * y [ 2 ] ) ; rtB . k2osk23xhu [ 2 ] = temp1 [ 2 ] - (
rtB . ciu3iftexw [ 0 ] * y [ 1 ] - rtB . ciu3iftexw [ 1 ] * y [ 0 ] ) ; if (
rtDW . ettvxhsewb != 0 ) { rtX . gswyw4gv0d [ 0 ] = rtB . owwhqvbcwo [ 0 ] ;
rtX . gswyw4gv0d [ 1 ] = rtB . owwhqvbcwo [ 1 ] ; rtX . gswyw4gv0d [ 2 ] =
rtB . owwhqvbcwo [ 2 ] ; rtX . gswyw4gv0d [ 3 ] = rtB . owwhqvbcwo [ 3 ] ;
ssSetBlkStateChange ( rtS ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX .
gswyw4gv0d [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX . gswyw4gv0d [ 0 ] =
rtP . Integrator2_UpperSat ; } else { if ( rtX . gswyw4gv0d [ 0 ] <= rtP .
Integrator2_LowerSat ) { rtX . gswyw4gv0d [ 0 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . gswyw4gv0d [ 1 ] >= rtP . Integrator2_UpperSat ) { rtX .
gswyw4gv0d [ 1 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
gswyw4gv0d [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX . gswyw4gv0d [ 1 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . gswyw4gv0d [ 2 ] >= rtP .
Integrator2_UpperSat ) { rtX . gswyw4gv0d [ 2 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . gswyw4gv0d [ 2 ] <= rtP . Integrator2_LowerSat ) { rtX
. gswyw4gv0d [ 2 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . gswyw4gv0d [
3 ] >= rtP . Integrator2_UpperSat ) { rtX . gswyw4gv0d [ 3 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . gswyw4gv0d [ 3 ] <= rtP .
Integrator2_LowerSat ) { rtX . gswyw4gv0d [ 3 ] = rtP . Integrator2_LowerSat
; } } } rtB . etpz3h2yod [ 0 ] = rtX . gswyw4gv0d [ 0 ] ; rtB . n1ohjrgzng [
0 ] = rtP . speeds2_Value * rtB . etpz3h2yod [ 0 ] ; rtB . etpz3h2yod [ 1 ] =
rtX . gswyw4gv0d [ 1 ] ; rtB . n1ohjrgzng [ 1 ] = rtP . speeds2_Value * rtB .
etpz3h2yod [ 1 ] ; rtB . etpz3h2yod [ 2 ] = rtX . gswyw4gv0d [ 2 ] ; rtB .
n1ohjrgzng [ 2 ] = rtP . speeds2_Value * rtB . etpz3h2yod [ 2 ] ; rtB .
etpz3h2yod [ 3 ] = rtX . gswyw4gv0d [ 3 ] ; rtB . n1ohjrgzng [ 3 ] = rtP .
speeds2_Value * rtB . etpz3h2yod [ 3 ] ; rtB . feo55pwd4v [ 0 ] = rtB .
opuriyedv5 [ 0 ] * rtP . radToDeg_Value ; rtB . feo55pwd4v [ 1 ] = rtB .
opuriyedv5 [ 1 ] * rtP . radToDeg_Value ; rtB . feo55pwd4v [ 2 ] = rtB .
opuriyedv5 [ 2 ] * rtP . radToDeg_Value ; rtB . m3lvyi4r0k = rtX . awxsvjgvlk
; rtB . jj1m4pu4xq = rtP . Gain2_Gain * rtB . orau2tzp4m [ 0 ] ; rtB .
pnr1rsr5m2 = rtP . Gain2_Gain_nggjdhdyc1 * rtB . orau2tzp4m [ 1 ] ; rtB .
jhmk22jwb1 = rtP . Gain2_Gain_cddumad5uc * rtB . orau2tzp4m [ 2 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB . ntaykcqfbm [ 0 ] > 0.0 ) { rtDW
. f4pawnt0hj [ 0 ] = 1 ; } else if ( rtB . ntaykcqfbm [ 0 ] < 0.0 ) { rtDW .
f4pawnt0hj [ 0 ] = - 1 ; } else { rtDW . f4pawnt0hj [ 0 ] = 0 ; } rtB .
cdqa1b2rvw [ 0 ] = rtDW . f4pawnt0hj [ 0 ] ; if ( rtB . ntaykcqfbm [ 1 ] >
0.0 ) { rtDW . f4pawnt0hj [ 1 ] = 1 ; } else if ( rtB . ntaykcqfbm [ 1 ] <
0.0 ) { rtDW . f4pawnt0hj [ 1 ] = - 1 ; } else { rtDW . f4pawnt0hj [ 1 ] = 0
; } rtB . cdqa1b2rvw [ 1 ] = rtDW . f4pawnt0hj [ 1 ] ; if ( rtB . ntaykcqfbm
[ 2 ] > 0.0 ) { rtDW . f4pawnt0hj [ 2 ] = 1 ; } else if ( rtB . ntaykcqfbm [
2 ] < 0.0 ) { rtDW . f4pawnt0hj [ 2 ] = - 1 ; } else { rtDW . f4pawnt0hj [ 2
] = 0 ; } rtB . cdqa1b2rvw [ 2 ] = rtDW . f4pawnt0hj [ 2 ] ; if ( rtB .
ntaykcqfbm [ 3 ] > 0.0 ) { rtDW . f4pawnt0hj [ 3 ] = 1 ; } else if ( rtB .
ntaykcqfbm [ 3 ] < 0.0 ) { rtDW . f4pawnt0hj [ 3 ] = - 1 ; } else { rtDW .
f4pawnt0hj [ 3 ] = 0 ; } rtB . cdqa1b2rvw [ 3 ] = rtDW . f4pawnt0hj [ 3 ] ; }
rtB . op2c2ayack = ( ( ( rtB . cdqa1b2rvw [ 0 ] * rtB . ntaykcqfbm [ 0 ] *
rtB . etpz3h2yod [ 0 ] + rtB . cdqa1b2rvw [ 1 ] * rtB . ntaykcqfbm [ 1 ] *
rtB . etpz3h2yod [ 1 ] ) + rtB . cdqa1b2rvw [ 2 ] * rtB . ntaykcqfbm [ 2 ] *
rtB . etpz3h2yod [ 2 ] ) + rtB . cdqa1b2rvw [ 3 ] * rtB . ntaykcqfbm [ 3 ] *
rtB . etpz3h2yod [ 3 ] ) * rtP . eachwheelInertia_Value ; Cbo [ 0 ] = -
muDoubleScalarSin ( rtB . opuriyedv5 [ 1 ] ) ; Cbo [ 3 ] = 0.0 ; Cbo [ 6 ] =
1.0 ; Cbo [ 1 ] = muDoubleScalarCos ( rtB . opuriyedv5 [ 1 ] ) *
muDoubleScalarSin ( rtB . opuriyedv5 [ 2 ] ) ; Cbo [ 4 ] = muDoubleScalarCos
( rtB . opuriyedv5 [ 2 ] ) ; Cbo [ 7 ] = 0.0 ; Cbo [ 2 ] = muDoubleScalarCos
( rtB . opuriyedv5 [ 1 ] ) * muDoubleScalarCos ( rtB . opuriyedv5 [ 2 ] ) ;
Cbo [ 5 ] = - muDoubleScalarSin ( rtB . opuriyedv5 [ 2 ] ) ; Cbo [ 8 ] = 0.0
; i = 0 ; r2 = 1 ; r3 = 2 ; maxval = muDoubleScalarAbs ( Cbo [ 0 ] ) ; a21 =
muDoubleScalarAbs ( Cbo [ 1 ] ) ; if ( a21 > maxval ) { maxval = a21 ; i = 1
; r2 = 0 ; } if ( muDoubleScalarAbs ( Cbo [ 2 ] ) > maxval ) { i = 2 ; r2 = 1
; r3 = 0 ; } Cbo [ r2 ] /= Cbo [ i ] ; Cbo [ r3 ] /= Cbo [ i ] ; Cbo [ 3 + r2
] -= Cbo [ 3 + i ] * Cbo [ r2 ] ; Cbo [ 3 + r3 ] -= Cbo [ 3 + i ] * Cbo [ r3
] ; Cbo [ 6 + r2 ] -= Cbo [ 6 + i ] * Cbo [ r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 6
+ i ] * Cbo [ r3 ] ; if ( muDoubleScalarAbs ( Cbo [ 3 + r3 ] ) >
muDoubleScalarAbs ( Cbo [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 = rtemp ;
} Cbo [ 3 + r3 ] /= Cbo [ 3 + r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 3 + r3 ] * Cbo [
6 + r2 ] ; rtB . m3fzt0sb4m [ 0 ] = rtB . ciu3iftexw [ i ] ; rtB . m3fzt0sb4m
[ 1 ] = rtB . ciu3iftexw [ r2 ] - rtB . m3fzt0sb4m [ 0 ] * Cbo [ r2 ] ; rtB .
m3fzt0sb4m [ 2 ] = ( rtB . ciu3iftexw [ r3 ] - rtB . m3fzt0sb4m [ 0 ] * Cbo [
r3 ] ) - Cbo [ 3 + r3 ] * rtB . m3fzt0sb4m [ 1 ] ; rtB . m3fzt0sb4m [ 2 ] /=
Cbo [ 6 + r3 ] ; rtB . m3fzt0sb4m [ 0 ] -= Cbo [ 6 + i ] * rtB . m3fzt0sb4m [
2 ] ; rtB . m3fzt0sb4m [ 1 ] -= Cbo [ 6 + r2 ] * rtB . m3fzt0sb4m [ 2 ] ; rtB
. m3fzt0sb4m [ 1 ] /= Cbo [ 3 + r2 ] ; rtB . m3fzt0sb4m [ 0 ] -= Cbo [ 3 + i
] * rtB . m3fzt0sb4m [ 1 ] ; rtB . m3fzt0sb4m [ 0 ] /= Cbo [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB .
j242gvklzp [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB . ij0ukvecpm [
0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . j242gvklzp [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . ij0ukvecpm [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . j242gvklzp [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ij0ukvecpm [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . owwhqvbcwo [ 0 ] = rtP . speeds1_Value [ 0 ]
; rtB . owwhqvbcwo [ 1 ] = rtP . speeds1_Value [ 1 ] ; rtB . owwhqvbcwo [ 2 ]
= rtP . speeds1_Value [ 2 ] ; rtB . owwhqvbcwo [ 3 ] = rtP . speeds1_Value [
3 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T *
lastU ; rtDW . dlz4fzirji = 0 ; if ( rtDW . i5ihhyg3t3 == ( rtInf ) ) { rtDW
. i5ihhyg3t3 = ssGetT ( rtS ) ; lastU = & rtDW . fi3xs4xgh4 ; } else if (
rtDW . oifw0jfvcb == ( rtInf ) ) { rtDW . oifw0jfvcb = ssGetT ( rtS ) ; lastU
= & rtDW . cnrljrwq5q ; } else if ( rtDW . i5ihhyg3t3 < rtDW . oifw0jfvcb ) {
rtDW . i5ihhyg3t3 = ssGetT ( rtS ) ; lastU = & rtDW . fi3xs4xgh4 ; } else {
rtDW . oifw0jfvcb = ssGetT ( rtS ) ; lastU = & rtDW . cnrljrwq5q ; } * lastU
= rtB . ocl3m0dxtp ; if ( rtDW . ndzhnxmlbe == ( rtInf ) ) { rtDW .
ndzhnxmlbe = ssGetT ( rtS ) ; lastU = & rtDW . pgylabzfah ; } else if ( rtDW
. eakx22dv4l == ( rtInf ) ) { rtDW . eakx22dv4l = ssGetT ( rtS ) ; lastU = &
rtDW . flegpay2y0 ; } else if ( rtDW . ndzhnxmlbe < rtDW . eakx22dv4l ) {
rtDW . ndzhnxmlbe = ssGetT ( rtS ) ; lastU = & rtDW . pgylabzfah ; } else {
rtDW . eakx22dv4l = ssGetT ( rtS ) ; lastU = & rtDW . flegpay2y0 ; } * lastU
= rtB . h5mdsiajxq ; if ( rtDW . fo5jnezz0v == ( rtInf ) ) { rtDW .
fo5jnezz0v = ssGetT ( rtS ) ; lastU = & rtDW . m2qm2lzxid ; } else if ( rtDW
. ktbxjai4kr == ( rtInf ) ) { rtDW . ktbxjai4kr = ssGetT ( rtS ) ; lastU = &
rtDW . lsav5m24co ; } else if ( rtDW . fo5jnezz0v < rtDW . ktbxjai4kr ) {
rtDW . fo5jnezz0v = ssGetT ( rtS ) ; lastU = & rtDW . m2qm2lzxid ; } else {
rtDW . ktbxjai4kr = ssGetT ( rtS ) ; lastU = & rtDW . lsav5m24co ; } * lastU
= rtB . indmgstqaw ; rtDW . k2msqlawib = 0 ; rtDW . ettvxhsewb = 0 ; if ( rtX
. gswyw4gv0d [ 0 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW .
kgldsbhmgx [ 0 ] ) { case 3 : if ( rtB . ntaykcqfbm [ 0 ] < 0.0 ) {
ssSetSolverNeedsReset ( rtS ) ; rtDW . kgldsbhmgx [ 0 ] = 1 ; } break ; case
1 : if ( rtB . ntaykcqfbm [ 0 ] >= 0.0 ) { rtDW . kgldsbhmgx [ 0 ] = 3 ;
ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . ntaykcqfbm [ 0 ] < 0.0 ) { rtDW . kgldsbhmgx [ 0 ] = 1 ; }
else { rtDW . kgldsbhmgx [ 0 ] = 3 ; } break ; } } else if ( rtX . gswyw4gv0d
[ 0 ] == rtP . Integrator2_LowerSat ) { switch ( rtDW . kgldsbhmgx [ 0 ] ) {
case 4 : if ( rtB . ntaykcqfbm [ 0 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . kgldsbhmgx [ 0 ] = 2 ; } break ; case 2 : if ( rtB . ntaykcqfbm [ 0
] <= 0.0 ) { rtDW . kgldsbhmgx [ 0 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 0 ]
> 0.0 ) { rtDW . kgldsbhmgx [ 0 ] = 2 ; } else { rtDW . kgldsbhmgx [ 0 ] = 4
; } break ; } } else { rtDW . kgldsbhmgx [ 0 ] = 0 ; } if ( rtX . gswyw4gv0d
[ 1 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . kgldsbhmgx [ 1 ] ) {
case 3 : if ( rtB . ntaykcqfbm [ 1 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . kgldsbhmgx [ 1 ] = 1 ; } break ; case 1 : if ( rtB . ntaykcqfbm [ 1
] >= 0.0 ) { rtDW . kgldsbhmgx [ 1 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 1 ]
< 0.0 ) { rtDW . kgldsbhmgx [ 1 ] = 1 ; } else { rtDW . kgldsbhmgx [ 1 ] = 3
; } break ; } } else if ( rtX . gswyw4gv0d [ 1 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . kgldsbhmgx [ 1 ] ) { case 4 : if (
rtB . ntaykcqfbm [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
kgldsbhmgx [ 1 ] = 2 ; } break ; case 2 : if ( rtB . ntaykcqfbm [ 1 ] <= 0.0
) { rtDW . kgldsbhmgx [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 1 ] > 0.0 )
{ rtDW . kgldsbhmgx [ 1 ] = 2 ; } else { rtDW . kgldsbhmgx [ 1 ] = 4 ; }
break ; } } else { rtDW . kgldsbhmgx [ 1 ] = 0 ; } if ( rtX . gswyw4gv0d [ 2
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . kgldsbhmgx [ 2 ] ) { case
3 : if ( rtB . ntaykcqfbm [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . kgldsbhmgx [ 2 ] = 1 ; } break ; case 1 : if ( rtB . ntaykcqfbm [ 2 ]
>= 0.0 ) { rtDW . kgldsbhmgx [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 2 ]
< 0.0 ) { rtDW . kgldsbhmgx [ 2 ] = 1 ; } else { rtDW . kgldsbhmgx [ 2 ] = 3
; } break ; } } else if ( rtX . gswyw4gv0d [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . kgldsbhmgx [ 2 ] ) { case 4 : if (
rtB . ntaykcqfbm [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
kgldsbhmgx [ 2 ] = 2 ; } break ; case 2 : if ( rtB . ntaykcqfbm [ 2 ] <= 0.0
) { rtDW . kgldsbhmgx [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 2 ] > 0.0 )
{ rtDW . kgldsbhmgx [ 2 ] = 2 ; } else { rtDW . kgldsbhmgx [ 2 ] = 4 ; }
break ; } } else { rtDW . kgldsbhmgx [ 2 ] = 0 ; } if ( rtX . gswyw4gv0d [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . kgldsbhmgx [ 3 ] ) { case
3 : if ( rtB . ntaykcqfbm [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . kgldsbhmgx [ 3 ] = 1 ; } break ; case 1 : if ( rtB . ntaykcqfbm [ 3 ]
>= 0.0 ) { rtDW . kgldsbhmgx [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 3 ]
< 0.0 ) { rtDW . kgldsbhmgx [ 3 ] = 1 ; } else { rtDW . kgldsbhmgx [ 3 ] = 3
; } break ; } } else if ( rtX . gswyw4gv0d [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . kgldsbhmgx [ 3 ] ) { case 4 : if (
rtB . ntaykcqfbm [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
kgldsbhmgx [ 3 ] = 2 ; } break ; case 2 : if ( rtB . ntaykcqfbm [ 3 ] <= 0.0
) { rtDW . kgldsbhmgx [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . ntaykcqfbm [ 3 ] > 0.0 )
{ rtDW . kgldsbhmgx [ 3 ] = 2 ; } else { rtDW . kgldsbhmgx [ 3 ] = 4 ; }
break ; } } else { rtDW . kgldsbhmgx [ 3 ] = 0 ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> izvl5sslbs = rtB . jhmk22jwb1 ; _rtXdot -> iajjy5lruz =
rtB . pnr1rsr5m2 ; _rtXdot -> gklzlaz1qk = rtB . jj1m4pu4xq ; _rtXdot ->
gaocubqvzp [ 0 ] = rtB . m3fzt0sb4m [ 0 ] ; _rtXdot -> n2z4nfjamx [ 0 ] = rtB
. k2osk23xhu [ 0 ] ; _rtXdot -> gaocubqvzp [ 1 ] = rtB . m3fzt0sb4m [ 1 ] ;
_rtXdot -> n2z4nfjamx [ 1 ] = rtB . k2osk23xhu [ 1 ] ; _rtXdot -> gaocubqvzp
[ 2 ] = rtB . m3fzt0sb4m [ 2 ] ; _rtXdot -> n2z4nfjamx [ 2 ] = rtB .
k2osk23xhu [ 2 ] ; if ( ( rtDW . kgldsbhmgx [ 0 ] != 3 ) && ( rtDW .
kgldsbhmgx [ 0 ] != 4 ) ) { _rtXdot -> gswyw4gv0d [ 0 ] = rtB . ntaykcqfbm [
0 ] ; _rtXdis -> gswyw4gv0d [ 0 ] = false ; } else { _rtXdot -> gswyw4gv0d [
0 ] = 0.0 ; if ( ( rtDW . kgldsbhmgx [ 0 ] == 3 ) || ( rtDW . kgldsbhmgx [ 0
] == 4 ) ) { _rtXdis -> gswyw4gv0d [ 0 ] = true ; } } if ( ( rtDW .
kgldsbhmgx [ 1 ] != 3 ) && ( rtDW . kgldsbhmgx [ 1 ] != 4 ) ) { _rtXdot ->
gswyw4gv0d [ 1 ] = rtB . ntaykcqfbm [ 1 ] ; _rtXdis -> gswyw4gv0d [ 1 ] =
false ; } else { _rtXdot -> gswyw4gv0d [ 1 ] = 0.0 ; if ( ( rtDW . kgldsbhmgx
[ 1 ] == 3 ) || ( rtDW . kgldsbhmgx [ 1 ] == 4 ) ) { _rtXdis -> gswyw4gv0d [
1 ] = true ; } } if ( ( rtDW . kgldsbhmgx [ 2 ] != 3 ) && ( rtDW . kgldsbhmgx
[ 2 ] != 4 ) ) { _rtXdot -> gswyw4gv0d [ 2 ] = rtB . ntaykcqfbm [ 2 ] ;
_rtXdis -> gswyw4gv0d [ 2 ] = false ; } else { _rtXdot -> gswyw4gv0d [ 2 ] =
0.0 ; if ( ( rtDW . kgldsbhmgx [ 2 ] == 3 ) || ( rtDW . kgldsbhmgx [ 2 ] == 4
) ) { _rtXdis -> gswyw4gv0d [ 2 ] = true ; } } if ( ( rtDW . kgldsbhmgx [ 3 ]
!= 3 ) && ( rtDW . kgldsbhmgx [ 3 ] != 4 ) ) { _rtXdot -> gswyw4gv0d [ 3 ] =
rtB . ntaykcqfbm [ 3 ] ; _rtXdis -> gswyw4gv0d [ 3 ] = false ; } else {
_rtXdot -> gswyw4gv0d [ 3 ] = 0.0 ; if ( ( rtDW . kgldsbhmgx [ 3 ] == 3 ) ||
( rtDW . kgldsbhmgx [ 3 ] == 4 ) ) { _rtXdis -> gswyw4gv0d [ 3 ] = true ; } }
_rtXdot -> awxsvjgvlk = rtB . op2c2ayack ; } void MdlProjection ( void ) { }
void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; if ( ( rtDW . kgldsbhmgx [ 0 ] == 1 )
&& ( rtX . gswyw4gv0d [ 0 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV ->
lagi5bbqa4 [ 0 ] = 0.0 ; } else { _rtZCSV -> lagi5bbqa4 [ 0 ] = rtX .
gswyw4gv0d [ 0 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . kgldsbhmgx [
0 ] == 2 ) && ( rtX . gswyw4gv0d [ 0 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> ggcau304xb [ 0 ] = 0.0 ; } else { _rtZCSV -> ggcau304xb [ 0 ] =
rtX . gswyw4gv0d [ 0 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
kgldsbhmgx [ 0 ] == 3 ) || ( rtDW . kgldsbhmgx [ 0 ] == 4 ) ) { _rtZCSV ->
ca5inishgh [ 0 ] = rtB . ntaykcqfbm [ 0 ] ; } else { _rtZCSV -> ca5inishgh [
0 ] = 0.0 ; } _rtZCSV -> ifq0vw25v4 [ 0 ] = rtB . ntaykcqfbm [ 0 ] ; if ( (
rtDW . kgldsbhmgx [ 1 ] == 1 ) && ( rtX . gswyw4gv0d [ 1 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> lagi5bbqa4 [ 1 ] = 0.0 ; } else {
_rtZCSV -> lagi5bbqa4 [ 1 ] = rtX . gswyw4gv0d [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . kgldsbhmgx [ 1 ] == 2 ) && ( rtX .
gswyw4gv0d [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> ggcau304xb [
1 ] = 0.0 ; } else { _rtZCSV -> ggcau304xb [ 1 ] = rtX . gswyw4gv0d [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . kgldsbhmgx [ 1 ] == 3 ) || (
rtDW . kgldsbhmgx [ 1 ] == 4 ) ) { _rtZCSV -> ca5inishgh [ 1 ] = rtB .
ntaykcqfbm [ 1 ] ; } else { _rtZCSV -> ca5inishgh [ 1 ] = 0.0 ; } _rtZCSV ->
ifq0vw25v4 [ 1 ] = rtB . ntaykcqfbm [ 1 ] ; if ( ( rtDW . kgldsbhmgx [ 2 ] ==
1 ) && ( rtX . gswyw4gv0d [ 2 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV
-> lagi5bbqa4 [ 2 ] = 0.0 ; } else { _rtZCSV -> lagi5bbqa4 [ 2 ] = rtX .
gswyw4gv0d [ 2 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . kgldsbhmgx [
2 ] == 2 ) && ( rtX . gswyw4gv0d [ 2 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> ggcau304xb [ 2 ] = 0.0 ; } else { _rtZCSV -> ggcau304xb [ 2 ] =
rtX . gswyw4gv0d [ 2 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
kgldsbhmgx [ 2 ] == 3 ) || ( rtDW . kgldsbhmgx [ 2 ] == 4 ) ) { _rtZCSV ->
ca5inishgh [ 2 ] = rtB . ntaykcqfbm [ 2 ] ; } else { _rtZCSV -> ca5inishgh [
2 ] = 0.0 ; } _rtZCSV -> ifq0vw25v4 [ 2 ] = rtB . ntaykcqfbm [ 2 ] ; if ( (
rtDW . kgldsbhmgx [ 3 ] == 1 ) && ( rtX . gswyw4gv0d [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> lagi5bbqa4 [ 3 ] = 0.0 ; } else {
_rtZCSV -> lagi5bbqa4 [ 3 ] = rtX . gswyw4gv0d [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . kgldsbhmgx [ 3 ] == 2 ) && ( rtX .
gswyw4gv0d [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> ggcau304xb [
3 ] = 0.0 ; } else { _rtZCSV -> ggcau304xb [ 3 ] = rtX . gswyw4gv0d [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . kgldsbhmgx [ 3 ] == 3 ) || (
rtDW . kgldsbhmgx [ 3 ] == 4 ) ) { _rtZCSV -> ca5inishgh [ 3 ] = rtB .
ntaykcqfbm [ 3 ] ; } else { _rtZCSV -> ca5inishgh [ 3 ] = 0.0 ; } _rtZCSV ->
ifq0vw25v4 [ 3 ] = rtB . ntaykcqfbm [ 3 ] ; } void MdlTerminate ( void ) { {
if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwCreateSigstreamSlioClient (
rt_GetOSigstreamManager ( ) , rtwGetPointerFromUniquePtr ( rt_slioCatalogue (
) ) ) ; rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) , rt_GetMatSigstreamLoggingFileName ( ) ) ;
rtwOSigstreamManagerDestroyInstance ( rt_GetOSigstreamManager ( ) ) ;
rtwTerminateSlioCatalogue ( slioCatalogueAddr ) ; * slioCatalogueAddr = (
NULL ) ; } } } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
14 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 58 ) ;
ssSetNumBlockIO ( rtS , 34 ) ; ssSetNumBlockParams ( rtS , 37 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 3555331369U ) ; ssSetChecksumVal ( rtS ,
1 , 1960741530U ) ; ssSetChecksumVal ( rtS , 2 , 2094998048U ) ;
ssSetChecksumVal ( rtS , 3 , 3358266794U ) ; } SimStruct *
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
mainModel_matlab2013b_working_attitude_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_matlab2013b_working_attitude" ) ; ssSetPath ( rtS ,
"mainModel_matlab2013b_working_attitude" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 1
, 1 , 1 , 3 , 4 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 3 , 1
, 1 , 1 , 3 , 4 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ]
= { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"mainModel_matlab2013b_working_attitude/Integrator1" ,
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Integrator"
,
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Integrator"
,
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Integrator"
, "mainModel_matlab2013b_working_attitude/Integrator" ,
"mainModel_matlab2013b_working_attitude/Integrator2" ,
"mainModel_matlab2013b_working_attitude/Integrator3" } ; static const char_T
* rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo =
{ 7 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) , {
rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 7 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . gaocubqvzp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . izvl5sslbs ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . iajjy5lruz ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . gklzlaz1qk ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . n2z4nfjamx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gswyw4gv0d [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . awxsvjgvlk ; }
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
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 14 ] ; static
real_T absTol [ 14 ] = { 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9
, 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 , 1.0E-9 } ;
static uint8_T absTolControl [ 14 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [ 16 ] = { (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 4 * sizeof ( real_T ) , ( char * ) ( & rtB .
cdqa1b2rvw [ 0 ] ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 1.0E-6 ) ;
ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , 5 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode15s" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 16 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 16 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3555331369U ) ; ssSetChecksumVal ( rtS , 1 ,
1960741530U ) ; ssSetChecksumVal ( rtS , 2 , 2094998048U ) ; ssSetChecksumVal
( rtS , 3 , 3358266794U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 6 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; } const int_T gblParameterTuningTid =
2 ; void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid )
; }
