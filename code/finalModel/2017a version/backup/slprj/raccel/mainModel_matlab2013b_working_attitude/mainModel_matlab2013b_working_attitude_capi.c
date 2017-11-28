#include "__cf_mainModel_matlab2013b_working_attitude.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mainModel_matlab2013b_working_attitude_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "mainModel_matlab2013b_working_attitude.h"
#include "mainModel_matlab2013b_working_attitude_capi.h"
#include "mainModel_matlab2013b_working_attitude_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 3 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/ReactionWheels" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 4 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/System (Euler Equation) 1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 5 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/omega ->EulerRates" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/initial Omega" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/initial rpms" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/pitch,roll,yaw Initial" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator2" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator3" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Product1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Product2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Sign" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Sum" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Derivative"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Derivative"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Derivative"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 34 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/disturbTorques" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 35 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/each wheel Inertia" ) , TARGET_STRING
( "Value" ) , 0 , 2 , 0 } , { 36 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/initial Omega" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/initial rpms" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/magTorq " ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/pitch,roll,yaw Initial" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/pitch,roll,yaw desired" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/rad To Deg" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 42 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/speeds2" ) , TARGET_STRING ( "Value"
) , 0 , 2 , 0 } , { 43 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator2" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 2 , 0 } , { 44 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 2 , 0 } , { 45 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 2 , 0 } , { 46 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 47 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 48 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 49 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 50 , TARGET_STRING
( "mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 51 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 52 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 53 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_2/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 54 , TARGET_STRING
( "mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 55 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 56 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 57 , TARGET_STRING (
"mainModel_matlab2013b_working_attitude/Attitude Controller/PID_3/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . iquwqtloz2 [ 0 ] , & rtB .
k2osk23xhu [ 0 ] , & rtB . m3fzt0sb4m [ 0 ] , & rtB . ij0ukvecpm [ 0 ] , &
rtB . aiazydzpqj [ 0 ] , & rtB . j242gvklzp [ 0 ] , & rtB . ciu3iftexw [ 0 ]
, & rtB . opuriyedv5 [ 0 ] , & rtB . etpz3h2yod [ 0 ] , & rtB . m3lvyi4r0k ,
& rtB . feo55pwd4v [ 0 ] , & rtB . n1ohjrgzng [ 0 ] , & rtB . op2c2ayack , &
rtB . cdqa1b2rvw [ 0 ] , & rtB . orau2tzp4m [ 0 ] , & rtB . ntaykcqfbm [ 0 ]
, & rtB . jy0q2ywt2j , & rtB . ae34v1uhhb , & rtB . indmgstqaw , & rtB .
jj1m4pu4xq , & rtB . klldvinnn2 , & rtB . bs1e1pomfr , & rtB . gy3r40ngvs , &
rtB . au3ih54l51 , & rtB . h5mdsiajxq , & rtB . pnr1rsr5m2 , & rtB .
mdrm0m2uev , & rtB . ddvv2mb4q1 , & rtB . mgfx13stav , & rtB . kjlahy3veo , &
rtB . ocl3m0dxtp , & rtB . jhmk22jwb1 , & rtB . emo54xl1nm , & rtB .
hgkvorfmp1 , & rtP . disturbTorques_Value [ 0 ] , & rtP .
eachwheelInertia_Value , & rtP . initialOmega_Value [ 0 ] , & rtP .
initialrpms_Value [ 0 ] , & rtP . magTorq_Value [ 0 ] , & rtP .
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
, 34 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 24 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 87242270U , 580552886U , 3648892907U , 1584751160U } , ( NULL ) , 0 , 0 }
; const rtwCAPI_ModelMappingStaticInfo *
mainModel_matlab2013b_working_attitude_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void mainModel_matlab2013b_working_attitude_InitializeDataMapInfo ( ) {
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
void mainModel_matlab2013b_working_attitude_host_InitializeDataMapInfo (
mainModel_matlab2013b_working_attitude_host_DataMapInfo_T * dataMap , const
char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
