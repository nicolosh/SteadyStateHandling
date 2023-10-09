#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_wJ1El33Mk52QuwzDLEuotF" , 17 , 32 } , {
"struct_ZRUF3KhXFRYvP5folOM1TB" , 18 , 24 } , {
"struct_dTcJHz0o7i9sm4sjv5ngsH" , 19 , 16 } , {
"struct_SpzLGiryLr8KmNTzcKmWiF" , 20 , 16 } , {
"struct_Oct2zUo2CydimxV0XiGWY" , 21 , 8 } , { "struct_OAMH7Qwj0h8uLDH027x7qC"
, 22 , 48 } , { "struct_rABjVl0UfkMcoNVYwlxNxD" , 23 , 48 } , {
"struct_QAb0Ilx1yjnHWWRDNeUOSC" , 24 , 32 } , {
"struct_950VGV7snJrVrzqYwt1XjG" , 25 , 88 } , {
"struct_NrsHEQiGh6j4fuROFu66i" , 26 , 80 } , { "struct_o3Y3sa8fxKXdOg0eNUVdy"
, 27 , 56 } , { "struct_hquwOvpzysS5ksrfqDad3B" , 28 , 48 } , {
"struct_eecRm0WjdBFDPQYjgNpH3F" , 29 , 16 } , {
"struct_5JuCLKSx3OjOQirRvNgS9G" , 30 , 808 } , {
"struct_H2nwtcPvWoOjJyhrWtEKfE" , 31 , 8 } , { "struct_idlOjeEbND8QT96FWUxqj"
, 32 , 120 } , { "struct_TffyZBIiIMpjESkplMpAxB" , 33 , 2264 } , { "uint64_T"
, 34 , 8 } , { "int64_T" , 35 , 8 } , { "uint_T" , 36 , 32 } , { "char_T" ,
37 , 8 } , { "uchar_T" , 38 , 8 } , { "time_T" , 39 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( struct_wJ1El33Mk52QuwzDLEuotF ) , sizeof (
struct_ZRUF3KhXFRYvP5folOM1TB ) , sizeof ( struct_dTcJHz0o7i9sm4sjv5ngsH ) ,
sizeof ( struct_SpzLGiryLr8KmNTzcKmWiF ) , sizeof (
struct_Oct2zUo2CydimxV0XiGWY ) , sizeof ( struct_OAMH7Qwj0h8uLDH027x7qC ) ,
sizeof ( struct_rABjVl0UfkMcoNVYwlxNxD ) , sizeof (
struct_QAb0Ilx1yjnHWWRDNeUOSC ) , sizeof ( struct_950VGV7snJrVrzqYwt1XjG ) ,
sizeof ( struct_NrsHEQiGh6j4fuROFu66i ) , sizeof (
struct_o3Y3sa8fxKXdOg0eNUVdy ) , sizeof ( struct_hquwOvpzysS5ksrfqDad3B ) ,
sizeof ( struct_eecRm0WjdBFDPQYjgNpH3F ) , sizeof (
struct_5JuCLKSx3OjOQirRvNgS9G ) , sizeof ( struct_H2nwtcPvWoOjJyhrWtEKfE ) ,
sizeof ( struct_idlOjeEbND8QT96FWUxqj ) , sizeof (
struct_TffyZBIiIMpjESkplMpAxB ) , sizeof ( uint64_T ) , sizeof ( int64_T ) ,
sizeof ( uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T
) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"struct_wJ1El33Mk52QuwzDLEuotF" , "struct_ZRUF3KhXFRYvP5folOM1TB" ,
"struct_dTcJHz0o7i9sm4sjv5ngsH" , "struct_SpzLGiryLr8KmNTzcKmWiF" ,
"struct_Oct2zUo2CydimxV0XiGWY" , "struct_OAMH7Qwj0h8uLDH027x7qC" ,
"struct_rABjVl0UfkMcoNVYwlxNxD" , "struct_QAb0Ilx1yjnHWWRDNeUOSC" ,
"struct_950VGV7snJrVrzqYwt1XjG" , "struct_NrsHEQiGh6j4fuROFu66i" ,
"struct_o3Y3sa8fxKXdOg0eNUVdy" , "struct_hquwOvpzysS5ksrfqDad3B" ,
"struct_eecRm0WjdBFDPQYjgNpH3F" , "struct_5JuCLKSx3OjOQirRvNgS9G" ,
"struct_H2nwtcPvWoOjJyhrWtEKfE" , "struct_idlOjeEbND8QT96FWUxqj" ,
"struct_TffyZBIiIMpjESkplMpAxB" , "uint64_T" , "int64_T" , "uint_T" ,
"char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & rtB . d3xonmy1hw [ 0 ] ) , 0 , 0 , 105 } , { (
char_T * ) ( & rtDW . d3fbkn3bca [ 0 ] ) , 0 , 0 , 48 } , { ( char_T * ) ( &
rtDW . d5dbtip34d . LoggedData ) , 11 , 0 , 62 } , { ( char_T * ) ( & rtDW .
jowpdqkr40 ) , 6 , 0 , 2 } , { ( char_T * ) ( & rtDW . milaeogcvv ) , 3 , 0 ,
2 } , { ( char_T * ) ( & rtDW . h2sjcswtty ) , 8 , 0 , 2 } } ; static
DataTypeTransitionTable rtBTransTable = { 6U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
vehicle_data ) , 33 , 0 , 1 } , { ( char_T * ) ( & rtP . Const_DeltaH ) , 0 ,
0 , 94 } } ; static DataTypeTransitionTable rtPTransTable = { 2U ,
rtPTransitions } ;
