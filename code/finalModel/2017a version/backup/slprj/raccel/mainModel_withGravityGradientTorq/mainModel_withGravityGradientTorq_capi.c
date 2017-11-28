#include "__cf_mainModel_withGravityGradientTorq.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mainModel_withGravityGradientTorq_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "mainModel_withGravityGradientTorq.h"
#include "mainModel_withGravityGradientTorq_capi.h"
#include "mainModel_withGravityGradientTorq_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 4 , TARGET_STRING (
"mainModel_withGravityGradientTorq/ReactionWheels" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 1 , 5 , TARGET_STRING (
"mainModel_withGravityGradientTorq/System (Euler Equation) 1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 6 , TARGET_STRING (
"mainModel_withGravityGradientTorq/omega ->EulerRates" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/initial Omega" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/initial rpms" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/pitch,roll,yaw Initial" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator2" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator3" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Product1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Product2" ) , TARGET_STRING ( "" ) , 0 , 0
, 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Sign" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 2 } , { 14 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 15 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Derivative" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Derivative" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Derivative" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 34 , TARGET_STRING (
"mainModel_withGravityGradientTorq/each wheel Inertia" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 35 , TARGET_STRING (
"mainModel_withGravityGradientTorq/initial Omega" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"mainModel_withGravityGradientTorq/initial rpms" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 37 , TARGET_STRING (
"mainModel_withGravityGradientTorq/magTorq " ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 38 , TARGET_STRING (
"mainModel_withGravityGradientTorq/pitch,roll,yaw Initial" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"mainModel_withGravityGradientTorq/pitch,roll,yaw desired" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING (
"mainModel_withGravityGradientTorq/rad To Deg" ) , TARGET_STRING ( "Value" )
, 0 , 2 , 0 } , { 41 , TARGET_STRING (
"mainModel_withGravityGradientTorq/speeds2" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 42 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator2" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 2 , 0 } , { 43 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 2 , 0 } , { 44 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 2 , 0 } , { 45 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 46 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 47 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 48 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_1/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 49 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 50 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 51 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 52 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_2/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 53 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 54 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 55 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 56 , TARGET_STRING (
"mainModel_withGravityGradientTorq/Attitude Controller/PID_3/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [
] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . j2jysucitj [ 0 ] , & rtB .
hrirjfhalh [ 0 ] , & rtB . d03arivfzz [ 0 ] , & rtB . e1tpxn0dv0 [ 0 ] , &
rtB . oon4uvp3pu [ 0 ] , & rtB . b3df0zasta [ 0 ] , & rtB . pscpolimhb [ 0 ]
, & rtB . ehgllpce2p [ 0 ] , & rtB . hp0bpyvmgi [ 0 ] , & rtB . ajleipz340 ,
& rtB . gyeenk5wbs [ 0 ] , & rtB . pgaix3hgw2 [ 0 ] , & rtB . oxhd25rcd0 , &
rtB . e3kbs4mpqn [ 0 ] , & rtB . bjwwtfmyww [ 0 ] , & rtB . kcc3jbqzn2 [ 0 ]
, & rtB . nlysd2yp3g , & rtB . e2ymaervjk , & rtB . hlrkn22nxk , & rtB .
eruyw0qvm2 , & rtB . mwvkdoiuaf , & rtB . ol0bfpbs1q , & rtB . i0bn02w1pb , &
rtB . gu20ekck0c , & rtB . fg2zpi0j3m , & rtB . ahz4pnrpcr , & rtB .
gshuyvitub , & rtB . kiybllzdza , & rtB . abbitn03eu , & rtB . mu0naw1zj5 , &
rtB . ll40aiwkwf , & rtB . mgmxosp5d2 , & rtB . d5hbg0jkef , & rtB .
g0chwgh3go , & rtP . eachwheelInertia_Value , & rtP . initialOmega_Value [ 0
] , & rtP . initialrpms_Value [ 0 ] , & rtP . magTorq_Value [ 0 ] , & rtP .
pitchrollyawInitial_Value [ 0 ] , & rtP . pitchrollyawdesired_Value [ 0 ] , &
rtP . radToDeg_Value , & rtP . speeds2_Value , & rtP . Integrator2_UpperSat ,
& rtP . Integrator2_LowerSat , & rtP . Integrator3_IC , & rtP .
Gain_Gain_hvers1lhk2 , & rtP . Gain1_Gain_jyeaph4bso , & rtP . Gain2_Gain , &
rtP . Integrator_IC_mi1nfze151 , & rtP . Gain_Gain_j0nwylexu1 , & rtP .
Gain1_Gain_jkygvdcm0j , & rtP . Gain2_Gain_nggjdhdyc1 , & rtP .
Integrator_IC_hsiqnplk4j , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP .
Gain2_Gain_cddumad5uc , & rtP . Integrator_IC , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
3 , 1 , 4 , 1 , 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
, 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( NULL ) , ( NULL ) , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 34 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 23 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1185700031U , 2183018909U , 3697106863U , 3318972077U } , ( NULL ) , 0 ,
0 } ; const rtwCAPI_ModelMappingStaticInfo *
mainModel_withGravityGradientTorq_GetCAPIStaticMap ( ) { return & mmiStatic ;
}
#ifndef HOST_CAPI_BUILD
void mainModel_withGravityGradientTorq_InitializeDataMapInfo ( ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void mainModel_withGravityGradientTorq_host_InitializeDataMapInfo (
mainModel_withGravityGradientTorq_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
