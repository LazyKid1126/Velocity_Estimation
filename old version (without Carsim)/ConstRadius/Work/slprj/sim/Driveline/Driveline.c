#include "Driveline.h"
#include "rtwtypes.h"
#include "Driveline_private.h"
#include "mwmathutil.h"
#include "automldiffas_AFMg5hId.h"
#include "Driveline_capi.h"
#include "look1_binlxpw.h"
#include "look1_binlcpw.h"
#include "zero_crossing_types.h"
#include "plook_u32d_binckan.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_Driveline [ 59 ] = { { "jqwwoyb30s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"d3gakkxfww" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "a2ygobmwxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "ff2cksbxt0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "cfznqp4b1y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"dtppvsdcp2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "l41wzh1l0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "ln3lkwz4rh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "kmddtugdcs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"o0yp5nw210" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "mrk1ln3yua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "djxjuig0lf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "efchnu4f1l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"n5qm5cab0up" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Driveline"
} , { "jn1etpvcka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "ewin1y1mwc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "bhoei0xoot" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "grfcawoazk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"l1pljxktrl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "bjbjifrsrv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "oakdhkzk5b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "brjax2ilbj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"gvxaj4x0qw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "n5wdhep3vv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "azw1xo1vqg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "bsz3qtxrxd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"fxrjyezkwn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "p0pqiusydn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "btsnzboicn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "p51od2swfx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"m2vwjmi2um" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "oms0l24gxw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "bpgqz3xzpl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "cyzpp4e52p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"aj1apekess" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "djkfokdtse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "jnccjczqwr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "igx4apxpta" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"me451mp2tt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "Driveline" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "nrwapxhmtv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Driveline" } , { "coyvih0rk1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Driveline" } , { "dwsgrvz41y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"hmusoyi44o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "struct_gd1DcuoPLQ4kduEClWjbAB" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "mr_Driveline_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Driveline" } , { "mr_Driveline_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Driveline" } , { "mr_Driveline_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Driveline" } , { "mr_Driveline_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Driveline" } , { "Driveline.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "Driveline.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Driveline" } } ; gimbih1di0h gimbih1di0 = { 0.01 , 0.0 , 0.0 , { - 1.0 , 0.0
, 1.0 , 2.0 , 3.0 , 4.0 , 5.0 , 6.0 , 7.0 , 8.0 } , 0.0 , 0.08 , 0.003 , {
0.128 , 0.027999999999999997 , 0.128 , 0.1 , 0.062 , 0.028 , 0.01 , 0.01 ,
0.01 , 0.01 } , 0.01 , 0.01 , { - 3.82 , 4.56 , 4.56 , 2.97 , 2.08 , 1.69 ,
1.27 , 1.0 , 0.85 , 0.65 } , 2.77 , 4.0 , 0.875 , 1.125 , 100.0 , 0.08 , 18.0
, 9.42477796076938 , 1.922 , 3.019 , 10.0 , 10.0 , 10.0 , 0.001 , { 0.003 ,
0.001 , 0.003 , 0.0025 , 0.002 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ,
0.001 , 0.001 , 0.0 , 0.0 , 0.0 , { 0.0 , 10.0 , 20.0 , 40.0 , 60.0 , 80.0 ,
100.0 , 1000.0 } , { 0.9 , 0.9 , 0.9 , 0.9 , 0.9 , 0.95 , 0.95 , 0.95 , 0.95
, 0.95 } , 5000.0 , 5000.0 , 5000.0 , { 0.16 , 0.13 , 0.115 , 0.11 , 0.105 ,
0.1025 , 0.10125 , 0.10125 } , 0.0 , 100.0 , 100.0 , 100.0 , 0.0 , 0.0 , 0.0
, 0.04 , 0.02 , 0.0 , 0.0 , 0.0 , 1.0E-6 , 1.0E-6 , 1.4901161193847656E-8 ,
1.4901161193847656E-8 , 125.66370614359172 , 1.0 , 0.0 , 0.001 , 0.0 , 20.0 ,
4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 20.0 , 4.0 , 0.5 , - 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 5000.0 , - 5000.0 , - 0.5 , 0.5 , 0.0 , -
0.5 , 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
8.0E+6 , 1.0 , 1.0 , 1.0 , 2.0 , 2.0 , 0.5 , 0.5 , 1.0 , 1.0 , 1.0 ,
6.2831853071795862 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.6 , 8 , - 1 , {
0.0 , 0.0 , 0.0 , 4.0 , 6.2831853071795862 } } ; void djkfokdtse ( dwsgrvz41y
* const pubqvcmed4 , real_T * azye50kz02 , bsz3qtxrxd * localDW , oakdhkzk5b
* localX ) { int32_T mr12l2gfl3 ; boolean_T tmp ; localDW -> evqmiddoxr = (
rtMinusInf ) ; localDW -> bqkc421nzr = localDW -> evqmiddoxr ; localDW ->
gjhljassw3 = gimbih1di0 . P_94 ; localDW -> kzqr3mv2f3 = localDW ->
gjhljassw3 ; localDW -> l502nimlgu = gimbih1di0 . P_99 ; localDW ->
a3mzd4aqhf = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX ->
nkhwyywomp = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> a3mzd4aqhf = ! tmp ; } else { localDW -> a3mzd4aqhf = 1 ; } localX ->
hddpi2g224 = 0.0 ; } localX -> gmkd3jzxo3 = gimbih1di0 . P_46 ; localDW ->
f3zzxvwsi0 = gimbih1di0 . P_100 ; localDW -> lgx52collq = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> lgx52collq = ! tmp ; } else { localDW -> lgx52collq = 1 ; } localX ->
o2lamygnrv = 0.0 ; } localX -> aaxaf4jedn = gimbih1di0 . P_47 ; localDW ->
fjczxzuj0e = gimbih1di0 . P_101 ; localDW -> g3picovpjs = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> g3picovpjs = ! tmp ; } else { localDW -> g3picovpjs = 1 ; } localX ->
apjpgtpiwz [ 0 ] = 0.0 ; localX -> apjpgtpiwz [ 1 ] = 0.0 ; } localX ->
jkxxbnfgvy = gimbih1di0 . P_48 ; localDW -> arxnnxrfcl = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> arxnnxrfcl = ! tmp ; } else { localDW -> arxnnxrfcl = 1 ; } localX ->
ioq10m20tp = 0.0 ; } localDW -> djp1o4y0ml = gimbih1di0 . P_106 ; localDW ->
oddg33f5qe = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW -> oddg33f5qe = ! tmp ; } else {
localDW -> oddg33f5qe = 1 ; } } localX -> nbshvx4uu4 [ 0 ] = gimbih1di0 .
P_119 ; localX -> nbshvx4uu4 [ 1 ] = gimbih1di0 . P_119 ; localX ->
nbshvx4uu4 [ 2 ] = gimbih1di0 . P_119 ; localX -> nbshvx4uu4 [ 3 ] =
gimbih1di0 . P_119 ; for ( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ )
{ localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 = gimbih1di0 . akkqis3b1g
. P_0 ; } localDW -> fiuvbwgdvm = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 )
) { localX -> ih5x40znwx = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> fiuvbwgdvm = ! tmp ; } else { localDW -> fiuvbwgdvm = 1 ; } localX ->
lsght3lvcc = 0.0 ; } localDW -> p2muon2qgq = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW -> p2muon2qgq = ! tmp ; } else {
localDW -> p2muon2qgq = 1 ; } localX -> oinmq3iuai = 0.0 ; } localDW ->
jcljt300rr = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW -> jcljt300rr = ! tmp ; } else {
localDW -> jcljt300rr = 1 ; } } * azye50kz02 = gimbih1di0 . P_115 ; } void
aj1apekess ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd * localDW ,
oakdhkzk5b * localX ) { int32_T mr12l2gfl3 ; boolean_T tmp ; localDW ->
evqmiddoxr = ( rtMinusInf ) ; localDW -> bqkc421nzr = localDW -> evqmiddoxr ;
localDW -> gjhljassw3 = gimbih1di0 . P_94 ; localDW -> kzqr3mv2f3 = localDW
-> gjhljassw3 ; localDW -> l502nimlgu = gimbih1di0 . P_99 ; localDW ->
a3mzd4aqhf = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX ->
nkhwyywomp = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> a3mzd4aqhf = ! tmp ; } else { localDW -> a3mzd4aqhf = 1 ; } localX ->
hddpi2g224 = 0.0 ; } localX -> gmkd3jzxo3 = gimbih1di0 . P_46 ; localDW ->
f3zzxvwsi0 = gimbih1di0 . P_100 ; localDW -> lgx52collq = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> lgx52collq = ! tmp ; } else { localDW -> lgx52collq = 1 ; } localX ->
o2lamygnrv = 0.0 ; } localX -> aaxaf4jedn = gimbih1di0 . P_47 ; localDW ->
fjczxzuj0e = gimbih1di0 . P_101 ; localDW -> g3picovpjs = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> g3picovpjs = ! tmp ; } else { localDW -> g3picovpjs = 1 ; } localX ->
apjpgtpiwz [ 0 ] = 0.0 ; localX -> apjpgtpiwz [ 1 ] = 0.0 ; } localX ->
jkxxbnfgvy = gimbih1di0 . P_48 ; localDW -> arxnnxrfcl = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> arxnnxrfcl = ! tmp ; } else { localDW -> arxnnxrfcl = 1 ; } localX ->
ioq10m20tp = 0.0 ; } localDW -> djp1o4y0ml = gimbih1di0 . P_106 ; localDW ->
oddg33f5qe = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW -> oddg33f5qe = ! tmp ; } else {
localDW -> oddg33f5qe = 1 ; } } localX -> nbshvx4uu4 [ 0 ] = gimbih1di0 .
P_119 ; localX -> nbshvx4uu4 [ 1 ] = gimbih1di0 . P_119 ; localX ->
nbshvx4uu4 [ 2 ] = gimbih1di0 . P_119 ; localX -> nbshvx4uu4 [ 3 ] =
gimbih1di0 . P_119 ; for ( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ )
{ localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 = gimbih1di0 . akkqis3b1g
. P_0 ; } } void m2vwjmi2um ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd *
localDW , l1pljxktrl * localXdis ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( pubqvcmed4 , 0 ) == rtmGetTStart ( pubqvcmed4 ) ) { (
void ) memset ( & ( localXdis -> ih5x40znwx ) , 1 , 1 * sizeof ( boolean_T )
) ; ( void ) memset ( & ( localXdis -> lsght3lvcc ) , 1 , 2 * sizeof (
boolean_T ) ) ; } switch ( localDW -> katpv1neqp ) { case 0 : ( void ) memset
( & ( localXdis -> ih5x40znwx ) , 1 , 1 * sizeof ( boolean_T ) ) ; break ;
case 1 : ( void ) memset ( & ( localXdis -> lsght3lvcc ) , 1 , 2 * sizeof (
boolean_T ) ) ; break ; default : break ; } localDW -> katpv1neqp = - 1 ; }
void igx4apxpta ( dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn * localB ,
bsz3qtxrxd * localDW , l1pljxktrl * localXdis ) { int32_T mr12l2gfl3 ; for (
mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { localB -> akkqis3b1g [
mr12l2gfl3 ] . cmpm3o524c = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] .
ot43cxvyf5 = 0.0 ; } localB -> azy2w5alq3 = gimbih1di0 . P_28 ; localB ->
d0jehmw3q3 = gimbih1di0 . P_29 ; localB -> hwwksosp2m = gimbih1di0 . P_4 ;
localB -> jtndft2kbq = gimbih1di0 . P_30 ; localDW -> lipy4djzen = true ;
localDW -> aatsaj2ujy = true ; localDW -> i1vb2cxyv5 = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> ih5x40znwx ) , 1 , 1 * sizeof ( boolean_T )
) ; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS )
; ( void ) memset ( & ( localXdis -> lsght3lvcc ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> katpv1neqp = - 1 ; } void Driveline ( dwsgrvz41y *
const pubqvcmed4 , const real_T * j45cp5ppdn , const real_T * ldxbfzy4yw ,
real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] , real_T bumnd4n3ix [ 4 ] ,
real_T * azye50kz02 , real_T * i215und1x3 , real_T * ozyafdk0b2 , fxrjyezkwn
* localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE
, l1pljxktrl * localXdis ) { real_T a1ctedcnd3_p ; real_T a1tycyth54_p ;
real_T dvbs0mrbwy_p ; real_T ex2z4hqbfn_p ; real_T g0do0k1wre_p ; real_T
gtjprd0hrs_p ; real_T hv3kmq3cbo_idx_1 ; real_T jqpx5w0xkr_p ; real_T
m2tzrg2ceo_p ; real_T ms01hvzkm1 ; real_T nohfh1xecp_p ; real_T * lastY ;
int8_T rtAction ; int8_T rtPrevAction ; boolean_T xHasBeenChanged ;
ZCEventType zcEvent ; iioyllnquu [ 2 ] = localB -> dawtydtywl [ 0 ] ;
iioyllnquu [ 3 ] = localB -> dawtydtywl [ 1 ] ; jqpx5w0xkr_p = gimbih1di0 .
P_1 / 2.0 ; if ( localDW -> bqkc421nzr < localDW -> evqmiddoxr ) { if (
localDW -> evqmiddoxr < rtmGetTaskTime ( pubqvcmed4 , 0 ) ) { lastY = &
localDW -> gjhljassw3 ; } else { lastY = & localDW -> kzqr3mv2f3 ; } } else
if ( localDW -> bqkc421nzr < rtmGetTaskTime ( pubqvcmed4 , 0 ) ) { lastY = &
localDW -> kzqr3mv2f3 ; } else { lastY = & localDW -> gjhljassw3 ; } if ( *
j45cp5ppdn < * lastY - jqpx5w0xkr_p ) { localB -> j5xttbspxt = * j45cp5ppdn +
jqpx5w0xkr_p ; } else if ( * j45cp5ppdn <= * lastY + jqpx5w0xkr_p ) { localB
-> j5xttbspxt = * lastY ; } else { localB -> j5xttbspxt = * j45cp5ppdn -
jqpx5w0xkr_p ; } if ( localB -> j5xttbspxt > gimbih1di0 . P_18 ) {
hv3kmq3cbo_idx_1 = gimbih1di0 . P_18 ; } else if ( localB -> j5xttbspxt < -
gimbih1di0 . P_18 ) { hv3kmq3cbo_idx_1 = - gimbih1di0 . P_18 ; } else {
hv3kmq3cbo_idx_1 = localB -> j5xttbspxt ; } jqpx5w0xkr_p = 1.0 / gimbih1di0 .
P_17 * hv3kmq3cbo_idx_1 ; ms01hvzkm1 = muDoubleScalarTan ( jqpx5w0xkr_p ) ;
a1tycyth54_p = gimbih1di0 . P_19 / 2.0 * ms01hvzkm1 ; gtjprd0hrs_p =
gimbih1di0 . P_20 + a1tycyth54_p ; a1tycyth54_p = gimbih1di0 . P_20 -
a1tycyth54_p ; dvbs0mrbwy_p = gimbih1di0 . P_20 * ms01hvzkm1 ; if ( (
gtjprd0hrs_p >= - gimbih1di0 . P_52 ) && ( gtjprd0hrs_p <= gimbih1di0 . P_52
) ) { hv3kmq3cbo_idx_1 = 2.9802322387695312E-8 / ( 3.0 - muDoubleScalarPower
( gtjprd0hrs_p / 1.4901161193847656e-8 , 2.0 ) ) ; } else { hv3kmq3cbo_idx_1
= muDoubleScalarAbs ( gtjprd0hrs_p ) ; } if ( ( a1tycyth54_p >= - gimbih1di0
. P_51 ) && ( a1tycyth54_p <= gimbih1di0 . P_51 ) ) { ms01hvzkm1 =
2.9802322387695312E-8 / ( 3.0 - muDoubleScalarPower ( a1tycyth54_p /
1.4901161193847656e-8 , 2.0 ) ) ; } else { ms01hvzkm1 = muDoubleScalarAbs (
a1tycyth54_p ) ; } if ( jqpx5w0xkr_p > gimbih1di0 . P_95 ) { gtjprd0hrs_p =
muDoubleScalarAtan ( dvbs0mrbwy_p / ms01hvzkm1 ) ; hv3kmq3cbo_idx_1 =
muDoubleScalarAtan ( 1.0 / hv3kmq3cbo_idx_1 * dvbs0mrbwy_p ) ; } else {
gtjprd0hrs_p = muDoubleScalarAtan ( 1.0 / hv3kmq3cbo_idx_1 * dvbs0mrbwy_p ) ;
hv3kmq3cbo_idx_1 = muDoubleScalarAtan ( dvbs0mrbwy_p / ms01hvzkm1 ) ; } if (
jqpx5w0xkr_p > gimbih1di0 . P_96 ) { jqpx5w0xkr_p = ( 1.0 - gimbih1di0 . P_15
/ 100.0 ) * gtjprd0hrs_p + gimbih1di0 . P_15 / 100.0 * hv3kmq3cbo_idx_1 ; }
else { jqpx5w0xkr_p = gtjprd0hrs_p ; gtjprd0hrs_p = ( 1.0 - gimbih1di0 . P_15
/ 100.0 ) * gtjprd0hrs_p + gimbih1di0 . P_15 / 100.0 * hv3kmq3cbo_idx_1 ; }
if ( gimbih1di0 . P_121 > gimbih1di0 . P_97 ) { iioyllnquu [ 0 ] =
jqpx5w0xkr_p ; } else { iioyllnquu [ 0 ] = - jqpx5w0xkr_p ; } if ( gimbih1di0
. P_121 > gimbih1di0 . P_98 ) { iioyllnquu [ 1 ] = gtjprd0hrs_p ; } else {
iioyllnquu [ 1 ] = - gtjprd0hrs_p ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 )
&& rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB -> ldyqtus3b1 = localDW
-> l502nimlgu ; } if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS )
) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> p3b4nvkjzw , (
localB -> ldyqtus3b1 ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW ->
a3mzd4aqhf != 0 ) ) { xHasBeenChanged = ( localX -> nkhwyywomp != localB ->
jtndft2kbq ) ; localX -> nkhwyywomp = localB -> jtndft2kbq ; if (
xHasBeenChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4
-> _mdlRefSfcnS ) ; } } jqpx5w0xkr_p = localX -> nkhwyywomp ; } else {
jqpx5w0xkr_p = localX -> nkhwyywomp ; } localB -> fmrgomzsqy = gimbih1di0 .
P_21 * jqpx5w0xkr_p + gimbih1di0 . P_33 * localX -> gmkd3jzxo3 ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> mzx53cggq1 = localDW -> f3zzxvwsi0 ; } if (
ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> giezqglh10 , ( localB -> mzx53cggq1 )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> lgx52collq != 0 ) ) {
xHasBeenChanged = ( localX -> hddpi2g224 != localB -> azy2w5alq3 ) ; localX
-> hddpi2g224 = localB -> azy2w5alq3 ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} gtjprd0hrs_p = localX -> hddpi2g224 ; } else { gtjprd0hrs_p = localX ->
hddpi2g224 ; } a1tycyth54_p = gimbih1di0 . P_22 * gtjprd0hrs_p + gimbih1di0 .
P_34 * localX -> aaxaf4jedn ; localB -> czjkzob4kw = - a1tycyth54_p ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> ci1kr4pcyc = localDW -> fjczxzuj0e ; } if (
ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> obw1lxt001 , ( localB -> ci1kr4pcyc )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> g3picovpjs != 0 ) ) {
xHasBeenChanged = ( localX -> o2lamygnrv != localB -> d0jehmw3q3 ) ; localX
-> o2lamygnrv = localB -> d0jehmw3q3 ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} dvbs0mrbwy_p = localX -> o2lamygnrv ; } else { dvbs0mrbwy_p = localX ->
o2lamygnrv ; } g0do0k1wre_p = gimbih1di0 . P_23 * dvbs0mrbwy_p + gimbih1di0 .
P_35 * localX -> jkxxbnfgvy ; localB -> o3bsjprwpn = - g0do0k1wre_p ; if (
ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { if ( localDW ->
arxnnxrfcl != 0 ) { localX -> apjpgtpiwz [ 0 ] = localB -> eg5ccevnky [ 0 ] ;
localX -> apjpgtpiwz [ 1 ] = localB -> eg5ccevnky [ 1 ] ; } if ( localX ->
apjpgtpiwz [ 0 ] >= gimbih1di0 . P_102 ) { if ( localX -> apjpgtpiwz [ 0 ] !=
gimbih1di0 . P_102 ) { localX -> apjpgtpiwz [ 0 ] = gimbih1di0 . P_102 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> apjpgtpiwz [ 0 ] <= gimbih1di0 . P_103 ) && ( localX
-> apjpgtpiwz [ 0 ] != gimbih1di0 . P_103 ) ) { localX -> apjpgtpiwz [ 0 ] =
gimbih1di0 . P_103 ; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4
-> _mdlRefSfcnS ) ; } if ( localX -> apjpgtpiwz [ 1 ] >= gimbih1di0 . P_102 )
{ if ( localX -> apjpgtpiwz [ 1 ] != gimbih1di0 . P_102 ) { localX ->
apjpgtpiwz [ 1 ] = gimbih1di0 . P_102 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> apjpgtpiwz [ 1 ] <= gimbih1di0 . P_103 ) && ( localX
-> apjpgtpiwz [ 1 ] != gimbih1di0 . P_103 ) ) { localX -> apjpgtpiwz [ 1 ] =
gimbih1di0 . P_103 ; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4
-> _mdlRefSfcnS ) ; } localB -> ar40sp2imq [ 0 ] = localX -> apjpgtpiwz [ 0 ]
; localB -> ar40sp2imq [ 1 ] = localX -> apjpgtpiwz [ 1 ] ; } else { if (
localX -> apjpgtpiwz [ 0 ] >= gimbih1di0 . P_102 ) { localB -> ar40sp2imq [ 0
] = gimbih1di0 . P_102 ; } else if ( localX -> apjpgtpiwz [ 0 ] <= gimbih1di0
. P_103 ) { localB -> ar40sp2imq [ 0 ] = gimbih1di0 . P_103 ; } else { localB
-> ar40sp2imq [ 0 ] = localX -> apjpgtpiwz [ 0 ] ; } if ( localX ->
apjpgtpiwz [ 1 ] >= gimbih1di0 . P_102 ) { localB -> ar40sp2imq [ 1 ] =
gimbih1di0 . P_102 ; } else if ( localX -> apjpgtpiwz [ 1 ] <= gimbih1di0 .
P_103 ) { localB -> ar40sp2imq [ 1 ] = gimbih1di0 . P_103 ; } else { localB
-> ar40sp2imq [ 1 ] = localX -> apjpgtpiwz [ 1 ] ; } } localB -> g1usy2kd1s [
0 ] = gimbih1di0 . P_104 * localB -> ar40sp2imq [ 0 ] * gimbih1di0 . P_13 +
localB -> ar40sp2imq [ 1 ] * localB -> kwscbrrz4u ; localB -> g1usy2kd1s [ 1
] = gimbih1di0 . P_105 * localB -> ar40sp2imq [ 0 ] * gimbih1di0 . P_14 -
localB -> ar40sp2imq [ 1 ] * localB -> oa5nvqefw1 ; ms01hvzkm1 = gimbih1di0 .
P_11 / 2.0 ; localB -> j42g1kf5sw [ 0 ] = - localB -> ar40sp2imq [ 0 ] ;
localB -> j42g1kf5sw [ 1 ] = - localB -> ar40sp2imq [ 1 ] ; * i215und1x3 =
localB -> noblp1comw * localB -> ar40sp2imq [ 0 ] * ms01hvzkm1 + localB ->
noblp1comw * localB -> ar40sp2imq [ 1 ] * ms01hvzkm1 ; jp4z35ch12 [ 0 ] = 0.0
; jp4z35ch12 [ 1 ] = 0.0 ; jp4z35ch12 [ 2 ] = a1tycyth54_p ; jp4z35ch12 [ 3 ]
= g0do0k1wre_p ; if ( localB -> mzx53cggq1 != 0.0 ) { localB -> obulihdqgl =
gtjprd0hrs_p ; } else { localB -> obulihdqgl = localB -> azy2w5alq3 ; } if (
localB -> ci1kr4pcyc != 0.0 ) { localB -> cjczwad0tn = dvbs0mrbwy_p ; } else
{ localB -> cjczwad0tn = localB -> d0jehmw3q3 ; } if ( rtmIsMajorTimeStep (
pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB ->
jrrx2yotvq = localDW -> djp1o4y0ml ; } if ( ssIsModeUpdateTimeStep (
pubqvcmed4 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING ,
& localZCE -> p33raon0ot , ( localB -> jrrx2yotvq ) ) ; if ( ( zcEvent !=
NO_ZCEVENT ) || ( localDW -> oddg33f5qe != 0 ) ) { xHasBeenChanged = ( localX
-> ioq10m20tp != localB -> hwwksosp2m ) ; localX -> ioq10m20tp = localB ->
hwwksosp2m ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} ms01hvzkm1 = localX -> ioq10m20tp ; } else { ms01hvzkm1 = localX ->
ioq10m20tp ; } if ( localB -> jrrx2yotvq != 0.0 ) { localB -> jl1jd314n5 =
ms01hvzkm1 ; } else { localB -> jl1jd314n5 = localB -> hwwksosp2m ; } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ if ( localDW -> lipy4djzen ) { localDW -> lipy4djzen = false ; localB ->
hcl133bpaz = gimbih1di0 . P_109 ; } else { localB -> hcl133bpaz = gimbih1di0
. P_133 ; } } if ( localB -> hcl133bpaz > gimbih1di0 . P_110 ) { a1ctedcnd3_p
= localX -> lsght3lvcc ; } else { a1ctedcnd3_p = gimbih1di0 . P_41 ; }
gtjprd0hrs_p = - localB -> fmrgomzsqy ; if ( rtmIsMajorTimeStep ( pubqvcmed4
) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { if ( localDW -> aatsaj2ujy ) {
localDW -> aatsaj2ujy = false ; localB -> lbn5qhmmia = gimbih1di0 . P_111 ; }
else { localB -> lbn5qhmmia = gimbih1di0 . P_135 ; } if ( localDW ->
i1vb2cxyv5 ) { localDW -> i1vb2cxyv5 = false ; localB -> dimjz4okef =
gimbih1di0 . P_113 ; } else { localB -> dimjz4okef = gimbih1di0 . P_134 ; } }
if ( localB -> lbn5qhmmia > gimbih1di0 . P_112 ) { g0do0k1wre_p = localX ->
ih5x40znwx ; } else { g0do0k1wre_p = gimbih1di0 . P_41 ; } if ( localB ->
dimjz4okef > gimbih1di0 . P_114 ) { m2tzrg2ceo_p = localX -> ih5x40znwx ; }
else { m2tzrg2ceo_p = gimbih1di0 . P_37 ; } rtPrevAction = localDW ->
katpv1neqp ; if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) {
if ( ms01hvzkm1 > gimbih1di0 . P_108 ) { hv3kmq3cbo_idx_1 = ms01hvzkm1 -
gimbih1di0 . P_108 ; } else if ( ms01hvzkm1 >= gimbih1di0 . P_107 ) {
hv3kmq3cbo_idx_1 = 0.0 ; } else { hv3kmq3cbo_idx_1 = ms01hvzkm1 - gimbih1di0
. P_107 ; } rtAction = ( int8_T ) ! ( hv3kmq3cbo_idx_1 != 0.0 ) ; localDW ->
katpv1neqp = rtAction ; } else { rtAction = localDW -> katpv1neqp ; } if (
rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; if ( rtmGetTaskTime ( pubqvcmed4 , 0 ) ==
rtmGetTStart ( pubqvcmed4 ) ) { ( void ) memset ( & ( localXdis -> ih5x40znwx
) , 1 , 1 * sizeof ( boolean_T ) ) ; ( void ) memset ( & ( localXdis ->
lsght3lvcc ) , 1 , 2 * sizeof ( boolean_T ) ) ; } switch ( rtPrevAction ) {
case 0 : ( void ) memset ( & ( localXdis -> ih5x40znwx ) , 1 , 1 * sizeof (
boolean_T ) ) ; break ; case 1 : ( void ) memset ( & ( localXdis ->
lsght3lvcc ) , 1 , 2 * sizeof ( boolean_T ) ) ; break ; default : break ; } }
if ( rtAction == 0 ) { if ( rtPrevAction != 0 ) { localDW -> fiuvbwgdvm = 1 ;
if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX -> ih5x40znwx = 0.0 ;
xHasBeenChanged = slIsRapidAcceleratorSimulating ( ) ; if ( xHasBeenChanged )
{ xHasBeenChanged = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> fiuvbwgdvm = ! xHasBeenChanged ; } else { localDW -> fiuvbwgdvm = 1 ; } }
if ( rtmGetTaskTime ( pubqvcmed4 , 0 ) != rtmGetTStart ( pubqvcmed4 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> ih5x40znwx ) , 0 , 1 * sizeof ( boolean_T
) ) ; } a1tycyth54_p = look1_binlxpw ( ms01hvzkm1 , gimbih1di0 . P_3 ,
gimbih1di0 . P_10 , 9U ) ; dvbs0mrbwy_p = muDoubleScalarAbs ( a1tycyth54_p )
; g0do0k1wre_p = look1_binlcpw ( ms01hvzkm1 , gimbih1di0 . P_3 , gimbih1di0 .
P_32 , 9U ) ; if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) {
if ( localDW -> fiuvbwgdvm != 0 ) { localX -> ih5x40znwx = a1ctedcnd3_p ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( pubqvcmed4 ->
_mdlRefSfcnS ) ; } a1ctedcnd3_p = localX -> ih5x40znwx ; } else {
a1ctedcnd3_p = localX -> ih5x40znwx ; } nohfh1xecp_p = * ldxbfzy4yw *
a1ctedcnd3_p ; m2tzrg2ceo_p = muDoubleScalarAbs ( a1ctedcnd3_p ) ;
ex2z4hqbfn_p = ( muDoubleScalarTanh ( ( gimbih1di0 . P_58 * m2tzrg2ceo_p -
gimbih1di0 . P_74 ) * gimbih1di0 . P_59 ) + gimbih1di0 . P_74 ) * gimbih1di0
. P_60 ; if ( nohfh1xecp_p > gimbih1di0 . P_57 ) { hv3kmq3cbo_idx_1 =
g0do0k1wre_p ; } else { hv3kmq3cbo_idx_1 = gimbih1di0 . P_72 ; } nohfh1xecp_p
= ( ( gimbih1di0 . P_74 - ex2z4hqbfn_p ) * gimbih1di0 . P_73 +
hv3kmq3cbo_idx_1 * ex2z4hqbfn_p ) * * ldxbfzy4yw ; gtjprd0hrs_p /=
a1tycyth54_p ; m2tzrg2ceo_p = ( muDoubleScalarTanh ( ( gimbih1di0 . P_62 *
m2tzrg2ceo_p - gimbih1di0 . P_77 ) * gimbih1di0 . P_63 ) + gimbih1di0 . P_77
) * gimbih1di0 . P_64 ; if ( ! ( gtjprd0hrs_p * a1ctedcnd3_p > gimbih1di0 .
P_61 ) ) { g0do0k1wre_p = gimbih1di0 . P_75 ; } localB -> dzdden5k2t = ( ( (
( gimbih1di0 . P_77 - m2tzrg2ceo_p ) * gimbih1di0 . P_76 + g0do0k1wre_p *
m2tzrg2ceo_p ) * gtjprd0hrs_p + nohfh1xecp_p ) - 1.0 / dvbs0mrbwy_p /
dvbs0mrbwy_p * look1_binlxpw ( ms01hvzkm1 , gimbih1di0 . P_3 , gimbih1di0 .
P_25 , 9U ) * a1ctedcnd3_p ) * ( 1.0 / ( look1_binlxpw ( ms01hvzkm1 ,
gimbih1di0 . P_3 , gimbih1di0 . P_7 , 9U ) / dvbs0mrbwy_p / dvbs0mrbwy_p ) )
; * azye50kz02 = a1ctedcnd3_p ; gtjprd0hrs_p = a1ctedcnd3_p / a1tycyth54_p ;
if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> prlkxfgjhi ) ; } } else { if ( rtAction != rtPrevAction ) {
localDW -> p2muon2qgq = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX
-> lsght3lvcc = 0.0 ; xHasBeenChanged = slIsRapidAcceleratorSimulating ( ) ;
if ( xHasBeenChanged ) { xHasBeenChanged = ( slIsRapidAcceleratorSimulating (
) ? ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW
-> p2muon2qgq = ! xHasBeenChanged ; } else { localDW -> p2muon2qgq = 1 ; }
localX -> oinmq3iuai = 0.0 ; } localDW -> jcljt300rr = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { xHasBeenChanged =
slIsRapidAcceleratorSimulating ( ) ; if ( xHasBeenChanged ) { xHasBeenChanged
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ) ; localDW -> jcljt300rr = ! xHasBeenChanged ;
} else { localDW -> jcljt300rr = 1 ; } } if ( rtmGetTaskTime ( pubqvcmed4 , 0
) != rtmGetTStart ( pubqvcmed4 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> lsght3lvcc ) , 0 , 2 * sizeof ( boolean_T
) ) ; } a1tycyth54_p = look1_binlxpw ( ms01hvzkm1 , gimbih1di0 . P_3 ,
gimbih1di0 . P_10 , 9U ) ; dvbs0mrbwy_p = muDoubleScalarAbs ( a1tycyth54_p )
; if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { if ( localDW
-> p2muon2qgq != 0 ) { localX -> lsght3lvcc = g0do0k1wre_p ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( pubqvcmed4 ->
_mdlRefSfcnS ) ; } g0do0k1wre_p = localX -> lsght3lvcc ; if ( localDW ->
jcljt300rr != 0 ) { localX -> oinmq3iuai = m2tzrg2ceo_p ; } m2tzrg2ceo_p =
localX -> oinmq3iuai ; } else { g0do0k1wre_p = localX -> lsght3lvcc ;
m2tzrg2ceo_p = localX -> oinmq3iuai ; } a1ctedcnd3_p = * ldxbfzy4yw - localB
-> lcsiijdiv1 * g0do0k1wre_p ; gtjprd0hrs_p /= a1tycyth54_p ; nohfh1xecp_p =
( muDoubleScalarTanh ( ( gimbih1di0 . P_79 * muDoubleScalarAbs ( m2tzrg2ceo_p
) - gimbih1di0 . P_91 ) * gimbih1di0 . P_80 ) + gimbih1di0 . P_91 ) *
gimbih1di0 . P_81 ; localB -> ddphidah5a = 1.0 / localB -> p5zye1nwzg *
a1ctedcnd3_p ; if ( gtjprd0hrs_p * m2tzrg2ceo_p > gimbih1di0 . P_78 ) {
hv3kmq3cbo_idx_1 = look1_binlcpw ( ms01hvzkm1 , gimbih1di0 . P_3 , gimbih1di0
. P_32 , 9U ) ; } else { hv3kmq3cbo_idx_1 = gimbih1di0 . P_89 ; } localB ->
hkc5xqpiz2 = ( ( ( gimbih1di0 . P_91 - nohfh1xecp_p ) * gimbih1di0 . P_90 +
hv3kmq3cbo_idx_1 * nohfh1xecp_p ) * gtjprd0hrs_p - 1.0 / dvbs0mrbwy_p /
dvbs0mrbwy_p * look1_binlxpw ( ms01hvzkm1 , gimbih1di0 . P_3 , gimbih1di0 .
P_25 , 9U ) * m2tzrg2ceo_p ) * ( 1.0 / ( look1_binlxpw ( ms01hvzkm1 ,
gimbih1di0 . P_3 , gimbih1di0 . P_7 , 9U ) / dvbs0mrbwy_p / dvbs0mrbwy_p ) )
; gtjprd0hrs_p = m2tzrg2ceo_p / a1tycyth54_p ; * azye50kz02 = g0do0k1wre_p ;
if ( ssIsModeUpdateTimeStep ( pubqvcmed4 -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> l14mkp5oex ) ; } } * ozyafdk0b2 = muDoubleScalarRound ( ms01hvzkm1
) ; localB -> krwlfd101r = gtjprd0hrs_p - * i215und1x3 ; if ( ! ( localB ->
ldyqtus3b1 != 0.0 ) ) { jqpx5w0xkr_p = localB -> jtndft2kbq ; } localB ->
nd0lwcznm2 = ( localB -> krwlfd101r - jqpx5w0xkr_p ) * gimbih1di0 . P_40 ;
localB -> b3ly5wd0s2 [ 0 ] = localX -> nbshvx4uu4 [ 0 ] ; localB ->
b3ly5wd0s2 [ 1 ] = localX -> nbshvx4uu4 [ 1 ] ; localB -> b3ly5wd0s2 [ 2 ] =
localX -> nbshvx4uu4 [ 2 ] ; localB -> b3ly5wd0s2 [ 3 ] = localX ->
nbshvx4uu4 [ 3 ] ; bumnd4n3ix [ 0 ] = gimbih1di0 . P_137 * localB ->
b3ly5wd0s2 [ 0 ] * gimbih1di0 . P_120 ; bumnd4n3ix [ 1 ] = gimbih1di0 . P_137
* localB -> b3ly5wd0s2 [ 1 ] * gimbih1di0 . P_120 ; bumnd4n3ix [ 2 ] =
gimbih1di0 . P_138 * localB -> b3ly5wd0s2 [ 2 ] * gimbih1di0 . P_120 ;
bumnd4n3ix [ 3 ] = gimbih1di0 . P_138 * localB -> b3ly5wd0s2 [ 3 ] *
gimbih1di0 . P_120 ; } void DrivelineTID2 ( fxrjyezkwn * localB ) { uint32_T
lcsiijdiv1_tmp ; localB -> dawtydtywl [ 0 ] = 0.0 ; localB -> dawtydtywl [ 1
] = 0.0 ; localB -> eg5ccevnky [ 0 ] = gimbih1di0 . P_42 ; localB ->
eg5ccevnky [ 1 ] = gimbih1di0 . P_43 ; localB -> kwscbrrz4u = ( gimbih1di0 .
P_124 - gimbih1di0 . P_13 ) * gimbih1di0 . P_126 ; localB -> oa5nvqefw1 = (
gimbih1di0 . P_125 - gimbih1di0 . P_14 ) * gimbih1di0 . P_127 ; if (
gimbih1di0 . P_122 > gimbih1di0 . P_128 ) { localB -> noblp1comw = gimbih1di0
. P_123 ; } else { localB -> noblp1comw = - gimbih1di0 . P_123 ; } localB ->
azy2w5alq3 = gimbih1di0 . P_28 ; localB -> d0jehmw3q3 = gimbih1di0 . P_29 ;
localB -> oy0ln1peft = 1.0 / gimbih1di0 . P_45 * gimbih1di0 . P_131 ; localB
-> hwwksosp2m = gimbih1di0 . P_4 ; localB -> jtndft2kbq = gimbih1di0 . P_30 ;
lcsiijdiv1_tmp = plook_u32d_binckan ( gimbih1di0 . P_93 , gimbih1di0 . P_3 ,
9U ) ; localB -> lcsiijdiv1 = gimbih1di0 . P_25 [ lcsiijdiv1_tmp ] ; localB
-> p5zye1nwzg = gimbih1di0 . P_7 [ plook_u32d_binckan ( gimbih1di0 . P_92 ,
gimbih1di0 . P_3 , 9U ) ] - gimbih1di0 . P_7 [ lcsiijdiv1_tmp ] ; } void
cyzpp4e52p ( dwsgrvz41y * const pubqvcmed4 , const real_T owpf0zg2wy [ 4 ] ,
fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX ) { int32_T
mr12l2gfl3 ; real_T brcrvidjin ; real_T m0xyjwqd0t ; real_T * prevY ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) ) { if ( memcmp ( pubqvcmed4 ->
nonContDerivSignal [ 0 ] . pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 0 ]
. pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [ 0 ] . pPrevVal ,
pubqvcmed4 -> nonContDerivSignal [ 0 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsReset ( pubqvcmed4
-> _mdlRefSfcnS ) ; } if ( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 1 ] .
pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 1 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 1 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
pubqvcmed4 -> nonContDerivSignal [ 1 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 1 ] . pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if
( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } } mr12l2gfl3 = 0 ;
while ( mr12l2gfl3 < 2 ) { brcrvidjin = localB -> g1usy2kd1s [ mr12l2gfl3 ] ;
m0xyjwqd0t = owpf0zg2wy [ mr12l2gfl3 + 2 ] ; m0xyjwqd0t = m0xyjwqd0t *
gimbih1di0 . P_0 + gimbih1di0 . P_2 ; if ( m0xyjwqd0t > gimbih1di0 .
akkqis3b1g . P_1 ) { m0xyjwqd0t = gimbih1di0 . akkqis3b1g . P_1 ; } else if (
m0xyjwqd0t < gimbih1di0 . akkqis3b1g . P_2 ) { m0xyjwqd0t = gimbih1di0 .
akkqis3b1g . P_2 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] . cmpm3o524c = (
m0xyjwqd0t * gimbih1di0 . P_12 * gimbih1di0 . P_16 * muDoubleScalarTanh (
gimbih1di0 . akkqis3b1g . P_3 * brcrvidjin ) * look1_binlcpw (
muDoubleScalarAbs ( brcrvidjin ) , gimbih1di0 . P_31 , gimbih1di0 . P_36 , 7U
) - localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ) * localB -> akkqis3b1g
[ mr12l2gfl3 ] . ot43cxvyf5 ; localB -> pqccvzpsaa [ mr12l2gfl3 ] = localX ->
akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ; mr12l2gfl3 ++ ; } if ( localDW ->
bqkc421nzr < localDW -> evqmiddoxr ) { localDW -> bqkc421nzr = rtmGetTaskTime
( pubqvcmed4 , 0 ) ; prevY = & localDW -> kzqr3mv2f3 ; } else { localDW ->
evqmiddoxr = rtmGetTaskTime ( pubqvcmed4 , 0 ) ; prevY = & localDW ->
gjhljassw3 ; } * prevY = localB -> j5xttbspxt ; if ( rtmIsMajorTimeStep (
pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localDW ->
l502nimlgu = gimbih1di0 . P_136 ; localDW -> f3zzxvwsi0 = gimbih1di0 . P_129
; } localDW -> a3mzd4aqhf = 0 ; localDW -> lgx52collq = 0 ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localDW -> fjczxzuj0e = gimbih1di0 . P_130 ; localDW -> djp1o4y0ml =
gimbih1di0 . P_132 ; } localDW -> g3picovpjs = 0 ; localDW -> arxnnxrfcl = 0
; localDW -> oddg33f5qe = 0 ; if ( localDW -> katpv1neqp == 0 ) { localDW ->
fiuvbwgdvm = 0 ; } else { localDW -> p2muon2qgq = 0 ; localDW -> jcljt300rr =
0 ; } } void cyzpp4e52pTID2 ( fxrjyezkwn * localB ) { int32_T mr12l2gfl3 ;
mr12l2gfl3 = 0 ; while ( mr12l2gfl3 < 2 ) { localB -> akkqis3b1g [ mr12l2gfl3
] . ot43cxvyf5 = 1.0 / gimbih1di0 . P_44 * gimbih1di0 . akkqis3b1g . P_4 ;
mr12l2gfl3 ++ ; } } void bpgqz3xzpl ( const int8_T * jovsfwfg3e , const
real_T caebyi2sab [ 4 ] , const real_T gilc33j2pa [ 4 ] , const real_T
owpf0zg2wy [ 4 ] , fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b *
localX , bjbjifrsrv * localXdot ) { int32_T mr12l2gfl3 ; real_T a__2 [ 5 ] ;
real_T olkfvmwbmq_p [ 5 ] ; real_T j3zpjmi3dn_p [ 2 ] ; real_T d3ugpwcdnk_p ;
real_T e4y3zjuetb_idx_0 ; real_T e4y3zjuetb_idx_1 ; real_T e4y3zjuetb_idx_2 ;
real_T e4y3zjuetb_idx_3 ; real_T hxvr2zfk4d_p ; int8_T tmp ; mr12l2gfl3 = 0 ;
while ( mr12l2gfl3 < 2 ) { d3ugpwcdnk_p = localB -> g1usy2kd1s [ mr12l2gfl3 ]
; hxvr2zfk4d_p = owpf0zg2wy [ mr12l2gfl3 + 2 ] ; hxvr2zfk4d_p = hxvr2zfk4d_p
* gimbih1di0 . P_0 + gimbih1di0 . P_2 ; if ( hxvr2zfk4d_p > gimbih1di0 .
akkqis3b1g . P_1 ) { hxvr2zfk4d_p = gimbih1di0 . akkqis3b1g . P_1 ; } else if
( hxvr2zfk4d_p < gimbih1di0 . akkqis3b1g . P_2 ) { hxvr2zfk4d_p = gimbih1di0
. akkqis3b1g . P_2 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] . cmpm3o524c = (
hxvr2zfk4d_p * gimbih1di0 . P_12 * gimbih1di0 . P_16 * muDoubleScalarTanh (
gimbih1di0 . akkqis3b1g . P_3 * d3ugpwcdnk_p ) * look1_binlcpw (
muDoubleScalarAbs ( d3ugpwcdnk_p ) , gimbih1di0 . P_31 , gimbih1di0 . P_36 ,
7U ) - localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ) * localB ->
akkqis3b1g [ mr12l2gfl3 ] . ot43cxvyf5 ; localB -> pqccvzpsaa [ mr12l2gfl3 ]
= localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ; mr12l2gfl3 ++ ; }
olkfvmwbmq_p [ 0 ] = localB -> fmrgomzsqy ; olkfvmwbmq_p [ 1 ] = localB ->
czjkzob4kw ; olkfvmwbmq_p [ 2 ] = localB -> o3bsjprwpn ; olkfvmwbmq_p [ 3 ] =
localB -> pqccvzpsaa [ 0 ] ; olkfvmwbmq_p [ 4 ] = localB -> pqccvzpsaa [ 1 ]
; if ( gimbih1di0 . P_54 == 1.0 ) { automldiffas_AFMg5hId ( olkfvmwbmq_p ,
gimbih1di0 . P_26 , gimbih1di0 . P_24 , gimbih1di0 . P_27 , gimbih1di0 . P_11
, gimbih1di0 . P_13 , gimbih1di0 . P_14 , 1.0 , gimbih1di0 . P_5 , gimbih1di0
. P_8 , gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> ar40sp2imq , a__2 ,
j3zpjmi3dn_p ) ; } else { automldiffas_AFMg5hId ( olkfvmwbmq_p , gimbih1di0 .
P_26 , gimbih1di0 . P_24 , gimbih1di0 . P_27 , gimbih1di0 . P_11 , gimbih1di0
. P_13 , gimbih1di0 . P_14 , 0.0 , gimbih1di0 . P_5 , gimbih1di0 . P_8 ,
gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> ar40sp2imq , a__2 ,
j3zpjmi3dn_p ) ; } d3ugpwcdnk_p = localB -> j42g1kf5sw [ 0 ] - gilc33j2pa [ 2
] ; hxvr2zfk4d_p = localB -> j42g1kf5sw [ 1 ] - gilc33j2pa [ 3 ] ; if (
caebyi2sab [ 0 ] > gimbih1di0 . P_56 ) { e4y3zjuetb_idx_3 = caebyi2sab [ 0 ]
- gimbih1di0 . P_56 ; } else if ( caebyi2sab [ 0 ] >= gimbih1di0 . P_55 ) {
e4y3zjuetb_idx_3 = 0.0 ; } else { e4y3zjuetb_idx_3 = caebyi2sab [ 0 ] -
gimbih1di0 . P_55 ; } e4y3zjuetb_idx_0 = ( e4y3zjuetb_idx_3 - localB ->
b3ly5wd0s2 [ 0 ] ) * gimbih1di0 . P_53 ; if ( caebyi2sab [ 1 ] > gimbih1di0 .
P_56 ) { e4y3zjuetb_idx_3 = caebyi2sab [ 1 ] - gimbih1di0 . P_56 ; } else if
( caebyi2sab [ 1 ] >= gimbih1di0 . P_55 ) { e4y3zjuetb_idx_3 = 0.0 ; } else {
e4y3zjuetb_idx_3 = caebyi2sab [ 1 ] - gimbih1di0 . P_55 ; } e4y3zjuetb_idx_1
= ( e4y3zjuetb_idx_3 - localB -> b3ly5wd0s2 [ 1 ] ) * gimbih1di0 . P_53 ; if
( caebyi2sab [ 2 ] > gimbih1di0 . P_56 ) { e4y3zjuetb_idx_3 = caebyi2sab [ 2
] - gimbih1di0 . P_56 ; } else if ( caebyi2sab [ 2 ] >= gimbih1di0 . P_55 ) {
e4y3zjuetb_idx_3 = 0.0 ; } else { e4y3zjuetb_idx_3 = caebyi2sab [ 2 ] -
gimbih1di0 . P_55 ; } e4y3zjuetb_idx_2 = ( e4y3zjuetb_idx_3 - localB ->
b3ly5wd0s2 [ 2 ] ) * gimbih1di0 . P_53 ; if ( caebyi2sab [ 3 ] > gimbih1di0 .
P_56 ) { e4y3zjuetb_idx_3 = caebyi2sab [ 3 ] - gimbih1di0 . P_56 ; } else if
( caebyi2sab [ 3 ] >= gimbih1di0 . P_55 ) { e4y3zjuetb_idx_3 = 0.0 ; } else {
e4y3zjuetb_idx_3 = caebyi2sab [ 3 ] - gimbih1di0 . P_55 ; } e4y3zjuetb_idx_3
= ( e4y3zjuetb_idx_3 - localB -> b3ly5wd0s2 [ 3 ] ) * gimbih1di0 . P_53 ; for
( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { localXdot -> akkqis3b1g
[ mr12l2gfl3 ] . cjupo52fq3 = localB -> akkqis3b1g [ mr12l2gfl3 ] .
cmpm3o524c ; } localXdot -> nkhwyywomp = localB -> nd0lwcznm2 ; localXdot ->
gmkd3jzxo3 = localB -> krwlfd101r ; localXdot -> hddpi2g224 = ( d3ugpwcdnk_p
- localB -> obulihdqgl ) * gimbih1di0 . P_38 ; localXdot -> aaxaf4jedn =
d3ugpwcdnk_p ; localXdot -> o2lamygnrv = ( hxvr2zfk4d_p - localB ->
cjczwad0tn ) * gimbih1di0 . P_39 ; localXdot -> jkxxbnfgvy = hxvr2zfk4d_p ;
if ( ( ( localX -> apjpgtpiwz [ 0 ] > gimbih1di0 . P_103 ) && ( localX ->
apjpgtpiwz [ 0 ] < gimbih1di0 . P_102 ) ) || ( ( localX -> apjpgtpiwz [ 0 ]
<= gimbih1di0 . P_103 ) && ( j3zpjmi3dn_p [ 0 ] > 0.0 ) ) || ( ( localX ->
apjpgtpiwz [ 0 ] >= gimbih1di0 . P_102 ) && ( j3zpjmi3dn_p [ 0 ] < 0.0 ) ) )
{ localXdot -> apjpgtpiwz [ 0 ] = j3zpjmi3dn_p [ 0 ] ; } else { localXdot ->
apjpgtpiwz [ 0 ] = 0.0 ; } if ( ( ( localX -> apjpgtpiwz [ 1 ] > gimbih1di0 .
P_103 ) && ( localX -> apjpgtpiwz [ 1 ] < gimbih1di0 . P_102 ) ) || ( (
localX -> apjpgtpiwz [ 1 ] <= gimbih1di0 . P_103 ) && ( j3zpjmi3dn_p [ 1 ] >
0.0 ) ) || ( ( localX -> apjpgtpiwz [ 1 ] >= gimbih1di0 . P_102 ) && (
j3zpjmi3dn_p [ 1 ] < 0.0 ) ) ) { localXdot -> apjpgtpiwz [ 1 ] = j3zpjmi3dn_p
[ 1 ] ; } else { localXdot -> apjpgtpiwz [ 1 ] = 0.0 ; } if ( * jovsfwfg3e >
gimbih1di0 . P_139 ) { tmp = gimbih1di0 . P_139 ; } else if ( * jovsfwfg3e <
gimbih1di0 . P_140 ) { tmp = gimbih1di0 . P_140 ; } else { tmp = * jovsfwfg3e
; } localXdot -> ioq10m20tp = ( ( real_T ) tmp - localB -> jl1jd314n5 ) *
localB -> oy0ln1peft ; localXdot -> ih5x40znwx = 0.0 ; { real_T * dx ; int_T
i ; dx = & ( localXdot -> lsght3lvcc ) ; for ( i = 0 ; i < 2 ; i ++ ) { dx [
i ] = 0.0 ; } } switch ( localDW -> katpv1neqp ) { case 0 : localXdot ->
ih5x40znwx = localB -> dzdden5k2t ; break ; case 1 : localXdot -> lsght3lvcc
= localB -> ddphidah5a ; localXdot -> oinmq3iuai = localB -> hkc5xqpiz2 ;
break ; default : break ; } localXdot -> nbshvx4uu4 [ 0 ] = e4y3zjuetb_idx_0
; localXdot -> nbshvx4uu4 [ 1 ] = e4y3zjuetb_idx_1 ; localXdot -> nbshvx4uu4
[ 2 ] = e4y3zjuetb_idx_2 ; localXdot -> nbshvx4uu4 [ 3 ] = e4y3zjuetb_idx_3 ;
} void btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( pubqvcmed4 ->
_mdlRefSfcnS , "Driveline" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ;
} } void jnccjczqwr ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn
* localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; gimbih1di0 . P_55 = rtMinusInf ;
gimbih1di0 . P_67 = rtMinusInf ; gimbih1di0 . P_68 = rtInf ; gimbih1di0 .
P_84 = rtMinusInf ; gimbih1di0 . P_85 = rtInf ; gimbih1di0 . akkqis3b1g . P_1
= rtInf ; ( void ) memset ( ( void * ) pubqvcmed4 , 0 , sizeof ( dwsgrvz41y )
) ; pubqvcmed4 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; pubqvcmed4
-> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; pubqvcmed4 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; pubqvcmed4 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( pubqvcmed4 -> _mdlRefSfcnS , "Driveline" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> j5xttbspxt = 0.0
; localB -> ldyqtus3b1 = 0.0 ; localB -> fmrgomzsqy = 0.0 ; localB ->
mzx53cggq1 = 0.0 ; localB -> czjkzob4kw = 0.0 ; localB -> ci1kr4pcyc = 0.0 ;
localB -> o3bsjprwpn = 0.0 ; localB -> ar40sp2imq [ 0 ] = 0.0 ; localB ->
ar40sp2imq [ 1 ] = 0.0 ; localB -> g1usy2kd1s [ 0 ] = 0.0 ; localB ->
g1usy2kd1s [ 1 ] = 0.0 ; localB -> j42g1kf5sw [ 0 ] = 0.0 ; localB ->
j42g1kf5sw [ 1 ] = 0.0 ; localB -> obulihdqgl = 0.0 ; localB -> cjczwad0tn =
0.0 ; localB -> jrrx2yotvq = 0.0 ; localB -> jl1jd314n5 = 0.0 ; localB ->
hcl133bpaz = 0.0 ; localB -> lbn5qhmmia = 0.0 ; localB -> dimjz4okef = 0.0 ;
localB -> krwlfd101r = 0.0 ; localB -> nd0lwcznm2 = 0.0 ; localB ->
b3ly5wd0s2 [ 0 ] = 0.0 ; localB -> b3ly5wd0s2 [ 1 ] = 0.0 ; localB ->
b3ly5wd0s2 [ 2 ] = 0.0 ; localB -> b3ly5wd0s2 [ 3 ] = 0.0 ; localB ->
dawtydtywl [ 0 ] = 0.0 ; localB -> dawtydtywl [ 1 ] = 0.0 ; localB ->
eg5ccevnky [ 0 ] = 0.0 ; localB -> eg5ccevnky [ 1 ] = 0.0 ; localB ->
kwscbrrz4u = 0.0 ; localB -> oa5nvqefw1 = 0.0 ; localB -> noblp1comw = 0.0 ;
localB -> azy2w5alq3 = 0.0 ; localB -> d0jehmw3q3 = 0.0 ; localB ->
oy0ln1peft = 0.0 ; localB -> hwwksosp2m = 0.0 ; localB -> jtndft2kbq = 0.0 ;
localB -> ddphidah5a = 0.0 ; localB -> hkc5xqpiz2 = 0.0 ; localB ->
lcsiijdiv1 = 0.0 ; localB -> p5zye1nwzg = 0.0 ; localB -> dzdden5k2t = 0.0 ;
localB -> pqccvzpsaa [ 0 ] = 0.0 ; localB -> pqccvzpsaa [ 1 ] = 0.0 ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( bsz3qtxrxd ) ) ; localDW ->
bqkc421nzr = 0.0 ; localDW -> kzqr3mv2f3 = 0.0 ; localDW -> evqmiddoxr = 0.0
; localDW -> gjhljassw3 = 0.0 ; localDW -> l502nimlgu = 0.0 ; localDW ->
f3zzxvwsi0 = 0.0 ; localDW -> fjczxzuj0e = 0.0 ; localDW -> djp1o4y0ml = 0.0
; Driveline_InitializeDataMapInfo ( pubqvcmed4 , localDW , localX , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
pubqvcmed4 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( pubqvcmed4 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
pubqvcmed4 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } pubqvcmed4 ->
nonContDerivSignal [ 0 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig0 ; pubqvcmed4 -> nonContDerivSignal [ 0 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 0 ] . pCurrVal = ( char_T * ) ( & localB -> jrrx2yotvq ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 1 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig1 ; pubqvcmed4 -> nonContDerivSignal [ 1 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 1 ] . pCurrVal = ( char_T * ) ( & localB -> ci1kr4pcyc ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 2 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig2 ; pubqvcmed4 -> nonContDerivSignal [ 2 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 2 ] . pCurrVal = ( char_T * ) ( & localB -> mzx53cggq1 ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 3 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig3 ; pubqvcmed4 -> nonContDerivSignal [ 3 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 3 ] . pCurrVal = ( char_T * ) ( & localB -> ldyqtus3b1 ) ; ; localZCE ->
p3b4nvkjzw = UNINITIALIZED_ZCSIG ; localZCE -> giezqglh10 =
UNINITIALIZED_ZCSIG ; localZCE -> obw1lxt001 = UNINITIALIZED_ZCSIG ; localZCE
-> p33raon0ot = UNINITIALIZED_ZCSIG ; } void mr_Driveline_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Driveline , 59 ) ; * retVal = 1 ; } static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Driveline_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Driveline_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Driveline_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Driveline_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Driveline_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Driveline_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Driveline_GetDWork ( const n5qm5cab0up * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 22 ] = { "mdlrefDW->rtdw.bqkc421nzr" ,
"mdlrefDW->rtdw.kzqr3mv2f3" , "mdlrefDW->rtdw.evqmiddoxr" ,
"mdlrefDW->rtdw.gjhljassw3" , "mdlrefDW->rtdw.l502nimlgu" ,
"mdlrefDW->rtdw.f3zzxvwsi0" , "mdlrefDW->rtdw.fjczxzuj0e" ,
"mdlrefDW->rtdw.djp1o4y0ml" , "mdlrefDW->rtdw.a3mzd4aqhf" ,
"mdlrefDW->rtdw.lgx52collq" , "mdlrefDW->rtdw.g3picovpjs" ,
"mdlrefDW->rtdw.arxnnxrfcl" , "mdlrefDW->rtdw.oddg33f5qe" ,
"mdlrefDW->rtdw.p2muon2qgq" , "mdlrefDW->rtdw.jcljt300rr" ,
"mdlrefDW->rtdw.fiuvbwgdvm" , "mdlrefDW->rtdw.katpv1neqp" ,
"mdlrefDW->rtdw.l14mkp5oex" , "mdlrefDW->rtdw.prlkxfgjhi" ,
"mdlrefDW->rtdw.lipy4djzen" , "mdlrefDW->rtdw.aatsaj2ujy" ,
"mdlrefDW->rtdw.i1vb2cxyv5" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 22 , rtdwDataFieldNames ) ; mr_Driveline_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . bqkc421nzr ) ,
sizeof ( mdlrefDW -> rtdw . bqkc421nzr ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . kzqr3mv2f3 ) ,
sizeof ( mdlrefDW -> rtdw . kzqr3mv2f3 ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . evqmiddoxr ) ,
sizeof ( mdlrefDW -> rtdw . evqmiddoxr ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . gjhljassw3 ) ,
sizeof ( mdlrefDW -> rtdw . gjhljassw3 ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . l502nimlgu ) ,
sizeof ( mdlrefDW -> rtdw . l502nimlgu ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . f3zzxvwsi0 ) ,
sizeof ( mdlrefDW -> rtdw . f3zzxvwsi0 ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 6 , ( const void * ) & ( mdlrefDW -> rtdw . fjczxzuj0e ) ,
sizeof ( mdlrefDW -> rtdw . fjczxzuj0e ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . djp1o4y0ml ) ,
sizeof ( mdlrefDW -> rtdw . djp1o4y0ml ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 8 , ( const void * ) & ( mdlrefDW -> rtdw . a3mzd4aqhf ) ,
sizeof ( mdlrefDW -> rtdw . a3mzd4aqhf ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . lgx52collq ) ,
sizeof ( mdlrefDW -> rtdw . lgx52collq ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW -> rtdw . g3picovpjs ) ,
sizeof ( mdlrefDW -> rtdw . g3picovpjs ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 11 , ( const void * ) & ( mdlrefDW -> rtdw . arxnnxrfcl ) ,
sizeof ( mdlrefDW -> rtdw . arxnnxrfcl ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 12 , ( const void * ) & ( mdlrefDW -> rtdw . oddg33f5qe ) ,
sizeof ( mdlrefDW -> rtdw . oddg33f5qe ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 13 , ( const void * ) & ( mdlrefDW -> rtdw . p2muon2qgq ) ,
sizeof ( mdlrefDW -> rtdw . p2muon2qgq ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 14 , ( const void * ) & ( mdlrefDW -> rtdw . jcljt300rr ) ,
sizeof ( mdlrefDW -> rtdw . jcljt300rr ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . fiuvbwgdvm ) ,
sizeof ( mdlrefDW -> rtdw . fiuvbwgdvm ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 16 , ( const void * ) & ( mdlrefDW -> rtdw . katpv1neqp ) ,
sizeof ( mdlrefDW -> rtdw . katpv1neqp ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 17 , ( const void * ) & ( mdlrefDW -> rtdw . l14mkp5oex ) ,
sizeof ( mdlrefDW -> rtdw . l14mkp5oex ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 18 , ( const void * ) & ( mdlrefDW -> rtdw . prlkxfgjhi ) ,
sizeof ( mdlrefDW -> rtdw . prlkxfgjhi ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 19 , ( const void * ) & ( mdlrefDW -> rtdw . lipy4djzen ) ,
sizeof ( mdlrefDW -> rtdw . lipy4djzen ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . aatsaj2ujy ) ,
sizeof ( mdlrefDW -> rtdw . aatsaj2ujy ) ) ; mr_Driveline_cacheDataAsMxArray
( rtdwData , 0 , 21 , ( const void * ) & ( mdlrefDW -> rtdw . i1vb2cxyv5 ) ,
sizeof ( mdlrefDW -> rtdw . i1vb2cxyv5 ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void )
mdlrefDW ; return ssDW ; } void mr_Driveline_SetDWork ( n5qm5cab0up *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Driveline_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW
, 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . bqkc421nzr ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . bqkc421nzr ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . kzqr3mv2f3 ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . kzqr3mv2f3 ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . evqmiddoxr ) , rtdwData , 0 , 2 , sizeof (
mdlrefDW -> rtdw . evqmiddoxr ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . gjhljassw3 ) , rtdwData , 0 , 3 , sizeof (
mdlrefDW -> rtdw . gjhljassw3 ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . l502nimlgu ) , rtdwData , 0 , 4 , sizeof (
mdlrefDW -> rtdw . l502nimlgu ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . f3zzxvwsi0 ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . f3zzxvwsi0 ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . fjczxzuj0e ) , rtdwData , 0 , 6 , sizeof (
mdlrefDW -> rtdw . fjczxzuj0e ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . djp1o4y0ml ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . djp1o4y0ml ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . a3mzd4aqhf ) , rtdwData , 0 , 8 , sizeof (
mdlrefDW -> rtdw . a3mzd4aqhf ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . lgx52collq ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . lgx52collq ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . g3picovpjs ) , rtdwData , 0 , 10 , sizeof (
mdlrefDW -> rtdw . g3picovpjs ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . arxnnxrfcl ) , rtdwData , 0 , 11 , sizeof (
mdlrefDW -> rtdw . arxnnxrfcl ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . oddg33f5qe ) , rtdwData , 0 , 12 , sizeof (
mdlrefDW -> rtdw . oddg33f5qe ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . p2muon2qgq ) , rtdwData , 0 , 13 , sizeof (
mdlrefDW -> rtdw . p2muon2qgq ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . jcljt300rr ) , rtdwData , 0 , 14 , sizeof (
mdlrefDW -> rtdw . jcljt300rr ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . fiuvbwgdvm ) , rtdwData , 0 , 15 , sizeof (
mdlrefDW -> rtdw . fiuvbwgdvm ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . katpv1neqp ) , rtdwData , 0 , 16 , sizeof (
mdlrefDW -> rtdw . katpv1neqp ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . l14mkp5oex ) , rtdwData , 0 , 17 , sizeof (
mdlrefDW -> rtdw . l14mkp5oex ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . prlkxfgjhi ) , rtdwData , 0 , 18 , sizeof (
mdlrefDW -> rtdw . prlkxfgjhi ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . lipy4djzen ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . lipy4djzen ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . aatsaj2ujy ) , rtdwData , 0 , 20 , sizeof (
mdlrefDW -> rtdw . aatsaj2ujy ) ) ; mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . i1vb2cxyv5 ) , rtdwData , 0 , 21 , sizeof (
mdlrefDW -> rtdw . i1vb2cxyv5 ) ) ; } mr_Driveline_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_Driveline_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 798258324U , 2636768700U , 2747318579U , 123825035U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "Driveline" , & chksum [ 0 ]
) ; } mxArray * mr_Driveline_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
