#include "__cf_mainModel_matlab2013b_.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mainModel_matlab2013b__capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "mainModel_matlab2013b_.h"
#include "mainModel_matlab2013b__capi.h"
#include "mainModel_matlab2013b__private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 2 , TARGET_STRING (
"mainModel_matlab2013b_/ReactionWheels" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 3 , TARGET_STRING (
"mainModel_matlab2013b_/System (Euler Equation) 1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 4 , TARGET_STRING (
"mainModel_matlab2013b_/omega ->EulerRates" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/initial Omega" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 4 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/pitch,roll,yaw Initial" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING ( "mainModel_matlab2013b_/speeds"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/1//I" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 }
, { 7 , 0 , TARGET_STRING ( "mainModel_matlab2013b_/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 0 } , { 9 , 0 , TARGET_STRING ( "mainModel_matlab2013b_/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 11 , 1 , TARGET_STRING ( "mainModel_matlab2013b_/Attitude Controller/Tw " )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 ,
0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 19 ,
TARGET_STRING ( "mainModel_matlab2013b_/disturbTorques" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"mainModel_matlab2013b_/each wheel Inertia" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 21 , TARGET_STRING ( "mainModel_matlab2013b_/initial Omega" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"mainModel_matlab2013b_/magTorq " ) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 }
, { 23 , TARGET_STRING ( "mainModel_matlab2013b_/pitch,roll,yaw Initial" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"mainModel_matlab2013b_/pitch,roll,yaw desired" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 25 , TARGET_STRING ( "mainModel_matlab2013b_/rad To Deg" )
, TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 26 , TARGET_STRING (
"mainModel_matlab2013b_/speeds" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } ,
{ 27 , TARGET_STRING ( "mainModel_matlab2013b_/1//I" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 28 , TARGET_STRING (
"mainModel_matlab2013b_/1//I1" ) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , {
29 , TARGET_STRING ( "mainModel_matlab2013b_/Integrator2" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 2 , 0 } , { 30 , TARGET_STRING (
"mainModel_matlab2013b_/Integrator2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 2 , 0 } , { 31 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 32 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 33 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 34 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_1/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 35 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 36 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 37 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 38 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_2/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 39 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 40 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 41 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 42 , TARGET_STRING (
"mainModel_matlab2013b_/Attitude Controller/PID_3/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [
] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . dkfmpnas3p [ 0 ] , & rtB .
nlljjmakob [ 0 ] , & rtB . jqsj3svek0 [ 0 ] , & rtB . k1felwmdht [ 0 ] , &
rtB . exnul2rleq [ 0 ] , & rtB . adwnxz5ipz [ 0 ] , & rtB . l0kmnfav4f [ 0 ]
, & rtB . brzszdbn0r [ 0 ] , & rtB . fh4fxhb3dg [ 0 ] , & rtB . fzngedcyzz [
0 ] , & rtB . fdz33yjl0b [ 0 ] , & rtB . eg1zksfhic [ 0 ] , & rtB .
hn3ztypum0 , & rtB . dpmunjkbhb , & rtB . oy1dkzfhxx , & rtB . c2phj3ex1u , &
rtB . mdbqqd0snu , & rtB . adi0v32ets , & rtB . ftdouwbfxw , & rtP .
disturbTorques_Value [ 0 ] , & rtP . eachwheelInertia_Value , & rtP .
initialOmega_Value [ 0 ] , & rtP . magTorq_Value , & rtP .
pitchrollyawInitial_Value [ 0 ] , & rtP . pitchrollyawdesired_Value [ 0 ] , &
rtP . radToDeg_Value , & rtP . speeds_Value [ 0 ] , & rtP . uI_Gain , & rtP .
uI1_Gain , & rtP . Integrator2_UpperSat , & rtP . Integrator2_LowerSat , &
rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP . Gain2_Gain , & rtP .
Integrator_IC , & rtP . Gain_Gain_j0nwylexu1 , & rtP . Gain1_Gain_jkygvdcm0j
, & rtP . Gain2_Gain_nggjdhdyc1 , & rtP . Integrator_IC_hsiqnplk4j , & rtP .
Gain_Gain_hskt0iupyl , & rtP . Gain1_Gain_akkqzazk2e , & rtP .
Gain2_Gain_cddumad5uc , & rtP . Integrator_IC_it4x1oof30 , } ; static int32_T
* rtVarDimsAddrMap [ ] = { ( NULL ) } ;
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
} ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 19 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters ,
24 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3618624860U , 1741498447U , 3451858621U ,
800435400U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b__GetCAPIStaticMap ( ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void mainModel_matlab2013b__InitializeDataMapInfo ( ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void mainModel_matlab2013b__host_InitializeDataMapInfo (
mainModel_matlab2013b__host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
