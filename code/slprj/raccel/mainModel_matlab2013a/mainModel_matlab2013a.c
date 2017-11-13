#include "__cf_mainModel_matlab2013a.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013a_capi.h"
#include <math.h>
#include "mainModel_matlab2013a.h"
#include "mainModel_matlab2013a_private.h"
#include "mainModel_matlab2013a_dt.h"
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
"slprj//raccel//mainModel_matlab2013a//mainModel_matlab2013a_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { if ( ssIsFirstInitCond ( rtS ) ) {
rtX . affdlhtmjo [ 0 ] = 0.0 ; rtX . affdlhtmjo [ 1 ] = 0.0 ; rtX .
affdlhtmjo [ 2 ] = 0.0 ; rtX . olx0irmnay [ 0 ] = 0.0 ; rtX . olx0irmnay [ 1
] = 0.0 ; rtX . olx0irmnay [ 2 ] = 0.0 ; } rtDW . kpaaqs1xgt = 1 ; rtDW .
kgvzigyyvz = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . jyci2cli0a [ 0 ] =
1000.0 ; rtX . jyci2cli0a [ 1 ] = 1000.0 ; rtX . jyci2cli0a [ 2 ] = 1000.0 ;
rtX . jyci2cli0a [ 3 ] = 1732.0 ; } rtDW . dwvympwnqe = 1 ; } void MdlStart (
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
} } rtB . imaxglwpam [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB .
imaxglwpam [ 1 ] = rtP . pitchrollyawInitial_Value [ 1 ] ; rtB . imaxglwpam [
2 ] = rtP . pitchrollyawInitial_Value [ 2 ] ; rtB . pqvw0y53rd [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . pqvw0y53rd [ 1 ] = rtP . initialOmega_Value
[ 1 ] ; rtB . pqvw0y53rd [ 2 ] = rtP . initialOmega_Value [ 2 ] ; rtB .
lsvistcdke [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . lsvistcdke [ 1 ] = rtP .
speeds_Value [ 1 ] ; rtB . lsvistcdke [ 2 ] = rtP . speeds_Value [ 2 ] ; rtB
. lsvistcdke [ 3 ] = rtP . speeds_Value [ 3 ] ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
real_T Cbo [ 9 ] ; real_T y [ 3 ] ; real_T a [ 3 ] ; static const int16_T b_a
[ 9 ] = { 1800 , - 50 , - 15 , - 50 , 1600 , 25 , - 15 , 25 , 1200 } ; static
const real_T b [ 3 ] = { 0.0 , 0.0 , 0.0010741000000000001 } ; static const
int8_T c [ 3 ] = { 0 , 0 , 1 } ; int32_T r2 ; int32_T r3 ; real_T maxval ;
real_T a21 ; int32_T rtemp ; int32_T i ; real_T d [ 9 ] ; real_T tmp [ 9 ] ;
real_T d_p [ 9 ] ; real_T tmp_p [ 9 ] ; real_T tmp_e [ 3 ] ; if ( rtDW .
kpaaqs1xgt != 0 ) { rtX . affdlhtmjo [ 0 ] = rtB . imaxglwpam [ 0 ] ; rtX .
affdlhtmjo [ 1 ] = rtB . imaxglwpam [ 1 ] ; rtX . affdlhtmjo [ 2 ] = rtB .
imaxglwpam [ 2 ] ; } rtB . nndjph3uih [ 0 ] = rtX . affdlhtmjo [ 0 ] ; rtB .
nndjph3uih [ 1 ] = rtX . affdlhtmjo [ 1 ] ; rtB . nndjph3uih [ 2 ] = rtX .
affdlhtmjo [ 2 ] ; rtB . myuvxki5uz [ 0 ] = 0.0 ; rtB . myuvxki5uz [ 1 ] =
0.0 ; rtB . myuvxki5uz [ 2 ] = 0.0 ; rtB . myuvxki5uz [ 3 ] = 0.0 ; if ( rtDW
. kgvzigyyvz != 0 ) { rtX . olx0irmnay [ 0 ] = rtB . pqvw0y53rd [ 0 ] ; rtX .
olx0irmnay [ 1 ] = rtB . pqvw0y53rd [ 1 ] ; rtX . olx0irmnay [ 2 ] = rtB .
pqvw0y53rd [ 2 ] ; } if ( rtDW . dwvympwnqe != 0 ) { rtX . jyci2cli0a [ 0 ] =
rtB . lsvistcdke [ 0 ] ; rtX . jyci2cli0a [ 1 ] = rtB . lsvistcdke [ 1 ] ;
rtX . jyci2cli0a [ 2 ] = rtB . lsvistcdke [ 2 ] ; rtX . jyci2cli0a [ 3 ] =
rtB . lsvistcdke [ 3 ] ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX .
jyci2cli0a [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX . jyci2cli0a [ 0 ] =
rtP . Integrator2_UpperSat ; } else { if ( rtX . jyci2cli0a [ 0 ] <= rtP .
Integrator2_LowerSat ) { rtX . jyci2cli0a [ 0 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . jyci2cli0a [ 1 ] >= rtP . Integrator2_UpperSat ) { rtX .
jyci2cli0a [ 1 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
jyci2cli0a [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX . jyci2cli0a [ 1 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . jyci2cli0a [ 2 ] >= rtP .
Integrator2_UpperSat ) { rtX . jyci2cli0a [ 2 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . jyci2cli0a [ 2 ] <= rtP . Integrator2_LowerSat ) { rtX
. jyci2cli0a [ 2 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . jyci2cli0a [
3 ] >= rtP . Integrator2_UpperSat ) { rtX . jyci2cli0a [ 3 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . jyci2cli0a [ 3 ] <= rtP .
Integrator2_LowerSat ) { rtX . jyci2cli0a [ 3 ] = rtP . Integrator2_LowerSat
; } } } d [ 1 ] = 0.0 ; d [ 4 ] = muDoubleScalarCos ( rtB . nndjph3uih [ 2 ]
) ; d [ 7 ] = muDoubleScalarSin ( rtB . nndjph3uih [ 2 ] ) ; d [ 2 ] = 0.0 ;
d [ 5 ] = - muDoubleScalarSin ( rtB . nndjph3uih [ 2 ] ) ; d [ 8 ] =
muDoubleScalarCos ( rtB . nndjph3uih [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos
( rtB . nndjph3uih [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = -
muDoubleScalarSin ( rtB . nndjph3uih [ 1 ] ) ; d [ 0 ] = 1.0 ; tmp [ 1 ] =
0.0 ; d [ 3 ] = 0.0 ; tmp [ 4 ] = 1.0 ; d [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0 ; tmp
[ 2 ] = muDoubleScalarSin ( rtB . nndjph3uih [ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp
[ 8 ] = muDoubleScalarCos ( rtB . nndjph3uih [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtB . nndjph3uih [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . nndjph3uih [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . nndjph3uih [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . nndjph3uih [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_p [ i + 3 * r2 ] =
0.0 ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d [ i ] ; d_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * d [ i + 3 ] ; d_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
d [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { maxval = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { Cbo [ i + 3 * r2 ] = 0.0
; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * d_p [ i ] ; Cbo [ i + 3 * r2 ] +=
tmp_p [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; maxval += Cbo [ 3 * r2 + i ] * b [ r2 ] ; } tmp_e [ i ]
= rtX . olx0irmnay [ i ] - maxval ; } for ( i = 0 ; i < 3 ; i ++ ) { a [ i ]
= rtX . olx0irmnay [ i ] - ( ( Cbo [ i + 3 ] * 0.0 + Cbo [ i ] * 0.0 ) + Cbo
[ i + 6 ] * 0.0010741000000000001 ) ; y [ i ] = ( real_T ) b_a [ i + 6 ] *
tmp_e [ 2 ] + ( ( real_T ) b_a [ i + 3 ] * tmp_e [ 1 ] + ( real_T ) b_a [ i ]
* tmp_e [ 0 ] ) ; } rtB . bolfbkf5bm [ 0 ] = ( ( ( rtB . myuvxki5uz [ 0 ] -
0.57735026918962584 * rtB . myuvxki5uz [ 3 ] ) * rtP . eachwheelInertia_Value
+ ( rtX . jyci2cli0a [ 2 ] * rtX . olx0irmnay [ 1 ] - rtX . jyci2cli0a [ 1 ]
* rtX . olx0irmnay [ 2 ] ) * rtP . eachwheelInertia_Value ) + ( rtP .
disturbTorques_Value [ 0 ] + rtP . magTorq_Value ) ) - ( a [ 1 ] * y [ 2 ] -
a [ 2 ] * y [ 1 ] ) ; rtB . bolfbkf5bm [ 1 ] = ( ( ( ( rtB . myuvxki5uz [ 1 ]
- 0.57735026918962584 * rtB . myuvxki5uz [ 3 ] ) * rtP .
eachwheelInertia_Value + ( rtX . jyci2cli0a [ 0 ] * rtX . olx0irmnay [ 2 ] -
rtX . jyci2cli0a [ 2 ] * rtX . olx0irmnay [ 0 ] ) * rtP .
eachwheelInertia_Value ) + ( rtP . disturbTorques_Value [ 1 ] + rtP .
magTorq_Value ) ) - ( a [ 2 ] * y [ 0 ] - a [ 0 ] * y [ 2 ] ) ) - rtB .
bolfbkf5bm [ 0 ] * 0.031064799739498536 ; rtB . bolfbkf5bm [ 2 ] = ( ( ( ( (
rtB . myuvxki5uz [ 2 ] - 0.57735026918962584 * rtB . myuvxki5uz [ 3 ] ) * rtP
. eachwheelInertia_Value + ( rtX . jyci2cli0a [ 1 ] * rtX . olx0irmnay [ 0 ]
- rtX . jyci2cli0a [ 0 ] * rtX . olx0irmnay [ 1 ] ) * rtP .
eachwheelInertia_Value ) + ( rtP . disturbTorques_Value [ 2 ] + rtP .
magTorq_Value ) ) - ( a [ 0 ] * y [ 1 ] - a [ 1 ] * y [ 0 ] ) ) - rtB .
bolfbkf5bm [ 0 ] * 0.01185281667209378 ) - rtB . bolfbkf5bm [ 1 ] * -
0.020833333333333332 ; rtB . bolfbkf5bm [ 2 ] /= 0.00083333333333333339 ; rtB
. bolfbkf5bm [ 0 ] -= rtB . bolfbkf5bm [ 2 ] * 6.5912368419718371E-6 ; rtB .
bolfbkf5bm [ 1 ] -= rtB . bolfbkf5bm [ 2 ] * - 1.3025073266037122E-5 ; rtB .
bolfbkf5bm [ 1 ] /= 0.00062520351676978187 ; rtB . bolfbkf5bm [ 0 ] -= rtB .
bolfbkf5bm [ 1 ] * 1.7274835019893224E-5 ; rtB . bolfbkf5bm [ 0 ] /=
0.000556090339057569 ; Cbo [ 0 ] = - muDoubleScalarSin ( rtB . nndjph3uih [ 1
] ) ; Cbo [ 3 ] = 0.0 ; Cbo [ 6 ] = 1.0 ; Cbo [ 1 ] = muDoubleScalarCos ( rtB
. nndjph3uih [ 1 ] ) * muDoubleScalarSin ( rtB . nndjph3uih [ 2 ] ) ; Cbo [ 4
] = muDoubleScalarCos ( rtB . nndjph3uih [ 2 ] ) ; Cbo [ 7 ] = 0.0 ; Cbo [ 2
] = muDoubleScalarCos ( rtB . nndjph3uih [ 1 ] ) * muDoubleScalarCos ( rtB .
nndjph3uih [ 2 ] ) ; Cbo [ 5 ] = - muDoubleScalarSin ( rtB . nndjph3uih [ 2 ]
) ; Cbo [ 8 ] = 0.0 ; i = 0 ; r2 = 1 ; r3 = 2 ; maxval = muDoubleScalarAbs (
Cbo [ 0 ] ) ; a21 = muDoubleScalarAbs ( Cbo [ 1 ] ) ; if ( a21 > maxval ) {
maxval = a21 ; i = 1 ; r2 = 0 ; } if ( muDoubleScalarAbs ( Cbo [ 2 ] ) >
maxval ) { i = 2 ; r2 = 1 ; r3 = 0 ; } Cbo [ r2 ] /= Cbo [ i ] ; Cbo [ r3 ]
/= Cbo [ i ] ; Cbo [ 3 + r2 ] -= Cbo [ 3 + i ] * Cbo [ r2 ] ; Cbo [ 3 + r3 ]
-= Cbo [ 3 + i ] * Cbo [ r3 ] ; Cbo [ 6 + r2 ] -= Cbo [ 6 + i ] * Cbo [ r2 ]
; Cbo [ 6 + r3 ] -= Cbo [ 6 + i ] * Cbo [ r3 ] ; if ( muDoubleScalarAbs ( Cbo
[ 3 + r3 ] ) > muDoubleScalarAbs ( Cbo [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3
; r3 = rtemp ; } Cbo [ 3 + r3 ] /= Cbo [ 3 + r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 3
+ r3 ] * Cbo [ 6 + r2 ] ; rtB . f5dkugssxf [ 0 ] = rtX . olx0irmnay [ i ] ;
rtB . f5dkugssxf [ 1 ] = rtX . olx0irmnay [ r2 ] - rtB . f5dkugssxf [ 0 ] *
Cbo [ r2 ] ; rtB . f5dkugssxf [ 2 ] = ( rtX . olx0irmnay [ r3 ] - rtB .
f5dkugssxf [ 0 ] * Cbo [ r3 ] ) - Cbo [ 3 + r3 ] * rtB . f5dkugssxf [ 1 ] ;
rtB . f5dkugssxf [ 2 ] /= Cbo [ 6 + r3 ] ; rtB . f5dkugssxf [ 0 ] -= Cbo [ 6
+ i ] * rtB . f5dkugssxf [ 2 ] ; rtB . f5dkugssxf [ 1 ] -= Cbo [ 6 + r2 ] *
rtB . f5dkugssxf [ 2 ] ; rtB . f5dkugssxf [ 1 ] /= Cbo [ 3 + r2 ] ; rtB .
f5dkugssxf [ 0 ] -= Cbo [ 3 + i ] * rtB . f5dkugssxf [ 1 ] ; rtB . f5dkugssxf
[ 0 ] /= Cbo [ i ] ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T
tid ) { rtB . imaxglwpam [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB
. pqvw0y53rd [ 0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . imaxglwpam [ 1 ]
= rtP . pitchrollyawInitial_Value [ 1 ] ; rtB . pqvw0y53rd [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . imaxglwpam [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . pqvw0y53rd [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . lsvistcdke [ 0 ] = rtP . speeds_Value [ 0 ]
; rtB . lsvistcdke [ 1 ] = rtP . speeds_Value [ 1 ] ; rtB . lsvistcdke [ 2 ]
= rtP . speeds_Value [ 2 ] ; rtB . lsvistcdke [ 3 ] = rtP . speeds_Value [ 3
] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { rtDW .
kpaaqs1xgt = 0 ; rtDW . kgvzigyyvz = 0 ; rtDW . dwvympwnqe = 0 ; if ( rtX .
jyci2cli0a [ 0 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . gvver4kgdc
[ 0 ] ) { case 3 : if ( rtB . myuvxki5uz [ 0 ] < 0.0 ) {
ssSetSolverNeedsReset ( rtS ) ; rtDW . gvver4kgdc [ 0 ] = 1 ; } break ; case
1 : if ( rtB . myuvxki5uz [ 0 ] >= 0.0 ) { rtDW . gvver4kgdc [ 0 ] = 3 ;
ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . myuvxki5uz [ 0 ] < 0.0 ) { rtDW . gvver4kgdc [ 0 ] = 1 ; }
else { rtDW . gvver4kgdc [ 0 ] = 3 ; } break ; } } else if ( rtX . jyci2cli0a
[ 0 ] == rtP . Integrator2_LowerSat ) { switch ( rtDW . gvver4kgdc [ 0 ] ) {
case 4 : if ( rtB . myuvxki5uz [ 0 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . gvver4kgdc [ 0 ] = 2 ; } break ; case 2 : if ( rtB . myuvxki5uz [ 0
] <= 0.0 ) { rtDW . gvver4kgdc [ 0 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 0 ]
> 0.0 ) { rtDW . gvver4kgdc [ 0 ] = 2 ; } else { rtDW . gvver4kgdc [ 0 ] = 4
; } break ; } } else { rtDW . gvver4kgdc [ 0 ] = 0 ; } if ( rtX . jyci2cli0a
[ 1 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . gvver4kgdc [ 1 ] ) {
case 3 : if ( rtB . myuvxki5uz [ 1 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . gvver4kgdc [ 1 ] = 1 ; } break ; case 1 : if ( rtB . myuvxki5uz [ 1
] >= 0.0 ) { rtDW . gvver4kgdc [ 1 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 1 ]
< 0.0 ) { rtDW . gvver4kgdc [ 1 ] = 1 ; } else { rtDW . gvver4kgdc [ 1 ] = 3
; } break ; } } else if ( rtX . jyci2cli0a [ 1 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . gvver4kgdc [ 1 ] ) { case 4 : if (
rtB . myuvxki5uz [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
gvver4kgdc [ 1 ] = 2 ; } break ; case 2 : if ( rtB . myuvxki5uz [ 1 ] <= 0.0
) { rtDW . gvver4kgdc [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 1 ] > 0.0 )
{ rtDW . gvver4kgdc [ 1 ] = 2 ; } else { rtDW . gvver4kgdc [ 1 ] = 4 ; }
break ; } } else { rtDW . gvver4kgdc [ 1 ] = 0 ; } if ( rtX . jyci2cli0a [ 2
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . gvver4kgdc [ 2 ] ) { case
3 : if ( rtB . myuvxki5uz [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . gvver4kgdc [ 2 ] = 1 ; } break ; case 1 : if ( rtB . myuvxki5uz [ 2 ]
>= 0.0 ) { rtDW . gvver4kgdc [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 2 ]
< 0.0 ) { rtDW . gvver4kgdc [ 2 ] = 1 ; } else { rtDW . gvver4kgdc [ 2 ] = 3
; } break ; } } else if ( rtX . jyci2cli0a [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . gvver4kgdc [ 2 ] ) { case 4 : if (
rtB . myuvxki5uz [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
gvver4kgdc [ 2 ] = 2 ; } break ; case 2 : if ( rtB . myuvxki5uz [ 2 ] <= 0.0
) { rtDW . gvver4kgdc [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 2 ] > 0.0 )
{ rtDW . gvver4kgdc [ 2 ] = 2 ; } else { rtDW . gvver4kgdc [ 2 ] = 4 ; }
break ; } } else { rtDW . gvver4kgdc [ 2 ] = 0 ; } if ( rtX . jyci2cli0a [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . gvver4kgdc [ 3 ] ) { case
3 : if ( rtB . myuvxki5uz [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . gvver4kgdc [ 3 ] = 1 ; } break ; case 1 : if ( rtB . myuvxki5uz [ 3 ]
>= 0.0 ) { rtDW . gvver4kgdc [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 3 ]
< 0.0 ) { rtDW . gvver4kgdc [ 3 ] = 1 ; } else { rtDW . gvver4kgdc [ 3 ] = 3
; } break ; } } else if ( rtX . jyci2cli0a [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . gvver4kgdc [ 3 ] ) { case 4 : if (
rtB . myuvxki5uz [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
gvver4kgdc [ 3 ] = 2 ; } break ; case 2 : if ( rtB . myuvxki5uz [ 3 ] <= 0.0
) { rtDW . gvver4kgdc [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . myuvxki5uz [ 3 ] > 0.0 )
{ rtDW . gvver4kgdc [ 3 ] = 2 ; } else { rtDW . gvver4kgdc [ 3 ] = 4 ; }
break ; } } else { rtDW . gvver4kgdc [ 3 ] = 0 ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> affdlhtmjo [ 0 ] = rtB . f5dkugssxf [ 0 ] ; _rtXdot ->
olx0irmnay [ 0 ] = rtB . bolfbkf5bm [ 0 ] ; _rtXdot -> affdlhtmjo [ 1 ] = rtB
. f5dkugssxf [ 1 ] ; _rtXdot -> olx0irmnay [ 1 ] = rtB . bolfbkf5bm [ 1 ] ;
_rtXdot -> affdlhtmjo [ 2 ] = rtB . f5dkugssxf [ 2 ] ; _rtXdot -> olx0irmnay
[ 2 ] = rtB . bolfbkf5bm [ 2 ] ; if ( ( rtDW . gvver4kgdc [ 0 ] != 3 ) && (
rtDW . gvver4kgdc [ 0 ] != 4 ) ) { _rtXdot -> jyci2cli0a [ 0 ] = rtB .
myuvxki5uz [ 0 ] ; _rtXdis -> jyci2cli0a [ 0 ] = false ; } else { _rtXdot ->
jyci2cli0a [ 0 ] = 0.0 ; if ( ( rtDW . gvver4kgdc [ 0 ] == 3 ) || ( rtDW .
gvver4kgdc [ 0 ] == 4 ) ) { _rtXdis -> jyci2cli0a [ 0 ] = true ; } } if ( (
rtDW . gvver4kgdc [ 1 ] != 3 ) && ( rtDW . gvver4kgdc [ 1 ] != 4 ) ) {
_rtXdot -> jyci2cli0a [ 1 ] = rtB . myuvxki5uz [ 1 ] ; _rtXdis -> jyci2cli0a
[ 1 ] = false ; } else { _rtXdot -> jyci2cli0a [ 1 ] = 0.0 ; if ( ( rtDW .
gvver4kgdc [ 1 ] == 3 ) || ( rtDW . gvver4kgdc [ 1 ] == 4 ) ) { _rtXdis ->
jyci2cli0a [ 1 ] = true ; } } if ( ( rtDW . gvver4kgdc [ 2 ] != 3 ) && ( rtDW
. gvver4kgdc [ 2 ] != 4 ) ) { _rtXdot -> jyci2cli0a [ 2 ] = rtB . myuvxki5uz
[ 2 ] ; _rtXdis -> jyci2cli0a [ 2 ] = false ; } else { _rtXdot -> jyci2cli0a
[ 2 ] = 0.0 ; if ( ( rtDW . gvver4kgdc [ 2 ] == 3 ) || ( rtDW . gvver4kgdc [
2 ] == 4 ) ) { _rtXdis -> jyci2cli0a [ 2 ] = true ; } } if ( ( rtDW .
gvver4kgdc [ 3 ] != 3 ) && ( rtDW . gvver4kgdc [ 3 ] != 4 ) ) { _rtXdot ->
jyci2cli0a [ 3 ] = rtB . myuvxki5uz [ 3 ] ; _rtXdis -> jyci2cli0a [ 3 ] =
false ; } else { _rtXdot -> jyci2cli0a [ 3 ] = 0.0 ; if ( ( rtDW . gvver4kgdc
[ 3 ] == 3 ) || ( rtDW . gvver4kgdc [ 3 ] == 4 ) ) { _rtXdis -> jyci2cli0a [
3 ] = true ; } } } void MdlProjection ( void ) { } void MdlZeroCrossings (
void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector (
rtS ) ) ; if ( ( rtDW . gvver4kgdc [ 0 ] == 1 ) && ( rtX . jyci2cli0a [ 0 ]
>= rtP . Integrator2_UpperSat ) ) { _rtZCSV -> friquz4qw4 [ 0 ] = 0.0 ; }
else { _rtZCSV -> friquz4qw4 [ 0 ] = rtX . jyci2cli0a [ 0 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . gvver4kgdc [ 0 ] == 2 ) && ( rtX .
jyci2cli0a [ 0 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> lfel3hyyxk [
0 ] = 0.0 ; } else { _rtZCSV -> lfel3hyyxk [ 0 ] = rtX . jyci2cli0a [ 0 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . gvver4kgdc [ 0 ] == 3 ) || (
rtDW . gvver4kgdc [ 0 ] == 4 ) ) { _rtZCSV -> mnjyl0hqhi [ 0 ] = rtB .
myuvxki5uz [ 0 ] ; } else { _rtZCSV -> mnjyl0hqhi [ 0 ] = 0.0 ; } if ( ( rtDW
. gvver4kgdc [ 1 ] == 1 ) && ( rtX . jyci2cli0a [ 1 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> friquz4qw4 [ 1 ] = 0.0 ; } else {
_rtZCSV -> friquz4qw4 [ 1 ] = rtX . jyci2cli0a [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . gvver4kgdc [ 1 ] == 2 ) && ( rtX .
jyci2cli0a [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> lfel3hyyxk [
1 ] = 0.0 ; } else { _rtZCSV -> lfel3hyyxk [ 1 ] = rtX . jyci2cli0a [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . gvver4kgdc [ 1 ] == 3 ) || (
rtDW . gvver4kgdc [ 1 ] == 4 ) ) { _rtZCSV -> mnjyl0hqhi [ 1 ] = rtB .
myuvxki5uz [ 1 ] ; } else { _rtZCSV -> mnjyl0hqhi [ 1 ] = 0.0 ; } if ( ( rtDW
. gvver4kgdc [ 2 ] == 1 ) && ( rtX . jyci2cli0a [ 2 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> friquz4qw4 [ 2 ] = 0.0 ; } else {
_rtZCSV -> friquz4qw4 [ 2 ] = rtX . jyci2cli0a [ 2 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . gvver4kgdc [ 2 ] == 2 ) && ( rtX .
jyci2cli0a [ 2 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> lfel3hyyxk [
2 ] = 0.0 ; } else { _rtZCSV -> lfel3hyyxk [ 2 ] = rtX . jyci2cli0a [ 2 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . gvver4kgdc [ 2 ] == 3 ) || (
rtDW . gvver4kgdc [ 2 ] == 4 ) ) { _rtZCSV -> mnjyl0hqhi [ 2 ] = rtB .
myuvxki5uz [ 2 ] ; } else { _rtZCSV -> mnjyl0hqhi [ 2 ] = 0.0 ; } if ( ( rtDW
. gvver4kgdc [ 3 ] == 1 ) && ( rtX . jyci2cli0a [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> friquz4qw4 [ 3 ] = 0.0 ; } else {
_rtZCSV -> friquz4qw4 [ 3 ] = rtX . jyci2cli0a [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . gvver4kgdc [ 3 ] == 2 ) && ( rtX .
jyci2cli0a [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> lfel3hyyxk [
3 ] = 0.0 ; } else { _rtZCSV -> lfel3hyyxk [ 3 ] = rtX . jyci2cli0a [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . gvver4kgdc [ 3 ] == 3 ) || (
rtDW . gvver4kgdc [ 3 ] == 4 ) ) { _rtZCSV -> mnjyl0hqhi [ 3 ] = rtB .
myuvxki5uz [ 3 ] ; } else { _rtZCSV -> mnjyl0hqhi [ 3 ] = 0.0 ; } } void
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
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 19 ) ;
ssSetNumBlockIO ( rtS , 7 ) ; ssSetNumBlockParams ( rtS , 20 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 252004669U ) ; ssSetChecksumVal ( rtS ,
1 , 3808634814U ) ; ssSetChecksumVal ( rtS , 2 , 849449876U ) ;
ssSetChecksumVal ( rtS , 3 , 1748155767U ) ; } SimStruct *
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
mainModel_matlab2013a_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_matlab2013a" ) ; ssSetPath ( rtS , "mainModel_matlab2013a" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 0.1 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 3 , 3 , 4 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 3 , 3 , 4 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"mainModel_matlab2013a/Integrator1" , "mainModel_matlab2013a/Integrator" ,
"mainModel_matlab2013a/Integrator2" } ; static const char_T *
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . affdlhtmjo [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . olx0irmnay [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jyci2cli0a [ 0 ] ; }
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
real_T absTol [ 10 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 10 ] =
{ 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static uint8_T
zcAttributes [ 12 ] = { ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.002 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode45" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
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
ssSetChecksumVal ( rtS , 0 , 252004669U ) ; ssSetChecksumVal ( rtS , 1 ,
3808634814U ) ; ssSetChecksumVal ( rtS , 2 , 849449876U ) ; ssSetChecksumVal
( rtS , 3 , 1748155767U ) ; { static const sysRanDType rtAlwaysEnabled =
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
