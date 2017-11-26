#include "__cf_mainModel_matlab2013b.h"
#include "rt_logging_mmi.h"
#include "mainModel_matlab2013b_capi.h"
#include <math.h>
#include "mainModel_matlab2013b.h"
#include "mainModel_matlab2013b_private.h"
#include "mainModel_matlab2013b_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "8.9 (R2015b) 13-Aug-2015" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj//raccel//mainModel_matlab2013b//mainModel_matlab2013b_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
const int_T gblParameterTuningTid = 1 ; void MdlOutputsTID1 ( int_T tid ) ;
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID1 ( tid ) ; }
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { if ( ssIsFirstInitCond ( rtS ) ) {
rtX . dtwka2mguf [ 0 ] = 1000.0 ; rtX . dtwka2mguf [ 1 ] = 1000.0 ; rtX .
dtwka2mguf [ 2 ] = 1000.0 ; rtX . dtwka2mguf [ 3 ] = 1732.0 ; rtX .
dx350vwtm4 [ 0 ] = 0.0 ; rtX . dx350vwtm4 [ 1 ] = 0.0 ; rtX . dx350vwtm4 [ 2
] = 0.0 ; } rtDW . kpflfszbya = 1 ; rtDW . bzfbd3uylg = 1 ; rtDW . dpr3vhdeyz
= ( rtInf ) ; rtDW . p5d5ekcpzh = ( rtInf ) ; rtX . a5wtb1v2rl = rtP .
Integrator_IC ; rtDW . czikc5k5vu = ( rtInf ) ; rtDW . aojx1pzz3c = ( rtInf )
; rtX . nkzf5u4rmw = rtP . Integrator_IC_hsiqnplk4j ; rtDW . cnvp0sxujk = (
rtInf ) ; rtDW . mi4lsefx2o = ( rtInf ) ; rtX . flkofk5wk3 = rtP .
Integrator_IC_it4x1oof30 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX .
bc2nkq2up4 [ 0 ] = 0.0 ; rtX . bc2nkq2up4 [ 1 ] = 0.0 ; rtX . bc2nkq2up4 [ 2
] = 0.0 ; } rtDW . k3lkivxt00 = 1 ; } void MdlStart ( void ) { rtB .
gu33yk2b0b [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . gu33yk2b0b [ 1 ] = rtP .
speeds_Value [ 1 ] ; rtB . gu33yk2b0b [ 2 ] = rtP . speeds_Value [ 2 ] ; rtB
. gu33yk2b0b [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . f4cnibc0yp [ 0 ] = rtP
. pitchrollyawInitial_Value [ 0 ] ; rtB . hvqlinfhmr [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . f4cnibc0yp [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . hvqlinfhmr [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . f4cnibc0yp [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . hvqlinfhmr [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
real_T * lastU ; static const real_T a [ 12 ] = { 0.83333333333333348 , -
0.16666666666666671 , - 0.16666666666666671 , - 0.28867513459481292 , -
0.16666666666666671 , 0.83333333333333348 , - 0.16666666666666671 , -
0.28867513459481292 , - 0.16666666666666671 , - 0.16666666666666671 ,
0.83333333333333348 , - 0.28867513459481292 } ; real_T temp1 [ 3 ] ; real_T y
[ 3 ] ; static const int16_T a_p [ 9 ] = { 1800 , - 50 , - 15 , - 50 , 1600 ,
25 , - 15 , 25 , 1200 } ; static const int8_T e [ 3 ] = { 0 , 0 , 1 } ;
real_T C_pryToOmega [ 9 ] ; int32_T r2 ; int32_T r3 ; int32_T rtemp ; real_T
h3oycmg44m ; real_T kxihzicqru ; real_T mcn21s5jdx [ 4 ] ; int32_T i ; real_T
c [ 9 ] ; real_T tmp [ 9 ] ; real_T c_p [ 9 ] ; real_T tmp_p [ 9 ] ; real_T
jzdj014to3_idx_1 ; real_T jzdj014to3_idx_2 ; if ( rtDW . kpflfszbya != 0 ) {
rtX . dtwka2mguf [ 0 ] = rtB . gu33yk2b0b [ 0 ] ; rtX . dtwka2mguf [ 1 ] =
rtB . gu33yk2b0b [ 1 ] ; rtX . dtwka2mguf [ 2 ] = rtB . gu33yk2b0b [ 2 ] ;
rtX . dtwka2mguf [ 3 ] = rtB . gu33yk2b0b [ 3 ] ; } if ( ssIsMajorTimeStep (
rtS ) ) { if ( rtX . dtwka2mguf [ 0 ] >= rtP . Integrator2_UpperSat ) { rtX .
dtwka2mguf [ 0 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
dtwka2mguf [ 0 ] <= rtP . Integrator2_LowerSat ) { rtX . dtwka2mguf [ 0 ] =
rtP . Integrator2_LowerSat ; } } if ( rtX . dtwka2mguf [ 1 ] >= rtP .
Integrator2_UpperSat ) { rtX . dtwka2mguf [ 1 ] = rtP . Integrator2_UpperSat
; } else { if ( rtX . dtwka2mguf [ 1 ] <= rtP . Integrator2_LowerSat ) { rtX
. dtwka2mguf [ 1 ] = rtP . Integrator2_LowerSat ; } } if ( rtX . dtwka2mguf [
2 ] >= rtP . Integrator2_UpperSat ) { rtX . dtwka2mguf [ 2 ] = rtP .
Integrator2_UpperSat ; } else { if ( rtX . dtwka2mguf [ 2 ] <= rtP .
Integrator2_LowerSat ) { rtX . dtwka2mguf [ 2 ] = rtP . Integrator2_LowerSat
; } } if ( rtX . dtwka2mguf [ 3 ] >= rtP . Integrator2_UpperSat ) { rtX .
dtwka2mguf [ 3 ] = rtP . Integrator2_UpperSat ; } else { if ( rtX .
dtwka2mguf [ 3 ] <= rtP . Integrator2_LowerSat ) { rtX . dtwka2mguf [ 3 ] =
rtP . Integrator2_LowerSat ; } } } rtB . dj0rkgtnut [ 0 ] = rtX . dtwka2mguf
[ 0 ] ; rtB . dj0rkgtnut [ 1 ] = rtX . dtwka2mguf [ 1 ] ; rtB . dj0rkgtnut [
2 ] = rtX . dtwka2mguf [ 2 ] ; rtB . dj0rkgtnut [ 3 ] = rtX . dtwka2mguf [ 3
] ; if ( rtDW . bzfbd3uylg != 0 ) { rtX . dx350vwtm4 [ 0 ] = rtB . f4cnibc0yp
[ 0 ] ; rtX . dx350vwtm4 [ 1 ] = rtB . f4cnibc0yp [ 1 ] ; rtX . dx350vwtm4 [
2 ] = rtB . f4cnibc0yp [ 2 ] ; } rtB . gql0wk3mwf [ 0 ] = rtP .
pitchrollyawdesired_Value [ 0 ] - rtX . dx350vwtm4 [ 0 ] ; jzdj014to3_idx_1 =
rtX . dx350vwtm4 [ 1 ] ; rtB . gql0wk3mwf [ 1 ] = rtP .
pitchrollyawdesired_Value [ 1 ] - rtX . dx350vwtm4 [ 1 ] ; jzdj014to3_idx_2 =
rtX . dx350vwtm4 [ 2 ] ; rtB . gql0wk3mwf [ 2 ] = rtP .
pitchrollyawdesired_Value [ 2 ] - rtX . dx350vwtm4 [ 2 ] ; rtB . c1y3q10fae =
rtP . Gain1_Gain * rtB . gql0wk3mwf [ 0 ] ; if ( ( rtDW . dpr3vhdeyz >=
ssGetT ( rtS ) ) && ( rtDW . p5d5ekcpzh >= ssGetT ( rtS ) ) ) { h3oycmg44m =
0.0 ; } else { kxihzicqru = rtDW . dpr3vhdeyz ; lastU = & rtDW . cj43bhsm41 ;
if ( rtDW . dpr3vhdeyz < rtDW . p5d5ekcpzh ) { if ( rtDW . p5d5ekcpzh <
ssGetT ( rtS ) ) { kxihzicqru = rtDW . p5d5ekcpzh ; lastU = & rtDW .
mqd11owwhw ; } } else { if ( rtDW . dpr3vhdeyz >= ssGetT ( rtS ) ) {
kxihzicqru = rtDW . p5d5ekcpzh ; lastU = & rtDW . mqd11owwhw ; } } h3oycmg44m
= ( rtB . c1y3q10fae - * lastU ) / ( ssGetT ( rtS ) - kxihzicqru ) ; } rtB .
lhuvpri5ep = ( h3oycmg44m + rtX . a5wtb1v2rl ) + rtP . Gain_Gain * rtB .
gql0wk3mwf [ 0 ] ; rtB . lphf5r10kk = rtP . Gain1_Gain_jkygvdcm0j * rtB .
gql0wk3mwf [ 1 ] ; if ( ( rtDW . czikc5k5vu >= ssGetT ( rtS ) ) && ( rtDW .
aojx1pzz3c >= ssGetT ( rtS ) ) ) { kxihzicqru = 0.0 ; } else { kxihzicqru =
rtDW . czikc5k5vu ; lastU = & rtDW . mbydmjewhh ; if ( rtDW . czikc5k5vu <
rtDW . aojx1pzz3c ) { if ( rtDW . aojx1pzz3c < ssGetT ( rtS ) ) { kxihzicqru
= rtDW . aojx1pzz3c ; lastU = & rtDW . nnctei5jyn ; } } else { if ( rtDW .
czikc5k5vu >= ssGetT ( rtS ) ) { kxihzicqru = rtDW . aojx1pzz3c ; lastU = &
rtDW . nnctei5jyn ; } } kxihzicqru = ( rtB . lphf5r10kk - * lastU ) / (
ssGetT ( rtS ) - kxihzicqru ) ; } h3oycmg44m = ( kxihzicqru + rtX .
nkzf5u4rmw ) + rtP . Gain_Gain_j0nwylexu1 * rtB . gql0wk3mwf [ 1 ] ; rtB .
dsjkt0iimr = rtP . Gain1_Gain_akkqzazk2e * rtB . gql0wk3mwf [ 2 ] ; if ( (
rtDW . cnvp0sxujk >= ssGetT ( rtS ) ) && ( rtDW . mi4lsefx2o >= ssGetT ( rtS
) ) ) { kxihzicqru = 0.0 ; } else { kxihzicqru = rtDW . cnvp0sxujk ; lastU =
& rtDW . aj5m13tdgs ; if ( rtDW . cnvp0sxujk < rtDW . mi4lsefx2o ) { if (
rtDW . mi4lsefx2o < ssGetT ( rtS ) ) { kxihzicqru = rtDW . mi4lsefx2o ; lastU
= & rtDW . od50nljeou ; } } else { if ( rtDW . cnvp0sxujk >= ssGetT ( rtS ) )
{ kxihzicqru = rtDW . mi4lsefx2o ; lastU = & rtDW . od50nljeou ; } }
kxihzicqru = ( rtB . dsjkt0iimr - * lastU ) / ( ssGetT ( rtS ) - kxihzicqru )
; } kxihzicqru = ( kxihzicqru + rtX . flkofk5wk3 ) + rtP .
Gain_Gain_hskt0iupyl * rtB . gql0wk3mwf [ 2 ] ; for ( i = 0 ; i < 4 ; i ++ )
{ rtB . iaa2mgugws [ i ] = 0.0 ; rtB . iaa2mgugws [ i ] += a [ i ] * rtB .
lhuvpri5ep ; rtB . iaa2mgugws [ i ] += a [ i + 4 ] * h3oycmg44m ; rtB .
iaa2mgugws [ i ] += a [ i + 8 ] * kxihzicqru ; mcn21s5jdx [ i ] = rtP .
uI1_Gain * rtB . iaa2mgugws [ i ] ; } if ( rtDW . k3lkivxt00 != 0 ) { rtX .
bc2nkq2up4 [ 0 ] = rtB . hvqlinfhmr [ 0 ] ; rtX . bc2nkq2up4 [ 1 ] = rtB .
hvqlinfhmr [ 1 ] ; rtX . bc2nkq2up4 [ 2 ] = rtB . hvqlinfhmr [ 2 ] ; } rtB .
fgsqhcujs1 [ 0 ] = rtX . bc2nkq2up4 [ 0 ] ; rtB . fgsqhcujs1 [ 1 ] = rtX .
bc2nkq2up4 [ 1 ] ; rtB . fgsqhcujs1 [ 2 ] = rtX . bc2nkq2up4 [ 2 ] ; rtB .
kpagd5p4kf [ 0 ] = ( mcn21s5jdx [ 0 ] - 0.57735026918962584 * mcn21s5jdx [ 3
] ) * rtP . eachwheelInertia_Value + ( rtB . dj0rkgtnut [ 2 ] * rtB .
fgsqhcujs1 [ 1 ] - rtB . dj0rkgtnut [ 1 ] * rtB . fgsqhcujs1 [ 2 ] ) * rtP .
eachwheelInertia_Value ; rtB . kpagd5p4kf [ 1 ] = ( mcn21s5jdx [ 1 ] -
0.57735026918962584 * mcn21s5jdx [ 3 ] ) * rtP . eachwheelInertia_Value + (
rtB . dj0rkgtnut [ 0 ] * rtB . fgsqhcujs1 [ 2 ] - rtB . dj0rkgtnut [ 2 ] *
rtB . fgsqhcujs1 [ 0 ] ) * rtP . eachwheelInertia_Value ; rtB . kpagd5p4kf [
2 ] = ( mcn21s5jdx [ 2 ] - 0.57735026918962584 * mcn21s5jdx [ 3 ] ) * rtP .
eachwheelInertia_Value + ( rtB . dj0rkgtnut [ 1 ] * rtB . fgsqhcujs1 [ 0 ] -
rtB . dj0rkgtnut [ 0 ] * rtB . fgsqhcujs1 [ 1 ] ) * rtP .
eachwheelInertia_Value ; c [ 0 ] = 1.0 ; c [ 3 ] = 0.0 ; c [ 6 ] = 0.0 ; c [
1 ] = 0.0 ; c [ 4 ] = muDoubleScalarCos ( rtX . dx350vwtm4 [ 2 ] ) ; c [ 7 ]
= muDoubleScalarSin ( rtX . dx350vwtm4 [ 2 ] ) ; c [ 2 ] = 0.0 ; c [ 5 ] = -
muDoubleScalarSin ( rtX . dx350vwtm4 [ 2 ] ) ; c [ 8 ] = muDoubleScalarCos (
rtX . dx350vwtm4 [ 2 ] ) ; tmp [ 0 ] = muDoubleScalarCos ( rtX . dx350vwtm4 [
1 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 6 ] = - muDoubleScalarSin ( rtX . dx350vwtm4
[ 1 ] ) ; tmp [ 1 ] = 0.0 ; tmp [ 4 ] = 1.0 ; tmp [ 7 ] = 0.0 ; tmp [ 2 ] =
muDoubleScalarSin ( rtX . dx350vwtm4 [ 1 ] ) ; tmp [ 5 ] = 0.0 ; tmp [ 8 ] =
muDoubleScalarCos ( rtX . dx350vwtm4 [ 1 ] ) ; tmp_p [ 0 ] =
muDoubleScalarCos ( rtX . dx350vwtm4 [ 0 ] ) ; tmp_p [ 3 ] =
muDoubleScalarSin ( rtX . dx350vwtm4 [ 0 ] ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = - muDoubleScalarSin ( rtX . dx350vwtm4 [ 0 ] ) ; tmp_p [ 4 ] =
muDoubleScalarCos ( rtX . dx350vwtm4 [ 0 ] ) ; tmp_p [ 7 ] = 0.0 ; for ( i =
0 ; i < 3 ; i ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { c_p [ i + 3 * r2 ] =
0.0 ; c_p [ i + 3 * r2 ] += tmp [ 3 * r2 ] * c [ i ] ; c_p [ i + 3 * r2 ] +=
tmp [ 3 * r2 + 1 ] * c [ i + 3 ] ; c_p [ i + 3 * r2 ] += tmp [ 3 * r2 + 2 ] *
c [ i + 6 ] ; } tmp_p [ 2 + 3 * i ] = e [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { c [ i + 3 * r2 ] = 0.0 ; c [ i + 3 * r2
] += tmp_p [ 3 * r2 ] * c_p [ i ] ; c [ i + 3 * r2 ] += tmp_p [ 3 * r2 + 1 ]
* c_p [ i + 3 ] ; c [ i + 3 * r2 ] += tmp_p [ 3 * r2 + 2 ] * c_p [ i + 6 ] ;
} } for ( i = 0 ; i < 3 ; i ++ ) { temp1 [ i ] = rtB . fgsqhcujs1 [ i ] - ( (
c [ i + 3 ] * 0.0 + c [ i ] * 0.0 ) + c [ i + 6 ] * 0.0010741000000000001 ) ;
} for ( i = 0 ; i < 3 ; i ++ ) { rtB . auxcmgkg3f [ i ] = rtX . dx350vwtm4 [
i ] * rtP . radToDeg_Value ; y [ i ] = ( real_T ) a_p [ i + 6 ] * temp1 [ 2 ]
+ ( ( real_T ) a_p [ i + 3 ] * temp1 [ 1 ] + ( real_T ) a_p [ i ] * temp1 [ 0
] ) ; } rtB . k0rntabv5l [ 0 ] = ( ( rtP . disturbTorques_Value [ 0 ] + rtP .
magTorq_Value ) - rtB . kpagd5p4kf [ 0 ] ) - ( temp1 [ 1 ] * y [ 2 ] - temp1
[ 2 ] * y [ 1 ] ) ; rtB . k0rntabv5l [ 1 ] = ( ( ( rtP . disturbTorques_Value
[ 1 ] + rtP . magTorq_Value ) - rtB . kpagd5p4kf [ 1 ] ) - ( temp1 [ 2 ] * y
[ 0 ] - temp1 [ 0 ] * y [ 2 ] ) ) - rtB . k0rntabv5l [ 0 ] * -
0.027777777777777776 ; rtB . k0rntabv5l [ 2 ] = ( ( ( ( rtP .
disturbTorques_Value [ 2 ] + rtP . magTorq_Value ) - rtB . kpagd5p4kf [ 2 ] )
- ( temp1 [ 0 ] * y [ 1 ] - temp1 [ 1 ] * y [ 0 ] ) ) - rtB . k0rntabv5l [ 0
] * - 0.0083333333333333332 ) - rtB . k0rntabv5l [ 1 ] * 0.015377932232841007
; rtB . k0rntabv5l [ 2 ] /= 1199.4969591659426 ; rtB . k0rntabv5l [ 0 ] -=
rtB . k0rntabv5l [ 2 ] * - 15.0 ; rtB . k0rntabv5l [ 1 ] -= rtB . k0rntabv5l
[ 2 ] * 24.583333333333332 ; rtB . k0rntabv5l [ 1 ] /= 1598.6111111111111 ;
rtB . k0rntabv5l [ 0 ] -= rtB . k0rntabv5l [ 1 ] * - 50.0 ; rtB . k0rntabv5l
[ 0 ] /= 1800.0 ; rtB . eseqxvyzd5 [ 0 ] = rtP . uI_Gain * rtB . iaa2mgugws [
0 ] ; rtB . eseqxvyzd5 [ 1 ] = rtP . uI_Gain * rtB . iaa2mgugws [ 1 ] ; rtB .
eseqxvyzd5 [ 2 ] = rtP . uI_Gain * rtB . iaa2mgugws [ 2 ] ; rtB . eseqxvyzd5
[ 3 ] = rtP . uI_Gain * rtB . iaa2mgugws [ 3 ] ; rtB . dobxpgbpqd = rtP .
Gain2_Gain * rtB . gql0wk3mwf [ 0 ] ; rtB . cphprmxoop = rtP .
Gain2_Gain_nggjdhdyc1 * rtB . gql0wk3mwf [ 1 ] ; rtB . b4fvzvbgxk = rtP .
Gain2_Gain_cddumad5uc * rtB . gql0wk3mwf [ 2 ] ; C_pryToOmega [ 0 ] = -
muDoubleScalarSin ( jzdj014to3_idx_1 ) ; C_pryToOmega [ 3 ] = 0.0 ;
C_pryToOmega [ 6 ] = 1.0 ; C_pryToOmega [ 1 ] = muDoubleScalarCos (
jzdj014to3_idx_1 ) * muDoubleScalarSin ( jzdj014to3_idx_2 ) ; C_pryToOmega [
4 ] = muDoubleScalarCos ( jzdj014to3_idx_2 ) ; C_pryToOmega [ 7 ] = 0.0 ;
C_pryToOmega [ 2 ] = muDoubleScalarCos ( jzdj014to3_idx_1 ) *
muDoubleScalarCos ( jzdj014to3_idx_2 ) ; C_pryToOmega [ 5 ] = -
muDoubleScalarSin ( jzdj014to3_idx_2 ) ; C_pryToOmega [ 8 ] = 0.0 ; i = 0 ;
r2 = 1 ; r3 = 2 ; h3oycmg44m = muDoubleScalarAbs ( C_pryToOmega [ 0 ] ) ;
kxihzicqru = muDoubleScalarAbs ( C_pryToOmega [ 1 ] ) ; if ( kxihzicqru >
h3oycmg44m ) { h3oycmg44m = kxihzicqru ; i = 1 ; r2 = 0 ; } if (
muDoubleScalarAbs ( C_pryToOmega [ 2 ] ) > h3oycmg44m ) { i = 2 ; r2 = 1 ; r3
= 0 ; } C_pryToOmega [ r2 ] /= C_pryToOmega [ i ] ; C_pryToOmega [ r3 ] /=
C_pryToOmega [ i ] ; C_pryToOmega [ 3 + r2 ] -= C_pryToOmega [ 3 + i ] *
C_pryToOmega [ r2 ] ; C_pryToOmega [ 3 + r3 ] -= C_pryToOmega [ 3 + i ] *
C_pryToOmega [ r3 ] ; C_pryToOmega [ 6 + r2 ] -= C_pryToOmega [ 6 + i ] *
C_pryToOmega [ r2 ] ; C_pryToOmega [ 6 + r3 ] -= C_pryToOmega [ 6 + i ] *
C_pryToOmega [ r3 ] ; if ( muDoubleScalarAbs ( C_pryToOmega [ 3 + r3 ] ) >
muDoubleScalarAbs ( C_pryToOmega [ 3 + r2 ] ) ) { rtemp = r2 ; r2 = r3 ; r3 =
rtemp ; } C_pryToOmega [ 3 + r3 ] /= C_pryToOmega [ 3 + r2 ] ; C_pryToOmega [
6 + r3 ] -= C_pryToOmega [ 3 + r3 ] * C_pryToOmega [ 6 + r2 ] ; rtB .
iaj5fdksww [ 0 ] = rtB . fgsqhcujs1 [ i ] ; rtB . iaj5fdksww [ 1 ] = rtB .
fgsqhcujs1 [ r2 ] - rtB . iaj5fdksww [ 0 ] * C_pryToOmega [ r2 ] ; rtB .
iaj5fdksww [ 2 ] = ( rtB . fgsqhcujs1 [ r3 ] - rtB . iaj5fdksww [ 0 ] *
C_pryToOmega [ r3 ] ) - C_pryToOmega [ 3 + r3 ] * rtB . iaj5fdksww [ 1 ] ;
rtB . iaj5fdksww [ 2 ] /= C_pryToOmega [ 6 + r3 ] ; rtB . iaj5fdksww [ 0 ] -=
C_pryToOmega [ 6 + i ] * rtB . iaj5fdksww [ 2 ] ; rtB . iaj5fdksww [ 1 ] -=
C_pryToOmega [ 6 + r2 ] * rtB . iaj5fdksww [ 2 ] ; rtB . iaj5fdksww [ 1 ] /=
C_pryToOmega [ 3 + r2 ] ; rtB . iaj5fdksww [ 0 ] -= C_pryToOmega [ 3 + i ] *
rtB . iaj5fdksww [ 1 ] ; rtB . iaj5fdksww [ 0 ] /= C_pryToOmega [ i ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T tid ) { rtB .
gu33yk2b0b [ 0 ] = rtP . speeds_Value [ 0 ] ; rtB . gu33yk2b0b [ 1 ] = rtP .
speeds_Value [ 1 ] ; rtB . gu33yk2b0b [ 2 ] = rtP . speeds_Value [ 2 ] ; rtB
. gu33yk2b0b [ 3 ] = rtP . speeds_Value [ 3 ] ; rtB . f4cnibc0yp [ 0 ] = rtP
. pitchrollyawInitial_Value [ 0 ] ; rtB . hvqlinfhmr [ 0 ] = rtP .
initialOmega_Value [ 0 ] ; rtB . f4cnibc0yp [ 1 ] = rtP .
pitchrollyawInitial_Value [ 1 ] ; rtB . hvqlinfhmr [ 1 ] = rtP .
initialOmega_Value [ 1 ] ; rtB . f4cnibc0yp [ 2 ] = rtP .
pitchrollyawInitial_Value [ 2 ] ; rtB . hvqlinfhmr [ 2 ] = rtP .
initialOmega_Value [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T * lastU ; rtDW . kpflfszbya = 0 ; if ( rtX . dtwka2mguf
[ 0 ] == rtP . Integrator2_UpperSat ) { switch ( rtDW . m03lillh30 [ 0 ] ) {
case 3 : if ( rtB . eseqxvyzd5 [ 0 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS )
; rtDW . m03lillh30 [ 0 ] = 1 ; } break ; case 1 : if ( rtB . eseqxvyzd5 [ 0
] >= 0.0 ) { rtDW . m03lillh30 [ 0 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 0 ]
< 0.0 ) { rtDW . m03lillh30 [ 0 ] = 1 ; } else { rtDW . m03lillh30 [ 0 ] = 3
; } break ; } } else if ( rtX . dtwka2mguf [ 0 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . m03lillh30 [ 0 ] ) { case 4 : if (
rtB . eseqxvyzd5 [ 0 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
m03lillh30 [ 0 ] = 2 ; } break ; case 2 : if ( rtB . eseqxvyzd5 [ 0 ] <= 0.0
) { rtDW . m03lillh30 [ 0 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 0 ] > 0.0 )
{ rtDW . m03lillh30 [ 0 ] = 2 ; } else { rtDW . m03lillh30 [ 0 ] = 4 ; }
break ; } } else { rtDW . m03lillh30 [ 0 ] = 0 ; } if ( rtX . dtwka2mguf [ 1
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . m03lillh30 [ 1 ] ) { case
3 : if ( rtB . eseqxvyzd5 [ 1 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . m03lillh30 [ 1 ] = 1 ; } break ; case 1 : if ( rtB . eseqxvyzd5 [ 1 ]
>= 0.0 ) { rtDW . m03lillh30 [ 1 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 1 ]
< 0.0 ) { rtDW . m03lillh30 [ 1 ] = 1 ; } else { rtDW . m03lillh30 [ 1 ] = 3
; } break ; } } else if ( rtX . dtwka2mguf [ 1 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . m03lillh30 [ 1 ] ) { case 4 : if (
rtB . eseqxvyzd5 [ 1 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
m03lillh30 [ 1 ] = 2 ; } break ; case 2 : if ( rtB . eseqxvyzd5 [ 1 ] <= 0.0
) { rtDW . m03lillh30 [ 1 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 1 ] > 0.0 )
{ rtDW . m03lillh30 [ 1 ] = 2 ; } else { rtDW . m03lillh30 [ 1 ] = 4 ; }
break ; } } else { rtDW . m03lillh30 [ 1 ] = 0 ; } if ( rtX . dtwka2mguf [ 2
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . m03lillh30 [ 2 ] ) { case
3 : if ( rtB . eseqxvyzd5 [ 2 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . m03lillh30 [ 2 ] = 1 ; } break ; case 1 : if ( rtB . eseqxvyzd5 [ 2 ]
>= 0.0 ) { rtDW . m03lillh30 [ 2 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 2 ]
< 0.0 ) { rtDW . m03lillh30 [ 2 ] = 1 ; } else { rtDW . m03lillh30 [ 2 ] = 3
; } break ; } } else if ( rtX . dtwka2mguf [ 2 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . m03lillh30 [ 2 ] ) { case 4 : if (
rtB . eseqxvyzd5 [ 2 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
m03lillh30 [ 2 ] = 2 ; } break ; case 2 : if ( rtB . eseqxvyzd5 [ 2 ] <= 0.0
) { rtDW . m03lillh30 [ 2 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 2 ] > 0.0 )
{ rtDW . m03lillh30 [ 2 ] = 2 ; } else { rtDW . m03lillh30 [ 2 ] = 4 ; }
break ; } } else { rtDW . m03lillh30 [ 2 ] = 0 ; } if ( rtX . dtwka2mguf [ 3
] == rtP . Integrator2_UpperSat ) { switch ( rtDW . m03lillh30 [ 3 ] ) { case
3 : if ( rtB . eseqxvyzd5 [ 3 ] < 0.0 ) { ssSetSolverNeedsReset ( rtS ) ;
rtDW . m03lillh30 [ 3 ] = 1 ; } break ; case 1 : if ( rtB . eseqxvyzd5 [ 3 ]
>= 0.0 ) { rtDW . m03lillh30 [ 3 ] = 3 ; ssSetSolverNeedsReset ( rtS ) ; }
break ; default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 3 ]
< 0.0 ) { rtDW . m03lillh30 [ 3 ] = 1 ; } else { rtDW . m03lillh30 [ 3 ] = 3
; } break ; } } else if ( rtX . dtwka2mguf [ 3 ] == rtP .
Integrator2_LowerSat ) { switch ( rtDW . m03lillh30 [ 3 ] ) { case 4 : if (
rtB . eseqxvyzd5 [ 3 ] > 0.0 ) { ssSetSolverNeedsReset ( rtS ) ; rtDW .
m03lillh30 [ 3 ] = 2 ; } break ; case 2 : if ( rtB . eseqxvyzd5 [ 3 ] <= 0.0
) { rtDW . m03lillh30 [ 3 ] = 4 ; ssSetSolverNeedsReset ( rtS ) ; } break ;
default : ssSetSolverNeedsReset ( rtS ) ; if ( rtB . eseqxvyzd5 [ 3 ] > 0.0 )
{ rtDW . m03lillh30 [ 3 ] = 2 ; } else { rtDW . m03lillh30 [ 3 ] = 4 ; }
break ; } } else { rtDW . m03lillh30 [ 3 ] = 0 ; } rtDW . bzfbd3uylg = 0 ; if
( rtDW . dpr3vhdeyz == ( rtInf ) ) { rtDW . dpr3vhdeyz = ssGetT ( rtS ) ;
lastU = & rtDW . cj43bhsm41 ; } else if ( rtDW . p5d5ekcpzh == ( rtInf ) ) {
rtDW . p5d5ekcpzh = ssGetT ( rtS ) ; lastU = & rtDW . mqd11owwhw ; } else if
( rtDW . dpr3vhdeyz < rtDW . p5d5ekcpzh ) { rtDW . dpr3vhdeyz = ssGetT ( rtS
) ; lastU = & rtDW . cj43bhsm41 ; } else { rtDW . p5d5ekcpzh = ssGetT ( rtS )
; lastU = & rtDW . mqd11owwhw ; } * lastU = rtB . c1y3q10fae ; if ( rtDW .
czikc5k5vu == ( rtInf ) ) { rtDW . czikc5k5vu = ssGetT ( rtS ) ; lastU = &
rtDW . mbydmjewhh ; } else if ( rtDW . aojx1pzz3c == ( rtInf ) ) { rtDW .
aojx1pzz3c = ssGetT ( rtS ) ; lastU = & rtDW . nnctei5jyn ; } else if ( rtDW
. czikc5k5vu < rtDW . aojx1pzz3c ) { rtDW . czikc5k5vu = ssGetT ( rtS ) ;
lastU = & rtDW . mbydmjewhh ; } else { rtDW . aojx1pzz3c = ssGetT ( rtS ) ;
lastU = & rtDW . nnctei5jyn ; } * lastU = rtB . lphf5r10kk ; if ( rtDW .
cnvp0sxujk == ( rtInf ) ) { rtDW . cnvp0sxujk = ssGetT ( rtS ) ; lastU = &
rtDW . aj5m13tdgs ; } else if ( rtDW . mi4lsefx2o == ( rtInf ) ) { rtDW .
mi4lsefx2o = ssGetT ( rtS ) ; lastU = & rtDW . od50nljeou ; } else if ( rtDW
. cnvp0sxujk < rtDW . mi4lsefx2o ) { rtDW . cnvp0sxujk = ssGetT ( rtS ) ;
lastU = & rtDW . aj5m13tdgs ; } else { rtDW . mi4lsefx2o = ssGetT ( rtS ) ;
lastU = & rtDW . od50nljeou ; } * lastU = rtB . dsjkt0iimr ; rtDW .
k3lkivxt00 = 0 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDis *
_rtXdis ; XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdis
= ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ; if ( ( rtDW . m03lillh30 [
0 ] != 3 ) && ( rtDW . m03lillh30 [ 0 ] != 4 ) ) { _rtXdot -> dtwka2mguf [ 0
] = rtB . eseqxvyzd5 [ 0 ] ; _rtXdis -> dtwka2mguf [ 0 ] = false ; } else {
_rtXdot -> dtwka2mguf [ 0 ] = 0.0 ; if ( ( rtDW . m03lillh30 [ 0 ] == 3 ) ||
( rtDW . m03lillh30 [ 0 ] == 4 ) ) { _rtXdis -> dtwka2mguf [ 0 ] = true ; } }
if ( ( rtDW . m03lillh30 [ 1 ] != 3 ) && ( rtDW . m03lillh30 [ 1 ] != 4 ) ) {
_rtXdot -> dtwka2mguf [ 1 ] = rtB . eseqxvyzd5 [ 1 ] ; _rtXdis -> dtwka2mguf
[ 1 ] = false ; } else { _rtXdot -> dtwka2mguf [ 1 ] = 0.0 ; if ( ( rtDW .
m03lillh30 [ 1 ] == 3 ) || ( rtDW . m03lillh30 [ 1 ] == 4 ) ) { _rtXdis ->
dtwka2mguf [ 1 ] = true ; } } if ( ( rtDW . m03lillh30 [ 2 ] != 3 ) && ( rtDW
. m03lillh30 [ 2 ] != 4 ) ) { _rtXdot -> dtwka2mguf [ 2 ] = rtB . eseqxvyzd5
[ 2 ] ; _rtXdis -> dtwka2mguf [ 2 ] = false ; } else { _rtXdot -> dtwka2mguf
[ 2 ] = 0.0 ; if ( ( rtDW . m03lillh30 [ 2 ] == 3 ) || ( rtDW . m03lillh30 [
2 ] == 4 ) ) { _rtXdis -> dtwka2mguf [ 2 ] = true ; } } if ( ( rtDW .
m03lillh30 [ 3 ] != 3 ) && ( rtDW . m03lillh30 [ 3 ] != 4 ) ) { _rtXdot ->
dtwka2mguf [ 3 ] = rtB . eseqxvyzd5 [ 3 ] ; _rtXdis -> dtwka2mguf [ 3 ] =
false ; } else { _rtXdot -> dtwka2mguf [ 3 ] = 0.0 ; if ( ( rtDW . m03lillh30
[ 3 ] == 3 ) || ( rtDW . m03lillh30 [ 3 ] == 4 ) ) { _rtXdis -> dtwka2mguf [
3 ] = true ; } } _rtXdot -> a5wtb1v2rl = rtB . dobxpgbpqd ; _rtXdot ->
nkzf5u4rmw = rtB . cphprmxoop ; _rtXdot -> flkofk5wk3 = rtB . b4fvzvbgxk ;
_rtXdot -> dx350vwtm4 [ 0 ] = rtB . iaj5fdksww [ 0 ] ; _rtXdot -> bc2nkq2up4
[ 0 ] = rtB . k0rntabv5l [ 0 ] ; _rtXdot -> dx350vwtm4 [ 1 ] = rtB .
iaj5fdksww [ 1 ] ; _rtXdot -> bc2nkq2up4 [ 1 ] = rtB . k0rntabv5l [ 1 ] ;
_rtXdot -> dx350vwtm4 [ 2 ] = rtB . iaj5fdksww [ 2 ] ; _rtXdot -> bc2nkq2up4
[ 2 ] = rtB . k0rntabv5l [ 2 ] ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; if ( ( rtDW . m03lillh30 [ 0 ] == 1 )
&& ( rtX . dtwka2mguf [ 0 ] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV ->
i0jblazcc1 [ 0 ] = 0.0 ; } else { _rtZCSV -> i0jblazcc1 [ 0 ] = rtX .
dtwka2mguf [ 0 ] - rtP . Integrator2_UpperSat ; } if ( ( rtDW . m03lillh30 [
0 ] == 2 ) && ( rtX . dtwka2mguf [ 0 ] <= rtP . Integrator2_LowerSat ) ) {
_rtZCSV -> o1k01bbejo [ 0 ] = 0.0 ; } else { _rtZCSV -> o1k01bbejo [ 0 ] =
rtX . dtwka2mguf [ 0 ] - rtP . Integrator2_LowerSat ; } if ( ( rtDW .
m03lillh30 [ 0 ] == 3 ) || ( rtDW . m03lillh30 [ 0 ] == 4 ) ) { _rtZCSV ->
fdcainosp5 [ 0 ] = rtB . eseqxvyzd5 [ 0 ] ; } else { _rtZCSV -> fdcainosp5 [
0 ] = 0.0 ; } if ( ( rtDW . m03lillh30 [ 1 ] == 1 ) && ( rtX . dtwka2mguf [ 1
] >= rtP . Integrator2_UpperSat ) ) { _rtZCSV -> i0jblazcc1 [ 1 ] = 0.0 ; }
else { _rtZCSV -> i0jblazcc1 [ 1 ] = rtX . dtwka2mguf [ 1 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . m03lillh30 [ 1 ] == 2 ) && ( rtX .
dtwka2mguf [ 1 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> o1k01bbejo [
1 ] = 0.0 ; } else { _rtZCSV -> o1k01bbejo [ 1 ] = rtX . dtwka2mguf [ 1 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . m03lillh30 [ 1 ] == 3 ) || (
rtDW . m03lillh30 [ 1 ] == 4 ) ) { _rtZCSV -> fdcainosp5 [ 1 ] = rtB .
eseqxvyzd5 [ 1 ] ; } else { _rtZCSV -> fdcainosp5 [ 1 ] = 0.0 ; } if ( ( rtDW
. m03lillh30 [ 2 ] == 1 ) && ( rtX . dtwka2mguf [ 2 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> i0jblazcc1 [ 2 ] = 0.0 ; } else {
_rtZCSV -> i0jblazcc1 [ 2 ] = rtX . dtwka2mguf [ 2 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . m03lillh30 [ 2 ] == 2 ) && ( rtX .
dtwka2mguf [ 2 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> o1k01bbejo [
2 ] = 0.0 ; } else { _rtZCSV -> o1k01bbejo [ 2 ] = rtX . dtwka2mguf [ 2 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . m03lillh30 [ 2 ] == 3 ) || (
rtDW . m03lillh30 [ 2 ] == 4 ) ) { _rtZCSV -> fdcainosp5 [ 2 ] = rtB .
eseqxvyzd5 [ 2 ] ; } else { _rtZCSV -> fdcainosp5 [ 2 ] = 0.0 ; } if ( ( rtDW
. m03lillh30 [ 3 ] == 1 ) && ( rtX . dtwka2mguf [ 3 ] >= rtP .
Integrator2_UpperSat ) ) { _rtZCSV -> i0jblazcc1 [ 3 ] = 0.0 ; } else {
_rtZCSV -> i0jblazcc1 [ 3 ] = rtX . dtwka2mguf [ 3 ] - rtP .
Integrator2_UpperSat ; } if ( ( rtDW . m03lillh30 [ 3 ] == 2 ) && ( rtX .
dtwka2mguf [ 3 ] <= rtP . Integrator2_LowerSat ) ) { _rtZCSV -> o1k01bbejo [
3 ] = 0.0 ; } else { _rtZCSV -> o1k01bbejo [ 3 ] = rtX . dtwka2mguf [ 3 ] -
rtP . Integrator2_LowerSat ; } if ( ( rtDW . m03lillh30 [ 3 ] == 3 ) || (
rtDW . m03lillh30 [ 3 ] == 4 ) ) { _rtZCSV -> fdcainosp5 [ 3 ] = rtB .
eseqxvyzd5 [ 3 ] ; } else { _rtZCSV -> fdcainosp5 [ 3 ] = 0.0 ; } } void
MdlTerminate ( void ) { } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 13 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 49 ) ;
ssSetNumBlockIO ( rtS , 19 ) ; ssSetNumBlockParams ( rtS , 35 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 2787255435U ) ; ssSetChecksumVal ( rtS ,
1 , 179211211U ) ; ssSetChecksumVal ( rtS , 2 , 1385148118U ) ;
ssSetChecksumVal ( rtS , 3 , 2102439491U ) ; } SimStruct *
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
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . B = & rtBTransTable ;
dtInfo . P = & rtPTransTable ; } mainModel_matlab2013b_InitializeDataMapInfo
( rtS ) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS ,
rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName (
rtS , "mainModel_matlab2013b" ) ; ssSetPath ( rtS , "mainModel_matlab2013b" )
; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 1000.0 ) ; { static
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
rt_LoggedStateBlockNames [ ] = { "mainModel_matlab2013b/Integrator2" ,
"mainModel_matlab2013b/Integrator1" ,
"mainModel_matlab2013b/Attitude Controller/PID_1/Integrator" ,
"mainModel_matlab2013b/Attitude Controller/PID_2/Integrator" ,
"mainModel_matlab2013b/Attitude Controller/PID_3/Integrator" ,
"mainModel_matlab2013b/Integrator" } ; static const char_T *
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
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . dtwka2mguf [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dx350vwtm4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . a5wtb1v2rl ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . nkzf5u4rmw ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . flkofk5wk3 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . bc2nkq2up4 [ 0 ] ; }
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
real_T absTol [ 13 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 13 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [ 12 ] = { (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; ssSetSolverRelTol ( rtS , 0.001 ) ;
ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 20.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver (
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
ssSetChecksumVal ( rtS , 0 , 2787255435U ) ; ssSetChecksumVal ( rtS , 1 ,
179211211U ) ; ssSetChecksumVal ( rtS , 2 , 1385148118U ) ; ssSetChecksumVal
( rtS , 3 , 2102439491U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
