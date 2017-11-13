#include "__cf_mainModel_matlab2013a_debugVersion.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mainModel_matlab2013a_debugVersion_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "mainModel_matlab2013a_debugVersion.h"
#include "mainModel_matlab2013a_debugVersion_capi.h"
#include "mainModel_matlab2013a_debugVersion_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Attitude Controller " ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 2 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/ReactionWheels" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 2 , 2 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/ReactionWheels" ) , TARGET_STRING ( "" )
, 1 , 0 , 1 , 0 , 0 } , { 3 , 3 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/System (Euler Equation) " ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 4 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/omega ->EulerRates" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/initial Omega" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/pitch,roll,yaw Initial" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/speeds" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Integrator" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Integrator1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Integrator2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 12 ,
TARGET_STRING ( "mainModel_matlab2013a_debugVersion/each wheel Inertia" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 13 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/initial Omega" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 14 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/magTorq " ) , TARGET_STRING ( "Value" ) ,
0 , 1 , 0 } , { 15 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/pitch,roll,yaw Initial" ) , TARGET_STRING
( "Value" ) , 0 , 1 , 0 } , { 16 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/pitch,roll,yaw desired" ) , TARGET_STRING
( "Value" ) , 0 , 1 , 0 } , { 17 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/rad To Deg" ) , TARGET_STRING ( "Value" )
, 0 , 2 , 0 } , { 18 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/speeds" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 19 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/zero 1" ) , TARGET_STRING ( "Value" ) , 0
, 1 , 0 } , { 20 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/zero disrturbance " ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 21 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Integrator2" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 2 , 0 } , { 22 , TARGET_STRING (
"mainModel_matlab2013a_debugVersion/Integrator2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . alhexilcl1 [ 0 ] , & rtB .
evsm35ybx5 [ 0 ] , & rtB . a43erptiha [ 0 ] , & rtB . gr1z41kuv0 [ 0 ] , &
rtB . aacbkzxdi2 [ 0 ] , & rtB . ixylsjphip [ 0 ] , & rtB . dbndezqpsz [ 0 ]
, & rtB . jhhwutstv4 [ 0 ] , & rtB . iavo2yiw5k [ 0 ] , & rtB . npz23xukiv [
0 ] , & rtB . jcw4uwsbuk [ 0 ] , & rtB . mlj4oqsqq0 [ 0 ] , & rtP .
eachwheelInertia_Value , & rtP . initialOmega_Value [ 0 ] , & rtP .
magTorq_Value [ 0 ] , & rtP . pitchrollyawInitial_Value [ 0 ] , & rtP .
pitchrollyawdesired_Value [ 0 ] , & rtP . radToDeg_Value , & rtP .
speeds_Value [ 0 ] , & rtP . zero1_Value [ 0 ] , & rtP .
zerodisrturbance_Value [ 0 ] , & rtP . Integrator2_UpperSat , & rtP .
Integrator2_LowerSat , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL )
} ;
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
rtBlockSignals , 12 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters ,
11 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3938103703U , 2568485121U , 1885326149U ,
2849358959U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013a_debugVersion_GetCAPIStaticMap ( ) { return & mmiStatic
; }
#ifndef HOST_CAPI_BUILD
void mainModel_matlab2013a_debugVersion_InitializeDataMapInfo ( ) {
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
void mainModel_matlab2013a_debugVersion_host_InitializeDataMapInfo (
mainModel_matlab2013a_debugVersion_host_DataMapInfo_T * dataMap , const char
* path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
