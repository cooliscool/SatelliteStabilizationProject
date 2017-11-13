#include "__cf_mainModel_matlab2013a.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mainModel_matlab2013a_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "mainModel_matlab2013a.h"
#include "mainModel_matlab2013a_capi.h"
#include "mainModel_matlab2013a_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"mainModel_matlab2013a/Attitude Controller " ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 1 , 2 , TARGET_STRING (
"mainModel_matlab2013a/ReactionWheels" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 0 } , { 2 , 3 , TARGET_STRING (
"mainModel_matlab2013a/System (Euler Equation) " ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 3 , 4 , TARGET_STRING (
"mainModel_matlab2013a/omega ->EulerRates" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "mainModel_matlab2013a/initial Omega"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"mainModel_matlab2013a/pitch,roll,yaw Initial" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING ( "mainModel_matlab2013a/speeds" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"mainModel_matlab2013a/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 ,
0 } , { 8 , 0 , TARGET_STRING ( "mainModel_matlab2013a/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 9 , TARGET_STRING (
"mainModel_matlab2013a/disturbTorques" ) , TARGET_STRING ( "Value" ) , 0 , 1
, 0 } , { 10 , TARGET_STRING ( "mainModel_matlab2013a/each wheel Inertia" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 11 , TARGET_STRING (
"mainModel_matlab2013a/initial Omega" ) , TARGET_STRING ( "Value" ) , 0 , 1 ,
0 } , { 12 , TARGET_STRING ( "mainModel_matlab2013a/magTorq " ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 13 , TARGET_STRING (
"mainModel_matlab2013a/pitch,roll,yaw Initial" ) , TARGET_STRING ( "Value" )
, 0 , 1 , 0 } , { 14 , TARGET_STRING (
"mainModel_matlab2013a/pitch,roll,yaw desired" ) , TARGET_STRING ( "Value" )
, 0 , 1 , 0 } , { 15 , TARGET_STRING ( "mainModel_matlab2013a/rad To Deg" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 16 , TARGET_STRING (
"mainModel_matlab2013a/speeds" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 17 , TARGET_STRING ( "mainModel_matlab2013a/Integrator2" ) , TARGET_STRING
( "UpperSaturationLimit" ) , 0 , 2 , 0 } , { 18 , TARGET_STRING (
"mainModel_matlab2013a/Integrator2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . myuvxki5uz [ 0 ] , & rtB .
lfcefqioah [ 0 ] , & rtB . bolfbkf5bm [ 0 ] , & rtB . f5dkugssxf [ 0 ] , &
rtB . pqvw0y53rd [ 0 ] , & rtB . imaxglwpam [ 0 ] , & rtB . lsvistcdke [ 0 ]
, & rtB . icv3szrgyv [ 0 ] , & rtB . gc2jbymdlz [ 0 ] , & rtP .
disturbTorques_Value [ 0 ] , & rtP . eachwheelInertia_Value , & rtP .
initialOmega_Value [ 0 ] , & rtP . magTorq_Value , & rtP .
pitchrollyawInitial_Value [ 0 ] , & rtP . pitchrollyawdesired_Value [ 0 ] , &
rtP . radToDeg_Value , & rtP . speeds_Value [ 0 ] , & rtP .
Integrator2_UpperSat , & rtP . Integrator2_LowerSat , } ; static int32_T *
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
4 , 1 , 3 , 1 , 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
} ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 9 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 10
, rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3340177895U , 3593844884U , 2649559681U ,
2269019960U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013a_GetCAPIStaticMap ( ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void mainModel_matlab2013a_InitializeDataMapInfo ( ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void mainModel_matlab2013a_host_InitializeDataMapInfo (
mainModel_matlab2013a_host_DataMapInfo_T * dataMap , const char * path ) {
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
