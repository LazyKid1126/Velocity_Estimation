#include "SiMappedEngineV.h"
#include "rtwtypes.h"
#include "SiMappedEngineV_private.h"
#include "mwmathutil.h"
#include "LookUp_real_T_real_T.h"
#include "SiMappedEngineV_capi.h"
#include "look1_binlcpw.h"
#include "look2_binlcpw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_SiMappedEngineV [ 43 ] = { { "o2k4rz0uw5x" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"jgubm4xidl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "jfimtdo5tu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "mtobhgowxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "i3uom1vnc5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "dk2lj1ie3v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "ih0mudozt1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "fpgmc1blog" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "m0sbce0q1j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "bnzlddutvq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "ac505oj1ao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "e3tultvbwk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "ow0cmqxpyk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "puu5fcics1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "atxsq1iycf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "po5zlrzzyd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "ecxs4hsbvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "a20sjwaowh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "bmpf100lpn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "pj3vtlmlns" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "f4glzcjee3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "f5rmroe5ej" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "fbspkqemka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "eglqnicaef" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "as2gecbwug" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "SiMappedEngineV" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "ajamtm0fjy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "mrj2qlehgq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "kgxfljuibq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "mr_SiMappedEngineV_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SiMappedEngineV" } , { "mr_SiMappedEngineV_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "SiMappedEngineV" } , { "SiMappedEngineV.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "SiMappedEngineV.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "SiMappedEngineV" } } ; anoacnregqm anoacnregq = { { 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.007710434469534763 , 0.007710554279622429 , 0.0088802763487609519 ,
0.010111538537294677 , 0.011378769742759526 , 0.012699096185990827 ,
0.014003524468392156 , 0.014367837015537847 , 0.014367811114299205 ,
0.014367788302960661 , 0.01436776719966032 , 0.014367745633302668 ,
0.014367723438153061 , 0.014367700965254398 , 0.014367676729269838 ,
0.0143676535206418 , 0.010107544779027906 , 0.010107797593555025 ,
0.01149940471638213 , 0.012800434581102582 , 0.014241499544429352 ,
0.015868417891835494 , 0.017523214387906088 , 0.019182009761146476 ,
0.021048408779414839 , 0.023253573813243722 , 0.024308763875343128 ,
0.024308997458654735 , 0.024309029831098054 , 0.024309445054944322 ,
0.024309471189523684 , 0.024309344739337446 , 0.012068686185760102 ,
0.012069170561949324 , 0.013923758687542509 , 0.015596060791617194 ,
0.017260641679926848 , 0.019189313873232958 , 0.021259083687480473 ,
0.023336276567792046 , 0.025415801913719293 , 0.027493857320220184 ,
0.03003095023446796 , 0.0314522481972392 , 0.031452210837947372 ,
0.03145217298106865 , 0.031452134806081368 , 0.031452096404435796 ,
0.014248144627794052 , 0.014249320717822039 , 0.016844418210442504 ,
0.019079508498444257 , 0.020837092854810623 , 0.02264134997282425 ,
0.025021088030100745 , 0.027446958875845744 , 0.029900565431807854 ,
0.032365357332073859 , 0.035059984002317662 , 0.03801682287471192 ,
0.039635065241495 , 0.039635025648135438 , 0.039634985793614262 ,
0.039634945754091953 , 0.015992607493715651 , 0.015994548259700876 ,
0.019303201624358883 , 0.021953101334463595 , 0.02412316158207603 ,
0.02621234280628059 , 0.028841983885971669 , 0.0317409246213587 ,
0.034851839647434664 , 0.037650491371276289 , 0.04052740216066579 ,
0.04365733327482909 , 0.046772927616613148 , 0.047443244197512245 ,
0.047443211860006107 , 0.047443178090301387 , 0.0181745917637157 ,
0.01817732211870457 , 0.021781894822646877 , 0.024731524533840827 ,
0.027313283825669721 , 0.029752378032479626 , 0.032645596104085385 ,
0.035904813487151528 , 0.039249349098764187 , 0.042661099216566696 ,
0.045901580861860754 , 0.04949745439410852 , 0.053147590581617749 ,
0.0553076881116977 , 0.055307653489278748 , 0.055307617091603728 ,
0.019920112351059605 , 0.019922465056931661 , 0.024096729807855113 ,
0.027019781025444913 , 0.029830701626588532 , 0.033088605982496022 ,
0.036538896655458571 , 0.040267539594694653 , 0.044018331582172464 ,
0.04782255328265516 , 0.051615127335304177 , 0.055726878013988276 ,
0.059811160126201912 , 0.063972680994169057 , 0.064826653831434211 ,
0.06483778612707472 , 0.021664595894791718 , 0.021667429848596275 ,
0.026201637311811143 , 0.029440605272022809 , 0.032968403402308472 ,
0.036791904384775989 , 0.040633065932345509 , 0.044760864218047307 ,
0.048921064997976639 , 0.053154511292859141 , 0.05736113108468438 ,
0.061938299213170921 , 0.066823173381804643 , 0.071847485030285332 ,
0.074370709717317074 , 0.074370655017568524 , 0.023408920293870979 ,
0.023412165917891227 , 0.028491974358467821 , 0.0323310982547133 ,
0.036174679897488037 , 0.040522771876013962 , 0.044923569982641222 ,
0.049451008002009106 , 0.053999401027131952 , 0.05865422612056246 ,
0.063315537659974191 , 0.068836590756182786 , 0.073947586050637143 ,
0.078821520625603186 , 0.083837513125764221 , 0.0838356916319284 ,
0.025153298172296661 , 0.025159289716363338 , 0.03065299688978446 ,
0.035120847618817737 , 0.039569850208321815 , 0.044435631776900991 ,
0.049352076125875312 , 0.054339034675751366 , 0.059336697993481916 ,
0.064371988129004687 , 0.069367757356852563 , 0.074854098568287522 ,
0.080223729548984241 , 0.085317033909137432 , 0.092319777712921242 ,
0.093519787725142176 , 0.027773915224602066 , 0.027783013587067185 ,
0.0333888991524731 , 0.038342818396025505 , 0.043288777130496822 ,
0.048597047282182643 , 0.053930618298470977 , 0.059300098578195584 ,
0.064680850077391036 , 0.070099476794013141 , 0.075671421230934843 ,
0.081764578453087031 , 0.0883155803548015 , 0.09478565280393525 ,
0.10179863148979629 , 0.10680270258022347 , 0.029524054539916304 ,
0.029535044140980415 , 0.035769244663878215 , 0.041325314693046185 ,
0.046899801295035466 , 0.052612487583301719 , 0.058357687472324428 ,
0.064236962420522764 , 0.07018955691380542 , 0.076336447170302038 ,
0.0828366308398459 , 0.089341590457700445 , 0.095197808408275172 ,
0.1010048769769137 , 0.11012349389369308 , 0.11469704914404569 ,
0.032151117809652845 , 0.032170923474652342 , 0.038911593582292431 ,
0.044879814656958741 , 0.050868336382888804 , 0.057064250840152153 ,
0.063296477517211916 , 0.0696746617201254 , 0.076329491141927275 ,
0.082584250021512609 , 0.088790274284630141 , 0.095159293824794378 ,
0.10265888888800843 , 0.11131470265547007 , 0.12139184481284401 ,
0.12178802525501421 , 0.03566698756421699 , 0.035692742426872245 ,
0.042305413339601548 , 0.048961015224373988 , 0.055555625713392912 ,
0.061976533332747934 , 0.068431616134873183 , 0.074958127155627913 ,
0.081491111422410431 , 0.088033101959181723 , 0.095479849249947291 ,
0.10356438052949278 , 0.11144071000134904 , 0.12013060357348802 ,
0.12942482329705557 , 0.12941548147792878 , 0.038306016710341381 ,
0.038341466223512373 , 0.045393091154212653 , 0.052461617720849021 ,
0.0595111180907796 , 0.066517239970125458 , 0.0734319253348483 ,
0.080218407670852143 , 0.087070585476392542 , 0.094823491103505325 ,
0.10312297046343799 , 0.11119976425600114 , 0.11919272469346545 ,
0.13012376337304862 , 0.1411676220259471 , 0.14116621583635575 } , { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.00052812015589303728 , 0.00060823756574004744 ,
0.00069257061407979113 , 0.00077936767226000124 , 0.00086980109274997156 ,
0.000959145548202934 , 0.0009840984959941818 , 0.000984096693374129 ,
0.00098409512903564929 , 0.00098409369000381722 , 0.00098409218688230412 ,
0.000984090704328714 , 0.000984089164440817 , 0.000984087513775496 ,
0.00098408589450858265 , 2.1539992793941656E-19 , 0.00069231490437263632 ,
0.00078763014898215451 , 0.0008767418826801629 , 0.00097544518657241108 ,
0.0010868779961130195 , 0.0012002202174034213 , 0.0013138363655835542 ,
0.0014416718905562902 , 0.00159271067856286 , 0.0016650107331275628 ,
0.0016649637461284435 , 0.0016650267957893136 , 0.0016650319451644512 ,
0.0016650334502973574 , 0.001665012181419213 , 0.0 , 0.00082665551869009828 ,
0.00095368191385218658 , 0.0010682233114365318 , 0.0011822357267148855 ,
0.0013143366007651051 , 0.0014561016756415466 , 0.0015983751706532461 ,
0.0017408084143822685 , 0.0018831409556960001 , 0.0020569145056529717 ,
0.0021542636556081502 , 0.0021542610980294615 , 0.0021542585059289169 ,
0.0021542558917825435 , 0.0021542532619514259 , 0.0 , 0.00097598087200559955
, 0.0011537272802394011 , 0.0013068156481585388 , 0.0014271981559264982 ,
0.0015507774263060986 , 0.0017137731838672106 , 0.0018799287232942302 ,
0.0020479839748987626 , 0.00221680549520216 , 0.0024013688062491235 ,
0.0026038920590626597 , 0.0027147305816180756 , 0.0027147278703835015 ,
0.0027147251411053491 , 0.0027147223990019627 , 0.0 , 0.0010955170048549496 ,
0.001322137101401238 , 0.0015036370833965242 , 0.0016522713469576747 ,
0.0017953659562260781 , 0.0019754783585524084 , 0.0021740359572320609 ,
0.0023871123432965737 , 0.0025788008197591343 , 0.0027758495031815051 ,
0.0029902283728381928 , 0.0032036455966566622 , 0.003249537345778989 ,
0.0032495351318486067 , 0.0032495328195326634 , 0.0 , 0.0012450220634888187 ,
0.0014919106110448839 , 0.0016939400418450475 , 0.0018707728649530698 ,
0.002037834132779197 , 0.0022359997275243106 , 0.002459233825555792 ,
0.0026883116165920293 , 0.0029219931356630241 , 0.0031439439413246634 ,
0.00339023663957092 , 0.0036402460196636329 , 0.0037881978925632443 ,
0.0037881955228698913 , 0.0037881930310009002 , 0.0 , 0.0013645524014726618 ,
0.001650460951999266 , 0.0018506699410276533 , 0.0020431988587355557 ,
0.0022663428815518382 , 0.0025026641576007167 , 0.0027580506803817173 ,
0.0030149542442806871 , 0.0032755173831061322 , 0.0035352827393998476 ,
0.0038169095156600046 , 0.0040966548997635648 , 0.0043816713769636306 ,
0.0044401765119505389 , 0.0044409437775446434 , 0.0 , 0.0014840705378122321 ,
0.0017946326892531569 , 0.0020164798281143434 , 0.002258110248773895 ,
0.0025199935537568896 , 0.0027830868720354076 , 0.0030658126314531907 ,
0.0033507578974841757 , 0.0036407199777322382 , 0.0039288446279616366 ,
0.0042423493150559131 , 0.0045769297671914471 , 0.0049210606920481476 ,
0.0050938843453385485 , 0.0050938805999103153 , 0.0 , 0.0016035730082731908 ,
0.0019515051890097151 , 0.0022144585241898689 , 0.0024777176104796863 ,
0.0027755323278921117 , 0.0030769568560661794 , 0.0033870553541245196 ,
0.0036985891262973671 , 0.0040174127706472428 , 0.004336680696233392 ,
0.004714835033909022 , 0.0050649032884643895 , 0.0053987344430753556 ,
0.00574228597719603 , 0.0057421708198532977 , 1.1091837327090258E-19 ,
0.0017232390218688636 , 0.0020995203176586044 , 0.002405537498277354 ,
0.0027102639050560705 , 0.0030435364018697808 , 0.0033802784521743331 ,
0.0037218515883772215 , 0.004064155425549389 , 0.004409039967125575 ,
0.0047512163255960093 , 0.0051269931142447012 , 0.0054947760925122191 ,
0.00584363259937114 , 0.006323270826254869 , 0.0064054466304251023 , 0.0 ,
0.0019029461363063954 , 0.0022869109078485924 , 0.002626220446162791 ,
0.0029649847468449534 , 0.0033285648609360221 , 0.0036938780529450327 ,
0.0040616506137449611 , 0.0044301952199004872 , 0.0048013340921198716 ,
0.00518297409617233 , 0.005600313666801005 , 0.00604901248425356 ,
0.0064921680330240943 , 0.0069725092734132608 , 0.0073152656533174007 , 0.0 ,
0.0020229482289849513 , 0.0024499482576062514 , 0.0028305010085983716 ,
0.0032123151691121009 , 0.0036035949792222405 , 0.0039971019606532265 ,
0.0043997919481240759 , 0.0048075040057476495 , 0.0052285237971645875 ,
0.0056737418887644235 , 0.0061192870980869606 , 0.0065203979593756543 ,
0.0069181424279237272 , 0.0075427052520383488 , 0.007857321419297153 , 0.0 ,
0.0022034879106575503 , 0.0026651776513326474 , 0.0030739599231939352 ,
0.0034841326907337849 , 0.00390851039107571 , 0.0043353751165297813 ,
0.0047722371506924328 , 0.0052280473437444361 , 0.0056564554986753644 ,
0.0060815256825229183 , 0.0065177599023629046 , 0.0070314306483162054 ,
0.0076242946171632834 , 0.0083150801889272513 , 0.0083423206219688118 , 0.0 ,
0.0024447083697723142 , 0.0028976310662980611 , 0.0033534942202183269 ,
0.0038051798590313696 , 0.0042449679704150084 , 0.0046870969646172576 ,
0.0051341182982321543 , 0.0055815829780991736 , 0.0060296645341029464 ,
0.0065397159652283892 , 0.0070934510795324325 , 0.0076329244506397522 ,
0.0082281238366365313 , 0.008872806649013092 , 0.0088726618452920677 , 0.0 ,
0.0026261278237116352 , 0.00310911584113817 , 0.0035932614966574946 ,
0.0040761039856361449 , 0.0045559753445845322 , 0.0050295839227528357 ,
0.005494411483399993 , 0.0059637387347340354 , 0.0064947596849566054 ,
0.007063217239952008 , 0.0076164220218334936 , 0.0081638850113003487 ,
0.0090213218662114816 , 0.0099410793272333171 , 0.0099409633839537478 } , {
0.0 , 80.720406734778649 , 99.765246949254859 , 118.693812360272 ,
137.62234128211631 , 156.55090181357946 , 175.47946455099819 ,
180.80435654325933 , 180.80398829886624 , 180.80366649344526 ,
180.80336927642165 , 180.80306418530185 , 180.80275283053993 ,
180.80243532741997 , 180.80209302086439 , 180.80176327127086 , -
22.263507264001191 , 80.720406734778649 , 99.765246949254859 ,
118.693812360272 , 137.62234128211631 , 156.55090181357946 ,
175.47946455099819 , 180.80435654325933 , 180.80398829886624 ,
180.80366649344526 , 180.80336927642165 , 180.80306418530185 ,
180.80275283053993 , 180.80243532741997 , 180.80209302086439 ,
180.80176327127086 , - 25.693538640386009 , 65.391116288191256 ,
86.558069146177175 , 105.48661877116152 , 124.4151638411915 ,
143.34373105885859 , 162.27230294098257 , 181.20087118945156 ,
200.12944547251942 , 219.05800935050473 , 225.41821883794893 ,
225.41610097836474 , 225.41981486968052 , 225.42155884683376 ,
225.42169952152761 , 225.42003177193607 , - 28.770100661322353 ,
59.354160378794951 , 79.259347428765352 , 98.187904103503286 ,
117.11647303489565 , 136.04504154510889 , 154.9736120614786 ,
173.90218170584853 , 192.83075305969638 , 211.75932590358579 ,
230.68789223639945 , 240.67719645461514 , 240.67693452107855 ,
240.67666908884044 , 240.67640142031831 , 240.67613215884575 , -
31.216926207523244 , 54.246315716475088 , 74.6289757451311 ,
93.557547706003362 , 112.48611720564661 , 131.41468689464645 ,
150.343259545529 , 169.27183085565679 , 188.2004017544653 ,
207.12896202298674 , 226.05754469875683 , 244.98611370945235 ,
254.78847856688628 , 254.78824111709309 , 254.78800209700017 ,
254.78776196343449 , - 33.590873608158077 , 50.450295580040432 ,
71.429822592572819 , 90.358393775293138 , 109.28696502472421 ,
128.21553593920609 , 147.14410774044197 , 166.07267833146906 ,
185.00124885525682 , 203.92982014201962 , 222.85839157102075 ,
241.7869613401642 , 260.71428764679086 , 264.75245320475028 ,
264.75225872572179 , 264.75205562448355 , - 35.611253332149417 ,
49.09801976170148 , 69.087135255110113 , 88.015706654861219 ,
106.94427836501715 , 125.87284805039266 , 144.80142132117919 ,
163.72999127594539 , 182.65856231976105 , 201.58713351484107 ,
220.51570437370691 , 239.4442763594443 , 258.37284504334917 ,
269.51458225679454 , 269.51440441762395 , 269.51421744438909 , -
37.677940916533473 , 47.201044861990226 , 67.297582615098221 ,
86.226153787548455 , 105.15471859459181 , 124.08329674624791 ,
143.01186830262472 , 161.94043883413536 , 180.86901015685388 ,
199.79758121559792 , 218.72615211860381 , 237.65472276739482 ,
256.58329227448945 , 275.51236893338375 , 278.68607129927182 ,
276.87349796274685 , - 39.6759555575005 , 46.054106432551691 ,
65.885948449046268 , 84.8145186603558 , 103.74307129735219 ,
122.67165762223439 , 141.60022627171338 , 160.52880457552911 ,
179.45737574262972 , 198.38594697976444 , 217.31451807371221 ,
236.24308870805334 , 255.17165901917858 , 274.1002305371187 ,
284.17316038905443 , 284.17294217112277 , - 41.566365012467443 ,
43.822946090738625 , 64.743946331638682 , 83.672532959514257 ,
102.60109937228647 , 121.5296653566831 , 140.45823677025967 ,
159.38680806556962 , 178.31537939737126 , 197.24395055516354 ,
216.1725215651891 , 235.10109253659704 , 254.02966017292928 ,
272.9582320785405 , 289.51044473421757 , 289.50484872278332 , -
43.34189134887491 , 42.717639385065851 , 63.801072769604026 ,
82.729643379625415 , 101.65820720891826 , 120.58678682625529 ,
139.51537545688481 , 158.4439306828954 , 177.37254570459481 ,
196.30107913306182 , 215.22964122355981 , 234.1582128531779 ,
253.0867826569891 , 272.01535233923983 , 290.94392661697975 ,
293.81589339297318 , - 44.866905560164206 , 43.071963875160463 ,
63.009409376456851 , 81.937980525195726 , 100.86655177191518 ,
119.79512402541354 , 138.72369228934389 , 157.65226562239914 ,
176.5808375771127 , 195.50940732709535 , 214.43797946840181 ,
233.36654980207359 , 252.29511994789709 , 271.22369403116005 ,
290.15225942935126 , 304.50451565212791 , - 46.636351948412106 ,
40.688498921592334 , 62.335286404735115 , 81.263857412646615 ,
100.19242850047475 , 119.12100088271517 , 138.04956940210312 ,
156.97814304853972 , 175.90671115704441 , 194.83528535875533 ,
213.76385597044546 , 232.6924264679725 , 251.62099596817714 ,
270.549568073657 , 289.47813936862752 , 298.68804523761804 , -
48.3356349510091 , 40.158377067025938 , 61.754334370263535 ,
80.682905330670451 , 99.6114754165019 , 118.54004685932756 ,
137.46862083763887 , 156.39719010112671 , 175.32576254336354 ,
194.254333593746 , 213.18290419163964 , 232.11147547034329 ,
251.04004929361352 , 269.96862105774829 , 288.89763746650397 ,
289.65170151399371 , - 50.055606905863961 , 41.546574059521944 ,
61.248486469918113 , 80.177057281966981 , 99.105628847267823 ,
118.03420192719092 , 136.96277263755053 , 155.8913434950239 ,
174.8199148219571 , 193.74848593978717 , 212.67705152435488 ,
231.60562070522712 , 250.5342161463341 , 269.4627659508684 ,
286.91804868078134 , 286.90692631023279 , - 51.968566410549563 ,
40.803397172994124 , 60.804063227708383 , 79.7326343035538 ,
98.661205675313369 , 117.58977713606674 , 136.518348738595 ,
155.44692010364759 , 174.37549143294655 , 193.30406251349632 ,
212.23263232711369 , 231.16120899665935 , 250.08978157925321 ,
269.01837241203748 , 283.9882204329424 , 283.9858415194546 } , { 0.0 , 79.51
, 81.38 , 91.45 , 97.78 , 102.6 , 106.2 , 109.6 , 111.6 , 113.4 , 113.9 ,
113.3 , 115.0 , 111.9 , 108.1 , 105.0 } , { 0.0 , 641.24104298962845 ,
900.79098896162213 , 1160.3409349336159 , 1419.8908809056095 ,
1679.4408268775944 , 1938.9907728495882 , 2198.5407188215822 ,
2458.0906647935758 , 2717.6406107655689 , 2977.1905567375629 ,
3236.7405027095565 , 3496.2904486815419 , 3755.8403946535359 ,
4015.390340625529 , 4274.9402865975226 } , { 0.0 , 35.0 , 53.928571428571431
, 72.857142857142861 , 91.785714285714278 , 110.71428571428571 ,
129.64285714285714 , 148.57142857142856 , 167.5 , 186.42857142857142 ,
205.35714285714286 , 224.28571428571428 , 243.21428571428572 ,
262.14285714285711 , 281.07142857142856 , 300.0 } , 1.0 , 1.5 , 0.2 ,
73.91982714328924 , 251.32741228718345 , { 0.0 , 3.0779560993538198 } , {
256.49641719585139 , 641.24104298962845 } , 1000.0 , 0.0 , 300.0 ,
0.10471975511965977 , 0.0 , 0.0 , 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 720.0 , 0.0 ,
1.0 , 1.0 , 0.01 , - 0.5 , 0.5 , 0.0 , { 15U , 15U } , { 15U , 15U } , { 15U
, 15U } } ; void f5rmroe5ej ( fpgmc1blog * localX ) { localX -> peid1wqkia =
anoacnregq . P_20 ; localX -> obuuvimtvu = anoacnregq . P_21 ; localX ->
h235wq4fsj = anoacnregq . P_22 ; localX -> lf5wmc502m = anoacnregq . P_23 ; }
void f4glzcjee3 ( fpgmc1blog * localX ) { localX -> peid1wqkia = anoacnregq .
P_20 ; localX -> obuuvimtvu = anoacnregq . P_21 ; localX -> h235wq4fsj =
anoacnregq . P_22 ; localX -> lf5wmc502m = anoacnregq . P_23 ; } void
SiMappedEngineV ( real_T * p2vuqhqrpz , puu5fcics1 * localB , fpgmc1blog *
localX ) { real_T a2emuchk0p ; localB -> guvbzoda22 = localX -> peid1wqkia ;
localB -> jv1i44zpz4 = localX -> obuuvimtvu ; * p2vuqhqrpz = localX ->
h235wq4fsj ; localB -> nmqikn0wfy = localB -> guvbzoda22 - localB ->
jv1i44zpz4 ; localB -> hln2r0vyrz [ 0 ] = localB -> gaxjelpno1 ; localB ->
hln2r0vyrz [ 1 ] = localB -> dizs5oa3q4 ; localB -> haqwzftjaf [ 0 ] =
anoacnregq . P_7 ; localB -> haqwzftjaf [ 1 ] = anoacnregq . P_6 ;
LookUp_real_T_real_T ( & ( a2emuchk0p ) , & localB -> haqwzftjaf [ 0 ] ,
localB -> nmqikn0wfy , & localB -> hln2r0vyrz [ 0 ] , 1U ) ; localB ->
bagmxejbfa [ 0 ] = anoacnregq . P_31 ; localB -> bagmxejbfa [ 1 ] = localB ->
miordrgtti ; localB -> ozcmxjbphl [ 0 ] = anoacnregq . P_8 ; localB ->
ozcmxjbphl [ 1 ] = a2emuchk0p ; localB -> cuyzaclebl = localB -> jv1i44zpz4 -
localB -> guvbzoda22 ; } void SiMappedEngineVTID2 ( puu5fcics1 * localB ) {
real_T maxV ; int32_T sigIdx ; maxV = anoacnregq . P_5 [ 0 ] ; for ( sigIdx =
0 ; sigIdx < 15 ; sigIdx ++ ) { maxV = muDoubleScalarMax ( maxV , anoacnregq
. P_5 [ sigIdx + 1 ] ) ; } localB -> miordrgtti = anoacnregq . P_28 * maxV ;
localB -> gaxjelpno1 = anoacnregq . P_29 * localB -> miordrgtti ; localB ->
dizs5oa3q4 = anoacnregq . P_30 * localB -> miordrgtti ; } void pj3vtlmlns (
kgxfljuibq * const plpdajfsza , const real_T * gzpwimsfg2 , puu5fcics1 *
localB , ow0cmqxpyk * localDW ) { real_T jljz4ej5yo_p ; jljz4ej5yo_p =
9.5492965855137211 * * gzpwimsfg2 ; if ( ssIsModeUpdateTimeStep ( plpdajfsza
-> _mdlRefSfcnS ) ) { if ( jljz4ej5yo_p >= anoacnregq . P_14 ) { localDW ->
ex3gnslpxt = 1 ; } else if ( jljz4ej5yo_p > anoacnregq . P_15 ) { localDW ->
ex3gnslpxt = 0 ; } else { localDW -> ex3gnslpxt = - 1 ; } localDW ->
dpwhbbueuq = ( look2_binlcpw ( localB -> guvbzoda22 , jljz4ej5yo_p ,
anoacnregq . P_5 , anoacnregq . P_4 , anoacnregq . P_0 , anoacnregq . P_33 ,
16U ) >= anoacnregq . P_17 ) ; localDW -> pqkaygpzej = ( look2_binlcpw (
localB -> guvbzoda22 , jljz4ej5yo_p , anoacnregq . P_5 , anoacnregq . P_4 ,
anoacnregq . P_1 , anoacnregq . P_34 , 16U ) >= anoacnregq . P_18 ) ; }
localB -> ic3fgv5hsp = localB -> guvbzoda22 - look1_binlcpw ( jljz4ej5yo_p ,
anoacnregq . P_4 , anoacnregq . P_3 , 15U ) ; LookUp_real_T_real_T ( & (
localB -> l523fjbcgy ) , & localB -> ozcmxjbphl [ 0 ] , localB -> ic3fgv5hsp
, & localB -> bagmxejbfa [ 0 ] , 1U ) ; } void bmpf100lpn ( kgxfljuibq *
const plpdajfsza , const real_T * dhoq3itz5d , const real_T * gzpwimsfg2 ,
real_T * p2vuqhqrpz , puu5fcics1 * localB , ow0cmqxpyk * localDW , ih0mudozt1
* localXdot ) { real_T bya0gmno5g_p ; real_T ioizan3ux3_p ; real_T
jljz4ej5yo_e ; jljz4ej5yo_e = 9.5492965855137211 * * gzpwimsfg2 ; if (
ssIsModeUpdateTimeStep ( plpdajfsza -> _mdlRefSfcnS ) ) { if ( jljz4ej5yo_e
>= anoacnregq . P_14 ) { localDW -> ex3gnslpxt = 1 ; } else if ( jljz4ej5yo_e
> anoacnregq . P_15 ) { localDW -> ex3gnslpxt = 0 ; } else { localDW ->
ex3gnslpxt = - 1 ; } } ioizan3ux3_p = * dhoq3itz5d - localB -> jv1i44zpz4 ;
if ( localDW -> ex3gnslpxt == 1 ) { bya0gmno5g_p = anoacnregq . P_14 ; } else
if ( localDW -> ex3gnslpxt == - 1 ) { bya0gmno5g_p = anoacnregq . P_15 ; }
else { bya0gmno5g_p = jljz4ej5yo_e ; } bya0gmno5g_p = ( look2_binlcpw (
localB -> guvbzoda22 , jljz4ej5yo_e , anoacnregq . P_5 , anoacnregq . P_4 ,
anoacnregq . P_2 , anoacnregq . P_32 , 16U ) - anoacnregq . P_13 *
look1_binlcpw ( jljz4ej5yo_e , anoacnregq . P_12 , anoacnregq . P_11 , 1U ) /
( bya0gmno5g_p * anoacnregq . P_16 ) ) - * p2vuqhqrpz ; if (
ssIsModeUpdateTimeStep ( plpdajfsza -> _mdlRefSfcnS ) ) { localDW ->
dpwhbbueuq = ( look2_binlcpw ( localB -> guvbzoda22 , jljz4ej5yo_e ,
anoacnregq . P_5 , anoacnregq . P_4 , anoacnregq . P_0 , anoacnregq . P_33 ,
16U ) >= anoacnregq . P_17 ) ; localDW -> pqkaygpzej = ( look2_binlcpw (
localB -> guvbzoda22 , jljz4ej5yo_e , anoacnregq . P_5 , anoacnregq . P_4 ,
anoacnregq . P_1 , anoacnregq . P_34 , 16U ) >= anoacnregq . P_18 ) ; }
localB -> ic3fgv5hsp = localB -> guvbzoda22 - look1_binlcpw ( jljz4ej5yo_e ,
anoacnregq . P_4 , anoacnregq . P_3 , 15U ) ; LookUp_real_T_real_T ( & (
localB -> l523fjbcgy ) , & localB -> ozcmxjbphl [ 0 ] , localB -> ic3fgv5hsp
, & localB -> bagmxejbfa [ 0 ] , 1U ) ; localXdot -> peid1wqkia = 1.0 /
localB -> l523fjbcgy * localB -> cuyzaclebl ; localXdot -> obuuvimtvu =
ioizan3ux3_p * anoacnregq . P_9 ; localXdot -> h235wq4fsj = bya0gmno5g_p *
anoacnregq . P_10 ; localXdot -> lf5wmc502m = anoacnregq . P_19 *
jljz4ej5yo_e ; } void a20sjwaowh ( kgxfljuibq * const plpdajfsza , const
real_T * gzpwimsfg2 , puu5fcics1 * localB , ow0cmqxpyk * localDW , jgubm4xidl
* localZCSV ) { real_T e3d2zte0ph_p ; real_T jljz4ej5yo_m ; real_T
ko3eqr5ngo_p ; jljz4ej5yo_m = 9.5492965855137211 * * gzpwimsfg2 ; if (
ssIsModeUpdateTimeStep ( plpdajfsza -> _mdlRefSfcnS ) ) { if ( jljz4ej5yo_m
>= anoacnregq . P_14 ) { localDW -> ex3gnslpxt = 1 ; } else if ( jljz4ej5yo_m
> anoacnregq . P_15 ) { localDW -> ex3gnslpxt = 0 ; } else { localDW ->
ex3gnslpxt = - 1 ; } } e3d2zte0ph_p = look2_binlcpw ( localB -> guvbzoda22 ,
jljz4ej5yo_m , anoacnregq . P_5 , anoacnregq . P_4 , anoacnregq . P_0 ,
anoacnregq . P_33 , 16U ) ; ko3eqr5ngo_p = look2_binlcpw ( localB ->
guvbzoda22 , jljz4ej5yo_m , anoacnregq . P_5 , anoacnregq . P_4 , anoacnregq
. P_1 , anoacnregq . P_34 , 16U ) ; if ( ssIsModeUpdateTimeStep ( plpdajfsza
-> _mdlRefSfcnS ) ) { localDW -> dpwhbbueuq = ( e3d2zte0ph_p >= anoacnregq .
P_17 ) ; localDW -> pqkaygpzej = ( ko3eqr5ngo_p >= anoacnregq . P_18 ) ; }
localB -> ic3fgv5hsp = localB -> guvbzoda22 - look1_binlcpw ( jljz4ej5yo_m ,
anoacnregq . P_4 , anoacnregq . P_3 , 15U ) ; LookUp_real_T_real_T ( & (
localB -> l523fjbcgy ) , & localB -> ozcmxjbphl [ 0 ] , localB -> ic3fgv5hsp
, & localB -> bagmxejbfa [ 0 ] , 1U ) ; localZCSV -> oww3vu3njk =
jljz4ej5yo_m - anoacnregq . P_14 ; localZCSV -> j54vi5dxsi = jljz4ej5yo_m -
anoacnregq . P_15 ; localZCSV -> ci5tqy04bq = e3d2zte0ph_p - anoacnregq .
P_17 ; localZCSV -> aiwm5df5c1 = ko3eqr5ngo_p - anoacnregq . P_18 ; } void
po5zlrzzyd ( kgxfljuibq * const plpdajfsza ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( plpdajfsza ->
_mdlRefSfcnS , "SiMappedEngineV" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fbspkqemka (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , kgxfljuibq * const plpdajfsza , puu5fcics1 * localB ,
ow0cmqxpyk * localDW , fpgmc1blog * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; anoacnregq . P_14 = rtInf ; ( void ) memset ( ( void
* ) plpdajfsza , 0 , sizeof ( kgxfljuibq ) ) ; plpdajfsza -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; plpdajfsza -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; plpdajfsza -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; plpdajfsza -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( plpdajfsza -> _mdlRefSfcnS , "SiMappedEngineV" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> guvbzoda22 = 0.0
; localB -> jv1i44zpz4 = 0.0 ; localB -> nmqikn0wfy = 0.0 ; localB ->
hln2r0vyrz [ 0 ] = 0.0 ; localB -> hln2r0vyrz [ 1 ] = 0.0 ; localB ->
haqwzftjaf [ 0 ] = 0.0 ; localB -> haqwzftjaf [ 1 ] = 0.0 ; localB ->
bagmxejbfa [ 0 ] = 0.0 ; localB -> bagmxejbfa [ 1 ] = 0.0 ; localB ->
ozcmxjbphl [ 0 ] = 0.0 ; localB -> ozcmxjbphl [ 1 ] = 0.0 ; localB ->
cuyzaclebl = 0.0 ; localB -> miordrgtti = 0.0 ; localB -> gaxjelpno1 = 0.0 ;
localB -> dizs5oa3q4 = 0.0 ; localB -> ic3fgv5hsp = 0.0 ; localB ->
l523fjbcgy = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
ow0cmqxpyk ) ) ; SiMappedEngineV_InitializeDataMapInfo ( plpdajfsza , localDW
, localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( plpdajfsza -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
plpdajfsza -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( plpdajfsza -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_SiMappedEngineV_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_SiMappedEngineV , 43 ) ; * retVal = 1 ; } static void
mr_SiMappedEngineV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_SiMappedEngineV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SiMappedEngineV_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SiMappedEngineV_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_SiMappedEngineV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_SiMappedEngineV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_SiMappedEngineV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SiMappedEngineV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SiMappedEngineV_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_SiMappedEngineV_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_SiMappedEngineV_GetDWork ( const
o2k4rz0uw5x * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_SiMappedEngineV_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 3 ] = {
"mdlrefDW->rtdw.ex3gnslpxt" , "mdlrefDW->rtdw.dpwhbbueuq" ,
"mdlrefDW->rtdw.pqkaygpzej" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 3 , rtdwDataFieldNames ) ; mr_SiMappedEngineV_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . ex3gnslpxt ) ,
sizeof ( mdlrefDW -> rtdw . ex3gnslpxt ) ) ;
mr_SiMappedEngineV_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . dpwhbbueuq ) , sizeof ( mdlrefDW -> rtdw . dpwhbbueuq )
) ; mr_SiMappedEngineV_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . pqkaygpzej ) , sizeof ( mdlrefDW -> rtdw .
pqkaygpzej ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_SiMappedEngineV_SetDWork ( o2k4rz0uw5x *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_SiMappedEngineV_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SiMappedEngineV_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ex3gnslpxt ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . ex3gnslpxt ) )
; mr_SiMappedEngineV_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. dpwhbbueuq ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . dpwhbbueuq )
) ; mr_SiMappedEngineV_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . pqkaygpzej ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
pqkaygpzej ) ) ; } } void mr_SiMappedEngineV_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 2968485488U , 829044630U ,
1900956293U , 3649267092U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"SiMappedEngineV" , & chksum [ 0 ] ) ; } mxArray *
mr_SiMappedEngineV_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
