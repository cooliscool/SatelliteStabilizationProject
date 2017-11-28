#include "__cf_mainModel_withGravityGradientTorq.h"
#include "rt_logging_mmi.h"
#include "mainModel_withGravityGradientTorq_capi.h"
#include <math.h>
#include "mainModel_withGravityGradientTorq.h"
#include "mainModel_withGravityGradientTorq_private.h"
#include "mainModel_withGravityGradientTorq_dt.h"
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
 "slprj//raccel//mainModel_withGravityGradientTorq//mainModel_withGravityGradientTorq_Jpattern.mat"
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
rtX . ep0nmfhrpv [ 0 ] = 0.0 ; rtX . ep0nmfhrpv [ 1 ] = 0.0 ; rtX .
ep0nmfhrpv [ 2 ] = 0.0 ; rtX . lfre3u0ztj [ 0 ] = 0.0 ; rtX . lfre3u0ztj [ 1
] = 0.0 ; rtX . lfre3u0ztj [ 2 ] = 0.0 ; } rtDW . g2pyfvrqkr = 1 ; rtDW .
l2ffbaetqv = ( rtInf ) ; rtDW . avwj35pia3 = ( rtInf ) ; rtX . gj4ahlupaj =
rtP . Integrator_IC ; rtDW . iopcbnf0vh = ( rtInf ) ; rtDW . iqx524yuyw = (
rtInf ) ; rtX . lwlapfcycq = rtP . Integrator_IC_hsiqnplk4j ; rtDW .
iaevx1nlny = ( rtInf ) ; rtDW . a154qpijg4 = ( rtInf ) ; rtX . jq5lewmfbj =
rtP . Integrator_IC_mi1nfze151 ; rtDW . lk3hnbe0hc = 1 ; rtX . j0j4s1drzg =
rtP . Integrator3_IC ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . oyvmzo51w4 [
0 ] = 104.71975511965977 ; rtX . oyvmzo51w4 [ 1 ] = 104.71975511965977 ; rtX
. oyvmzo51w4 [ 2 ] = 104.71975511965977 ; rtX . oyvmzo51w4 [ 3 ] =
181.37461586725072 ; } rtDW . mctj2hhha3 = 1 ; } void MdlStart ( void ) { {
void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL )
; void * * pOSigstreamManagerAddr = ( NULL ) ; const char *
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
} } rtB . b3df0zasta [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB .
e1tpxn0dv0 [ 0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . b3df0zasta [ 1 ] =
rtP . pitchrollyawInitial_Value [ 1 ] ; rtB . e1tpxn0dv0 [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . b3df0zasta [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . e1tpxn0dv0 [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . oon4uvp3pu [ 0 ] = rtP . initialrpms_Value [
0 ] ; rtB . oon4uvp3pu [ 1 ] = rtP . initialrpms_Value [ 1 ] ; rtB .
oon4uvp3pu [ 2 ] = rtP . initialrpms_Value [ 2 ] ; rtB . oon4uvp3pu [ 3 ] =
rtP . initialrpms_Value [ 3 ] ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
real_T * lastU ; static const real_T a [ 12 ] = { 0.83333333333333348 , -
0.16666666666666671 , - 0.16666666666666671 , - 0.28867513459481292 , -
0.16666666666666671 , 0.83333333333333348 , - 0.16666666666666671 , -
0.28867513459481292 , - 0.16666666666666671 , - 0.16666666666666671 ,
0.83333333333333348 , - 0.28867513459481292 } ; real_T rb [ 3 ] ; real_T b_y
[ 3 ] ; static const int16_T a_p [ 9 ] = { 1800 , - 50 , - 15 , - 50 , 1600 ,
25 , - 15 , 25 , 1200 } ; static const int8_T c [ 3 ] = { 0 , 0 , 1 } ;
real_T Cbo [ 9 ] ; real_T temp1 [ 3 ] ; real_T y [ 3 ] ; real_T b_y_p [ 3 ] ;
static const real_T b [ 3 ] = { 0.0 , 0.0 , 0.0010741000000000001 } ; static
const int16_T a_e [ 9 ] = { 1800 , - 50 , - 15 , - 50 , 1600 , 25 , - 15 , 25
, 1200 } ; static const int8_T c_p [ 3 ] = { 0 , 0 , 1 } ; static const
int8_T d [ 3 ] = { 1 , 0 , 0 } ; static const int8_T e [ 3 ] = { 0 , 1 , 0 }
; int32_T r2 ; int32_T r3 ; real_T maxval ; real_T a21 ; int32_T rtemp ;
real_T d_p [ 9 ] ; real_T tmp [ 9 ] ; real_T d_e [ 9 ] ; real_T tmp_p [ 9 ] ;
int32_T i ; real_T B_idx_2 ; if ( rtDW . g2pyfvrqkr != 0 ) { rtX . ep0nmfhrpv
[ 0 ] = rtB . b3df0zasta [ 0 ] ; rtX . ep0nmfhrpv [ 1 ] = rtB . b3df0zasta [
1 ] ; rtX . ep0nmfhrpv [ 2 ] = rtB . b3df0zasta [ 2 ] ; } rtB . ehgllpce2p [
0 ] = rtX . ep0nmfhrpv [ 0 ] ; rtB . bjwwtfmyww [ 0 ] = rtP .
pitchrollyawdesired_Value [ 0 ] - rtB . ehgllpce2p [ 0 ] ; rtB . ehgllpce2p [
1 ] = rtX . ep0nmfhrpv [ 1 ] ; rtB . bjwwtfmyww [ 1 ] = rtP .
pitchrollyawdesired_Value [ 1 ] - rtB . ehgllpce2p [ 1 ] ; rtB . ehgllpce2p [
2 ] = rtX . ep0nmfhrpv [ 2 ] ; rtB . bjwwtfmyww [ 2 ] = rtP .
pitchrollyawdesired_Value [ 2 ] - rtB . ehgllpce2p [ 2 ] ; rtB . ll40aiwkwf =
rtP . Gain1_Gain * rtB . bjwwtfmyww [ 2 ] ; if ( ( rtDW . l2ffbaetqv >=
ssGetT ( rtS ) ) && ( rtDW . avwj35pia3 >= ssGetT ( rtS ) ) ) { rtB .
abbitn03eu = 0.0 ; } else { maxval = rtDW . l2ffbaetqv ; lastU = & rtDW .
ibjngjvofk ; if ( rtDW . l2ffbaetqv < rtDW . avwj35pia3 ) { if ( rtDW .
avwj35pia3 < ssGetT ( rtS ) ) { maxval = rtDW . avwj35pia3 ; lastU = & rtDW .
hj3jtxbkf2 ; } } else { if ( rtDW . l2ffbaetqv >= ssGetT ( rtS ) ) { maxval =
rtDW . avwj35pia3 ; lastU = & rtDW . hj3jtxbkf2 ; } } rtB . abbitn03eu = (
rtB . ll40aiwkwf - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; } rtB .
d5hbg0jkef = rtX . gj4ahlupaj ; rtB . mu0naw1zj5 = rtP . Gain_Gain * rtB .
bjwwtfmyww [ 2 ] ; rtB . g0chwgh3go = ( rtB . abbitn03eu + rtB . d5hbg0jkef )
+ rtB . mu0naw1zj5 ; rtB . fg2zpi0j3m = rtP . Gain1_Gain_jkygvdcm0j * rtB .
bjwwtfmyww [ 1 ] ; if ( ( rtDW . iopcbnf0vh >= ssGetT ( rtS ) ) && ( rtDW .
iqx524yuyw >= ssGetT ( rtS ) ) ) { rtB . i0bn02w1pb = 0.0 ; } else { maxval =
rtDW . iopcbnf0vh ; lastU = & rtDW . ou2fve2vpo ; if ( rtDW . iopcbnf0vh <
rtDW . iqx524yuyw ) { if ( rtDW . iqx524yuyw < ssGetT ( rtS ) ) { maxval =
rtDW . iqx524yuyw ; lastU = & rtDW . n1xydktaww ; } } else { if ( rtDW .
iopcbnf0vh >= ssGetT ( rtS ) ) { maxval = rtDW . iqx524yuyw ; lastU = & rtDW
. n1xydktaww ; } } rtB . i0bn02w1pb = ( rtB . fg2zpi0j3m - * lastU ) / (
ssGetT ( rtS ) - maxval ) ; } rtB . gshuyvitub = rtX . lwlapfcycq ; rtB .
gu20ekck0c = rtP . Gain_Gain_j0nwylexu1 * rtB . bjwwtfmyww [ 1 ] ; rtB .
kiybllzdza = ( rtB . i0bn02w1pb + rtB . gshuyvitub ) + rtB . gu20ekck0c ; rtB
. hlrkn22nxk = rtP . Gain1_Gain_jyeaph4bso * rtB . bjwwtfmyww [ 0 ] ; if ( (
rtDW . iaevx1nlny >= ssGetT ( rtS ) ) && ( rtDW . a154qpijg4 >= ssGetT ( rtS
) ) ) { rtB . nlysd2yp3g = 0.0 ; } else { maxval = rtDW . iaevx1nlny ; lastU
= & rtDW . dsmbjm0mq3 ; if ( rtDW . iaevx1nlny < rtDW . a154qpijg4 ) { if (
rtDW . a154qpijg4 < ssGetT ( rtS ) ) { maxval = rtDW . a154qpijg4 ; lastU = &
rtDW . b0kr51lh3l ; } } else { if ( rtDW . iaevx1nlny >= ssGetT ( rtS ) ) {
maxval = rtDW . a154qpijg4 ; lastU = & rtDW . b0kr51lh3l ; } } rtB .
nlysd2yp3g = ( rtB . hlrkn22nxk - * lastU ) / ( ssGetT ( rtS ) - maxval ) ; }
rtB . mwvkdoiuaf = rtX . jq5lewmfbj ; rtB . e2ymaervjk = rtP .
Gain_Gain_hvers1lhk2 * rtB . bjwwtfmyww [ 0 ] ; rtB . ol0bfpbs1q = ( rtB .
nlysd2yp3g + rtB . mwvkdoiuaf ) + rtB . e2ymaervjk ; for ( i = 0 ; i < 4 ; i
++ ) { rtB . kcc3jbqzn2 [ i ] = ( ( a [ i + 4 ] * rtB . kiybllzdza + a [ i ]
* rtB . g0chwgh3go ) + a [ i + 8 ] * rtB . ol0bfpbs1q ) / rtP .
eachwheelInertia_Value ; } rtB . j2jysucitj [ 0 ] = ( rtB . kcc3jbqzn2 [ 0 ]
- 0.57735026918962584 * rtB . kcc3jbqzn2 [ 3 ] ) * rtP .
eachwheelInertia_Value ; rtB . j2jysucitj [ 1 ] = ( rtB . kcc3jbqzn2 [ 1 ] -
0.57735026918962584 * rtB . kcc3jbqzn2 [ 3 ] ) * rtP . eachwheelInertia_Value
; rtB . j2jysucitj [ 2 ] = ( rtB . kcc3jbqzn2 [ 2 ] - 0.57735026918962584 *
rtB . kcc3jbqzn2 [ 3 ] ) * rtP . eachwheelInertia_Value ; if ( rtDW .
lk3hnbe0hc != 0 ) { rtX . lfre3u0ztj [ 0 ] = rtB . e1tpxn0dv0 [ 0 ] ; rtX .
lfre3u0ztj [ 1 ] = rtB . e1tpxn0dv0 [ 1 ] ; rtX . lfre3u0ztj [ 2 ] = rtB .
e1tpxn0dv0 [ 2 ] ; } a21 = rtB . ehgllpce2p [ 1 ] ; d_p [ 1 ] = 0.0 ; d_p [ 4
] = muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 7 ] =
muDoubleScalarSin ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 2 ] = 0.0 ; d_p [ 5 ] =
- muDoubleScalarSin ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 8 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos
( rtB . ehgllpce2p [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = -
muDoubleScalarSin ( rtB . ehgllpce2p [ 1 ] ) ; rtB . pscpolimhb [ 0 ] = rtX .
lfre3u0ztj [ 0 ] ; d_p [ 0 ] = 1.0 ; tmp [ 1 ] = 0.0 ; rtB . pscpolimhb [ 1 ]
= rtX . lfre3u0ztj [ 1 ] ; d_p [ 3 ] = 0.0 ; tmp [ 4 ] = 1.0 ; rtB .
pscpolimhb [ 2 ] = rtX . lfre3u0ztj [ 2 ] ; d_p [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0
; tmp [ 2 ] = muDoubleScalarSin ( rtB . ehgllpce2p [ 1 ] ) ; tmp [ 5 ] = 0.0
; tmp [ 8 ] = muDoubleScalarCos ( rtB . ehgllpce2p [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_e [ i + 3 * r2 ] =
0.0 ; d_e [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d_p [ i ] ; d_e [ i + 3 * r2 ]
+= tmp [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; d_e [ i + 3 * r2 ] += tmp [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c [ i ] ; } for ( i = 0 ; i < 3
; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_p [ r2 + 3 * i ] = 0.0 ; d_p [
r2 + 3 * i ] += tmp_p [ 3 * i ] * d_e [ r2 ] ; d_p [ r2 + 3 * i ] += tmp_p [
3 * i + 1 ] * d_e [ r2 + 3 ] ; d_p [ r2 + 3 * i ] += tmp_p [ 3 * i + 2 ] *
d_e [ r2 + 6 ] ; } } for ( i = 0 ; i < 3 ; i ++ ) { tmp [ 3 * i ] = d_p [ 3 *
i ] * a21 ; tmp [ 1 + 3 * i ] = d_p [ 3 * i + 1 ] * a21 ; tmp [ 2 + 3 * i ] =
d_p [ 3 * i + 2 ] * a21 ; } for ( i = 0 ; i < 3 ; i ++ ) { rb [ i ] = tmp [ i
+ 6 ] * 0.0 + ( tmp [ i + 3 ] * 0.0 + tmp [ i ] ) ; } maxval = 1.1958E+15 /
muDoubleScalarPower ( rtB . ehgllpce2p [ 1 ] , 5.0 ) ; d_p [ 1 ] = 0.0 ; d_p
[ 4 ] = muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 7 ] =
muDoubleScalarSin ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 2 ] = 0.0 ; d_p [ 5 ] =
- muDoubleScalarSin ( rtB . ehgllpce2p [ 2 ] ) ; d_p [ 8 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos
( rtB . ehgllpce2p [ 1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = -
muDoubleScalarSin ( rtB . ehgllpce2p [ 1 ] ) ; for ( i = 0 ; i < 3 ; i ++ ) {
d_p [ 3 * i ] = d [ i ] ; tmp [ 1 + 3 * i ] = e [ i ] ; b_y [ i ] = ( real_T
) a_p [ i + 6 ] * rb [ 2 ] + ( ( real_T ) a_p [ i + 3 ] * rb [ 1 ] + ( real_T
) a_p [ i ] * rb [ 0 ] ) ; } tmp [ 2 ] = muDoubleScalarSin ( rtB . ehgllpce2p
[ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp [ 8 ] = muDoubleScalarCos ( rtB . ehgllpce2p
[ 1 ] ) ; tmp_p [ 0 ] = muDoubleScalarCos ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p
[ 3 ] = muDoubleScalarSin ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ;
tmp_p [ 1 ] = - muDoubleScalarSin ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { d_e [ i + 3 * r2 ] =
0.0 ; d_e [ i + 3 * r2 ] += tmp [ 3 * r2 ] * d_p [ i ] ; d_e [ i + 3 * r2 ]
+= tmp [ 3 * r2 + 1 ] * d_p [ i + 3 ] ; d_e [ i + 3 * r2 ] += tmp [ 3 * r2 +
2 ] * d_p [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = c_p [ i ] ; } for ( i = 0 ; i <
3 ; i ++ ) { a21 = 0.0 ; for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { Cbo [ i + 3 * r2 ]
= 0.0 ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 * r2 ] * d_e [ i ] ; Cbo [ i + 3 * r2
] += tmp_p [ 3 * r2 + 1 ] * d_e [ i + 3 ] ; Cbo [ i + 3 * r2 ] += tmp_p [ 3 *
r2 + 2 ] * d_e [ i + 6 ] ; a21 += Cbo [ 3 * r2 + i ] * b [ r2 ] ; } temp1 [ i
] = rtB . pscpolimhb [ i ] - a21 ; y [ i ] = Cbo [ i + 6 ] *
0.0010741000000000001 + ( Cbo [ i + 3 ] * 0.0 + Cbo [ i ] * 0.0 ) ; } for ( i
= 0 ; i < 3 ; i ++ ) { rtB . gyeenk5wbs [ i ] = rtB . ehgllpce2p [ i ] * rtP
. radToDeg_Value ; b_y_p [ i ] = ( real_T ) a_e [ i + 6 ] * temp1 [ 2 ] + ( (
real_T ) a_e [ i + 3 ] * temp1 [ 1 ] + ( real_T ) a_e [ i ] * temp1 [ 0 ] ) ;
} a21 = ( ( ( rb [ 1 ] * b_y [ 2 ] - rb [ 2 ] * b_y [ 1 ] ) * maxval + rtP .
magTorq_Value [ 0 ] ) - rtB . j2jysucitj [ 0 ] ) - ( temp1 [ 1 ] * b_y_p [ 2
] - temp1 [ 2 ] * b_y_p [ 1 ] ) ; B_idx_2 = ( ( ( rb [ 0 ] * b_y [ 1 ] - rb [
1 ] * b_y [ 0 ] ) * maxval + rtP . magTorq_Value [ 2 ] ) - rtB . j2jysucitj [
2 ] ) - ( temp1 [ 0 ] * b_y_p [ 1 ] - temp1 [ 1 ] * b_y_p [ 0 ] ) ; temp1 [ 1
] = ( ( ( ( rb [ 2 ] * b_y [ 0 ] - rb [ 0 ] * b_y [ 2 ] ) * maxval + rtP .
magTorq_Value [ 1 ] ) - rtB . j2jysucitj [ 1 ] ) - ( temp1 [ 2 ] * b_y_p [ 0
] - temp1 [ 0 ] * b_y_p [ 2 ] ) ) - a21 * - 0.027777777777777776 ; temp1 [ 2
] = ( B_idx_2 - a21 * - 0.0083333333333333332 ) - temp1 [ 1 ] *
0.015377932232841007 ; temp1 [ 2 ] /= 1199.4969591659426 ; temp1 [ 0 ] = a21
- temp1 [ 2 ] * - 15.0 ; temp1 [ 1 ] -= temp1 [ 2 ] * 24.583333333333332 ;
temp1 [ 1 ] /= 1598.6111111111111 ; temp1 [ 0 ] -= temp1 [ 1 ] * - 50.0 ;
temp1 [ 0 ] /= 1800.0 ; rtB . hrirjfhalh [ 0 ] = temp1 [ 0 ] - ( rtB .
pscpolimhb [ 1 ] * y [ 2 ] - rtB . pscpolimhb [ 2 ] * y [ 1 ] ) ; rtB .
hrirjfhalh [ 1 ] = temp1 [ 1 ] - ( rtB . pscpolimhb [ 2 ] * y [ 0 ] - rtB .
pscpolimhb [ 0 ] * y [ 2 ] ) ; rtB . hrirjfhalh [ 2 ] = temp1 [ 2 ] - ( rtB .
pscpolimhb [ 0 ] * y [ 1 ] - rtB . pscpolimhb [ 1 ] * y [ 0 ] ) ; rtB .
ajleipz340 = rtX . j0j4s1drzg ; if ( rtDW . mctj2hhha3 != 0 ) { rtX .
oyvmzo51w4 [ 0 ] = rtB . oon4uvp3pu [ 0 ] ; rtX . oyvmzo51w4 [ 1 ] = rtB .
oon4uvp3pu [ 1 ] ; rtX . oyvmzo51w4 [ 2 ] = rtB . oon4uvp3pu [ 2 ] ; rtX .
oyvmzo51w4 [ 3 ] = rtB . oon4uvp3pu [ 3 ] ; } if ( ssIsMajorTimeStep ( rtS )
) { if ( rtX . oyvmzo51w4 [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX .
oyvmzo51w4 [ 0 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
oyvmzo51w4 [ 0 ] <= rtP . Integrator2_LowerSat ) { rtX . oyvmzo51w4 [ 0 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . oyvmzo51w4 [ 1 ] >= rtP .
Integrator2_UpperSat ) { rtX . oyvmzo51w4 [ 1 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . oyvmzo51w4 [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX
. oyvmzo51w4 [ 1 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . oyvmzo51w4 [
2 ] >= rtP . Integrator2_UpperSat ) { rtX . oyvmzo51w4 [ 2 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . oyvmzo51w4 [ 2 ] <= rtP .
Integrator2_LowerSat ) { rtX . oyvmzo51w4 [ 2 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . oyvmzo51w4 [ 3 ] >= rtP . Integrator2_UpperSat ) { rtX .
oyvmzo51w4 [ 3 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
oyvmzo51w4 [ 3 ] <= rtP . Integrator2_LowerSat ) { rtX . oyvmzo51w4 [ 3 ] =
rtP . Integrator2_LowerSat ; } } } rtB . hp0bpyvmgi [ 0 ] = rtX . oyvmzo51w4
[ 0 ] ; rtB . pgaix3hgw2 [ 0 ] = rtP . speeds2_Value * rtB . hp0bpyvmgi [ 0 ]
; rtB . hp0bpyvmgi [ 1 ] = rtX . oyvmzo51w4 [ 1 ] ; rtB . pgaix3hgw2 [ 1 ] =
rtP . speeds2_Value * rtB . hp0bpyvmgi [ 1 ] ; rtB . hp0bpyvmgi [ 2 ] = rtX .
oyvmzo51w4 [ 2 ] ; rtB . pgaix3hgw2 [ 2 ] = rtP . speeds2_Value * rtB .
hp0bpyvmgi [ 2 ] ; rtB . hp0bpyvmgi [ 3 ] = rtX . oyvmzo51w4 [ 3 ] ; rtB .
pgaix3hgw2 [ 3 ] = rtP . speeds2_Value * rtB . hp0bpyvmgi [ 3 ] ; rtB .
eruyw0qvm2 = rtP . Gain2_Gain * rtB . bjwwtfmyww [ 0 ] ; rtB . ahz4pnrpcr =
rtP . Gain2_Gain_nggjdhdyc1 * rtB . bjwwtfmyww [ 1 ] ; rtB . mgmxosp5d2 = rtP
. Gain2_Gain_cddumad5uc * rtB . bjwwtfmyww [ 2 ] ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { if ( rtB . kcc3jbqzn2 [ 0 ] > 0.0 ) { rtDW . otyjvhje1y [ 0 ] = 1
; } else if ( rtB . kcc3jbqzn2 [ 0 ] < 0.0 ) { rtDW . otyjvhje1y [ 0 ] = - 1
; } else { rtDW . otyjvhje1y [ 0 ] = 0 ; } rtB . e3kbs4mpqn [ 0 ] = rtDW .
otyjvhje1y [ 0 ] ; if ( rtB . kcc3jbqzn2 [ 1 ] > 0.0 ) { rtDW . otyjvhje1y [
1 ] = 1 ; } else if ( rtB . kcc3jbqzn2 [ 1 ] < 0.0 ) { rtDW . otyjvhje1y [ 1
] = - 1 ; } else { rtDW . otyjvhje1y [ 1 ] = 0 ; } rtB . e3kbs4mpqn [ 1 ] =
rtDW . otyjvhje1y [ 1 ] ; if ( rtB . kcc3jbqzn2 [ 2 ] > 0.0 ) { rtDW .
otyjvhje1y [ 2 ] = 1 ; } else if ( rtB . kcc3jbqzn2 [ 2 ] < 0.0 ) { rtDW .
otyjvhje1y [ 2 ] = - 1 ; } else { rtDW . otyjvhje1y [ 2 ] = 0 ; } rtB .
e3kbs4mpqn [ 2 ] = rtDW . otyjvhje1y [ 2 ] ; if ( rtB . kcc3jbqzn2 [ 3 ] >
0.0 ) { rtDW . otyjvhje1y [ 3 ] = 1 ; } else if ( rtB . kcc3jbqzn2 [ 3 ] <
0.0 ) { rtDW . otyjvhje1y [ 3 ] = - 1 ; } else { rtDW . otyjvhje1y [ 3 ] = 0
; } rtB . e3kbs4mpqn [ 3 ] = rtDW . otyjvhje1y [ 3 ] ; } rtB . oxhd25rcd0 = (
( ( rtB . e3kbs4mpqn [ 0 ] * rtB . kcc3jbqzn2 [ 0 ] * rtB . hp0bpyvmgi [ 0 ]
+ rtB . e3kbs4mpqn [ 1 ] * rtB . kcc3jbqzn2 [ 1 ] * rtB . hp0bpyvmgi [ 1 ] )
+ rtB . e3kbs4mpqn [ 2 ] * rtB . kcc3jbqzn2 [ 2 ] * rtB . hp0bpyvmgi [ 2 ] )
+ rtB . e3kbs4mpqn [ 3 ] * rtB . kcc3jbqzn2 [ 3 ] * rtB . hp0bpyvmgi [ 3 ] )
* rtP . eachwheelInertia_Value ; Cbo [ 0 ] = - muDoubleScalarSin ( rtB .
ehgllpce2p [ 1 ] ) ; Cbo [ 3 ] = 0.0 ; Cbo [ 6 ] = 1.0 ; Cbo [ 1 ] =
muDoubleScalarCos ( rtB . ehgllpce2p [ 1 ] ) * muDoubleScalarSin ( rtB .
ehgllpce2p [ 2 ] ) ; Cbo [ 4 ] = muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] )
; Cbo [ 7 ] = 0.0 ; Cbo [ 2 ] = muDoubleScalarCos ( rtB . ehgllpce2p [ 1 ] )
* muDoubleScalarCos ( rtB . ehgllpce2p [ 2 ] ) ; Cbo [ 5 ] = -
muDoubleScalarSin ( rtB . ehgllpce2p [ 2 ] ) ; Cbo [ 8 ] = 0.0 ; i = 0 ; r2 =
1 ; r3 = 2 ; maxval = muDoubleScalarAbs ( Cbo [ 0 ] ) ; a21 =
muDoubleScalarAbs ( Cbo [ 1 ] ) ; if ( a21 > maxval ) { maxval = a21 ; i = 1
; r2 = 0 ; } if ( muDoubleScalarAbs ( Cbo [ 2 ] ) > maxval ) { i = 2 ; r2 = 1
; r3 = 0 ; } Cbo [ r2 ] /= Cbo [ i ] ; Cbo [ r3 ] /= Cbo [ i ] ; Cbo [ 3 + r2
] -= Cbo [ 3 + i ] * Cbo [ r2 ] ; Cbo [ 3 + r3 ] -= Cbo [ 3 + i ] * Cbo [ r3
] ; Cbo [ 6 + r2 ] -= Cbo [ 6 + i ] * Cbo [ r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 6
+ i ] * Cbo [ r3 ] ; if ( muDoubleScalarAbs ( Cbo [ 3 + r3 ] ) >
muDoubleScalarAbs ( Cbo [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 = rtemp ;
} Cbo [ 3 + r3 ] /= Cbo [ 3 + r2 ] ; Cbo [ 6 + r3 ] -= Cbo [ 3 + r3 ] * Cbo [
6 + r2 ] ; rtB . d03arivfzz [ 0 ] = rtB . pscpolimhb [ i ] ; rtB . d03arivfzz
[ 1 ] = rtB . pscpolimhb [ r2 ] - rtB . d03arivfzz [ 0 ] * Cbo [ r2 ] ; rtB .
d03arivfzz [ 2 ] = ( rtB . pscpolimhb [ r3 ] - rtB . d03arivfzz [ 0 ] * Cbo [
r3 ] ) - Cbo [ 3 + r3 ] * rtB . d03arivfzz [ 1 ] ; rtB . d03arivfzz [ 2 ] /=
Cbo [ 6 + r3 ] ; rtB . d03arivfzz [ 0 ] -= Cbo [ 6 + i ] * rtB . d03arivfzz [
2 ] ; rtB . d03arivfzz [ 1 ] -= Cbo [ 6 + r2 ] * rtB . d03arivfzz [ 2 ] ; rtB
. d03arivfzz [ 1 ] /= Cbo [ 3 + r2 ] ; rtB . d03arivfzz [ 0 ] -= Cbo [ 3 + i
] * rtB . d03arivfzz [ 1 ] ; rtB . d03arivfzz [ 0 ] /= Cbo [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB .
b3df0zasta [ 0 ] = rtP . pitchrollyawInitial_Value [ 0 ] ; rtB . e1tpxn0dv0 [
0 ] = rtP . initialOmega_Value [ 0 ] ; rtB . b3df0zasta [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . e1tpxn0dv0 [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . b3df0zasta [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . e1tpxn0dv0 [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; rtB . oon4uvp3pu [ 0 ] = rtP . initialrpms_Value [
0 ] ; rtB . oon4uvp3pu [ 1 ] = rtP . initialrpms_Value [ 1 ] ; rtB .
oon4uvp3pu [ 2 ] = rtP . initialrpms_Value [ 2 ] ; rtB . oon4uvp3pu [ 3 ] =
rtP . initialrpms_Value [ 3 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T * lastU ; rtDW . g2pyfvrqkr = 0 ; if ( rtDW . l2ffbaetqv
== ( rtInf ) ) { rtDW . l2ffbaetqv = ssGetT ( rtS ) ; lastU = & rtDW .
ibjngjvofk ; } else if ( rtDW . avwj35pia3 == ( rtInf ) ) { rtDW . avwj35pia3
= ssGetT ( rtS ) ; lastU = & rtDW . hj3jtxbkf2 ; } else if ( rtDW .
l2ffbaetqv < rtDW . avwj35pia3 ) { rtDW . l2ffbaetqv = ssGetT ( rtS ) ; lastU
= & rtDW . ibjngjvofk ; } else { rtDW . avwj35pia3 = ssGetT ( rtS ) ; lastU =
& rtDW . hj3jtxbkf2 ; } * lastU = rtB . ll40aiwkwf ; if ( rtDW . iopcbnf0vh
== ( rtInf ) ) { rtDW . iopcbnf0vh = ssGetT ( rtS ) ; lastU = & rtDW .
ou2fve2vpo ; } else if ( rtDW . iqx524yuyw == ( rtInf ) ) { rtDW . iqx524yuyw
= ssGetT ( rtS ) ; lastU = & rtDW . n1xydktaww ; } else if ( rtDW .
iopcbnf0vh < rtDW . iqx524yuyw ) { rtDW . iopcbnf0vh = ssGetT ( rtS ) ; lastU
= & rtDW . ou2fve2vpo ; } else { rtDW . iqx524yuyw = ssGetT ( rtS ) ; lastU =
& rtDW . n1xydktaww ; } * lastU = rtB . fg2zpi0j3m ; if ( rtDW . iaevx1nlny
== ( rtInf ) ) { rtDW . iaevx1nlny = ssGetT ( rtS ) ; lastU = & rtDW .
dsmbjm0mq3 ; } else if ( rtDW . a154qpijg4 == ( rtInf ) ) { rtDW . a154qpijg4
= ssGetT ( rtS ) ; lastU = & rtDW . b0kr51lh3l ; } else if ( rtDW .
iaevx1nlny < rtDW . a154qpijg4 ) { rtDW . iaevx1nlny = ssGetT ( rtS ) ; lastU
= & rtDW . dsmbjm0mq3 ; } else { rtDW . a154qpijg4 = ssGetT ( rtS ) ; lastU =
& rtDW . b0kr51lh3l ; } * lastU = rtB . hlrkn22nxk ; rtDW . lk3hnbe0hc = 0 ;
rtDW . mctj2hhha3 = 0 ; if ( rtX . oyvmzo51w4 [ 0 ] == rtP .
Integrator2_UpperSat ) { switch ( rtDW . f35yrlgbqg [ 0 ] ) { case 3 : if (
rtB . kcc3jbqzn2 [ 0 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
f35yrlgbqg [ 0 ] = 1 ; } break ; case 1 : if ( rtB . kcc3jbqzn2 [ 0 ] >= 0.0
) { rtDW . f35yrlgbqg [ 0 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 0 ] < 0.0 )
{ rtDW . f35yrlgbqg [ 0 ] = 1 ; } else { rtDW . f35yrlgbqg [ 0 ] = 3 ; }
break ; } } else if ( rtX . oyvmzo51w4 [ 0 ] == rtP . Integrator2_LowerSat )
{ switch ( rtDW . f35yrlgbqg [ 0 ] ) { case 4 : if ( rtB . kcc3jbqzn2 [ 0 ] >
0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW . f35yrlgbqg [ 0 ] = 2 ; } break
; case 2 : if ( rtB . kcc3jbqzn2 [ 0 ] <= 0.0 ) { rtDW . f35yrlgbqg [ 0 ] = 4
; ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . kcc3jbqzn2 [ 0 ] > 0.0 ) { rtDW . f35yrlgbqg [ 0 ] = 2 ; }
else { rtDW . f35yrlgbqg [ 0 ] = 4 ; } break ; } } else { rtDW . f35yrlgbqg [
0 ] = 0 ; } if ( rtX . oyvmzo51w4 [ 1 ] == rtP . Integrator2_UpperSat ) {
switch ( rtDW . f35yrlgbqg [ 1 ] ) { case 3 : if ( rtB . kcc3jbqzn2 [ 1 ] <
0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW . f35yrlgbqg [ 1 ] = 1 ; } break
; case 1 : if ( rtB . kcc3jbqzn2 [ 1 ] >= 0.0 ) { rtDW . f35yrlgbqg [ 1 ] = 3
; ssSetSolverNeedsReset ( rtS ) ; } break ; default : ssSetSolverNeedsReset (
rtS ) ; if ( rtB . kcc3jbqzn2 [ 1 ] < 0.0 ) { rtDW . f35yrlgbqg [ 1 ] = 1 ; }
else { rtDW . f35yrlgbqg [ 1 ] = 3 ; } break ; } } else if ( rtX . oyvmzo51w4
[ 1 ] == rtP . Integrator2_LowerSat ) { switch ( rtDW . f35yrlgbqg [ 1 ] ) {
case 4 : if ( rtB . kcc3jbqzn2 [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . f35yrlgbqg [ 1 ] = 2 ; } break ; case 2 : if ( rtB . kcc3jbqzn2 [ 1
] <= 0.0 ) { rtDW . f35yrlgbqg [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 1 ]
> 0.0 ) { rtDW . f35yrlgbqg [ 1 ] = 2 ; } else { rtDW . f35yrlgbqg [ 1 ] = 4
; } break ; } } else { rtDW . f35yrlgbqg [ 1 ] = 0 ; } if ( rtX . oyvmzo51w4
[ 2 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . f35yrlgbqg [ 2 ] ) {
case 3 : if ( rtB . kcc3jbqzn2 [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . f35yrlgbqg [ 2 ] = 1 ; } break ; case 1 : if ( rtB . kcc3jbqzn2 [ 2
] >= 0.0 ) { rtDW . f35yrlgbqg [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 2 ]
< 0.0 ) { rtDW . f35yrlgbqg [ 2 ] = 1 ; } else { rtDW . f35yrlgbqg [ 2 ] = 3
; } break ; } } else if ( rtX . oyvmzo51w4 [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . f35yrlgbqg [ 2 ] ) { case 4 : if (
rtB . kcc3jbqzn2 [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
f35yrlgbqg [ 2 ] = 2 ; } break ; case 2 : if ( rtB . kcc3jbqzn2 [ 2 ] <= 0.0
) { rtDW . f35yrlgbqg [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 2 ] > 0.0 )
{ rtDW . f35yrlgbqg [ 2 ] = 2 ; } else { rtDW . f35yrlgbqg [ 2 ] = 4 ; }
break ; } } else { rtDW . f35yrlgbqg [ 2 ] = 0 ; } if ( rtX . oyvmzo51w4 [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . f35yrlgbqg [ 3 ] ) { case
3 : if ( rtB . kcc3jbqzn2 [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . f35yrlgbqg [ 3 ] = 1 ; } break ; case 1 : if ( rtB . kcc3jbqzn2 [ 3 ]
>= 0.0 ) { rtDW . f35yrlgbqg [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 3 ]
< 0.0 ) { rtDW . f35yrlgbqg [ 3 ] = 1 ; } else { rtDW . f35yrlgbqg [ 3 ] = 3
; } break ; } } else if ( rtX . oyvmzo51w4 [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . f35yrlgbqg [ 3 ] ) { case 4 : if (
rtB . kcc3jbqzn2 [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
f35yrlgbqg [ 3 ] = 2 ; } break ; case 2 : if ( rtB . kcc3jbqzn2 [ 3 ] <= 0.0
) { rtDW . f35yrlgbqg [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . kcc3jbqzn2 [ 3 ] > 0.0 )
{ rtDW . f35yrlgbqg [ 3 ] = 2 ; } else { rtDW . f35yrlgbqg [ 3 ] = 4 ; }
break ; } } else { rtDW . f35yrlgbqg [ 3 ] = 0 ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> gj4ahlupaj = rtB . mgmxosp5d2 ; _rtXdot -> lwlapfcycq =
rtB . ahz4pnrpcr ; _rtXdot -> jq5lewmfbj = rtB . eruyw0qvm2 ; _rtXdot ->
ep0nmfhrpv [ 0 ] = rtB . d03arivfzz [ 0 ] ; _rtXdot -> lfre3u0ztj [ 0 ] = rtB
. hrirjfhalh [ 0 ] ; _rtXdot -> ep0nmfhrpv [ 1 ] = rtB . d03arivfzz [ 1 ] ;
_rtXdot -> lfre3u0ztj [ 1 ] = rtB . hrirjfhalh [ 1 ] ; _rtXdot -> ep0nmfhrpv
[ 2 ] = rtB . d03arivfzz [ 2 ] ; _rtXdot -> lfre3u0ztj [ 2 ] = rtB .
hrirjfhalh [ 2 ] ; _rtXdot -> j0j4s1drzg = rtB . oxhd25rcd0 ; if ( ( rtDW .
f35yrlgbqg [ 0 ] != 3 ) && ( rtDW . f35yrlgbqg [ 0 ] != 4 ) ) { _rtXdot ->
oyvmzo51w4 [ 0 ] = rtB . kcc3jbqzn2 [ 0 ] ; _rtXdis -> oyvmzo51w4 [ 0 ] =
false ; } else { _rtXdot -> oyvmzo51w4 [ 0 ] = 0.0 ; if ( ( rtDW . f35yrlgbqg
[ 0 ] == 3 ) || ( rtDW . f35yrlgbqg [ 0 ] == 4 ) ) { _rtXdis -> oyvmzo51w4 [
0 ] = true ; } } if ( ( rtDW . f35yrlgbqg [ 1 ] != 3 ) && ( rtDW . f35yrlgbqg
[ 1 ] != 4 ) ) { _rtXdot -> oyvmzo51w4 [ 1 ] = rtB . kcc3jbqzn2 [ 1 ] ;
_rtXdis -> oyvmzo51w4 [ 1 ] = false ; } else { _rtXdot -> oyvmzo51w4 [ 1 ] =
0.0 ; if ( ( rtDW . f35yrlgbqg [ 1 ] == 3 ) || ( rtDW . f35yrlgbqg [ 1 ] == 4
) ) { _rtXdis -> oyvmzo51w4 [ 1 ] = true ; } } if ( ( rtDW . f35yrlgbqg [ 2 ]
!= 3 ) && ( rtDW . f35yrlgbqg [ 2 ] != 4 ) ) { _rtXdot -> oyvmzo51w4 [ 2 ] =
rtB . kcc3jbqzn2 [ 2 ] ; _rtXdis -> oyvmzo51w4 [ 2 ] = false ; } else {
_rtXdot -> oyvmzo51w4 [ 2 ] = 0.0 ; if ( ( rtDW . f35yrlgbqg [ 2 ] == 3 ) ||
( rtDW . f35yrlgbqg [ 2 ] == 4 ) ) { _rtXdis -> oyvmzo51w4 [ 2 ] = true ; } }
if ( ( rtDW . f35yrlgbqg [ 3 ] != 3 ) && ( rtDW . f35yrlgbqg [ 3 ] != 4 ) ) {
_rtXdot -> oyvmzo51w4 [ 3 ] = rtB . kcc3jbqzn2 [ 3 ] ; _rtXdis -> oyvmzo51w4
[ 3 ] = false ; } else { _rtXdot -> oyvmzo51w4 [ 3 ] = 0.0 ; if ( ( rtDW .
f35yrlgbqg [ 3 ] == 3 ) || ( rtDW . f35yrlgbqg [ 3 ] == 4 ) ) { _rtXdis ->
oyvmzo51w4 [ 3 ] = true ; } } } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; if ( ( rtDW . f35yrlgbqg [ 0 ] == 1 )
&& ( rtX . oyvmzo51w4 [ 0 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV ->
oahasvmkeh [ 0 ] = 0.0 ; } else { _rtZCSV -> oahasvmkeh [ 0 ] = rtX .
oyvmzo51w4 [ 0 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . f35yrlgbqg [
0 ] == 2 ) && ( rtX . oyvmzo51w4 [ 0 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> jp4c3x5zei [ 0 ] = 0.0 ; } else { _rtZCSV -> jp4c3x5zei [ 0 ] =
rtX . oyvmzo51w4 [ 0 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
f35yrlgbqg [ 0 ] == 3 ) || ( rtDW . f35yrlgbqg [ 0 ] == 4 ) ) { _rtZCSV ->
o5qipikske [ 0 ] = rtB . kcc3jbqzn2 [ 0 ] ; } else { _rtZCSV -> o5qipikske [
0 ] = 0.0 ; } _rtZCSV -> f3tstaka5o [ 0 ] = rtB . kcc3jbqzn2 [ 0 ] ; if ( (
rtDW . f35yrlgbqg [ 1 ] == 1 ) && ( rtX . oyvmzo51w4 [ 1 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> oahasvmkeh [ 1 ] = 0.0 ; } else {
_rtZCSV -> oahasvmkeh [ 1 ] = rtX . oyvmzo51w4 [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . f35yrlgbqg [ 1 ] == 2 ) && ( rtX .
oyvmzo51w4 [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> jp4c3x5zei [
1 ] = 0.0 ; } else { _rtZCSV -> jp4c3x5zei [ 1 ] = rtX . oyvmzo51w4 [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . f35yrlgbqg [ 1 ] == 3 ) || (
rtDW . f35yrlgbqg [ 1 ] == 4 ) ) { _rtZCSV -> o5qipikske [ 1 ] = rtB .
kcc3jbqzn2 [ 1 ] ; } else { _rtZCSV -> o5qipikske [ 1 ] = 0.0 ; } _rtZCSV ->
f3tstaka5o [ 1 ] = rtB . kcc3jbqzn2 [ 1 ] ; if ( ( rtDW . f35yrlgbqg [ 2 ] ==
1 ) && ( rtX . oyvmzo51w4 [ 2 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV
-> oahasvmkeh [ 2 ] = 0.0 ; } else { _rtZCSV -> oahasvmkeh [ 2 ] = rtX .
oyvmzo51w4 [ 2 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . f35yrlgbqg [
2 ] == 2 ) && ( rtX . oyvmzo51w4 [ 2 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> jp4c3x5zei [ 2 ] = 0.0 ; } else { _rtZCSV -> jp4c3x5zei [ 2 ] =
rtX . oyvmzo51w4 [ 2 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
f35yrlgbqg [ 2 ] == 3 ) || ( rtDW . f35yrlgbqg [ 2 ] == 4 ) ) { _rtZCSV ->
o5qipikske [ 2 ] = rtB . kcc3jbqzn2 [ 2 ] ; } else { _rtZCSV -> o5qipikske [
2 ] = 0.0 ; } _rtZCSV -> f3tstaka5o [ 2 ] = rtB . kcc3jbqzn2 [ 2 ] ; if ( (
rtDW . f35yrlgbqg [ 3 ] == 1 ) && ( rtX . oyvmzo51w4 [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> oahasvmkeh [ 3 ] = 0.0 ; } else {
_rtZCSV -> oahasvmkeh [ 3 ] = rtX . oyvmzo51w4 [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . f35yrlgbqg [ 3 ] == 2 ) && ( rtX .
oyvmzo51w4 [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> jp4c3x5zei [
3 ] = 0.0 ; } else { _rtZCSV -> jp4c3x5zei [ 3 ] = rtX . oyvmzo51w4 [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . f35yrlgbqg [ 3 ] == 3 ) || (
rtDW . f35yrlgbqg [ 3 ] == 4 ) ) { _rtZCSV -> o5qipikske [ 3 ] = rtB .
kcc3jbqzn2 [ 3 ] ; } else { _rtZCSV -> o5qipikske [ 3 ] = 0.0 ; } _rtZCSV ->
f3tstaka5o [ 3 ] = rtB . kcc3jbqzn2 [ 3 ] ; } void MdlTerminate ( void ) { {
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
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 59 ) ;
ssSetNumBlockIO ( rtS , 34 ) ; ssSetNumBlockParams ( rtS , 34 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 1185700031U ) ; ssSetChecksumVal ( rtS ,
1 , 2183018909U ) ; ssSetChecksumVal ( rtS , 2 , 3697106863U ) ;
ssSetChecksumVal ( rtS , 3 , 3318972077U ) ; } SimStruct *
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
mainModel_withGravityGradientTorq_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mainModel_withGravityGradientTorq" ) ; ssSetPath ( rtS ,
"mainModel_withGravityGradientTorq" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 1
, 1 , 1 , 3 , 1 , 4 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 3 , 1
, 1 , 1 , 3 , 1 , 4 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ]
= { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"mainModel_withGravityGradientTorq/Integrator1" ,
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Integrator" ,
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Integrator" ,
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Integrator" ,
"mainModel_withGravityGradientTorq/Integrator" ,
"mainModel_withGravityGradientTorq/Integrator3" ,
"mainModel_withGravityGradientTorq/Integrator2" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" } ; static
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ep0nmfhrpv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gj4ahlupaj ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . lwlapfcycq ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . jq5lewmfbj ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . lfre3u0ztj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . j0j4s1drzg ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . oyvmzo51w4 [ 0 ] ; }
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
e3kbs4mpqn [ 0 ] ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 1.0E-6 ) ;
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
ssSetChecksumVal ( rtS , 0 , 1185700031U ) ; ssSetChecksumVal ( rtS , 1 ,
2183018909U ) ; ssSetChecksumVal ( rtS , 2 , 3697106863U ) ; ssSetChecksumVal
( rtS , 3 , 3318972077U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 7 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; } const int_T gblParameterTuningTid = 2 ; void
MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
