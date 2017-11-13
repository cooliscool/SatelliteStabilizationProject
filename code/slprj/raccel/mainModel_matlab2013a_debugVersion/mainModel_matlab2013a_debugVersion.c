#include "__cf_mainModel_matlab2013a_debugVersion.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013a_debugVersion_capi.h"
#include <math.h>
#include "mainModel_matlab2013a_debugVersion.h"
#include "mainModel_matlab2013a_debugVersion_private.h"
#include "mainModel_matlab2013a_debugVersion_dt.h"
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
 "slprj//raccel//mainModel_matlab2013a_debugVersion//mainModel_matlab2013a_debugVersion_Jpattern.mat"
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
rtX . dpnjtbchyj [ 0 ] = 1000.0 ; rtX . dpnjtbchyj [ 1 ] = 1000.0 ; rtX .
dpnjtbchyj [ 2 ] = 1000.0 ; rtX . dpnjtbchyj [ 3 ] = 1732.0 ; rtX .
fbqhtwkmoe [ 0 ] = 0.0 ; rtX . fbqhtwkmoe [ 1 ] = 0.0 ; rtX . fbqhtwkmoe [ 2
] = 0.0 ; } rtDW . g1li03p4if = 1 ; rtDW . d15qatvd24 = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . f0ptt33h1b [ 0 ] = 0.0 ; rtX . f0ptt33h1b
[ 1 ] = 0.0 ; rtX . f0ptt33h1b [ 2 ] = 0.0 ; } rtDW . dnbutp1xv1 = 1 ; } void
MdlStart ( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const
char * errorCreatingOSigstreamManager = ( NULL ) ; const char *
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
} } rtB . jhhwutstv4 [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . jhhwutstv4 [ 1
] = rtP . speeds_Value [ 1 ] ; rtB . jhhwutstv4 [ 2 ] = rtP . speeds_Value [
2 ] ; rtB . jhhwutstv4 [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . dbndezqpsz [
0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB . ixylsjphip [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . dbndezqpsz [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . ixylsjphip [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . dbndezqpsz [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ixylsjphip [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
real_T temp1 [ 3 ] ; real_T y [ 3 ] ; static const int16_T a [ 9 ] = { 1800 ,
- 50 , - 15 , - 50 , 1600 , 25 , - 15 , 25 , 1200 } ; static const real_T b [
3 ] = { 0.0 , 0.0 , 0.0010741000000000001 } ; static const int8_T e [ 3 ] = {
0 , 0 , 1 } ; real_T C_pryToOmega [ 9 ] ; int32_T r2 ; int32_T r3 ; real_T
maxval ; real_T a21 ; int32_T rtemp ; real_T c [ 9 ] ; real_T tmp [ 9 ] ;
real_T c_p [ 9 ] ; real_T tmp_p [ 9 ] ; int32_T i ; if ( rtDW . g1li03p4if !=
0 ) { rtX . dpnjtbchyj [ 0 ] = rtB . jhhwutstv4 [ 0 ] ; rtX . dpnjtbchyj [ 1
] = rtB . jhhwutstv4 [ 1 ] ; rtX . dpnjtbchyj [ 2 ] = rtB . jhhwutstv4 [ 2 ]
; rtX . dpnjtbchyj [ 3 ] = rtB . jhhwutstv4 [ 3 ] ; } if ( ssIsMajorTimeStep
( rtS ) ) { if ( rtX . dpnjtbchyj [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX
. dpnjtbchyj [ 0 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
dpnjtbchyj [ 0 ] <= rtP . Integrator2_LowerSat ) { rtX . dpnjtbchyj [ 0 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . dpnjtbchyj [ 1 ] >= rtP .
Integrator2_UpperSat ) { rtX . dpnjtbchyj [ 1 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . dpnjtbchyj [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX
. dpnjtbchyj [ 1 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . dpnjtbchyj [
2 ] >= rtP . Integrator2_UpperSat ) { rtX . dpnjtbchyj [ 2 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . dpnjtbchyj [ 2 ] <= rtP .
Integrator2_LowerSat ) { rtX . dpnjtbchyj [ 2 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . dpnjtbchyj [ 3 ] >= rtP . Integrator2_UpperSat ) { rtX .
dpnjtbchyj [ 3 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
dpnjtbchyj [ 3 ] <= rtP . Integrator2_LowerSat ) { rtX . dpnjtbchyj [ 3 ] =
rtP . Integrator2_LowerSat ; } } } rtB . jcw4uwsbuk [ 0 ] = rtX . dpnjtbchyj
[ 0 ] ; rtB . jcw4uwsbuk [ 1 ] = rtX . dpnjtbchyj [ 1 ] ; rtB . jcw4uwsbuk [
2 ] = rtX . dpnjtbchyj [ 2 ] ; rtB . jcw4uwsbuk [ 3 ] = rtX . dpnjtbchyj [ 3
] ; if ( rtDW . d15qatvd24 != 0 ) { rtX . fbqhtwkmoe [ 0 ] = rtB . dbndezqpsz
[ 0 ] ; rtX . fbqhtwkmoe [ 1 ] = rtB . dbndezqpsz [ 1 ] ; rtX . fbqhtwkmoe [
2 ] = rtB . dbndezqpsz [ 2 ] ; } rtB . npz23xukiv [ 0 ] = rtX . fbqhtwkmoe [
0 ] ; rtB . npz23xukiv [ 1 ] = rtX . fbqhtwkmoe [ 1 ] ; rtB . npz23xukiv [ 2
] = rtX . fbqhtwkmoe [ 2 ] ; rtB . alhexilcl1 [ 0 ] = 0.0 ; rtB . alhexilcl1
[ 1 ] = 0.0 ; rtB . alhexilcl1 [ 2 ] = 0.0 ; rtB . alhexilcl1 [ 3 ] = 0.0 ;
if ( rtDW . dnbutp1xv1 != 0 ) { rtX . f0ptt33h1b [ 0 ] = rtB . ixylsjphip [ 0
] ; rtX . f0ptt33h1b [ 1 ] = rtB . ixylsjphip [ 1 ] ; rtX . f0ptt33h1b [ 2 ]
= rtB . ixylsjphip [ 2 ] ; } rtB . iavo2yiw5k [ 0 ] = rtX . f0ptt33h1b [ 0 ]
; rtB . iavo2yiw5k [ 1 ] = rtX . f0ptt33h1b [ 1 ] ; rtB . iavo2yiw5k [ 2 ] =
rtX . f0ptt33h1b [ 2 ] ; rtB . a43erptiha [ 0 ] = ( rtB . alhexilcl1 [ 0 ] -
0.57735026918962584 * rtB . alhexilcl1 [ 3 ] ) * rtP . eachwheelInertia_Value
; rtB . a43erptiha [ 1 ] = ( rtB . alhexilcl1 [ 1 ] - 0.57735026918962584 *
rtB . alhexilcl1 [ 3 ] ) * rtP . eachwheelInertia_Value ; rtB . a43erptiha [
2 ] = ( rtB . alhexilcl1 [ 2 ] - 0.57735026918962584 * rtB . alhexilcl1 [ 3 ]
) * rtP . eachwheelInertia_Value ; rtB . evsm35ybx5 [ 0 ] = ( rtB .
jcw4uwsbuk [ 2 ] * rtB . iavo2yiw5k [ 1 ] - rtB . jcw4uwsbuk [ 1 ] * rtB .
iavo2yiw5k [ 2 ] ) * rtP . eachwheelInertia_Value + rtB . a43erptiha [ 0 ] ;
rtB . evsm35ybx5 [ 1 ] = ( rtB . jcw4uwsbuk [ 0 ] * rtB . iavo2yiw5k [ 2 ] -
rtB . jcw4uwsbuk [ 2 ] * rtB . iavo2yiw5k [ 0 ] ) * rtP .
eachwheelInertia_Value + rtB . a43erptiha [ 1 ] ; rtB . evsm35ybx5 [ 2 ] = (
rtB . jcw4uwsbuk [ 1 ] * rtB . iavo2yiw5k [ 0 ] - rtB . jcw4uwsbuk [ 0 ] *
rtB . iavo2yiw5k [ 1 ] ) * rtP . eachwheelInertia_Value + rtB . a43erptiha [
2 ] ; c [ 1 ] = 0.0 ; c [ 4 ] = muDoubleScalarCos ( rtB . npz23xukiv [ 2 ] )
; c [ 7 ] = muDoubleScalarSin ( rtB . npz23xukiv [ 2 ] ) ; c [ 2 ] = 0.0 ; c
[ 5 ] = - muDoubleScalarSin ( rtB . npz23xukiv [ 2 ] ) ; c [ 8 ] =
muDoubleScalarCos ( rtB . npz23xukiv [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos
( rtB . npz23xukiv [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = -
muDoubleScalarSin ( rtB . npz23xukiv [ 1 ] ) ; c [ 0 ] = 1.0 ; tmp [ 1 ] =
0.0 ; c [ 3 ] = 0.0 ; tmp [ 4 ] = 1.0 ; c [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0 ; tmp
[ 2 ] = muDoubleScalarSin ( rtB . npz23xukiv [ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp
[ 8 ] = muDoubleScalarCos ( rtB . npz23xukiv [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtB . npz23xukiv [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . npz23xukiv [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . npz23xukiv [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . npz23xukiv [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { c_p [ i + 3 * r2 ] =
0.0 ; c_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * c [ i ] ; c_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * c [ i + 3 ] ; c_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
c [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = e [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { maxval = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { c [ i + 3 * r2 ] = 0.0 ;
c [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * c_p [ i ] ; c [ i + 3 * r2 ] += tmp_p
[ 3 * r2 + 1 ] * c_p [ i + 3 ] ; c [ i + 3 * r2 ] += tmp_p [ 3 * r2 + 2 ] *
c_p [ i + 6 ] ; maxval += c [ 3 * r2 + i ] * b [ r2 ] ; } temp1 [ i ] = rtP .
zero1_Value [ i ] - maxval ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB .
mlj4oqsqq0 [ i ] = rtB . npz23xukiv [ i ] * rtP . radToDeg_Value ; y [ i ] =
( real_T ) a [ i + 6 ] * temp1 [ 2 ] + ( ( real_T ) a [ i + 3 ] * temp1 [ 1 ]
+ ( real_T ) a [ i ] * temp1 [ 0 ] ) ; } rtB . gr1z41kuv0 [ 0 ] = ( ( rtP .
zerodisrturbance_Value [ 0 ] + rtP . magTorq_Value [ 0 ] ) - rtP .
zero1_Value [ 0 ] ) - ( temp1 [ 1 ] * y [ 2 ] - temp1 [ 2 ] * y [ 1 ] ) ; rtB
. gr1z41kuv0 [ 1 ] = ( ( ( rtP . zerodisrturbance_Value [ 1 ] + rtP .
magTorq_Value [ 1 ] ) - rtP . zero1_Value [ 1 ] ) - ( temp1 [ 2 ] * y [ 0 ] -
temp1 [ 0 ] * y [ 2 ] ) ) - rtB . gr1z41kuv0 [ 0 ] * 0.031064799739498536 ;
rtB . gr1z41kuv0 [ 2 ] = ( ( ( ( rtP . zerodisrturbance_Value [ 2 ] + rtP .
magTorq_Value [ 2 ] ) - rtP . zero1_Value [ 2 ] ) - ( temp1 [ 0 ] * y [ 1 ] -
temp1 [ 1 ] * y [ 0 ] ) ) - rtB . gr1z41kuv0 [ 0 ] * 0.01185281667209378 ) -
rtB . gr1z41kuv0 [ 1 ] * - 0.020833333333333332 ; rtB . gr1z41kuv0 [ 2 ] /=
0.00083333333333333339 ; rtB . gr1z41kuv0 [ 0 ] -= rtB . gr1z41kuv0 [ 2 ] *
6.5912368419718371E-6 ; rtB . gr1z41kuv0 [ 1 ] -= rtB . gr1z41kuv0 [ 2 ] * -
1.3025073266037122E-5 ; rtB . gr1z41kuv0 [ 1 ] /= 0.00062520351676978187 ;
rtB . gr1z41kuv0 [ 0 ] -= rtB . gr1z41kuv0 [ 1 ] * 1.7274835019893224E-5 ;
rtB . gr1z41kuv0 [ 0 ] /= 0.000556090339057569 ; C_pryToOmega [ 0 ] = -
muDoubleScalarSin ( rtB . npz23xukiv [ 1 ] ) ; C_pryToOmega [ 3 ] = 0.0 ;
C_pryToOmega [ 6 ] = 1.0 ; C_pryToOmega [ 1 ] = muDoubleScalarCos ( rtB .
npz23xukiv [ 1 ] ) * muDoubleScalarSin ( rtB . npz23xukiv [ 2 ] ) ;
C_pryToOmega [ 4 ] = muDoubleScalarCos ( rtB . npz23xukiv [ 2 ] ) ;
C_pryToOmega [ 7 ] = 0.0 ; C_pryToOmega [ 2 ] = muDoubleScalarCos ( rtB .
npz23xukiv [ 1 ] ) * muDoubleScalarCos ( rtB . npz23xukiv [ 2 ] ) ;
C_pryToOmega [ 5 ] = - muDoubleScalarSin ( rtB . npz23xukiv [ 2 ] ) ;
C_pryToOmega [ 8 ] = 0.0 ; i = 0 ; r2 = 1 ; r3 = 2 ; maxval =
muDoubleScalarAbs ( C_pryToOmega [ 0 ] ) ; a21 = muDoubleScalarAbs (
C_pryToOmega [ 1 ] ) ; if ( a21 > maxval ) { maxval = a21 ; i = 1 ; r2 = 0 ;
} if ( muDoubleScalarAbs ( C_pryToOmega [ 2 ] ) > maxval ) { i = 2 ; r2 = 1 ;
r3 = 0 ; } C_pryToOmega [ r2 ] /= C_pryToOmega [ i ] ; C_pryToOmega [ r3 ] /=
C_pryToOmega [ i ] ; C_pryToOmega [ 3 + r2 ] -= C_pryToOmega [ 3 + i ] *
C_pryToOmega [ r2 ] ; C_pryToOmega [ 3 + r3 ] -= C_pryToOmega [ 3 + i ] *
C_pryToOmega [ r3 ] ; C_pryToOmega [ 6 + r2 ] -= C_pryToOmega [ 6 + i ] *
C_pryToOmega [ r2 ] ; C_pryToOmega [ 6 + r3 ] -= C_pryToOmega [ 6 + i ] *
C_pryToOmega [ r3 ] ; if ( muDoubleScalarAbs ( C_pryToOmega [ 3 + r3 ] ) >
muDoubleScalarAbs ( C_pryToOmega [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 =
rtemp ; } C_pryToOmega [ 3 + r3 ] /= C_pryToOmega [ 3 + r2 ] ; C_pryToOmega [
6 + r3 ] -= C_pryToOmega [ 3 + r3 ] * C_pryToOmega [ 6 + r2 ] ; rtB .
aacbkzxdi2 [ 0 ] = rtB . iavo2yiw5k [ i ] ; rtB . aacbkzxdi2 [ 1 ] = rtB .
iavo2yiw5k [ r2 ] - rtB . aacbkzxdi2 [ 0 ] * C_pryToOmega [ r2 ] ; rtB .
aacbkzxdi2 [ 2 ] = ( rtB . iavo2yiw5k [ r3 ] - rtB . aacbkzxdi2 [ 0 ] *
C_pryToOmega [ r3 ] ) - C_pryToOmega [ 3 + r3 ] * rtB . aacbkzxdi2 [ 1 ] ;
rtB . aacbkzxdi2 [ 2 ] /= C_pryToOmega [ 6 + r3 ] ; rtB . aacbkzxdi2 [ 0 ] -=
C_pryToOmega [ 6 + i ] * rtB . aacbkzxdi2 [ 2 ] ; rtB . aacbkzxdi2 [ 1 ] -=
C_pryToOmega [ 6 + r2 ] * rtB . aacbkzxdi2 [ 2 ] ; rtB . aacbkzxdi2 [ 1 ] /=
C_pryToOmega [ 3 + r2 ] ; rtB . aacbkzxdi2 [ 0 ] -= C_pryToOmega [ 3 + i ] *
rtB . aacbkzxdi2 [ 1 ] ; rtB . aacbkzxdi2 [ 0 ] /= C_pryToOmega [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T tid ) { rtB .
jhhwutstv4 [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . jhhwutstv4 [ 1 ] = rtP .
speeds_Value [ 1 ] ; rtB . jhhwutstv4 [ 2 ] = rtP . speeds_Value [ 2 ] ; rtB
. jhhwutstv4 [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . dbndezqpsz [ 0 ] = rtP
. pitchrollyawInitial_Value [ 0 ] ; rtB . ixylsjphip [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . dbndezqpsz [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . ixylsjphip [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . dbndezqpsz [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . ixylsjphip [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { rtDW . g1li03p4if = 0 ; if ( rtX . dpnjtbchyj [ 0 ] == rtP .
Integrator2_UpperSat ) { switch ( rtDW . oovnnqwvs1 [ 0 ] ) { case 3 : if (
rtB . alhexilcl1 [ 0 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
oovnnqwvs1 [ 0 ] = 1 ; } break ; case 1 : if ( rtB . alhexilcl1 [ 0 ] >= 0.0
) { rtDW . oovnnqwvs1 [ 0 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 0 ] < 0.0 )
{ rtDW . oovnnqwvs1 [ 0 ] = 1 ; } else { rtDW . oovnnqwvs1 [ 0 ] = 3 ; }
break ; } } else if ( rtX . dpnjtbchyj [ 0 ] == rtP . Integrator2_LowerSat )
{ switch ( rtDW . oovnnqwvs1 [ 0 ] ) { case 4 : if ( rtB . alhexilcl1 [ 0 ] >
0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW . oovnnqwvs1 [ 0 ] = 2 ; } break
; case 2 : if ( rtB . alhexilcl1 [ 0 ] <= 0.0 ) { rtDW . oovnnqwvs1 [ 0 ] = 4
; ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . alhexilcl1 [ 0 ] > 0.0 ) { rtDW . oovnnqwvs1 [ 0 ] = 2 ; }
else { rtDW . oovnnqwvs1 [ 0 ] = 4 ; } break ; } } else { rtDW . oovnnqwvs1 [
0 ] = 0 ; } if ( rtX . dpnjtbchyj [ 1 ] == rtP . Integrator2_UpperSat ) {
switch ( rtDW . oovnnqwvs1 [ 1 ] ) { case 3 : if ( rtB . alhexilcl1 [ 1 ] <
0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW . oovnnqwvs1 [ 1 ] = 1 ; } break
; case 1 : if ( rtB . alhexilcl1 [ 1 ] >= 0.0 ) { rtDW . oovnnqwvs1 [ 1 ] = 3
; ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . alhexilcl1 [ 1 ] < 0.0 ) { rtDW . oovnnqwvs1 [ 1 ] = 1 ; }
else { rtDW . oovnnqwvs1 [ 1 ] = 3 ; } break ; } } else if ( rtX . dpnjtbchyj
[ 1 ] == rtP . Integrator2_LowerSat ) { switch ( rtDW . oovnnqwvs1 [ 1 ] ) {
case 4 : if ( rtB . alhexilcl1 [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . oovnnqwvs1 [ 1 ] = 2 ; } break ; case 2 : if ( rtB . alhexilcl1 [ 1
] <= 0.0 ) { rtDW . oovnnqwvs1 [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 1 ]
> 0.0 ) { rtDW . oovnnqwvs1 [ 1 ] = 2 ; } else { rtDW . oovnnqwvs1 [ 1 ] = 4
; } break ; } } else { rtDW . oovnnqwvs1 [ 1 ] = 0 ; } if ( rtX . dpnjtbchyj
[ 2 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . oovnnqwvs1 [ 2 ] ) {
case 3 : if ( rtB . alhexilcl1 [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . oovnnqwvs1 [ 2 ] = 1 ; } break ; case 1 : if ( rtB . alhexilcl1 [ 2
] >= 0.0 ) { rtDW . oovnnqwvs1 [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 2 ]
< 0.0 ) { rtDW . oovnnqwvs1 [ 2 ] = 1 ; } else { rtDW . oovnnqwvs1 [ 2 ] = 3
; } break ; } } else if ( rtX . dpnjtbchyj [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . oovnnqwvs1 [ 2 ] ) { case 4 : if (
rtB . alhexilcl1 [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
oovnnqwvs1 [ 2 ] = 2 ; } break ; case 2 : if ( rtB . alhexilcl1 [ 2 ] <= 0.0
) { rtDW . oovnnqwvs1 [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 2 ] > 0.0 )
{ rtDW . oovnnqwvs1 [ 2 ] = 2 ; } else { rtDW . oovnnqwvs1 [ 2 ] = 4 ; }
break ; } } else { rtDW . oovnnqwvs1 [ 2 ] = 0 ; } if ( rtX . dpnjtbchyj [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . oovnnqwvs1 [ 3 ] ) { case
3 : if ( rtB . alhexilcl1 [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . oovnnqwvs1 [ 3 ] = 1 ; } break ; case 1 : if ( rtB . alhexilcl1 [ 3 ]
>= 0.0 ) { rtDW . oovnnqwvs1 [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 3 ]
< 0.0 ) { rtDW . oovnnqwvs1 [ 3 ] = 1 ; } else { rtDW . oovnnqwvs1 [ 3 ] = 3
; } break ; } } else if ( rtX . dpnjtbchyj [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . oovnnqwvs1 [ 3 ] ) { case 4 : if (
rtB . alhexilcl1 [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
oovnnqwvs1 [ 3 ] = 2 ; } break ; case 2 : if ( rtB . alhexilcl1 [ 3 ] <= 0.0
) { rtDW . oovnnqwvs1 [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . alhexilcl1 [ 3 ] > 0.0 )
{ rtDW . oovnnqwvs1 [ 3 ] = 2 ; } else { rtDW . oovnnqwvs1 [ 3 ] = 4 ; }
break ; } } else { rtDW . oovnnqwvs1 [ 3 ] = 0 ; } rtDW . d15qatvd24 = 0 ;
rtDW . dnbutp1xv1 = 0 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
if ( ( rtDW . oovnnqwvs1 [ 0 ] != 3 ) && ( rtDW . oovnnqwvs1 [ 0 ] != 4 ) ) {
_rtXdot -> dpnjtbchyj [ 0 ] = rtB . alhexilcl1 [ 0 ] ; _rtXdis -> dpnjtbchyj
[ 0 ] = false ; } else { _rtXdot -> dpnjtbchyj [ 0 ] = 0.0 ; if ( ( rtDW .
oovnnqwvs1 [ 0 ] == 3 ) || ( rtDW . oovnnqwvs1 [ 0 ] == 4 ) ) { _rtXdis ->
dpnjtbchyj [ 0 ] = true ; } } if ( ( rtDW . oovnnqwvs1 [ 1 ] != 3 ) && ( rtDW
. oovnnqwvs1 [ 1 ] != 4 ) ) { _rtXdot -> dpnjtbchyj [ 1 ] = rtB . alhexilcl1
[ 1 ] ; _rtXdis -> dpnjtbchyj [ 1 ] = false ; } else { _rtXdot -> dpnjtbchyj
[ 1 ] = 0.0 ; if ( ( rtDW . oovnnqwvs1 [ 1 ] == 3 ) || ( rtDW . oovnnqwvs1 [
1 ] == 4 ) ) { _rtXdis -> dpnjtbchyj [ 1 ] = true ; } } if ( ( rtDW .
oovnnqwvs1 [ 2 ] != 3 ) && ( rtDW . oovnnqwvs1 [ 2 ] != 4 ) ) { _rtXdot ->
dpnjtbchyj [ 2 ] = rtB . alhexilcl1 [ 2 ] ; _rtXdis -> dpnjtbchyj [ 2 ] =
false ; } else { _rtXdot -> dpnjtbchyj [ 2 ] = 0.0 ; if ( ( rtDW . oovnnqwvs1
[ 2 ] == 3 ) || ( rtDW . oovnnqwvs1 [ 2 ] == 4 ) ) { _rtXdis -> dpnjtbchyj [
2 ] = true ; } } if ( ( rtDW . oovnnqwvs1 [ 3 ] != 3 ) && ( rtDW . oovnnqwvs1
[ 3 ] != 4 ) ) { _rtXdot -> dpnjtbchyj [ 3 ] = rtB . alhexilcl1 [ 3 ] ;
_rtXdis -> dpnjtbchyj [ 3 ] = false ; } else { _rtXdot -> dpnjtbchyj [ 3 ] =
0.0 ; if ( ( rtDW . oovnnqwvs1 [ 3 ] == 3 ) || ( rtDW . oovnnqwvs1 [ 3 ] == 4
) ) { _rtXdis -> dpnjtbchyj [ 3 ] = true ; } } _rtXdot -> fbqhtwkmoe [ 0 ] =
rtB . aacbkzxdi2 [ 0 ] ; _rtXdot -> f0ptt33h1b [ 0 ] = rtB . gr1z41kuv0 [ 0 ]
; _rtXdot -> fbqhtwkmoe [ 1 ] = rtB . aacbkzxdi2 [ 1 ] ; _rtXdot ->
f0ptt33h1b [ 1 ] = rtB . gr1z41kuv0 [ 1 ] ; _rtXdot -> fbqhtwkmoe [ 2 ] = rtB
. aacbkzxdi2 [ 2 ] ; _rtXdot -> f0ptt33h1b [ 2 ] = rtB . gr1z41kuv0 [ 2 ] ; }
void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; if ( (
rtDW . oovnnqwvs1 [ 0 ] == 1 ) && ( rtX . dpnjtbchyj [ 0 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> is5uvt3gd3 [ 0 ] = 0.0 ; } else {
_rtZCSV -> is5uvt3gd3 [ 0 ] = rtX . dpnjtbchyj [ 0 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . oovnnqwvs1 [ 0 ] == 2 ) && ( rtX .
dpnjtbchyj [ 0 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> in5bbr0byr [
0 ] = 0.0 ; } else { _rtZCSV -> in5bbr0byr [ 0 ] = rtX . dpnjtbchyj [ 0 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . oovnnqwvs1 [ 0 ] == 3 ) || (
rtDW . oovnnqwvs1 [ 0 ] == 4 ) ) { _rtZCSV -> ayjwthjbxp [ 0 ] = rtB .
alhexilcl1 [ 0 ] ; } else { _rtZCSV -> ayjwthjbxp [ 0 ] = 0.0 ; } if ( ( rtDW
. oovnnqwvs1 [ 1 ] == 1 ) && ( rtX . dpnjtbchyj [ 1 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> is5uvt3gd3 [ 1 ] = 0.0 ; } else {
_rtZCSV -> is5uvt3gd3 [ 1 ] = rtX . dpnjtbchyj [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . oovnnqwvs1 [ 1 ] == 2 ) && ( rtX .
dpnjtbchyj [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> in5bbr0byr [
1 ] = 0.0 ; } else { _rtZCSV -> in5bbr0byr [ 1 ] = rtX . dpnjtbchyj [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . oovnnqwvs1 [ 1 ] == 3 ) || (
rtDW . oovnnqwvs1 [ 1 ] == 4 ) ) { _rtZCSV -> ayjwthjbxp [ 1 ] = rtB .
alhexilcl1 [ 1 ] ; } else { _rtZCSV -> ayjwthjbxp [ 1 ] = 0.0 ; } if ( ( rtDW
. oovnnqwvs1 [ 2 ] == 1 ) && ( rtX . dpnjtbchyj [ 2 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> is5uvt3gd3 [ 2 ] = 0.0 ; } else {
_rtZCSV -> is5uvt3gd3 [ 2 ] = rtX . dpnjtbchyj [ 2 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . oovnnqwvs1 [ 2 ] == 2 ) && ( rtX .
dpnjtbchyj [ 2 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> in5bbr0byr [
2 ] = 0.0 ; } else { _rtZCSV -> in5bbr0byr [ 2 ] = rtX . dpnjtbchyj [ 2 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . oovnnqwvs1 [ 2 ] == 3 ) || (
rtDW . oovnnqwvs1 [ 2 ] == 4 ) ) { _rtZCSV -> ayjwthjbxp [ 2 ] = rtB .
alhexilcl1 [ 2 ] ; } else { _rtZCSV -> ayjwthjbxp [ 2 ] = 0.0 ; } if ( ( rtDW
. oovnnqwvs1 [ 3 ] == 1 ) && ( rtX . dpnjtbchyj [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> is5uvt3gd3 [ 3 ] = 0.0 ; } else {
_rtZCSV -> is5uvt3gd3 [ 3 ] = rtX . dpnjtbchyj [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . oovnnqwvs1 [ 3 ] == 2 ) && ( rtX .
dpnjtbchyj [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> in5bbr0byr [
3 ] = 0.0 ; } else { _rtZCSV -> in5bbr0byr [ 3 ] = rtX . dpnjtbchyj [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . oovnnqwvs1 [ 3 ] == 3 ) || (
rtDW . oovnnqwvs1 [ 3 ] == 4 ) ) { _rtZCSV -> ayjwthjbxp [ 3 ] = rtB .
alhexilcl1 [ 3 ] ; } else { _rtZCSV -> ayjwthjbxp [ 3 ] = 0.0 ; } } void
MdlTerminate ( void ) { { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwCreateSigstreamSlioClient (
rt_GetOSigstreamManager ( ) , rtwGetPointerFromUniquePtr ( rt_slioCatalogue (
) ) ) ; rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) , rt_GetMatSigstreamLoggingFileName ( ) ) ;
rtwOSigstreamManagerDestroyInstance ( rt_GetOSigstreamManager ( ) ) ;
rtwTerminateSlioCatalogue ( slioCatalogueAddr ) ; * slioCatalogueAddr = (
NULL ) ; } } } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
10 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 27 ) ;
ssSetNumBlockIO ( rtS , 12 ) ; ssSetNumBlockParams ( rtS , 26 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 3938103703U ) ; ssSetChecksumVal ( rtS ,
1 , 2568485121U ) ; ssSetChecksumVal ( rtS , 2 , 1885326149U ) ;
ssSetChecksumVal ( rtS , 3 , 2849358959U ) ; } SimStruct *
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
mainModel_matlab2013a_debugVersion_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_matlab2013a_debugVersion" ) ; ssSetPath ( rtS ,
"mainModel_matlab2013a_debugVersion" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 4 , 3
, 3 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 4 , 3 , 3 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"mainModel_matlab2013a_debugVersion/Integrator2" ,
"mainModel_matlab2013a_debugVersion/Integrator1" ,
"mainModel_matlab2013a_debugVersion/Integrator" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 3 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 3 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . dpnjtbchyj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . fbqhtwkmoe [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . f0ptt33h1b [ 0 ] ; }
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
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 10 ] ; static
real_T absTol [ 10 ] = { 1.0000000000000001E-7 , 1.0000000000000001E-7 ,
1.0000000000000001E-7 , 1.0000000000000001E-7 , 1.0000000000000001E-7 ,
1.0000000000000001E-7 , 1.0000000000000001E-7 , 1.0000000000000001E-7 ,
1.0000000000000001E-7 , 1.0000000000000001E-7 } ; static uint8_T
absTolControl [ 10 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ;
static uint8_T zcAttributes [ 12 ] = { ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) } ; ssSetSolverRelTol ( rtS , 0.0001 ) ; ssSetStepSize ( rtS
, 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 )
; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.01 ) ;
ssSetSolverMaxOrder ( rtS , 5 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode15s" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
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
ssSetChecksumVal ( rtS , 0 , 3938103703U ) ; ssSetChecksumVal ( rtS , 1 ,
2568485121U ) ; ssSetChecksumVal ( rtS , 2 , 1885326149U ) ; ssSetChecksumVal
( rtS , 3 , 2849358959U ) ; { static const sysRanDType rtAlwaysEnabled =
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
