#include "__cf_mainModel_withGravityGradientTorq.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . b3df0zasta
[ 0 ] ) , 0 , 0 , 67 } , { ( char_T * ) ( & rtDW . l2ffbaetqv ) , 0 , 0 , 12
} , { ( char_T * ) ( & rtDW . mwngb1ix2a . LoggedData ) , 11 , 0 , 2 } , { (
char_T * ) ( & rtDW . g2pyfvrqkr ) , 10 , 0 , 11 } } ; static
DataTypeTransitionTable rtBTransTable = { 4U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
pitchrollyawdesired_Value [ 0 ] ) , 0 , 0 , 34 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
