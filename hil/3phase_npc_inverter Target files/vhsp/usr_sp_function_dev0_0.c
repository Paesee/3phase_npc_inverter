// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


#include "park_clarke.h"

#include "park_clarke.h"


#include "geometric_modulation.h"



#include "park_clarke.h"

// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines
























































































































































































































































































































































































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f








































































































































































float  _meas_clarke__ilf_al = 0;
float  _meas_clarke__ilf_be = 0;
float  _meas_clarke__ilf_0 = 0;
float  _meas_clarke__vc_al = 0;
float  _meas_clarke__vc_be = 0;
float  _meas_clarke__vc_0 = 0;
float  _meas_clarke__i0_al = 0;
float  _meas_clarke__i0_be = 0;
float  _meas_clarke__i0_0 = 0;


float  _modulation_comparator__va = 0;
float  _modulation_comparator__vb = 0;
float  _modulation_comparator__vc = 0;














































































































































float  _ref_clarke__ONE_BY_SQRT3 = 0;
float  _ref_clarke__v0_al = 0;
float  _ref_clarke__v0_be = 0;
float  _ref_clarke__v0_0 = 0;


























































float  _inner_loop_alpha__SS_V_GAINS [ ] = {  0 ,  0 ,  0 ,  0 ,  0 };
float  _inner_loop_alpha__SS_I_GAINS [ ] = {  0 ,  0 ,  0 };
float  _inner_loop_alpha__UV_BOUNDARY = 0;
float  _inner_loop_alpha__UI_BOUNDARY = 0;
float  _inner_loop_alpha__A = 0;
float  _inner_loop_alpha__OMEGA0 = 0;
float  _inner_loop_alpha__TS_20KHZ = 0;
float  _inner_loop_alpha__uv = 0;
float  _inner_loop_alpha__uv_bounded = 0;
float  _inner_loop_alpha__xc_1_kminus1 = 0;
float  _inner_loop_alpha__xc_2_kminus1 = 0;
float  _inner_loop_alpha__xc_1 = 0;
float  _inner_loop_alpha__xc_2 = 0;
float  _inner_loop_alpha__err = 0;
float  _inner_loop_alpha__ui = 0;
float  _inner_loop_alpha__ui_bounded = 0;

float  _inner_loop_alpha1__SS_V_GAINS [ ] = {  0 ,  0 ,  0 ,  0 ,  0 };
float  _inner_loop_alpha1__SS_I_GAINS [ ] = {  0 ,  0 ,  0 };
float  _inner_loop_alpha1__UV_BOUNDARY = 0;
float  _inner_loop_alpha1__UI_BOUNDARY = 0;
float  _inner_loop_alpha1__A = 0;
float  _inner_loop_alpha1__OMEGA0 = 0;
float  _inner_loop_alpha1__TS_20KHZ = 0;
float  _inner_loop_alpha1__uv = 0;
float  _inner_loop_alpha1__uv_bounded = 0;
float  _inner_loop_alpha1__xc_1_kminus1 = 0;
float  _inner_loop_alpha1__xc_2_kminus1 = 0;
float  _inner_loop_alpha1__xc_1 = 0;
float  _inner_loop_alpha1__xc_2 = 0;
float  _inner_loop_alpha1__err = 0;
float  _inner_loop_alpha1__ui = 0;
float  _inner_loop_alpha1__ui_bounded = 0;











































































float  _geo_pwm__i0 = 0;
float  _geo_pwm__v0 = 0;
float  _geo_pwm__err = 0;
float  _geo_pwm__err_kminus = 0;















float  _inv_clarke__van = 0;
float  _inv_clarke__vbn = 0;
float  _inv_clarke__vcn = 0;




























































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables
const double _grid_load_load_phase_a_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
const double _grid_load_load_phase_a_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
const double _grid_load_load_phase_a_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
const double _grid_load_load_phase_b_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
const double _grid_load_load_phase_b_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
const double _grid_load_load_phase_b_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
const double _grid_load_load_phase_c_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
const double _grid_load_load_phase_c_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
const double _grid_load_load_phase_c_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
//@cmp.var.start
// variables
double _c__out;
double _dc_bus_vc2_va1__out;
double _grid_load_load_bal_en__out = 1.0;
double _grid_load_load_constant13__out = 0.5;
double _grid_load_load_constant14__out = 0.5;
double _grid_load_load_enable__out;
double _grid_load_load_phase_a_constant11__out = 143.40740740740733;
double _grid_load_load_phase_a_constant12__out = 0.04587507352809298;
double _grid_load_load_phase_a_constant3__out = 0.006000000000000002;
double _grid_load_load_phase_a_constant5__out = 0.0;
double _grid_load_load_phase_a_constant6__out = 0.0467458144857058;
double _grid_load_load_phase_a_grid_synchronization_constant1__out = 0.05;
double _grid_load_load_phase_a_grid_synchronization_delay1__out;
static X_Int32 _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__out;
double _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_filtered_value;
double _grid_load_load_phase_a_i__out;
double _grid_load_load_phase_a_low_pass_filter2__out;
double _grid_load_load_phase_a_low_pass_filter2__previous_filtered_value;
double _grid_load_load_phase_a_low_pass_filter8__out;
double _grid_load_load_phase_a_low_pass_filter8__previous_filtered_value;
double _grid_load_load_phase_a_low_pass_filter9__out;
double _grid_load_load_phase_a_low_pass_filter9__previous_filtered_value;
static X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_const_h__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_a_rate_of_change_constant14__out = 1.0;
double _grid_load_load_phase_a_rate_of_change_constant15__out = 0.0;
double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__fsm_state;
double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pin;
double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in;
double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out;
double _grid_load_load_phase_a_rate_of_change1_constant14__out = 1.0;
double _grid_load_load_phase_a_rate_of_change1_constant15__out = 0.0;
double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__fsm_state;
double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pin;
double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in;
double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out;
double _grid_load_load_phase_a_sr_flip_flop1__out;
double _grid_load_load_phase_a_sr_flip_flop1__out_n;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_constant2__out = 2;
double _grid_load_load_phase_a_single_phase_pll1_i__out;
double _grid_load_load_phase_a_single_phase_pll1_i__pi_reg_out_int;
double _grid_load_load_phase_a_single_phase_pll1_integrator1__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator2__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator3__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator4__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator5__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator6__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator7__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator8__out;
double _grid_load_load_phase_a_single_phase_pll1_integrator9__out;
double _grid_load_load_phase_a_single_phase_pll1_const__out = 376.99111843077515;
double _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__in;

double _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out;
double _grid_load_load_phase_a_transport_delay1__out;
double _grid_load_load_phase_a_transport_delay2__out;
double _grid_load_load_phase_a_unit_delay1__out;
double _grid_load_load_phase_a_unit_delay12__out;
double _grid_load_load_phase_a_unit_delay13__out;
double _grid_load_load_phase_a_unit_delay2__out;
double _grid_load_load_phase_a_unit_delay3__out;
double _grid_load_load_phase_a_unit_delay4__out;
double _grid_load_load_phase_a_unit_delay5__out;
double _grid_load_load_phase_a_unit_delay6__out;
double _grid_load_load_phase_a_unit_delay7__out;
double _grid_load_load_phase_a_unit_delay8__out;
double _grid_load_load_phase_a_v__out;
X_Int32 _grid_load_load_phase_a_const_one__out = 1;
X_Int32 _grid_load_load_phase_a_dimension__out = 1;
static X_Int32 _grid_load_load_phase_a_harmonic_vector__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_a_harmonic_vector1__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_a_harmonic_vector2__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_a_harmonic_vector3__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_a_harmonic_vector5__out[2] = { 1, 0 };
X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__C_inc_applied;
X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__R_inc_applied;
X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__enable;

X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__C_en;
X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__R_en;
double _grid_load_load_phase_b_constant11__out = 143.40740740740733;
double _grid_load_load_phase_b_constant12__out = 0.04587507352809298;
double _grid_load_load_phase_b_constant3__out = 0.006000000000000002;
double _grid_load_load_phase_b_constant5__out = 0.0;
double _grid_load_load_phase_b_constant6__out = 0.0467458144857058;
double _grid_load_load_phase_b_grid_synchronization_constant1__out = 0.05;
double _grid_load_load_phase_b_grid_synchronization_delay1__out;
static X_Int32 _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__out;
double _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_filtered_value;
double _grid_load_load_phase_b_i__out;
double _grid_load_load_phase_b_low_pass_filter2__out;
double _grid_load_load_phase_b_low_pass_filter2__previous_filtered_value;
double _grid_load_load_phase_b_low_pass_filter8__out;
double _grid_load_load_phase_b_low_pass_filter8__previous_filtered_value;
double _grid_load_load_phase_b_low_pass_filter9__out;
double _grid_load_load_phase_b_low_pass_filter9__previous_filtered_value;
static X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_const_h__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_b_rate_of_change_constant14__out = 1.0;
double _grid_load_load_phase_b_rate_of_change_constant15__out = 0.0;
double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__fsm_state;
double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pin;
double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in;
double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out;
double _grid_load_load_phase_b_rate_of_change1_constant14__out = 1.0;
double _grid_load_load_phase_b_rate_of_change1_constant15__out = 0.0;
double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__fsm_state;
double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pin;
double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in;
double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out;
double _grid_load_load_phase_b_sr_flip_flop1__out;
double _grid_load_load_phase_b_sr_flip_flop1__out_n;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_constant2__out = 2;
double _grid_load_load_phase_b_single_phase_pll1_i__out;
double _grid_load_load_phase_b_single_phase_pll1_i__pi_reg_out_int;
double _grid_load_load_phase_b_single_phase_pll1_integrator1__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator2__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator3__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator4__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator5__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator6__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator7__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator8__out;
double _grid_load_load_phase_b_single_phase_pll1_integrator9__out;
double _grid_load_load_phase_b_single_phase_pll1_const__out = 376.99111843077515;
double _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__in;

double _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out;
double _grid_load_load_phase_b_transport_delay1__out;
double _grid_load_load_phase_b_transport_delay2__out;
double _grid_load_load_phase_b_unit_delay1__out;
double _grid_load_load_phase_b_unit_delay12__out;
double _grid_load_load_phase_b_unit_delay13__out;
double _grid_load_load_phase_b_unit_delay2__out;
double _grid_load_load_phase_b_unit_delay3__out;
double _grid_load_load_phase_b_unit_delay4__out;
double _grid_load_load_phase_b_unit_delay5__out;
double _grid_load_load_phase_b_unit_delay6__out;
double _grid_load_load_phase_b_unit_delay7__out;
double _grid_load_load_phase_b_unit_delay8__out;
double _grid_load_load_phase_b_v__out;
X_Int32 _grid_load_load_phase_b_const_one__out = 1;
X_Int32 _grid_load_load_phase_b_dimension__out = 1;
static X_Int32 _grid_load_load_phase_b_harmonic_vector__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_b_harmonic_vector1__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_b_harmonic_vector2__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_b_harmonic_vector3__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_b_harmonic_vector5__out[2] = { 1, 0 };
X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__C_inc_applied;
X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__R_inc_applied;
X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__enable;

X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__C_en;
X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__R_en;
double _grid_load_load_phase_c_constant11__out = 143.40740740740733;
double _grid_load_load_phase_c_constant12__out = 0.04587507352809298;
double _grid_load_load_phase_c_constant3__out = 0.006000000000000002;
double _grid_load_load_phase_c_constant5__out = 0.0;
double _grid_load_load_phase_c_constant6__out = 0.0467458144857058;
double _grid_load_load_phase_c_grid_synchronization_constant1__out = 0.05;
double _grid_load_load_phase_c_grid_synchronization_delay1__out;
static X_Int32 _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__out;
double _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_filtered_value;
double _grid_load_load_phase_c_i__out;
double _grid_load_load_phase_c_low_pass_filter2__out;
double _grid_load_load_phase_c_low_pass_filter2__previous_filtered_value;
double _grid_load_load_phase_c_low_pass_filter8__out;
double _grid_load_load_phase_c_low_pass_filter8__previous_filtered_value;
double _grid_load_load_phase_c_low_pass_filter9__out;
double _grid_load_load_phase_c_low_pass_filter9__previous_filtered_value;
static X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_const_h__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_const_h__out[2] = { 1, 0 };
double _grid_load_load_phase_c_rate_of_change_constant14__out = 1.0;
double _grid_load_load_phase_c_rate_of_change_constant15__out = 0.0;
double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__fsm_state;
double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pin;
double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in;
double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out;
double _grid_load_load_phase_c_rate_of_change1_constant14__out = 1.0;
double _grid_load_load_phase_c_rate_of_change1_constant15__out = 0.0;
double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__fsm_state;
double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pin;
double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in;
double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__ramp_time_ms;

double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out;
double _grid_load_load_phase_c_sr_flip_flop1__out;
double _grid_load_load_phase_c_sr_flip_flop1__out_n;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_constant2__out = 2;
double _grid_load_load_phase_c_single_phase_pll1_i__out;
double _grid_load_load_phase_c_single_phase_pll1_i__pi_reg_out_int;
double _grid_load_load_phase_c_single_phase_pll1_integrator1__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator2__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator3__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator4__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator5__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator6__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator7__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator8__out;
double _grid_load_load_phase_c_single_phase_pll1_integrator9__out;
double _grid_load_load_phase_c_single_phase_pll1_const__out = 376.99111843077515;
double _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__in;

double _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out;
double _grid_load_load_phase_c_transport_delay1__out;
double _grid_load_load_phase_c_transport_delay2__out;
double _grid_load_load_phase_c_unit_delay1__out;
double _grid_load_load_phase_c_unit_delay12__out;
double _grid_load_load_phase_c_unit_delay13__out;
double _grid_load_load_phase_c_unit_delay2__out;
double _grid_load_load_phase_c_unit_delay3__out;
double _grid_load_load_phase_c_unit_delay4__out;
double _grid_load_load_phase_c_unit_delay5__out;
double _grid_load_load_phase_c_unit_delay6__out;
double _grid_load_load_phase_c_unit_delay7__out;
double _grid_load_load_phase_c_unit_delay8__out;
double _grid_load_load_phase_c_v__out;
X_Int32 _grid_load_load_phase_c_const_one__out = 1;
X_Int32 _grid_load_load_phase_c_dimension__out = 1;
static X_Int32 _grid_load_load_phase_c_harmonic_vector__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_c_harmonic_vector1__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_c_harmonic_vector2__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_c_harmonic_vector3__out[2] = { 1, 0 };
static X_Int32 _grid_load_load_phase_c_harmonic_vector5__out[2] = { 1, 0 };
X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__C_inc_applied;
X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__R_inc_applied;
X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__enable;

X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__C_en;
X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__R_en;
double _grid_load_load_pref__out;
double _grid_load_load_pref_phasea__out;
double _grid_load_load_pref_phaseb__out;
double _grid_load_load_pref_phasec__out;
double _grid_load_load_qref__out;
double _grid_load_load_qref_phasea__out;
double _grid_load_load_qref_phaseb__out;
double _grid_load_load_qref_phasec__out;
double _grid_load_load_roc__out;
double _kp__out;
double _kr__out;
double _lc_filter_ila1_ia1__out;
double _lc_filter_ilb1_ia1__out;
double _lc_filter_ilc1_ia1__out;
double _lc_filter_vca1_va1__out;
double _lc_filter_vca2_va1__out;
double _lc_filter_vca3_va1__out;
double _line_impedance_ilag_ia1__out;
double _line_impedance_ilbg_ia1__out;
double _line_impedance_ilcg_ia1__out;
double _modulation_lower_carrier__out;
double _modulation_rate_transition1_output__out;
double _modulation_rate_transition2_output__out;
double _modulation_rate_transition3_output__out;
double _modulation_upper_carrier__out;
X_Int32 _steady_state__out;
X_Int32 _test_flag__out;
double _vsc1_fmeter_ia_ia1__out;
double _vsc1_fmeter_ib_ia1__out;
double _vsc1_fmeter_ic_ia1__out;
double _vsc1_fmeter_pll_lpf_lpf__out;
double _vsc1_fmeter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 2.467400050942814e-08};
double _vsc1_fmeter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.9997778894456002, 0.9997779141196009};
double _vsc1_fmeter_pll_lpf_lpf__a_sum;
double _vsc1_fmeter_pll_lpf_lpf__b_sum;
double _vsc1_fmeter_pll_lpf_lpf__delay_line_in;
double _vsc1_fmeter_pll_pid_integrator1__out;
double _vsc1_fmeter_pll_pid_integrator2__out;
double _vsc1_fmeter_pll_unit_delay1__out;
double _vsc1_fmeter_pll_abc_to_dq_lpf_d__out;
double _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _vsc1_fmeter_pll_abc_to_dq_lpf_q__out;
double _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _vsc1_fmeter_vab_va1__out;
double _vsc1_fmeter_van_va1__out;
double _vsc1_fmeter_vbc_va1__out;
double _vsc1_fmeter_vbn_va1__out;
double _vsc1_fmeter_vca_va1__out;
double _vsc1_fmeter_vcn_va1__out;
double _vsc1_fmeter_zero__out = 0.0;
double _vsc1_meter_ia_ia1__out;
double _vsc1_meter_ib_ia1__out;
double _vsc1_meter_ic_ia1__out;
double _vsc1_meter_vab_va1__out;
double _vsc1_meter_van_va1__out;
double _vsc1_meter_vbc_va1__out;
double _vsc1_meter_vbn_va1__out;
double _vsc1_meter_vca_va1__out;
double _vsc1_meter_vcn_va1__out;
double _vsc1_meter_zero__out = 0.0;
double _dc_voltage__out = 1000.0;
double _sine_a__out;
double _sine_b__out;
double _sine_c__out;
double _v_line_rms__out;
double _gain1__out;
double _grid_load_load_relational_operator4__out;
double _grid_load_load_relational_operator3__out;
double _grid_load_load_phase_a_grid_synchronization_steady_state_check__in;

double _grid_load_load_phase_a_grid_synchronization_steady_state_check__out;
double _grid_load_load_phase_a_limit2__out;
double _grid_load_load_phase_a_f_to_w10__out;
double _grid_load_load_phase_a_f_to_w7__out;
double _grid_load_load_phase_a_f_to_w11__out;
double _grid_load_load_phase_a_f_to_w6__out;
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_freq_gain__out[2];
double _grid_load_load_phase_a_grid_synchronization_f_to_w__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__f1;
X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__signal;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_freq_gain__out[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_freq_gain__out[2];
double _grid_load_load_phase_a_grid_synchronization_peak_calc_limit4__out;
double _grid_load_load_phase_a_single_phase_pll1_sum4__out;
double _grid_load_load_phase_a_single_phase_pll1_product2__out;
double _grid_load_load_phase_a_single_phase_pll1_w_to_f__out;
double _grid_load_load_phase_a_single_phase_pll1_sum9__out;
double _grid_load_load_phase_a_single_phase_pll1_sum11__out;
double _grid_load_load_phase_a_single_phase_pll1_sum13__out;
double _grid_load_load_phase_a_single_phase_pll1_sum14__out;
double _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq;
double _grid_load_load_phase_a_single_phase_pll1_c_function1__va;
double _grid_load_load_phase_a_single_phase_pll1_c_function1__vb;

double _grid_load_load_phase_a_single_phase_pll1_c_function1__vd;
double _grid_load_load_phase_a_single_phase_pll1_c_function1__vq;
double _grid_load_load_phase_a_single_phase_pll1_trigonometric_function1__out;
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__f1;
X_Int32 _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h[2];
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__signal;

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp[2];
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase[2];
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__f1;
X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__signal;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase[2];
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt;
double _grid_load_load_phase_a_single_phase_pll1_sum1__out;
X_Int32 _grid_load_load_phase_a_relational_operator3__out;
X_UnInt32 _grid_load_load_phase_a_logical_operator22__out;
X_UnInt32 _grid_load_load_phase_a_logical_operator23__out;
double _grid_load_load_phase_b_grid_synchronization_steady_state_check__in;

double _grid_load_load_phase_b_grid_synchronization_steady_state_check__out;
double _grid_load_load_phase_b_limit2__out;
double _grid_load_load_phase_b_f_to_w10__out;
double _grid_load_load_phase_b_f_to_w7__out;
double _grid_load_load_phase_b_f_to_w11__out;
double _grid_load_load_phase_b_f_to_w6__out;
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_freq_gain__out[2];
double _grid_load_load_phase_b_grid_synchronization_f_to_w__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__f1;
X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__signal;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_freq_gain__out[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_freq_gain__out[2];
double _grid_load_load_phase_b_grid_synchronization_peak_calc_limit4__out;
double _grid_load_load_phase_b_single_phase_pll1_sum4__out;
double _grid_load_load_phase_b_single_phase_pll1_product2__out;
double _grid_load_load_phase_b_single_phase_pll1_w_to_f__out;
double _grid_load_load_phase_b_single_phase_pll1_sum9__out;
double _grid_load_load_phase_b_single_phase_pll1_sum11__out;
double _grid_load_load_phase_b_single_phase_pll1_sum13__out;
double _grid_load_load_phase_b_single_phase_pll1_sum14__out;
double _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq;
double _grid_load_load_phase_b_single_phase_pll1_c_function1__va;
double _grid_load_load_phase_b_single_phase_pll1_c_function1__vb;

double _grid_load_load_phase_b_single_phase_pll1_c_function1__vd;
double _grid_load_load_phase_b_single_phase_pll1_c_function1__vq;
double _grid_load_load_phase_b_single_phase_pll1_trigonometric_function1__out;
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__f1;
X_Int32 _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h[2];
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__signal;

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp[2];
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase[2];
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__f1;
X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__signal;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase[2];
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt;
double _grid_load_load_phase_b_single_phase_pll1_sum1__out;
X_Int32 _grid_load_load_phase_b_relational_operator3__out;
X_UnInt32 _grid_load_load_phase_b_logical_operator22__out;
X_UnInt32 _grid_load_load_phase_b_logical_operator23__out;
double _grid_load_load_phase_c_grid_synchronization_steady_state_check__in;

double _grid_load_load_phase_c_grid_synchronization_steady_state_check__out;
double _grid_load_load_phase_c_limit2__out;
double _grid_load_load_phase_c_f_to_w10__out;
double _grid_load_load_phase_c_f_to_w7__out;
double _grid_load_load_phase_c_f_to_w11__out;
double _grid_load_load_phase_c_f_to_w6__out;
double _grid_load_load_logical_operator1__out;
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_freq_gain__out[2];
double _grid_load_load_phase_c_grid_synchronization_f_to_w__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__f1;
X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__signal;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_freq_gain__out[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_freq_gain__out[2];
double _grid_load_load_phase_c_grid_synchronization_peak_calc_limit4__out;
double _grid_load_load_phase_c_single_phase_pll1_sum4__out;
double _grid_load_load_phase_c_single_phase_pll1_product2__out;
double _grid_load_load_phase_c_single_phase_pll1_w_to_f__out;
double _grid_load_load_phase_c_single_phase_pll1_sum9__out;
double _grid_load_load_phase_c_single_phase_pll1_sum11__out;
double _grid_load_load_phase_c_single_phase_pll1_sum13__out;
double _grid_load_load_phase_c_single_phase_pll1_sum14__out;
double _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq;
double _grid_load_load_phase_c_single_phase_pll1_c_function1__va;
double _grid_load_load_phase_c_single_phase_pll1_c_function1__vb;

double _grid_load_load_phase_c_single_phase_pll1_c_function1__vd;
double _grid_load_load_phase_c_single_phase_pll1_c_function1__vq;
double _grid_load_load_phase_c_single_phase_pll1_trigonometric_function1__out;
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__f1;
X_Int32 _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h[2];
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__signal;

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp[2];
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase[2];
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__f1;
X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__signal;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase[2];
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt;
double _grid_load_load_phase_c_single_phase_pll1_sum1__out;
X_Int32 _grid_load_load_phase_c_relational_operator3__out;
X_UnInt32 _grid_load_load_phase_c_logical_operator22__out;
X_UnInt32 _grid_load_load_phase_c_logical_operator23__out;
double _grid_load_load_bus_join2__out[2];
double _grid_load_load_bus_join1__out[2];
double _grid_load_load_bus_join3__out[2];
double _grid_load_load_bus_join5__out[2];
double _grid_load_load_limit8__out;
double _lc_filter_bus_join__out[3];
double _lc_filter_bus_join1__out[3];
double _line_impedance_bus_join__out[3];
double _modulation_gain2__out;
double _modulation_gain1__out;
double _vsc1_fmeter_pll_to_hz__out;
double _vsc1_fmeter_pll_sin__out;
double _vsc1_fmeter_pll_normalize__in1;
double _vsc1_fmeter_pll_normalize__in2;

double _vsc1_fmeter_pll_normalize__in2_pu;
double _vsc1_fmeter_pll_normalize__pk;
double _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _vsc1_fmeter_power_meter__Pdc;
double _vsc1_fmeter_power_meter__Qdc;
double _vsc1_fmeter_power_meter__P0dc;
double _vsc1_fmeter_power_meter__Pac;
double _vsc1_fmeter_power_meter__Qac;
double _vsc1_fmeter_power_meter__P0ac;
double _vsc1_fmeter_power_meter__apparent;
double _vsc1_fmeter_power_meter__k_factor;
double _vsc1_fmeter_power_meter__v_alpha;
double _vsc1_fmeter_power_meter__v_beta;
double _vsc1_fmeter_power_meter__i_alpha;
double _vsc1_fmeter_power_meter__i_beta;
double _vsc1_fmeter_power_meter__v_zero;
double _vsc1_fmeter_power_meter__i_zero;
double _vsc1_fmeter_power_meter__filter_1_output;
double _vsc1_fmeter_power_meter__filter_1_outputQ;
double _vsc1_fmeter_power_meter__filter_1_outputP0;
double _vsc1_fmeter_power_meter__filter_2_output;
double _vsc1_fmeter_power_meter__filter_2_outputQ;
double _vsc1_fmeter_power_meter__filter_2_outputP0;
double _vsc1_fmeter_extra_output_bus__out[12];
double _vsc1_meter_extra_output_bus__out[12];
double _vsc1_meter_output_bus__out[30];
double _sqrt_2__out;
double _dc_bus_c2_reciprocal__out;
double _dc_bus_c3_reciprocal__out;
float _grid_load_load_balance_en_fb__tmp;
float _grid_load_load_enable_fb__tmp;
double _grid_load_load_phase_a_relational_operator1__out;
double _grid_load_load_phase_a_c_function4__Pref;
double _grid_load_load_phase_a_c_function4__Pref_late;

double _grid_load_load_phase_a_c_function4__out;
double _grid_load_load_phase_a_abs3__out;
double _grid_load_load_phase_a_c_function5__Qref;
double _grid_load_load_phase_a_c_function5__Qref_late;

double _grid_load_load_phase_a_c_function5__out;
double _grid_load_load_phase_a_grid_synchronization_limit3__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_deg_gain__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_phs_gain__out[2];
double _grid_load_load_phase_a_grid_synchronization_peak_calc_product6__out;
double _grid_load_load_phase_a_single_phase_pll1_gain5__out;
double _grid_load_load_phase_a_single_phase_pll1_sum12__out;
double _grid_load_load_phase_a_single_phase_pll1_gain7__out;
double _grid_load_load_phase_a_single_phase_pll1_gain8__out;
double _grid_load_load_phase_a_single_phase_pll1_gain10__out;
double _grid_load_load_phase_a_single_phase_pll1_gain11__out;
double _grid_load_load_phase_a_grid_synchronization_peak_calc_limit5__out;
double _grid_load_load_phase_a_single_phase_pll1_gain3__out;
double _grid_load_load_phase_a_single_phase_pll1_math_f1__out;
double _grid_load_load_phase_a_single_phase_pll1_math_f2__out;
double _grid_load_load_phase_a_grid_synchronization_gain3__out[2];
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_deg_gain__out;
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_phs_gain__out[2];
double _grid_load_load_phase_a_grid_synchronization_limit9__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_deg_gain__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_phs_gain__out[2];
double _grid_load_load_phase_a_single_phase_pll1_gain2__out;
double _grid_load_load_phase_b_relational_operator1__out;
double _grid_load_load_phase_b_c_function4__Pref;
double _grid_load_load_phase_b_c_function4__Pref_late;

double _grid_load_load_phase_b_c_function4__out;
double _grid_load_load_phase_b_abs3__out;
double _grid_load_load_phase_b_c_function5__Qref;
double _grid_load_load_phase_b_c_function5__Qref_late;

double _grid_load_load_phase_b_c_function5__out;
double _grid_load_load_phase_b_grid_synchronization_limit3__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_deg_gain__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_phs_gain__out[2];
double _grid_load_load_phase_b_grid_synchronization_peak_calc_product6__out;
double _grid_load_load_phase_b_single_phase_pll1_gain5__out;
double _grid_load_load_phase_b_single_phase_pll1_sum12__out;
double _grid_load_load_phase_b_single_phase_pll1_gain7__out;
double _grid_load_load_phase_b_single_phase_pll1_gain8__out;
double _grid_load_load_phase_b_single_phase_pll1_gain10__out;
double _grid_load_load_phase_b_single_phase_pll1_gain11__out;
double _grid_load_load_phase_b_grid_synchronization_peak_calc_limit5__out;
double _grid_load_load_phase_b_single_phase_pll1_gain3__out;
double _grid_load_load_phase_b_single_phase_pll1_math_f1__out;
double _grid_load_load_phase_b_single_phase_pll1_math_f2__out;
double _grid_load_load_phase_b_grid_synchronization_gain3__out[2];
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_deg_gain__out;
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_phs_gain__out[2];
double _grid_load_load_phase_b_grid_synchronization_limit9__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_deg_gain__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_phs_gain__out[2];
double _grid_load_load_phase_b_single_phase_pll1_gain2__out;
double _grid_load_load_phase_c_relational_operator1__out;
double _grid_load_load_phase_c_c_function4__Pref;
double _grid_load_load_phase_c_c_function4__Pref_late;

double _grid_load_load_phase_c_c_function4__out;
double _grid_load_load_phase_c_abs3__out;
double _grid_load_load_phase_c_c_function5__Qref;
double _grid_load_load_phase_c_c_function5__Qref_late;

double _grid_load_load_phase_c_c_function5__out;
float _grid_load_load_mcb_status__tmp;
double _grid_load_load_phase_c_grid_synchronization_limit3__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_deg_gain__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_phs_gain__out[2];
double _grid_load_load_phase_c_grid_synchronization_peak_calc_product6__out;
double _grid_load_load_phase_c_single_phase_pll1_gain5__out;
double _grid_load_load_phase_c_single_phase_pll1_sum12__out;
double _grid_load_load_phase_c_single_phase_pll1_gain7__out;
double _grid_load_load_phase_c_single_phase_pll1_gain8__out;
double _grid_load_load_phase_c_single_phase_pll1_gain10__out;
double _grid_load_load_phase_c_single_phase_pll1_gain11__out;
double _grid_load_load_phase_c_grid_synchronization_peak_calc_limit5__out;
double _grid_load_load_phase_c_single_phase_pll1_gain3__out;
double _grid_load_load_phase_c_single_phase_pll1_math_f1__out;
double _grid_load_load_phase_c_single_phase_pll1_math_f2__out;
double _grid_load_load_phase_c_grid_synchronization_gain3__out[2];
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_deg_gain__out;
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_phs_gain__out[2];
double _grid_load_load_phase_c_grid_synchronization_limit9__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_deg_gain__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_phs_gain__out[2];
double _grid_load_load_phase_c_single_phase_pll1_gain2__out;
double _grid_load_load_signal_switch1__out[2];
double _grid_load_load_signal_switch2__out[2];
double _grid_load_load_signal_switch3__out[2];
double _grid_load_load_phase_a_rate_of_change_ramping1_gain1__out;
double _grid_load_load_phase_a_rate_of_change1_ramping1_gain1__out;
double _grid_load_load_phase_b_rate_of_change_ramping1_gain1__out;
double _grid_load_load_phase_b_rate_of_change1_ramping1_gain1__out;
double _grid_load_load_phase_c_rate_of_change_ramping1_gain1__out;
double _grid_load_load_phase_c_rate_of_change1_ramping1_gain1__out;
double _meas_clarke__IN_I0_ABC[3];
double _meas_clarke__IN_ILF_ABC[3];
double _meas_clarke__IN_VC_ABC[3];

double _meas_clarke__OUT_I0_AB0[3];
double _meas_clarke__OUT_ILF_AB0[3];
double _meas_clarke__OUT_VC_AB0[3];
double _modulation_comparator__IN_LOWER_CARRIER;
double _modulation_comparator__IN_UPPER_CARRIER;
double _modulation_comparator__IN_VA;
double _modulation_comparator__IN_VB;
double _modulation_comparator__IN_VC;

double _modulation_comparator__OUT_G_S1A;
double _modulation_comparator__OUT_G_S1B;
double _modulation_comparator__OUT_G_S1C;
double _modulation_comparator__OUT_G_S2A;
double _modulation_comparator__OUT_G_S2B;
double _modulation_comparator__OUT_G_S2C;
double _modulation_comparator__OUT_G_S3A;
double _modulation_comparator__OUT_G_S3B;
double _modulation_comparator__OUT_G_S3C;
double _modulation_comparator__OUT_G_S4A;
double _modulation_comparator__OUT_G_S4B;
double _modulation_comparator__OUT_G_S4C;
double _vsc1_fmeter_meassm_mode_and_dfract__Freq;

double _vsc1_fmeter_meassm_mode_and_dfract__dFract;
X_Int32 _vsc1_fmeter_meassm_mode_and_dfract__mode;
X_Int32 _vsc1_fmeter_meassm_mode_and_dfract__submode;
double _vsc1_fmeter_pll_pid_kd__out;
double _vsc1_fmeter_pll_pid_ki__out;
double _vsc1_fmeter_pll_pid_kp__out;
double _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _1byvdc2__out;
double _1byvdc3__out;
double _1byvdc4__out;
double _grid_load_load_phase_a_logical_operator26__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_gain1__out[2];
double _grid_load_load_phase_a_single_phase_pll1_gain9__out;
double _grid_load_load_phase_a_grid_synchronization_peak_calc_product7__out;
double _grid_load_load_phase_a_single_phase_pll1_sum7__out;
double _grid_load_load_phase_a_single_phase_pll1_sum6__out;
double _grid_load_load_phase_a_grid_synchronization_limit7__out[2];
double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_gain1__out[2];
double _grid_load_load_phase_a_limit10__out;
double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_gain1__out[2];
double _grid_load_load_phase_a_power_measurement_lref_calc__I[2];
double _grid_load_load_phase_a_power_measurement_lref_calc__V[2];
double _grid_load_load_phase_a_power_measurement_lref_calc__tetaI[2];
double _grid_load_load_phase_a_power_measurement_lref_calc__tetaV[2];

double _grid_load_load_phase_a_power_measurement_lref_calc__P;
double _grid_load_load_phase_a_power_measurement_lref_calc__Q;
double _grid_load_load_phase_a_single_phase_pll1_sum2__out;
double _grid_load_load_phase_b_logical_operator26__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_gain1__out[2];
double _grid_load_load_phase_b_single_phase_pll1_gain9__out;
double _grid_load_load_phase_b_grid_synchronization_peak_calc_product7__out;
double _grid_load_load_phase_b_single_phase_pll1_sum7__out;
double _grid_load_load_phase_b_single_phase_pll1_sum6__out;
double _grid_load_load_phase_b_grid_synchronization_limit7__out[2];
double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_gain1__out[2];
double _grid_load_load_phase_b_limit10__out;
double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_gain1__out[2];
double _grid_load_load_phase_b_power_measurement_lref_calc__I[2];
double _grid_load_load_phase_b_power_measurement_lref_calc__V[2];
double _grid_load_load_phase_b_power_measurement_lref_calc__tetaI[2];
double _grid_load_load_phase_b_power_measurement_lref_calc__tetaV[2];

double _grid_load_load_phase_b_power_measurement_lref_calc__P;
double _grid_load_load_phase_b_power_measurement_lref_calc__Q;
double _grid_load_load_phase_b_single_phase_pll1_sum2__out;
double _grid_load_load_phase_c_logical_operator26__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_gain1__out[2];
double _grid_load_load_phase_c_single_phase_pll1_gain9__out;
double _grid_load_load_phase_c_grid_synchronization_peak_calc_product7__out;
double _grid_load_load_phase_c_single_phase_pll1_sum7__out;
double _grid_load_load_phase_c_single_phase_pll1_sum6__out;
double _grid_load_load_phase_c_grid_synchronization_limit7__out[2];
double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_gain1__out[2];
double _grid_load_load_phase_c_limit10__out;
double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_gain1__out[2];
double _grid_load_load_phase_c_power_measurement_lref_calc__I[2];
double _grid_load_load_phase_c_power_measurement_lref_calc__V[2];
double _grid_load_load_phase_c_power_measurement_lref_calc__tetaI[2];
double _grid_load_load_phase_c_power_measurement_lref_calc__tetaV[2];

double _grid_load_load_phase_c_power_measurement_lref_calc__P;
double _grid_load_load_phase_c_power_measurement_lref_calc__Q;
double _grid_load_load_phase_c_single_phase_pll1_sum2__out;
double _grid_load_load_bus_split4__out;
double _grid_load_load_bus_split4__out1;
double _grid_load_load_bus_split2__out;
double _grid_load_load_bus_split2__out1;
double _grid_load_load_bus_split3__out;
double _grid_load_load_bus_split3__out1;
double _bus_selector2__out; ;

double _bus_selector3__out; ;

double _bus_selector5__out; ;

double _bus_selector6__out; ;
double _modulation_bus_join1__out[12];
double _vsc1_fmeter_i_rms_calc_rms__IN1;
double _vsc1_fmeter_i_rms_calc_rms__IN2;
double _vsc1_fmeter_i_rms_calc_rms__IN3;
double _vsc1_fmeter_i_rms_calc_rms__dFract;
X_Int32 _vsc1_fmeter_i_rms_calc_rms__mode;

double _vsc1_fmeter_i_rms_calc_rms__RMS1;
double _vsc1_fmeter_i_rms_calc_rms__RMS2;
double _vsc1_fmeter_i_rms_calc_rms__RMS3;
double _vsc1_fmeter_vll_rms_calc_rms__IN1;
double _vsc1_fmeter_vll_rms_calc_rms__IN2;
double _vsc1_fmeter_vll_rms_calc_rms__IN3;
double _vsc1_fmeter_vll_rms_calc_rms__dFract;
X_Int32 _vsc1_fmeter_vll_rms_calc_rms__mode;

double _vsc1_fmeter_vll_rms_calc_rms__RMS1;
double _vsc1_fmeter_vll_rms_calc_rms__RMS2;
double _vsc1_fmeter_vll_rms_calc_rms__RMS3;
double _vsc1_fmeter_vln_rms_calc_rms__IN1;
double _vsc1_fmeter_vln_rms_calc_rms__IN2;
double _vsc1_fmeter_vln_rms_calc_rms__IN3;
double _vsc1_fmeter_vln_rms_calc_rms__dFract;
X_Int32 _vsc1_fmeter_vln_rms_calc_rms__mode;

double _vsc1_fmeter_vln_rms_calc_rms__RMS1;
double _vsc1_fmeter_vln_rms_calc_rms__RMS2;
double _vsc1_fmeter_vln_rms_calc_rms__RMS3;
double _vsc1_fmeter_pll_pid_sum8__out;
double _bus_join1__out[3];
double _grid_load_load_phase_a_grid_synchronization_peak_calc_sum2__out;
double _grid_load_load_phase_a_single_phase_pll1_gain4__out;
double _grid_load_load_phase_a_single_phase_pll1_math1__out;
double _grid_load_load_phase_a_active_power_losses__Cs;
double _grid_load_load_phase_a_active_power_losses__L;
double _grid_load_load_phase_a_active_power_losses__Pref;
double _grid_load_load_phase_a_active_power_losses__Qref;
double _grid_load_load_phase_a_active_power_losses__R;
double _grid_load_load_phase_a_active_power_losses__Vrms[2];
X_Int32 _grid_load_load_phase_a_active_power_losses__harmonics[2];
double _grid_load_load_phase_a_active_power_losses__w;

double _grid_load_load_phase_a_active_power_losses__Ploss;
double _grid_load_load_phase_a_reactive_power_losses__Cs;
double _grid_load_load_phase_a_reactive_power_losses__Qref;
double _grid_load_load_phase_a_reactive_power_losses__R;
double _grid_load_load_phase_a_reactive_power_losses__V[2];
X_Int32 _grid_load_load_phase_a_reactive_power_losses__harmonics[2];
double _grid_load_load_phase_a_reactive_power_losses__w;

double _grid_load_load_phase_a_reactive_power_losses__Qloss;
double _grid_load_load_phase_a_f_to_w8__out;
double _grid_load_load_phase_a_f_to_w9__out;
double _grid_load_load_phase_a_single_phase_pll1_product1__out;
double _grid_load_load_phase_b_grid_synchronization_peak_calc_sum2__out;
double _grid_load_load_phase_b_single_phase_pll1_gain4__out;
double _grid_load_load_phase_b_single_phase_pll1_math1__out;
double _grid_load_load_phase_b_active_power_losses__Cs;
double _grid_load_load_phase_b_active_power_losses__L;
double _grid_load_load_phase_b_active_power_losses__Pref;
double _grid_load_load_phase_b_active_power_losses__Qref;
double _grid_load_load_phase_b_active_power_losses__R;
double _grid_load_load_phase_b_active_power_losses__Vrms[2];
X_Int32 _grid_load_load_phase_b_active_power_losses__harmonics[2];
double _grid_load_load_phase_b_active_power_losses__w;

double _grid_load_load_phase_b_active_power_losses__Ploss;
double _grid_load_load_phase_b_reactive_power_losses__Cs;
double _grid_load_load_phase_b_reactive_power_losses__Qref;
double _grid_load_load_phase_b_reactive_power_losses__R;
double _grid_load_load_phase_b_reactive_power_losses__V[2];
X_Int32 _grid_load_load_phase_b_reactive_power_losses__harmonics[2];
double _grid_load_load_phase_b_reactive_power_losses__w;

double _grid_load_load_phase_b_reactive_power_losses__Qloss;
double _grid_load_load_phase_b_f_to_w8__out;
double _grid_load_load_phase_b_f_to_w9__out;
double _grid_load_load_phase_b_single_phase_pll1_product1__out;
double _grid_load_load_phase_c_grid_synchronization_peak_calc_sum2__out;
double _grid_load_load_phase_c_single_phase_pll1_gain4__out;
double _grid_load_load_phase_c_single_phase_pll1_math1__out;
double _grid_load_load_phase_c_active_power_losses__Cs;
double _grid_load_load_phase_c_active_power_losses__L;
double _grid_load_load_phase_c_active_power_losses__Pref;
double _grid_load_load_phase_c_active_power_losses__Qref;
double _grid_load_load_phase_c_active_power_losses__R;
double _grid_load_load_phase_c_active_power_losses__Vrms[2];
X_Int32 _grid_load_load_phase_c_active_power_losses__harmonics[2];
double _grid_load_load_phase_c_active_power_losses__w;

double _grid_load_load_phase_c_active_power_losses__Ploss;
double _grid_load_load_phase_c_reactive_power_losses__Cs;
double _grid_load_load_phase_c_reactive_power_losses__Qref;
double _grid_load_load_phase_c_reactive_power_losses__R;
double _grid_load_load_phase_c_reactive_power_losses__V[2];
X_Int32 _grid_load_load_phase_c_reactive_power_losses__harmonics[2];
double _grid_load_load_phase_c_reactive_power_losses__w;

double _grid_load_load_phase_c_reactive_power_losses__Qloss;
double _grid_load_load_phase_c_f_to_w8__out;
double _grid_load_load_phase_c_f_to_w9__out;
double _grid_load_load_phase_c_single_phase_pll1_product1__out;
double _grid_load_load_limit2__out;
double _grid_load_load_limit3__out;
double _grid_load_load_limit4__out;
double _grid_load_load_limit5__out;
double _grid_load_load_limit6__out;
double _grid_load_load_limit7__out;
double _three_phase_npc_inverter1_bus_split1__out[4];
double _three_phase_npc_inverter1_bus_split1__out1[4];
double _three_phase_npc_inverter1_bus_split1__out2[4];
double _vsc1_fmeter_output_bus__out[30];
double _vsc1_fmeter_pll_pid_gain1__out;
double _ref_clarke__IN_V0_ABC[3];

double _ref_clarke__OUT_V0_AB0[3];
double _grid_load_load_phase_a_grid_synchronization_peak_calc_mathematical_function1__out;
double _grid_load_load_phase_a_single_phase_pll1_limit1__out;
double _grid_load_load_phase_a_sum6__out;
double _grid_load_load_phase_a_sum5__out;
double _grid_load_load_phase_a_bus_join1__out[4];
double _grid_load_load_phase_b_grid_synchronization_peak_calc_mathematical_function1__out;
double _grid_load_load_phase_b_single_phase_pll1_limit1__out;
double _grid_load_load_phase_b_sum6__out;
double _grid_load_load_phase_b_sum5__out;
double _grid_load_load_phase_b_bus_join1__out[4];
double _grid_load_load_phase_c_grid_synchronization_peak_calc_mathematical_function1__out;
double _grid_load_load_phase_c_single_phase_pll1_limit1__out;
double _grid_load_load_phase_c_sum6__out;
double _grid_load_load_phase_c_sum5__out;
double _grid_load_load_phase_c_bus_join1__out[4];
double _grid_load_load_phase_a_qmin_fun__in;

double _grid_load_load_phase_a_qmin_fun__out;
double _grid_load_load_phase_b_qmin_fun__in;

double _grid_load_load_phase_b_qmin_fun__out;
double _grid_load_load_phase_c_qmin_fun__in;

double _grid_load_load_phase_c_qmin_fun__out;
double _vsc1_fmeter_pll_pid_sum5__out;

double _bus_selector1__out; ;

double _bus_selector4__out; ;
double _grid_load_load_phase_a_grid_synchronization_product4__out;
double _grid_load_load_phase_a_single_phase_pll1_product8__out;
double _grid_load_load_phase_a_limit6__out;
double _grid_load_load_phase_a_abs2__out;
double _grid_load_load_phase_a_gain1__out;
double _grid_load_load_phase_a_f_to_w5__out;
double _grid_load_load_bus_split6__out;
double _grid_load_load_bus_split6__out1;
double _grid_load_load_bus_split6__out2;
double _grid_load_load_bus_split6__out3;
double _grid_load_load_phase_b_grid_synchronization_product4__out;
double _grid_load_load_phase_b_single_phase_pll1_product8__out;
double _grid_load_load_phase_b_limit6__out;
double _grid_load_load_phase_b_abs2__out;
double _grid_load_load_phase_b_gain1__out;
double _grid_load_load_phase_b_f_to_w5__out;
double _grid_load_load_bus_split5__out;
double _grid_load_load_bus_split5__out1;
double _grid_load_load_bus_split5__out2;
double _grid_load_load_bus_split5__out3;
double _grid_load_load_phase_c_grid_synchronization_product4__out;
double _grid_load_load_phase_c_single_phase_pll1_product8__out;
double _grid_load_load_phase_c_limit6__out;
double _grid_load_load_phase_c_abs2__out;
double _grid_load_load_phase_c_gain1__out;
double _grid_load_load_phase_c_f_to_w5__out;
double _grid_load_load_bus_split7__out;
double _grid_load_load_bus_split7__out1;
double _grid_load_load_bus_split7__out2;
double _grid_load_load_bus_split7__out3;
double _grid_load_load_phase_a_abs5__out;
double _grid_load_load_phase_b_abs5__out;
double _grid_load_load_phase_c_abs5__out;
double _vsc1_fmeter_pll_pid_limit1__out;
double _inner_loop_alpha__IN_ILF;
double _inner_loop_alpha__IN_KR;
double _inner_loop_alpha__IN_V0;
double _inner_loop_alpha__IN_VC;

double _inner_loop_alpha__OUT_ILF_REF;
double _inner_loop_alpha__OUT_U_ALPHA;
double _inner_loop_alpha1__IN_ILF;
double _inner_loop_alpha1__IN_KR;
double _inner_loop_alpha1__IN_V0;
double _inner_loop_alpha1__IN_VC;

double _inner_loop_alpha1__OUT_ILF_REF;
double _inner_loop_alpha1__OUT_U_ALPHA;
double _grid_load_load_phase_a_grid_synchronization_abs1__out;
double _grid_load_load_phase_a_single_phase_pll1_abs1__out;
double _grid_load_load_phase_a_limit9__out;
double _grid_load_load_phase_a_limit11__out;
double _grid_load_load_phase_a_relational_operator4__out;
double _grid_load_load_phase_b_grid_synchronization_abs1__out;
double _grid_load_load_phase_b_single_phase_pll1_abs1__out;
double _grid_load_load_phase_b_limit9__out;
double _grid_load_load_phase_b_limit11__out;
double _grid_load_load_phase_b_relational_operator4__out;
double _grid_load_load_phase_c_grid_synchronization_abs1__out;
double _grid_load_load_phase_c_single_phase_pll1_abs1__out;
double _grid_load_load_phase_c_limit9__out;
double _grid_load_load_phase_c_limit11__out;
double _grid_load_load_phase_c_relational_operator4__out;
double _grid_load_load_sum1__out;
double _grid_load_load_sum2__out;
double _grid_load_load_sum3__out;
double _grid_load_load_sum4__out;
double _grid_load_load_phase_a_relational_operator2__out;
double _grid_load_load_phase_b_relational_operator2__out;
double _grid_load_load_phase_c_relational_operator2__out;
double _vsc1_fmeter_pll_pid_sum6__out;
double _vsc1_fmeter_pll_rate_limiter1__out;

double _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[1];
double _vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[1];

double _vsc1_fmeter_pll_integrator__in;

double _vsc1_fmeter_pll_integrator__out;
double _bus_join3__out[3];
double _bus_join9__out[2];
double _grid_load_load_phase_a_grid_synchronization_comparator1__out;
double _grid_load_load_phase_a_single_phase_pll1_kd_lut__value;
double _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down = 0.0;
double _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_a_single_phase_pll1_ki_lut__value;
double _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down = 0.0;
double _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_a_single_phase_pll1_kp_lut__value;
double _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down = 0.0;
double _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_a_lref_calc__Qref;
double _grid_load_load_phase_a_lref_calc__V[2];
X_Int32 _grid_load_load_phase_a_lref_calc__harmonics[2];
double _grid_load_load_phase_a_lref_calc__w;

double _grid_load_load_phase_a_lref_calc__L;
double _grid_load_load_phase_a_c_function2__P;
double _grid_load_load_phase_a_c_function2__Q;
double _grid_load_load_phase_a_c_function2__V[2];
double _grid_load_load_phase_a_c_function2__Vrms;
double _grid_load_load_phase_a_c_function2__harmonics[2];
double _grid_load_load_phase_a_c_function2__mod;
double _grid_load_load_phase_a_c_function2__w;

double _grid_load_load_phase_a_c_function2__R;
double _grid_load_load_phase_a_c_function2__c;
double _grid_load_load_phase_a_logical_operator2__out;
double _grid_load_load_phase_b_grid_synchronization_comparator1__out;
double _grid_load_load_phase_b_single_phase_pll1_kd_lut__value;
double _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down = 0.0;
double _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_b_single_phase_pll1_ki_lut__value;
double _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down = 0.0;
double _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_b_single_phase_pll1_kp_lut__value;
double _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down = 0.0;
double _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_b_lref_calc__Qref;
double _grid_load_load_phase_b_lref_calc__V[2];
X_Int32 _grid_load_load_phase_b_lref_calc__harmonics[2];
double _grid_load_load_phase_b_lref_calc__w;

double _grid_load_load_phase_b_lref_calc__L;
double _grid_load_load_phase_b_c_function2__P;
double _grid_load_load_phase_b_c_function2__Q;
double _grid_load_load_phase_b_c_function2__V[2];
double _grid_load_load_phase_b_c_function2__Vrms;
double _grid_load_load_phase_b_c_function2__harmonics[2];
double _grid_load_load_phase_b_c_function2__mod;
double _grid_load_load_phase_b_c_function2__w;

double _grid_load_load_phase_b_c_function2__R;
double _grid_load_load_phase_b_c_function2__c;
double _grid_load_load_phase_b_logical_operator2__out;
double _grid_load_load_phase_c_grid_synchronization_comparator1__out;
double _grid_load_load_phase_c_single_phase_pll1_kd_lut__value;
double _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down = 0.0;
double _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_c_single_phase_pll1_ki_lut__value;
double _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down = 0.0;
double _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_c_single_phase_pll1_kp_lut__value;
double _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_in = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_tmp = 0.0;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down = 0.0;
double _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_int_coeff = 0.0;

double _grid_load_load_phase_c_lref_calc__Qref;
double _grid_load_load_phase_c_lref_calc__V[2];
X_Int32 _grid_load_load_phase_c_lref_calc__harmonics[2];
double _grid_load_load_phase_c_lref_calc__w;

double _grid_load_load_phase_c_lref_calc__L;
double _grid_load_load_phase_c_c_function2__P;
double _grid_load_load_phase_c_c_function2__Q;
double _grid_load_load_phase_c_c_function2__V[2];
double _grid_load_load_phase_c_c_function2__Vrms;
double _grid_load_load_phase_c_c_function2__harmonics[2];
double _grid_load_load_phase_c_c_function2__mod;
double _grid_load_load_phase_c_c_function2__w;

double _grid_load_load_phase_c_c_function2__R;
double _grid_load_load_phase_c_c_function2__c;
double _grid_load_load_phase_c_logical_operator2__out;
double _vsc1_fmeter_pll_pid_kb__out;
double _geo_pwm__IN_ILF[3];
double _geo_pwm__IN_KP;
double _geo_pwm__IN_M[3];
double _geo_pwm__IN_VDC_2;

double _geo_pwm__OUT_V_AB0[3];
double _grid_load_load_phase_a_grid_synchronization_logical_operator1__out;
double _grid_load_load_phase_a_single_phase_pll1_product6__out;
double _grid_load_load_phase_a_single_phase_pll1_product5__out;
double _grid_load_load_phase_a_single_phase_pll1_product7__out;
double _grid_load_load_phase_b_grid_synchronization_logical_operator1__out;
double _grid_load_load_phase_b_single_phase_pll1_product6__out;
double _grid_load_load_phase_b_single_phase_pll1_product5__out;
double _grid_load_load_phase_b_single_phase_pll1_product7__out;
double _grid_load_load_phase_c_grid_synchronization_logical_operator1__out;
double _grid_load_load_phase_c_single_phase_pll1_product6__out;
double _grid_load_load_phase_c_single_phase_pll1_product5__out;
double _grid_load_load_phase_c_single_phase_pll1_product7__out;
double _vsc1_fmeter_pll_pid_sum7__out;
double _inv_clarke__IN_V_AB0[3];

double _inv_clarke__OUT_V[3];
double _grid_load_load_phase_a_counter__in;

double _grid_load_load_phase_a_counter__out;
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__out;
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.7475992484642695};
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_sum;
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_sum;
double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__delay_line_in;
double _grid_load_load_phase_b_counter__in;

double _grid_load_load_phase_b_counter__out;
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__out;
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.7475992484642695};
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_sum;
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_sum;
double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__delay_line_in;
double _grid_load_load_phase_c_counter__in;

double _grid_load_load_phase_c_counter__out;
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__out;
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.7475992484642695};
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_sum;
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_sum;
double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__delay_line_in;
double _modulation_bus_split1__out;
double _modulation_bus_split1__out1;
double _modulation_bus_split1__out2;
double _grid_load_load_phase_a_logical_operator13__out;
double _grid_load_load_phase_a_logical_operator14__out;
double _grid_load_load_phase_a_logical_operator28__out;
double _grid_load_load_phase_a_logical_operator5__out;
double _grid_load_load_phase_a_single_phase_pll1_sum8__out;
double _grid_load_load_phase_b_logical_operator13__out;
double _grid_load_load_phase_b_logical_operator14__out;
double _grid_load_load_phase_b_logical_operator28__out;
double _grid_load_load_phase_b_logical_operator5__out;
double _grid_load_load_phase_b_single_phase_pll1_sum8__out;
double _grid_load_load_phase_c_logical_operator13__out;
double _grid_load_load_phase_c_logical_operator14__out;
double _grid_load_load_phase_c_logical_operator28__out;
double _grid_load_load_phase_c_logical_operator5__out;
double _grid_load_load_phase_c_single_phase_pll1_sum8__out;
double _grid_load_load_phase_a_logical_operator10__out;
double _grid_load_load_phase_a_logical_operator27__out;
double _grid_load_load_phase_a_logical_operator17__out;
double _grid_load_load_phase_a_logical_operator6__out;
double _grid_load_load_phase_a_single_phase_pll1_limit2__out;
double _grid_load_load_phase_b_logical_operator10__out;
double _grid_load_load_phase_b_logical_operator27__out;
double _grid_load_load_phase_b_logical_operator17__out;
double _grid_load_load_phase_b_logical_operator6__out;
double _grid_load_load_phase_b_single_phase_pll1_limit2__out;
double _grid_load_load_phase_c_logical_operator10__out;
double _grid_load_load_phase_c_logical_operator27__out;
double _grid_load_load_phase_c_logical_operator17__out;
double _grid_load_load_phase_c_logical_operator6__out;
double _grid_load_load_phase_c_single_phase_pll1_limit2__out;
double _grid_load_load_phase_a_signal_switch3__out;
double _grid_load_load_phase_a_logical_operator19__out;
double _grid_load_load_phase_a_logical_operator20__out;
double _grid_load_load_phase_a_logical_operator29__out;
double _grid_load_load_phase_a_signal_switch1__out;
double _grid_load_load_phase_a_signal_switch2__out;
double _grid_load_load_phase_a_logical_operator7__out;
double _grid_load_load_phase_a_single_phase_pll1_sum5__out;
double _grid_load_load_phase_b_signal_switch3__out;
double _grid_load_load_phase_b_logical_operator19__out;
double _grid_load_load_phase_b_logical_operator20__out;
double _grid_load_load_phase_b_logical_operator29__out;
double _grid_load_load_phase_b_signal_switch1__out;
double _grid_load_load_phase_b_signal_switch2__out;
double _grid_load_load_phase_b_logical_operator7__out;
double _grid_load_load_phase_b_single_phase_pll1_sum5__out;
double _grid_load_load_phase_c_signal_switch3__out;
double _grid_load_load_phase_c_logical_operator19__out;
double _grid_load_load_phase_c_logical_operator20__out;
double _grid_load_load_phase_c_logical_operator29__out;
double _grid_load_load_phase_c_signal_switch1__out;
double _grid_load_load_phase_c_signal_switch2__out;
double _grid_load_load_phase_c_logical_operator7__out;
double _grid_load_load_phase_c_single_phase_pll1_sum5__out;
double _grid_load_load_phase_a_l_ref_reciprocal__out;
double _grid_load_load_phase_a_r_inc__C_in;
double _grid_load_load_phase_a_r_inc__Pref;
double _grid_load_load_phase_a_r_inc__R_in;
double _grid_load_load_phase_a_r_inc__V[2];
X_Int32 _grid_load_load_phase_a_r_inc__enable;
double _grid_load_load_phase_a_r_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_a_r_inc__pause;
double _grid_load_load_phase_a_r_inc__w;

double _grid_load_load_phase_a_r_inc__R;
double _grid_load_load_phase_a_r_inc__inc_applied;
double _grid_load_load_phase_a_c_inc__C_in;
double _grid_load_load_phase_a_c_inc__Qref;
double _grid_load_load_phase_a_c_inc__R_in;
double _grid_load_load_phase_a_c_inc__V[2];
X_Int32 _grid_load_load_phase_a_c_inc__enable;
double _grid_load_load_phase_a_c_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_a_c_inc__pause;
double _grid_load_load_phase_a_c_inc__w;

double _grid_load_load_phase_a_c_inc__C;
double _grid_load_load_phase_a_c_inc__inc_applied;
double _grid_load_load_phase_a_f_to_w1__out;
double _grid_load_load_phase_a_f_to_w2__out;
double _grid_load_load_phase_a_single_phase_pll1_sum10__out;
double _grid_load_load_phase_b_l_ref_reciprocal__out;
double _grid_load_load_phase_b_r_inc__C_in;
double _grid_load_load_phase_b_r_inc__Pref;
double _grid_load_load_phase_b_r_inc__R_in;
double _grid_load_load_phase_b_r_inc__V[2];
X_Int32 _grid_load_load_phase_b_r_inc__enable;
double _grid_load_load_phase_b_r_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_b_r_inc__pause;
double _grid_load_load_phase_b_r_inc__w;

double _grid_load_load_phase_b_r_inc__R;
double _grid_load_load_phase_b_r_inc__inc_applied;
double _grid_load_load_phase_b_c_inc__C_in;
double _grid_load_load_phase_b_c_inc__Qref;
double _grid_load_load_phase_b_c_inc__R_in;
double _grid_load_load_phase_b_c_inc__V[2];
X_Int32 _grid_load_load_phase_b_c_inc__enable;
double _grid_load_load_phase_b_c_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_b_c_inc__pause;
double _grid_load_load_phase_b_c_inc__w;

double _grid_load_load_phase_b_c_inc__C;
double _grid_load_load_phase_b_c_inc__inc_applied;
double _grid_load_load_phase_b_f_to_w1__out;
double _grid_load_load_phase_b_f_to_w2__out;
double _grid_load_load_phase_b_single_phase_pll1_sum10__out;
double _grid_load_load_phase_c_l_ref_reciprocal__out;
double _grid_load_load_phase_c_r_inc__C_in;
double _grid_load_load_phase_c_r_inc__Pref;
double _grid_load_load_phase_c_r_inc__R_in;
double _grid_load_load_phase_c_r_inc__V[2];
X_Int32 _grid_load_load_phase_c_r_inc__enable;
double _grid_load_load_phase_c_r_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_c_r_inc__pause;
double _grid_load_load_phase_c_r_inc__w;

double _grid_load_load_phase_c_r_inc__R;
double _grid_load_load_phase_c_r_inc__inc_applied;
double _grid_load_load_phase_c_c_inc__C_in;
double _grid_load_load_phase_c_c_inc__Qref;
double _grid_load_load_phase_c_c_inc__R_in;
double _grid_load_load_phase_c_c_inc__V[2];
X_Int32 _grid_load_load_phase_c_c_inc__enable;
double _grid_load_load_phase_c_c_inc__harmonics[2];
X_UnInt32 _grid_load_load_phase_c_c_inc__pause;
double _grid_load_load_phase_c_c_inc__w;

double _grid_load_load_phase_c_c_inc__C;
double _grid_load_load_phase_c_c_inc__inc_applied;
double _grid_load_load_phase_c_f_to_w1__out;
double _grid_load_load_phase_c_f_to_w2__out;
double _grid_load_load_phase_c_single_phase_pll1_sum10__out;
double _grid_load_load_phase_a_limit1__out;
double _grid_load_load_phase_a_limit8__out;
double _grid_load_load_phase_a_single_phase_pll1_gain6__out;
double _grid_load_load_phase_b_limit1__out;
double _grid_load_load_phase_b_limit8__out;
double _grid_load_load_phase_b_single_phase_pll1_gain6__out;
double _grid_load_load_phase_c_limit1__out;
double _grid_load_load_phase_c_limit8__out;
double _grid_load_load_phase_c_single_phase_pll1_gain6__out;
double _grid_load_load_phase_a_signal_switch10__out;
double _grid_load_load_phase_a_signal_switch11__out;
double _grid_load_load_phase_b_signal_switch10__out;
double _grid_load_load_phase_b_signal_switch11__out;
double _grid_load_load_phase_c_signal_switch10__out;
double _grid_load_load_phase_c_signal_switch11__out;
double _grid_load_load_phase_a_c_ref_reciprocal__out;
double _grid_load_load_phase_b_c_ref_reciprocal__out;
double _grid_load_load_phase_c_c_ref_reciprocal__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _grid_load_load_phase_a_grid_synchronization_delay1__state[1];
X_UnInt32 _grid_load_load_phase_a_grid_synchronization_delay1__cbi;

double _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__filtered_value;
double _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_in;
double _grid_load_load_phase_a_low_pass_filter2__filtered_value;
double _grid_load_load_phase_a_low_pass_filter2__previous_in;
double _grid_load_load_phase_a_low_pass_filter8__filtered_value;
double _grid_load_load_phase_a_low_pass_filter8__previous_in;
double _grid_load_load_phase_a_low_pass_filter9__filtered_value;
double _grid_load_load_phase_a_low_pass_filter9__previous_in;
double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old;

double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a;

double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__b;

double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i;

double _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref;


double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old;

double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a;

double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__b;

double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i;

double _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref;


double _grid_load_load_phase_a_sr_flip_flop1__state;
double _grid_load_load_phase_a_single_phase_pll1_i__integrator_state;
X_Int32 _grid_load_load_phase_a_single_phase_pll1_i__av_active;
double _grid_load_load_phase_a_single_phase_pll1_i__filter_state;
double _grid_load_load_phase_a_single_phase_pll1_integrator1__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator10__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator2__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator3__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator4__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator5__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator6__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator7__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator8__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator9__state;
double _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc;

double _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__reset_value;


double _grid_load_load_phase_a_transport_delay1__state[1];
X_UnInt32 _grid_load_load_phase_a_transport_delay1__cbi;
double _grid_load_load_phase_a_transport_delay2__state[1];
X_UnInt32 _grid_load_load_phase_a_transport_delay2__cbi;
double _grid_load_load_phase_a_unit_delay1__state;
double _grid_load_load_phase_a_unit_delay12__state;
double _grid_load_load_phase_a_unit_delay13__state;
double _grid_load_load_phase_a_unit_delay2__state;
double _grid_load_load_phase_a_unit_delay3__state;
double _grid_load_load_phase_a_unit_delay4__state;
double _grid_load_load_phase_a_unit_delay5__state;
double _grid_load_load_phase_a_unit_delay6__state;
double _grid_load_load_phase_a_unit_delay7__state;
double _grid_load_load_phase_a_unit_delay8__state;
X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__counter;

X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__fault;

X_UnInt32 _grid_load_load_phase_a_zig_zag_handler__state;


double _grid_load_load_phase_b_grid_synchronization_delay1__state[1];
X_UnInt32 _grid_load_load_phase_b_grid_synchronization_delay1__cbi;

double _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__filtered_value;
double _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_in;
double _grid_load_load_phase_b_low_pass_filter2__filtered_value;
double _grid_load_load_phase_b_low_pass_filter2__previous_in;
double _grid_load_load_phase_b_low_pass_filter8__filtered_value;
double _grid_load_load_phase_b_low_pass_filter8__previous_in;
double _grid_load_load_phase_b_low_pass_filter9__filtered_value;
double _grid_load_load_phase_b_low_pass_filter9__previous_in;
double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old;

double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a;

double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__b;

double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i;

double _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref;


double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old;

double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a;

double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__b;

double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i;

double _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref;


double _grid_load_load_phase_b_sr_flip_flop1__state;
double _grid_load_load_phase_b_single_phase_pll1_i__integrator_state;
X_Int32 _grid_load_load_phase_b_single_phase_pll1_i__av_active;
double _grid_load_load_phase_b_single_phase_pll1_i__filter_state;
double _grid_load_load_phase_b_single_phase_pll1_integrator1__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator10__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator2__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator3__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator4__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator5__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator6__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator7__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator8__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator9__state;
double _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc;

double _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__reset_value;


double _grid_load_load_phase_b_transport_delay1__state[1];
X_UnInt32 _grid_load_load_phase_b_transport_delay1__cbi;
double _grid_load_load_phase_b_transport_delay2__state[1];
X_UnInt32 _grid_load_load_phase_b_transport_delay2__cbi;
double _grid_load_load_phase_b_unit_delay1__state;
double _grid_load_load_phase_b_unit_delay12__state;
double _grid_load_load_phase_b_unit_delay13__state;
double _grid_load_load_phase_b_unit_delay2__state;
double _grid_load_load_phase_b_unit_delay3__state;
double _grid_load_load_phase_b_unit_delay4__state;
double _grid_load_load_phase_b_unit_delay5__state;
double _grid_load_load_phase_b_unit_delay6__state;
double _grid_load_load_phase_b_unit_delay7__state;
double _grid_load_load_phase_b_unit_delay8__state;
X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__counter;

X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__fault;

X_UnInt32 _grid_load_load_phase_b_zig_zag_handler__state;


double _grid_load_load_phase_c_grid_synchronization_delay1__state[1];
X_UnInt32 _grid_load_load_phase_c_grid_synchronization_delay1__cbi;

double _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__filtered_value;
double _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_in;
double _grid_load_load_phase_c_low_pass_filter2__filtered_value;
double _grid_load_load_phase_c_low_pass_filter2__previous_in;
double _grid_load_load_phase_c_low_pass_filter8__filtered_value;
double _grid_load_load_phase_c_low_pass_filter8__previous_in;
double _grid_load_load_phase_c_low_pass_filter9__filtered_value;
double _grid_load_load_phase_c_low_pass_filter9__previous_in;
double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old;

double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a;

double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__b;

double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i;

double _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref;


double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old;

double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a;

double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__b;

double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i;

double _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref;


double _grid_load_load_phase_c_sr_flip_flop1__state;
double _grid_load_load_phase_c_single_phase_pll1_i__integrator_state;
X_Int32 _grid_load_load_phase_c_single_phase_pll1_i__av_active;
double _grid_load_load_phase_c_single_phase_pll1_i__filter_state;
double _grid_load_load_phase_c_single_phase_pll1_integrator1__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator10__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator2__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator3__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator4__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator5__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator6__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator7__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator8__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator9__state;
double _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc;

double _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__reset_value;


double _grid_load_load_phase_c_transport_delay1__state[1];
X_UnInt32 _grid_load_load_phase_c_transport_delay1__cbi;
double _grid_load_load_phase_c_transport_delay2__state[1];
X_UnInt32 _grid_load_load_phase_c_transport_delay2__cbi;
double _grid_load_load_phase_c_unit_delay1__state;
double _grid_load_load_phase_c_unit_delay12__state;
double _grid_load_load_phase_c_unit_delay13__state;
double _grid_load_load_phase_c_unit_delay2__state;
double _grid_load_load_phase_c_unit_delay3__state;
double _grid_load_load_phase_c_unit_delay4__state;
double _grid_load_load_phase_c_unit_delay5__state;
double _grid_load_load_phase_c_unit_delay6__state;
double _grid_load_load_phase_c_unit_delay7__state;
double _grid_load_load_phase_c_unit_delay8__state;
X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__counter;

X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__fault;

X_UnInt32 _grid_load_load_phase_c_zig_zag_handler__state;


double _modulation_lower_carrier__current_phase;
double _modulation_rate_transition1_output__state;
double _modulation_rate_transition2_output__state;
double _modulation_rate_transition3_output__state;
double _modulation_upper_carrier__current_phase;
double _vsc1_fmeter_pll_lpf_lpf__states[2];
double _vsc1_fmeter_pll_pid_integrator1__state;
double _vsc1_fmeter_pll_pid_integrator2__state;
double _vsc1_fmeter_pll_unit_delay1__state;
double _vsc1_fmeter_pll_abc_to_dq_lpf_d__filtered_value;
double _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_in;
double _vsc1_fmeter_pll_abc_to_dq_lpf_q__filtered_value;
double _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_in;
double _sine_a__current_phase;
double _sine_b__current_phase;
double _sine_c__current_phase;
double _grid_load_load_phase_a_grid_synchronization_steady_state_check__time_cnt;

double _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val;

double _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val;

double _grid_load_load_phase_a_grid_synchronization_steady_state_check__out_state;


X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__reset;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp;

X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__k;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp_state[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_re[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_im[2];

X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__N;



X_Int32 _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__reset;

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp;

X_Int32 _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__k;

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp_state[2];

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state[2];

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im[2];

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re[2];

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_re[2];

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_im[2];

X_Int32 _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i;

double _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__N;


double _grid_load_load_phase_a_grid_synchronization_rms_value1__square_sum;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__sample_cnt;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__db_timer;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_filtered_value;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_correction;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_value;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__correction;
double _grid_load_load_phase_a_grid_synchronization_rms_value1__out_state;
X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__reset;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp;

X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__k;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp_state[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_re[2];

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_im[2];

X_Int32 _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i;

double _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__N;


double _grid_load_load_phase_b_grid_synchronization_steady_state_check__time_cnt;

double _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val;

double _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val;

double _grid_load_load_phase_b_grid_synchronization_steady_state_check__out_state;


X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__reset;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp;

X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__k;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp_state[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_re[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_im[2];

X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__N;



X_Int32 _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__reset;

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp;

X_Int32 _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__k;

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp_state[2];

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state[2];

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im[2];

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re[2];

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_re[2];

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_im[2];

X_Int32 _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i;

double _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__N;


double _grid_load_load_phase_b_grid_synchronization_rms_value1__square_sum;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__sample_cnt;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__db_timer;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_filtered_value;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_correction;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_value;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__correction;
double _grid_load_load_phase_b_grid_synchronization_rms_value1__out_state;
X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__reset;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp;

X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__k;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp_state[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_re[2];

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_im[2];

X_Int32 _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i;

double _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__N;


double _grid_load_load_phase_c_grid_synchronization_steady_state_check__time_cnt;

double _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val;

double _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val;

double _grid_load_load_phase_c_grid_synchronization_steady_state_check__out_state;


X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__reset;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp;

X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__k;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp_state[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_re[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_im[2];

X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__N;



X_Int32 _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__reset;

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp;

X_Int32 _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__k;

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp_state[2];

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state[2];

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im[2];

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re[2];

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_re[2];

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_im[2];

X_Int32 _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i;

double _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__N;


double _grid_load_load_phase_c_grid_synchronization_rms_value1__square_sum;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__sample_cnt;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__db_timer;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_filtered_value;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_correction;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_value;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__correction;
double _grid_load_load_phase_c_grid_synchronization_rms_value1__out_state;
X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__reset;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp;

X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__k;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp_state[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_re[2];

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_im[2];

X_Int32 _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i;

double _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__N;



double _vsc1_fmeter_power_meter__filter_1_output_k_minus_1;
double _vsc1_fmeter_power_meter__filter_1_input_k_minus_1;
double _vsc1_fmeter_power_meter__filter_1_output_k_minus_1Q;
double _vsc1_fmeter_power_meter__filter_1_input_k_minus_1Q;
double _vsc1_fmeter_power_meter__filter_1_output_k_minus_1P0;
double _vsc1_fmeter_power_meter__filter_1_input_k_minus_1P0;
double _vsc1_fmeter_power_meter__filter_2_output_k_minus_1;
double _vsc1_fmeter_power_meter__filter_2_input_k_minus_1;
double _vsc1_fmeter_power_meter__filter_2_output_k_minus_1Q;
double _vsc1_fmeter_power_meter__filter_2_input_k_minus_1Q;
double _vsc1_fmeter_power_meter__filter_2_output_k_minus_1P0;
double _vsc1_fmeter_power_meter__filter_2_input_k_minus_1P0;
double _grid_load_load_phase_a_c_function4__n;

double _grid_load_load_phase_a_c_function4__old_Qref;


double _grid_load_load_phase_a_c_function5__n;

double _grid_load_load_phase_a_c_function5__old_Qref;


double _grid_load_load_phase_b_c_function4__n;

double _grid_load_load_phase_b_c_function4__old_Qref;


double _grid_load_load_phase_b_c_function5__n;

double _grid_load_load_phase_b_c_function5__old_Qref;


double _grid_load_load_phase_c_c_function4__n;

double _grid_load_load_phase_c_c_function4__old_Qref;


double _grid_load_load_phase_c_c_function5__n;

double _grid_load_load_phase_c_c_function5__old_Qref;




double _vsc1_fmeter_meassm_mode_and_dfract__Tfract;

double _vsc1_fmeter_meassm_mode_and_dfract__freqAbs;

double _vsc1_fmeter_meassm_mode_and_dfract__fMax;

X_Int32 _vsc1_fmeter_meassm_mode_and_dfract__reset;

X_Int32 _vsc1_fmeter_meassm_mode_and_dfract__cycle_counter;

double _vsc1_fmeter_meassm_mode_and_dfract__dFract_state;

X_Int32 _vsc1_fmeter_meassm_mode_and_dfract__submode_state;


X_Int32 _grid_load_load_phase_a_power_measurement_lref_calc__i;

double _grid_load_load_phase_a_power_measurement_lref_calc__Psum;

double _grid_load_load_phase_a_power_measurement_lref_calc__Qsum;


X_Int32 _grid_load_load_phase_b_power_measurement_lref_calc__i;

double _grid_load_load_phase_b_power_measurement_lref_calc__Psum;

double _grid_load_load_phase_b_power_measurement_lref_calc__Qsum;


X_Int32 _grid_load_load_phase_c_power_measurement_lref_calc__i;

double _grid_load_load_phase_c_power_measurement_lref_calc__Psum;

double _grid_load_load_phase_c_power_measurement_lref_calc__Qsum;


double _vsc1_fmeter_i_rms_calc_rms__rmsSum1;

double _vsc1_fmeter_i_rms_calc_rms__rmsSum2;

double _vsc1_fmeter_i_rms_calc_rms__rmsSum3;

double _vsc1_fmeter_i_rms_calc_rms__RMS1_state;

double _vsc1_fmeter_i_rms_calc_rms__RMS2_state;

double _vsc1_fmeter_i_rms_calc_rms__RMS3_state;


double _vsc1_fmeter_vll_rms_calc_rms__rmsSum1;

double _vsc1_fmeter_vll_rms_calc_rms__rmsSum2;

double _vsc1_fmeter_vll_rms_calc_rms__rmsSum3;

double _vsc1_fmeter_vll_rms_calc_rms__RMS1_state;

double _vsc1_fmeter_vll_rms_calc_rms__RMS2_state;

double _vsc1_fmeter_vll_rms_calc_rms__RMS3_state;


double _vsc1_fmeter_vln_rms_calc_rms__rmsSum1;

double _vsc1_fmeter_vln_rms_calc_rms__rmsSum2;

double _vsc1_fmeter_vln_rms_calc_rms__rmsSum3;

double _vsc1_fmeter_vln_rms_calc_rms__RMS1_state;

double _vsc1_fmeter_vln_rms_calc_rms__RMS2_state;

double _vsc1_fmeter_vln_rms_calc_rms__RMS3_state;


double _grid_load_load_phase_a_active_power_losses__I_cap;

X_Int32 _grid_load_load_phase_a_active_power_losses__i;

double _grid_load_load_phase_a_active_power_losses__Psum;

double _grid_load_load_phase_a_active_power_losses__Isum;

double _grid_load_load_phase_a_active_power_losses__I;

double _grid_load_load_phase_a_active_power_losses__var6;

double _grid_load_load_phase_a_active_power_losses__Rek;

double _grid_load_load_phase_a_active_power_losses__Xl;

double _grid_load_load_phase_a_active_power_losses__Xc;

double _grid_load_load_phase_a_active_power_losses__Iind;


X_Int32 _grid_load_load_phase_a_reactive_power_losses__i;

double _grid_load_load_phase_a_reactive_power_losses__Isum;

double _grid_load_load_phase_a_reactive_power_losses__I;

double _grid_load_load_phase_a_reactive_power_losses__Qsum;

double _grid_load_load_phase_a_reactive_power_losses__Iind;

double _grid_load_load_phase_a_reactive_power_losses__Rek;

double _grid_load_load_phase_a_reactive_power_losses__Xl;

double _grid_load_load_phase_a_reactive_power_losses__Xc;

double _grid_load_load_phase_a_reactive_power_losses__Il;


double _grid_load_load_phase_b_active_power_losses__I_cap;

X_Int32 _grid_load_load_phase_b_active_power_losses__i;

double _grid_load_load_phase_b_active_power_losses__Psum;

double _grid_load_load_phase_b_active_power_losses__Isum;

double _grid_load_load_phase_b_active_power_losses__I;

double _grid_load_load_phase_b_active_power_losses__var6;

double _grid_load_load_phase_b_active_power_losses__Rek;

double _grid_load_load_phase_b_active_power_losses__Xl;

double _grid_load_load_phase_b_active_power_losses__Xc;

double _grid_load_load_phase_b_active_power_losses__Iind;


X_Int32 _grid_load_load_phase_b_reactive_power_losses__i;

double _grid_load_load_phase_b_reactive_power_losses__Isum;

double _grid_load_load_phase_b_reactive_power_losses__I;

double _grid_load_load_phase_b_reactive_power_losses__Qsum;

double _grid_load_load_phase_b_reactive_power_losses__Iind;

double _grid_load_load_phase_b_reactive_power_losses__Rek;

double _grid_load_load_phase_b_reactive_power_losses__Xl;

double _grid_load_load_phase_b_reactive_power_losses__Xc;

double _grid_load_load_phase_b_reactive_power_losses__Il;


double _grid_load_load_phase_c_active_power_losses__I_cap;

X_Int32 _grid_load_load_phase_c_active_power_losses__i;

double _grid_load_load_phase_c_active_power_losses__Psum;

double _grid_load_load_phase_c_active_power_losses__Isum;

double _grid_load_load_phase_c_active_power_losses__I;

double _grid_load_load_phase_c_active_power_losses__var6;

double _grid_load_load_phase_c_active_power_losses__Rek;

double _grid_load_load_phase_c_active_power_losses__Xl;

double _grid_load_load_phase_c_active_power_losses__Xc;

double _grid_load_load_phase_c_active_power_losses__Iind;


X_Int32 _grid_load_load_phase_c_reactive_power_losses__i;

double _grid_load_load_phase_c_reactive_power_losses__Isum;

double _grid_load_load_phase_c_reactive_power_losses__I;

double _grid_load_load_phase_c_reactive_power_losses__Qsum;

double _grid_load_load_phase_c_reactive_power_losses__Iind;

double _grid_load_load_phase_c_reactive_power_losses__Rek;

double _grid_load_load_phase_c_reactive_power_losses__Xl;

double _grid_load_load_phase_c_reactive_power_losses__Xc;

double _grid_load_load_phase_c_reactive_power_losses__Il;








double _vsc1_fmeter_pll_rate_limiter1__state;
X_Int32 _vsc1_fmeter_pll_rate_limiter1__first_step;
double _vsc1_fmeter_pll_integrator__state;


double _grid_load_load_phase_a_grid_synchronization_comparator1__state;
X_Int32 _grid_load_load_phase_a_lref_calc__i;

double _grid_load_load_phase_a_lref_calc__Vsum;


double _grid_load_load_phase_a_c_function2__S;

double _grid_load_load_phase_a_c_function2__Z;

double _grid_load_load_phase_a_c_function2__Xc;

double _grid_load_load_phase_a_c_function2__Xl;

double _grid_load_load_phase_a_c_function2__rat;

double _grid_load_load_phase_a_c_function2__X;

double _grid_load_load_phase_a_c_function2__Rr;

double _grid_load_load_phase_a_c_function2__Qmin;

double _grid_load_load_phase_a_c_function2__Iind;

double _grid_load_load_phase_a_c_function2__Ploss;

X_Int32 _grid_load_load_phase_a_c_function2__i;

double _grid_load_load_phase_a_c_function2__wsum;

double _grid_load_load_phase_a_c_function2__Isum;

double _grid_load_load_phase_a_c_function2__Imeas;

double _grid_load_load_phase_a_c_function2__Zh;

double _grid_load_load_phase_a_c_function2__Ih;

double _grid_load_load_phase_a_c_function2__n;

double _grid_load_load_phase_a_c_function2__Rk;

double _grid_load_load_phase_a_c_function2__Rs;


double _grid_load_load_phase_b_grid_synchronization_comparator1__state;
X_Int32 _grid_load_load_phase_b_lref_calc__i;

double _grid_load_load_phase_b_lref_calc__Vsum;


double _grid_load_load_phase_b_c_function2__S;

double _grid_load_load_phase_b_c_function2__Z;

double _grid_load_load_phase_b_c_function2__Xc;

double _grid_load_load_phase_b_c_function2__Xl;

double _grid_load_load_phase_b_c_function2__rat;

double _grid_load_load_phase_b_c_function2__X;

double _grid_load_load_phase_b_c_function2__Rr;

double _grid_load_load_phase_b_c_function2__Qmin;

double _grid_load_load_phase_b_c_function2__Iind;

double _grid_load_load_phase_b_c_function2__Ploss;

X_Int32 _grid_load_load_phase_b_c_function2__i;

double _grid_load_load_phase_b_c_function2__wsum;

double _grid_load_load_phase_b_c_function2__Isum;

double _grid_load_load_phase_b_c_function2__Imeas;

double _grid_load_load_phase_b_c_function2__Zh;

double _grid_load_load_phase_b_c_function2__Ih;

double _grid_load_load_phase_b_c_function2__n;

double _grid_load_load_phase_b_c_function2__Rk;

double _grid_load_load_phase_b_c_function2__Rs;


double _grid_load_load_phase_c_grid_synchronization_comparator1__state;
X_Int32 _grid_load_load_phase_c_lref_calc__i;

double _grid_load_load_phase_c_lref_calc__Vsum;


double _grid_load_load_phase_c_c_function2__S;

double _grid_load_load_phase_c_c_function2__Z;

double _grid_load_load_phase_c_c_function2__Xc;

double _grid_load_load_phase_c_c_function2__Xl;

double _grid_load_load_phase_c_c_function2__rat;

double _grid_load_load_phase_c_c_function2__X;

double _grid_load_load_phase_c_c_function2__Rr;

double _grid_load_load_phase_c_c_function2__Qmin;

double _grid_load_load_phase_c_c_function2__Iind;

double _grid_load_load_phase_c_c_function2__Ploss;

X_Int32 _grid_load_load_phase_c_c_function2__i;

double _grid_load_load_phase_c_c_function2__wsum;

double _grid_load_load_phase_c_c_function2__Isum;

double _grid_load_load_phase_c_c_function2__Imeas;

double _grid_load_load_phase_c_c_function2__Zh;

double _grid_load_load_phase_c_c_function2__Ih;

double _grid_load_load_phase_c_c_function2__n;

double _grid_load_load_phase_c_c_function2__Rk;

double _grid_load_load_phase_c_c_function2__Rs;




double _grid_load_load_phase_a_counter__cnt;

double _grid_load_load_phase_a_counter__out_state;


double _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__states[1];
double _grid_load_load_phase_b_counter__cnt;

double _grid_load_load_phase_b_counter__out_state;


double _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__states[1];
double _grid_load_load_phase_c_counter__cnt;

double _grid_load_load_phase_c_counter__out_state;


double _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__states[1];
double _grid_load_load_phase_a_r_inc__P_calc;

double _grid_load_load_phase_a_r_inc__Ih;

double _grid_load_load_phase_a_r_inc__Isum;

X_Int32 _grid_load_load_phase_a_r_inc__i;

double _grid_load_load_phase_a_r_inc__I_calc;

double _grid_load_load_phase_a_r_inc__P_tol;

double _grid_load_load_phase_a_r_inc__R_changed;

double _grid_load_load_phase_a_r_inc__dR_accumulator;

double _grid_load_load_phase_a_r_inc__dR;

double _grid_load_load_phase_a_r_inc__dP;

double _grid_load_load_phase_a_r_inc__dP_old;

double _grid_load_load_phase_a_r_inc__status;

double _grid_load_load_phase_a_r_inc__P_calc_old;

double _grid_load_load_phase_a_r_inc__P_calc_new;


double _grid_load_load_phase_a_c_inc__Q_calc;

double _grid_load_load_phase_a_c_inc__Ih;

double _grid_load_load_phase_a_c_inc__Isum;

X_Int32 _grid_load_load_phase_a_c_inc__i;

double _grid_load_load_phase_a_c_inc__I_calc;

double _grid_load_load_phase_a_c_inc__Q_tol;

double _grid_load_load_phase_a_c_inc__dC_accumulator;

double _grid_load_load_phase_a_c_inc__Qsum;

double _grid_load_load_phase_a_c_inc__C_changed;

double _grid_load_load_phase_a_c_inc__dC;

double _grid_load_load_phase_a_c_inc__dQ;

double _grid_load_load_phase_a_c_inc__dQ_old;

double _grid_load_load_phase_a_c_inc__status;

double _grid_load_load_phase_a_c_inc__Q_calc_old;

double _grid_load_load_phase_a_c_inc__Q_calc_new;


double _grid_load_load_phase_b_r_inc__P_calc;

double _grid_load_load_phase_b_r_inc__Ih;

double _grid_load_load_phase_b_r_inc__Isum;

X_Int32 _grid_load_load_phase_b_r_inc__i;

double _grid_load_load_phase_b_r_inc__I_calc;

double _grid_load_load_phase_b_r_inc__P_tol;

double _grid_load_load_phase_b_r_inc__R_changed;

double _grid_load_load_phase_b_r_inc__dR_accumulator;

double _grid_load_load_phase_b_r_inc__dR;

double _grid_load_load_phase_b_r_inc__dP;

double _grid_load_load_phase_b_r_inc__dP_old;

double _grid_load_load_phase_b_r_inc__status;

double _grid_load_load_phase_b_r_inc__P_calc_old;

double _grid_load_load_phase_b_r_inc__P_calc_new;


double _grid_load_load_phase_b_c_inc__Q_calc;

double _grid_load_load_phase_b_c_inc__Ih;

double _grid_load_load_phase_b_c_inc__Isum;

X_Int32 _grid_load_load_phase_b_c_inc__i;

double _grid_load_load_phase_b_c_inc__I_calc;

double _grid_load_load_phase_b_c_inc__Q_tol;

double _grid_load_load_phase_b_c_inc__dC_accumulator;

double _grid_load_load_phase_b_c_inc__Qsum;

double _grid_load_load_phase_b_c_inc__C_changed;

double _grid_load_load_phase_b_c_inc__dC;

double _grid_load_load_phase_b_c_inc__dQ;

double _grid_load_load_phase_b_c_inc__dQ_old;

double _grid_load_load_phase_b_c_inc__status;

double _grid_load_load_phase_b_c_inc__Q_calc_old;

double _grid_load_load_phase_b_c_inc__Q_calc_new;


double _grid_load_load_phase_c_r_inc__P_calc;

double _grid_load_load_phase_c_r_inc__Ih;

double _grid_load_load_phase_c_r_inc__Isum;

X_Int32 _grid_load_load_phase_c_r_inc__i;

double _grid_load_load_phase_c_r_inc__I_calc;

double _grid_load_load_phase_c_r_inc__P_tol;

double _grid_load_load_phase_c_r_inc__R_changed;

double _grid_load_load_phase_c_r_inc__dR_accumulator;

double _grid_load_load_phase_c_r_inc__dR;

double _grid_load_load_phase_c_r_inc__dP;

double _grid_load_load_phase_c_r_inc__dP_old;

double _grid_load_load_phase_c_r_inc__status;

double _grid_load_load_phase_c_r_inc__P_calc_old;

double _grid_load_load_phase_c_r_inc__P_calc_new;


double _grid_load_load_phase_c_c_inc__Q_calc;

double _grid_load_load_phase_c_c_inc__Ih;

double _grid_load_load_phase_c_c_inc__Isum;

X_Int32 _grid_load_load_phase_c_c_inc__i;

double _grid_load_load_phase_c_c_inc__I_calc;

double _grid_load_load_phase_c_c_inc__Q_tol;

double _grid_load_load_phase_c_c_inc__dC_accumulator;

double _grid_load_load_phase_c_c_inc__Qsum;

double _grid_load_load_phase_c_c_inc__C_changed;

double _grid_load_load_phase_c_c_inc__dC;

double _grid_load_load_phase_c_c_inc__dQ;

double _grid_load_load_phase_c_c_inc__dQ_old;

double _grid_load_load_phase_c_c_inc__status;

double _grid_load_load_phase_c_c_inc__Q_calc_old;

double _grid_load_load_phase_c_c_inc__Q_calc_new;


//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
    double _modulation_lower_carrier__frequency;
    double _modulation_lower_carrier__duty_cycle;
    double _modulation_lower_carrier__max_val;
    double _modulation_lower_carrier__min_val;
    double _modulation_lower_carrier__phase;
    double _modulation_upper_carrier__min_val;
    double _modulation_upper_carrier__frequency;
    double _modulation_upper_carrier__phase;
    double _modulation_upper_carrier__max_val;
    double _modulation_upper_carrier__duty_cycle;
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    X_UnInt32 _grid_load_load_phase_a_grid_synchronization_delay1__i;
    for (_grid_load_load_phase_a_grid_synchronization_delay1__i = 0; _grid_load_load_phase_a_grid_synchronization_delay1__i < 1; _grid_load_load_phase_a_grid_synchronization_delay1__i++) {
        _grid_load_load_phase_a_grid_synchronization_delay1__state[_grid_load_load_phase_a_grid_synchronization_delay1__i] =  0.0;
    }
    _grid_load_load_phase_a_grid_synchronization_delay1__cbi = 0;
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__filtered_value = 0.0 / (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_in = 0x0;
    _grid_load_load_phase_a_low_pass_filter2__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter2__previous_in = 0x0;
    _grid_load_load_phase_a_low_pass_filter8__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter8__previous_in = 0x0;
    _grid_load_load_phase_a_low_pass_filter9__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter9__previous_in = 0x0;
    {
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i = 0 ;
    }
    {
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i = 0 ;
    }
    _grid_load_load_phase_a_sr_flip_flop1__state =  0;
    _grid_load_load_phase_a_single_phase_pll1_i__integrator_state =  0.0;
    _grid_load_load_phase_a_single_phase_pll1_i__filter_state =  0.0;
    _grid_load_load_phase_a_single_phase_pll1_integrator1__state = 0.0;
    _grid_load_load_phase_a_single_phase_pll1_integrator10__state = 60.0;
    _grid_load_load_phase_a_single_phase_pll1_integrator2__state = -359.2584956081995;
    _grid_load_load_phase_a_single_phase_pll1_integrator3__state = 359.2584956081995;
    _grid_load_load_phase_a_single_phase_pll1_integrator4__state = 359.2584956081995;
    _grid_load_load_phase_a_single_phase_pll1_integrator5__state = 376.99111843077515;
    _grid_load_load_phase_a_single_phase_pll1_integrator6__state = 376.99111843077515;
    _grid_load_load_phase_a_single_phase_pll1_integrator7__state = 60.0;
    _grid_load_load_phase_a_single_phase_pll1_integrator8__state = 60.0;
    _grid_load_load_phase_a_single_phase_pll1_integrator9__state = 60.0;
    {
        _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc = 0.0 ;
        _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI ;
    }
    X_UnInt32 _grid_load_load_phase_a_transport_delay1__i;
    for (_grid_load_load_phase_a_transport_delay1__i = 0; _grid_load_load_phase_a_transport_delay1__i < 1; _grid_load_load_phase_a_transport_delay1__i++) {
        _grid_load_load_phase_a_transport_delay1__state[_grid_load_load_phase_a_transport_delay1__i] =  0.0;
    }
    _grid_load_load_phase_a_transport_delay1__cbi = 0;
    X_UnInt32 _grid_load_load_phase_a_transport_delay2__i;
    for (_grid_load_load_phase_a_transport_delay2__i = 0; _grid_load_load_phase_a_transport_delay2__i < 1; _grid_load_load_phase_a_transport_delay2__i++) {
        _grid_load_load_phase_a_transport_delay2__state[_grid_load_load_phase_a_transport_delay2__i] =  0.0;
    }
    _grid_load_load_phase_a_transport_delay2__cbi = 0;
    _grid_load_load_phase_a_unit_delay1__state = 0.0;
    _grid_load_load_phase_a_unit_delay12__state = 0.0;
    _grid_load_load_phase_a_unit_delay13__state = 0.0;
    _grid_load_load_phase_a_unit_delay2__state = 0.0;
    _grid_load_load_phase_a_unit_delay3__state = 0.0;
    _grid_load_load_phase_a_unit_delay4__state = 0.0;
    _grid_load_load_phase_a_unit_delay5__state = 0.0;
    _grid_load_load_phase_a_unit_delay6__state = 0.0;
    _grid_load_load_phase_a_unit_delay7__state = 0.0;
    _grid_load_load_phase_a_unit_delay8__state = 0.0;
    {
        _grid_load_load_phase_a_zig_zag_handler__state = _grid_load_load_phase_a_zig_zag_handler__fault = 0 ;
    }
    X_UnInt32 _grid_load_load_phase_b_grid_synchronization_delay1__i;
    for (_grid_load_load_phase_b_grid_synchronization_delay1__i = 0; _grid_load_load_phase_b_grid_synchronization_delay1__i < 1; _grid_load_load_phase_b_grid_synchronization_delay1__i++) {
        _grid_load_load_phase_b_grid_synchronization_delay1__state[_grid_load_load_phase_b_grid_synchronization_delay1__i] =  0.0;
    }
    _grid_load_load_phase_b_grid_synchronization_delay1__cbi = 0;
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__filtered_value = 0.0 / (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_in = 0x0;
    _grid_load_load_phase_b_low_pass_filter2__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter2__previous_in = 0x0;
    _grid_load_load_phase_b_low_pass_filter8__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter8__previous_in = 0x0;
    _grid_load_load_phase_b_low_pass_filter9__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter9__previous_in = 0x0;
    {
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i = 0 ;
    }
    {
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i = 0 ;
    }
    _grid_load_load_phase_b_sr_flip_flop1__state =  0;
    _grid_load_load_phase_b_single_phase_pll1_i__integrator_state =  0.0;
    _grid_load_load_phase_b_single_phase_pll1_i__filter_state =  0.0;
    _grid_load_load_phase_b_single_phase_pll1_integrator1__state = 0.0;
    _grid_load_load_phase_b_single_phase_pll1_integrator10__state = 60.0;
    _grid_load_load_phase_b_single_phase_pll1_integrator2__state = -359.2584956081995;
    _grid_load_load_phase_b_single_phase_pll1_integrator3__state = 359.2584956081995;
    _grid_load_load_phase_b_single_phase_pll1_integrator4__state = 359.2584956081995;
    _grid_load_load_phase_b_single_phase_pll1_integrator5__state = 376.99111843077515;
    _grid_load_load_phase_b_single_phase_pll1_integrator6__state = 376.99111843077515;
    _grid_load_load_phase_b_single_phase_pll1_integrator7__state = 60.0;
    _grid_load_load_phase_b_single_phase_pll1_integrator8__state = 60.0;
    _grid_load_load_phase_b_single_phase_pll1_integrator9__state = 60.0;
    {
        _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc = 0.0 ;
        _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI ;
    }
    X_UnInt32 _grid_load_load_phase_b_transport_delay1__i;
    for (_grid_load_load_phase_b_transport_delay1__i = 0; _grid_load_load_phase_b_transport_delay1__i < 1; _grid_load_load_phase_b_transport_delay1__i++) {
        _grid_load_load_phase_b_transport_delay1__state[_grid_load_load_phase_b_transport_delay1__i] =  0.0;
    }
    _grid_load_load_phase_b_transport_delay1__cbi = 0;
    X_UnInt32 _grid_load_load_phase_b_transport_delay2__i;
    for (_grid_load_load_phase_b_transport_delay2__i = 0; _grid_load_load_phase_b_transport_delay2__i < 1; _grid_load_load_phase_b_transport_delay2__i++) {
        _grid_load_load_phase_b_transport_delay2__state[_grid_load_load_phase_b_transport_delay2__i] =  0.0;
    }
    _grid_load_load_phase_b_transport_delay2__cbi = 0;
    _grid_load_load_phase_b_unit_delay1__state = 0.0;
    _grid_load_load_phase_b_unit_delay12__state = 0.0;
    _grid_load_load_phase_b_unit_delay13__state = 0.0;
    _grid_load_load_phase_b_unit_delay2__state = 0.0;
    _grid_load_load_phase_b_unit_delay3__state = 0.0;
    _grid_load_load_phase_b_unit_delay4__state = 0.0;
    _grid_load_load_phase_b_unit_delay5__state = 0.0;
    _grid_load_load_phase_b_unit_delay6__state = 0.0;
    _grid_load_load_phase_b_unit_delay7__state = 0.0;
    _grid_load_load_phase_b_unit_delay8__state = 0.0;
    {
        _grid_load_load_phase_b_zig_zag_handler__state = _grid_load_load_phase_b_zig_zag_handler__fault = 0 ;
    }
    X_UnInt32 _grid_load_load_phase_c_grid_synchronization_delay1__i;
    for (_grid_load_load_phase_c_grid_synchronization_delay1__i = 0; _grid_load_load_phase_c_grid_synchronization_delay1__i < 1; _grid_load_load_phase_c_grid_synchronization_delay1__i++) {
        _grid_load_load_phase_c_grid_synchronization_delay1__state[_grid_load_load_phase_c_grid_synchronization_delay1__i] =  0.0;
    }
    _grid_load_load_phase_c_grid_synchronization_delay1__cbi = 0;
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__filtered_value = 0.0 / (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_in = 0x0;
    _grid_load_load_phase_c_low_pass_filter2__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter2__previous_in = 0x0;
    _grid_load_load_phase_c_low_pass_filter8__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter8__previous_in = 0x0;
    _grid_load_load_phase_c_low_pass_filter9__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter9__previous_in = 0x0;
    {
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i = 0 ;
    }
    {
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref = 0 ;
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old = 0 ;
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a = 0 ;
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__b = 0 ;
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i = 0 ;
    }
    _grid_load_load_phase_c_sr_flip_flop1__state =  0;
    _grid_load_load_phase_c_single_phase_pll1_i__integrator_state =  0.0;
    _grid_load_load_phase_c_single_phase_pll1_i__filter_state =  0.0;
    _grid_load_load_phase_c_single_phase_pll1_integrator1__state = 0.0;
    _grid_load_load_phase_c_single_phase_pll1_integrator10__state = 60.0;
    _grid_load_load_phase_c_single_phase_pll1_integrator2__state = -359.2584956081995;
    _grid_load_load_phase_c_single_phase_pll1_integrator3__state = 359.2584956081995;
    _grid_load_load_phase_c_single_phase_pll1_integrator4__state = 359.2584956081995;
    _grid_load_load_phase_c_single_phase_pll1_integrator5__state = 376.99111843077515;
    _grid_load_load_phase_c_single_phase_pll1_integrator6__state = 376.99111843077515;
    _grid_load_load_phase_c_single_phase_pll1_integrator7__state = 60.0;
    _grid_load_load_phase_c_single_phase_pll1_integrator8__state = 60.0;
    _grid_load_load_phase_c_single_phase_pll1_integrator9__state = 60.0;
    {
        _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc = 0.0 ;
        _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI ;
    }
    X_UnInt32 _grid_load_load_phase_c_transport_delay1__i;
    for (_grid_load_load_phase_c_transport_delay1__i = 0; _grid_load_load_phase_c_transport_delay1__i < 1; _grid_load_load_phase_c_transport_delay1__i++) {
        _grid_load_load_phase_c_transport_delay1__state[_grid_load_load_phase_c_transport_delay1__i] =  0.0;
    }
    _grid_load_load_phase_c_transport_delay1__cbi = 0;
    X_UnInt32 _grid_load_load_phase_c_transport_delay2__i;
    for (_grid_load_load_phase_c_transport_delay2__i = 0; _grid_load_load_phase_c_transport_delay2__i < 1; _grid_load_load_phase_c_transport_delay2__i++) {
        _grid_load_load_phase_c_transport_delay2__state[_grid_load_load_phase_c_transport_delay2__i] =  0.0;
    }
    _grid_load_load_phase_c_transport_delay2__cbi = 0;
    _grid_load_load_phase_c_unit_delay1__state = 0.0;
    _grid_load_load_phase_c_unit_delay12__state = 0.0;
    _grid_load_load_phase_c_unit_delay13__state = 0.0;
    _grid_load_load_phase_c_unit_delay2__state = 0.0;
    _grid_load_load_phase_c_unit_delay3__state = 0.0;
    _grid_load_load_phase_c_unit_delay4__state = 0.0;
    _grid_load_load_phase_c_unit_delay5__state = 0.0;
    _grid_load_load_phase_c_unit_delay6__state = 0.0;
    _grid_load_load_phase_c_unit_delay7__state = 0.0;
    _grid_load_load_phase_c_unit_delay8__state = 0.0;
    {
        _grid_load_load_phase_c_zig_zag_handler__state = _grid_load_load_phase_c_zig_zag_handler__fault = 0 ;
    }
    _modulation_lower_carrier__current_phase = tunable_params._modulation_lower_carrier__phase;
    _modulation_rate_transition1_output__state =  0.0;
    _modulation_rate_transition2_output__state =  0.0;
    _modulation_rate_transition3_output__state =  0.0;
    _modulation_upper_carrier__current_phase = tunable_params._modulation_upper_carrier__phase;
    X_UnInt32 _vsc1_fmeter_pll_lpf_lpf__i;
    for (_vsc1_fmeter_pll_lpf_lpf__i = 0; _vsc1_fmeter_pll_lpf_lpf__i < 2; _vsc1_fmeter_pll_lpf_lpf__i++) {
        _vsc1_fmeter_pll_lpf_lpf__states[_vsc1_fmeter_pll_lpf_lpf__i] = 0;
    }
    _vsc1_fmeter_pll_pid_integrator1__state = 376.99111843;
    _vsc1_fmeter_pll_pid_integrator2__state = 0.0;
    _vsc1_fmeter_pll_unit_delay1__state = 0.0;
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 1e-06 );
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 1e-06 );
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _sine_a__current_phase = 0.0 / 360.0f;
    _sine_b__current_phase = -120.0 / 360.0f;
    _sine_c__current_phase = 120.0 / 360.0f;
    {
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val = 0.5 * 359.25849560819944 ;
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__time_cnt = 0 ;
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__out_state = 0 ;
    }
    {
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__reset = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__N = 0 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__k = 1 ;
    }
    {
        for ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ) _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
        _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__reset = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__N = 0 ;
        _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__k = 1 ;
    }
    _grid_load_load_phase_a_grid_synchronization_rms_value1__square_sum = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__sample_cnt = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__db_timer = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_filtered_value = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_correction = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__correction = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__previous_value = 0x0;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__out_state = 0x0;
    {
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__reset = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__N = 0 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__k = 1 ;
    }
    {
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val = 0.5 * 359.25849560819944 ;
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__time_cnt = 0 ;
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__out_state = 0 ;
    }
    {
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__reset = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__N = 0 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__k = 1 ;
    }
    {
        for ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ) _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
        _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__reset = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__N = 0 ;
        _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__k = 1 ;
    }
    _grid_load_load_phase_b_grid_synchronization_rms_value1__square_sum = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__sample_cnt = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__db_timer = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_filtered_value = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_correction = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__correction = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__previous_value = 0x0;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__out_state = 0x0;
    {
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__reset = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__N = 0 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__k = 1 ;
    }
    {
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val = 0.5 * 359.25849560819944 ;
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__time_cnt = 0 ;
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__out_state = 0 ;
    }
    {
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__reset = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__N = 0 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__k = 1 ;
    }
    {
        for ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ) _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
        _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__reset = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__N = 0 ;
        _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__k = 1 ;
    }
    _grid_load_load_phase_c_grid_synchronization_rms_value1__square_sum = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__sample_cnt = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__db_timer = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_filtered_value = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_correction = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__correction = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__previous_value = 0x0;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__out_state = 0x0;
    {
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__reset = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__N = 0 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__k = 1 ;
    }
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1 = 0.0;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1 = 0.0;
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1 = 0.0;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1 = 0.0;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1Q = 0.0;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1Q = 0.0;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1P0 = 0.0;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1P0 = 0.0;
    {
        _grid_load_load_phase_a_c_function4__n = 0 ;
        _grid_load_load_phase_a_c_function4__old_Qref = 0 ;
    }
    {
        _grid_load_load_phase_a_c_function5__n = 0 ;
        _grid_load_load_phase_a_c_function5__old_Qref = 0 ;
    }
    {
        _grid_load_load_phase_b_c_function4__n = 0 ;
        _grid_load_load_phase_b_c_function4__old_Qref = 0 ;
    }
    {
        _grid_load_load_phase_b_c_function5__n = 0 ;
        _grid_load_load_phase_b_c_function5__old_Qref = 0 ;
    }
    {
        _grid_load_load_phase_c_c_function4__n = 0 ;
        _grid_load_load_phase_c_c_function4__old_Qref = 0 ;
    }
    {
        _grid_load_load_phase_c_c_function5__n = 0 ;
        _grid_load_load_phase_c_c_function5__old_Qref = 0 ;
    }
    {
        _meas_clarke__ilf_al = 0 ;
        _meas_clarke__ilf_be = 0 ;
        _meas_clarke__ilf_0 = 0 ;
        _meas_clarke__vc_al = 0 ;
        _meas_clarke__vc_be = 0 ;
        _meas_clarke__vc_0 = 0 ;
        _meas_clarke__i0_al = 0 ;
        _meas_clarke__i0_be = 0 ;
        _meas_clarke__i0_0 = 0 ;
    }
    HIL_OutAO(0x4015, 0.0f);
    {
        _modulation_comparator__va = 0 ;
        _modulation_comparator__vb = 0 ;
        _modulation_comparator__vc = 0 ;
    }
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    {
        _vsc1_fmeter_meassm_mode_and_dfract__fMax = 1.0 / 1e-06 ;
        _vsc1_fmeter_meassm_mode_and_dfract__cycle_counter = 0 ;
        _vsc1_fmeter_meassm_mode_and_dfract__reset = 1 ;
        _vsc1_fmeter_meassm_mode_and_dfract__dFract_state = 0 ;
        _vsc1_fmeter_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutFloat(141557760, 0.0);
    HIL_OutFloat(141557761, 0.0);
    {
        _grid_load_load_phase_a_power_measurement_lref_calc__Psum = 0 ;
        _grid_load_load_phase_a_power_measurement_lref_calc__Qsum = 0 ;
    }
    {
        _grid_load_load_phase_b_power_measurement_lref_calc__Psum = 0 ;
        _grid_load_load_phase_b_power_measurement_lref_calc__Qsum = 0 ;
    }
    {
        _grid_load_load_phase_c_power_measurement_lref_calc__Psum = 0 ;
        _grid_load_load_phase_c_power_measurement_lref_calc__Qsum = 0 ;
    }
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    {
        _vsc1_fmeter_i_rms_calc_rms__RMS1_state = 0 ;
        _vsc1_fmeter_i_rms_calc_rms__RMS2_state = 0 ;
        _vsc1_fmeter_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _vsc1_fmeter_vll_rms_calc_rms__RMS1_state = 0 ;
        _vsc1_fmeter_vll_rms_calc_rms__RMS2_state = 0 ;
        _vsc1_fmeter_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _vsc1_fmeter_vln_rms_calc_rms__RMS1_state = 0 ;
        _vsc1_fmeter_vln_rms_calc_rms__RMS2_state = 0 ;
        _vsc1_fmeter_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _grid_load_load_phase_a_active_power_losses__Psum = 0 ;
        _grid_load_load_phase_a_active_power_losses__I = 0 ;
        _grid_load_load_phase_a_active_power_losses__Isum = 0 ;
        _grid_load_load_phase_a_active_power_losses__I_cap = 0 ;
        _grid_load_load_phase_a_active_power_losses__Iind ;
    }
    {
        _grid_load_load_phase_a_reactive_power_losses__Il = 0 ;
        _grid_load_load_phase_a_reactive_power_losses__I = 0 ;
        _grid_load_load_phase_a_reactive_power_losses__Isum = 0 ;
        _grid_load_load_phase_a_reactive_power_losses__Rek = 0 ;
        _grid_load_load_phase_a_reactive_power_losses__Xl = 0 ;
        _grid_load_load_phase_a_reactive_power_losses__Xc = 0 ;
    }
    {
        _grid_load_load_phase_b_active_power_losses__Psum = 0 ;
        _grid_load_load_phase_b_active_power_losses__I = 0 ;
        _grid_load_load_phase_b_active_power_losses__Isum = 0 ;
        _grid_load_load_phase_b_active_power_losses__I_cap = 0 ;
        _grid_load_load_phase_b_active_power_losses__Iind ;
    }
    {
        _grid_load_load_phase_b_reactive_power_losses__Il = 0 ;
        _grid_load_load_phase_b_reactive_power_losses__I = 0 ;
        _grid_load_load_phase_b_reactive_power_losses__Isum = 0 ;
        _grid_load_load_phase_b_reactive_power_losses__Rek = 0 ;
        _grid_load_load_phase_b_reactive_power_losses__Xl = 0 ;
        _grid_load_load_phase_b_reactive_power_losses__Xc = 0 ;
    }
    {
        _grid_load_load_phase_c_active_power_losses__Psum = 0 ;
        _grid_load_load_phase_c_active_power_losses__I = 0 ;
        _grid_load_load_phase_c_active_power_losses__Isum = 0 ;
        _grid_load_load_phase_c_active_power_losses__I_cap = 0 ;
        _grid_load_load_phase_c_active_power_losses__Iind ;
    }
    {
        _grid_load_load_phase_c_reactive_power_losses__Il = 0 ;
        _grid_load_load_phase_c_reactive_power_losses__I = 0 ;
        _grid_load_load_phase_c_reactive_power_losses__Isum = 0 ;
        _grid_load_load_phase_c_reactive_power_losses__Rek = 0 ;
        _grid_load_load_phase_c_reactive_power_losses__Xl = 0 ;
        _grid_load_load_phase_c_reactive_power_losses__Xc = 0 ;
    }
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    {
        _ref_clarke__ONE_BY_SQRT3 = 5.773502691896258e-01 ;
        _ref_clarke__v0_al = 0 ;
        _ref_clarke__v0_be = 0 ;
        _ref_clarke__v0_0 = 0 ;
    }
    HIL_OutInt32(0x850002e, 0xf);
    HIL_OutInt32(0x850004e, 0xf);
    HIL_OutInt32(0x850006e, 0xf);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    {
        _inner_loop_alpha__SS_V_GAINS [ 0 ] = + 3.005202175747935e-02 ;
        _inner_loop_alpha__SS_V_GAINS [ 1 ] = + 2.978384429593665e-01 ;
        _inner_loop_alpha__SS_V_GAINS [ 2 ] = + 0 ;
        _inner_loop_alpha__SS_V_GAINS [ 3 ] = + 4.332144964769132e-02 ;
        _inner_loop_alpha__SS_V_GAINS [ 4 ] = - 4.386152786476110e-02 ;
        _inner_loop_alpha__SS_I_GAINS [ 0 ] = + 1.072411193858177e+01 ;
        _inner_loop_alpha__SS_I_GAINS [ 1 ] = - 2.938904663320472e-01 ;
        _inner_loop_alpha__SS_I_GAINS [ 2 ] = 0 ;
        _inner_loop_alpha__UV_BOUNDARY = 520 ;
        _inner_loop_alpha__UI_BOUNDARY = 1000 ;
        _inner_loop_alpha__A = 0.1 ;
        _inner_loop_alpha__OMEGA0 = 376.991118431 ;
        _inner_loop_alpha__TS_20KHZ = 0.00005 ;
        _inner_loop_alpha__uv = 0 ;
        _inner_loop_alpha__uv_bounded = 0 ;
        _inner_loop_alpha__xc_1_kminus1 = 0 ;
        _inner_loop_alpha__xc_2_kminus1 = 0 ;
        _inner_loop_alpha__xc_1 = 0 ;
        _inner_loop_alpha__xc_2 = 0 ;
        _inner_loop_alpha__err = 0 ;
        _inner_loop_alpha__ui = 0 ;
        _inner_loop_alpha__ui_bounded = 0 ;
    }
    {
        _inner_loop_alpha1__SS_V_GAINS [ 0 ] = + 3.005202175747935e-02 ;
        _inner_loop_alpha1__SS_V_GAINS [ 1 ] = + 2.978384429593665e-01 ;
        _inner_loop_alpha1__SS_V_GAINS [ 2 ] = + 0 ;
        _inner_loop_alpha1__SS_V_GAINS [ 3 ] = + 4.332144964769132e-02 ;
        _inner_loop_alpha1__SS_V_GAINS [ 4 ] = - 4.386152786476110e-02 ;
        _inner_loop_alpha1__SS_I_GAINS [ 0 ] = + 1.072411193858177e+01 ;
        _inner_loop_alpha1__SS_I_GAINS [ 1 ] = - 2.938904663320472e-01 ;
        _inner_loop_alpha1__SS_I_GAINS [ 2 ] = 0 ;
        _inner_loop_alpha1__UV_BOUNDARY = 520 ;
        _inner_loop_alpha1__UI_BOUNDARY = 1000 ;
        _inner_loop_alpha1__A = 0.1 ;
        _inner_loop_alpha1__OMEGA0 = 376.991118431 ;
        _inner_loop_alpha1__TS_20KHZ = 0.00005 ;
        _inner_loop_alpha1__uv = 0 ;
        _inner_loop_alpha1__uv_bounded = 0 ;
        _inner_loop_alpha1__xc_1_kminus1 = 0 ;
        _inner_loop_alpha1__xc_2_kminus1 = 0 ;
        _inner_loop_alpha1__xc_1 = 0 ;
        _inner_loop_alpha1__xc_2 = 0 ;
        _inner_loop_alpha1__err = 0 ;
        _inner_loop_alpha1__ui = 0 ;
        _inner_loop_alpha1__ui_bounded = 0 ;
    }
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    _vsc1_fmeter_pll_rate_limiter1__state = 0;
    _vsc1_fmeter_pll_rate_limiter1__first_step = 1;
    {
        _vsc1_fmeter_pll_integrator__state = 0 ;
    }
    HIL_OutAO(0x4033, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    _grid_load_load_phase_a_grid_synchronization_comparator1__state = 0.0f;
    {
        _grid_load_load_phase_a_lref_calc__Vsum = 0 ;
    }
    {
        _grid_load_load_phase_a_c_function2__Xc = 0 ;
        _grid_load_load_phase_a_c_function2__Xl = 0 ;
        _grid_load_load_phase_a_c_function2__wsum = 0 ;
        _grid_load_load_phase_a_c_function2__Isum ;
        _grid_load_load_phase_a_c_function2__Imeas = 0 ;
        _grid_load_load_phase_a_c_function2__Ih = 0 ;
        _grid_load_load_phase_a_c_function2__n = 0 ;
    }
    _grid_load_load_phase_b_grid_synchronization_comparator1__state = 0.0f;
    {
        _grid_load_load_phase_b_lref_calc__Vsum = 0 ;
    }
    {
        _grid_load_load_phase_b_c_function2__Xc = 0 ;
        _grid_load_load_phase_b_c_function2__Xl = 0 ;
        _grid_load_load_phase_b_c_function2__wsum = 0 ;
        _grid_load_load_phase_b_c_function2__Isum ;
        _grid_load_load_phase_b_c_function2__Imeas = 0 ;
        _grid_load_load_phase_b_c_function2__Ih = 0 ;
        _grid_load_load_phase_b_c_function2__n = 0 ;
    }
    _grid_load_load_phase_c_grid_synchronization_comparator1__state = 0.0f;
    {
        _grid_load_load_phase_c_lref_calc__Vsum = 0 ;
    }
    {
        _grid_load_load_phase_c_c_function2__Xc = 0 ;
        _grid_load_load_phase_c_c_function2__Xl = 0 ;
        _grid_load_load_phase_c_c_function2__wsum = 0 ;
        _grid_load_load_phase_c_c_function2__Isum ;
        _grid_load_load_phase_c_c_function2__Imeas = 0 ;
        _grid_load_load_phase_c_c_function2__Ih = 0 ;
        _grid_load_load_phase_c_c_function2__n = 0 ;
    }
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    {
        _geo_pwm__i0 = 0 ;
        _geo_pwm__v0 = 0 ;
        _geo_pwm__err = 0 ;
        _geo_pwm__err_kminus = 0 ;
    }
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    {
        _inv_clarke__van = 0 ;
        _inv_clarke__vbn = 0 ;
        _inv_clarke__vcn = 0 ;
    }
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    {
        _grid_load_load_phase_a_counter__cnt = 0 ;
        _grid_load_load_phase_a_counter__out_state = 0 ;
    }
    X_UnInt32 _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i;
    for (_grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i] = 0;
    }
    {
        _grid_load_load_phase_b_counter__cnt = 0 ;
        _grid_load_load_phase_b_counter__out_state = 0 ;
    }
    X_UnInt32 _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i;
    for (_grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i] = 0;
    }
    {
        _grid_load_load_phase_c_counter__cnt = 0 ;
        _grid_load_load_phase_c_counter__out_state = 0 ;
    }
    X_UnInt32 _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i;
    for (_grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i] = 0;
    }
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    {
        _grid_load_load_phase_a_r_inc__dR = 0.001 ;
        _grid_load_load_phase_a_r_inc__dR_accumulator = 0 ;
        _grid_load_load_phase_a_r_inc__Isum = 0 ;
        _grid_load_load_phase_a_r_inc__Ih = 0 ;
        _grid_load_load_phase_a_r_inc__dP = 0 ;
        _grid_load_load_phase_a_r_inc__P_tol = 0.002 ;
    }
    {
        _grid_load_load_phase_a_c_inc__dC = (-0.001) ;
        _grid_load_load_phase_a_c_inc__dC_accumulator = 0 ;
        _grid_load_load_phase_a_c_inc__Isum = 0 ;
        _grid_load_load_phase_a_c_inc__Ih = 0 ;
        _grid_load_load_phase_a_c_inc__dQ = 0 ;
        _grid_load_load_phase_a_c_inc__Q_tol = 0.002 ;
    }
    {
        _grid_load_load_phase_b_r_inc__dR = 0.001 ;
        _grid_load_load_phase_b_r_inc__dR_accumulator = 0 ;
        _grid_load_load_phase_b_r_inc__Isum = 0 ;
        _grid_load_load_phase_b_r_inc__Ih = 0 ;
        _grid_load_load_phase_b_r_inc__dP = 0 ;
        _grid_load_load_phase_b_r_inc__P_tol = 0.002 ;
    }
    {
        _grid_load_load_phase_b_c_inc__dC = (-0.001) ;
        _grid_load_load_phase_b_c_inc__dC_accumulator = 0 ;
        _grid_load_load_phase_b_c_inc__Isum = 0 ;
        _grid_load_load_phase_b_c_inc__Ih = 0 ;
        _grid_load_load_phase_b_c_inc__dQ = 0 ;
        _grid_load_load_phase_b_c_inc__Q_tol = 0.002 ;
    }
    {
        _grid_load_load_phase_c_r_inc__dR = 0.001 ;
        _grid_load_load_phase_c_r_inc__dR_accumulator = 0 ;
        _grid_load_load_phase_c_r_inc__Isum = 0 ;
        _grid_load_load_phase_c_r_inc__Ih = 0 ;
        _grid_load_load_phase_c_r_inc__dP = 0 ;
        _grid_load_load_phase_c_r_inc__P_tol = 0.002 ;
    }
    {
        _grid_load_load_phase_c_c_inc__dC = (-0.001) ;
        _grid_load_load_phase_c_c_inc__dC_accumulator = 0 ;
        _grid_load_load_phase_c_c_inc__Isum = 0 ;
        _grid_load_load_phase_c_c_inc__Ih = 0 ;
        _grid_load_load_phase_c_c_inc__dQ = 0 ;
        _grid_load_load_phase_c_c_inc__Q_tol = 0.002 ;
    }
    HIL_OutFloat(137363462, 0.0);
    HIL_OutFloat(137363463, 0.0);
    HIL_OutFloat(137363464, 0.0);
    HIL_OutFloat(137363457, 0.0);
    HIL_OutFloat(137363459, 0.0);
    HIL_OutFloat(137363461, 0.0);
    HIL_OutFloat(137363456, 0.0);
    HIL_OutFloat(137363458, 0.0);
    HIL_OutFloat(137363460, 0.0);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: VSC1-FMeter.zero
    // Generated from the component: VSC1-Meter.zero
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Modulation.Lower_Carrier
    if (_modulation_lower_carrier__current_phase < tunable_params._modulation_lower_carrier__duty_cycle) {
        _modulation_lower_carrier__out = tunable_params._modulation_lower_carrier__min_val + (((tunable_params._modulation_lower_carrier__max_val) - (tunable_params._modulation_lower_carrier__min_val)) * (_modulation_lower_carrier__current_phase / tunable_params._modulation_lower_carrier__duty_cycle));
    } else {
        _modulation_lower_carrier__out = tunable_params._modulation_lower_carrier__max_val - (((tunable_params._modulation_lower_carrier__max_val) - (tunable_params._modulation_lower_carrier__min_val)) * ((_modulation_lower_carrier__current_phase - tunable_params._modulation_lower_carrier__duty_cycle) / (1.0f - tunable_params._modulation_lower_carrier__duty_cycle)));
    }
    // Generated from the component: Modulation.Rate Transition1.Output
    _modulation_rate_transition1_output__out = _modulation_rate_transition1_output__state;
    // Generated from the component: Modulation.Rate Transition2.Output
    _modulation_rate_transition2_output__out = _modulation_rate_transition2_output__state;
    // Generated from the component: Modulation.Rate Transition3.Output
    _modulation_rate_transition3_output__out = _modulation_rate_transition3_output__state;
    // Generated from the component: Modulation.Upper_Carrier
    if (_modulation_upper_carrier__current_phase < tunable_params._modulation_upper_carrier__duty_cycle) {
        _modulation_upper_carrier__out = tunable_params._modulation_upper_carrier__min_val + (((tunable_params._modulation_upper_carrier__max_val) - (tunable_params._modulation_upper_carrier__min_val)) * (_modulation_upper_carrier__current_phase / tunable_params._modulation_upper_carrier__duty_cycle));
    } else {
        _modulation_upper_carrier__out = tunable_params._modulation_upper_carrier__max_val - (((tunable_params._modulation_upper_carrier__max_val) - (tunable_params._modulation_upper_carrier__min_val)) * ((_modulation_upper_carrier__current_phase - tunable_params._modulation_upper_carrier__duty_cycle) / (1.0f - tunable_params._modulation_upper_carrier__duty_cycle)));
    }
    // Generated from the component: VSC1-FMeter.IA.Ia1
    _vsc1_fmeter_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x223));
    // Generated from the component: VSC1-FMeter.IB.Ia1
    _vsc1_fmeter_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x224));
    // Generated from the component: VSC1-FMeter.IC.Ia1
    _vsc1_fmeter_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x225));
    // Generated from the component: VSC1-FMeter.PLL.LPF.LPF
    X_UnInt32 _vsc1_fmeter_pll_lpf_lpf__i;
    _vsc1_fmeter_pll_lpf_lpf__a_sum = 0.0f;
    _vsc1_fmeter_pll_lpf_lpf__b_sum = 0.0f;
    _vsc1_fmeter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_vsc1_fmeter_pll_lpf_lpf__i = 0; _vsc1_fmeter_pll_lpf_lpf__i < 2; _vsc1_fmeter_pll_lpf_lpf__i++) {
        _vsc1_fmeter_pll_lpf_lpf__b_sum += _vsc1_fmeter_pll_lpf_lpf__b_coeff[_vsc1_fmeter_pll_lpf_lpf__i] * _vsc1_fmeter_pll_lpf_lpf__states[_vsc1_fmeter_pll_lpf_lpf__i + 0];
    }
    _vsc1_fmeter_pll_lpf_lpf__out = _vsc1_fmeter_pll_lpf_lpf__b_sum;
    // Generated from the component: VSC1-FMeter.PLL.PID.Integrator1
    _vsc1_fmeter_pll_pid_integrator1__out = _vsc1_fmeter_pll_pid_integrator1__state;
    // Generated from the component: VSC1-FMeter.PLL.PID.Integrator2
    _vsc1_fmeter_pll_pid_integrator2__out = _vsc1_fmeter_pll_pid_integrator2__state;
    // Generated from the component: VSC1-FMeter.PLL.Unit Delay1
    _vsc1_fmeter_pll_unit_delay1__out = _vsc1_fmeter_pll_unit_delay1__state;
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.LPF_d
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_filtered_value = _vsc1_fmeter_pll_abc_to_dq_lpf_d__filtered_value;
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__filtered_value = _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 1e-06) + _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 1e-06 );
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__out = _vsc1_fmeter_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.LPF_q
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_filtered_value = _vsc1_fmeter_pll_abc_to_dq_lpf_q__filtered_value;
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__filtered_value = _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 1e-06) + _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 1e-06 );
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__out = _vsc1_fmeter_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: VSC1-FMeter.VAB.Va1
    _vsc1_fmeter_vab_va1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: VSC1-FMeter.VAn.Va1
    _vsc1_fmeter_van_va1__out = (HIL_InFloat(0xc80000 + 0x20f));
    // Generated from the component: VSC1-FMeter.VBC.Va1
    _vsc1_fmeter_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x210));
    // Generated from the component: VSC1-FMeter.VBn.Va1
    _vsc1_fmeter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: VSC1-FMeter.VCA.Va1
    _vsc1_fmeter_vca_va1__out = (HIL_InFloat(0xc80000 + 0x212));
    // Generated from the component: VSC1-FMeter.VCn.Va1
    _vsc1_fmeter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x213));
    // Generated from the component: VSC1-Meter.IA.Ia1
    _vsc1_meter_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x226));
    // Generated from the component: VSC1-Meter.IB.Ia1
    _vsc1_meter_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x227));
    // Generated from the component: VSC1-Meter.IC.Ia1
    _vsc1_meter_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x228));
    // Generated from the component: VSC1-Meter.VAB.Va1
    _vsc1_meter_vab_va1__out = (HIL_InFloat(0xc80000 + 0x214));
    // Generated from the component: VSC1-Meter.VAn.Va1
    _vsc1_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x215));
    // Generated from the component: VSC1-Meter.VBC.Va1
    _vsc1_meter_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x216));
    // Generated from the component: VSC1-Meter.VBn.Va1
    _vsc1_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x217));
    // Generated from the component: VSC1-Meter.VCA.Va1
    _vsc1_meter_vca_va1__out = (HIL_InFloat(0xc80000 + 0x218));
    // Generated from the component: VSC1-Meter.VCn.Va1
    _vsc1_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x219));
    // Generated from the component: Modulation.Gain2
    _modulation_gain2__out = 1000.0 * _modulation_lower_carrier__out;
    // Generated from the component: Modulation.Gain1
    _modulation_gain1__out = 1000.0 * _modulation_upper_carrier__out;
    // Generated from the component: VSC1-FMeter.PLL.to_Hz
    _vsc1_fmeter_pll_to_hz__out = 0.15915494309189535 * _vsc1_fmeter_pll_lpf_lpf__out;
    // Generated from the component: VSC1-FMeter.PLL.sin
    _vsc1_fmeter_pll_sin__out = sin(_vsc1_fmeter_pll_unit_delay1__out);
    // Generated from the component: VSC1-FMeter.TRMwt
    // Generated from the component: VSC1-FMeter.TRMd
    // Generated from the component: VSC1-FMeter.PLL.normalize
    _vsc1_fmeter_pll_normalize__in1 = _vsc1_fmeter_pll_abc_to_dq_lpf_d__out;
    _vsc1_fmeter_pll_normalize__in2 = _vsc1_fmeter_pll_abc_to_dq_lpf_q__out;
    {
        _vsc1_fmeter_pll_normalize__pk = ( powf ( _vsc1_fmeter_pll_normalize__in1 , 2.0 ) + powf ( _vsc1_fmeter_pll_normalize__in2 , 2.0 ) ) ;
        _vsc1_fmeter_pll_normalize__pk = sqrt ( _vsc1_fmeter_pll_normalize__pk ) ;
        if ( _vsc1_fmeter_pll_normalize__pk < 0.1 )     {
            _vsc1_fmeter_pll_normalize__in2_pu = _vsc1_fmeter_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _vsc1_fmeter_pll_normalize__in2_pu = _vsc1_fmeter_pll_normalize__in2 / _vsc1_fmeter_pll_normalize__pk ;
        }
    }
    // Generated from the component: VSC1-FMeter.TRMq
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.abc to alpha beta
    _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _vsc1_fmeter_van_va1__out - _vsc1_fmeter_vbn_va1__out - _vsc1_fmeter_vcn_va1__out) * 0.3333333333333333;
    _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_vsc1_fmeter_vbn_va1__out - _vsc1_fmeter_vcn_va1__out) * 0.5773502691896258;
    _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_vsc1_fmeter_van_va1__out + _vsc1_fmeter_vbn_va1__out + _vsc1_fmeter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: VSC1-FMeter.Power Meter
    _vsc1_fmeter_power_meter__v_alpha = SQRT_2OVER3 * ( _vsc1_fmeter_van_va1__out - 0.5f * _vsc1_fmeter_vbn_va1__out - 0.5f * _vsc1_fmeter_vcn_va1__out);
    _vsc1_fmeter_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vsc1_fmeter_vbn_va1__out - SQRT3_OVER_2 * _vsc1_fmeter_vcn_va1__out);
    _vsc1_fmeter_power_meter__i_alpha = SQRT_2OVER3 * ( _vsc1_fmeter_ia_ia1__out - 0.5f * _vsc1_fmeter_ib_ia1__out - 0.5f * _vsc1_fmeter_ic_ia1__out);
    _vsc1_fmeter_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vsc1_fmeter_ib_ia1__out - SQRT3_OVER_2 * _vsc1_fmeter_ic_ia1__out);
    _vsc1_fmeter_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_vsc1_fmeter_van_va1__out + _vsc1_fmeter_vbn_va1__out + _vsc1_fmeter_vcn_va1__out);
    _vsc1_fmeter_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_vsc1_fmeter_ia_ia1__out + _vsc1_fmeter_ib_ia1__out + _vsc1_fmeter_ic_ia1__out);
    _vsc1_fmeter_power_meter__Pac = _vsc1_fmeter_power_meter__v_alpha * _vsc1_fmeter_power_meter__i_alpha + _vsc1_fmeter_power_meter__v_beta * _vsc1_fmeter_power_meter__i_beta;
    _vsc1_fmeter_power_meter__Qac = _vsc1_fmeter_power_meter__v_beta * _vsc1_fmeter_power_meter__i_alpha - _vsc1_fmeter_power_meter__v_alpha * _vsc1_fmeter_power_meter__i_beta;
    _vsc1_fmeter_power_meter__P0ac = _vsc1_fmeter_power_meter__v_zero * _vsc1_fmeter_power_meter__i_zero;
    _vsc1_fmeter_power_meter__filter_1_output = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__Pac + _vsc1_fmeter_power_meter__filter_1_input_k_minus_1) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_1_output_k_minus_1;
    _vsc1_fmeter_power_meter__filter_1_outputQ = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__Qac + _vsc1_fmeter_power_meter__filter_1_input_k_minus_1Q) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_1_output_k_minus_1Q;
    _vsc1_fmeter_power_meter__filter_1_outputP0 = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__P0ac + _vsc1_fmeter_power_meter__filter_1_input_k_minus_1P0) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_1_output_k_minus_1P0;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1 = _vsc1_fmeter_power_meter__Pac;
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1 = _vsc1_fmeter_power_meter__filter_1_output;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1Q = _vsc1_fmeter_power_meter__Qac;;
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1Q = _vsc1_fmeter_power_meter__filter_1_outputQ;
    _vsc1_fmeter_power_meter__filter_1_input_k_minus_1P0 = _vsc1_fmeter_power_meter__P0ac;
    _vsc1_fmeter_power_meter__filter_1_output_k_minus_1P0 = _vsc1_fmeter_power_meter__filter_1_outputP0;
    _vsc1_fmeter_power_meter__filter_2_output = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__filter_1_output + _vsc1_fmeter_power_meter__filter_2_input_k_minus_1) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_2_output_k_minus_1;
    _vsc1_fmeter_power_meter__filter_2_outputQ = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__Qac + _vsc1_fmeter_power_meter__filter_2_input_k_minus_1Q) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_2_output_k_minus_1Q;
    _vsc1_fmeter_power_meter__filter_2_outputP0 = 9.423889780082336e-05 * (_vsc1_fmeter_power_meter__filter_1_outputP0 + _vsc1_fmeter_power_meter__filter_2_input_k_minus_1P0) - (-0.9998115222043984) * _vsc1_fmeter_power_meter__filter_2_output_k_minus_1P0;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1 = _vsc1_fmeter_power_meter__filter_1_output;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1 = _vsc1_fmeter_power_meter__filter_2_output;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1Q = _vsc1_fmeter_power_meter__Qac;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1Q = _vsc1_fmeter_power_meter__filter_2_outputQ;
    _vsc1_fmeter_power_meter__filter_2_input_k_minus_1P0 = _vsc1_fmeter_power_meter__filter_1_outputP0;
    _vsc1_fmeter_power_meter__filter_2_output_k_minus_1P0 = _vsc1_fmeter_power_meter__filter_2_outputP0;
    _vsc1_fmeter_power_meter__Pdc = _vsc1_fmeter_power_meter__filter_2_output;
    _vsc1_fmeter_power_meter__Qdc = _vsc1_fmeter_power_meter__filter_2_outputQ;
    _vsc1_fmeter_power_meter__P0dc = _vsc1_fmeter_power_meter__filter_2_outputP0;
    _vsc1_fmeter_power_meter__apparent = sqrt(pow(_vsc1_fmeter_power_meter__Pdc, 2) + pow(_vsc1_fmeter_power_meter__Qdc, 2));
    if (_vsc1_fmeter_power_meter__apparent > 0)
        _vsc1_fmeter_power_meter__k_factor = _vsc1_fmeter_power_meter__Pdc / _vsc1_fmeter_power_meter__apparent;
    else
        _vsc1_fmeter_power_meter__k_factor = 0;
    // Generated from the component: VSC1-FMeter.IN
    // Generated from the component: VSC1-FMeter.IN_RMS
    // Generated from the component: VSC1-FMeter.I_RMS
    // Generated from the component: VSC1-FMeter.POWER_PA
    // Generated from the component: VSC1-FMeter.POWER_PB
    // Generated from the component: VSC1-FMeter.POWER_PC
    // Generated from the component: VSC1-FMeter.POWER_PFA
    // Generated from the component: VSC1-FMeter.POWER_PFB
    // Generated from the component: VSC1-FMeter.POWER_PFC
    // Generated from the component: VSC1-FMeter.POWER_QA
    // Generated from the component: VSC1-FMeter.POWER_QB
    // Generated from the component: VSC1-FMeter.POWER_QC
    // Generated from the component: VSC1-FMeter.POWER_SA
    // Generated from the component: VSC1-FMeter.POWER_SB
    // Generated from the component: VSC1-FMeter.POWER_SC
    // Generated from the component: VSC1-FMeter.VLL_RMS
    // Generated from the component: VSC1-FMeter.VLn_RMS
    // Generated from the component: VSC1-FMeter.VN
    // Generated from the component: VSC1-FMeter.VN_RMS
    // Generated from the component: VSC1-FMeter.extra_output_bus
    _vsc1_fmeter_extra_output_bus__out[0] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[1] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[2] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[3] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[4] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[5] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[6] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[7] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[8] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[9] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[10] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_extra_output_bus__out[11] = _vsc1_fmeter_zero__out;
    // Generated from the component: VSC1-Meter.Freq
    // Generated from the component: VSC1-Meter.IA_RMS
    // Generated from the component: VSC1-Meter.IB_RMS
    // Generated from the component: VSC1-Meter.IC_RMS
    // Generated from the component: VSC1-Meter.IN
    // Generated from the component: VSC1-Meter.IN_RMS
    // Generated from the component: VSC1-Meter.I_RMS
    // Generated from the component: VSC1-Meter.POWER_P
    // Generated from the component: VSC1-Meter.POWER_PA
    // Generated from the component: VSC1-Meter.POWER_PB
    // Generated from the component: VSC1-Meter.POWER_PC
    // Generated from the component: VSC1-Meter.POWER_PF
    // Generated from the component: VSC1-Meter.POWER_PFA
    // Generated from the component: VSC1-Meter.POWER_PFB
    // Generated from the component: VSC1-Meter.POWER_PFC
    // Generated from the component: VSC1-Meter.POWER_Q
    // Generated from the component: VSC1-Meter.POWER_QA
    // Generated from the component: VSC1-Meter.POWER_QB
    // Generated from the component: VSC1-Meter.POWER_QC
    // Generated from the component: VSC1-Meter.POWER_S
    // Generated from the component: VSC1-Meter.POWER_SA
    // Generated from the component: VSC1-Meter.POWER_SB
    // Generated from the component: VSC1-Meter.POWER_SC
    // Generated from the component: VSC1-Meter.VAB_RMS
    // Generated from the component: VSC1-Meter.VAn_RMS
    // Generated from the component: VSC1-Meter.VBC_RMS
    // Generated from the component: VSC1-Meter.VBn_RMS
    // Generated from the component: VSC1-Meter.VCA_RMS
    // Generated from the component: VSC1-Meter.VCn_RMS
    // Generated from the component: VSC1-Meter.VLL_RMS
    // Generated from the component: VSC1-Meter.VLn_RMS
    // Generated from the component: VSC1-Meter.VN
    // Generated from the component: VSC1-Meter.VN_RMS
    // Generated from the component: VSC1-Meter.extra_output_bus
    _vsc1_meter_extra_output_bus__out[0] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[1] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[2] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[3] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[4] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[5] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[6] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[7] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[8] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[9] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[10] = _vsc1_meter_zero__out;
    _vsc1_meter_extra_output_bus__out[11] = _vsc1_meter_zero__out;
    // Generated from the component: VSC1-Meter.output_bus
    _vsc1_meter_output_bus__out[0] = _vsc1_meter_van_va1__out;
    _vsc1_meter_output_bus__out[1] = _vsc1_meter_vbn_va1__out;
    _vsc1_meter_output_bus__out[2] = _vsc1_meter_vcn_va1__out;
    _vsc1_meter_output_bus__out[3] = _vsc1_meter_vab_va1__out;
    _vsc1_meter_output_bus__out[4] = _vsc1_meter_vbc_va1__out;
    _vsc1_meter_output_bus__out[5] = _vsc1_meter_vca_va1__out;
    _vsc1_meter_output_bus__out[6] = _vsc1_meter_ia_ia1__out;
    _vsc1_meter_output_bus__out[7] = _vsc1_meter_ib_ia1__out;
    _vsc1_meter_output_bus__out[8] = _vsc1_meter_ic_ia1__out;
    _vsc1_meter_output_bus__out[9] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[10] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[11] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[12] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[13] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[14] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[15] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[16] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[17] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[18] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[19] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[20] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[21] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[22] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[23] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[24] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[25] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[26] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[27] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[28] = _vsc1_meter_zero__out;
    _vsc1_meter_output_bus__out[29] = _vsc1_meter_zero__out;
    // Generated from the component: Modulation.LC
    HIL_OutAO(0x4015, (float)_modulation_gain2__out);
    // Generated from the component: Modulation.Comparator
    _modulation_comparator__IN_LOWER_CARRIER = _modulation_gain2__out;
    _modulation_comparator__IN_UPPER_CARRIER = _modulation_gain1__out;
    _modulation_comparator__IN_VA = _modulation_rate_transition1_output__out;
    _modulation_comparator__IN_VB = _modulation_rate_transition2_output__out;
    _modulation_comparator__IN_VC = _modulation_rate_transition3_output__out;
    {
        _modulation_comparator__va = _modulation_comparator__IN_VA ;
        _modulation_comparator__vb = _modulation_comparator__IN_VB ;
        _modulation_comparator__vc = _modulation_comparator__IN_VC ;
        if ( _modulation_comparator__va > _modulation_comparator__IN_UPPER_CARRIER )     {
            _modulation_comparator__OUT_G_S1A = 1 ;
            _modulation_comparator__OUT_G_S3A = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S1A = 0 ;
            _modulation_comparator__OUT_G_S3A = 1 ;
        }
        if ( _modulation_comparator__va > _modulation_comparator__IN_LOWER_CARRIER )     {
            _modulation_comparator__OUT_G_S2A = 1 ;
            _modulation_comparator__OUT_G_S4A = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S2A = 0 ;
            _modulation_comparator__OUT_G_S4A = 1 ;
        }
        if ( _modulation_comparator__vb > _modulation_comparator__IN_UPPER_CARRIER )     {
            _modulation_comparator__OUT_G_S1B = 1 ;
            _modulation_comparator__OUT_G_S3B = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S1B = 0 ;
            _modulation_comparator__OUT_G_S3B = 1 ;
        }
        if ( _modulation_comparator__vb > _modulation_comparator__IN_LOWER_CARRIER )     {
            _modulation_comparator__OUT_G_S2B = 1 ;
            _modulation_comparator__OUT_G_S4B = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S2B = 0 ;
            _modulation_comparator__OUT_G_S4B = 1 ;
        }
        if ( _modulation_comparator__vc > _modulation_comparator__IN_UPPER_CARRIER )     {
            _modulation_comparator__OUT_G_S1C = 1 ;
            _modulation_comparator__OUT_G_S3C = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S1C = 0 ;
            _modulation_comparator__OUT_G_S3C = 1 ;
        }
        if ( _modulation_comparator__vc > _modulation_comparator__IN_LOWER_CARRIER )     {
            _modulation_comparator__OUT_G_S2C = 1 ;
            _modulation_comparator__OUT_G_S4C = 0 ;
        }
        else     {
            _modulation_comparator__OUT_G_S2C = 0 ;
            _modulation_comparator__OUT_G_S4C = 1 ;
        }
    }
    // Generated from the component: Modulation.UC
    HIL_OutAO(0x4016, (float)_modulation_gain1__out);
    // Generated from the component: VSC1-FMeter.Freq
    HIL_OutAO(0x401f, (float)_vsc1_fmeter_pll_to_hz__out);
    // Generated from the component: VSC1-FMeter.measSM.mode_and_dFract
    _vsc1_fmeter_meassm_mode_and_dfract__Freq = _vsc1_fmeter_pll_to_hz__out;
    {
        _vsc1_fmeter_meassm_mode_and_dfract__freqAbs = fabs ( _vsc1_fmeter_meassm_mode_and_dfract__Freq ) ;
        if ( _vsc1_fmeter_meassm_mode_and_dfract__reset == 1 )     {
            _vsc1_fmeter_meassm_mode_and_dfract__mode = 1 ;
            _vsc1_fmeter_meassm_mode_and_dfract__Tfract = 0.0 ;
            _vsc1_fmeter_meassm_mode_and_dfract__cycle_counter = 0 ;
            _vsc1_fmeter_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _vsc1_fmeter_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _vsc1_fmeter_meassm_mode_and_dfract__mode = 2 ;
            if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _vsc1_fmeter_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _vsc1_fmeter_meassm_mode_and_dfract__freqAbs < _vsc1_fmeter_meassm_mode_and_dfract__fMax ) )     {
            _vsc1_fmeter_meassm_mode_and_dfract__dFract_state = 1e-06 * _vsc1_fmeter_meassm_mode_and_dfract__freqAbs ;
            _vsc1_fmeter_meassm_mode_and_dfract__Tfract += _vsc1_fmeter_meassm_mode_and_dfract__dFract_state ;
            if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _vsc1_fmeter_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _vsc1_fmeter_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _vsc1_fmeter_meassm_mode_and_dfract__dFract_state = 1.0 - ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract - _vsc1_fmeter_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _vsc1_fmeter_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _vsc1_fmeter_meassm_mode_and_dfract__dFract_state /= 1 ;
            _vsc1_fmeter_meassm_mode_and_dfract__mode = 3 ;
            if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _vsc1_fmeter_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _vsc1_fmeter_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _vsc1_fmeter_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _vsc1_fmeter_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _vsc1_fmeter_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _vsc1_fmeter_meassm_mode_and_dfract__mode = 4 ;
            _vsc1_fmeter_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _vsc1_fmeter_meassm_mode_and_dfract__mode = 5 ;
            _vsc1_fmeter_meassm_mode_and_dfract__reset = 1 ;
        }
        _vsc1_fmeter_meassm_mode_and_dfract__dFract = _vsc1_fmeter_meassm_mode_and_dfract__dFract_state ;
        _vsc1_fmeter_meassm_mode_and_dfract__submode = _vsc1_fmeter_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: VSC1-FMeter.TRMsin
    // Generated from the component: VSC1-FMeter.PLL.PID.Kd
    _vsc1_fmeter_pll_pid_kd__out = 1.0 * _vsc1_fmeter_pll_normalize__in2_pu;
    // Generated from the component: VSC1-FMeter.PLL.PID.Ki
    _vsc1_fmeter_pll_pid_ki__out = 3200.0 * _vsc1_fmeter_pll_normalize__in2_pu;
    // Generated from the component: VSC1-FMeter.PLL.PID.Kp
    _vsc1_fmeter_pll_pid_kp__out = 100.0 * _vsc1_fmeter_pll_normalize__in2_pu;
    // Generated from the component: VSC1-FMeter.PLL.term_pk
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.alpha beta to dq
    _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_vsc1_fmeter_pll_unit_delay1__out);
    _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_vsc1_fmeter_pll_unit_delay1__out);
    _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__d = _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__q = _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _vsc1_fmeter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: VSC1-FMeter.TRMz
    // Generated from the component: VSC1-FMeter.POWER_P
    HIL_OutAO(0x4023, (float)_vsc1_fmeter_power_meter__Pdc);
    // Generated from the component: VSC1-FMeter.POWER_PF
    HIL_OutAO(0x4024, (float)_vsc1_fmeter_power_meter__k_factor);
    // Generated from the component: VSC1-FMeter.POWER_Q
    HIL_OutAO(0x4025, (float)_vsc1_fmeter_power_meter__Qdc);
    // Generated from the component: VSC1-FMeter.POWER_S
    HIL_OutAO(0x4026, (float)_vsc1_fmeter_power_meter__apparent);
    // Generated from the component: VSC1-FMeter.extra_out
    // Generated from the component: VSC1-Meter.extra_out
    // Generated from the component: VSC1-Meter.Out
    // Generated from the component: Modulation.Bus Join1
    _modulation_bus_join1__out[0] = _modulation_comparator__OUT_G_S1A;
    _modulation_bus_join1__out[1] = _modulation_comparator__OUT_G_S2A;
    _modulation_bus_join1__out[2] = _modulation_comparator__OUT_G_S3A;
    _modulation_bus_join1__out[3] = _modulation_comparator__OUT_G_S4A;
    _modulation_bus_join1__out[4] = _modulation_comparator__OUT_G_S1B;
    _modulation_bus_join1__out[5] = _modulation_comparator__OUT_G_S2B;
    _modulation_bus_join1__out[6] = _modulation_comparator__OUT_G_S3B;
    _modulation_bus_join1__out[7] = _modulation_comparator__OUT_G_S4B;
    _modulation_bus_join1__out[8] = _modulation_comparator__OUT_G_S1C;
    _modulation_bus_join1__out[9] = _modulation_comparator__OUT_G_S2C;
    _modulation_bus_join1__out[10] = _modulation_comparator__OUT_G_S3C;
    _modulation_bus_join1__out[11] = _modulation_comparator__OUT_G_S4C;
    // Generated from the component: VSC1-FMeter.I_RMS_calc.RMS
    _vsc1_fmeter_i_rms_calc_rms__IN1 = _vsc1_fmeter_ia_ia1__out;
    _vsc1_fmeter_i_rms_calc_rms__IN2 = _vsc1_fmeter_ib_ia1__out;
    _vsc1_fmeter_i_rms_calc_rms__IN3 = _vsc1_fmeter_ic_ia1__out;
    _vsc1_fmeter_i_rms_calc_rms__dFract = _vsc1_fmeter_meassm_mode_and_dfract__dFract;
    _vsc1_fmeter_i_rms_calc_rms__mode = _vsc1_fmeter_meassm_mode_and_dfract__mode;
    {
        switch ( _vsc1_fmeter_i_rms_calc_rms__mode )     {
        case 1 :
            _vsc1_fmeter_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _vsc1_fmeter_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _vsc1_fmeter_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _vsc1_fmeter_i_rms_calc_rms__RMS1_state = _vsc1_fmeter_i_rms_calc_rms__IN1 ;
            _vsc1_fmeter_i_rms_calc_rms__RMS2_state = _vsc1_fmeter_i_rms_calc_rms__IN2 ;
            _vsc1_fmeter_i_rms_calc_rms__RMS3_state = _vsc1_fmeter_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _vsc1_fmeter_i_rms_calc_rms__rmsSum1 += _vsc1_fmeter_i_rms_calc_rms__dFract * ( _vsc1_fmeter_i_rms_calc_rms__IN1 * _vsc1_fmeter_i_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_i_rms_calc_rms__rmsSum2 += _vsc1_fmeter_i_rms_calc_rms__dFract * ( _vsc1_fmeter_i_rms_calc_rms__IN2 * _vsc1_fmeter_i_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_i_rms_calc_rms__rmsSum3 += _vsc1_fmeter_i_rms_calc_rms__dFract * ( _vsc1_fmeter_i_rms_calc_rms__IN3 * _vsc1_fmeter_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _vsc1_fmeter_i_rms_calc_rms__RMS1_state = sqrt ( _vsc1_fmeter_i_rms_calc_rms__rmsSum1 ) ;
            _vsc1_fmeter_i_rms_calc_rms__RMS2_state = sqrt ( _vsc1_fmeter_i_rms_calc_rms__rmsSum2 ) ;
            _vsc1_fmeter_i_rms_calc_rms__RMS3_state = sqrt ( _vsc1_fmeter_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _vsc1_fmeter_i_rms_calc_rms__RMS1_state = fabs ( _vsc1_fmeter_i_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_i_rms_calc_rms__RMS2_state = fabs ( _vsc1_fmeter_i_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_i_rms_calc_rms__RMS3_state = fabs ( _vsc1_fmeter_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _vsc1_fmeter_i_rms_calc_rms__RMS1 = _vsc1_fmeter_i_rms_calc_rms__RMS1_state ;
        _vsc1_fmeter_i_rms_calc_rms__RMS2 = _vsc1_fmeter_i_rms_calc_rms__RMS2_state ;
        _vsc1_fmeter_i_rms_calc_rms__RMS3 = _vsc1_fmeter_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: VSC1-FMeter.VLL_RMS_calc.RMS
    _vsc1_fmeter_vll_rms_calc_rms__IN1 = _vsc1_fmeter_vab_va1__out;
    _vsc1_fmeter_vll_rms_calc_rms__IN2 = _vsc1_fmeter_vbc_va1__out;
    _vsc1_fmeter_vll_rms_calc_rms__IN3 = _vsc1_fmeter_vca_va1__out;
    _vsc1_fmeter_vll_rms_calc_rms__dFract = _vsc1_fmeter_meassm_mode_and_dfract__dFract;
    _vsc1_fmeter_vll_rms_calc_rms__mode = _vsc1_fmeter_meassm_mode_and_dfract__mode;
    {
        switch ( _vsc1_fmeter_vll_rms_calc_rms__mode )     {
        case 1 :
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _vsc1_fmeter_vll_rms_calc_rms__RMS1_state = _vsc1_fmeter_vll_rms_calc_rms__IN1 ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS2_state = _vsc1_fmeter_vll_rms_calc_rms__IN2 ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS3_state = _vsc1_fmeter_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum1 += _vsc1_fmeter_vll_rms_calc_rms__dFract * ( _vsc1_fmeter_vll_rms_calc_rms__IN1 * _vsc1_fmeter_vll_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum2 += _vsc1_fmeter_vll_rms_calc_rms__dFract * ( _vsc1_fmeter_vll_rms_calc_rms__IN2 * _vsc1_fmeter_vll_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__rmsSum3 += _vsc1_fmeter_vll_rms_calc_rms__dFract * ( _vsc1_fmeter_vll_rms_calc_rms__IN3 * _vsc1_fmeter_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _vsc1_fmeter_vll_rms_calc_rms__RMS1_state = sqrt ( _vsc1_fmeter_vll_rms_calc_rms__rmsSum1 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS2_state = sqrt ( _vsc1_fmeter_vll_rms_calc_rms__rmsSum2 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS3_state = sqrt ( _vsc1_fmeter_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _vsc1_fmeter_vll_rms_calc_rms__RMS1_state = fabs ( _vsc1_fmeter_vll_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS2_state = fabs ( _vsc1_fmeter_vll_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_vll_rms_calc_rms__RMS3_state = fabs ( _vsc1_fmeter_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _vsc1_fmeter_vll_rms_calc_rms__RMS1 = _vsc1_fmeter_vll_rms_calc_rms__RMS1_state ;
        _vsc1_fmeter_vll_rms_calc_rms__RMS2 = _vsc1_fmeter_vll_rms_calc_rms__RMS2_state ;
        _vsc1_fmeter_vll_rms_calc_rms__RMS3 = _vsc1_fmeter_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: VSC1-FMeter.VLn_RMS_calc.RMS
    _vsc1_fmeter_vln_rms_calc_rms__IN1 = _vsc1_fmeter_van_va1__out;
    _vsc1_fmeter_vln_rms_calc_rms__IN2 = _vsc1_fmeter_vbn_va1__out;
    _vsc1_fmeter_vln_rms_calc_rms__IN3 = _vsc1_fmeter_vcn_va1__out;
    _vsc1_fmeter_vln_rms_calc_rms__dFract = _vsc1_fmeter_meassm_mode_and_dfract__dFract;
    _vsc1_fmeter_vln_rms_calc_rms__mode = _vsc1_fmeter_meassm_mode_and_dfract__mode;
    {
        switch ( _vsc1_fmeter_vln_rms_calc_rms__mode )     {
        case 1 :
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _vsc1_fmeter_vln_rms_calc_rms__RMS1_state = _vsc1_fmeter_vln_rms_calc_rms__IN1 ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS2_state = _vsc1_fmeter_vln_rms_calc_rms__IN2 ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS3_state = _vsc1_fmeter_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum1 += _vsc1_fmeter_vln_rms_calc_rms__dFract * ( _vsc1_fmeter_vln_rms_calc_rms__IN1 * _vsc1_fmeter_vln_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum2 += _vsc1_fmeter_vln_rms_calc_rms__dFract * ( _vsc1_fmeter_vln_rms_calc_rms__IN2 * _vsc1_fmeter_vln_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__rmsSum3 += _vsc1_fmeter_vln_rms_calc_rms__dFract * ( _vsc1_fmeter_vln_rms_calc_rms__IN3 * _vsc1_fmeter_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _vsc1_fmeter_vln_rms_calc_rms__RMS1_state = sqrt ( _vsc1_fmeter_vln_rms_calc_rms__rmsSum1 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS2_state = sqrt ( _vsc1_fmeter_vln_rms_calc_rms__rmsSum2 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS3_state = sqrt ( _vsc1_fmeter_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _vsc1_fmeter_vln_rms_calc_rms__RMS1_state = fabs ( _vsc1_fmeter_vln_rms_calc_rms__IN1 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS2_state = fabs ( _vsc1_fmeter_vln_rms_calc_rms__IN2 ) ;
            _vsc1_fmeter_vln_rms_calc_rms__RMS3_state = fabs ( _vsc1_fmeter_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _vsc1_fmeter_vln_rms_calc_rms__RMS1 = _vsc1_fmeter_vln_rms_calc_rms__RMS1_state ;
        _vsc1_fmeter_vln_rms_calc_rms__RMS2 = _vsc1_fmeter_vln_rms_calc_rms__RMS2_state ;
        _vsc1_fmeter_vln_rms_calc_rms__RMS3 = _vsc1_fmeter_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: VSC1-FMeter.termSubMode
    // Generated from the component: VSC1-FMeter.PLL.PID.Sum8
    _vsc1_fmeter_pll_pid_sum8__out = _vsc1_fmeter_pll_pid_kd__out - _vsc1_fmeter_pll_pid_integrator2__out;
    // Generated from the component: Three Phase NPC Inverter1.Bus_Split1
    _three_phase_npc_inverter1_bus_split1__out[0] = _modulation_bus_join1__out[0];
    _three_phase_npc_inverter1_bus_split1__out[1] = _modulation_bus_join1__out[1];
    _three_phase_npc_inverter1_bus_split1__out[2] = _modulation_bus_join1__out[2];
    _three_phase_npc_inverter1_bus_split1__out[3] = _modulation_bus_join1__out[3];
    _three_phase_npc_inverter1_bus_split1__out1[0] = _modulation_bus_join1__out[4];
    _three_phase_npc_inverter1_bus_split1__out1[1] = _modulation_bus_join1__out[5];
    _three_phase_npc_inverter1_bus_split1__out1[2] = _modulation_bus_join1__out[6];
    _three_phase_npc_inverter1_bus_split1__out1[3] = _modulation_bus_join1__out[7];
    _three_phase_npc_inverter1_bus_split1__out2[0] = _modulation_bus_join1__out[8];
    _three_phase_npc_inverter1_bus_split1__out2[1] = _modulation_bus_join1__out[9];
    _three_phase_npc_inverter1_bus_split1__out2[2] = _modulation_bus_join1__out[10];
    _three_phase_npc_inverter1_bus_split1__out2[3] = _modulation_bus_join1__out[11];
    // Generated from the component: VSC1-FMeter.IA_RMS
    HIL_OutAO(0x4020, (float)_vsc1_fmeter_i_rms_calc_rms__RMS1);
    // Generated from the component: VSC1-FMeter.IB_RMS
    HIL_OutAO(0x4021, (float)_vsc1_fmeter_i_rms_calc_rms__RMS2);
    // Generated from the component: VSC1-FMeter.IC_RMS
    HIL_OutAO(0x4022, (float)_vsc1_fmeter_i_rms_calc_rms__RMS3);
    // Generated from the component: VSC1-FMeter.VAB_RMS
    HIL_OutAO(0x4027, (float)_vsc1_fmeter_vll_rms_calc_rms__RMS1);
    // Generated from the component: VSC1-FMeter.VBC_RMS
    HIL_OutAO(0x4029, (float)_vsc1_fmeter_vll_rms_calc_rms__RMS2);
    // Generated from the component: VSC1-FMeter.VCA_RMS
    HIL_OutAO(0x402b, (float)_vsc1_fmeter_vll_rms_calc_rms__RMS3);
    // Generated from the component: VSC1-FMeter.VAn_RMS
    HIL_OutAO(0x4028, (float)_vsc1_fmeter_vln_rms_calc_rms__RMS1);
    // Generated from the component: VSC1-FMeter.VBn_RMS
    HIL_OutAO(0x402a, (float)_vsc1_fmeter_vln_rms_calc_rms__RMS2);
    // Generated from the component: VSC1-FMeter.VCn_RMS
    HIL_OutAO(0x402c, (float)_vsc1_fmeter_vln_rms_calc_rms__RMS3);
    // Generated from the component: VSC1-FMeter.output_bus
    _vsc1_fmeter_output_bus__out[0] = _vsc1_fmeter_van_va1__out;
    _vsc1_fmeter_output_bus__out[1] = _vsc1_fmeter_vbn_va1__out;
    _vsc1_fmeter_output_bus__out[2] = _vsc1_fmeter_vcn_va1__out;
    _vsc1_fmeter_output_bus__out[3] = _vsc1_fmeter_vab_va1__out;
    _vsc1_fmeter_output_bus__out[4] = _vsc1_fmeter_vbc_va1__out;
    _vsc1_fmeter_output_bus__out[5] = _vsc1_fmeter_vca_va1__out;
    _vsc1_fmeter_output_bus__out[6] = _vsc1_fmeter_ia_ia1__out;
    _vsc1_fmeter_output_bus__out[7] = _vsc1_fmeter_ib_ia1__out;
    _vsc1_fmeter_output_bus__out[8] = _vsc1_fmeter_ic_ia1__out;
    _vsc1_fmeter_output_bus__out[9] = _vsc1_fmeter_pll_to_hz__out;
    _vsc1_fmeter_output_bus__out[10] = _vsc1_fmeter_vln_rms_calc_rms__RMS1;
    _vsc1_fmeter_output_bus__out[11] = _vsc1_fmeter_vln_rms_calc_rms__RMS2;
    _vsc1_fmeter_output_bus__out[12] = _vsc1_fmeter_vln_rms_calc_rms__RMS3;
    _vsc1_fmeter_output_bus__out[13] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[14] = _vsc1_fmeter_vll_rms_calc_rms__RMS1;
    _vsc1_fmeter_output_bus__out[15] = _vsc1_fmeter_vll_rms_calc_rms__RMS2;
    _vsc1_fmeter_output_bus__out[16] = _vsc1_fmeter_vll_rms_calc_rms__RMS3;
    _vsc1_fmeter_output_bus__out[17] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[18] = _vsc1_fmeter_i_rms_calc_rms__RMS1;
    _vsc1_fmeter_output_bus__out[19] = _vsc1_fmeter_i_rms_calc_rms__RMS2;
    _vsc1_fmeter_output_bus__out[20] = _vsc1_fmeter_i_rms_calc_rms__RMS3;
    _vsc1_fmeter_output_bus__out[21] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[22] = _vsc1_fmeter_power_meter__Pdc;
    _vsc1_fmeter_output_bus__out[23] = _vsc1_fmeter_power_meter__Qdc;
    _vsc1_fmeter_output_bus__out[24] = _vsc1_fmeter_power_meter__apparent;
    _vsc1_fmeter_output_bus__out[25] = _vsc1_fmeter_power_meter__k_factor;
    _vsc1_fmeter_output_bus__out[26] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[27] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[28] = _vsc1_fmeter_zero__out;
    _vsc1_fmeter_output_bus__out[29] = _vsc1_fmeter_zero__out;
    // Generated from the component: VSC1-FMeter.PLL.PID.Gain1
    _vsc1_fmeter_pll_pid_gain1__out = 714.2857 * _vsc1_fmeter_pll_pid_sum8__out;
    // Generated from the component: Three Phase NPC Inverter1.Phase A.FSM_Wrapper1
    _three_phase_npc_inverter1_bus_split1__out[0] = (_three_phase_npc_inverter1_bus_split1__out[0]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out[1] = (_three_phase_npc_inverter1_bus_split1__out[1]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out[2] = (_three_phase_npc_inverter1_bus_split1__out[2]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out[3] = (_three_phase_npc_inverter1_bus_split1__out[3]) ? 1 : 0;
    HIL_OutInt32(0x850002f, 8 * _three_phase_npc_inverter1_bus_split1__out[0] + 4 * _three_phase_npc_inverter1_bus_split1__out[1] + 2 * _three_phase_npc_inverter1_bus_split1__out[2] + 1 * _three_phase_npc_inverter1_bus_split1__out[3]);
    // Generated from the component: Three Phase NPC Inverter1.Phase B.FSM_Wrapper1
    _three_phase_npc_inverter1_bus_split1__out1[0] = (_three_phase_npc_inverter1_bus_split1__out1[0]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out1[1] = (_three_phase_npc_inverter1_bus_split1__out1[1]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out1[2] = (_three_phase_npc_inverter1_bus_split1__out1[2]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out1[3] = (_three_phase_npc_inverter1_bus_split1__out1[3]) ? 1 : 0;
    HIL_OutInt32(0x850004f, 8 * _three_phase_npc_inverter1_bus_split1__out1[0] + 4 * _three_phase_npc_inverter1_bus_split1__out1[1] + 2 * _three_phase_npc_inverter1_bus_split1__out1[2] + 1 * _three_phase_npc_inverter1_bus_split1__out1[3]);
    // Generated from the component: Three Phase NPC Inverter1.Phase C.FSM_Wrapper1
    _three_phase_npc_inverter1_bus_split1__out2[0] = (_three_phase_npc_inverter1_bus_split1__out2[0]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out2[1] = (_three_phase_npc_inverter1_bus_split1__out2[1]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out2[2] = (_three_phase_npc_inverter1_bus_split1__out2[2]) ? 1 : 0;
    _three_phase_npc_inverter1_bus_split1__out2[3] = (_three_phase_npc_inverter1_bus_split1__out2[3]) ? 1 : 0;
    HIL_OutInt32(0x850006f, 8 * _three_phase_npc_inverter1_bus_split1__out2[0] + 4 * _three_phase_npc_inverter1_bus_split1__out2[1] + 2 * _three_phase_npc_inverter1_bus_split1__out2[2] + 1 * _three_phase_npc_inverter1_bus_split1__out2[3]);
    // Generated from the component: VSC1-FMeter.Out
    // Generated from the component: VSC1-FMeter.PLL.PID.Sum5
    _vsc1_fmeter_pll_pid_sum5__out = _vsc1_fmeter_pll_pid_kp__out + _vsc1_fmeter_pll_pid_gain1__out + _vsc1_fmeter_pll_pid_integrator1__out;
    // Generated from the component: VSC1-FMeter.PLL.PID.Limit1
    _vsc1_fmeter_pll_pid_limit1__out = MIN(MAX(_vsc1_fmeter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: VSC1-FMeter.PLL.PID.Sum6
    _vsc1_fmeter_pll_pid_sum6__out =  - _vsc1_fmeter_pll_pid_sum5__out + _vsc1_fmeter_pll_pid_limit1__out;
    // Generated from the component: VSC1-FMeter.PLL.Rate Limiter1
    _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 1e-06;
    _vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 1e-06;
    if (_vsc1_fmeter_pll_rate_limiter1__first_step) {
        _vsc1_fmeter_pll_rate_limiter1__out = _vsc1_fmeter_pll_pid_limit1__out;
        _vsc1_fmeter_pll_rate_limiter1__state = _vsc1_fmeter_pll_pid_limit1__out;
    } else {
        _vsc1_fmeter_pll_rate_limiter1__out = _vsc1_fmeter_pll_pid_limit1__out;
        if (_vsc1_fmeter_pll_pid_limit1__out - _vsc1_fmeter_pll_rate_limiter1__state > _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0])
            _vsc1_fmeter_pll_rate_limiter1__out = _vsc1_fmeter_pll_rate_limiter1__state + (_vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0]);
        if (_vsc1_fmeter_pll_pid_limit1__out - _vsc1_fmeter_pll_rate_limiter1__state < _vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0])
            _vsc1_fmeter_pll_rate_limiter1__out = _vsc1_fmeter_pll_rate_limiter1__state + (_vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: VSC1-FMeter.PLL.integrator
    _vsc1_fmeter_pll_integrator__in = _vsc1_fmeter_pll_pid_limit1__out;
    {
        _vsc1_fmeter_pll_integrator__state += 1e-06 * _vsc1_fmeter_pll_integrator__in ;
        if ( _vsc1_fmeter_pll_integrator__in >= 0.0 )     {
            if ( _vsc1_fmeter_pll_integrator__state >= 6.283185307179586 )         {
                _vsc1_fmeter_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _vsc1_fmeter_pll_integrator__state <= - 6.283185307179586 )         {
                _vsc1_fmeter_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _vsc1_fmeter_pll_integrator__out = _vsc1_fmeter_pll_integrator__state ;
    }
    // Generated from the component: VSC1-FMeter.PLL.PID.Kb
    _vsc1_fmeter_pll_pid_kb__out = 1.0 * _vsc1_fmeter_pll_pid_sum6__out;
    // Generated from the component: VSC1-FMeter.PLL.PID.Sum7
    _vsc1_fmeter_pll_pid_sum7__out = _vsc1_fmeter_pll_pid_ki__out + _vsc1_fmeter_pll_pid_kb__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Modulation.Lower_Carrier
    _modulation_lower_carrier__current_phase += tunable_params._modulation_lower_carrier__frequency * 1e-06;
    if (_modulation_lower_carrier__current_phase >= 1.0f) {
        _modulation_lower_carrier__current_phase -= 1.0f;
    }
    // Generated from the component: Modulation.Upper_Carrier
    _modulation_upper_carrier__current_phase += tunable_params._modulation_upper_carrier__frequency * 1e-06;
    if (_modulation_upper_carrier__current_phase >= 1.0f) {
        _modulation_upper_carrier__current_phase -= 1.0f;
    }
    // Generated from the component: VSC1-FMeter.PLL.LPF.LPF
    for (_vsc1_fmeter_pll_lpf_lpf__i = 1; _vsc1_fmeter_pll_lpf_lpf__i > 0; _vsc1_fmeter_pll_lpf_lpf__i--) {
        _vsc1_fmeter_pll_lpf_lpf__a_sum += _vsc1_fmeter_pll_lpf_lpf__a_coeff[_vsc1_fmeter_pll_lpf_lpf__i + 1] * _vsc1_fmeter_pll_lpf_lpf__states[_vsc1_fmeter_pll_lpf_lpf__i];
    }
    _vsc1_fmeter_pll_lpf_lpf__a_sum += _vsc1_fmeter_pll_lpf_lpf__states[0] * _vsc1_fmeter_pll_lpf_lpf__a_coeff[1];
    _vsc1_fmeter_pll_lpf_lpf__delay_line_in = _vsc1_fmeter_pll_rate_limiter1__out - _vsc1_fmeter_pll_lpf_lpf__a_sum;
    for (_vsc1_fmeter_pll_lpf_lpf__i = 1; _vsc1_fmeter_pll_lpf_lpf__i > 0; _vsc1_fmeter_pll_lpf_lpf__i--) {
        _vsc1_fmeter_pll_lpf_lpf__states[_vsc1_fmeter_pll_lpf_lpf__i] = _vsc1_fmeter_pll_lpf_lpf__states[_vsc1_fmeter_pll_lpf_lpf__i - 1];
    }
    _vsc1_fmeter_pll_lpf_lpf__states[0] = _vsc1_fmeter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: VSC1-FMeter.PLL.PID.Integrator1
    _vsc1_fmeter_pll_pid_integrator1__state += _vsc1_fmeter_pll_pid_sum7__out * 1e-06;
    // Generated from the component: VSC1-FMeter.PLL.PID.Integrator2
    _vsc1_fmeter_pll_pid_integrator2__state += _vsc1_fmeter_pll_pid_gain1__out * 1e-06;
    // Generated from the component: VSC1-FMeter.PLL.Unit Delay1
    _vsc1_fmeter_pll_unit_delay1__state = _vsc1_fmeter_pll_integrator__out;
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.LPF_d
    _vsc1_fmeter_pll_abc_to_dq_lpf_d__previous_in = _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: VSC1-FMeter.PLL.abc to dq.LPF_q
    _vsc1_fmeter_pll_abc_to_dq_lpf_q__previous_in = _vsc1_fmeter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: VSC1-FMeter.PLL.normalize
    // Generated from the component: Modulation.Comparator
    // Generated from the component: VSC1-FMeter.measSM.mode_and_dFract
    // Generated from the component: VSC1-FMeter.I_RMS_calc.RMS
    // Generated from the component: VSC1-FMeter.VLL_RMS_calc.RMS
    // Generated from the component: VSC1-FMeter.VLn_RMS_calc.RMS
    // Generated from the component: VSC1-FMeter.PLL.Rate Limiter1
    _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 1e-06;
    _vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 1e-06;
    if (_vsc1_fmeter_pll_pid_limit1__out - _vsc1_fmeter_pll_rate_limiter1__state > _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0])
        _vsc1_fmeter_pll_rate_limiter1__state += _vsc1_fmeter_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_vsc1_fmeter_pll_pid_limit1__out - _vsc1_fmeter_pll_rate_limiter1__state < _vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0])
        _vsc1_fmeter_pll_rate_limiter1__state += (_vsc1_fmeter_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _vsc1_fmeter_pll_rate_limiter1__state = _vsc1_fmeter_pll_pid_limit1__out;
    _vsc1_fmeter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: VSC1-FMeter.PLL.integrator
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Grid Load.Load.Bal_en
    // Generated from the component: Grid Load.Load.Constant13
    // Generated from the component: Grid Load.Load.Constant14
    // Generated from the component: Grid Load.Load.Phase A.Constant11
    // Generated from the component: Grid Load.Load.Phase A.Constant12
    // Generated from the component: Grid Load.Load.Phase A.Constant3
    // Generated from the component: Grid Load.Load.Phase A.Constant5
    // Generated from the component: Grid Load.Load.Phase A.Constant6
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Constant1
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.const_h
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.const_h
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.const_h
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change.Constant14
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change.Constant15
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change1.Constant14
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change1.Constant15
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Constant2
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.const
    // Generated from the component: Grid Load.Load.Phase A.const_one
    // Generated from the component: Grid Load.Load.Phase A.dimension
    // Generated from the component: Grid Load.Load.Phase A.harmonic_vector
    // Generated from the component: Grid Load.Load.Phase A.harmonic_vector1
    // Generated from the component: Grid Load.Load.Phase A.harmonic_vector2
    // Generated from the component: Grid Load.Load.Phase A.harmonic_vector3
    // Generated from the component: Grid Load.Load.Phase A.harmonic_vector5
    // Generated from the component: Grid Load.Load.Phase B.Constant11
    // Generated from the component: Grid Load.Load.Phase B.Constant12
    // Generated from the component: Grid Load.Load.Phase B.Constant3
    // Generated from the component: Grid Load.Load.Phase B.Constant5
    // Generated from the component: Grid Load.Load.Phase B.Constant6
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Constant1
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.const_h
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.const_h
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.const_h
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change.Constant14
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change.Constant15
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change1.Constant14
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change1.Constant15
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Constant2
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.const
    // Generated from the component: Grid Load.Load.Phase B.const_one
    // Generated from the component: Grid Load.Load.Phase B.dimension
    // Generated from the component: Grid Load.Load.Phase B.harmonic_vector
    // Generated from the component: Grid Load.Load.Phase B.harmonic_vector1
    // Generated from the component: Grid Load.Load.Phase B.harmonic_vector2
    // Generated from the component: Grid Load.Load.Phase B.harmonic_vector3
    // Generated from the component: Grid Load.Load.Phase B.harmonic_vector5
    // Generated from the component: Grid Load.Load.Phase C.Constant11
    // Generated from the component: Grid Load.Load.Phase C.Constant12
    // Generated from the component: Grid Load.Load.Phase C.Constant3
    // Generated from the component: Grid Load.Load.Phase C.Constant5
    // Generated from the component: Grid Load.Load.Phase C.Constant6
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Constant1
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.const_h
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.const_h
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.const_h
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change.Constant14
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change.Constant15
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change1.Constant14
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change1.Constant15
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Constant2
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.const
    // Generated from the component: Grid Load.Load.Phase C.const_one
    // Generated from the component: Grid Load.Load.Phase C.dimension
    // Generated from the component: Grid Load.Load.Phase C.harmonic_vector
    // Generated from the component: Grid Load.Load.Phase C.harmonic_vector1
    // Generated from the component: Grid Load.Load.Phase C.harmonic_vector2
    // Generated from the component: Grid Load.Load.Phase C.harmonic_vector3
    // Generated from the component: Grid Load.Load.Phase C.harmonic_vector5
    // Generated from the component: dc_voltage
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: C
    _c__out = XIo_InFloat(0x55000100);
    // Generated from the component: DC Bus.VC2.Va1
    _dc_bus_vc2_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Grid Load.Load.Enable
    _grid_load_load_enable__out = XIo_InFloat(0x55000104);
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Delay1
    _grid_load_load_phase_a_grid_synchronization_delay1__out = _grid_load_load_phase_a_grid_synchronization_delay1__state[_grid_load_load_phase_a_grid_synchronization_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_filtered_value = _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__filtered_value;
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__filtered_value = _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_in * (6.283185307179586 * 5.0 * 5e-05) + _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_filtered_value * (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__out = _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__filtered_value;
    // Generated from the component: Grid Load.Load.Phase A.I
    _grid_load_load_phase_a_i__out = (HIL_InFloat(0xc80000 + 0x1b));
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter2
    _grid_load_load_phase_a_low_pass_filter2__previous_filtered_value = _grid_load_load_phase_a_low_pass_filter2__filtered_value;
    _grid_load_load_phase_a_low_pass_filter2__filtered_value = _grid_load_load_phase_a_low_pass_filter2__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_a_low_pass_filter2__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter2__out = _grid_load_load_phase_a_low_pass_filter2__filtered_value;
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter8
    _grid_load_load_phase_a_low_pass_filter8__previous_filtered_value = _grid_load_load_phase_a_low_pass_filter8__filtered_value;
    _grid_load_load_phase_a_low_pass_filter8__filtered_value = _grid_load_load_phase_a_low_pass_filter8__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_a_low_pass_filter8__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter8__out = _grid_load_load_phase_a_low_pass_filter8__filtered_value;
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter9
    _grid_load_load_phase_a_low_pass_filter9__previous_filtered_value = _grid_load_load_phase_a_low_pass_filter9__filtered_value;
    _grid_load_load_phase_a_low_pass_filter9__filtered_value = _grid_load_load_phase_a_low_pass_filter9__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_a_low_pass_filter9__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_a_low_pass_filter9__out = _grid_load_load_phase_a_low_pass_filter9__filtered_value;
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change.Ramping1.Ramping
    {
        _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i + _grid_load_load_phase_a_rate_of_change_ramping1_ramping__b ;
        if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out > _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out < _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change1.Ramping1.Ramping
    {
        _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i + _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__b ;
        if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out > _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out < _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.SR Flip Flop1
    _grid_load_load_phase_a_sr_flip_flop1__out = _grid_load_load_phase_a_sr_flip_flop1__state;
    _grid_load_load_phase_a_sr_flip_flop1__out_n = _grid_load_load_phase_a_sr_flip_flop1__state != -1 ? !_grid_load_load_phase_a_sr_flip_flop1__state : -1;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.I
    _grid_load_load_phase_a_single_phase_pll1_i__pi_reg_out_int = _grid_load_load_phase_a_single_phase_pll1_i__integrator_state;
    if (_grid_load_load_phase_a_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586)
        _grid_load_load_phase_a_single_phase_pll1_i__av_active = -1;
    else if (_grid_load_load_phase_a_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586)
        _grid_load_load_phase_a_single_phase_pll1_i__av_active = 1;
    else
        _grid_load_load_phase_a_single_phase_pll1_i__av_active = 0;
    _grid_load_load_phase_a_single_phase_pll1_i__out = MIN(MAX(_grid_load_load_phase_a_single_phase_pll1_i__pi_reg_out_int, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator1
    _grid_load_load_phase_a_single_phase_pll1_integrator1__out = _grid_load_load_phase_a_single_phase_pll1_integrator1__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator10
    _grid_load_load_phase_a_single_phase_pll1_integrator10__out = _grid_load_load_phase_a_single_phase_pll1_integrator10__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator2
    _grid_load_load_phase_a_single_phase_pll1_integrator2__out = _grid_load_load_phase_a_single_phase_pll1_integrator2__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator3
    _grid_load_load_phase_a_single_phase_pll1_integrator3__out = _grid_load_load_phase_a_single_phase_pll1_integrator3__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator4
    _grid_load_load_phase_a_single_phase_pll1_integrator4__out = _grid_load_load_phase_a_single_phase_pll1_integrator4__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator5
    _grid_load_load_phase_a_single_phase_pll1_integrator5__out = _grid_load_load_phase_a_single_phase_pll1_integrator5__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator6
    _grid_load_load_phase_a_single_phase_pll1_integrator6__out = _grid_load_load_phase_a_single_phase_pll1_integrator6__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator7
    _grid_load_load_phase_a_single_phase_pll1_integrator7__out = _grid_load_load_phase_a_single_phase_pll1_integrator7__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator8
    _grid_load_load_phase_a_single_phase_pll1_integrator8__out = _grid_load_load_phase_a_single_phase_pll1_integrator8__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator9
    _grid_load_load_phase_a_single_phase_pll1_integrator9__out = _grid_load_load_phase_a_single_phase_pll1_integrator9__state;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.integrator_with_reset
    {
        _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out = _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Transport Delay1
    _grid_load_load_phase_a_transport_delay1__out = _grid_load_load_phase_a_transport_delay1__state[_grid_load_load_phase_a_transport_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase A.Transport Delay2
    _grid_load_load_phase_a_transport_delay2__out = _grid_load_load_phase_a_transport_delay2__state[_grid_load_load_phase_a_transport_delay2__cbi];
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay1
    _grid_load_load_phase_a_unit_delay1__out = _grid_load_load_phase_a_unit_delay1__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay12
    _grid_load_load_phase_a_unit_delay12__out = _grid_load_load_phase_a_unit_delay12__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay13
    _grid_load_load_phase_a_unit_delay13__out = _grid_load_load_phase_a_unit_delay13__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay2
    _grid_load_load_phase_a_unit_delay2__out = _grid_load_load_phase_a_unit_delay2__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay3
    _grid_load_load_phase_a_unit_delay3__out = _grid_load_load_phase_a_unit_delay3__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay4
    _grid_load_load_phase_a_unit_delay4__out = _grid_load_load_phase_a_unit_delay4__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay5
    _grid_load_load_phase_a_unit_delay5__out = _grid_load_load_phase_a_unit_delay5__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay6
    _grid_load_load_phase_a_unit_delay6__out = _grid_load_load_phase_a_unit_delay6__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay7
    _grid_load_load_phase_a_unit_delay7__out = _grid_load_load_phase_a_unit_delay7__state;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay8
    _grid_load_load_phase_a_unit_delay8__out = _grid_load_load_phase_a_unit_delay8__state;
    // Generated from the component: Grid Load.Load.Phase A.V
    _grid_load_load_phase_a_v__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Grid Load.Load.Phase A.zig_zag_handler
    {
        switch ( _grid_load_load_phase_a_zig_zag_handler__state )     {
        case 0 :
            _grid_load_load_phase_a_zig_zag_handler__R_en = _grid_load_load_phase_a_zig_zag_handler__C_en = 0 ;
            break;
        case 1 :
            _grid_load_load_phase_a_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_a_zig_zag_handler__C_en = 0 ;
            break;
        case 2 :
            _grid_load_load_phase_a_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_a_zig_zag_handler__C_en = 0 ;
            break;
        case 3 :
            _grid_load_load_phase_a_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_a_zig_zag_handler__C_en = 1 ;
            break;
        case 4 :
            _grid_load_load_phase_a_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_a_zig_zag_handler__C_en = 1 ;
            break;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Delay1
    _grid_load_load_phase_b_grid_synchronization_delay1__out = _grid_load_load_phase_b_grid_synchronization_delay1__state[_grid_load_load_phase_b_grid_synchronization_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_filtered_value = _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__filtered_value;
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__filtered_value = _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_in * (6.283185307179586 * 5.0 * 5e-05) + _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_filtered_value * (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__out = _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__filtered_value;
    // Generated from the component: Grid Load.Load.Phase B.I
    _grid_load_load_phase_b_i__out = (HIL_InFloat(0xc80000 + 0x1f));
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter2
    _grid_load_load_phase_b_low_pass_filter2__previous_filtered_value = _grid_load_load_phase_b_low_pass_filter2__filtered_value;
    _grid_load_load_phase_b_low_pass_filter2__filtered_value = _grid_load_load_phase_b_low_pass_filter2__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_b_low_pass_filter2__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter2__out = _grid_load_load_phase_b_low_pass_filter2__filtered_value;
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter8
    _grid_load_load_phase_b_low_pass_filter8__previous_filtered_value = _grid_load_load_phase_b_low_pass_filter8__filtered_value;
    _grid_load_load_phase_b_low_pass_filter8__filtered_value = _grid_load_load_phase_b_low_pass_filter8__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_b_low_pass_filter8__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter8__out = _grid_load_load_phase_b_low_pass_filter8__filtered_value;
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter9
    _grid_load_load_phase_b_low_pass_filter9__previous_filtered_value = _grid_load_load_phase_b_low_pass_filter9__filtered_value;
    _grid_load_load_phase_b_low_pass_filter9__filtered_value = _grid_load_load_phase_b_low_pass_filter9__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_b_low_pass_filter9__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_b_low_pass_filter9__out = _grid_load_load_phase_b_low_pass_filter9__filtered_value;
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change.Ramping1.Ramping
    {
        _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i + _grid_load_load_phase_b_rate_of_change_ramping1_ramping__b ;
        if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out > _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out < _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change1.Ramping1.Ramping
    {
        _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i + _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__b ;
        if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out > _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out < _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.SR Flip Flop1
    _grid_load_load_phase_b_sr_flip_flop1__out = _grid_load_load_phase_b_sr_flip_flop1__state;
    _grid_load_load_phase_b_sr_flip_flop1__out_n = _grid_load_load_phase_b_sr_flip_flop1__state != -1 ? !_grid_load_load_phase_b_sr_flip_flop1__state : -1;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.I
    _grid_load_load_phase_b_single_phase_pll1_i__pi_reg_out_int = _grid_load_load_phase_b_single_phase_pll1_i__integrator_state;
    if (_grid_load_load_phase_b_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586)
        _grid_load_load_phase_b_single_phase_pll1_i__av_active = -1;
    else if (_grid_load_load_phase_b_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586)
        _grid_load_load_phase_b_single_phase_pll1_i__av_active = 1;
    else
        _grid_load_load_phase_b_single_phase_pll1_i__av_active = 0;
    _grid_load_load_phase_b_single_phase_pll1_i__out = MIN(MAX(_grid_load_load_phase_b_single_phase_pll1_i__pi_reg_out_int, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator1
    _grid_load_load_phase_b_single_phase_pll1_integrator1__out = _grid_load_load_phase_b_single_phase_pll1_integrator1__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator10
    _grid_load_load_phase_b_single_phase_pll1_integrator10__out = _grid_load_load_phase_b_single_phase_pll1_integrator10__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator2
    _grid_load_load_phase_b_single_phase_pll1_integrator2__out = _grid_load_load_phase_b_single_phase_pll1_integrator2__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator3
    _grid_load_load_phase_b_single_phase_pll1_integrator3__out = _grid_load_load_phase_b_single_phase_pll1_integrator3__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator4
    _grid_load_load_phase_b_single_phase_pll1_integrator4__out = _grid_load_load_phase_b_single_phase_pll1_integrator4__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator5
    _grid_load_load_phase_b_single_phase_pll1_integrator5__out = _grid_load_load_phase_b_single_phase_pll1_integrator5__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator6
    _grid_load_load_phase_b_single_phase_pll1_integrator6__out = _grid_load_load_phase_b_single_phase_pll1_integrator6__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator7
    _grid_load_load_phase_b_single_phase_pll1_integrator7__out = _grid_load_load_phase_b_single_phase_pll1_integrator7__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator8
    _grid_load_load_phase_b_single_phase_pll1_integrator8__out = _grid_load_load_phase_b_single_phase_pll1_integrator8__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator9
    _grid_load_load_phase_b_single_phase_pll1_integrator9__out = _grid_load_load_phase_b_single_phase_pll1_integrator9__state;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.integrator_with_reset
    {
        _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out = _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Transport Delay1
    _grid_load_load_phase_b_transport_delay1__out = _grid_load_load_phase_b_transport_delay1__state[_grid_load_load_phase_b_transport_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase B.Transport Delay2
    _grid_load_load_phase_b_transport_delay2__out = _grid_load_load_phase_b_transport_delay2__state[_grid_load_load_phase_b_transport_delay2__cbi];
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay1
    _grid_load_load_phase_b_unit_delay1__out = _grid_load_load_phase_b_unit_delay1__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay12
    _grid_load_load_phase_b_unit_delay12__out = _grid_load_load_phase_b_unit_delay12__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay13
    _grid_load_load_phase_b_unit_delay13__out = _grid_load_load_phase_b_unit_delay13__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay2
    _grid_load_load_phase_b_unit_delay2__out = _grid_load_load_phase_b_unit_delay2__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay3
    _grid_load_load_phase_b_unit_delay3__out = _grid_load_load_phase_b_unit_delay3__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay4
    _grid_load_load_phase_b_unit_delay4__out = _grid_load_load_phase_b_unit_delay4__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay5
    _grid_load_load_phase_b_unit_delay5__out = _grid_load_load_phase_b_unit_delay5__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay6
    _grid_load_load_phase_b_unit_delay6__out = _grid_load_load_phase_b_unit_delay6__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay7
    _grid_load_load_phase_b_unit_delay7__out = _grid_load_load_phase_b_unit_delay7__state;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay8
    _grid_load_load_phase_b_unit_delay8__out = _grid_load_load_phase_b_unit_delay8__state;
    // Generated from the component: Grid Load.Load.Phase B.V
    _grid_load_load_phase_b_v__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Grid Load.Load.Phase B.zig_zag_handler
    {
        switch ( _grid_load_load_phase_b_zig_zag_handler__state )     {
        case 0 :
            _grid_load_load_phase_b_zig_zag_handler__R_en = _grid_load_load_phase_b_zig_zag_handler__C_en = 0 ;
            break;
        case 1 :
            _grid_load_load_phase_b_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_b_zig_zag_handler__C_en = 0 ;
            break;
        case 2 :
            _grid_load_load_phase_b_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_b_zig_zag_handler__C_en = 0 ;
            break;
        case 3 :
            _grid_load_load_phase_b_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_b_zig_zag_handler__C_en = 1 ;
            break;
        case 4 :
            _grid_load_load_phase_b_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_b_zig_zag_handler__C_en = 1 ;
            break;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Delay1
    _grid_load_load_phase_c_grid_synchronization_delay1__out = _grid_load_load_phase_c_grid_synchronization_delay1__state[_grid_load_load_phase_c_grid_synchronization_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_filtered_value = _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__filtered_value;
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__filtered_value = _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_in * (6.283185307179586 * 5.0 * 5e-05) + _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_filtered_value * (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__out = _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__filtered_value;
    // Generated from the component: Grid Load.Load.Phase C.I
    _grid_load_load_phase_c_i__out = (HIL_InFloat(0xc80000 + 0x23));
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter2
    _grid_load_load_phase_c_low_pass_filter2__previous_filtered_value = _grid_load_load_phase_c_low_pass_filter2__filtered_value;
    _grid_load_load_phase_c_low_pass_filter2__filtered_value = _grid_load_load_phase_c_low_pass_filter2__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_c_low_pass_filter2__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter2__out = _grid_load_load_phase_c_low_pass_filter2__filtered_value;
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter8
    _grid_load_load_phase_c_low_pass_filter8__previous_filtered_value = _grid_load_load_phase_c_low_pass_filter8__filtered_value;
    _grid_load_load_phase_c_low_pass_filter8__filtered_value = _grid_load_load_phase_c_low_pass_filter8__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_c_low_pass_filter8__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter8__out = _grid_load_load_phase_c_low_pass_filter8__filtered_value;
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter9
    _grid_load_load_phase_c_low_pass_filter9__previous_filtered_value = _grid_load_load_phase_c_low_pass_filter9__filtered_value;
    _grid_load_load_phase_c_low_pass_filter9__filtered_value = _grid_load_load_phase_c_low_pass_filter9__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _grid_load_load_phase_c_low_pass_filter9__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _grid_load_load_phase_c_low_pass_filter9__out = _grid_load_load_phase_c_low_pass_filter9__filtered_value;
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change.Ramping1.Ramping
    {
        _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i + _grid_load_load_phase_c_rate_of_change_ramping1_ramping__b ;
        if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out > _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out < _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref && _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change1.Ramping1.Ramping
    {
        _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a * 5e-05 * _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i + _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__b ;
        if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out > _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a >= 0 )     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i + 1 ;
        }
        if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out < _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref && _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a <= 0 )     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.SR Flip Flop1
    _grid_load_load_phase_c_sr_flip_flop1__out = _grid_load_load_phase_c_sr_flip_flop1__state;
    _grid_load_load_phase_c_sr_flip_flop1__out_n = _grid_load_load_phase_c_sr_flip_flop1__state != -1 ? !_grid_load_load_phase_c_sr_flip_flop1__state : -1;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.I
    _grid_load_load_phase_c_single_phase_pll1_i__pi_reg_out_int = _grid_load_load_phase_c_single_phase_pll1_i__integrator_state;
    if (_grid_load_load_phase_c_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586)
        _grid_load_load_phase_c_single_phase_pll1_i__av_active = -1;
    else if (_grid_load_load_phase_c_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586)
        _grid_load_load_phase_c_single_phase_pll1_i__av_active = 1;
    else
        _grid_load_load_phase_c_single_phase_pll1_i__av_active = 0;
    _grid_load_load_phase_c_single_phase_pll1_i__out = MIN(MAX(_grid_load_load_phase_c_single_phase_pll1_i__pi_reg_out_int, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator1
    _grid_load_load_phase_c_single_phase_pll1_integrator1__out = _grid_load_load_phase_c_single_phase_pll1_integrator1__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator10
    _grid_load_load_phase_c_single_phase_pll1_integrator10__out = _grid_load_load_phase_c_single_phase_pll1_integrator10__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator2
    _grid_load_load_phase_c_single_phase_pll1_integrator2__out = _grid_load_load_phase_c_single_phase_pll1_integrator2__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator3
    _grid_load_load_phase_c_single_phase_pll1_integrator3__out = _grid_load_load_phase_c_single_phase_pll1_integrator3__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator4
    _grid_load_load_phase_c_single_phase_pll1_integrator4__out = _grid_load_load_phase_c_single_phase_pll1_integrator4__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator5
    _grid_load_load_phase_c_single_phase_pll1_integrator5__out = _grid_load_load_phase_c_single_phase_pll1_integrator5__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator6
    _grid_load_load_phase_c_single_phase_pll1_integrator6__out = _grid_load_load_phase_c_single_phase_pll1_integrator6__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator7
    _grid_load_load_phase_c_single_phase_pll1_integrator7__out = _grid_load_load_phase_c_single_phase_pll1_integrator7__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator8
    _grid_load_load_phase_c_single_phase_pll1_integrator8__out = _grid_load_load_phase_c_single_phase_pll1_integrator8__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator9
    _grid_load_load_phase_c_single_phase_pll1_integrator9__out = _grid_load_load_phase_c_single_phase_pll1_integrator9__state;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.integrator_with_reset
    {
        _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out = _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Transport Delay1
    _grid_load_load_phase_c_transport_delay1__out = _grid_load_load_phase_c_transport_delay1__state[_grid_load_load_phase_c_transport_delay1__cbi];
    // Generated from the component: Grid Load.Load.Phase C.Transport Delay2
    _grid_load_load_phase_c_transport_delay2__out = _grid_load_load_phase_c_transport_delay2__state[_grid_load_load_phase_c_transport_delay2__cbi];
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay1
    _grid_load_load_phase_c_unit_delay1__out = _grid_load_load_phase_c_unit_delay1__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay12
    _grid_load_load_phase_c_unit_delay12__out = _grid_load_load_phase_c_unit_delay12__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay13
    _grid_load_load_phase_c_unit_delay13__out = _grid_load_load_phase_c_unit_delay13__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay2
    _grid_load_load_phase_c_unit_delay2__out = _grid_load_load_phase_c_unit_delay2__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay3
    _grid_load_load_phase_c_unit_delay3__out = _grid_load_load_phase_c_unit_delay3__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay4
    _grid_load_load_phase_c_unit_delay4__out = _grid_load_load_phase_c_unit_delay4__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay5
    _grid_load_load_phase_c_unit_delay5__out = _grid_load_load_phase_c_unit_delay5__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay6
    _grid_load_load_phase_c_unit_delay6__out = _grid_load_load_phase_c_unit_delay6__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay7
    _grid_load_load_phase_c_unit_delay7__out = _grid_load_load_phase_c_unit_delay7__state;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay8
    _grid_load_load_phase_c_unit_delay8__out = _grid_load_load_phase_c_unit_delay8__state;
    // Generated from the component: Grid Load.Load.Phase C.V
    _grid_load_load_phase_c_v__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Grid Load.Load.Phase C.zig_zag_handler
    {
        switch ( _grid_load_load_phase_c_zig_zag_handler__state )     {
        case 0 :
            _grid_load_load_phase_c_zig_zag_handler__R_en = _grid_load_load_phase_c_zig_zag_handler__C_en = 0 ;
            break;
        case 1 :
            _grid_load_load_phase_c_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_c_zig_zag_handler__C_en = 0 ;
            break;
        case 2 :
            _grid_load_load_phase_c_zig_zag_handler__R_en = 1 ;
            _grid_load_load_phase_c_zig_zag_handler__C_en = 0 ;
            break;
        case 3 :
            _grid_load_load_phase_c_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_c_zig_zag_handler__C_en = 1 ;
            break;
        case 4 :
            _grid_load_load_phase_c_zig_zag_handler__R_en = 0 ;
            _grid_load_load_phase_c_zig_zag_handler__C_en = 1 ;
            break;
        }
    }
    // Generated from the component: Grid Load.Load.Pref
    _grid_load_load_pref__out = XIo_InFloat(0x55000108);
    // Generated from the component: Grid Load.Load.Pref_PhaseA
    _grid_load_load_pref_phasea__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Grid Load.Load.Pref_PhaseB
    _grid_load_load_pref_phaseb__out = XIo_InFloat(0x55000110);
    // Generated from the component: Grid Load.Load.Pref_PhaseC
    _grid_load_load_pref_phasec__out = XIo_InFloat(0x55000114);
    // Generated from the component: Grid Load.Load.Qref
    _grid_load_load_qref__out = XIo_InFloat(0x55000118);
    // Generated from the component: Grid Load.Load.Qref_PhaseA
    _grid_load_load_qref_phasea__out = XIo_InFloat(0x5500011c);
    // Generated from the component: Grid Load.Load.Qref_PhaseB
    _grid_load_load_qref_phaseb__out = XIo_InFloat(0x55000120);
    // Generated from the component: Grid Load.Load.Qref_PhaseC
    _grid_load_load_qref_phasec__out = XIo_InFloat(0x55000124);
    // Generated from the component: Grid Load.Load.ROC
    _grid_load_load_roc__out = XIo_InFloat(0x55000128);
    // Generated from the component: KP
    _kp__out = XIo_InFloat(0x5500012c);
    // Generated from the component: KR
    _kr__out = XIo_InFloat(0x55000130);
    // Generated from the component: LC Filter.Ila1.Ia1
    _lc_filter_ila1_ia1__out = (HIL_InFloat(0xc80000 + 0x21d));
    // Generated from the component: LC Filter.Ilb1.Ia1
    _lc_filter_ilb1_ia1__out = (HIL_InFloat(0xc80000 + 0x21e));
    // Generated from the component: LC Filter.Ilc1.Ia1
    _lc_filter_ilc1_ia1__out = (HIL_InFloat(0xc80000 + 0x21f));
    // Generated from the component: LC Filter.Vca1.Va1
    _lc_filter_vca1_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: LC Filter.Vca2.Va1
    _lc_filter_vca2_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: LC Filter.Vca3.Va1
    _lc_filter_vca3_va1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: Line Impedance.Ilag.Ia1
    _line_impedance_ilag_ia1__out = (HIL_InFloat(0xc80000 + 0x26));
    // Generated from the component: Line Impedance.Ilbg.Ia1
    _line_impedance_ilbg_ia1__out = (HIL_InFloat(0xc80000 + 0x27));
    // Generated from the component: Line Impedance.Ilcg.Ia1
    _line_impedance_ilcg_ia1__out = (HIL_InFloat(0xc80000 + 0x28));
    // Generated from the component: STEADY_STATE
    _steady_state__out = XIo_InInt32(0x55000134);
    // Generated from the component: TEST_FLAG
    _test_flag__out = XIo_InInt32(0x55000138);
    // Generated from the component: sine_a
    _sine_a__out = (1.0 * sin(2.0f * M_PI * _sine_a__current_phase) + 0.0);
    // Generated from the component: sine_b
    _sine_b__out = (1.0 * sin(2.0f * M_PI * _sine_b__current_phase) + 0.0);
    // Generated from the component: sine_c
    _sine_c__out = (1.0 * sin(2.0f * M_PI * _sine_c__current_phase) + 0.0);
    // Generated from the component: v_line_rms
    _v_line_rms__out = XIo_InFloat(0x5500013c);
    // Generated from the component: Gain1
    _gain1__out = 1e-06 * _c__out;
    // Generated from the component: Grid Load.Load.Relational operator4
    _grid_load_load_relational_operator4__out = (_grid_load_load_bal_en__out >= _grid_load_load_constant14__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Relational operator3
    _grid_load_load_relational_operator3__out = (_grid_load_load_enable__out >= _grid_load_load_constant13__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Steady state check
    _grid_load_load_phase_a_grid_synchronization_steady_state_check__in = _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__out;
    {
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__out = _grid_load_load_phase_a_grid_synchronization_steady_state_check__out_state ;
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__time_cnt += 5e-05 ;
        if ( _grid_load_load_phase_a_grid_synchronization_steady_state_check__time_cnt >= 1 / ( 2 * 60.0 ) )     {
            _grid_load_load_phase_a_grid_synchronization_steady_state_check__time_cnt = 0 ;
            if ( _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val - _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val > 0.0125 * 359.25849560819944 ) _grid_load_load_phase_a_grid_synchronization_steady_state_check__out = 0 ;
            else _grid_load_load_phase_a_grid_synchronization_steady_state_check__out = 1 ;
            _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val = 0.25 * 359.25849560819944 ;
            _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        }
        if ( _grid_load_load_phase_a_grid_synchronization_steady_state_check__in >= _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val )     {
            _grid_load_load_phase_a_grid_synchronization_steady_state_check__max_val = _grid_load_load_phase_a_grid_synchronization_steady_state_check__in ;
        }
        if ( _grid_load_load_phase_a_grid_synchronization_steady_state_check__in <= _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val )     {
            _grid_load_load_phase_a_grid_synchronization_steady_state_check__min_val = _grid_load_load_phase_a_grid_synchronization_steady_state_check__in ;
        }
        _grid_load_load_phase_a_grid_synchronization_steady_state_check__out_state = _grid_load_load_phase_a_grid_synchronization_steady_state_check__out ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Limit2
    _grid_load_load_phase_a_limit2__out = MIN(MAX(_grid_load_load_phase_a_low_pass_filter2__out, 1e-08), 0.0467458144857058);
    // Generated from the component: Grid Load.Load.Phase A.f_to_w10
    _grid_load_load_phase_a_f_to_w10__out = 1.65e-05 * _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w7
    _grid_load_load_phase_a_f_to_w7__out = 0.001 * _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w11
    _grid_load_load_phase_a_f_to_w11__out = 2.2e-05 * _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w6
    _grid_load_load_phase_a_f_to_w6__out = 0.001 * _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.Termination5
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.freq_gain
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_freq_gain__out[0] = 1.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_freq_gain__out[1] = 0.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.f_to_w
    _grid_load_load_phase_a_grid_synchronization_f_to_w__out = 6.283185307179586 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.FFT
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__f1 = _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_const_h__out[0];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_const_h__out[1];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__signal = _grid_load_load_phase_a_i__out;
    {
        if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__reset )     {
            for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i )         {
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = sqrt ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] + _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] ) ;
                if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] > 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] < 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = atan2 ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] , _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
            }
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__signal * sin ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__signal * cos ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__i ] ;
        }
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.freq_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_freq_gain__out[0] = 1.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_freq_gain__out[1] = 0.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.freq_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_freq_gain__out[0] = 1.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_freq_gain__out[1] = 0.0 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Limit4
    _grid_load_load_phase_a_grid_synchronization_peak_calc_limit4__out = MAX(_grid_load_load_phase_a_single_phase_pll1_integrator4__out, 0.001);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum4
    _grid_load_load_phase_a_single_phase_pll1_sum4__out = _grid_load_load_phase_a_single_phase_pll1_integrator3__out - _grid_load_load_phase_a_single_phase_pll1_integrator4__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product2
    _grid_load_load_phase_a_single_phase_pll1_product2__out = (_grid_load_load_phase_a_single_phase_pll1_integrator5__out * _grid_load_load_phase_a_single_phase_pll1_integrator1__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.w_to_f
    _grid_load_load_phase_a_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _grid_load_load_phase_a_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum9
    _grid_load_load_phase_a_single_phase_pll1_sum9__out = _grid_load_load_phase_a_single_phase_pll1_integrator6__out - _grid_load_load_phase_a_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum11
    _grid_load_load_phase_a_single_phase_pll1_sum11__out = _grid_load_load_phase_a_single_phase_pll1_integrator7__out - _grid_load_load_phase_a_single_phase_pll1_integrator8__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum13
    _grid_load_load_phase_a_single_phase_pll1_sum13__out = _grid_load_load_phase_a_single_phase_pll1_integrator8__out - _grid_load_load_phase_a_single_phase_pll1_integrator9__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum14
    _grid_load_load_phase_a_single_phase_pll1_sum14__out = _grid_load_load_phase_a_single_phase_pll1_integrator9__out - _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.C function1
    _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq = _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out;
    _grid_load_load_phase_a_single_phase_pll1_c_function1__va = _grid_load_load_phase_a_single_phase_pll1_integrator1__out;
    _grid_load_load_phase_a_single_phase_pll1_c_function1__vb = _grid_load_load_phase_a_single_phase_pll1_integrator2__out;
    {
        _grid_load_load_phase_a_single_phase_pll1_c_function1__vq = cos ( _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_a_single_phase_pll1_c_function1__va + sin ( _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_a_single_phase_pll1_c_function1__vb ;
        _grid_load_load_phase_a_single_phase_pll1_c_function1__vd = - sin ( _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_a_single_phase_pll1_c_function1__va + cos ( _grid_load_load_phase_a_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_a_single_phase_pll1_c_function1__vb ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Trigonometric function1
    _grid_load_load_phase_a_single_phase_pll1_trigonometric_function1__out = sin(_grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: Grid Load.Load.Phase A.Termination2
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.FFT
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__f1 = _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h[0] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_const_h__out[0];
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h[1] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_const_h__out[1];
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__signal = _grid_load_load_phase_a_v__out;
    {
        if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__reset )     {
            for ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i )         {
                _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = sqrt ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] + _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] ) ;
                if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] > 0 ) _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] < 0 ) _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = atan2 ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] , _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
            }
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__signal * sin ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__signal * cos ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] ;
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__i ] ;
        }
        _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt = _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.RMS value1
    if (_grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_a_grid_synchronization_rms_value1__out_state = sqrt(_grid_load_load_phase_a_grid_synchronization_rms_value1__square_sum / (2 * M_PI));
        _grid_load_load_phase_a_grid_synchronization_rms_value1__square_sum = 0.0f;
        _grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_a_grid_synchronization_rms_value1__out = _grid_load_load_phase_a_grid_synchronization_rms_value1__out_state;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.FFT
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__f1 = _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_const_h__out[0];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_const_h__out[1];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__signal = _grid_load_load_phase_a_v__out;
    {
        if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__reset )     {
            for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i )         {
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = sqrt ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] + _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] ) ;
                if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] > 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] < 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = atan2 ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] , _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
            }
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__signal * sin ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__signal * cos ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__i ] ;
        }
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum1
    _grid_load_load_phase_a_single_phase_pll1_sum1__out =  - _grid_load_load_phase_a_single_phase_pll1_integrator1__out + _grid_load_load_phase_a_v__out;
    // Generated from the component: Grid Load.Load.Phase A.Relational operator3
    _grid_load_load_phase_a_relational_operator3__out = (_grid_load_load_phase_a_dimension__out > _grid_load_load_phase_a_const_one__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator22
    _grid_load_load_phase_a_logical_operator22__out = !_grid_load_load_phase_a_zig_zag_handler__C_en;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator23
    _grid_load_load_phase_a_logical_operator23__out = !_grid_load_load_phase_a_zig_zag_handler__R_en;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Steady state check
    _grid_load_load_phase_b_grid_synchronization_steady_state_check__in = _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__out;
    {
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__out = _grid_load_load_phase_b_grid_synchronization_steady_state_check__out_state ;
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__time_cnt += 5e-05 ;
        if ( _grid_load_load_phase_b_grid_synchronization_steady_state_check__time_cnt >= 1 / ( 2 * 60.0 ) )     {
            _grid_load_load_phase_b_grid_synchronization_steady_state_check__time_cnt = 0 ;
            if ( _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val - _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val > 0.0125 * 359.25849560819944 ) _grid_load_load_phase_b_grid_synchronization_steady_state_check__out = 0 ;
            else _grid_load_load_phase_b_grid_synchronization_steady_state_check__out = 1 ;
            _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val = 0.25 * 359.25849560819944 ;
            _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        }
        if ( _grid_load_load_phase_b_grid_synchronization_steady_state_check__in >= _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val )     {
            _grid_load_load_phase_b_grid_synchronization_steady_state_check__max_val = _grid_load_load_phase_b_grid_synchronization_steady_state_check__in ;
        }
        if ( _grid_load_load_phase_b_grid_synchronization_steady_state_check__in <= _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val )     {
            _grid_load_load_phase_b_grid_synchronization_steady_state_check__min_val = _grid_load_load_phase_b_grid_synchronization_steady_state_check__in ;
        }
        _grid_load_load_phase_b_grid_synchronization_steady_state_check__out_state = _grid_load_load_phase_b_grid_synchronization_steady_state_check__out ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Limit2
    _grid_load_load_phase_b_limit2__out = MIN(MAX(_grid_load_load_phase_b_low_pass_filter2__out, 1e-08), 0.0467458144857058);
    // Generated from the component: Grid Load.Load.Phase B.f_to_w10
    _grid_load_load_phase_b_f_to_w10__out = 1.65e-05 * _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w7
    _grid_load_load_phase_b_f_to_w7__out = 0.001 * _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w11
    _grid_load_load_phase_b_f_to_w11__out = 2.2e-05 * _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w6
    _grid_load_load_phase_b_f_to_w6__out = 0.001 * _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.Termination5
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.freq_gain
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_freq_gain__out[0] = 1.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_freq_gain__out[1] = 0.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.f_to_w
    _grid_load_load_phase_b_grid_synchronization_f_to_w__out = 6.283185307179586 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.FFT
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__f1 = _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_const_h__out[0];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_const_h__out[1];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__signal = _grid_load_load_phase_b_i__out;
    {
        if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__reset )     {
            for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i )         {
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = sqrt ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] + _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] ) ;
                if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] > 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] < 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = atan2 ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] , _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
            }
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__signal * sin ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__signal * cos ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__i ] ;
        }
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.freq_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_freq_gain__out[0] = 1.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_freq_gain__out[1] = 0.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.freq_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_freq_gain__out[0] = 1.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_freq_gain__out[1] = 0.0 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Limit4
    _grid_load_load_phase_b_grid_synchronization_peak_calc_limit4__out = MAX(_grid_load_load_phase_b_single_phase_pll1_integrator4__out, 0.001);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum4
    _grid_load_load_phase_b_single_phase_pll1_sum4__out = _grid_load_load_phase_b_single_phase_pll1_integrator3__out - _grid_load_load_phase_b_single_phase_pll1_integrator4__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product2
    _grid_load_load_phase_b_single_phase_pll1_product2__out = (_grid_load_load_phase_b_single_phase_pll1_integrator5__out * _grid_load_load_phase_b_single_phase_pll1_integrator1__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.w_to_f
    _grid_load_load_phase_b_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _grid_load_load_phase_b_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum9
    _grid_load_load_phase_b_single_phase_pll1_sum9__out = _grid_load_load_phase_b_single_phase_pll1_integrator6__out - _grid_load_load_phase_b_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum11
    _grid_load_load_phase_b_single_phase_pll1_sum11__out = _grid_load_load_phase_b_single_phase_pll1_integrator7__out - _grid_load_load_phase_b_single_phase_pll1_integrator8__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum13
    _grid_load_load_phase_b_single_phase_pll1_sum13__out = _grid_load_load_phase_b_single_phase_pll1_integrator8__out - _grid_load_load_phase_b_single_phase_pll1_integrator9__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum14
    _grid_load_load_phase_b_single_phase_pll1_sum14__out = _grid_load_load_phase_b_single_phase_pll1_integrator9__out - _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.C function1
    _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq = _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out;
    _grid_load_load_phase_b_single_phase_pll1_c_function1__va = _grid_load_load_phase_b_single_phase_pll1_integrator1__out;
    _grid_load_load_phase_b_single_phase_pll1_c_function1__vb = _grid_load_load_phase_b_single_phase_pll1_integrator2__out;
    {
        _grid_load_load_phase_b_single_phase_pll1_c_function1__vq = cos ( _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_b_single_phase_pll1_c_function1__va + sin ( _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_b_single_phase_pll1_c_function1__vb ;
        _grid_load_load_phase_b_single_phase_pll1_c_function1__vd = - sin ( _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_b_single_phase_pll1_c_function1__va + cos ( _grid_load_load_phase_b_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_b_single_phase_pll1_c_function1__vb ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Trigonometric function1
    _grid_load_load_phase_b_single_phase_pll1_trigonometric_function1__out = sin(_grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: Grid Load.Load.Phase B.Termination2
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.FFT
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__f1 = _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h[0] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_const_h__out[0];
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h[1] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_const_h__out[1];
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__signal = _grid_load_load_phase_b_v__out;
    {
        if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__reset )     {
            for ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i )         {
                _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = sqrt ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] + _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] ) ;
                if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] > 0 ) _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] < 0 ) _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = atan2 ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] , _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
            }
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__signal * sin ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__signal * cos ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] ;
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__i ] ;
        }
        _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt = _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.RMS value1
    if (_grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_b_grid_synchronization_rms_value1__out_state = sqrt(_grid_load_load_phase_b_grid_synchronization_rms_value1__square_sum / (2 * M_PI));
        _grid_load_load_phase_b_grid_synchronization_rms_value1__square_sum = 0.0f;
        _grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_b_grid_synchronization_rms_value1__out = _grid_load_load_phase_b_grid_synchronization_rms_value1__out_state;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.FFT
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__f1 = _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_const_h__out[0];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_const_h__out[1];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__signal = _grid_load_load_phase_b_v__out;
    {
        if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__reset )     {
            for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i )         {
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = sqrt ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] + _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] ) ;
                if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] > 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] < 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = atan2 ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] , _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
            }
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__signal * sin ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__signal * cos ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__i ] ;
        }
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum1
    _grid_load_load_phase_b_single_phase_pll1_sum1__out =  - _grid_load_load_phase_b_single_phase_pll1_integrator1__out + _grid_load_load_phase_b_v__out;
    // Generated from the component: Grid Load.Load.Phase B.Relational operator3
    _grid_load_load_phase_b_relational_operator3__out = (_grid_load_load_phase_b_dimension__out > _grid_load_load_phase_b_const_one__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator22
    _grid_load_load_phase_b_logical_operator22__out = !_grid_load_load_phase_b_zig_zag_handler__C_en;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator23
    _grid_load_load_phase_b_logical_operator23__out = !_grid_load_load_phase_b_zig_zag_handler__R_en;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Steady state check
    _grid_load_load_phase_c_grid_synchronization_steady_state_check__in = _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__out;
    {
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__out = _grid_load_load_phase_c_grid_synchronization_steady_state_check__out_state ;
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__time_cnt += 5e-05 ;
        if ( _grid_load_load_phase_c_grid_synchronization_steady_state_check__time_cnt >= 1 / ( 2 * 60.0 ) )     {
            _grid_load_load_phase_c_grid_synchronization_steady_state_check__time_cnt = 0 ;
            if ( _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val - _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val > 0.0125 * 359.25849560819944 ) _grid_load_load_phase_c_grid_synchronization_steady_state_check__out = 0 ;
            else _grid_load_load_phase_c_grid_synchronization_steady_state_check__out = 1 ;
            _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val = 0.25 * 359.25849560819944 ;
            _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val = 2 * 359.25849560819944 ;
        }
        if ( _grid_load_load_phase_c_grid_synchronization_steady_state_check__in >= _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val )     {
            _grid_load_load_phase_c_grid_synchronization_steady_state_check__max_val = _grid_load_load_phase_c_grid_synchronization_steady_state_check__in ;
        }
        if ( _grid_load_load_phase_c_grid_synchronization_steady_state_check__in <= _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val )     {
            _grid_load_load_phase_c_grid_synchronization_steady_state_check__min_val = _grid_load_load_phase_c_grid_synchronization_steady_state_check__in ;
        }
        _grid_load_load_phase_c_grid_synchronization_steady_state_check__out_state = _grid_load_load_phase_c_grid_synchronization_steady_state_check__out ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Limit2
    _grid_load_load_phase_c_limit2__out = MIN(MAX(_grid_load_load_phase_c_low_pass_filter2__out, 1e-08), 0.0467458144857058);
    // Generated from the component: Grid Load.Load.Phase C.f_to_w10
    _grid_load_load_phase_c_f_to_w10__out = 1.65e-05 * _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w7
    _grid_load_load_phase_c_f_to_w7__out = 0.001 * _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w11
    _grid_load_load_phase_c_f_to_w11__out = 2.2e-05 * _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w6
    _grid_load_load_phase_c_f_to_w6__out = 0.001 * _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Logical operator1
    _grid_load_load_logical_operator1__out = _grid_load_load_phase_a_sr_flip_flop1__out && _grid_load_load_phase_b_sr_flip_flop1__out && _grid_load_load_phase_c_sr_flip_flop1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Termination5
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.freq_gain
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_freq_gain__out[0] = 1.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_freq_gain__out[1] = 0.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.f_to_w
    _grid_load_load_phase_c_grid_synchronization_f_to_w__out = 6.283185307179586 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.FFT
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__f1 = _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_const_h__out[0];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_const_h__out[1];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__signal = _grid_load_load_phase_c_i__out;
    {
        if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__reset )     {
            for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i )         {
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__N ;
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = sqrt ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] + _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] ) ;
                if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] > 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] < 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = atan2 ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] , _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
            }
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__signal * sin ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] += _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__signal * cos ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__i ] ;
        }
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.freq_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_freq_gain__out[0] = 1.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_freq_gain__out[1] = 0.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.freq_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_freq_gain__out[0] = 1.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_freq_gain__out[1] = 0.0 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Limit4
    _grid_load_load_phase_c_grid_synchronization_peak_calc_limit4__out = MAX(_grid_load_load_phase_c_single_phase_pll1_integrator4__out, 0.001);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum4
    _grid_load_load_phase_c_single_phase_pll1_sum4__out = _grid_load_load_phase_c_single_phase_pll1_integrator3__out - _grid_load_load_phase_c_single_phase_pll1_integrator4__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product2
    _grid_load_load_phase_c_single_phase_pll1_product2__out = (_grid_load_load_phase_c_single_phase_pll1_integrator5__out * _grid_load_load_phase_c_single_phase_pll1_integrator1__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.w_to_f
    _grid_load_load_phase_c_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _grid_load_load_phase_c_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum9
    _grid_load_load_phase_c_single_phase_pll1_sum9__out = _grid_load_load_phase_c_single_phase_pll1_integrator6__out - _grid_load_load_phase_c_single_phase_pll1_integrator5__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum11
    _grid_load_load_phase_c_single_phase_pll1_sum11__out = _grid_load_load_phase_c_single_phase_pll1_integrator7__out - _grid_load_load_phase_c_single_phase_pll1_integrator8__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum13
    _grid_load_load_phase_c_single_phase_pll1_sum13__out = _grid_load_load_phase_c_single_phase_pll1_integrator8__out - _grid_load_load_phase_c_single_phase_pll1_integrator9__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum14
    _grid_load_load_phase_c_single_phase_pll1_sum14__out = _grid_load_load_phase_c_single_phase_pll1_integrator9__out - _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.C function1
    _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq = _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out;
    _grid_load_load_phase_c_single_phase_pll1_c_function1__va = _grid_load_load_phase_c_single_phase_pll1_integrator1__out;
    _grid_load_load_phase_c_single_phase_pll1_c_function1__vb = _grid_load_load_phase_c_single_phase_pll1_integrator2__out;
    {
        _grid_load_load_phase_c_single_phase_pll1_c_function1__vq = cos ( _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_c_single_phase_pll1_c_function1__va + sin ( _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_c_single_phase_pll1_c_function1__vb ;
        _grid_load_load_phase_c_single_phase_pll1_c_function1__vd = - sin ( _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_c_single_phase_pll1_c_function1__va + cos ( _grid_load_load_phase_c_single_phase_pll1_c_function1__theta_dq ) * _grid_load_load_phase_c_single_phase_pll1_c_function1__vb ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Trigonometric function1
    _grid_load_load_phase_c_single_phase_pll1_trigonometric_function1__out = sin(_grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: Grid Load.Load.Phase C.Termination2
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.FFT
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__f1 = _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h[0] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_const_h__out[0];
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h[1] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_const_h__out[1];
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__signal = _grid_load_load_phase_c_v__out;
    {
        if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__reset )     {
            for ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i )         {
                _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__N ;
                _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = sqrt ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] + _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] ) ;
                if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] > 0 ) _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] < 0 ) _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = atan2 ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] , _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
            }
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__signal * sin ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] += _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__signal * cos ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__h [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] ;
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__i ] ;
        }
        _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt = _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.RMS value1
    if (_grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_c_grid_synchronization_rms_value1__out_state = sqrt(_grid_load_load_phase_c_grid_synchronization_rms_value1__square_sum / (2 * M_PI));
        _grid_load_load_phase_c_grid_synchronization_rms_value1__square_sum = 0.0f;
        _grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_c_grid_synchronization_rms_value1__out = _grid_load_load_phase_c_grid_synchronization_rms_value1__out_state;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.FFT
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__f1 = _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_const_h__out[0];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_const_h__out[1];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__signal = _grid_load_load_phase_c_v__out;
    {
        if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__reset )     {
            for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i )         {
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__N ;
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = sqrt ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] + _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] ) ;
                if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] /= 2 ;
                if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] == 0 )             {
                    if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] > 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = 90 ;
                    else if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] < 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = - 90 ;
                    else if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
                }
                else             {
                    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = atan2 ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] , _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] ) * 180 / M_PI ;
                }
                _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
            }
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__reset = 0 ;
        }
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_re [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__signal * sin ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__sum_im [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] += _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__signal * cos ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__h [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
        }
        for ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i = 0 ; _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase_state [ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__i ] ;
        }
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum1
    _grid_load_load_phase_c_single_phase_pll1_sum1__out =  - _grid_load_load_phase_c_single_phase_pll1_integrator1__out + _grid_load_load_phase_c_v__out;
    // Generated from the component: Grid Load.Load.Phase C.Relational operator3
    _grid_load_load_phase_c_relational_operator3__out = (_grid_load_load_phase_c_dimension__out > _grid_load_load_phase_c_const_one__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator22
    _grid_load_load_phase_c_logical_operator22__out = !_grid_load_load_phase_c_zig_zag_handler__C_en;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator23
    _grid_load_load_phase_c_logical_operator23__out = !_grid_load_load_phase_c_zig_zag_handler__R_en;
    // Generated from the component: Grid Load.Load.Bus Join2
    _grid_load_load_bus_join2__out[0] = _grid_load_load_pref__out;
    _grid_load_load_bus_join2__out[1] = _grid_load_load_qref__out;
    // Generated from the component: Grid Load.Load.Bus Join1
    _grid_load_load_bus_join1__out[0] = _grid_load_load_pref_phasea__out;
    _grid_load_load_bus_join1__out[1] = _grid_load_load_qref_phasea__out;
    // Generated from the component: Grid Load.Load.Bus Join3
    _grid_load_load_bus_join3__out[0] = _grid_load_load_pref_phaseb__out;
    _grid_load_load_bus_join3__out[1] = _grid_load_load_qref_phaseb__out;
    // Generated from the component: Grid Load.Load.Bus Join5
    _grid_load_load_bus_join5__out[0] = _grid_load_load_pref_phasec__out;
    _grid_load_load_bus_join5__out[1] = _grid_load_load_qref_phasec__out;
    // Generated from the component: Grid Load.Load.Limit8
    _grid_load_load_limit8__out = MAX(_grid_load_load_roc__out, 0.001);
    // Generated from the component: LC Filter.bus_join
    _lc_filter_bus_join__out[0] = _lc_filter_ila1_ia1__out;
    _lc_filter_bus_join__out[1] = _lc_filter_ilb1_ia1__out;
    _lc_filter_bus_join__out[2] = _lc_filter_ilc1_ia1__out;
    // Generated from the component: LC Filter.bus_join1
    _lc_filter_bus_join1__out[0] = _lc_filter_vca1_va1__out;
    _lc_filter_bus_join1__out[1] = _lc_filter_vca2_va1__out;
    _lc_filter_bus_join1__out[2] = _lc_filter_vca3_va1__out;
    // Generated from the component: Line Impedance.bus_join
    _line_impedance_bus_join__out[0] = _line_impedance_ilag_ia1__out;
    _line_impedance_bus_join__out[1] = _line_impedance_ilbg_ia1__out;
    _line_impedance_bus_join__out[2] = _line_impedance_ilcg_ia1__out;
    // Generated from the component: STEADY_STATE_FB
    HIL_OutAO(0x4017, (float)_steady_state__out);
    // Generated from the component: TEST_FLAG_FB
    HIL_OutAO(0x4018, (float)_test_flag__out);
    // Generated from the component: SQRT_2
    _sqrt_2__out = 0.8164965809277261 * _v_line_rms__out;
    // Generated from the component: DC Bus.C2.reciprocal
    _dc_bus_c2_reciprocal__out = 1.0 / (_gain1__out);
    // Generated from the component: DC Bus.C3.reciprocal
    _dc_bus_c3_reciprocal__out = 1.0 / (_gain1__out);
    // Generated from the component: Grid Load.Load.Balance_en_fb
    HIL_OutInt32(0xf00400, _grid_load_load_relational_operator4__out != 0x0);
    // Generated from the component: Grid Load.Load.Termination10
    // Generated from the component: Grid Load.Load.Enable_fb
    HIL_OutInt32(0xf00401, _grid_load_load_relational_operator3__out != 0x0);
    // Generated from the component: Grid Load.Load.Termination1
    // Generated from the component: Grid Load.Load.Phase A.Relational operator1
    _grid_load_load_phase_a_relational_operator1__out = (_grid_load_load_phase_a_constant3__out >= _grid_load_load_phase_a_f_to_w10__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase A.C function4
    _grid_load_load_phase_a_c_function4__Pref = _grid_load_load_phase_a_f_to_w7__out;
    _grid_load_load_phase_a_c_function4__Pref_late = _grid_load_load_phase_a_transport_delay2__out;
    {
        if ( _grid_load_load_phase_a_c_function4__Pref == _grid_load_load_phase_a_c_function4__Pref_late )     {
            _grid_load_load_phase_a_c_function4__out = 1 ;
        }
        else     {
            _grid_load_load_phase_a_c_function4__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Abs3
    _grid_load_load_phase_a_abs3__out = fabs(_grid_load_load_phase_a_f_to_w11__out);
    // Generated from the component: Grid Load.Load.Phase A.C function5
    _grid_load_load_phase_a_c_function5__Qref = _grid_load_load_phase_a_f_to_w6__out;
    _grid_load_load_phase_a_c_function5__Qref_late = _grid_load_load_phase_a_transport_delay1__out;
    {
        if ( _grid_load_load_phase_a_c_function5__Qref == _grid_load_load_phase_a_c_function5__Qref_late )     {
            _grid_load_load_phase_a_c_function5__out = 1 ;
        }
        else     {
            _grid_load_load_phase_a_c_function5__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Termination6
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Limit3
    _grid_load_load_phase_a_grid_synchronization_limit3__out = MIN(MAX(_grid_load_load_phase_a_grid_synchronization_f_to_w__out, 188.49555921538757), 628.3185307179587);
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.deg_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.phs_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_phs_gain__out[0] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase[0];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_phs_gain__out[1] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Termination13
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Termination11
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Product6
    _grid_load_load_phase_a_grid_synchronization_peak_calc_product6__out = (_grid_load_load_phase_a_grid_synchronization_peak_calc_limit4__out * _grid_load_load_phase_a_grid_synchronization_peak_calc_limit4__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain5
    _grid_load_load_phase_a_single_phase_pll1_gain5__out = 125.66370614359172 * _grid_load_load_phase_a_single_phase_pll1_sum4__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum12
    _grid_load_load_phase_a_single_phase_pll1_sum12__out = _grid_load_load_phase_a_single_phase_pll1_w_to_f__out - _grid_load_load_phase_a_single_phase_pll1_integrator7__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain7
    _grid_load_load_phase_a_single_phase_pll1_gain7__out = 628.3185307179587 * _grid_load_load_phase_a_single_phase_pll1_sum9__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain8
    _grid_load_load_phase_a_single_phase_pll1_gain8__out = 62.83185307179586 * _grid_load_load_phase_a_single_phase_pll1_sum11__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain10
    _grid_load_load_phase_a_single_phase_pll1_gain10__out = 62.83185307179586 * _grid_load_load_phase_a_single_phase_pll1_sum13__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain11
    _grid_load_load_phase_a_single_phase_pll1_gain11__out = 62.83185307179586 * _grid_load_load_phase_a_single_phase_pll1_sum14__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Limit5
    _grid_load_load_phase_a_grid_synchronization_peak_calc_limit5__out = MAX(_grid_load_load_phase_a_single_phase_pll1_c_function1__vq, 0.001);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain3
    _grid_load_load_phase_a_single_phase_pll1_gain3__out = -1.0 * _grid_load_load_phase_a_single_phase_pll1_c_function1__vd;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Math_f1
    _grid_load_load_phase_a_single_phase_pll1_math_f1__out = pow(_grid_load_load_phase_a_single_phase_pll1_c_function1__vq, _grid_load_load_phase_a_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Math_f2
    _grid_load_load_phase_a_single_phase_pll1_math_f2__out = pow(_grid_load_load_phase_a_single_phase_pll1_c_function1__vd, _grid_load_load_phase_a_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase A.Termination3
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Gain3
    _grid_load_load_phase_a_grid_synchronization_gain3__out[0] = 0.7071067811865476 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp[0];
    _grid_load_load_phase_a_grid_synchronization_gain3__out[1] = 0.7071067811865476 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__amp[1];
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.deg_gain
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.phs_gain
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_phs_gain__out[0] = 1.0 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase[0];
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_phs_gain__out[1] = 1.0 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Limit9
    _grid_load_load_phase_a_grid_synchronization_limit9__out = MIN(MAX(_grid_load_load_phase_a_grid_synchronization_rms_value1__out, 0.001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.deg_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.phs_gain
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_phs_gain__out[0] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase[0];
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_phs_gain__out[1] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain2
    _grid_load_load_phase_a_single_phase_pll1_gain2__out = 0.4 * _grid_load_load_phase_a_single_phase_pll1_sum1__out;
    // Generated from the component: Grid Load.Load.Phase B.Relational operator1
    _grid_load_load_phase_b_relational_operator1__out = (_grid_load_load_phase_b_constant3__out >= _grid_load_load_phase_b_f_to_w10__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase B.C function4
    _grid_load_load_phase_b_c_function4__Pref = _grid_load_load_phase_b_f_to_w7__out;
    _grid_load_load_phase_b_c_function4__Pref_late = _grid_load_load_phase_b_transport_delay2__out;
    {
        if ( _grid_load_load_phase_b_c_function4__Pref == _grid_load_load_phase_b_c_function4__Pref_late )     {
            _grid_load_load_phase_b_c_function4__out = 1 ;
        }
        else     {
            _grid_load_load_phase_b_c_function4__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Abs3
    _grid_load_load_phase_b_abs3__out = fabs(_grid_load_load_phase_b_f_to_w11__out);
    // Generated from the component: Grid Load.Load.Phase B.C function5
    _grid_load_load_phase_b_c_function5__Qref = _grid_load_load_phase_b_f_to_w6__out;
    _grid_load_load_phase_b_c_function5__Qref_late = _grid_load_load_phase_b_transport_delay1__out;
    {
        if ( _grid_load_load_phase_b_c_function5__Qref == _grid_load_load_phase_b_c_function5__Qref_late )     {
            _grid_load_load_phase_b_c_function5__out = 1 ;
        }
        else     {
            _grid_load_load_phase_b_c_function5__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Termination6
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Limit3
    _grid_load_load_phase_b_grid_synchronization_limit3__out = MIN(MAX(_grid_load_load_phase_b_grid_synchronization_f_to_w__out, 188.49555921538757), 628.3185307179587);
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.deg_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.phs_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_phs_gain__out[0] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase[0];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_phs_gain__out[1] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Termination13
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Termination11
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Product6
    _grid_load_load_phase_b_grid_synchronization_peak_calc_product6__out = (_grid_load_load_phase_b_grid_synchronization_peak_calc_limit4__out * _grid_load_load_phase_b_grid_synchronization_peak_calc_limit4__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain5
    _grid_load_load_phase_b_single_phase_pll1_gain5__out = 125.66370614359172 * _grid_load_load_phase_b_single_phase_pll1_sum4__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum12
    _grid_load_load_phase_b_single_phase_pll1_sum12__out = _grid_load_load_phase_b_single_phase_pll1_w_to_f__out - _grid_load_load_phase_b_single_phase_pll1_integrator7__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain7
    _grid_load_load_phase_b_single_phase_pll1_gain7__out = 628.3185307179587 * _grid_load_load_phase_b_single_phase_pll1_sum9__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain8
    _grid_load_load_phase_b_single_phase_pll1_gain8__out = 62.83185307179586 * _grid_load_load_phase_b_single_phase_pll1_sum11__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain10
    _grid_load_load_phase_b_single_phase_pll1_gain10__out = 62.83185307179586 * _grid_load_load_phase_b_single_phase_pll1_sum13__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain11
    _grid_load_load_phase_b_single_phase_pll1_gain11__out = 62.83185307179586 * _grid_load_load_phase_b_single_phase_pll1_sum14__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Limit5
    _grid_load_load_phase_b_grid_synchronization_peak_calc_limit5__out = MAX(_grid_load_load_phase_b_single_phase_pll1_c_function1__vq, 0.001);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain3
    _grid_load_load_phase_b_single_phase_pll1_gain3__out = -1.0 * _grid_load_load_phase_b_single_phase_pll1_c_function1__vd;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Math_f1
    _grid_load_load_phase_b_single_phase_pll1_math_f1__out = pow(_grid_load_load_phase_b_single_phase_pll1_c_function1__vq, _grid_load_load_phase_b_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Math_f2
    _grid_load_load_phase_b_single_phase_pll1_math_f2__out = pow(_grid_load_load_phase_b_single_phase_pll1_c_function1__vd, _grid_load_load_phase_b_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase B.Termination3
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Gain3
    _grid_load_load_phase_b_grid_synchronization_gain3__out[0] = 0.7071067811865476 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp[0];
    _grid_load_load_phase_b_grid_synchronization_gain3__out[1] = 0.7071067811865476 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__amp[1];
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.deg_gain
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.phs_gain
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_phs_gain__out[0] = 1.0 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase[0];
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_phs_gain__out[1] = 1.0 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Limit9
    _grid_load_load_phase_b_grid_synchronization_limit9__out = MIN(MAX(_grid_load_load_phase_b_grid_synchronization_rms_value1__out, 0.001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.deg_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.phs_gain
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_phs_gain__out[0] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase[0];
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_phs_gain__out[1] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain2
    _grid_load_load_phase_b_single_phase_pll1_gain2__out = 0.4 * _grid_load_load_phase_b_single_phase_pll1_sum1__out;
    // Generated from the component: Grid Load.Load.Phase C.Relational operator1
    _grid_load_load_phase_c_relational_operator1__out = (_grid_load_load_phase_c_constant3__out >= _grid_load_load_phase_c_f_to_w10__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase C.C function4
    _grid_load_load_phase_c_c_function4__Pref = _grid_load_load_phase_c_f_to_w7__out;
    _grid_load_load_phase_c_c_function4__Pref_late = _grid_load_load_phase_c_transport_delay2__out;
    {
        if ( _grid_load_load_phase_c_c_function4__Pref == _grid_load_load_phase_c_c_function4__Pref_late )     {
            _grid_load_load_phase_c_c_function4__out = 1 ;
        }
        else     {
            _grid_load_load_phase_c_c_function4__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Abs3
    _grid_load_load_phase_c_abs3__out = fabs(_grid_load_load_phase_c_f_to_w11__out);
    // Generated from the component: Grid Load.Load.Phase C.C function5
    _grid_load_load_phase_c_c_function5__Qref = _grid_load_load_phase_c_f_to_w6__out;
    _grid_load_load_phase_c_c_function5__Qref_late = _grid_load_load_phase_c_transport_delay1__out;
    {
        if ( _grid_load_load_phase_c_c_function5__Qref == _grid_load_load_phase_c_c_function5__Qref_late )     {
            _grid_load_load_phase_c_c_function5__out = 1 ;
        }
        else     {
            _grid_load_load_phase_c_c_function5__out = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.MCB_status
    HIL_OutInt32(0xf00402, _grid_load_load_logical_operator1__out != 0x0);
    // Generated from the component: Grid Load.Load.S1.CTC_Wrapper
    if (_grid_load_load_logical_operator1__out == 0x0) {
        HIL_OutInt32(0x8240483, 0x0);
    }
    else {
        HIL_OutInt32(0x8240483, 0x1);
    }
    // Generated from the component: Grid Load.Load.Termination2
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Termination6
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Limit3
    _grid_load_load_phase_c_grid_synchronization_limit3__out = MIN(MAX(_grid_load_load_phase_c_grid_synchronization_f_to_w__out, 188.49555921538757), 628.3185307179587);
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.deg_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.phs_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_phs_gain__out[0] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase[0];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_phs_gain__out[1] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Termination13
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Termination11
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Product6
    _grid_load_load_phase_c_grid_synchronization_peak_calc_product6__out = (_grid_load_load_phase_c_grid_synchronization_peak_calc_limit4__out * _grid_load_load_phase_c_grid_synchronization_peak_calc_limit4__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain5
    _grid_load_load_phase_c_single_phase_pll1_gain5__out = 125.66370614359172 * _grid_load_load_phase_c_single_phase_pll1_sum4__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum12
    _grid_load_load_phase_c_single_phase_pll1_sum12__out = _grid_load_load_phase_c_single_phase_pll1_w_to_f__out - _grid_load_load_phase_c_single_phase_pll1_integrator7__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain7
    _grid_load_load_phase_c_single_phase_pll1_gain7__out = 628.3185307179587 * _grid_load_load_phase_c_single_phase_pll1_sum9__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain8
    _grid_load_load_phase_c_single_phase_pll1_gain8__out = 62.83185307179586 * _grid_load_load_phase_c_single_phase_pll1_sum11__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain10
    _grid_load_load_phase_c_single_phase_pll1_gain10__out = 62.83185307179586 * _grid_load_load_phase_c_single_phase_pll1_sum13__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain11
    _grid_load_load_phase_c_single_phase_pll1_gain11__out = 62.83185307179586 * _grid_load_load_phase_c_single_phase_pll1_sum14__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Limit5
    _grid_load_load_phase_c_grid_synchronization_peak_calc_limit5__out = MAX(_grid_load_load_phase_c_single_phase_pll1_c_function1__vq, 0.001);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain3
    _grid_load_load_phase_c_single_phase_pll1_gain3__out = -1.0 * _grid_load_load_phase_c_single_phase_pll1_c_function1__vd;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Math_f1
    _grid_load_load_phase_c_single_phase_pll1_math_f1__out = pow(_grid_load_load_phase_c_single_phase_pll1_c_function1__vq, _grid_load_load_phase_c_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Math_f2
    _grid_load_load_phase_c_single_phase_pll1_math_f2__out = pow(_grid_load_load_phase_c_single_phase_pll1_c_function1__vd, _grid_load_load_phase_c_single_phase_pll1_constant2__out);
    // Generated from the component: Grid Load.Load.Phase C.Termination3
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Gain3
    _grid_load_load_phase_c_grid_synchronization_gain3__out[0] = 0.7071067811865476 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp[0];
    _grid_load_load_phase_c_grid_synchronization_gain3__out[1] = 0.7071067811865476 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__amp[1];
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.deg_gain
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.phs_gain
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_phs_gain__out[0] = 1.0 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase[0];
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_phs_gain__out[1] = 1.0 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Limit9
    _grid_load_load_phase_c_grid_synchronization_limit9__out = MIN(MAX(_grid_load_load_phase_c_grid_synchronization_rms_value1__out, 0.001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.deg_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_deg_gain__out = 57.29577951308232 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.phs_gain
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_phs_gain__out[0] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase[0];
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_phs_gain__out[1] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__phase[1];
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain2
    _grid_load_load_phase_c_single_phase_pll1_gain2__out = 0.4 * _grid_load_load_phase_c_single_phase_pll1_sum1__out;
    // Generated from the component: Grid Load.Load.Signal switch1
    _grid_load_load_signal_switch1__out[0] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[0] : _grid_load_load_bus_join1__out[0];
    _grid_load_load_signal_switch1__out[1] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[1] : _grid_load_load_bus_join1__out[1];
    // Generated from the component: Grid Load.Load.Signal switch2
    _grid_load_load_signal_switch2__out[0] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[0] : _grid_load_load_bus_join3__out[0];
    _grid_load_load_signal_switch2__out[1] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[1] : _grid_load_load_bus_join3__out[1];
    // Generated from the component: Grid Load.Load.Signal switch3
    _grid_load_load_signal_switch3__out[0] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[0] : _grid_load_load_bus_join5__out[0];
    _grid_load_load_signal_switch3__out[1] = (_grid_load_load_relational_operator4__out > 0.5f) ? _grid_load_load_bus_join2__out[1] : _grid_load_load_bus_join5__out[1];
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change.Ramping1.Gain1
    _grid_load_load_phase_a_rate_of_change_ramping1_gain1__out = 60000.0 * _grid_load_load_limit8__out;
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change1.Ramping1.Gain1
    _grid_load_load_phase_a_rate_of_change1_ramping1_gain1__out = 45000.0 * _grid_load_load_limit8__out;
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change.Ramping1.Gain1
    _grid_load_load_phase_b_rate_of_change_ramping1_gain1__out = 60000.0 * _grid_load_load_limit8__out;
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change1.Ramping1.Gain1
    _grid_load_load_phase_b_rate_of_change1_ramping1_gain1__out = 45000.0 * _grid_load_load_limit8__out;
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change.Ramping1.Gain1
    _grid_load_load_phase_c_rate_of_change_ramping1_gain1__out = 60000.0 * _grid_load_load_limit8__out;
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change1.Ramping1.Gain1
    _grid_load_load_phase_c_rate_of_change1_ramping1_gain1__out = 45000.0 * _grid_load_load_limit8__out;
    // Generated from the component: MEAS_CLARKE
    _meas_clarke__IN_I0_ABC[0] = _line_impedance_bus_join__out[0];
    _meas_clarke__IN_I0_ABC[1] = _line_impedance_bus_join__out[1];
    _meas_clarke__IN_I0_ABC[2] = _line_impedance_bus_join__out[2];
    _meas_clarke__IN_ILF_ABC[0] = _lc_filter_bus_join__out[0];
    _meas_clarke__IN_ILF_ABC[1] = _lc_filter_bus_join__out[1];
    _meas_clarke__IN_ILF_ABC[2] = _lc_filter_bus_join__out[2];
    _meas_clarke__IN_VC_ABC[0] = _lc_filter_bus_join1__out[0];
    _meas_clarke__IN_VC_ABC[1] = _lc_filter_bus_join1__out[1];
    _meas_clarke__IN_VC_ABC[2] = _lc_filter_bus_join1__out[2];
    {
        abcToAlphaBeta_PI ( _meas_clarke__IN_ILF_ABC [ 0 ] , _meas_clarke__IN_ILF_ABC [ 1 ] , _meas_clarke__IN_ILF_ABC [ 2 ] , & _meas_clarke__ilf_al , & _meas_clarke__ilf_be , & _meas_clarke__ilf_0 ) ;
        abcToAlphaBeta_PI ( _meas_clarke__IN_VC_ABC [ 0 ] , _meas_clarke__IN_VC_ABC [ 1 ] , _meas_clarke__IN_VC_ABC [ 2 ] , & _meas_clarke__vc_al , & _meas_clarke__vc_be , & _meas_clarke__vc_0 ) ;
        abcToAlphaBeta_PI ( _meas_clarke__IN_I0_ABC [ 0 ] , _meas_clarke__IN_I0_ABC [ 1 ] , _meas_clarke__IN_I0_ABC [ 2 ] , & _meas_clarke__i0_al , & _meas_clarke__i0_be , & _meas_clarke__i0_0 ) ;
        _meas_clarke__OUT_ILF_AB0 [ 0 ] = _meas_clarke__ilf_al ;
        _meas_clarke__OUT_ILF_AB0 [ 1 ] = _meas_clarke__ilf_be ;
        _meas_clarke__OUT_ILF_AB0 [ 2 ] = _meas_clarke__ilf_0 ;
        _meas_clarke__OUT_VC_AB0 [ 0 ] = _meas_clarke__vc_al ;
        _meas_clarke__OUT_VC_AB0 [ 1 ] = _meas_clarke__vc_be ;
        _meas_clarke__OUT_VC_AB0 [ 2 ] = _meas_clarke__vc_0 ;
        _meas_clarke__OUT_I0_AB0 [ 0 ] = _meas_clarke__i0_al ;
        _meas_clarke__OUT_I0_AB0 [ 1 ] = _meas_clarke__i0_be ;
        _meas_clarke__OUT_I0_AB0 [ 2 ] = _meas_clarke__i0_0 ;
    }
    // Generated from the component: 1byVdc2
    _1byvdc2__out = (_sqrt_2__out * _sine_a__out);
    // Generated from the component: 1byVdc3
    _1byvdc3__out = (_sqrt_2__out * _sine_b__out);
    // Generated from the component: 1byVdc4
    _1byvdc4__out = (_sqrt_2__out * _sine_c__out);
    // Generated from the component: DC Bus.C2.Vs
    HIL_OutFloat(141557760, (float) _dc_bus_c2_reciprocal__out);
    // Generated from the component: DC Bus.C3.Vs
    HIL_OutFloat(141557761, (float) _dc_bus_c3_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase A.Logical operator26
    _grid_load_load_phase_a_logical_operator26__out = _grid_load_load_phase_a_c_function5__out && _grid_load_load_phase_a_c_function4__out ;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.Gain1
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_gain1__out[0] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_deg_gain__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_gain1__out[1] = 0.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain9
    _grid_load_load_phase_a_single_phase_pll1_gain9__out = 62.83185307179586 * _grid_load_load_phase_a_single_phase_pll1_sum12__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Product7
    _grid_load_load_phase_a_grid_synchronization_peak_calc_product7__out = (_grid_load_load_phase_a_grid_synchronization_peak_calc_limit5__out * _grid_load_load_phase_a_grid_synchronization_peak_calc_limit5__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum7
    _grid_load_load_phase_a_single_phase_pll1_sum7__out = _grid_load_load_phase_a_single_phase_pll1_gain3__out - _grid_load_load_phase_a_single_phase_pll1_integrator3__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum6
    _grid_load_load_phase_a_single_phase_pll1_sum6__out = _grid_load_load_phase_a_single_phase_pll1_math_f1__out + _grid_load_load_phase_a_single_phase_pll1_math_f2__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Limit7
    _grid_load_load_phase_a_grid_synchronization_limit7__out[0] = MIN(MAX(_grid_load_load_phase_a_grid_synchronization_gain3__out[0], 0.0001), 35925.849560819945);
    _grid_load_load_phase_a_grid_synchronization_limit7__out[1] = MIN(MAX(_grid_load_load_phase_a_grid_synchronization_gain3__out[1], 0.0001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.Gain1
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_gain1__out[0] = 1.0 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_gain1__out[1] = 0.0 * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Termination1
    // Generated from the component: Grid Load.Load.Phase A.Limit10
    _grid_load_load_phase_a_limit10__out = MAX(_grid_load_load_phase_a_grid_synchronization_limit9__out, 35.92584956081994);
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.Gain1
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_gain1__out[0] = 1.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_deg_gain__out;
    _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_gain1__out[1] = 0.0 * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Lref_calc
    _grid_load_load_phase_a_power_measurement_lref_calc__I[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp[0];
    _grid_load_load_phase_a_power_measurement_lref_calc__I[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__amp[1];
    _grid_load_load_phase_a_power_measurement_lref_calc__V[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp[0];
    _grid_load_load_phase_a_power_measurement_lref_calc__V[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__amp[1];
    _grid_load_load_phase_a_power_measurement_lref_calc__tetaI[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_phs_gain__out[0];
    _grid_load_load_phase_a_power_measurement_lref_calc__tetaI[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_phs_gain__out[1];
    _grid_load_load_phase_a_power_measurement_lref_calc__tetaV[0] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_phs_gain__out[0];
    _grid_load_load_phase_a_power_measurement_lref_calc__tetaV[1] = _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_phs_gain__out[1];
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_a_power_measurement_lref_calc__P = _grid_load_load_phase_a_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_a_power_measurement_lref_calc__I [ 0 ] * 0.5 * cos ( ( _grid_load_load_phase_a_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_a_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
            _grid_load_load_phase_a_power_measurement_lref_calc__Q = _grid_load_load_phase_a_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_a_power_measurement_lref_calc__I [ 0 ] * 0.5 * sin ( ( _grid_load_load_phase_a_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_a_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
        }
        else     {
            for ( _grid_load_load_phase_a_power_measurement_lref_calc__i = 0 ; _grid_load_load_phase_a_power_measurement_lref_calc__i < 1.0 ; _grid_load_load_phase_a_power_measurement_lref_calc__i ++ )         {
                _grid_load_load_phase_a_power_measurement_lref_calc__Psum += _grid_load_load_phase_a_power_measurement_lref_calc__V [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] * _grid_load_load_phase_a_power_measurement_lref_calc__I [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] * 0.5 * cos ( ( _grid_load_load_phase_a_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] - _grid_load_load_phase_a_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
                _grid_load_load_phase_a_power_measurement_lref_calc__Qsum += _grid_load_load_phase_a_power_measurement_lref_calc__V [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] * _grid_load_load_phase_a_power_measurement_lref_calc__I [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] * 0.5 * sin ( ( _grid_load_load_phase_a_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] - _grid_load_load_phase_a_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_a_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
            }
            _grid_load_load_phase_a_power_measurement_lref_calc__P = _grid_load_load_phase_a_power_measurement_lref_calc__Psum ;
            _grid_load_load_phase_a_power_measurement_lref_calc__Q = _grid_load_load_phase_a_power_measurement_lref_calc__Qsum ;
            _grid_load_load_phase_a_power_measurement_lref_calc__Psum = 0 ;
            _grid_load_load_phase_a_power_measurement_lref_calc__Qsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum2
    _grid_load_load_phase_a_single_phase_pll1_sum2__out = _grid_load_load_phase_a_single_phase_pll1_gain2__out - _grid_load_load_phase_a_single_phase_pll1_integrator2__out;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator26
    _grid_load_load_phase_b_logical_operator26__out = _grid_load_load_phase_b_c_function5__out && _grid_load_load_phase_b_c_function4__out ;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.Gain1
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_gain1__out[0] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_deg_gain__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_gain1__out[1] = 0.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain9
    _grid_load_load_phase_b_single_phase_pll1_gain9__out = 62.83185307179586 * _grid_load_load_phase_b_single_phase_pll1_sum12__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Product7
    _grid_load_load_phase_b_grid_synchronization_peak_calc_product7__out = (_grid_load_load_phase_b_grid_synchronization_peak_calc_limit5__out * _grid_load_load_phase_b_grid_synchronization_peak_calc_limit5__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum7
    _grid_load_load_phase_b_single_phase_pll1_sum7__out = _grid_load_load_phase_b_single_phase_pll1_gain3__out - _grid_load_load_phase_b_single_phase_pll1_integrator3__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum6
    _grid_load_load_phase_b_single_phase_pll1_sum6__out = _grid_load_load_phase_b_single_phase_pll1_math_f1__out + _grid_load_load_phase_b_single_phase_pll1_math_f2__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Limit7
    _grid_load_load_phase_b_grid_synchronization_limit7__out[0] = MIN(MAX(_grid_load_load_phase_b_grid_synchronization_gain3__out[0], 0.0001), 35925.849560819945);
    _grid_load_load_phase_b_grid_synchronization_limit7__out[1] = MIN(MAX(_grid_load_load_phase_b_grid_synchronization_gain3__out[1], 0.0001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.Gain1
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_gain1__out[0] = 1.0 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_gain1__out[1] = 0.0 * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Termination1
    // Generated from the component: Grid Load.Load.Phase B.Limit10
    _grid_load_load_phase_b_limit10__out = MAX(_grid_load_load_phase_b_grid_synchronization_limit9__out, 35.92584956081994);
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.Gain1
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_gain1__out[0] = 1.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_deg_gain__out;
    _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_gain1__out[1] = 0.0 * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Lref_calc
    _grid_load_load_phase_b_power_measurement_lref_calc__I[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp[0];
    _grid_load_load_phase_b_power_measurement_lref_calc__I[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__amp[1];
    _grid_load_load_phase_b_power_measurement_lref_calc__V[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp[0];
    _grid_load_load_phase_b_power_measurement_lref_calc__V[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__amp[1];
    _grid_load_load_phase_b_power_measurement_lref_calc__tetaI[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_phs_gain__out[0];
    _grid_load_load_phase_b_power_measurement_lref_calc__tetaI[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_phs_gain__out[1];
    _grid_load_load_phase_b_power_measurement_lref_calc__tetaV[0] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_phs_gain__out[0];
    _grid_load_load_phase_b_power_measurement_lref_calc__tetaV[1] = _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_phs_gain__out[1];
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_b_power_measurement_lref_calc__P = _grid_load_load_phase_b_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_b_power_measurement_lref_calc__I [ 0 ] * 0.5 * cos ( ( _grid_load_load_phase_b_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_b_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
            _grid_load_load_phase_b_power_measurement_lref_calc__Q = _grid_load_load_phase_b_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_b_power_measurement_lref_calc__I [ 0 ] * 0.5 * sin ( ( _grid_load_load_phase_b_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_b_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
        }
        else     {
            for ( _grid_load_load_phase_b_power_measurement_lref_calc__i = 0 ; _grid_load_load_phase_b_power_measurement_lref_calc__i < 1.0 ; _grid_load_load_phase_b_power_measurement_lref_calc__i ++ )         {
                _grid_load_load_phase_b_power_measurement_lref_calc__Psum += _grid_load_load_phase_b_power_measurement_lref_calc__V [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] * _grid_load_load_phase_b_power_measurement_lref_calc__I [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] * 0.5 * cos ( ( _grid_load_load_phase_b_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] - _grid_load_load_phase_b_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
                _grid_load_load_phase_b_power_measurement_lref_calc__Qsum += _grid_load_load_phase_b_power_measurement_lref_calc__V [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] * _grid_load_load_phase_b_power_measurement_lref_calc__I [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] * 0.5 * sin ( ( _grid_load_load_phase_b_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] - _grid_load_load_phase_b_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_b_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
            }
            _grid_load_load_phase_b_power_measurement_lref_calc__P = _grid_load_load_phase_b_power_measurement_lref_calc__Psum ;
            _grid_load_load_phase_b_power_measurement_lref_calc__Q = _grid_load_load_phase_b_power_measurement_lref_calc__Qsum ;
            _grid_load_load_phase_b_power_measurement_lref_calc__Psum = 0 ;
            _grid_load_load_phase_b_power_measurement_lref_calc__Qsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum2
    _grid_load_load_phase_b_single_phase_pll1_sum2__out = _grid_load_load_phase_b_single_phase_pll1_gain2__out - _grid_load_load_phase_b_single_phase_pll1_integrator2__out;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator26
    _grid_load_load_phase_c_logical_operator26__out = _grid_load_load_phase_c_c_function5__out && _grid_load_load_phase_c_c_function4__out ;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.Gain1
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_gain1__out[0] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_deg_gain__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_gain1__out[1] = 0.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain9
    _grid_load_load_phase_c_single_phase_pll1_gain9__out = 62.83185307179586 * _grid_load_load_phase_c_single_phase_pll1_sum12__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Product7
    _grid_load_load_phase_c_grid_synchronization_peak_calc_product7__out = (_grid_load_load_phase_c_grid_synchronization_peak_calc_limit5__out * _grid_load_load_phase_c_grid_synchronization_peak_calc_limit5__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum7
    _grid_load_load_phase_c_single_phase_pll1_sum7__out = _grid_load_load_phase_c_single_phase_pll1_gain3__out - _grid_load_load_phase_c_single_phase_pll1_integrator3__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum6
    _grid_load_load_phase_c_single_phase_pll1_sum6__out = _grid_load_load_phase_c_single_phase_pll1_math_f1__out + _grid_load_load_phase_c_single_phase_pll1_math_f2__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Limit7
    _grid_load_load_phase_c_grid_synchronization_limit7__out[0] = MIN(MAX(_grid_load_load_phase_c_grid_synchronization_gain3__out[0], 0.0001), 35925.849560819945);
    _grid_load_load_phase_c_grid_synchronization_limit7__out[1] = MIN(MAX(_grid_load_load_phase_c_grid_synchronization_gain3__out[1], 0.0001), 35925.849560819945);
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.Gain1
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_gain1__out[0] = 1.0 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_gain1__out[1] = 0.0 * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Termination1
    // Generated from the component: Grid Load.Load.Phase C.Limit10
    _grid_load_load_phase_c_limit10__out = MAX(_grid_load_load_phase_c_grid_synchronization_limit9__out, 35.92584956081994);
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.Gain1
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_gain1__out[0] = 1.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_deg_gain__out;
    _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_gain1__out[1] = 0.0 * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_deg_gain__out;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Lref_calc
    _grid_load_load_phase_c_power_measurement_lref_calc__I[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp[0];
    _grid_load_load_phase_c_power_measurement_lref_calc__I[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__amp[1];
    _grid_load_load_phase_c_power_measurement_lref_calc__V[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp[0];
    _grid_load_load_phase_c_power_measurement_lref_calc__V[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__amp[1];
    _grid_load_load_phase_c_power_measurement_lref_calc__tetaI[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_phs_gain__out[0];
    _grid_load_load_phase_c_power_measurement_lref_calc__tetaI[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_phs_gain__out[1];
    _grid_load_load_phase_c_power_measurement_lref_calc__tetaV[0] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_phs_gain__out[0];
    _grid_load_load_phase_c_power_measurement_lref_calc__tetaV[1] = _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_phs_gain__out[1];
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_c_power_measurement_lref_calc__P = _grid_load_load_phase_c_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_c_power_measurement_lref_calc__I [ 0 ] * 0.5 * cos ( ( _grid_load_load_phase_c_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_c_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
            _grid_load_load_phase_c_power_measurement_lref_calc__Q = _grid_load_load_phase_c_power_measurement_lref_calc__V [ 0 ] * _grid_load_load_phase_c_power_measurement_lref_calc__I [ 0 ] * 0.5 * sin ( ( _grid_load_load_phase_c_power_measurement_lref_calc__tetaV [ 0 ] - _grid_load_load_phase_c_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
        }
        else     {
            for ( _grid_load_load_phase_c_power_measurement_lref_calc__i = 0 ; _grid_load_load_phase_c_power_measurement_lref_calc__i < 1.0 ; _grid_load_load_phase_c_power_measurement_lref_calc__i ++ )         {
                _grid_load_load_phase_c_power_measurement_lref_calc__Psum += _grid_load_load_phase_c_power_measurement_lref_calc__V [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] * _grid_load_load_phase_c_power_measurement_lref_calc__I [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] * 0.5 * cos ( ( _grid_load_load_phase_c_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] - _grid_load_load_phase_c_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
                _grid_load_load_phase_c_power_measurement_lref_calc__Qsum += _grid_load_load_phase_c_power_measurement_lref_calc__V [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] * _grid_load_load_phase_c_power_measurement_lref_calc__I [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] * 0.5 * sin ( ( _grid_load_load_phase_c_power_measurement_lref_calc__tetaV [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] - _grid_load_load_phase_c_power_measurement_lref_calc__tetaI [ _grid_load_load_phase_c_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
            }
            _grid_load_load_phase_c_power_measurement_lref_calc__P = _grid_load_load_phase_c_power_measurement_lref_calc__Psum ;
            _grid_load_load_phase_c_power_measurement_lref_calc__Q = _grid_load_load_phase_c_power_measurement_lref_calc__Qsum ;
            _grid_load_load_phase_c_power_measurement_lref_calc__Psum = 0 ;
            _grid_load_load_phase_c_power_measurement_lref_calc__Qsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum2
    _grid_load_load_phase_c_single_phase_pll1_sum2__out = _grid_load_load_phase_c_single_phase_pll1_gain2__out - _grid_load_load_phase_c_single_phase_pll1_integrator2__out;
    // Generated from the component: Grid Load.Load.Bus Split4
    _grid_load_load_bus_split4__out = _grid_load_load_signal_switch1__out[0];
    _grid_load_load_bus_split4__out1 = _grid_load_load_signal_switch1__out[1];
    // Generated from the component: Grid Load.Load.Bus Split2
    _grid_load_load_bus_split2__out = _grid_load_load_signal_switch2__out[0];
    _grid_load_load_bus_split2__out1 = _grid_load_load_signal_switch2__out[1];
    // Generated from the component: Grid Load.Load.Bus Split3
    _grid_load_load_bus_split3__out = _grid_load_load_signal_switch3__out[0];
    _grid_load_load_bus_split3__out1 = _grid_load_load_signal_switch3__out[1];
    // Generated from the component: Bus Selector2
    _bus_selector2__out = _meas_clarke__OUT_ILF_AB0[0];
    // Generated from the component: Bus Selector3
    _bus_selector3__out = _meas_clarke__OUT_VC_AB0[0];
    // Generated from the component: Bus Selector5
    _bus_selector5__out = _meas_clarke__OUT_ILF_AB0[1];
    // Generated from the component: Bus Selector6
    _bus_selector6__out = _meas_clarke__OUT_VC_AB0[1];
    // Generated from the component: ILF_AB0
    HIL_OutAO(0x4012, (float)_meas_clarke__OUT_ILF_AB0[0]);
    HIL_OutAO(0x4013, (float)_meas_clarke__OUT_ILF_AB0[1]);
    HIL_OutAO(0x4014, (float)_meas_clarke__OUT_ILF_AB0[2]);
    // Generated from the component: VC_AB0
    HIL_OutAO(0x401c, (float)_meas_clarke__OUT_VC_AB0[0]);
    HIL_OutAO(0x401d, (float)_meas_clarke__OUT_VC_AB0[1]);
    HIL_OutAO(0x401e, (float)_meas_clarke__OUT_VC_AB0[2]);
    // Generated from the component: Bus Join1
    _bus_join1__out[0] = _1byvdc2__out;
    _bus_join1__out[1] = _1byvdc3__out;
    _bus_join1__out[2] = _1byvdc4__out;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Termination12
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Sum2
    _grid_load_load_phase_a_grid_synchronization_peak_calc_sum2__out = _grid_load_load_phase_a_grid_synchronization_peak_calc_product6__out + _grid_load_load_phase_a_grid_synchronization_peak_calc_product7__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain4
    _grid_load_load_phase_a_single_phase_pll1_gain4__out = 125.66370614359172 * _grid_load_load_phase_a_single_phase_pll1_sum7__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Math1
    _grid_load_load_phase_a_single_phase_pll1_math1__out = sqrt(_grid_load_load_phase_a_single_phase_pll1_sum6__out);
    // Generated from the component: Grid Load.Load.Phase A.Active power losses
    _grid_load_load_phase_a_active_power_losses__Cs = _grid_load_load_phase_a_unit_delay5__out;
    _grid_load_load_phase_a_active_power_losses__L = _grid_load_load_phase_a_unit_delay6__out;
    _grid_load_load_phase_a_active_power_losses__Pref = _grid_load_load_phase_a_unit_delay3__out;
    _grid_load_load_phase_a_active_power_losses__Qref = _grid_load_load_phase_a_unit_delay4__out;
    _grid_load_load_phase_a_active_power_losses__R = _grid_load_load_phase_a_unit_delay8__out;
    _grid_load_load_phase_a_active_power_losses__Vrms[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_active_power_losses__Vrms[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_active_power_losses__harmonics[0] = _grid_load_load_phase_a_harmonic_vector3__out[0];
    _grid_load_load_phase_a_active_power_losses__harmonics[1] = _grid_load_load_phase_a_harmonic_vector3__out[1];
    _grid_load_load_phase_a_active_power_losses__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_a_active_power_losses__Rek = _grid_load_load_phase_a_active_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_a_active_power_losses__Xl = _grid_load_load_phase_a_active_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_a_active_power_losses__Xc = 1 / ( _grid_load_load_phase_a_active_power_losses__w * _grid_load_load_phase_a_active_power_losses__Cs ) ;
            _grid_load_load_phase_a_active_power_losses__I_cap = _grid_load_load_phase_a_active_power_losses__Vrms [ 0 ] / sqrt ( _grid_load_load_phase_a_active_power_losses__Rek * _grid_load_load_phase_a_active_power_losses__Rek + ( _grid_load_load_phase_a_active_power_losses__Xc - _grid_load_load_phase_a_active_power_losses__Xl ) * ( _grid_load_load_phase_a_active_power_losses__Xc - _grid_load_load_phase_a_active_power_losses__Xl ) ) ;
            if ( _grid_load_load_phase_a_active_power_losses__Qref > 0 )         {
                _grid_load_load_phase_a_active_power_losses__Iind = _grid_load_load_phase_a_active_power_losses__Vrms [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_a_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_a_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_a_active_power_losses__Ploss = _grid_load_load_phase_a_active_power_losses__I_cap * _grid_load_load_phase_a_active_power_losses__I_cap * 0.010812663781955268 * 0 + _grid_load_load_phase_a_active_power_losses__Iind * _grid_load_load_phase_a_active_power_losses__Iind * 6.883555555555557 ;
            }
            else         {
                _grid_load_load_phase_a_active_power_losses__Ploss = _grid_load_load_phase_a_active_power_losses__I_cap * _grid_load_load_phase_a_active_power_losses__I_cap * 0.010812663781955268 * 0 ;
            }
        }
        else     {
            for ( _grid_load_load_phase_a_active_power_losses__i = 0 ; _grid_load_load_phase_a_active_power_losses__i < 1.0 ; _grid_load_load_phase_a_active_power_losses__i ++ )         {
                if ( _grid_load_load_phase_a_active_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_a_active_power_losses__Psum += _grid_load_load_phase_a_active_power_losses__Vrms [ _grid_load_load_phase_a_active_power_losses__i ] * _grid_load_load_phase_a_active_power_losses__Vrms [ _grid_load_load_phase_a_active_power_losses__i ] * 6.883555555555557 / ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_a_active_power_losses__w * _grid_load_load_phase_a_active_power_losses__harmonics [ _grid_load_load_phase_a_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_a_active_power_losses__w * _grid_load_load_phase_a_active_power_losses__harmonics [ _grid_load_load_phase_a_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) ) ;
                }
                else             {
                    _grid_load_load_phase_a_active_power_losses__Psum = 0 ;
                }
            }
            _grid_load_load_phase_a_active_power_losses__Ploss = _grid_load_load_phase_a_active_power_losses__Psum ;
            _grid_load_load_phase_a_active_power_losses__Psum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Reactive power losses
    _grid_load_load_phase_a_reactive_power_losses__Cs = _grid_load_load_phase_a_unit_delay7__out;
    _grid_load_load_phase_a_reactive_power_losses__Qref = _grid_load_load_phase_a_unit_delay2__out;
    _grid_load_load_phase_a_reactive_power_losses__R = _grid_load_load_phase_a_unit_delay1__out;
    _grid_load_load_phase_a_reactive_power_losses__V[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_reactive_power_losses__V[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_reactive_power_losses__harmonics[0] = _grid_load_load_phase_a_harmonic_vector2__out[0];
    _grid_load_load_phase_a_reactive_power_losses__harmonics[1] = _grid_load_load_phase_a_harmonic_vector2__out[1];
    _grid_load_load_phase_a_reactive_power_losses__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_a_reactive_power_losses__Rek = _grid_load_load_phase_a_reactive_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_a_reactive_power_losses__Xl = _grid_load_load_phase_a_reactive_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_a_reactive_power_losses__Xc = 1 / ( _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) ;
            _grid_load_load_phase_a_reactive_power_losses__Il = _grid_load_load_phase_a_reactive_power_losses__V [ 0 ] / sqrt ( _grid_load_load_phase_a_reactive_power_losses__Rek * _grid_load_load_phase_a_reactive_power_losses__Rek + ( _grid_load_load_phase_a_reactive_power_losses__Xl - _grid_load_load_phase_a_reactive_power_losses__Xc ) * ( _grid_load_load_phase_a_reactive_power_losses__Xl - _grid_load_load_phase_a_reactive_power_losses__Xc ) ) ;
            if ( _grid_load_load_phase_a_reactive_power_losses__Qref > 0 )         {
                _grid_load_load_phase_a_reactive_power_losses__Iind = _grid_load_load_phase_a_reactive_power_losses__V [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_a_reactive_power_losses__Qloss = _grid_load_load_phase_a_reactive_power_losses__Il * _grid_load_load_phase_a_reactive_power_losses__Il * ( _grid_load_load_phase_a_reactive_power_losses__Xl - _grid_load_load_phase_a_reactive_power_losses__Xc ) - _grid_load_load_phase_a_reactive_power_losses__Iind * _grid_load_load_phase_a_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ;
            }
            else         {
                _grid_load_load_phase_a_reactive_power_losses__Iind = 0 ;
                _grid_load_load_phase_a_reactive_power_losses__Qloss = _grid_load_load_phase_a_reactive_power_losses__Il * _grid_load_load_phase_a_reactive_power_losses__Il * _grid_load_load_phase_a_reactive_power_losses__Xl * 0 ;
            }
        }
        else     {
            _grid_load_load_phase_a_reactive_power_losses__Rek = _grid_load_load_phase_a_reactive_power_losses__R + 0.010812663781955268 ;
            for ( _grid_load_load_phase_a_reactive_power_losses__i = 0 ; _grid_load_load_phase_a_reactive_power_losses__i < 1.0 ; _grid_load_load_phase_a_reactive_power_losses__i ++ )         {
                if ( _grid_load_load_phase_a_reactive_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_a_reactive_power_losses__Iind = _grid_load_load_phase_a_reactive_power_losses__V [ _grid_load_load_phase_a_reactive_power_losses__i ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_a_reactive_power_losses__I = _grid_load_load_phase_a_reactive_power_losses__V [ _grid_load_load_phase_a_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_a_reactive_power_losses__Rek * _grid_load_load_phase_a_reactive_power_losses__Rek + ( _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_a_reactive_power_losses__Qsum += ( _grid_load_load_phase_a_reactive_power_losses__I * _grid_load_load_phase_a_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_a_reactive_power_losses__Iind * _grid_load_load_phase_a_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_a_reactive_power_losses__Isum += ( _grid_load_load_phase_a_reactive_power_losses__I * _grid_load_load_phase_a_reactive_power_losses__I ) ;
                    _grid_load_load_phase_a_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_a_reactive_power_losses__Iind = 0 ;
                }
                else             {
                    _grid_load_load_phase_a_reactive_power_losses__Iind = 0 ;
                    _grid_load_load_phase_a_reactive_power_losses__I = 0 * _grid_load_load_phase_a_reactive_power_losses__V [ _grid_load_load_phase_a_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_a_reactive_power_losses__Rek * _grid_load_load_phase_a_reactive_power_losses__Rek + ( _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_a_reactive_power_losses__Qsum += ( _grid_load_load_phase_a_reactive_power_losses__I * _grid_load_load_phase_a_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * _grid_load_load_phase_a_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_a_reactive_power_losses__Iind * _grid_load_load_phase_a_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_a_reactive_power_losses__harmonics [ _grid_load_load_phase_a_reactive_power_losses__i ] * _grid_load_load_phase_a_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_a_reactive_power_losses__Isum += ( _grid_load_load_phase_a_reactive_power_losses__I * _grid_load_load_phase_a_reactive_power_losses__I ) ;
                    _grid_load_load_phase_a_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_a_reactive_power_losses__Iind = 0 ;
                }
            }
            _grid_load_load_phase_a_reactive_power_losses__Qloss = _grid_load_load_phase_a_reactive_power_losses__Qsum ;
            _grid_load_load_phase_a_reactive_power_losses__Il = sqrt ( _grid_load_load_phase_a_reactive_power_losses__Isum ) ;
            _grid_load_load_phase_a_reactive_power_losses__Qsum = 0 ;
            _grid_load_load_phase_a_reactive_power_losses__Isum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Termination3
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Termination10
    // Generated from the component: Grid Load.Load.Phase A.f_to_w8
    _grid_load_load_phase_a_f_to_w8__out = 0.001 * _grid_load_load_phase_a_power_measurement_lref_calc__P;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w9
    _grid_load_load_phase_a_f_to_w9__out = 0.001 * _grid_load_load_phase_a_power_measurement_lref_calc__Q;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product1
    _grid_load_load_phase_a_single_phase_pll1_product1__out = (_grid_load_load_phase_a_single_phase_pll1_sum2__out * _grid_load_load_phase_a_single_phase_pll1_integrator5__out);
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Termination12
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Sum2
    _grid_load_load_phase_b_grid_synchronization_peak_calc_sum2__out = _grid_load_load_phase_b_grid_synchronization_peak_calc_product6__out + _grid_load_load_phase_b_grid_synchronization_peak_calc_product7__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain4
    _grid_load_load_phase_b_single_phase_pll1_gain4__out = 125.66370614359172 * _grid_load_load_phase_b_single_phase_pll1_sum7__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Math1
    _grid_load_load_phase_b_single_phase_pll1_math1__out = sqrt(_grid_load_load_phase_b_single_phase_pll1_sum6__out);
    // Generated from the component: Grid Load.Load.Phase B.Active power losses
    _grid_load_load_phase_b_active_power_losses__Cs = _grid_load_load_phase_b_unit_delay5__out;
    _grid_load_load_phase_b_active_power_losses__L = _grid_load_load_phase_b_unit_delay6__out;
    _grid_load_load_phase_b_active_power_losses__Pref = _grid_load_load_phase_b_unit_delay3__out;
    _grid_load_load_phase_b_active_power_losses__Qref = _grid_load_load_phase_b_unit_delay4__out;
    _grid_load_load_phase_b_active_power_losses__R = _grid_load_load_phase_b_unit_delay8__out;
    _grid_load_load_phase_b_active_power_losses__Vrms[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_active_power_losses__Vrms[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_active_power_losses__harmonics[0] = _grid_load_load_phase_b_harmonic_vector3__out[0];
    _grid_load_load_phase_b_active_power_losses__harmonics[1] = _grid_load_load_phase_b_harmonic_vector3__out[1];
    _grid_load_load_phase_b_active_power_losses__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_b_active_power_losses__Rek = _grid_load_load_phase_b_active_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_b_active_power_losses__Xl = _grid_load_load_phase_b_active_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_b_active_power_losses__Xc = 1 / ( _grid_load_load_phase_b_active_power_losses__w * _grid_load_load_phase_b_active_power_losses__Cs ) ;
            _grid_load_load_phase_b_active_power_losses__I_cap = _grid_load_load_phase_b_active_power_losses__Vrms [ 0 ] / sqrt ( _grid_load_load_phase_b_active_power_losses__Rek * _grid_load_load_phase_b_active_power_losses__Rek + ( _grid_load_load_phase_b_active_power_losses__Xc - _grid_load_load_phase_b_active_power_losses__Xl ) * ( _grid_load_load_phase_b_active_power_losses__Xc - _grid_load_load_phase_b_active_power_losses__Xl ) ) ;
            if ( _grid_load_load_phase_b_active_power_losses__Qref > 0 )         {
                _grid_load_load_phase_b_active_power_losses__Iind = _grid_load_load_phase_b_active_power_losses__Vrms [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_b_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_b_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_b_active_power_losses__Ploss = _grid_load_load_phase_b_active_power_losses__I_cap * _grid_load_load_phase_b_active_power_losses__I_cap * 0.010812663781955268 * 0 + _grid_load_load_phase_b_active_power_losses__Iind * _grid_load_load_phase_b_active_power_losses__Iind * 6.883555555555557 ;
            }
            else         {
                _grid_load_load_phase_b_active_power_losses__Ploss = _grid_load_load_phase_b_active_power_losses__I_cap * _grid_load_load_phase_b_active_power_losses__I_cap * 0.010812663781955268 * 0 ;
            }
        }
        else     {
            for ( _grid_load_load_phase_b_active_power_losses__i = 0 ; _grid_load_load_phase_b_active_power_losses__i < 1.0 ; _grid_load_load_phase_b_active_power_losses__i ++ )         {
                if ( _grid_load_load_phase_b_active_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_b_active_power_losses__Psum += _grid_load_load_phase_b_active_power_losses__Vrms [ _grid_load_load_phase_b_active_power_losses__i ] * _grid_load_load_phase_b_active_power_losses__Vrms [ _grid_load_load_phase_b_active_power_losses__i ] * 6.883555555555557 / ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_b_active_power_losses__w * _grid_load_load_phase_b_active_power_losses__harmonics [ _grid_load_load_phase_b_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_b_active_power_losses__w * _grid_load_load_phase_b_active_power_losses__harmonics [ _grid_load_load_phase_b_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) ) ;
                }
                else             {
                    _grid_load_load_phase_b_active_power_losses__Psum = 0 ;
                }
            }
            _grid_load_load_phase_b_active_power_losses__Ploss = _grid_load_load_phase_b_active_power_losses__Psum ;
            _grid_load_load_phase_b_active_power_losses__Psum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Reactive power losses
    _grid_load_load_phase_b_reactive_power_losses__Cs = _grid_load_load_phase_b_unit_delay7__out;
    _grid_load_load_phase_b_reactive_power_losses__Qref = _grid_load_load_phase_b_unit_delay2__out;
    _grid_load_load_phase_b_reactive_power_losses__R = _grid_load_load_phase_b_unit_delay1__out;
    _grid_load_load_phase_b_reactive_power_losses__V[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_reactive_power_losses__V[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_reactive_power_losses__harmonics[0] = _grid_load_load_phase_b_harmonic_vector2__out[0];
    _grid_load_load_phase_b_reactive_power_losses__harmonics[1] = _grid_load_load_phase_b_harmonic_vector2__out[1];
    _grid_load_load_phase_b_reactive_power_losses__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_b_reactive_power_losses__Rek = _grid_load_load_phase_b_reactive_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_b_reactive_power_losses__Xl = _grid_load_load_phase_b_reactive_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_b_reactive_power_losses__Xc = 1 / ( _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) ;
            _grid_load_load_phase_b_reactive_power_losses__Il = _grid_load_load_phase_b_reactive_power_losses__V [ 0 ] / sqrt ( _grid_load_load_phase_b_reactive_power_losses__Rek * _grid_load_load_phase_b_reactive_power_losses__Rek + ( _grid_load_load_phase_b_reactive_power_losses__Xl - _grid_load_load_phase_b_reactive_power_losses__Xc ) * ( _grid_load_load_phase_b_reactive_power_losses__Xl - _grid_load_load_phase_b_reactive_power_losses__Xc ) ) ;
            if ( _grid_load_load_phase_b_reactive_power_losses__Qref > 0 )         {
                _grid_load_load_phase_b_reactive_power_losses__Iind = _grid_load_load_phase_b_reactive_power_losses__V [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_b_reactive_power_losses__Qloss = _grid_load_load_phase_b_reactive_power_losses__Il * _grid_load_load_phase_b_reactive_power_losses__Il * ( _grid_load_load_phase_b_reactive_power_losses__Xl - _grid_load_load_phase_b_reactive_power_losses__Xc ) - _grid_load_load_phase_b_reactive_power_losses__Iind * _grid_load_load_phase_b_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ;
            }
            else         {
                _grid_load_load_phase_b_reactive_power_losses__Iind = 0 ;
                _grid_load_load_phase_b_reactive_power_losses__Qloss = _grid_load_load_phase_b_reactive_power_losses__Il * _grid_load_load_phase_b_reactive_power_losses__Il * _grid_load_load_phase_b_reactive_power_losses__Xl * 0 ;
            }
        }
        else     {
            _grid_load_load_phase_b_reactive_power_losses__Rek = _grid_load_load_phase_b_reactive_power_losses__R + 0.010812663781955268 ;
            for ( _grid_load_load_phase_b_reactive_power_losses__i = 0 ; _grid_load_load_phase_b_reactive_power_losses__i < 1.0 ; _grid_load_load_phase_b_reactive_power_losses__i ++ )         {
                if ( _grid_load_load_phase_b_reactive_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_b_reactive_power_losses__Iind = _grid_load_load_phase_b_reactive_power_losses__V [ _grid_load_load_phase_b_reactive_power_losses__i ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_b_reactive_power_losses__I = _grid_load_load_phase_b_reactive_power_losses__V [ _grid_load_load_phase_b_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_b_reactive_power_losses__Rek * _grid_load_load_phase_b_reactive_power_losses__Rek + ( _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_b_reactive_power_losses__Qsum += ( _grid_load_load_phase_b_reactive_power_losses__I * _grid_load_load_phase_b_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_b_reactive_power_losses__Iind * _grid_load_load_phase_b_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_b_reactive_power_losses__Isum += ( _grid_load_load_phase_b_reactive_power_losses__I * _grid_load_load_phase_b_reactive_power_losses__I ) ;
                    _grid_load_load_phase_b_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_b_reactive_power_losses__Iind = 0 ;
                }
                else             {
                    _grid_load_load_phase_b_reactive_power_losses__Iind = 0 ;
                    _grid_load_load_phase_b_reactive_power_losses__I = 0 * _grid_load_load_phase_b_reactive_power_losses__V [ _grid_load_load_phase_b_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_b_reactive_power_losses__Rek * _grid_load_load_phase_b_reactive_power_losses__Rek + ( _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_b_reactive_power_losses__Qsum += ( _grid_load_load_phase_b_reactive_power_losses__I * _grid_load_load_phase_b_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * _grid_load_load_phase_b_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_b_reactive_power_losses__Iind * _grid_load_load_phase_b_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_b_reactive_power_losses__harmonics [ _grid_load_load_phase_b_reactive_power_losses__i ] * _grid_load_load_phase_b_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_b_reactive_power_losses__Isum += ( _grid_load_load_phase_b_reactive_power_losses__I * _grid_load_load_phase_b_reactive_power_losses__I ) ;
                    _grid_load_load_phase_b_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_b_reactive_power_losses__Iind = 0 ;
                }
            }
            _grid_load_load_phase_b_reactive_power_losses__Qloss = _grid_load_load_phase_b_reactive_power_losses__Qsum ;
            _grid_load_load_phase_b_reactive_power_losses__Il = sqrt ( _grid_load_load_phase_b_reactive_power_losses__Isum ) ;
            _grid_load_load_phase_b_reactive_power_losses__Qsum = 0 ;
            _grid_load_load_phase_b_reactive_power_losses__Isum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Termination3
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Termination10
    // Generated from the component: Grid Load.Load.Phase B.f_to_w8
    _grid_load_load_phase_b_f_to_w8__out = 0.001 * _grid_load_load_phase_b_power_measurement_lref_calc__P;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w9
    _grid_load_load_phase_b_f_to_w9__out = 0.001 * _grid_load_load_phase_b_power_measurement_lref_calc__Q;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product1
    _grid_load_load_phase_b_single_phase_pll1_product1__out = (_grid_load_load_phase_b_single_phase_pll1_sum2__out * _grid_load_load_phase_b_single_phase_pll1_integrator5__out);
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Termination12
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Sum2
    _grid_load_load_phase_c_grid_synchronization_peak_calc_sum2__out = _grid_load_load_phase_c_grid_synchronization_peak_calc_product6__out + _grid_load_load_phase_c_grid_synchronization_peak_calc_product7__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain4
    _grid_load_load_phase_c_single_phase_pll1_gain4__out = 125.66370614359172 * _grid_load_load_phase_c_single_phase_pll1_sum7__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Math1
    _grid_load_load_phase_c_single_phase_pll1_math1__out = sqrt(_grid_load_load_phase_c_single_phase_pll1_sum6__out);
    // Generated from the component: Grid Load.Load.Phase C.Active power losses
    _grid_load_load_phase_c_active_power_losses__Cs = _grid_load_load_phase_c_unit_delay5__out;
    _grid_load_load_phase_c_active_power_losses__L = _grid_load_load_phase_c_unit_delay6__out;
    _grid_load_load_phase_c_active_power_losses__Pref = _grid_load_load_phase_c_unit_delay3__out;
    _grid_load_load_phase_c_active_power_losses__Qref = _grid_load_load_phase_c_unit_delay4__out;
    _grid_load_load_phase_c_active_power_losses__R = _grid_load_load_phase_c_unit_delay8__out;
    _grid_load_load_phase_c_active_power_losses__Vrms[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_active_power_losses__Vrms[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_active_power_losses__harmonics[0] = _grid_load_load_phase_c_harmonic_vector3__out[0];
    _grid_load_load_phase_c_active_power_losses__harmonics[1] = _grid_load_load_phase_c_harmonic_vector3__out[1];
    _grid_load_load_phase_c_active_power_losses__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_c_active_power_losses__Rek = _grid_load_load_phase_c_active_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_c_active_power_losses__Xl = _grid_load_load_phase_c_active_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_c_active_power_losses__Xc = 1 / ( _grid_load_load_phase_c_active_power_losses__w * _grid_load_load_phase_c_active_power_losses__Cs ) ;
            _grid_load_load_phase_c_active_power_losses__I_cap = _grid_load_load_phase_c_active_power_losses__Vrms [ 0 ] / sqrt ( _grid_load_load_phase_c_active_power_losses__Rek * _grid_load_load_phase_c_active_power_losses__Rek + ( _grid_load_load_phase_c_active_power_losses__Xc - _grid_load_load_phase_c_active_power_losses__Xl ) * ( _grid_load_load_phase_c_active_power_losses__Xc - _grid_load_load_phase_c_active_power_losses__Xl ) ) ;
            if ( _grid_load_load_phase_c_active_power_losses__Qref > 0 )         {
                _grid_load_load_phase_c_active_power_losses__Iind = _grid_load_load_phase_c_active_power_losses__Vrms [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_c_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_c_active_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_c_active_power_losses__Ploss = _grid_load_load_phase_c_active_power_losses__I_cap * _grid_load_load_phase_c_active_power_losses__I_cap * 0.010812663781955268 * 0 + _grid_load_load_phase_c_active_power_losses__Iind * _grid_load_load_phase_c_active_power_losses__Iind * 6.883555555555557 ;
            }
            else         {
                _grid_load_load_phase_c_active_power_losses__Ploss = _grid_load_load_phase_c_active_power_losses__I_cap * _grid_load_load_phase_c_active_power_losses__I_cap * 0.010812663781955268 * 0 ;
            }
        }
        else     {
            for ( _grid_load_load_phase_c_active_power_losses__i = 0 ; _grid_load_load_phase_c_active_power_losses__i < 1.0 ; _grid_load_load_phase_c_active_power_losses__i ++ )         {
                if ( _grid_load_load_phase_c_active_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_c_active_power_losses__Psum += _grid_load_load_phase_c_active_power_losses__Vrms [ _grid_load_load_phase_c_active_power_losses__i ] * _grid_load_load_phase_c_active_power_losses__Vrms [ _grid_load_load_phase_c_active_power_losses__i ] * 6.883555555555557 / ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_c_active_power_losses__w * _grid_load_load_phase_c_active_power_losses__harmonics [ _grid_load_load_phase_c_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_c_active_power_losses__w * _grid_load_load_phase_c_active_power_losses__harmonics [ _grid_load_load_phase_c_active_power_losses__i ] * 0.0001681807975633208 ) , - 1 ) ) ;
                }
                else             {
                    _grid_load_load_phase_c_active_power_losses__Psum = 0 ;
                }
            }
            _grid_load_load_phase_c_active_power_losses__Ploss = _grid_load_load_phase_c_active_power_losses__Psum ;
            _grid_load_load_phase_c_active_power_losses__Psum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Reactive power losses
    _grid_load_load_phase_c_reactive_power_losses__Cs = _grid_load_load_phase_c_unit_delay7__out;
    _grid_load_load_phase_c_reactive_power_losses__Qref = _grid_load_load_phase_c_unit_delay2__out;
    _grid_load_load_phase_c_reactive_power_losses__R = _grid_load_load_phase_c_unit_delay1__out;
    _grid_load_load_phase_c_reactive_power_losses__V[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_reactive_power_losses__V[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_reactive_power_losses__harmonics[0] = _grid_load_load_phase_c_harmonic_vector2__out[0];
    _grid_load_load_phase_c_reactive_power_losses__harmonics[1] = _grid_load_load_phase_c_harmonic_vector2__out[1];
    _grid_load_load_phase_c_reactive_power_losses__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_c_reactive_power_losses__Rek = _grid_load_load_phase_c_reactive_power_losses__R + 0.010812663781955268 ;
            _grid_load_load_phase_c_reactive_power_losses__Xl = _grid_load_load_phase_c_reactive_power_losses__w * 0.00014607358569524597 ;
            _grid_load_load_phase_c_reactive_power_losses__Xc = 1 / ( _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) ;
            _grid_load_load_phase_c_reactive_power_losses__Il = _grid_load_load_phase_c_reactive_power_losses__V [ 0 ] / sqrt ( _grid_load_load_phase_c_reactive_power_losses__Rek * _grid_load_load_phase_c_reactive_power_losses__Rek + ( _grid_load_load_phase_c_reactive_power_losses__Xl - _grid_load_load_phase_c_reactive_power_losses__Xc ) * ( _grid_load_load_phase_c_reactive_power_losses__Xl - _grid_load_load_phase_c_reactive_power_losses__Xc ) ) ;
            if ( _grid_load_load_phase_c_reactive_power_losses__Qref > 0 )         {
                _grid_load_load_phase_c_reactive_power_losses__Iind = _grid_load_load_phase_c_reactive_power_losses__V [ 0 ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                _grid_load_load_phase_c_reactive_power_losses__Qloss = _grid_load_load_phase_c_reactive_power_losses__Il * _grid_load_load_phase_c_reactive_power_losses__Il * ( _grid_load_load_phase_c_reactive_power_losses__Xl - _grid_load_load_phase_c_reactive_power_losses__Xc ) - _grid_load_load_phase_c_reactive_power_losses__Iind * _grid_load_load_phase_c_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ;
            }
            else         {
                _grid_load_load_phase_c_reactive_power_losses__Iind = 0 ;
                _grid_load_load_phase_c_reactive_power_losses__Qloss = _grid_load_load_phase_c_reactive_power_losses__Il * _grid_load_load_phase_c_reactive_power_losses__Il * _grid_load_load_phase_c_reactive_power_losses__Xl * 0 ;
            }
        }
        else     {
            _grid_load_load_phase_c_reactive_power_losses__Rek = _grid_load_load_phase_c_reactive_power_losses__R + 0.010812663781955268 ;
            for ( _grid_load_load_phase_c_reactive_power_losses__i = 0 ; _grid_load_load_phase_c_reactive_power_losses__i < 1.0 ; _grid_load_load_phase_c_reactive_power_losses__i ++ )         {
                if ( _grid_load_load_phase_c_reactive_power_losses__Qref > 0 )             {
                    _grid_load_load_phase_c_reactive_power_losses__Iind = _grid_load_load_phase_c_reactive_power_losses__V [ _grid_load_load_phase_c_reactive_power_losses__i ] / sqrt ( 6.883555555555557 * 6.883555555555557 + pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) * pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_c_reactive_power_losses__I = _grid_load_load_phase_c_reactive_power_losses__V [ _grid_load_load_phase_c_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_c_reactive_power_losses__Rek * _grid_load_load_phase_c_reactive_power_losses__Rek + ( _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_c_reactive_power_losses__Qsum += ( _grid_load_load_phase_c_reactive_power_losses__I * _grid_load_load_phase_c_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_c_reactive_power_losses__Iind * _grid_load_load_phase_c_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_c_reactive_power_losses__Isum += ( _grid_load_load_phase_c_reactive_power_losses__I * _grid_load_load_phase_c_reactive_power_losses__I ) ;
                    _grid_load_load_phase_c_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_c_reactive_power_losses__Iind = 0 ;
                }
                else             {
                    _grid_load_load_phase_c_reactive_power_losses__Iind = 0 ;
                    _grid_load_load_phase_c_reactive_power_losses__I = 0 * _grid_load_load_phase_c_reactive_power_losses__V [ _grid_load_load_phase_c_reactive_power_losses__i ] / sqrt ( _grid_load_load_phase_c_reactive_power_losses__Rek * _grid_load_load_phase_c_reactive_power_losses__Rek + ( _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) * ( _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _grid_load_load_phase_c_reactive_power_losses__Qsum += ( _grid_load_load_phase_c_reactive_power_losses__I * _grid_load_load_phase_c_reactive_power_losses__I * ( 0.00014607358569524597 * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] - pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * _grid_load_load_phase_c_reactive_power_losses__Cs ) , - 1 ) ) - _grid_load_load_phase_c_reactive_power_losses__Iind * _grid_load_load_phase_c_reactive_power_losses__Iind * pow ( ( _grid_load_load_phase_c_reactive_power_losses__harmonics [ _grid_load_load_phase_c_reactive_power_losses__i ] * _grid_load_load_phase_c_reactive_power_losses__w * 0.0001681807975633208 ) , - 1 ) ) ;
                    _grid_load_load_phase_c_reactive_power_losses__Isum += ( _grid_load_load_phase_c_reactive_power_losses__I * _grid_load_load_phase_c_reactive_power_losses__I ) ;
                    _grid_load_load_phase_c_reactive_power_losses__I = 0 ;
                    _grid_load_load_phase_c_reactive_power_losses__Iind = 0 ;
                }
            }
            _grid_load_load_phase_c_reactive_power_losses__Qloss = _grid_load_load_phase_c_reactive_power_losses__Qsum ;
            _grid_load_load_phase_c_reactive_power_losses__Il = sqrt ( _grid_load_load_phase_c_reactive_power_losses__Isum ) ;
            _grid_load_load_phase_c_reactive_power_losses__Qsum = 0 ;
            _grid_load_load_phase_c_reactive_power_losses__Isum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Termination3
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Termination10
    // Generated from the component: Grid Load.Load.Phase C.f_to_w8
    _grid_load_load_phase_c_f_to_w8__out = 0.001 * _grid_load_load_phase_c_power_measurement_lref_calc__P;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w9
    _grid_load_load_phase_c_f_to_w9__out = 0.001 * _grid_load_load_phase_c_power_measurement_lref_calc__Q;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product1
    _grid_load_load_phase_c_single_phase_pll1_product1__out = (_grid_load_load_phase_c_single_phase_pll1_sum2__out * _grid_load_load_phase_c_single_phase_pll1_integrator5__out);
    // Generated from the component: Grid Load.Load.Limit2
    _grid_load_load_limit2__out = MIN(MAX(_grid_load_load_bus_split4__out1, -1.0), 1.0);
    // Generated from the component: Grid Load.Load.Limit3
    _grid_load_load_limit3__out = MIN(MAX(_grid_load_load_bus_split4__out, 0.0), 1.0);
    // Generated from the component: Grid Load.Load.Limit4
    _grid_load_load_limit4__out = MIN(MAX(_grid_load_load_bus_split2__out, 0.0), 1.0);
    // Generated from the component: Grid Load.Load.Limit5
    _grid_load_load_limit5__out = MIN(MAX(_grid_load_load_bus_split2__out1, -1.0), 1.0);
    // Generated from the component: Grid Load.Load.Limit6
    _grid_load_load_limit6__out = MIN(MAX(_grid_load_load_bus_split3__out, 0.0), 1.0);
    // Generated from the component: Grid Load.Load.Limit7
    _grid_load_load_limit7__out = MIN(MAX(_grid_load_load_bus_split3__out1, -1.0), 1.0);
    // Generated from the component: REF_CLARKE
    _ref_clarke__IN_V0_ABC[0] = _bus_join1__out[0];
    _ref_clarke__IN_V0_ABC[1] = _bus_join1__out[1];
    _ref_clarke__IN_V0_ABC[2] = _bus_join1__out[2];
    {
        abcToAlphaBeta_PI ( _ref_clarke__IN_V0_ABC [ 0 ] , _ref_clarke__IN_V0_ABC [ 1 ] , _ref_clarke__IN_V0_ABC [ 2 ] , & _ref_clarke__v0_al , & _ref_clarke__v0_be , & _ref_clarke__v0_0 ) ;
        _ref_clarke__OUT_V0_AB0 [ 0 ] = _ref_clarke__v0_al ;
        _ref_clarke__OUT_V0_AB0 [ 1 ] = _ref_clarke__v0_be ;
        _ref_clarke__OUT_V0_AB0 [ 2 ] = 0 ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Peak calc.Mathematical function1
    _grid_load_load_phase_a_grid_synchronization_peak_calc_mathematical_function1__out = sqrt(_grid_load_load_phase_a_grid_synchronization_peak_calc_sum2__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Limit1
    _grid_load_load_phase_a_single_phase_pll1_limit1__out = MAX(_grid_load_load_phase_a_single_phase_pll1_math1__out, 1e-05);
    // Generated from the component: Grid Load.Load.Phase A.Sum6
    _grid_load_load_phase_a_sum6__out = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_out - _grid_load_load_phase_a_active_power_losses__Ploss;
    // Generated from the component: Grid Load.Load.Phase A.Sum5
    _grid_load_load_phase_a_sum5__out = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out - _grid_load_load_phase_a_reactive_power_losses__Qloss;
    // Generated from the component: Grid Load.Load.Phase A.Bus Join1
    _grid_load_load_phase_a_bus_join1__out[0] = _grid_load_load_phase_a_f_to_w7__out;
    _grid_load_load_phase_a_bus_join1__out[1] = _grid_load_load_phase_a_f_to_w6__out;
    _grid_load_load_phase_a_bus_join1__out[2] = _grid_load_load_phase_a_f_to_w8__out;
    _grid_load_load_phase_a_bus_join1__out[3] = _grid_load_load_phase_a_f_to_w9__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Peak calc.Mathematical function1
    _grid_load_load_phase_b_grid_synchronization_peak_calc_mathematical_function1__out = sqrt(_grid_load_load_phase_b_grid_synchronization_peak_calc_sum2__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Limit1
    _grid_load_load_phase_b_single_phase_pll1_limit1__out = MAX(_grid_load_load_phase_b_single_phase_pll1_math1__out, 1e-05);
    // Generated from the component: Grid Load.Load.Phase B.Sum6
    _grid_load_load_phase_b_sum6__out = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_out - _grid_load_load_phase_b_active_power_losses__Ploss;
    // Generated from the component: Grid Load.Load.Phase B.Sum5
    _grid_load_load_phase_b_sum5__out = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out - _grid_load_load_phase_b_reactive_power_losses__Qloss;
    // Generated from the component: Grid Load.Load.Phase B.Bus Join1
    _grid_load_load_phase_b_bus_join1__out[0] = _grid_load_load_phase_b_f_to_w7__out;
    _grid_load_load_phase_b_bus_join1__out[1] = _grid_load_load_phase_b_f_to_w6__out;
    _grid_load_load_phase_b_bus_join1__out[2] = _grid_load_load_phase_b_f_to_w8__out;
    _grid_load_load_phase_b_bus_join1__out[3] = _grid_load_load_phase_b_f_to_w9__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Peak calc.Mathematical function1
    _grid_load_load_phase_c_grid_synchronization_peak_calc_mathematical_function1__out = sqrt(_grid_load_load_phase_c_grid_synchronization_peak_calc_sum2__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Limit1
    _grid_load_load_phase_c_single_phase_pll1_limit1__out = MAX(_grid_load_load_phase_c_single_phase_pll1_math1__out, 1e-05);
    // Generated from the component: Grid Load.Load.Phase C.Sum6
    _grid_load_load_phase_c_sum6__out = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_out - _grid_load_load_phase_c_active_power_losses__Ploss;
    // Generated from the component: Grid Load.Load.Phase C.Sum5
    _grid_load_load_phase_c_sum5__out = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out - _grid_load_load_phase_c_reactive_power_losses__Qloss;
    // Generated from the component: Grid Load.Load.Phase C.Bus Join1
    _grid_load_load_phase_c_bus_join1__out[0] = _grid_load_load_phase_c_f_to_w7__out;
    _grid_load_load_phase_c_bus_join1__out[1] = _grid_load_load_phase_c_f_to_w6__out;
    _grid_load_load_phase_c_bus_join1__out[2] = _grid_load_load_phase_c_f_to_w8__out;
    _grid_load_load_phase_c_bus_join1__out[3] = _grid_load_load_phase_c_f_to_w9__out;
    // Generated from the component: Grid Load.Load.Phase A.Qmin_fun
    _grid_load_load_phase_a_qmin_fun__in = _grid_load_load_limit2__out;
    {
        if ( _grid_load_load_phase_a_qmin_fun__in <= 0 )     {
            _grid_load_load_phase_a_qmin_fun__out = - fabs ( (-0.008638697262848225) ) / 45000.0 ;
        }
        else     {
            _grid_load_load_phase_a_qmin_fun__out = 225.0 / 45000.0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Qmin_fun
    _grid_load_load_phase_b_qmin_fun__in = _grid_load_load_limit5__out;
    {
        if ( _grid_load_load_phase_b_qmin_fun__in <= 0 )     {
            _grid_load_load_phase_b_qmin_fun__out = - fabs ( (-0.008638697262848225) ) / 45000.0 ;
        }
        else     {
            _grid_load_load_phase_b_qmin_fun__out = 225.0 / 45000.0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Qmin_fun
    _grid_load_load_phase_c_qmin_fun__in = _grid_load_load_limit7__out;
    {
        if ( _grid_load_load_phase_c_qmin_fun__in <= 0 )     {
            _grid_load_load_phase_c_qmin_fun__out = - fabs ( (-0.008638697262848225) ) / 45000.0 ;
        }
        else     {
            _grid_load_load_phase_c_qmin_fun__out = 225.0 / 45000.0 ;
        }
    }
    // Generated from the component: Bus Selector1
    _bus_selector1__out = _ref_clarke__OUT_V0_AB0[0];
    // Generated from the component: Bus Selector4
    _bus_selector4__out = _ref_clarke__OUT_V0_AB0[1];
    // Generated from the component: V0_AB0
    HIL_OutAO(0x4019, (float)_ref_clarke__OUT_V0_AB0[0]);
    HIL_OutAO(0x401a, (float)_ref_clarke__OUT_V0_AB0[1]);
    HIL_OutAO(0x401b, (float)_ref_clarke__OUT_V0_AB0[2]);
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Product4
    _grid_load_load_phase_a_grid_synchronization_product4__out = (_grid_load_load_phase_a_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_a_grid_synchronization_peak_calc_mathematical_function1__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product8
    _grid_load_load_phase_a_single_phase_pll1_product8__out = (_grid_load_load_phase_a_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_a_single_phase_pll1_limit1__out);
    // Generated from the component: Grid Load.Load.Phase A.Limit6
    _grid_load_load_phase_a_limit6__out = MIN(MAX(_grid_load_load_phase_a_sum6__out, 450.0000000000002), 90000.0);
    // Generated from the component: Grid Load.Load.Phase A.Abs2
    _grid_load_load_phase_a_abs2__out = fabs(_grid_load_load_phase_a_sum5__out);
    // Generated from the component: Grid Load.Load.Phase A.Gain1
    _grid_load_load_phase_a_gain1__out = -1.0 * _grid_load_load_phase_a_sum5__out;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w5
    _grid_load_load_phase_a_f_to_w5__out = 2.2222222222222223e-05 * _grid_load_load_phase_a_sum5__out;
    // Generated from the component: Grid Load.Load.Bus Split6
    _grid_load_load_bus_split6__out = _grid_load_load_phase_a_bus_join1__out[0];
    _grid_load_load_bus_split6__out1 = _grid_load_load_phase_a_bus_join1__out[1];
    _grid_load_load_bus_split6__out2 = _grid_load_load_phase_a_bus_join1__out[2];
    _grid_load_load_bus_split6__out3 = _grid_load_load_phase_a_bus_join1__out[3];
    // Generated from the component: Grid Load.Load.Termination3
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Product4
    _grid_load_load_phase_b_grid_synchronization_product4__out = (_grid_load_load_phase_b_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_b_grid_synchronization_peak_calc_mathematical_function1__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product8
    _grid_load_load_phase_b_single_phase_pll1_product8__out = (_grid_load_load_phase_b_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_b_single_phase_pll1_limit1__out);
    // Generated from the component: Grid Load.Load.Phase B.Limit6
    _grid_load_load_phase_b_limit6__out = MIN(MAX(_grid_load_load_phase_b_sum6__out, 450.0000000000002), 90000.0);
    // Generated from the component: Grid Load.Load.Phase B.Abs2
    _grid_load_load_phase_b_abs2__out = fabs(_grid_load_load_phase_b_sum5__out);
    // Generated from the component: Grid Load.Load.Phase B.Gain1
    _grid_load_load_phase_b_gain1__out = -1.0 * _grid_load_load_phase_b_sum5__out;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w5
    _grid_load_load_phase_b_f_to_w5__out = 2.2222222222222223e-05 * _grid_load_load_phase_b_sum5__out;
    // Generated from the component: Grid Load.Load.Bus Split5
    _grid_load_load_bus_split5__out = _grid_load_load_phase_b_bus_join1__out[0];
    _grid_load_load_bus_split5__out1 = _grid_load_load_phase_b_bus_join1__out[1];
    _grid_load_load_bus_split5__out2 = _grid_load_load_phase_b_bus_join1__out[2];
    _grid_load_load_bus_split5__out3 = _grid_load_load_phase_b_bus_join1__out[3];
    // Generated from the component: Grid Load.Load.Termination4
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Product4
    _grid_load_load_phase_c_grid_synchronization_product4__out = (_grid_load_load_phase_c_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_c_grid_synchronization_peak_calc_mathematical_function1__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product8
    _grid_load_load_phase_c_single_phase_pll1_product8__out = (_grid_load_load_phase_c_single_phase_pll1_c_function1__vq) * 1.0 / (_grid_load_load_phase_c_single_phase_pll1_limit1__out);
    // Generated from the component: Grid Load.Load.Phase C.Limit6
    _grid_load_load_phase_c_limit6__out = MIN(MAX(_grid_load_load_phase_c_sum6__out, 450.0000000000002), 90000.0);
    // Generated from the component: Grid Load.Load.Phase C.Abs2
    _grid_load_load_phase_c_abs2__out = fabs(_grid_load_load_phase_c_sum5__out);
    // Generated from the component: Grid Load.Load.Phase C.Gain1
    _grid_load_load_phase_c_gain1__out = -1.0 * _grid_load_load_phase_c_sum5__out;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w5
    _grid_load_load_phase_c_f_to_w5__out = 2.2222222222222223e-05 * _grid_load_load_phase_c_sum5__out;
    // Generated from the component: Grid Load.Load.Bus Split7
    _grid_load_load_bus_split7__out = _grid_load_load_phase_c_bus_join1__out[0];
    _grid_load_load_bus_split7__out1 = _grid_load_load_phase_c_bus_join1__out[1];
    _grid_load_load_bus_split7__out2 = _grid_load_load_phase_c_bus_join1__out[2];
    _grid_load_load_bus_split7__out3 = _grid_load_load_phase_c_bus_join1__out[3];
    // Generated from the component: Grid Load.Load.Termination5
    // Generated from the component: Grid Load.Load.Phase A.Abs5
    _grid_load_load_phase_a_abs5__out = fabs(_grid_load_load_phase_a_qmin_fun__out);
    // Generated from the component: Grid Load.Load.Phase B.Abs5
    _grid_load_load_phase_b_abs5__out = fabs(_grid_load_load_phase_b_qmin_fun__out);
    // Generated from the component: Grid Load.Load.Phase C.Abs5
    _grid_load_load_phase_c_abs5__out = fabs(_grid_load_load_phase_c_qmin_fun__out);
    // Generated from the component: INNER_LOOP_ALPHA
    _inner_loop_alpha__IN_ILF = _bus_selector2__out;
    _inner_loop_alpha__IN_KR = _kr__out;
    _inner_loop_alpha__IN_V0 = _bus_selector1__out;
    _inner_loop_alpha__IN_VC = _bus_selector3__out;
    {
        _inner_loop_alpha__uv = - ( _inner_loop_alpha__SS_V_GAINS [ 0 ] * _inner_loop_alpha__IN_ILF ) - ( _inner_loop_alpha__SS_V_GAINS [ 1 ] * _inner_loop_alpha__IN_VC ) - ( _inner_loop_alpha__SS_V_GAINS [ 2 ] * _inner_loop_alpha__ui ) - ( _inner_loop_alpha__SS_V_GAINS [ 3 ] * _inner_loop_alpha__xc_1 ) - ( _inner_loop_alpha__SS_V_GAINS [ 4 ] * _inner_loop_alpha__xc_2 ) ;
        _inner_loop_alpha__uv_bounded = _inner_loop_alpha__uv ;
        if ( ( _inner_loop_alpha__uv * _inner_loop_alpha__uv ) / sqrt ( _inner_loop_alpha__uv * _inner_loop_alpha__uv ) >= _inner_loop_alpha__UV_BOUNDARY ) _inner_loop_alpha__uv_bounded = _inner_loop_alpha__UV_BOUNDARY * _inner_loop_alpha__uv / sqrt ( _inner_loop_alpha__uv * _inner_loop_alpha__uv ) ;
        _inner_loop_alpha__err = _inner_loop_alpha__IN_V0 - _inner_loop_alpha__IN_VC ;
        _inner_loop_alpha__ui = ( _inner_loop_alpha__IN_KR * _inner_loop_alpha__uv_bounded ) - ( _inner_loop_alpha__SS_I_GAINS [ 0 ] * _inner_loop_alpha__IN_ILF ) - ( _inner_loop_alpha__SS_I_GAINS [ 1 ] * _inner_loop_alpha__IN_VC ) - ( _inner_loop_alpha__SS_I_GAINS [ 2 ] * _inner_loop_alpha__ui ) ;
        _inner_loop_alpha__ui_bounded = _inner_loop_alpha__ui ;
        if ( ( _inner_loop_alpha__ui * _inner_loop_alpha__ui ) / sqrt ( _inner_loop_alpha__ui * _inner_loop_alpha__ui ) >= _inner_loop_alpha__UI_BOUNDARY ) _inner_loop_alpha__ui_bounded = _inner_loop_alpha__UI_BOUNDARY * _inner_loop_alpha__ui / sqrt ( _inner_loop_alpha__ui * _inner_loop_alpha__ui ) ;
        _inner_loop_alpha__xc_1_kminus1 = _inner_loop_alpha__xc_1 ;
        _inner_loop_alpha__xc_2_kminus1 = _inner_loop_alpha__xc_2 ;
        _inner_loop_alpha__xc_1 = 0.0 * _inner_loop_alpha__xc_1 + 1 * _inner_loop_alpha__xc_2_kminus1 ;
        _inner_loop_alpha__xc_2 = - exp ( - _inner_loop_alpha__A * _inner_loop_alpha__TS_20KHZ ) * _inner_loop_alpha__xc_1_kminus1 + 2 * exp ( - 2 * _inner_loop_alpha__A * _inner_loop_alpha__TS_20KHZ ) * cos ( _inner_loop_alpha__OMEGA0 * _inner_loop_alpha__TS_20KHZ ) * _inner_loop_alpha__xc_2_kminus1 + _inner_loop_alpha__err ;
        _inner_loop_alpha__OUT_U_ALPHA = + _inner_loop_alpha__ui_bounded ;
        _inner_loop_alpha__OUT_ILF_REF = _inner_loop_alpha__uv_bounded ;
    }
    // Generated from the component: INNER_LOOP_ALPHA1
    _inner_loop_alpha1__IN_ILF = _bus_selector5__out;
    _inner_loop_alpha1__IN_KR = _kr__out;
    _inner_loop_alpha1__IN_V0 = _bus_selector4__out;
    _inner_loop_alpha1__IN_VC = _bus_selector6__out;
    {
        _inner_loop_alpha1__uv = - ( _inner_loop_alpha1__SS_V_GAINS [ 0 ] * _inner_loop_alpha1__IN_ILF ) - ( _inner_loop_alpha1__SS_V_GAINS [ 1 ] * _inner_loop_alpha1__IN_VC ) - ( _inner_loop_alpha1__SS_V_GAINS [ 2 ] * _inner_loop_alpha1__ui ) - ( _inner_loop_alpha1__SS_V_GAINS [ 3 ] * _inner_loop_alpha1__xc_1 ) - ( _inner_loop_alpha1__SS_V_GAINS [ 4 ] * _inner_loop_alpha1__xc_2 ) ;
        _inner_loop_alpha1__uv_bounded = _inner_loop_alpha1__uv ;
        if ( ( _inner_loop_alpha1__uv * _inner_loop_alpha1__uv ) / sqrt ( _inner_loop_alpha1__uv * _inner_loop_alpha1__uv ) >= _inner_loop_alpha1__UV_BOUNDARY ) _inner_loop_alpha1__uv_bounded = _inner_loop_alpha1__UV_BOUNDARY * _inner_loop_alpha1__uv / sqrt ( _inner_loop_alpha1__uv * _inner_loop_alpha1__uv ) ;
        _inner_loop_alpha1__err = _inner_loop_alpha1__IN_V0 - _inner_loop_alpha1__IN_VC ;
        _inner_loop_alpha1__ui = ( _inner_loop_alpha1__IN_KR * _inner_loop_alpha1__uv_bounded ) - ( _inner_loop_alpha1__SS_I_GAINS [ 0 ] * _inner_loop_alpha1__IN_ILF ) - ( _inner_loop_alpha1__SS_I_GAINS [ 1 ] * _inner_loop_alpha1__IN_VC ) - ( _inner_loop_alpha1__SS_I_GAINS [ 2 ] * _inner_loop_alpha1__ui ) ;
        _inner_loop_alpha1__ui_bounded = _inner_loop_alpha1__ui ;
        if ( ( _inner_loop_alpha1__ui * _inner_loop_alpha1__ui ) / sqrt ( _inner_loop_alpha1__ui * _inner_loop_alpha1__ui ) >= _inner_loop_alpha1__UI_BOUNDARY ) _inner_loop_alpha1__ui_bounded = _inner_loop_alpha1__UI_BOUNDARY * _inner_loop_alpha1__ui / sqrt ( _inner_loop_alpha1__ui * _inner_loop_alpha1__ui ) ;
        _inner_loop_alpha1__xc_1_kminus1 = _inner_loop_alpha1__xc_1 ;
        _inner_loop_alpha1__xc_2_kminus1 = _inner_loop_alpha1__xc_2 ;
        _inner_loop_alpha1__xc_1 = 0.0 * _inner_loop_alpha1__xc_1 + 1 * _inner_loop_alpha1__xc_2_kminus1 ;
        _inner_loop_alpha1__xc_2 = - exp ( - _inner_loop_alpha1__A * _inner_loop_alpha1__TS_20KHZ ) * _inner_loop_alpha1__xc_1_kminus1 + 2 * exp ( - 2 * _inner_loop_alpha1__A * _inner_loop_alpha1__TS_20KHZ ) * cos ( _inner_loop_alpha1__OMEGA0 * _inner_loop_alpha1__TS_20KHZ ) * _inner_loop_alpha1__xc_2_kminus1 + _inner_loop_alpha1__err ;
        _inner_loop_alpha1__OUT_U_ALPHA = + _inner_loop_alpha1__ui_bounded ;
        _inner_loop_alpha1__OUT_ILF_REF = _inner_loop_alpha1__uv_bounded ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Abs1
    _grid_load_load_phase_a_grid_synchronization_abs1__out = fabs(_grid_load_load_phase_a_grid_synchronization_product4__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Abs1
    _grid_load_load_phase_a_single_phase_pll1_abs1__out = fabs(_grid_load_load_phase_a_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase A.Limit9
    _grid_load_load_phase_a_limit9__out = MIN(MAX(_grid_load_load_phase_a_abs2__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase A.Limit11
    _grid_load_load_phase_a_limit11__out = MIN(MAX(_grid_load_load_phase_a_gain1__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase A.Relational operator4
    _grid_load_load_phase_a_relational_operator4__out = (_grid_load_load_phase_a_f_to_w5__out > _grid_load_load_phase_a_constant5__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Pmeas_A_kW
    HIL_OutAO(0x4000, (float)_grid_load_load_bus_split6__out2);
    // Generated from the component: Grid Load.Load.Pref_A_fb_kW
    HIL_OutAO(0x4004, (float)_grid_load_load_bus_split6__out);
    // Generated from the component: Grid Load.Load.Qmeas_A_kVAr
    HIL_OutAO(0x4008, (float)_grid_load_load_bus_split6__out3);
    // Generated from the component: Grid Load.Load.Qref_A_fb_kVAr
    HIL_OutAO(0x400c, (float)_grid_load_load_bus_split6__out1);
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Abs1
    _grid_load_load_phase_b_grid_synchronization_abs1__out = fabs(_grid_load_load_phase_b_grid_synchronization_product4__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Abs1
    _grid_load_load_phase_b_single_phase_pll1_abs1__out = fabs(_grid_load_load_phase_b_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase B.Limit9
    _grid_load_load_phase_b_limit9__out = MIN(MAX(_grid_load_load_phase_b_abs2__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase B.Limit11
    _grid_load_load_phase_b_limit11__out = MIN(MAX(_grid_load_load_phase_b_gain1__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase B.Relational operator4
    _grid_load_load_phase_b_relational_operator4__out = (_grid_load_load_phase_b_f_to_w5__out > _grid_load_load_phase_b_constant5__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Pmeas_B_kW
    HIL_OutAO(0x4001, (float)_grid_load_load_bus_split5__out2);
    // Generated from the component: Grid Load.Load.Pref_B_fb_kW
    HIL_OutAO(0x4005, (float)_grid_load_load_bus_split5__out);
    // Generated from the component: Grid Load.Load.Qmeas_B_kVAr
    HIL_OutAO(0x4009, (float)_grid_load_load_bus_split5__out3);
    // Generated from the component: Grid Load.Load.Qref_B_fb_kVAr
    HIL_OutAO(0x400d, (float)_grid_load_load_bus_split5__out1);
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Abs1
    _grid_load_load_phase_c_grid_synchronization_abs1__out = fabs(_grid_load_load_phase_c_grid_synchronization_product4__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Abs1
    _grid_load_load_phase_c_single_phase_pll1_abs1__out = fabs(_grid_load_load_phase_c_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase C.Limit9
    _grid_load_load_phase_c_limit9__out = MIN(MAX(_grid_load_load_phase_c_abs2__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase C.Limit11
    _grid_load_load_phase_c_limit11__out = MIN(MAX(_grid_load_load_phase_c_gain1__out, 0.001), 90000.0);
    // Generated from the component: Grid Load.Load.Phase C.Relational operator4
    _grid_load_load_phase_c_relational_operator4__out = (_grid_load_load_phase_c_f_to_w5__out > _grid_load_load_phase_c_constant5__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Pmeas_C_kW
    HIL_OutAO(0x4002, (float)_grid_load_load_bus_split7__out2);
    // Generated from the component: Grid Load.Load.Pref_C_fb_kW
    HIL_OutAO(0x4006, (float)_grid_load_load_bus_split7__out);
    // Generated from the component: Grid Load.Load.Qmeas_C_kVAr
    HIL_OutAO(0x400a, (float)_grid_load_load_bus_split7__out3);
    // Generated from the component: Grid Load.Load.Qref_C_fb_kVAr
    HIL_OutAO(0x400e, (float)_grid_load_load_bus_split7__out1);
    // Generated from the component: Grid Load.Load.Sum1
    _grid_load_load_sum1__out = _grid_load_load_bus_split6__out + _grid_load_load_bus_split5__out + _grid_load_load_bus_split7__out;
    // Generated from the component: Grid Load.Load.Sum2
    _grid_load_load_sum2__out = _grid_load_load_bus_split6__out1 + _grid_load_load_bus_split5__out1 + _grid_load_load_bus_split7__out1;
    // Generated from the component: Grid Load.Load.Sum3
    _grid_load_load_sum3__out = _grid_load_load_bus_split6__out2 + _grid_load_load_bus_split5__out2 + _grid_load_load_bus_split7__out2;
    // Generated from the component: Grid Load.Load.Sum4
    _grid_load_load_sum4__out = _grid_load_load_bus_split6__out3 + _grid_load_load_bus_split5__out3 + _grid_load_load_bus_split7__out3;
    // Generated from the component: Grid Load.Load.Phase A.Relational operator2
    _grid_load_load_phase_a_relational_operator2__out = (_grid_load_load_phase_a_abs5__out >= _grid_load_load_phase_a_abs3__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase B.Relational operator2
    _grid_load_load_phase_b_relational_operator2__out = (_grid_load_load_phase_b_abs5__out >= _grid_load_load_phase_b_abs3__out) ? 1 : 0;
    // Generated from the component: Grid Load.Load.Phase C.Relational operator2
    _grid_load_load_phase_c_relational_operator2__out = (_grid_load_load_phase_c_abs5__out >= _grid_load_load_phase_c_abs3__out) ? 1 : 0;
    // Generated from the component: ual
    HIL_OutAO(0x4033, (float)_inner_loop_alpha__OUT_U_ALPHA);
    // Generated from the component: Bus Join3
    _bus_join3__out[0] = _inner_loop_alpha__OUT_U_ALPHA;
    _bus_join3__out[1] = _inner_loop_alpha1__OUT_U_ALPHA;
    _bus_join3__out[2] = _dc_voltage__out;
    // Generated from the component: Bus Join9
    _bus_join9__out[0] = _inner_loop_alpha__OUT_ILF_REF;
    _bus_join9__out[1] = _inner_loop_alpha1__OUT_ILF_REF;
    // Generated from the component: ube
    HIL_OutAO(0x4034, (float)_inner_loop_alpha1__OUT_U_ALPHA);
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Comparator1
    if (_grid_load_load_phase_a_grid_synchronization_constant1__out < _grid_load_load_phase_a_grid_synchronization_abs1__out) {
        _grid_load_load_phase_a_grid_synchronization_comparator1__out = 0;
    } else if (_grid_load_load_phase_a_grid_synchronization_constant1__out > _grid_load_load_phase_a_grid_synchronization_abs1__out) {
        _grid_load_load_phase_a_grid_synchronization_comparator1__out = 1;
    } else {
        _grid_load_load_phase_a_grid_synchronization_comparator1__out = _grid_load_load_phase_a_grid_synchronization_comparator1__state;
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Kd_LUT
    _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_in = (_grid_load_load_phase_a_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_tmp = floor(_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_in);
    if (_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_tmp < 0)
        _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down = _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_tmp;
    _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_int_coeff = _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_in - _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down;
    _grid_load_load_phase_a_single_phase_pll1_kd_lut__value =
        _grid_load_load_phase_a_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down] +
        ((_grid_load_load_phase_a_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down + 1] -
          _grid_load_load_phase_a_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kd_lut__x_addr_down]) *
         _grid_load_load_phase_a_single_phase_pll1_kd_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Ki_LUT
    _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_in = (_grid_load_load_phase_a_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_tmp = floor(_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_in);
    if (_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_tmp < 0)
        _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down = _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_tmp;
    _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_int_coeff = _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_in - _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down;
    _grid_load_load_phase_a_single_phase_pll1_ki_lut__value =
        _grid_load_load_phase_a_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down] +
        ((_grid_load_load_phase_a_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down + 1] -
          _grid_load_load_phase_a_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_ki_lut__x_addr_down]) *
         _grid_load_load_phase_a_single_phase_pll1_ki_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Kp_LUT
    _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_in = (_grid_load_load_phase_a_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_tmp = floor(_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_in);
    if (_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_tmp < 0)
        _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down = _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_tmp;
    _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_int_coeff = _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_in - _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down;
    _grid_load_load_phase_a_single_phase_pll1_kp_lut__value =
        _grid_load_load_phase_a_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down] +
        ((_grid_load_load_phase_a_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down + 1] -
          _grid_load_load_phase_a_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_a_single_phase_pll1_kp_lut__x_addr_down]) *
         _grid_load_load_phase_a_single_phase_pll1_kp_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase A.Lref_calc
    _grid_load_load_phase_a_lref_calc__Qref = _grid_load_load_phase_a_limit9__out;
    _grid_load_load_phase_a_lref_calc__V[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_lref_calc__V[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_lref_calc__harmonics[0] = _grid_load_load_phase_a_harmonic_vector__out[0];
    _grid_load_load_phase_a_lref_calc__harmonics[1] = _grid_load_load_phase_a_harmonic_vector__out[1];
    _grid_load_load_phase_a_lref_calc__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_a_lref_calc__L = _grid_load_load_phase_a_lref_calc__V [ 0 ] * _grid_load_load_phase_a_lref_calc__V [ 0 ] / ( _grid_load_load_phase_a_lref_calc__w * _grid_load_load_phase_a_lref_calc__Qref ) ;
        }
        else     {
            for ( _grid_load_load_phase_a_lref_calc__i = 0 ; _grid_load_load_phase_a_lref_calc__i < 1.0 ; _grid_load_load_phase_a_lref_calc__i ++ )         {
                _grid_load_load_phase_a_lref_calc__Vsum += _grid_load_load_phase_a_lref_calc__V [ _grid_load_load_phase_a_lref_calc__i ] * _grid_load_load_phase_a_lref_calc__V [ _grid_load_load_phase_a_lref_calc__i ] * ( pow ( _grid_load_load_phase_a_lref_calc__harmonics [ _grid_load_load_phase_a_lref_calc__i ] , - 1 ) ) ;
            }
            _grid_load_load_phase_a_lref_calc__L = _grid_load_load_phase_a_lref_calc__Vsum / ( _grid_load_load_phase_a_lref_calc__w * _grid_load_load_phase_a_lref_calc__Qref ) ;
            _grid_load_load_phase_a_lref_calc__Vsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.C function2
    _grid_load_load_phase_a_c_function2__P = _grid_load_load_phase_a_limit6__out;
    _grid_load_load_phase_a_c_function2__Q = _grid_load_load_phase_a_limit11__out;
    _grid_load_load_phase_a_c_function2__V[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_c_function2__V[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_c_function2__Vrms = _grid_load_load_phase_a_limit10__out;
    _grid_load_load_phase_a_c_function2__harmonics[0] = _grid_load_load_phase_a_harmonic_vector1__out[0];
    _grid_load_load_phase_a_c_function2__harmonics[1] = _grid_load_load_phase_a_harmonic_vector1__out[1];
    _grid_load_load_phase_a_c_function2__mod = _grid_load_load_phase_a_relational_operator4__out;
    _grid_load_load_phase_a_c_function2__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            if ( _grid_load_load_phase_a_c_function2__mod == 0 )         {
                _grid_load_load_phase_a_c_function2__S = sqrt ( _grid_load_load_phase_a_c_function2__P * _grid_load_load_phase_a_c_function2__P + _grid_load_load_phase_a_c_function2__Q * _grid_load_load_phase_a_c_function2__Q ) ;
                _grid_load_load_phase_a_c_function2__Z = _grid_load_load_phase_a_c_function2__Vrms * _grid_load_load_phase_a_c_function2__Vrms / _grid_load_load_phase_a_c_function2__S ;
                _grid_load_load_phase_a_c_function2__rat = _grid_load_load_phase_a_c_function2__P / _grid_load_load_phase_a_c_function2__Q ;
                _grid_load_load_phase_a_c_function2__Rr = _grid_load_load_phase_a_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_a_c_function2__rat * _grid_load_load_phase_a_c_function2__rat ) ) ) ;
                _grid_load_load_phase_a_c_function2__R = _grid_load_load_phase_a_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_a_c_function2__X = _grid_load_load_phase_a_c_function2__Rr / _grid_load_load_phase_a_c_function2__rat ;
                _grid_load_load_phase_a_c_function2__Xc = _grid_load_load_phase_a_c_function2__X + _grid_load_load_phase_a_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_a_c_function2__c = 1 / ( _grid_load_load_phase_a_c_function2__Xc * _grid_load_load_phase_a_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_a_c_function2__Xl = _grid_load_load_phase_a_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_a_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_a_c_function2__Xc = pow ( _grid_load_load_phase_a_c_function2__w * _grid_load_load_phase_a_c_function2__c , - 1 ) ;
                _grid_load_load_phase_a_c_function2__X = _grid_load_load_phase_a_c_function2__Xc - _grid_load_load_phase_a_c_function2__Xl ;
                _grid_load_load_phase_a_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_a_c_function2__Vrms , 4 ) - _grid_load_load_phase_a_c_function2__Vrms * _grid_load_load_phase_a_c_function2__Vrms * _grid_load_load_phase_a_c_function2__X * _grid_load_load_phase_a_c_function2__X ) / ( _grid_load_load_phase_a_c_function2__P * _grid_load_load_phase_a_c_function2__P ) ) ;
                _grid_load_load_phase_a_c_function2__R = sqrt ( _grid_load_load_phase_a_c_function2__Z * _grid_load_load_phase_a_c_function2__Z - _grid_load_load_phase_a_c_function2__X * _grid_load_load_phase_a_c_function2__X ) - 0.010812663781955268 ;
            }
        }
        else     {
            if ( _grid_load_load_phase_a_c_function2__mod == 0 )         {
                _grid_load_load_phase_a_c_function2__n ++ ;
                _grid_load_load_phase_a_c_function2__S = sqrt ( _grid_load_load_phase_a_c_function2__P * _grid_load_load_phase_a_c_function2__P + _grid_load_load_phase_a_c_function2__Q * _grid_load_load_phase_a_c_function2__Q ) ;
                _grid_load_load_phase_a_c_function2__Z = _grid_load_load_phase_a_c_function2__V [ 0 ] * _grid_load_load_phase_a_c_function2__V [ 0 ] / _grid_load_load_phase_a_c_function2__S ;
                _grid_load_load_phase_a_c_function2__rat = _grid_load_load_phase_a_c_function2__P / _grid_load_load_phase_a_c_function2__Q ;
                _grid_load_load_phase_a_c_function2__Rr = _grid_load_load_phase_a_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_a_c_function2__rat * _grid_load_load_phase_a_c_function2__rat ) ) ) ;
                _grid_load_load_phase_a_c_function2__R = _grid_load_load_phase_a_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_a_c_function2__X = _grid_load_load_phase_a_c_function2__Rr / _grid_load_load_phase_a_c_function2__rat ;
                _grid_load_load_phase_a_c_function2__Xc = _grid_load_load_phase_a_c_function2__X + _grid_load_load_phase_a_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_a_c_function2__c = 1 / ( _grid_load_load_phase_a_c_function2__Xc * _grid_load_load_phase_a_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_a_c_function2__Xl = _grid_load_load_phase_a_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_a_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_a_c_function2__Xc = pow ( _grid_load_load_phase_a_c_function2__w * _grid_load_load_phase_a_c_function2__c , - 1 ) ;
                _grid_load_load_phase_a_c_function2__X = _grid_load_load_phase_a_c_function2__Xc - _grid_load_load_phase_a_c_function2__Xl ;
                _grid_load_load_phase_a_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_a_c_function2__Vrms , 4 ) - _grid_load_load_phase_a_c_function2__Vrms * _grid_load_load_phase_a_c_function2__Vrms * _grid_load_load_phase_a_c_function2__X * _grid_load_load_phase_a_c_function2__X ) / ( _grid_load_load_phase_a_c_function2__P * _grid_load_load_phase_a_c_function2__P ) ) ;
                _grid_load_load_phase_a_c_function2__R = sqrt ( _grid_load_load_phase_a_c_function2__Z * _grid_load_load_phase_a_c_function2__Z - _grid_load_load_phase_a_c_function2__X * _grid_load_load_phase_a_c_function2__X ) - 0.010812663781955268 ;
            }
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Logical operator2
    _grid_load_load_phase_a_logical_operator2__out = !_grid_load_load_phase_a_relational_operator4__out;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Comparator1
    if (_grid_load_load_phase_b_grid_synchronization_constant1__out < _grid_load_load_phase_b_grid_synchronization_abs1__out) {
        _grid_load_load_phase_b_grid_synchronization_comparator1__out = 0;
    } else if (_grid_load_load_phase_b_grid_synchronization_constant1__out > _grid_load_load_phase_b_grid_synchronization_abs1__out) {
        _grid_load_load_phase_b_grid_synchronization_comparator1__out = 1;
    } else {
        _grid_load_load_phase_b_grid_synchronization_comparator1__out = _grid_load_load_phase_b_grid_synchronization_comparator1__state;
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Kd_LUT
    _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_in = (_grid_load_load_phase_b_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_tmp = floor(_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_in);
    if (_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_tmp < 0)
        _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down = _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_tmp;
    _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_int_coeff = _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_in - _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down;
    _grid_load_load_phase_b_single_phase_pll1_kd_lut__value =
        _grid_load_load_phase_b_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down] +
        ((_grid_load_load_phase_b_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down + 1] -
          _grid_load_load_phase_b_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kd_lut__x_addr_down]) *
         _grid_load_load_phase_b_single_phase_pll1_kd_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Ki_LUT
    _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_in = (_grid_load_load_phase_b_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_tmp = floor(_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_in);
    if (_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_tmp < 0)
        _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down = _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_tmp;
    _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_int_coeff = _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_in - _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down;
    _grid_load_load_phase_b_single_phase_pll1_ki_lut__value =
        _grid_load_load_phase_b_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down] +
        ((_grid_load_load_phase_b_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down + 1] -
          _grid_load_load_phase_b_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_ki_lut__x_addr_down]) *
         _grid_load_load_phase_b_single_phase_pll1_ki_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Kp_LUT
    _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_in = (_grid_load_load_phase_b_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_tmp = floor(_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_in);
    if (_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_tmp < 0)
        _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down = _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_tmp;
    _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_int_coeff = _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_in - _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down;
    _grid_load_load_phase_b_single_phase_pll1_kp_lut__value =
        _grid_load_load_phase_b_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down] +
        ((_grid_load_load_phase_b_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down + 1] -
          _grid_load_load_phase_b_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_b_single_phase_pll1_kp_lut__x_addr_down]) *
         _grid_load_load_phase_b_single_phase_pll1_kp_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase B.Lref_calc
    _grid_load_load_phase_b_lref_calc__Qref = _grid_load_load_phase_b_limit9__out;
    _grid_load_load_phase_b_lref_calc__V[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_lref_calc__V[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_lref_calc__harmonics[0] = _grid_load_load_phase_b_harmonic_vector__out[0];
    _grid_load_load_phase_b_lref_calc__harmonics[1] = _grid_load_load_phase_b_harmonic_vector__out[1];
    _grid_load_load_phase_b_lref_calc__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_b_lref_calc__L = _grid_load_load_phase_b_lref_calc__V [ 0 ] * _grid_load_load_phase_b_lref_calc__V [ 0 ] / ( _grid_load_load_phase_b_lref_calc__w * _grid_load_load_phase_b_lref_calc__Qref ) ;
        }
        else     {
            for ( _grid_load_load_phase_b_lref_calc__i = 0 ; _grid_load_load_phase_b_lref_calc__i < 1.0 ; _grid_load_load_phase_b_lref_calc__i ++ )         {
                _grid_load_load_phase_b_lref_calc__Vsum += _grid_load_load_phase_b_lref_calc__V [ _grid_load_load_phase_b_lref_calc__i ] * _grid_load_load_phase_b_lref_calc__V [ _grid_load_load_phase_b_lref_calc__i ] * ( pow ( _grid_load_load_phase_b_lref_calc__harmonics [ _grid_load_load_phase_b_lref_calc__i ] , - 1 ) ) ;
            }
            _grid_load_load_phase_b_lref_calc__L = _grid_load_load_phase_b_lref_calc__Vsum / ( _grid_load_load_phase_b_lref_calc__w * _grid_load_load_phase_b_lref_calc__Qref ) ;
            _grid_load_load_phase_b_lref_calc__Vsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.C function2
    _grid_load_load_phase_b_c_function2__P = _grid_load_load_phase_b_limit6__out;
    _grid_load_load_phase_b_c_function2__Q = _grid_load_load_phase_b_limit11__out;
    _grid_load_load_phase_b_c_function2__V[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_c_function2__V[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_c_function2__Vrms = _grid_load_load_phase_b_limit10__out;
    _grid_load_load_phase_b_c_function2__harmonics[0] = _grid_load_load_phase_b_harmonic_vector1__out[0];
    _grid_load_load_phase_b_c_function2__harmonics[1] = _grid_load_load_phase_b_harmonic_vector1__out[1];
    _grid_load_load_phase_b_c_function2__mod = _grid_load_load_phase_b_relational_operator4__out;
    _grid_load_load_phase_b_c_function2__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            if ( _grid_load_load_phase_b_c_function2__mod == 0 )         {
                _grid_load_load_phase_b_c_function2__S = sqrt ( _grid_load_load_phase_b_c_function2__P * _grid_load_load_phase_b_c_function2__P + _grid_load_load_phase_b_c_function2__Q * _grid_load_load_phase_b_c_function2__Q ) ;
                _grid_load_load_phase_b_c_function2__Z = _grid_load_load_phase_b_c_function2__Vrms * _grid_load_load_phase_b_c_function2__Vrms / _grid_load_load_phase_b_c_function2__S ;
                _grid_load_load_phase_b_c_function2__rat = _grid_load_load_phase_b_c_function2__P / _grid_load_load_phase_b_c_function2__Q ;
                _grid_load_load_phase_b_c_function2__Rr = _grid_load_load_phase_b_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_b_c_function2__rat * _grid_load_load_phase_b_c_function2__rat ) ) ) ;
                _grid_load_load_phase_b_c_function2__R = _grid_load_load_phase_b_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_b_c_function2__X = _grid_load_load_phase_b_c_function2__Rr / _grid_load_load_phase_b_c_function2__rat ;
                _grid_load_load_phase_b_c_function2__Xc = _grid_load_load_phase_b_c_function2__X + _grid_load_load_phase_b_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_b_c_function2__c = 1 / ( _grid_load_load_phase_b_c_function2__Xc * _grid_load_load_phase_b_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_b_c_function2__Xl = _grid_load_load_phase_b_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_b_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_b_c_function2__Xc = pow ( _grid_load_load_phase_b_c_function2__w * _grid_load_load_phase_b_c_function2__c , - 1 ) ;
                _grid_load_load_phase_b_c_function2__X = _grid_load_load_phase_b_c_function2__Xc - _grid_load_load_phase_b_c_function2__Xl ;
                _grid_load_load_phase_b_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_b_c_function2__Vrms , 4 ) - _grid_load_load_phase_b_c_function2__Vrms * _grid_load_load_phase_b_c_function2__Vrms * _grid_load_load_phase_b_c_function2__X * _grid_load_load_phase_b_c_function2__X ) / ( _grid_load_load_phase_b_c_function2__P * _grid_load_load_phase_b_c_function2__P ) ) ;
                _grid_load_load_phase_b_c_function2__R = sqrt ( _grid_load_load_phase_b_c_function2__Z * _grid_load_load_phase_b_c_function2__Z - _grid_load_load_phase_b_c_function2__X * _grid_load_load_phase_b_c_function2__X ) - 0.010812663781955268 ;
            }
        }
        else     {
            if ( _grid_load_load_phase_b_c_function2__mod == 0 )         {
                _grid_load_load_phase_b_c_function2__n ++ ;
                _grid_load_load_phase_b_c_function2__S = sqrt ( _grid_load_load_phase_b_c_function2__P * _grid_load_load_phase_b_c_function2__P + _grid_load_load_phase_b_c_function2__Q * _grid_load_load_phase_b_c_function2__Q ) ;
                _grid_load_load_phase_b_c_function2__Z = _grid_load_load_phase_b_c_function2__V [ 0 ] * _grid_load_load_phase_b_c_function2__V [ 0 ] / _grid_load_load_phase_b_c_function2__S ;
                _grid_load_load_phase_b_c_function2__rat = _grid_load_load_phase_b_c_function2__P / _grid_load_load_phase_b_c_function2__Q ;
                _grid_load_load_phase_b_c_function2__Rr = _grid_load_load_phase_b_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_b_c_function2__rat * _grid_load_load_phase_b_c_function2__rat ) ) ) ;
                _grid_load_load_phase_b_c_function2__R = _grid_load_load_phase_b_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_b_c_function2__X = _grid_load_load_phase_b_c_function2__Rr / _grid_load_load_phase_b_c_function2__rat ;
                _grid_load_load_phase_b_c_function2__Xc = _grid_load_load_phase_b_c_function2__X + _grid_load_load_phase_b_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_b_c_function2__c = 1 / ( _grid_load_load_phase_b_c_function2__Xc * _grid_load_load_phase_b_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_b_c_function2__Xl = _grid_load_load_phase_b_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_b_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_b_c_function2__Xc = pow ( _grid_load_load_phase_b_c_function2__w * _grid_load_load_phase_b_c_function2__c , - 1 ) ;
                _grid_load_load_phase_b_c_function2__X = _grid_load_load_phase_b_c_function2__Xc - _grid_load_load_phase_b_c_function2__Xl ;
                _grid_load_load_phase_b_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_b_c_function2__Vrms , 4 ) - _grid_load_load_phase_b_c_function2__Vrms * _grid_load_load_phase_b_c_function2__Vrms * _grid_load_load_phase_b_c_function2__X * _grid_load_load_phase_b_c_function2__X ) / ( _grid_load_load_phase_b_c_function2__P * _grid_load_load_phase_b_c_function2__P ) ) ;
                _grid_load_load_phase_b_c_function2__R = sqrt ( _grid_load_load_phase_b_c_function2__Z * _grid_load_load_phase_b_c_function2__Z - _grid_load_load_phase_b_c_function2__X * _grid_load_load_phase_b_c_function2__X ) - 0.010812663781955268 ;
            }
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Logical operator2
    _grid_load_load_phase_b_logical_operator2__out = !_grid_load_load_phase_b_relational_operator4__out;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Comparator1
    if (_grid_load_load_phase_c_grid_synchronization_constant1__out < _grid_load_load_phase_c_grid_synchronization_abs1__out) {
        _grid_load_load_phase_c_grid_synchronization_comparator1__out = 0;
    } else if (_grid_load_load_phase_c_grid_synchronization_constant1__out > _grid_load_load_phase_c_grid_synchronization_abs1__out) {
        _grid_load_load_phase_c_grid_synchronization_comparator1__out = 1;
    } else {
        _grid_load_load_phase_c_grid_synchronization_comparator1__out = _grid_load_load_phase_c_grid_synchronization_comparator1__state;
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Kd_LUT
    _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_in = (_grid_load_load_phase_c_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_tmp = floor(_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_in);
    if (_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_tmp < 0)
        _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down = _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_tmp;
    _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_int_coeff = _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_in - _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down;
    _grid_load_load_phase_c_single_phase_pll1_kd_lut__value =
        _grid_load_load_phase_c_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down] +
        ((_grid_load_load_phase_c_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down + 1] -
          _grid_load_load_phase_c_single_phase_pll1_kd_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kd_lut__x_addr_down]) *
         _grid_load_load_phase_c_single_phase_pll1_kd_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Ki_LUT
    _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_in = (_grid_load_load_phase_c_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_tmp = floor(_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_in);
    if (_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_tmp < 0)
        _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down = _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_tmp;
    _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_int_coeff = _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_in - _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down;
    _grid_load_load_phase_c_single_phase_pll1_ki_lut__value =
        _grid_load_load_phase_c_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down] +
        ((_grid_load_load_phase_c_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down + 1] -
          _grid_load_load_phase_c_single_phase_pll1_ki_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_ki_lut__x_addr_down]) *
         _grid_load_load_phase_c_single_phase_pll1_ki_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Kp_LUT
    _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_in = (_grid_load_load_phase_c_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_tmp = floor(_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_in);
    if (_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_tmp < 0)
        _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down = 0;
    else if (_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_tmp >= 99)
        _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down = 99 - 1;
    else
        _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down = _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_tmp;
    _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_int_coeff = _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_in - _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down;
    _grid_load_load_phase_c_single_phase_pll1_kp_lut__value =
        _grid_load_load_phase_c_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down] +
        ((_grid_load_load_phase_c_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down + 1] -
          _grid_load_load_phase_c_single_phase_pll1_kp_lut__lut_table[_grid_load_load_phase_c_single_phase_pll1_kp_lut__x_addr_down]) *
         _grid_load_load_phase_c_single_phase_pll1_kp_lut__x_int_coeff);
    // Generated from the component: Grid Load.Load.Phase C.Lref_calc
    _grid_load_load_phase_c_lref_calc__Qref = _grid_load_load_phase_c_limit9__out;
    _grid_load_load_phase_c_lref_calc__V[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_lref_calc__V[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_lref_calc__harmonics[0] = _grid_load_load_phase_c_harmonic_vector__out[0];
    _grid_load_load_phase_c_lref_calc__harmonics[1] = _grid_load_load_phase_c_harmonic_vector__out[1];
    _grid_load_load_phase_c_lref_calc__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _grid_load_load_phase_c_lref_calc__L = _grid_load_load_phase_c_lref_calc__V [ 0 ] * _grid_load_load_phase_c_lref_calc__V [ 0 ] / ( _grid_load_load_phase_c_lref_calc__w * _grid_load_load_phase_c_lref_calc__Qref ) ;
        }
        else     {
            for ( _grid_load_load_phase_c_lref_calc__i = 0 ; _grid_load_load_phase_c_lref_calc__i < 1.0 ; _grid_load_load_phase_c_lref_calc__i ++ )         {
                _grid_load_load_phase_c_lref_calc__Vsum += _grid_load_load_phase_c_lref_calc__V [ _grid_load_load_phase_c_lref_calc__i ] * _grid_load_load_phase_c_lref_calc__V [ _grid_load_load_phase_c_lref_calc__i ] * ( pow ( _grid_load_load_phase_c_lref_calc__harmonics [ _grid_load_load_phase_c_lref_calc__i ] , - 1 ) ) ;
            }
            _grid_load_load_phase_c_lref_calc__L = _grid_load_load_phase_c_lref_calc__Vsum / ( _grid_load_load_phase_c_lref_calc__w * _grid_load_load_phase_c_lref_calc__Qref ) ;
            _grid_load_load_phase_c_lref_calc__Vsum = 0 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.C function2
    _grid_load_load_phase_c_c_function2__P = _grid_load_load_phase_c_limit6__out;
    _grid_load_load_phase_c_c_function2__Q = _grid_load_load_phase_c_limit11__out;
    _grid_load_load_phase_c_c_function2__V[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_c_function2__V[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_c_function2__Vrms = _grid_load_load_phase_c_limit10__out;
    _grid_load_load_phase_c_c_function2__harmonics[0] = _grid_load_load_phase_c_harmonic_vector1__out[0];
    _grid_load_load_phase_c_c_function2__harmonics[1] = _grid_load_load_phase_c_harmonic_vector1__out[1];
    _grid_load_load_phase_c_c_function2__mod = _grid_load_load_phase_c_relational_operator4__out;
    _grid_load_load_phase_c_c_function2__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            if ( _grid_load_load_phase_c_c_function2__mod == 0 )         {
                _grid_load_load_phase_c_c_function2__S = sqrt ( _grid_load_load_phase_c_c_function2__P * _grid_load_load_phase_c_c_function2__P + _grid_load_load_phase_c_c_function2__Q * _grid_load_load_phase_c_c_function2__Q ) ;
                _grid_load_load_phase_c_c_function2__Z = _grid_load_load_phase_c_c_function2__Vrms * _grid_load_load_phase_c_c_function2__Vrms / _grid_load_load_phase_c_c_function2__S ;
                _grid_load_load_phase_c_c_function2__rat = _grid_load_load_phase_c_c_function2__P / _grid_load_load_phase_c_c_function2__Q ;
                _grid_load_load_phase_c_c_function2__Rr = _grid_load_load_phase_c_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_c_c_function2__rat * _grid_load_load_phase_c_c_function2__rat ) ) ) ;
                _grid_load_load_phase_c_c_function2__R = _grid_load_load_phase_c_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_c_c_function2__X = _grid_load_load_phase_c_c_function2__Rr / _grid_load_load_phase_c_c_function2__rat ;
                _grid_load_load_phase_c_c_function2__Xc = _grid_load_load_phase_c_c_function2__X + _grid_load_load_phase_c_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_c_c_function2__c = 1 / ( _grid_load_load_phase_c_c_function2__Xc * _grid_load_load_phase_c_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_c_c_function2__Xl = _grid_load_load_phase_c_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_c_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_c_c_function2__Xc = pow ( _grid_load_load_phase_c_c_function2__w * _grid_load_load_phase_c_c_function2__c , - 1 ) ;
                _grid_load_load_phase_c_c_function2__X = _grid_load_load_phase_c_c_function2__Xc - _grid_load_load_phase_c_c_function2__Xl ;
                _grid_load_load_phase_c_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_c_c_function2__Vrms , 4 ) - _grid_load_load_phase_c_c_function2__Vrms * _grid_load_load_phase_c_c_function2__Vrms * _grid_load_load_phase_c_c_function2__X * _grid_load_load_phase_c_c_function2__X ) / ( _grid_load_load_phase_c_c_function2__P * _grid_load_load_phase_c_c_function2__P ) ) ;
                _grid_load_load_phase_c_c_function2__R = sqrt ( _grid_load_load_phase_c_c_function2__Z * _grid_load_load_phase_c_c_function2__Z - _grid_load_load_phase_c_c_function2__X * _grid_load_load_phase_c_c_function2__X ) - 0.010812663781955268 ;
            }
        }
        else     {
            if ( _grid_load_load_phase_c_c_function2__mod == 0 )         {
                _grid_load_load_phase_c_c_function2__n ++ ;
                _grid_load_load_phase_c_c_function2__S = sqrt ( _grid_load_load_phase_c_c_function2__P * _grid_load_load_phase_c_c_function2__P + _grid_load_load_phase_c_c_function2__Q * _grid_load_load_phase_c_c_function2__Q ) ;
                _grid_load_load_phase_c_c_function2__Z = _grid_load_load_phase_c_c_function2__V [ 0 ] * _grid_load_load_phase_c_c_function2__V [ 0 ] / _grid_load_load_phase_c_c_function2__S ;
                _grid_load_load_phase_c_c_function2__rat = _grid_load_load_phase_c_c_function2__P / _grid_load_load_phase_c_c_function2__Q ;
                _grid_load_load_phase_c_c_function2__Rr = _grid_load_load_phase_c_c_function2__Z / sqrt ( 1 + ( 1 / ( _grid_load_load_phase_c_c_function2__rat * _grid_load_load_phase_c_c_function2__rat ) ) ) ;
                _grid_load_load_phase_c_c_function2__R = _grid_load_load_phase_c_c_function2__Rr - 0.010812663781955268 ;
                _grid_load_load_phase_c_c_function2__X = _grid_load_load_phase_c_c_function2__Rr / _grid_load_load_phase_c_c_function2__rat ;
                _grid_load_load_phase_c_c_function2__Xc = _grid_load_load_phase_c_c_function2__X + _grid_load_load_phase_c_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_c_c_function2__c = 1 / ( _grid_load_load_phase_c_c_function2__Xc * _grid_load_load_phase_c_c_function2__w ) ;
            }
            else         {
                _grid_load_load_phase_c_c_function2__Xl = _grid_load_load_phase_c_c_function2__w * 0.00014607358569524597 ;
                _grid_load_load_phase_c_c_function2__c = 0.04587507352809298 ;
                _grid_load_load_phase_c_c_function2__Xc = pow ( _grid_load_load_phase_c_c_function2__w * _grid_load_load_phase_c_c_function2__c , - 1 ) ;
                _grid_load_load_phase_c_c_function2__X = _grid_load_load_phase_c_c_function2__Xc - _grid_load_load_phase_c_c_function2__Xl ;
                _grid_load_load_phase_c_c_function2__Z = sqrt ( ( pow ( _grid_load_load_phase_c_c_function2__Vrms , 4 ) - _grid_load_load_phase_c_c_function2__Vrms * _grid_load_load_phase_c_c_function2__Vrms * _grid_load_load_phase_c_c_function2__X * _grid_load_load_phase_c_c_function2__X ) / ( _grid_load_load_phase_c_c_function2__P * _grid_load_load_phase_c_c_function2__P ) ) ;
                _grid_load_load_phase_c_c_function2__R = sqrt ( _grid_load_load_phase_c_c_function2__Z * _grid_load_load_phase_c_c_function2__Z - _grid_load_load_phase_c_c_function2__X * _grid_load_load_phase_c_c_function2__X ) - 0.010812663781955268 ;
            }
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Logical operator2
    _grid_load_load_phase_c_logical_operator2__out = !_grid_load_load_phase_c_relational_operator4__out;
    // Generated from the component: Grid Load.Load.Pref_fb_kW
    HIL_OutAO(0x4007, (float)_grid_load_load_sum1__out);
    // Generated from the component: Grid Load.Load.Qref_fb_kVAr
    HIL_OutAO(0x400f, (float)_grid_load_load_sum2__out);
    // Generated from the component: Grid Load.Load.Pmeas_kW
    HIL_OutAO(0x4003, (float)_grid_load_load_sum3__out);
    // Generated from the component: Grid Load.Load.Qmeas_kVAr
    HIL_OutAO(0x400b, (float)_grid_load_load_sum4__out);
    // Generated from the component: GEO_PWM
    _geo_pwm__IN_ILF[0] = _lc_filter_bus_join__out[0];
    _geo_pwm__IN_ILF[1] = _lc_filter_bus_join__out[1];
    _geo_pwm__IN_ILF[2] = _lc_filter_bus_join__out[2];
    _geo_pwm__IN_KP = _kp__out;
    _geo_pwm__IN_M[0] = _bus_join3__out[0];
    _geo_pwm__IN_M[1] = _bus_join3__out[1];
    _geo_pwm__IN_M[2] = _bus_join3__out[2];
    _geo_pwm__IN_VDC_2 = _dc_bus_vc2_va1__out;
    {
        _geo_pwm__err = 500 - _geo_pwm__IN_VDC_2 ;
        _geo_pwm__i0 = _geo_pwm__IN_KP * _geo_pwm__err + 0 * ( _geo_pwm__err_kminus + _geo_pwm__err * 0.00005 ) ;
        _geo_pwm__v0 = geoMod_computeV0 ( _geo_pwm__i0 , _geo_pwm__IN_M [ 2 ] , _geo_pwm__IN_M [ 0 ] , _geo_pwm__IN_M [ 1 ] , _geo_pwm__IN_ILF [ 0 ] , _geo_pwm__IN_ILF [ 1 ] , _geo_pwm__IN_ILF [ 2 ] ) ;
        _geo_pwm__OUT_V_AB0 [ 0 ] = _geo_pwm__IN_M [ 0 ] ;
        _geo_pwm__OUT_V_AB0 [ 1 ] = _geo_pwm__IN_M [ 1 ] ;
        _geo_pwm__OUT_V_AB0 [ 2 ] = _geo_pwm__v0 ;
        _geo_pwm__err_kminus = _geo_pwm__err ;
    }
    // Generated from the component: ILF0_AB0
    HIL_OutAO(0x4010, (float)_bus_join9__out[0]);
    HIL_OutAO(0x4011, (float)_bus_join9__out[1]);
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Logical operator1
    _grid_load_load_phase_a_grid_synchronization_logical_operator1__out = _grid_load_load_phase_a_grid_synchronization_comparator1__out && _grid_load_load_phase_a_grid_synchronization_steady_state_check__out && _grid_load_load_phase_a_grid_synchronization_delay1__out ;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product6
    _grid_load_load_phase_a_single_phase_pll1_product6__out = (_grid_load_load_phase_a_single_phase_pll1_kd_lut__value * _grid_load_load_phase_a_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product5
    _grid_load_load_phase_a_single_phase_pll1_product5__out = (_grid_load_load_phase_a_single_phase_pll1_ki_lut__value * _grid_load_load_phase_a_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Product7
    _grid_load_load_phase_a_single_phase_pll1_product7__out = (_grid_load_load_phase_a_single_phase_pll1_kp_lut__value * _grid_load_load_phase_a_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Logical operator1
    _grid_load_load_phase_b_grid_synchronization_logical_operator1__out = _grid_load_load_phase_b_grid_synchronization_comparator1__out && _grid_load_load_phase_b_grid_synchronization_steady_state_check__out && _grid_load_load_phase_b_grid_synchronization_delay1__out ;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product6
    _grid_load_load_phase_b_single_phase_pll1_product6__out = (_grid_load_load_phase_b_single_phase_pll1_kd_lut__value * _grid_load_load_phase_b_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product5
    _grid_load_load_phase_b_single_phase_pll1_product5__out = (_grid_load_load_phase_b_single_phase_pll1_ki_lut__value * _grid_load_load_phase_b_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Product7
    _grid_load_load_phase_b_single_phase_pll1_product7__out = (_grid_load_load_phase_b_single_phase_pll1_kp_lut__value * _grid_load_load_phase_b_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Logical operator1
    _grid_load_load_phase_c_grid_synchronization_logical_operator1__out = _grid_load_load_phase_c_grid_synchronization_comparator1__out && _grid_load_load_phase_c_grid_synchronization_steady_state_check__out && _grid_load_load_phase_c_grid_synchronization_delay1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product6
    _grid_load_load_phase_c_single_phase_pll1_product6__out = (_grid_load_load_phase_c_single_phase_pll1_kd_lut__value * _grid_load_load_phase_c_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product5
    _grid_load_load_phase_c_single_phase_pll1_product5__out = (_grid_load_load_phase_c_single_phase_pll1_ki_lut__value * _grid_load_load_phase_c_single_phase_pll1_product8__out);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Product7
    _grid_load_load_phase_c_single_phase_pll1_product7__out = (_grid_load_load_phase_c_single_phase_pll1_kp_lut__value * _grid_load_load_phase_c_single_phase_pll1_product8__out);
    // Generated from the component: INV_CLARKE
    _inv_clarke__IN_V_AB0[0] = _geo_pwm__OUT_V_AB0[0];
    _inv_clarke__IN_V_AB0[1] = _geo_pwm__OUT_V_AB0[1];
    _inv_clarke__IN_V_AB0[2] = _geo_pwm__OUT_V_AB0[2];
    {
        alphaBetaToAbc_PI ( _inv_clarke__IN_V_AB0 [ 0 ] , _inv_clarke__IN_V_AB0 [ 1 ] , _inv_clarke__IN_V_AB0 [ 2 ] , & _inv_clarke__van , & _inv_clarke__vbn , & _inv_clarke__vcn ) ;
        _inv_clarke__OUT_V [ 0 ] = _inv_clarke__van ;
        _inv_clarke__OUT_V [ 1 ] = _inv_clarke__vbn ;
        _inv_clarke__OUT_V [ 2 ] = _inv_clarke__vcn ;
    }
    // Generated from the component: modulating1
    HIL_OutAO(0x4030, (float)_geo_pwm__OUT_V_AB0[0]);
    HIL_OutAO(0x4031, (float)_geo_pwm__OUT_V_AB0[1]);
    HIL_OutAO(0x4032, (float)_geo_pwm__OUT_V_AB0[2]);
    // Generated from the component: Grid Load.Load.Phase A.counter
    _grid_load_load_phase_a_counter__in = _grid_load_load_phase_a_grid_synchronization_logical_operator1__out;
    {
        _grid_load_load_phase_a_counter__out = _grid_load_load_phase_a_counter__out_state ;
        if ( _grid_load_load_phase_a_counter__in > 0.5 )     {
            _grid_load_load_phase_a_counter__cnt ++ ;
            if ( _grid_load_load_phase_a_counter__cnt >= 5 * 0.08333333333333333 / 5e-05 )         {
                _grid_load_load_phase_a_counter__out = 1 ;
                _grid_load_load_phase_a_counter__cnt = 0 ;
            }
        }
        else if ( _grid_load_load_phase_a_counter__in < 0.5 )     {
            _grid_load_load_phase_a_counter__out = 0 ;
            _grid_load_load_phase_a_counter__cnt = 0 ;
        }
        _grid_load_load_phase_a_counter__out_state = _grid_load_load_phase_a_counter__out ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Discrete Transfer Function1
    X_UnInt32 _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i;
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_coeff[_grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i + 1] * _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__i];
    }
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_sum += _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__states[0] * _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__delay_line_in = _grid_load_load_phase_a_single_phase_pll1_product6__out - _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__a_sum;
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__out = _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: Grid Load.Load.Phase B.counter
    _grid_load_load_phase_b_counter__in = _grid_load_load_phase_b_grid_synchronization_logical_operator1__out;
    {
        _grid_load_load_phase_b_counter__out = _grid_load_load_phase_b_counter__out_state ;
        if ( _grid_load_load_phase_b_counter__in > 0.5 )     {
            _grid_load_load_phase_b_counter__cnt ++ ;
            if ( _grid_load_load_phase_b_counter__cnt >= 5 * 0.08333333333333333 / 5e-05 )         {
                _grid_load_load_phase_b_counter__out = 1 ;
                _grid_load_load_phase_b_counter__cnt = 0 ;
            }
        }
        else if ( _grid_load_load_phase_b_counter__in < 0.5 )     {
            _grid_load_load_phase_b_counter__out = 0 ;
            _grid_load_load_phase_b_counter__cnt = 0 ;
        }
        _grid_load_load_phase_b_counter__out_state = _grid_load_load_phase_b_counter__out ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Discrete Transfer Function1
    X_UnInt32 _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i;
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_coeff[_grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i + 1] * _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__i];
    }
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_sum += _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__states[0] * _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__delay_line_in = _grid_load_load_phase_b_single_phase_pll1_product6__out - _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__a_sum;
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__out = _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: Grid Load.Load.Phase C.counter
    _grid_load_load_phase_c_counter__in = _grid_load_load_phase_c_grid_synchronization_logical_operator1__out;
    {
        _grid_load_load_phase_c_counter__out = _grid_load_load_phase_c_counter__out_state ;
        if ( _grid_load_load_phase_c_counter__in > 0.5 )     {
            _grid_load_load_phase_c_counter__cnt ++ ;
            if ( _grid_load_load_phase_c_counter__cnt >= 5 * 0.08333333333333333 / 5e-05 )         {
                _grid_load_load_phase_c_counter__out = 1 ;
                _grid_load_load_phase_c_counter__cnt = 0 ;
            }
        }
        else if ( _grid_load_load_phase_c_counter__in < 0.5 )     {
            _grid_load_load_phase_c_counter__out = 0 ;
            _grid_load_load_phase_c_counter__cnt = 0 ;
        }
        _grid_load_load_phase_c_counter__out_state = _grid_load_load_phase_c_counter__out ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Discrete Transfer Function1
    X_UnInt32 _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i;
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i = 0; _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i < 1; _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i++) {
        _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_coeff[_grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i + 1] * _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__states[_grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__i];
    }
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_sum += _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__states[0] * _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__delay_line_in = _grid_load_load_phase_c_single_phase_pll1_product6__out - _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__a_sum;
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_sum += _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__out = _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: Modulation.Bus Split1
    _modulation_bus_split1__out = _inv_clarke__OUT_V[0];
    _modulation_bus_split1__out1 = _inv_clarke__OUT_V[1];
    _modulation_bus_split1__out2 = _inv_clarke__OUT_V[2];
    // Generated from the component: modulating
    HIL_OutAO(0x402d, (float)_inv_clarke__OUT_V[0]);
    HIL_OutAO(0x402e, (float)_inv_clarke__OUT_V[1]);
    HIL_OutAO(0x402f, (float)_inv_clarke__OUT_V[2]);
    // Generated from the component: Grid Load.Load.Phase A.Logical operator13
    _grid_load_load_phase_a_logical_operator13__out = _grid_load_load_phase_a_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator14
    _grid_load_load_phase_a_logical_operator14__out = _grid_load_load_phase_a_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator28
    _grid_load_load_phase_a_logical_operator28__out = _grid_load_load_phase_a_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator5
    _grid_load_load_phase_a_logical_operator5__out = _grid_load_load_relational_operator3__out && _grid_load_load_phase_a_counter__out ;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum8
    _grid_load_load_phase_a_single_phase_pll1_sum8__out = _grid_load_load_phase_a_single_phase_pll1_product7__out + _grid_load_load_phase_a_single_phase_pll1_i__out + _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator13
    _grid_load_load_phase_b_logical_operator13__out = _grid_load_load_phase_b_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator14
    _grid_load_load_phase_b_logical_operator14__out = _grid_load_load_phase_b_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator28
    _grid_load_load_phase_b_logical_operator28__out = _grid_load_load_phase_b_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator5
    _grid_load_load_phase_b_logical_operator5__out = _grid_load_load_relational_operator3__out && _grid_load_load_phase_b_counter__out ;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum8
    _grid_load_load_phase_b_single_phase_pll1_sum8__out = _grid_load_load_phase_b_single_phase_pll1_product7__out + _grid_load_load_phase_b_single_phase_pll1_i__out + _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator13
    _grid_load_load_phase_c_logical_operator13__out = _grid_load_load_phase_c_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator14
    _grid_load_load_phase_c_logical_operator14__out = _grid_load_load_phase_c_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator28
    _grid_load_load_phase_c_logical_operator28__out = _grid_load_load_phase_c_counter__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator5
    _grid_load_load_phase_c_logical_operator5__out = _grid_load_load_relational_operator3__out && _grid_load_load_phase_c_counter__out ;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum8
    _grid_load_load_phase_c_single_phase_pll1_sum8__out = _grid_load_load_phase_c_single_phase_pll1_product7__out + _grid_load_load_phase_c_single_phase_pll1_i__out + _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: Modulation.Rate Transition1.Input
    _modulation_rate_transition1_output__state = _modulation_bus_split1__out;
    // Generated from the component: Modulation.Rate Transition2.Input
    _modulation_rate_transition2_output__state = _modulation_bus_split1__out1;
    // Generated from the component: Modulation.Rate Transition3.Input
    _modulation_rate_transition3_output__state = _modulation_bus_split1__out2;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator10
    _grid_load_load_phase_a_logical_operator10__out = _grid_load_load_phase_a_logical_operator13__out && _grid_load_load_phase_a_relational_operator4__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator27
    _grid_load_load_phase_a_logical_operator27__out = _grid_load_load_phase_a_logical_operator28__out && _grid_load_load_phase_a_logical_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator17
    _grid_load_load_phase_a_logical_operator17__out = _grid_load_load_phase_a_logical_operator5__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator6
    _grid_load_load_phase_a_logical_operator6__out = !_grid_load_load_phase_a_logical_operator5__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Limit2
    _grid_load_load_phase_a_single_phase_pll1_limit2__out = MIN(MAX(_grid_load_load_phase_a_single_phase_pll1_sum8__out, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase B.Logical operator10
    _grid_load_load_phase_b_logical_operator10__out = _grid_load_load_phase_b_logical_operator13__out && _grid_load_load_phase_b_relational_operator4__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator27
    _grid_load_load_phase_b_logical_operator27__out = _grid_load_load_phase_b_logical_operator28__out && _grid_load_load_phase_b_logical_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator17
    _grid_load_load_phase_b_logical_operator17__out = _grid_load_load_phase_b_logical_operator5__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator6
    _grid_load_load_phase_b_logical_operator6__out = !_grid_load_load_phase_b_logical_operator5__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Limit2
    _grid_load_load_phase_b_single_phase_pll1_limit2__out = MIN(MAX(_grid_load_load_phase_b_single_phase_pll1_sum8__out, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase C.Logical operator10
    _grid_load_load_phase_c_logical_operator10__out = _grid_load_load_phase_c_logical_operator13__out && _grid_load_load_phase_c_relational_operator4__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator27
    _grid_load_load_phase_c_logical_operator27__out = _grid_load_load_phase_c_logical_operator28__out && _grid_load_load_phase_c_logical_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator17
    _grid_load_load_phase_c_logical_operator17__out = _grid_load_load_phase_c_logical_operator5__out && _grid_load_load_logical_operator1__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator6
    _grid_load_load_phase_c_logical_operator6__out = !_grid_load_load_phase_c_logical_operator5__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Limit2
    _grid_load_load_phase_c_single_phase_pll1_limit2__out = MIN(MAX(_grid_load_load_phase_c_single_phase_pll1_sum8__out, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Grid Load.Load.Phase A.Signal switch3
    _grid_load_load_phase_a_signal_switch3__out = (_grid_load_load_phase_a_logical_operator10__out > 0.5f) ? _grid_load_load_phase_a_limit2__out : _grid_load_load_phase_a_constant6__out;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator19
    _grid_load_load_phase_a_logical_operator19__out = _grid_load_load_phase_a_logical_operator17__out && _grid_load_load_phase_a_logical_operator2__out && _grid_load_load_phase_a_relational_operator3__out && _grid_load_load_phase_a_logical_operator26__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator20
    _grid_load_load_phase_a_logical_operator20__out = _grid_load_load_phase_a_logical_operator26__out && _grid_load_load_phase_a_logical_operator17__out && _grid_load_load_phase_a_logical_operator2__out && _grid_load_load_phase_a_relational_operator3__out ;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator29
    _grid_load_load_phase_a_logical_operator29__out = _grid_load_load_phase_a_relational_operator4__out && _grid_load_load_phase_a_logical_operator17__out ;
    // Generated from the component: Grid Load.Load.Phase A.Signal switch1
    _grid_load_load_phase_a_signal_switch1__out = (_grid_load_load_phase_a_logical_operator17__out > 0.5f) ? _grid_load_load_limit3__out : _grid_load_load_phase_a_constant3__out;
    // Generated from the component: Grid Load.Load.Phase A.Signal switch2
    _grid_load_load_phase_a_signal_switch2__out = (_grid_load_load_phase_a_logical_operator17__out > 0.5f) ? _grid_load_load_limit2__out : _grid_load_load_phase_a_qmin_fun__out;
    // Generated from the component: Grid Load.Load.Phase A.Logical operator7
    _grid_load_load_phase_a_logical_operator7__out = _grid_load_load_phase_a_logical_operator6__out && _grid_load_load_phase_a_relational_operator1__out && _grid_load_load_phase_a_relational_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum5
    _grid_load_load_phase_a_single_phase_pll1_sum5__out = _grid_load_load_phase_a_single_phase_pll1_limit2__out + _grid_load_load_phase_a_single_phase_pll1_const__out;
    // Generated from the component: Grid Load.Load.Phase B.Signal switch3
    _grid_load_load_phase_b_signal_switch3__out = (_grid_load_load_phase_b_logical_operator10__out > 0.5f) ? _grid_load_load_phase_b_limit2__out : _grid_load_load_phase_b_constant6__out;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator19
    _grid_load_load_phase_b_logical_operator19__out = _grid_load_load_phase_b_logical_operator17__out && _grid_load_load_phase_b_logical_operator2__out && _grid_load_load_phase_b_relational_operator3__out && _grid_load_load_phase_b_logical_operator26__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator20
    _grid_load_load_phase_b_logical_operator20__out = _grid_load_load_phase_b_logical_operator26__out && _grid_load_load_phase_b_logical_operator17__out && _grid_load_load_phase_b_logical_operator2__out && _grid_load_load_phase_b_relational_operator3__out ;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator29
    _grid_load_load_phase_b_logical_operator29__out = _grid_load_load_phase_b_relational_operator4__out && _grid_load_load_phase_b_logical_operator17__out ;
    // Generated from the component: Grid Load.Load.Phase B.Signal switch1
    _grid_load_load_phase_b_signal_switch1__out = (_grid_load_load_phase_b_logical_operator17__out > 0.5f) ? _grid_load_load_limit4__out : _grid_load_load_phase_b_constant3__out;
    // Generated from the component: Grid Load.Load.Phase B.Signal switch2
    _grid_load_load_phase_b_signal_switch2__out = (_grid_load_load_phase_b_logical_operator17__out > 0.5f) ? _grid_load_load_limit5__out : _grid_load_load_phase_b_qmin_fun__out;
    // Generated from the component: Grid Load.Load.Phase B.Logical operator7
    _grid_load_load_phase_b_logical_operator7__out = _grid_load_load_phase_b_logical_operator6__out && _grid_load_load_phase_b_relational_operator1__out && _grid_load_load_phase_b_relational_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum5
    _grid_load_load_phase_b_single_phase_pll1_sum5__out = _grid_load_load_phase_b_single_phase_pll1_limit2__out + _grid_load_load_phase_b_single_phase_pll1_const__out;
    // Generated from the component: Grid Load.Load.Phase C.Signal switch3
    _grid_load_load_phase_c_signal_switch3__out = (_grid_load_load_phase_c_logical_operator10__out > 0.5f) ? _grid_load_load_phase_c_limit2__out : _grid_load_load_phase_c_constant6__out;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator19
    _grid_load_load_phase_c_logical_operator19__out = _grid_load_load_phase_c_logical_operator17__out && _grid_load_load_phase_c_logical_operator2__out && _grid_load_load_phase_c_relational_operator3__out && _grid_load_load_phase_c_logical_operator26__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator20
    _grid_load_load_phase_c_logical_operator20__out = _grid_load_load_phase_c_logical_operator26__out && _grid_load_load_phase_c_logical_operator17__out && _grid_load_load_phase_c_logical_operator2__out && _grid_load_load_phase_c_relational_operator3__out ;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator29
    _grid_load_load_phase_c_logical_operator29__out = _grid_load_load_phase_c_relational_operator4__out && _grid_load_load_phase_c_logical_operator17__out ;
    // Generated from the component: Grid Load.Load.Phase C.Signal switch1
    _grid_load_load_phase_c_signal_switch1__out = (_grid_load_load_phase_c_logical_operator17__out > 0.5f) ? _grid_load_load_limit6__out : _grid_load_load_phase_c_constant3__out;
    // Generated from the component: Grid Load.Load.Phase C.Signal switch2
    _grid_load_load_phase_c_signal_switch2__out = (_grid_load_load_phase_c_logical_operator17__out > 0.5f) ? _grid_load_load_limit7__out : _grid_load_load_phase_c_qmin_fun__out;
    // Generated from the component: Grid Load.Load.Phase C.Logical operator7
    _grid_load_load_phase_c_logical_operator7__out = _grid_load_load_phase_c_logical_operator6__out && _grid_load_load_phase_c_relational_operator1__out && _grid_load_load_phase_c_relational_operator2__out ;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum5
    _grid_load_load_phase_c_single_phase_pll1_sum5__out = _grid_load_load_phase_c_single_phase_pll1_limit2__out + _grid_load_load_phase_c_single_phase_pll1_const__out;
    // Generated from the component: Grid Load.Load.Phase A.L_ref.reciprocal
    _grid_load_load_phase_a_l_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_a_signal_switch3__out);
    // Generated from the component: Grid Load.Load.Phase A.R_inc
    _grid_load_load_phase_a_r_inc__C_in = _grid_load_load_phase_a_unit_delay12__out;
    _grid_load_load_phase_a_r_inc__Pref = _grid_load_load_phase_a_limit6__out;
    _grid_load_load_phase_a_r_inc__R_in = _grid_load_load_phase_a_low_pass_filter9__out;
    _grid_load_load_phase_a_r_inc__V[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_r_inc__V[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_r_inc__enable = _grid_load_load_phase_a_logical_operator19__out;
    _grid_load_load_phase_a_r_inc__harmonics[0] = _grid_load_load_phase_a_harmonic_vector5__out[0];
    _grid_load_load_phase_a_r_inc__harmonics[1] = _grid_load_load_phase_a_harmonic_vector5__out[1];
    _grid_load_load_phase_a_r_inc__pause = _grid_load_load_phase_a_logical_operator23__out;
    _grid_load_load_phase_a_r_inc__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_a_r_inc__enable && ! _grid_load_load_phase_a_r_inc__pause )     {
            _grid_load_load_phase_a_r_inc__R = _grid_load_load_phase_a_r_inc__R_in * ( 1 + _grid_load_load_phase_a_r_inc__dR_accumulator ) ;
            _grid_load_load_phase_a_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_a_r_inc__i = 0 ; _grid_load_load_phase_a_r_inc__i < 1.0 ; _grid_load_load_phase_a_r_inc__i ++ )         {
                _grid_load_load_phase_a_r_inc__Ih = _grid_load_load_phase_a_r_inc__V [ _grid_load_load_phase_a_r_inc__i ] / sqrt ( ( _grid_load_load_phase_a_r_inc__R + 0.010812663781955268 ) * ( _grid_load_load_phase_a_r_inc__R + 0.010812663781955268 ) + ( _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_a_r_inc__Isum += ( _grid_load_load_phase_a_r_inc__Ih * _grid_load_load_phase_a_r_inc__Ih ) ;
            }
            _grid_load_load_phase_a_r_inc__I_calc = sqrt ( _grid_load_load_phase_a_r_inc__Isum ) ;
            _grid_load_load_phase_a_r_inc__P_calc_old = _grid_load_load_phase_a_r_inc__I_calc * _grid_load_load_phase_a_r_inc__I_calc * ( _grid_load_load_phase_a_r_inc__R + 0.010812663781955268 ) ;
            _grid_load_load_phase_a_r_inc__dP_old = ( _grid_load_load_phase_a_r_inc__P_calc_old - _grid_load_load_phase_a_r_inc__Pref ) / _grid_load_load_phase_a_r_inc__Pref ;
            _grid_load_load_phase_a_r_inc__R_changed = _grid_load_load_phase_a_r_inc__R_in * ( 1 + _grid_load_load_phase_a_r_inc__dR_accumulator + _grid_load_load_phase_a_r_inc__dR ) ;
            _grid_load_load_phase_a_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_a_r_inc__i = 0 ; _grid_load_load_phase_a_r_inc__i < 1.0 ; _grid_load_load_phase_a_r_inc__i ++ )         {
                _grid_load_load_phase_a_r_inc__Ih = _grid_load_load_phase_a_r_inc__V [ _grid_load_load_phase_a_r_inc__i ] / sqrt ( ( _grid_load_load_phase_a_r_inc__R_changed + 0.010812663781955268 ) * ( _grid_load_load_phase_a_r_inc__R_changed + 0.010812663781955268 ) + ( _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_r_inc__harmonics [ _grid_load_load_phase_a_r_inc__i ] * _grid_load_load_phase_a_r_inc__w * _grid_load_load_phase_a_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_a_r_inc__Isum += ( _grid_load_load_phase_a_r_inc__Ih * _grid_load_load_phase_a_r_inc__Ih ) ;
            }
            _grid_load_load_phase_a_r_inc__I_calc = sqrt ( _grid_load_load_phase_a_r_inc__Isum ) ;
            _grid_load_load_phase_a_r_inc__P_calc_new = _grid_load_load_phase_a_r_inc__I_calc * _grid_load_load_phase_a_r_inc__I_calc * ( _grid_load_load_phase_a_r_inc__R_changed + 0.010812663781955268 ) ;
            _grid_load_load_phase_a_r_inc__dP = ( _grid_load_load_phase_a_r_inc__P_calc_new - _grid_load_load_phase_a_r_inc__Pref ) / _grid_load_load_phase_a_r_inc__Pref ;
            if ( fabs ( _grid_load_load_phase_a_r_inc__dP_old ) < _grid_load_load_phase_a_r_inc__P_tol )         {
                _grid_load_load_phase_a_r_inc__status = 0 ;
                _grid_load_load_phase_a_r_inc__inc_applied = 1 ;
            }
            else         {
                if ( _grid_load_load_phase_a_r_inc__dP * _grid_load_load_phase_a_r_inc__dP_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_a_r_inc__dP ) > fabs ( _grid_load_load_phase_a_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_a_r_inc__dR = - _grid_load_load_phase_a_r_inc__dR ;
                        _grid_load_load_phase_a_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_a_r_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_a_r_inc__dR_accumulator += _grid_load_load_phase_a_r_inc__dR ;
                        _grid_load_load_phase_a_r_inc__R = _grid_load_load_phase_a_r_inc__R_changed ;
                        _grid_load_load_phase_a_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_a_r_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_a_r_inc__dP ) < fabs ( _grid_load_load_phase_a_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_a_r_inc__dR_accumulator += _grid_load_load_phase_a_r_inc__dR ;
                        _grid_load_load_phase_a_r_inc__R = _grid_load_load_phase_a_r_inc__R_changed ;
                        _grid_load_load_phase_a_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_a_r_inc__dR = - _grid_load_load_phase_a_r_inc__dR / 2 ;
                        _grid_load_load_phase_a_r_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_a_r_inc__dR /= 2 ;
                        _grid_load_load_phase_a_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_a_r_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_a_r_inc__pause && _grid_load_load_phase_a_r_inc__enable )     {
            _grid_load_load_phase_a_r_inc__status = - 2 ;
            _grid_load_load_phase_a_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_a_r_inc__R = _grid_load_load_phase_a_r_inc__R_in * ( 1 + _grid_load_load_phase_a_r_inc__dR_accumulator ) ;
        }
        else if ( ! _grid_load_load_phase_a_r_inc__enable )     {
            _grid_load_load_phase_a_r_inc__R = _grid_load_load_phase_a_r_inc__R_in ;
            _grid_load_load_phase_a_r_inc__dR_accumulator = 0 ;
            _grid_load_load_phase_a_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_a_r_inc__dR = 0.001 ;
            _grid_load_load_phase_a_r_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.C_inc
    _grid_load_load_phase_a_c_inc__C_in = _grid_load_load_phase_a_low_pass_filter8__out;
    _grid_load_load_phase_a_c_inc__Qref = _grid_load_load_phase_a_limit11__out;
    _grid_load_load_phase_a_c_inc__R_in = _grid_load_load_phase_a_unit_delay13__out;
    _grid_load_load_phase_a_c_inc__V[0] = _grid_load_load_phase_a_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_a_c_inc__V[1] = _grid_load_load_phase_a_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_a_c_inc__enable = _grid_load_load_phase_a_logical_operator20__out;
    _grid_load_load_phase_a_c_inc__harmonics[0] = _grid_load_load_phase_a_harmonic_vector5__out[0];
    _grid_load_load_phase_a_c_inc__harmonics[1] = _grid_load_load_phase_a_harmonic_vector5__out[1];
    _grid_load_load_phase_a_c_inc__pause = _grid_load_load_phase_a_logical_operator22__out;
    _grid_load_load_phase_a_c_inc__w = _grid_load_load_phase_a_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_a_c_inc__enable && ! _grid_load_load_phase_a_c_inc__pause )     {
            _grid_load_load_phase_a_c_inc__C = _grid_load_load_phase_a_c_inc__C_in * ( 1 + _grid_load_load_phase_a_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_a_c_inc__Qsum = 0 ;
            for ( _grid_load_load_phase_a_c_inc__i = 0 ; _grid_load_load_phase_a_c_inc__i < 1.0 ; _grid_load_load_phase_a_c_inc__i ++ )         {
                _grid_load_load_phase_a_c_inc__Ih = _grid_load_load_phase_a_c_inc__V [ _grid_load_load_phase_a_c_inc__i ] / sqrt ( ( _grid_load_load_phase_a_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_a_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C ) , - 1 ) ) * ( _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C ) , - 1 ) ) ) ;
                _grid_load_load_phase_a_c_inc__Qsum -= ( _grid_load_load_phase_a_c_inc__Ih * _grid_load_load_phase_a_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C ) , - 1 ) ) ) ;
            }
            _grid_load_load_phase_a_c_inc__Q_calc_old = _grid_load_load_phase_a_c_inc__Qsum ;
            _grid_load_load_phase_a_c_inc__dQ_old = ( _grid_load_load_phase_a_c_inc__Q_calc_old - _grid_load_load_phase_a_c_inc__Qref ) / _grid_load_load_phase_a_c_inc__Qref ;
            if ( fabs ( _grid_load_load_phase_a_c_inc__dQ_old ) < _grid_load_load_phase_a_c_inc__Q_tol )         {
                _grid_load_load_phase_a_c_inc__status = 0 ;
                _grid_load_load_phase_a_c_inc__inc_applied = 1 ;
            }
            else         {
                _grid_load_load_phase_a_c_inc__status = 12 ;
                _grid_load_load_phase_a_c_inc__C_changed = _grid_load_load_phase_a_c_inc__C_in * ( 1 + _grid_load_load_phase_a_c_inc__dC_accumulator + _grid_load_load_phase_a_c_inc__dC ) ;
                _grid_load_load_phase_a_c_inc__Qsum = 0 ;
                for ( _grid_load_load_phase_a_c_inc__i = 0 ; _grid_load_load_phase_a_c_inc__i < 1.0 ; _grid_load_load_phase_a_c_inc__i ++ )             {
                    _grid_load_load_phase_a_c_inc__Ih = _grid_load_load_phase_a_c_inc__V [ _grid_load_load_phase_a_c_inc__i ] / sqrt ( ( _grid_load_load_phase_a_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_a_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C_changed ) , - 1 ) ) * ( _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C_changed ) , - 1 ) ) ) ;
                    _grid_load_load_phase_a_c_inc__Qsum -= ( _grid_load_load_phase_a_c_inc__Ih * _grid_load_load_phase_a_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] - pow ( ( _grid_load_load_phase_a_c_inc__harmonics [ _grid_load_load_phase_a_c_inc__i ] * _grid_load_load_phase_a_c_inc__w * _grid_load_load_phase_a_c_inc__C_changed ) , - 1 ) ) ) ;
                }
                _grid_load_load_phase_a_c_inc__Q_calc_new = _grid_load_load_phase_a_c_inc__Qsum ;
                _grid_load_load_phase_a_c_inc__dQ = ( _grid_load_load_phase_a_c_inc__Q_calc_new - _grid_load_load_phase_a_c_inc__Qref ) / _grid_load_load_phase_a_c_inc__Qref ;
                if ( _grid_load_load_phase_a_c_inc__dQ * _grid_load_load_phase_a_c_inc__dQ_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_a_c_inc__dQ ) > fabs ( _grid_load_load_phase_a_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_a_c_inc__dC = - _grid_load_load_phase_a_c_inc__dC ;
                        _grid_load_load_phase_a_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_a_c_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_a_c_inc__dC_accumulator += _grid_load_load_phase_a_c_inc__dC ;
                        _grid_load_load_phase_a_c_inc__C = _grid_load_load_phase_a_c_inc__C_changed ;
                        _grid_load_load_phase_a_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_a_c_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_a_c_inc__dQ ) < fabs ( _grid_load_load_phase_a_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_a_c_inc__dC_accumulator += _grid_load_load_phase_a_c_inc__dC ;
                        _grid_load_load_phase_a_c_inc__C = _grid_load_load_phase_a_c_inc__C_changed ;
                        _grid_load_load_phase_a_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_a_c_inc__dC = - _grid_load_load_phase_a_c_inc__dC / 2 ;
                        _grid_load_load_phase_a_c_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_a_c_inc__dC /= 2 ;
                        _grid_load_load_phase_a_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_a_c_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_a_c_inc__enable && _grid_load_load_phase_a_c_inc__pause )     {
            _grid_load_load_phase_a_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_a_c_inc__C = _grid_load_load_phase_a_c_inc__C_in * ( 1 + _grid_load_load_phase_a_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_a_c_inc__status = - 2 ;
        }
        else if ( ! _grid_load_load_phase_a_c_inc__enable )     {
            _grid_load_load_phase_a_c_inc__C = _grid_load_load_phase_a_c_inc__C_in ;
            _grid_load_load_phase_a_c_inc__dC_accumulator = 0 ;
            _grid_load_load_phase_a_c_inc__dC = (-0.001) ;
            _grid_load_load_phase_a_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_a_c_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.S1.CTC_Wrapper
    if (_grid_load_load_phase_a_logical_operator29__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Grid Load.Load.Phase A.f_to_w1
    _grid_load_load_phase_a_f_to_w1__out = 60000.0 * _grid_load_load_phase_a_signal_switch1__out;
    // Generated from the component: Grid Load.Load.Phase A.f_to_w2
    _grid_load_load_phase_a_f_to_w2__out = 45000.0 * _grid_load_load_phase_a_signal_switch2__out;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Sum10
    _grid_load_load_phase_a_single_phase_pll1_sum10__out = _grid_load_load_phase_a_single_phase_pll1_sum5__out - _grid_load_load_phase_a_single_phase_pll1_integrator6__out;
    // Generated from the component: Grid Load.Load.Phase B.L_ref.reciprocal
    _grid_load_load_phase_b_l_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_b_signal_switch3__out);
    // Generated from the component: Grid Load.Load.Phase B.R_inc
    _grid_load_load_phase_b_r_inc__C_in = _grid_load_load_phase_b_unit_delay12__out;
    _grid_load_load_phase_b_r_inc__Pref = _grid_load_load_phase_b_limit6__out;
    _grid_load_load_phase_b_r_inc__R_in = _grid_load_load_phase_b_low_pass_filter9__out;
    _grid_load_load_phase_b_r_inc__V[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_r_inc__V[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_r_inc__enable = _grid_load_load_phase_b_logical_operator19__out;
    _grid_load_load_phase_b_r_inc__harmonics[0] = _grid_load_load_phase_b_harmonic_vector5__out[0];
    _grid_load_load_phase_b_r_inc__harmonics[1] = _grid_load_load_phase_b_harmonic_vector5__out[1];
    _grid_load_load_phase_b_r_inc__pause = _grid_load_load_phase_b_logical_operator23__out;
    _grid_load_load_phase_b_r_inc__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_b_r_inc__enable && ! _grid_load_load_phase_b_r_inc__pause )     {
            _grid_load_load_phase_b_r_inc__R = _grid_load_load_phase_b_r_inc__R_in * ( 1 + _grid_load_load_phase_b_r_inc__dR_accumulator ) ;
            _grid_load_load_phase_b_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_b_r_inc__i = 0 ; _grid_load_load_phase_b_r_inc__i < 1.0 ; _grid_load_load_phase_b_r_inc__i ++ )         {
                _grid_load_load_phase_b_r_inc__Ih = _grid_load_load_phase_b_r_inc__V [ _grid_load_load_phase_b_r_inc__i ] / sqrt ( ( _grid_load_load_phase_b_r_inc__R + 0.010812663781955268 ) * ( _grid_load_load_phase_b_r_inc__R + 0.010812663781955268 ) + ( _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_b_r_inc__Isum += ( _grid_load_load_phase_b_r_inc__Ih * _grid_load_load_phase_b_r_inc__Ih ) ;
            }
            _grid_load_load_phase_b_r_inc__I_calc = sqrt ( _grid_load_load_phase_b_r_inc__Isum ) ;
            _grid_load_load_phase_b_r_inc__P_calc_old = _grid_load_load_phase_b_r_inc__I_calc * _grid_load_load_phase_b_r_inc__I_calc * ( _grid_load_load_phase_b_r_inc__R + 0.010812663781955268 ) ;
            _grid_load_load_phase_b_r_inc__dP_old = ( _grid_load_load_phase_b_r_inc__P_calc_old - _grid_load_load_phase_b_r_inc__Pref ) / _grid_load_load_phase_b_r_inc__Pref ;
            _grid_load_load_phase_b_r_inc__R_changed = _grid_load_load_phase_b_r_inc__R_in * ( 1 + _grid_load_load_phase_b_r_inc__dR_accumulator + _grid_load_load_phase_b_r_inc__dR ) ;
            _grid_load_load_phase_b_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_b_r_inc__i = 0 ; _grid_load_load_phase_b_r_inc__i < 1.0 ; _grid_load_load_phase_b_r_inc__i ++ )         {
                _grid_load_load_phase_b_r_inc__Ih = _grid_load_load_phase_b_r_inc__V [ _grid_load_load_phase_b_r_inc__i ] / sqrt ( ( _grid_load_load_phase_b_r_inc__R_changed + 0.010812663781955268 ) * ( _grid_load_load_phase_b_r_inc__R_changed + 0.010812663781955268 ) + ( _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_r_inc__harmonics [ _grid_load_load_phase_b_r_inc__i ] * _grid_load_load_phase_b_r_inc__w * _grid_load_load_phase_b_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_b_r_inc__Isum += ( _grid_load_load_phase_b_r_inc__Ih * _grid_load_load_phase_b_r_inc__Ih ) ;
            }
            _grid_load_load_phase_b_r_inc__I_calc = sqrt ( _grid_load_load_phase_b_r_inc__Isum ) ;
            _grid_load_load_phase_b_r_inc__P_calc_new = _grid_load_load_phase_b_r_inc__I_calc * _grid_load_load_phase_b_r_inc__I_calc * ( _grid_load_load_phase_b_r_inc__R_changed + 0.010812663781955268 ) ;
            _grid_load_load_phase_b_r_inc__dP = ( _grid_load_load_phase_b_r_inc__P_calc_new - _grid_load_load_phase_b_r_inc__Pref ) / _grid_load_load_phase_b_r_inc__Pref ;
            if ( fabs ( _grid_load_load_phase_b_r_inc__dP_old ) < _grid_load_load_phase_b_r_inc__P_tol )         {
                _grid_load_load_phase_b_r_inc__status = 0 ;
                _grid_load_load_phase_b_r_inc__inc_applied = 1 ;
            }
            else         {
                if ( _grid_load_load_phase_b_r_inc__dP * _grid_load_load_phase_b_r_inc__dP_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_b_r_inc__dP ) > fabs ( _grid_load_load_phase_b_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_b_r_inc__dR = - _grid_load_load_phase_b_r_inc__dR ;
                        _grid_load_load_phase_b_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_b_r_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_b_r_inc__dR_accumulator += _grid_load_load_phase_b_r_inc__dR ;
                        _grid_load_load_phase_b_r_inc__R = _grid_load_load_phase_b_r_inc__R_changed ;
                        _grid_load_load_phase_b_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_b_r_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_b_r_inc__dP ) < fabs ( _grid_load_load_phase_b_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_b_r_inc__dR_accumulator += _grid_load_load_phase_b_r_inc__dR ;
                        _grid_load_load_phase_b_r_inc__R = _grid_load_load_phase_b_r_inc__R_changed ;
                        _grid_load_load_phase_b_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_b_r_inc__dR = - _grid_load_load_phase_b_r_inc__dR / 2 ;
                        _grid_load_load_phase_b_r_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_b_r_inc__dR /= 2 ;
                        _grid_load_load_phase_b_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_b_r_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_b_r_inc__pause && _grid_load_load_phase_b_r_inc__enable )     {
            _grid_load_load_phase_b_r_inc__status = - 2 ;
            _grid_load_load_phase_b_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_b_r_inc__R = _grid_load_load_phase_b_r_inc__R_in * ( 1 + _grid_load_load_phase_b_r_inc__dR_accumulator ) ;
        }
        else if ( ! _grid_load_load_phase_b_r_inc__enable )     {
            _grid_load_load_phase_b_r_inc__R = _grid_load_load_phase_b_r_inc__R_in ;
            _grid_load_load_phase_b_r_inc__dR_accumulator = 0 ;
            _grid_load_load_phase_b_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_b_r_inc__dR = 0.001 ;
            _grid_load_load_phase_b_r_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.C_inc
    _grid_load_load_phase_b_c_inc__C_in = _grid_load_load_phase_b_low_pass_filter8__out;
    _grid_load_load_phase_b_c_inc__Qref = _grid_load_load_phase_b_limit11__out;
    _grid_load_load_phase_b_c_inc__R_in = _grid_load_load_phase_b_unit_delay13__out;
    _grid_load_load_phase_b_c_inc__V[0] = _grid_load_load_phase_b_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_b_c_inc__V[1] = _grid_load_load_phase_b_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_b_c_inc__enable = _grid_load_load_phase_b_logical_operator20__out;
    _grid_load_load_phase_b_c_inc__harmonics[0] = _grid_load_load_phase_b_harmonic_vector5__out[0];
    _grid_load_load_phase_b_c_inc__harmonics[1] = _grid_load_load_phase_b_harmonic_vector5__out[1];
    _grid_load_load_phase_b_c_inc__pause = _grid_load_load_phase_b_logical_operator22__out;
    _grid_load_load_phase_b_c_inc__w = _grid_load_load_phase_b_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_b_c_inc__enable && ! _grid_load_load_phase_b_c_inc__pause )     {
            _grid_load_load_phase_b_c_inc__C = _grid_load_load_phase_b_c_inc__C_in * ( 1 + _grid_load_load_phase_b_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_b_c_inc__Qsum = 0 ;
            for ( _grid_load_load_phase_b_c_inc__i = 0 ; _grid_load_load_phase_b_c_inc__i < 1.0 ; _grid_load_load_phase_b_c_inc__i ++ )         {
                _grid_load_load_phase_b_c_inc__Ih = _grid_load_load_phase_b_c_inc__V [ _grid_load_load_phase_b_c_inc__i ] / sqrt ( ( _grid_load_load_phase_b_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_b_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C ) , - 1 ) ) * ( _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C ) , - 1 ) ) ) ;
                _grid_load_load_phase_b_c_inc__Qsum -= ( _grid_load_load_phase_b_c_inc__Ih * _grid_load_load_phase_b_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C ) , - 1 ) ) ) ;
            }
            _grid_load_load_phase_b_c_inc__Q_calc_old = _grid_load_load_phase_b_c_inc__Qsum ;
            _grid_load_load_phase_b_c_inc__dQ_old = ( _grid_load_load_phase_b_c_inc__Q_calc_old - _grid_load_load_phase_b_c_inc__Qref ) / _grid_load_load_phase_b_c_inc__Qref ;
            if ( fabs ( _grid_load_load_phase_b_c_inc__dQ_old ) < _grid_load_load_phase_b_c_inc__Q_tol )         {
                _grid_load_load_phase_b_c_inc__status = 0 ;
                _grid_load_load_phase_b_c_inc__inc_applied = 1 ;
            }
            else         {
                _grid_load_load_phase_b_c_inc__status = 12 ;
                _grid_load_load_phase_b_c_inc__C_changed = _grid_load_load_phase_b_c_inc__C_in * ( 1 + _grid_load_load_phase_b_c_inc__dC_accumulator + _grid_load_load_phase_b_c_inc__dC ) ;
                _grid_load_load_phase_b_c_inc__Qsum = 0 ;
                for ( _grid_load_load_phase_b_c_inc__i = 0 ; _grid_load_load_phase_b_c_inc__i < 1.0 ; _grid_load_load_phase_b_c_inc__i ++ )             {
                    _grid_load_load_phase_b_c_inc__Ih = _grid_load_load_phase_b_c_inc__V [ _grid_load_load_phase_b_c_inc__i ] / sqrt ( ( _grid_load_load_phase_b_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_b_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C_changed ) , - 1 ) ) * ( _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C_changed ) , - 1 ) ) ) ;
                    _grid_load_load_phase_b_c_inc__Qsum -= ( _grid_load_load_phase_b_c_inc__Ih * _grid_load_load_phase_b_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] - pow ( ( _grid_load_load_phase_b_c_inc__harmonics [ _grid_load_load_phase_b_c_inc__i ] * _grid_load_load_phase_b_c_inc__w * _grid_load_load_phase_b_c_inc__C_changed ) , - 1 ) ) ) ;
                }
                _grid_load_load_phase_b_c_inc__Q_calc_new = _grid_load_load_phase_b_c_inc__Qsum ;
                _grid_load_load_phase_b_c_inc__dQ = ( _grid_load_load_phase_b_c_inc__Q_calc_new - _grid_load_load_phase_b_c_inc__Qref ) / _grid_load_load_phase_b_c_inc__Qref ;
                if ( _grid_load_load_phase_b_c_inc__dQ * _grid_load_load_phase_b_c_inc__dQ_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_b_c_inc__dQ ) > fabs ( _grid_load_load_phase_b_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_b_c_inc__dC = - _grid_load_load_phase_b_c_inc__dC ;
                        _grid_load_load_phase_b_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_b_c_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_b_c_inc__dC_accumulator += _grid_load_load_phase_b_c_inc__dC ;
                        _grid_load_load_phase_b_c_inc__C = _grid_load_load_phase_b_c_inc__C_changed ;
                        _grid_load_load_phase_b_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_b_c_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_b_c_inc__dQ ) < fabs ( _grid_load_load_phase_b_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_b_c_inc__dC_accumulator += _grid_load_load_phase_b_c_inc__dC ;
                        _grid_load_load_phase_b_c_inc__C = _grid_load_load_phase_b_c_inc__C_changed ;
                        _grid_load_load_phase_b_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_b_c_inc__dC = - _grid_load_load_phase_b_c_inc__dC / 2 ;
                        _grid_load_load_phase_b_c_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_b_c_inc__dC /= 2 ;
                        _grid_load_load_phase_b_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_b_c_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_b_c_inc__enable && _grid_load_load_phase_b_c_inc__pause )     {
            _grid_load_load_phase_b_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_b_c_inc__C = _grid_load_load_phase_b_c_inc__C_in * ( 1 + _grid_load_load_phase_b_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_b_c_inc__status = - 2 ;
        }
        else if ( ! _grid_load_load_phase_b_c_inc__enable )     {
            _grid_load_load_phase_b_c_inc__C = _grid_load_load_phase_b_c_inc__C_in ;
            _grid_load_load_phase_b_c_inc__dC_accumulator = 0 ;
            _grid_load_load_phase_b_c_inc__dC = (-0.001) ;
            _grid_load_load_phase_b_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_b_c_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.S1.CTC_Wrapper
    if (_grid_load_load_phase_b_logical_operator29__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Grid Load.Load.Phase B.f_to_w1
    _grid_load_load_phase_b_f_to_w1__out = 60000.0 * _grid_load_load_phase_b_signal_switch1__out;
    // Generated from the component: Grid Load.Load.Phase B.f_to_w2
    _grid_load_load_phase_b_f_to_w2__out = 45000.0 * _grid_load_load_phase_b_signal_switch2__out;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Sum10
    _grid_load_load_phase_b_single_phase_pll1_sum10__out = _grid_load_load_phase_b_single_phase_pll1_sum5__out - _grid_load_load_phase_b_single_phase_pll1_integrator6__out;
    // Generated from the component: Grid Load.Load.Phase C.L_ref.reciprocal
    _grid_load_load_phase_c_l_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_c_signal_switch3__out);
    // Generated from the component: Grid Load.Load.Phase C.R_inc
    _grid_load_load_phase_c_r_inc__C_in = _grid_load_load_phase_c_unit_delay12__out;
    _grid_load_load_phase_c_r_inc__Pref = _grid_load_load_phase_c_limit6__out;
    _grid_load_load_phase_c_r_inc__R_in = _grid_load_load_phase_c_low_pass_filter9__out;
    _grid_load_load_phase_c_r_inc__V[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_r_inc__V[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_r_inc__enable = _grid_load_load_phase_c_logical_operator19__out;
    _grid_load_load_phase_c_r_inc__harmonics[0] = _grid_load_load_phase_c_harmonic_vector5__out[0];
    _grid_load_load_phase_c_r_inc__harmonics[1] = _grid_load_load_phase_c_harmonic_vector5__out[1];
    _grid_load_load_phase_c_r_inc__pause = _grid_load_load_phase_c_logical_operator23__out;
    _grid_load_load_phase_c_r_inc__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_c_r_inc__enable && ! _grid_load_load_phase_c_r_inc__pause )     {
            _grid_load_load_phase_c_r_inc__R = _grid_load_load_phase_c_r_inc__R_in * ( 1 + _grid_load_load_phase_c_r_inc__dR_accumulator ) ;
            _grid_load_load_phase_c_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_c_r_inc__i = 0 ; _grid_load_load_phase_c_r_inc__i < 1.0 ; _grid_load_load_phase_c_r_inc__i ++ )         {
                _grid_load_load_phase_c_r_inc__Ih = _grid_load_load_phase_c_r_inc__V [ _grid_load_load_phase_c_r_inc__i ] / sqrt ( ( _grid_load_load_phase_c_r_inc__R + 0.010812663781955268 ) * ( _grid_load_load_phase_c_r_inc__R + 0.010812663781955268 ) + ( _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_c_r_inc__Isum += ( _grid_load_load_phase_c_r_inc__Ih * _grid_load_load_phase_c_r_inc__Ih ) ;
            }
            _grid_load_load_phase_c_r_inc__I_calc = sqrt ( _grid_load_load_phase_c_r_inc__Isum ) ;
            _grid_load_load_phase_c_r_inc__P_calc_old = _grid_load_load_phase_c_r_inc__I_calc * _grid_load_load_phase_c_r_inc__I_calc * ( _grid_load_load_phase_c_r_inc__R + 0.010812663781955268 ) ;
            _grid_load_load_phase_c_r_inc__dP_old = ( _grid_load_load_phase_c_r_inc__P_calc_old - _grid_load_load_phase_c_r_inc__Pref ) / _grid_load_load_phase_c_r_inc__Pref ;
            _grid_load_load_phase_c_r_inc__R_changed = _grid_load_load_phase_c_r_inc__R_in * ( 1 + _grid_load_load_phase_c_r_inc__dR_accumulator + _grid_load_load_phase_c_r_inc__dR ) ;
            _grid_load_load_phase_c_r_inc__Isum = 0 ;
            for ( _grid_load_load_phase_c_r_inc__i = 0 ; _grid_load_load_phase_c_r_inc__i < 1.0 ; _grid_load_load_phase_c_r_inc__i ++ )         {
                _grid_load_load_phase_c_r_inc__Ih = _grid_load_load_phase_c_r_inc__V [ _grid_load_load_phase_c_r_inc__i ] / sqrt ( ( _grid_load_load_phase_c_r_inc__R_changed + 0.010812663781955268 ) * ( _grid_load_load_phase_c_r_inc__R_changed + 0.010812663781955268 ) + ( _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__C_in ) , - 1 ) ) * ( _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_r_inc__harmonics [ _grid_load_load_phase_c_r_inc__i ] * _grid_load_load_phase_c_r_inc__w * _grid_load_load_phase_c_r_inc__C_in ) , - 1 ) ) ) ;
                _grid_load_load_phase_c_r_inc__Isum += ( _grid_load_load_phase_c_r_inc__Ih * _grid_load_load_phase_c_r_inc__Ih ) ;
            }
            _grid_load_load_phase_c_r_inc__I_calc = sqrt ( _grid_load_load_phase_c_r_inc__Isum ) ;
            _grid_load_load_phase_c_r_inc__P_calc_new = _grid_load_load_phase_c_r_inc__I_calc * _grid_load_load_phase_c_r_inc__I_calc * ( _grid_load_load_phase_c_r_inc__R_changed + 0.010812663781955268 ) ;
            _grid_load_load_phase_c_r_inc__dP = ( _grid_load_load_phase_c_r_inc__P_calc_new - _grid_load_load_phase_c_r_inc__Pref ) / _grid_load_load_phase_c_r_inc__Pref ;
            if ( fabs ( _grid_load_load_phase_c_r_inc__dP_old ) < _grid_load_load_phase_c_r_inc__P_tol )         {
                _grid_load_load_phase_c_r_inc__status = 0 ;
                _grid_load_load_phase_c_r_inc__inc_applied = 1 ;
            }
            else         {
                if ( _grid_load_load_phase_c_r_inc__dP * _grid_load_load_phase_c_r_inc__dP_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_c_r_inc__dP ) > fabs ( _grid_load_load_phase_c_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_c_r_inc__dR = - _grid_load_load_phase_c_r_inc__dR ;
                        _grid_load_load_phase_c_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_c_r_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_c_r_inc__dR_accumulator += _grid_load_load_phase_c_r_inc__dR ;
                        _grid_load_load_phase_c_r_inc__R = _grid_load_load_phase_c_r_inc__R_changed ;
                        _grid_load_load_phase_c_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_c_r_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_c_r_inc__dP ) < fabs ( _grid_load_load_phase_c_r_inc__dP_old ) )                 {
                        _grid_load_load_phase_c_r_inc__dR_accumulator += _grid_load_load_phase_c_r_inc__dR ;
                        _grid_load_load_phase_c_r_inc__R = _grid_load_load_phase_c_r_inc__R_changed ;
                        _grid_load_load_phase_c_r_inc__inc_applied = 1 ;
                        _grid_load_load_phase_c_r_inc__dR = - _grid_load_load_phase_c_r_inc__dR / 2 ;
                        _grid_load_load_phase_c_r_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_c_r_inc__dR /= 2 ;
                        _grid_load_load_phase_c_r_inc__inc_applied = 0 ;
                        _grid_load_load_phase_c_r_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_c_r_inc__pause && _grid_load_load_phase_c_r_inc__enable )     {
            _grid_load_load_phase_c_r_inc__status = - 2 ;
            _grid_load_load_phase_c_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_c_r_inc__R = _grid_load_load_phase_c_r_inc__R_in * ( 1 + _grid_load_load_phase_c_r_inc__dR_accumulator ) ;
        }
        else if ( ! _grid_load_load_phase_c_r_inc__enable )     {
            _grid_load_load_phase_c_r_inc__R = _grid_load_load_phase_c_r_inc__R_in ;
            _grid_load_load_phase_c_r_inc__dR_accumulator = 0 ;
            _grid_load_load_phase_c_r_inc__inc_applied = 0 ;
            _grid_load_load_phase_c_r_inc__dR = 0.001 ;
            _grid_load_load_phase_c_r_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.C_inc
    _grid_load_load_phase_c_c_inc__C_in = _grid_load_load_phase_c_low_pass_filter8__out;
    _grid_load_load_phase_c_c_inc__Qref = _grid_load_load_phase_c_limit11__out;
    _grid_load_load_phase_c_c_inc__R_in = _grid_load_load_phase_c_unit_delay13__out;
    _grid_load_load_phase_c_c_inc__V[0] = _grid_load_load_phase_c_grid_synchronization_limit7__out[0];
    _grid_load_load_phase_c_c_inc__V[1] = _grid_load_load_phase_c_grid_synchronization_limit7__out[1];
    _grid_load_load_phase_c_c_inc__enable = _grid_load_load_phase_c_logical_operator20__out;
    _grid_load_load_phase_c_c_inc__harmonics[0] = _grid_load_load_phase_c_harmonic_vector5__out[0];
    _grid_load_load_phase_c_c_inc__harmonics[1] = _grid_load_load_phase_c_harmonic_vector5__out[1];
    _grid_load_load_phase_c_c_inc__pause = _grid_load_load_phase_c_logical_operator22__out;
    _grid_load_load_phase_c_c_inc__w = _grid_load_load_phase_c_grid_synchronization_limit3__out;
    {
        if ( _grid_load_load_phase_c_c_inc__enable && ! _grid_load_load_phase_c_c_inc__pause )     {
            _grid_load_load_phase_c_c_inc__C = _grid_load_load_phase_c_c_inc__C_in * ( 1 + _grid_load_load_phase_c_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_c_c_inc__Qsum = 0 ;
            for ( _grid_load_load_phase_c_c_inc__i = 0 ; _grid_load_load_phase_c_c_inc__i < 1.0 ; _grid_load_load_phase_c_c_inc__i ++ )         {
                _grid_load_load_phase_c_c_inc__Ih = _grid_load_load_phase_c_c_inc__V [ _grid_load_load_phase_c_c_inc__i ] / sqrt ( ( _grid_load_load_phase_c_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_c_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C ) , - 1 ) ) * ( _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C ) , - 1 ) ) ) ;
                _grid_load_load_phase_c_c_inc__Qsum -= ( _grid_load_load_phase_c_c_inc__Ih * _grid_load_load_phase_c_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C ) , - 1 ) ) ) ;
            }
            _grid_load_load_phase_c_c_inc__Q_calc_old = _grid_load_load_phase_c_c_inc__Qsum ;
            _grid_load_load_phase_c_c_inc__dQ_old = ( _grid_load_load_phase_c_c_inc__Q_calc_old - _grid_load_load_phase_c_c_inc__Qref ) / _grid_load_load_phase_c_c_inc__Qref ;
            if ( fabs ( _grid_load_load_phase_c_c_inc__dQ_old ) < _grid_load_load_phase_c_c_inc__Q_tol )         {
                _grid_load_load_phase_c_c_inc__status = 0 ;
                _grid_load_load_phase_c_c_inc__inc_applied = 1 ;
            }
            else         {
                _grid_load_load_phase_c_c_inc__status = 12 ;
                _grid_load_load_phase_c_c_inc__C_changed = _grid_load_load_phase_c_c_inc__C_in * ( 1 + _grid_load_load_phase_c_c_inc__dC_accumulator + _grid_load_load_phase_c_c_inc__dC ) ;
                _grid_load_load_phase_c_c_inc__Qsum = 0 ;
                for ( _grid_load_load_phase_c_c_inc__i = 0 ; _grid_load_load_phase_c_c_inc__i < 1.0 ; _grid_load_load_phase_c_c_inc__i ++ )             {
                    _grid_load_load_phase_c_c_inc__Ih = _grid_load_load_phase_c_c_inc__V [ _grid_load_load_phase_c_c_inc__i ] / sqrt ( ( _grid_load_load_phase_c_c_inc__R_in + 0.010812663781955268 ) * ( _grid_load_load_phase_c_c_inc__R_in + 0.010812663781955268 ) + ( _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C_changed ) , - 1 ) ) * ( _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * 0.00014607358569524597 - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C_changed ) , - 1 ) ) ) ;
                    _grid_load_load_phase_c_c_inc__Qsum -= ( _grid_load_load_phase_c_c_inc__Ih * _grid_load_load_phase_c_c_inc__Ih * ( 0.00014607358569524597 * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] - pow ( ( _grid_load_load_phase_c_c_inc__harmonics [ _grid_load_load_phase_c_c_inc__i ] * _grid_load_load_phase_c_c_inc__w * _grid_load_load_phase_c_c_inc__C_changed ) , - 1 ) ) ) ;
                }
                _grid_load_load_phase_c_c_inc__Q_calc_new = _grid_load_load_phase_c_c_inc__Qsum ;
                _grid_load_load_phase_c_c_inc__dQ = ( _grid_load_load_phase_c_c_inc__Q_calc_new - _grid_load_load_phase_c_c_inc__Qref ) / _grid_load_load_phase_c_c_inc__Qref ;
                if ( _grid_load_load_phase_c_c_inc__dQ * _grid_load_load_phase_c_c_inc__dQ_old > 0 )             {
                    if ( fabs ( _grid_load_load_phase_c_c_inc__dQ ) > fabs ( _grid_load_load_phase_c_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_c_c_inc__dC = - _grid_load_load_phase_c_c_inc__dC ;
                        _grid_load_load_phase_c_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_c_c_inc__status = 1 ;
                    }
                    else                 {
                        _grid_load_load_phase_c_c_inc__dC_accumulator += _grid_load_load_phase_c_c_inc__dC ;
                        _grid_load_load_phase_c_c_inc__C = _grid_load_load_phase_c_c_inc__C_changed ;
                        _grid_load_load_phase_c_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_c_c_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _grid_load_load_phase_c_c_inc__dQ ) < fabs ( _grid_load_load_phase_c_c_inc__dQ_old ) )                 {
                        _grid_load_load_phase_c_c_inc__dC_accumulator += _grid_load_load_phase_c_c_inc__dC ;
                        _grid_load_load_phase_c_c_inc__C = _grid_load_load_phase_c_c_inc__C_changed ;
                        _grid_load_load_phase_c_c_inc__inc_applied = 1 ;
                        _grid_load_load_phase_c_c_inc__dC = - _grid_load_load_phase_c_c_inc__dC / 2 ;
                        _grid_load_load_phase_c_c_inc__status = 3 ;
                    }
                    else                 {
                        _grid_load_load_phase_c_c_inc__dC /= 2 ;
                        _grid_load_load_phase_c_c_inc__inc_applied = 0 ;
                        _grid_load_load_phase_c_c_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _grid_load_load_phase_c_c_inc__enable && _grid_load_load_phase_c_c_inc__pause )     {
            _grid_load_load_phase_c_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_c_c_inc__C = _grid_load_load_phase_c_c_inc__C_in * ( 1 + _grid_load_load_phase_c_c_inc__dC_accumulator ) ;
            _grid_load_load_phase_c_c_inc__status = - 2 ;
        }
        else if ( ! _grid_load_load_phase_c_c_inc__enable )     {
            _grid_load_load_phase_c_c_inc__C = _grid_load_load_phase_c_c_inc__C_in ;
            _grid_load_load_phase_c_c_inc__dC_accumulator = 0 ;
            _grid_load_load_phase_c_c_inc__dC = (-0.001) ;
            _grid_load_load_phase_c_c_inc__inc_applied = 0 ;
            _grid_load_load_phase_c_c_inc__status = - 10 ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.S1.CTC_Wrapper
    if (_grid_load_load_phase_c_logical_operator29__out == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: Grid Load.Load.Phase C.f_to_w1
    _grid_load_load_phase_c_f_to_w1__out = 60000.0 * _grid_load_load_phase_c_signal_switch1__out;
    // Generated from the component: Grid Load.Load.Phase C.f_to_w2
    _grid_load_load_phase_c_f_to_w2__out = 45000.0 * _grid_load_load_phase_c_signal_switch2__out;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Sum10
    _grid_load_load_phase_c_single_phase_pll1_sum10__out = _grid_load_load_phase_c_single_phase_pll1_sum5__out - _grid_load_load_phase_c_single_phase_pll1_integrator6__out;
    // Generated from the component: Grid Load.Load.Phase A.L_ref.Is
    HIL_OutFloat(137363462, (float) _grid_load_load_phase_a_l_ref_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase A.Limit1
    _grid_load_load_phase_a_limit1__out = MIN(MAX(_grid_load_load_phase_a_r_inc__R, 0.0001), 143.40740740740733);
    // Generated from the component: Grid Load.Load.Phase A.Limit8
    _grid_load_load_phase_a_limit8__out = MIN(MAX(_grid_load_load_phase_a_c_inc__C, 9.248414823263547e-06), 0.04587507352809298);
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Gain6
    _grid_load_load_phase_a_single_phase_pll1_gain6__out = 628.3185307179587 * _grid_load_load_phase_a_single_phase_pll1_sum10__out;
    // Generated from the component: Grid Load.Load.Phase B.L_ref.Is
    HIL_OutFloat(137363463, (float) _grid_load_load_phase_b_l_ref_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase B.Limit1
    _grid_load_load_phase_b_limit1__out = MIN(MAX(_grid_load_load_phase_b_r_inc__R, 0.0001), 143.40740740740733);
    // Generated from the component: Grid Load.Load.Phase B.Limit8
    _grid_load_load_phase_b_limit8__out = MIN(MAX(_grid_load_load_phase_b_c_inc__C, 9.248414823263547e-06), 0.04587507352809298);
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Gain6
    _grid_load_load_phase_b_single_phase_pll1_gain6__out = 628.3185307179587 * _grid_load_load_phase_b_single_phase_pll1_sum10__out;
    // Generated from the component: Grid Load.Load.Phase C.L_ref.Is
    HIL_OutFloat(137363464, (float) _grid_load_load_phase_c_l_ref_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase C.Limit1
    _grid_load_load_phase_c_limit1__out = MIN(MAX(_grid_load_load_phase_c_r_inc__R, 0.0001), 143.40740740740733);
    // Generated from the component: Grid Load.Load.Phase C.Limit8
    _grid_load_load_phase_c_limit8__out = MIN(MAX(_grid_load_load_phase_c_c_inc__C, 9.248414823263547e-06), 0.04587507352809298);
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Gain6
    _grid_load_load_phase_c_single_phase_pll1_gain6__out = 628.3185307179587 * _grid_load_load_phase_c_single_phase_pll1_sum10__out;
    // Generated from the component: Grid Load.Load.Phase A.Signal switch10
    _grid_load_load_phase_a_signal_switch10__out = (_grid_load_load_phase_a_logical_operator14__out > 0.5f) ? _grid_load_load_phase_a_limit1__out : _grid_load_load_phase_a_constant11__out;
    // Generated from the component: Grid Load.Load.Phase A.Signal switch11
    _grid_load_load_phase_a_signal_switch11__out = (_grid_load_load_phase_a_logical_operator27__out > 0.5f) ? _grid_load_load_phase_a_limit8__out : _grid_load_load_phase_a_constant12__out;
    // Generated from the component: Grid Load.Load.Phase B.Signal switch10
    _grid_load_load_phase_b_signal_switch10__out = (_grid_load_load_phase_b_logical_operator14__out > 0.5f) ? _grid_load_load_phase_b_limit1__out : _grid_load_load_phase_b_constant11__out;
    // Generated from the component: Grid Load.Load.Phase B.Signal switch11
    _grid_load_load_phase_b_signal_switch11__out = (_grid_load_load_phase_b_logical_operator27__out > 0.5f) ? _grid_load_load_phase_b_limit8__out : _grid_load_load_phase_b_constant12__out;
    // Generated from the component: Grid Load.Load.Phase C.Signal switch10
    _grid_load_load_phase_c_signal_switch10__out = (_grid_load_load_phase_c_logical_operator14__out > 0.5f) ? _grid_load_load_phase_c_limit1__out : _grid_load_load_phase_c_constant11__out;
    // Generated from the component: Grid Load.Load.Phase C.Signal switch11
    _grid_load_load_phase_c_signal_switch11__out = (_grid_load_load_phase_c_logical_operator27__out > 0.5f) ? _grid_load_load_phase_c_limit8__out : _grid_load_load_phase_c_constant12__out;
    // Generated from the component: Grid Load.Load.Phase A.R_ref.Vs
    HIL_OutFloat(137363457, (float) _grid_load_load_phase_a_signal_switch10__out);
    // Generated from the component: Grid Load.Load.Phase A.C_ref.reciprocal
    _grid_load_load_phase_a_c_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_a_signal_switch11__out);
    // Generated from the component: Grid Load.Load.Phase B.R_ref.Vs
    HIL_OutFloat(137363459, (float) _grid_load_load_phase_b_signal_switch10__out);
    // Generated from the component: Grid Load.Load.Phase B.C_ref.reciprocal
    _grid_load_load_phase_b_c_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_b_signal_switch11__out);
    // Generated from the component: Grid Load.Load.Phase C.R_ref.Vs
    HIL_OutFloat(137363461, (float) _grid_load_load_phase_c_signal_switch10__out);
    // Generated from the component: Grid Load.Load.Phase C.C_ref.reciprocal
    _grid_load_load_phase_c_c_ref_reciprocal__out = 1.0 / (_grid_load_load_phase_c_signal_switch11__out);
    // Generated from the component: Grid Load.Load.Phase A.C_ref.Vs
    HIL_OutFloat(137363456, (float) _grid_load_load_phase_a_c_ref_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase B.C_ref.Vs
    HIL_OutFloat(137363458, (float) _grid_load_load_phase_b_c_ref_reciprocal__out);
    // Generated from the component: Grid Load.Load.Phase C.C_ref.Vs
    HIL_OutFloat(137363460, (float) _grid_load_load_phase_c_c_ref_reciprocal__out);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Delay1
    _grid_load_load_phase_a_grid_synchronization_delay1__state[_grid_load_load_phase_a_grid_synchronization_delay1__cbi] = _grid_load_load_phase_a_grid_synchronization_steady_state_check__out;
    if (_grid_load_load_phase_a_grid_synchronization_delay1__cbi < 0)
        _grid_load_load_phase_a_grid_synchronization_delay1__cbi++;
    else
        _grid_load_load_phase_a_grid_synchronization_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_a_grid_synchronization_low_pass_filter3__previous_in = _grid_load_load_phase_a_grid_synchronization_peak_calc_mathematical_function1__out;
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter2
    _grid_load_load_phase_a_low_pass_filter2__previous_in = _grid_load_load_phase_a_lref_calc__L;
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter8
    _grid_load_load_phase_a_low_pass_filter8__previous_in = _grid_load_load_phase_a_c_function2__c;
    // Generated from the component: Grid Load.Load.Phase A.Low-Pass Filter9
    _grid_load_load_phase_a_low_pass_filter9__previous_in = _grid_load_load_phase_a_c_function2__R;
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change.Ramping1.Ramping
    _grid_load_load_phase_a_rate_of_change_ramping1_ramping__fsm_state = _grid_load_load_phase_a_rate_of_change_constant14__out;
    _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pin = _grid_load_load_phase_a_rate_of_change_constant15__out;
    _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in = _grid_load_load_phase_a_f_to_w1__out;
    _grid_load_load_phase_a_rate_of_change_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_a_rate_of_change_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in != _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref - _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a = - _grid_load_load_phase_a_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in == _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pin && _grid_load_load_phase_a_rate_of_change_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_a_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_a_rate_of_change_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Rate_of_change1.Ramping1.Ramping
    _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__fsm_state = _grid_load_load_phase_a_rate_of_change1_constant14__out;
    _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pin = _grid_load_load_phase_a_rate_of_change1_constant15__out;
    _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in = _grid_load_load_phase_a_f_to_w2__out;
    _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_a_rate_of_change1_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in != _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref - _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a = - _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in == _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pin && _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.SR Flip Flop1
    if ((_grid_load_load_phase_a_logical_operator5__out != 0x0) && (_grid_load_load_phase_a_logical_operator7__out == 0x0))
        _grid_load_load_phase_a_sr_flip_flop1__state = 1;
    else if ((_grid_load_load_phase_a_logical_operator5__out == 0x0) && (_grid_load_load_phase_a_logical_operator7__out != 0x0))
        _grid_load_load_phase_a_sr_flip_flop1__state = 0;
    else if ((_grid_load_load_phase_a_logical_operator5__out != 0x0) && (_grid_load_load_phase_a_logical_operator7__out != 0x0))
        _grid_load_load_phase_a_sr_flip_flop1__state = -1;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.I
    if (!_grid_load_load_phase_a_single_phase_pll1_i__av_active || ((_grid_load_load_phase_a_single_phase_pll1_i__av_active < 0 && _grid_load_load_phase_a_single_phase_pll1_product5__out > 0 ) || (_grid_load_load_phase_a_single_phase_pll1_i__av_active > 0 && _grid_load_load_phase_a_single_phase_pll1_product5__out < 0 ))) {
        _grid_load_load_phase_a_single_phase_pll1_i__integrator_state += 1.0 * _grid_load_load_phase_a_single_phase_pll1_product5__out * 5e-05;
    }
    else {
        _grid_load_load_phase_a_single_phase_pll1_i__integrator_state = _grid_load_load_phase_a_single_phase_pll1_i__out;
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator1
    _grid_load_load_phase_a_single_phase_pll1_integrator1__state += _grid_load_load_phase_a_single_phase_pll1_product1__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator10
    _grid_load_load_phase_a_single_phase_pll1_integrator10__state += _grid_load_load_phase_a_single_phase_pll1_gain11__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator2
    _grid_load_load_phase_a_single_phase_pll1_integrator2__state += _grid_load_load_phase_a_single_phase_pll1_product2__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator3
    _grid_load_load_phase_a_single_phase_pll1_integrator3__state += _grid_load_load_phase_a_single_phase_pll1_gain4__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator4
    _grid_load_load_phase_a_single_phase_pll1_integrator4__state += _grid_load_load_phase_a_single_phase_pll1_gain5__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator5
    _grid_load_load_phase_a_single_phase_pll1_integrator5__state += _grid_load_load_phase_a_single_phase_pll1_gain7__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator6
    _grid_load_load_phase_a_single_phase_pll1_integrator6__state += _grid_load_load_phase_a_single_phase_pll1_gain6__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator7
    _grid_load_load_phase_a_single_phase_pll1_integrator7__state += _grid_load_load_phase_a_single_phase_pll1_gain9__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator8
    _grid_load_load_phase_a_single_phase_pll1_integrator8__state += _grid_load_load_phase_a_single_phase_pll1_gain8__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Integrator9
    _grid_load_load_phase_a_single_phase_pll1_integrator9__state += _grid_load_load_phase_a_single_phase_pll1_gain10__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.integrator_with_reset
    _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__in = _grid_load_load_phase_a_single_phase_pll1_sum5__out;
    {
        _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc += _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__in * 5e-05 ;
        if ( _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc > _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__reset_value ) _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__out_calc -= _grid_load_load_phase_a_single_phase_pll1_integrator_with_reset__reset_value ;
    }
    // Generated from the component: Grid Load.Load.Phase A.Transport Delay1
    _grid_load_load_phase_a_transport_delay1__state[_grid_load_load_phase_a_transport_delay1__cbi] = _grid_load_load_phase_a_f_to_w6__out;
    if (_grid_load_load_phase_a_transport_delay1__cbi < 0)
        _grid_load_load_phase_a_transport_delay1__cbi++;
    else
        _grid_load_load_phase_a_transport_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase A.Transport Delay2
    _grid_load_load_phase_a_transport_delay2__state[_grid_load_load_phase_a_transport_delay2__cbi] = _grid_load_load_phase_a_f_to_w7__out;
    if (_grid_load_load_phase_a_transport_delay2__cbi < 0)
        _grid_load_load_phase_a_transport_delay2__cbi++;
    else
        _grid_load_load_phase_a_transport_delay2__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay1
    _grid_load_load_phase_a_unit_delay1__state = _grid_load_load_phase_a_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay12
    _grid_load_load_phase_a_unit_delay12__state = _grid_load_load_phase_a_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay13
    _grid_load_load_phase_a_unit_delay13__state = _grid_load_load_phase_a_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay2
    _grid_load_load_phase_a_unit_delay2__state = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay3
    _grid_load_load_phase_a_unit_delay3__state = _grid_load_load_phase_a_limit6__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay4
    _grid_load_load_phase_a_unit_delay4__state = _grid_load_load_phase_a_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay5
    _grid_load_load_phase_a_unit_delay5__state = _grid_load_load_phase_a_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay6
    _grid_load_load_phase_a_unit_delay6__state = _grid_load_load_phase_a_signal_switch3__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay7
    _grid_load_load_phase_a_unit_delay7__state = _grid_load_load_phase_a_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase A.Unit Delay8
    _grid_load_load_phase_a_unit_delay8__state = _grid_load_load_phase_a_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase A.zig_zag_handler
    _grid_load_load_phase_a_zig_zag_handler__C_inc_applied = _grid_load_load_phase_a_c_inc__inc_applied;
    _grid_load_load_phase_a_zig_zag_handler__R_inc_applied = _grid_load_load_phase_a_r_inc__inc_applied;
    _grid_load_load_phase_a_zig_zag_handler__enable = _grid_load_load_phase_a_logical_operator19__out;
    {
        switch ( _grid_load_load_phase_a_zig_zag_handler__state )     {
        case 0 :
            if ( _grid_load_load_phase_a_zig_zag_handler__enable ) _grid_load_load_phase_a_zig_zag_handler__state = 1 ;
            break;
        case 1 :
            if ( ! _grid_load_load_phase_a_zig_zag_handler__enable ) _grid_load_load_phase_a_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_a_zig_zag_handler__state = 2 ;
            break;
        case 2 :
            if ( ! _grid_load_load_phase_a_zig_zag_handler__enable ) _grid_load_load_phase_a_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_a_zig_zag_handler__R_inc_applied ) _grid_load_load_phase_a_zig_zag_handler__state = 3 ;
            break;
        case 3 :
            if ( ! _grid_load_load_phase_a_zig_zag_handler__enable ) _grid_load_load_phase_a_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_a_zig_zag_handler__state = 4 ;
            break;
        case 4 :
            if ( ! _grid_load_load_phase_a_zig_zag_handler__enable ) _grid_load_load_phase_a_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_a_zig_zag_handler__C_inc_applied ) _grid_load_load_phase_a_zig_zag_handler__state = 1 ;
            break;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Delay1
    _grid_load_load_phase_b_grid_synchronization_delay1__state[_grid_load_load_phase_b_grid_synchronization_delay1__cbi] = _grid_load_load_phase_b_grid_synchronization_steady_state_check__out;
    if (_grid_load_load_phase_b_grid_synchronization_delay1__cbi < 0)
        _grid_load_load_phase_b_grid_synchronization_delay1__cbi++;
    else
        _grid_load_load_phase_b_grid_synchronization_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_b_grid_synchronization_low_pass_filter3__previous_in = _grid_load_load_phase_b_grid_synchronization_peak_calc_mathematical_function1__out;
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter2
    _grid_load_load_phase_b_low_pass_filter2__previous_in = _grid_load_load_phase_b_lref_calc__L;
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter8
    _grid_load_load_phase_b_low_pass_filter8__previous_in = _grid_load_load_phase_b_c_function2__c;
    // Generated from the component: Grid Load.Load.Phase B.Low-Pass Filter9
    _grid_load_load_phase_b_low_pass_filter9__previous_in = _grid_load_load_phase_b_c_function2__R;
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change.Ramping1.Ramping
    _grid_load_load_phase_b_rate_of_change_ramping1_ramping__fsm_state = _grid_load_load_phase_b_rate_of_change_constant14__out;
    _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pin = _grid_load_load_phase_b_rate_of_change_constant15__out;
    _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in = _grid_load_load_phase_b_f_to_w1__out;
    _grid_load_load_phase_b_rate_of_change_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_b_rate_of_change_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in != _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref - _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a = - _grid_load_load_phase_b_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in == _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pin && _grid_load_load_phase_b_rate_of_change_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_b_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_b_rate_of_change_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Rate_of_change1.Ramping1.Ramping
    _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__fsm_state = _grid_load_load_phase_b_rate_of_change1_constant14__out;
    _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pin = _grid_load_load_phase_b_rate_of_change1_constant15__out;
    _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in = _grid_load_load_phase_b_f_to_w2__out;
    _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_b_rate_of_change1_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in != _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref - _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a = - _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in == _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pin && _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.SR Flip Flop1
    if ((_grid_load_load_phase_b_logical_operator5__out != 0x0) && (_grid_load_load_phase_b_logical_operator7__out == 0x0))
        _grid_load_load_phase_b_sr_flip_flop1__state = 1;
    else if ((_grid_load_load_phase_b_logical_operator5__out == 0x0) && (_grid_load_load_phase_b_logical_operator7__out != 0x0))
        _grid_load_load_phase_b_sr_flip_flop1__state = 0;
    else if ((_grid_load_load_phase_b_logical_operator5__out != 0x0) && (_grid_load_load_phase_b_logical_operator7__out != 0x0))
        _grid_load_load_phase_b_sr_flip_flop1__state = -1;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.I
    if (!_grid_load_load_phase_b_single_phase_pll1_i__av_active || ((_grid_load_load_phase_b_single_phase_pll1_i__av_active < 0 && _grid_load_load_phase_b_single_phase_pll1_product5__out > 0 ) || (_grid_load_load_phase_b_single_phase_pll1_i__av_active > 0 && _grid_load_load_phase_b_single_phase_pll1_product5__out < 0 ))) {
        _grid_load_load_phase_b_single_phase_pll1_i__integrator_state += 1.0 * _grid_load_load_phase_b_single_phase_pll1_product5__out * 5e-05;
    }
    else {
        _grid_load_load_phase_b_single_phase_pll1_i__integrator_state = _grid_load_load_phase_b_single_phase_pll1_i__out;
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator1
    _grid_load_load_phase_b_single_phase_pll1_integrator1__state += _grid_load_load_phase_b_single_phase_pll1_product1__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator10
    _grid_load_load_phase_b_single_phase_pll1_integrator10__state += _grid_load_load_phase_b_single_phase_pll1_gain11__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator2
    _grid_load_load_phase_b_single_phase_pll1_integrator2__state += _grid_load_load_phase_b_single_phase_pll1_product2__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator3
    _grid_load_load_phase_b_single_phase_pll1_integrator3__state += _grid_load_load_phase_b_single_phase_pll1_gain4__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator4
    _grid_load_load_phase_b_single_phase_pll1_integrator4__state += _grid_load_load_phase_b_single_phase_pll1_gain5__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator5
    _grid_load_load_phase_b_single_phase_pll1_integrator5__state += _grid_load_load_phase_b_single_phase_pll1_gain7__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator6
    _grid_load_load_phase_b_single_phase_pll1_integrator6__state += _grid_load_load_phase_b_single_phase_pll1_gain6__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator7
    _grid_load_load_phase_b_single_phase_pll1_integrator7__state += _grid_load_load_phase_b_single_phase_pll1_gain9__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator8
    _grid_load_load_phase_b_single_phase_pll1_integrator8__state += _grid_load_load_phase_b_single_phase_pll1_gain8__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Integrator9
    _grid_load_load_phase_b_single_phase_pll1_integrator9__state += _grid_load_load_phase_b_single_phase_pll1_gain10__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.integrator_with_reset
    _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__in = _grid_load_load_phase_b_single_phase_pll1_sum5__out;
    {
        _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc += _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__in * 5e-05 ;
        if ( _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc > _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__reset_value ) _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__out_calc -= _grid_load_load_phase_b_single_phase_pll1_integrator_with_reset__reset_value ;
    }
    // Generated from the component: Grid Load.Load.Phase B.Transport Delay1
    _grid_load_load_phase_b_transport_delay1__state[_grid_load_load_phase_b_transport_delay1__cbi] = _grid_load_load_phase_b_f_to_w6__out;
    if (_grid_load_load_phase_b_transport_delay1__cbi < 0)
        _grid_load_load_phase_b_transport_delay1__cbi++;
    else
        _grid_load_load_phase_b_transport_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase B.Transport Delay2
    _grid_load_load_phase_b_transport_delay2__state[_grid_load_load_phase_b_transport_delay2__cbi] = _grid_load_load_phase_b_f_to_w7__out;
    if (_grid_load_load_phase_b_transport_delay2__cbi < 0)
        _grid_load_load_phase_b_transport_delay2__cbi++;
    else
        _grid_load_load_phase_b_transport_delay2__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay1
    _grid_load_load_phase_b_unit_delay1__state = _grid_load_load_phase_b_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay12
    _grid_load_load_phase_b_unit_delay12__state = _grid_load_load_phase_b_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay13
    _grid_load_load_phase_b_unit_delay13__state = _grid_load_load_phase_b_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay2
    _grid_load_load_phase_b_unit_delay2__state = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay3
    _grid_load_load_phase_b_unit_delay3__state = _grid_load_load_phase_b_limit6__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay4
    _grid_load_load_phase_b_unit_delay4__state = _grid_load_load_phase_b_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay5
    _grid_load_load_phase_b_unit_delay5__state = _grid_load_load_phase_b_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay6
    _grid_load_load_phase_b_unit_delay6__state = _grid_load_load_phase_b_signal_switch3__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay7
    _grid_load_load_phase_b_unit_delay7__state = _grid_load_load_phase_b_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase B.Unit Delay8
    _grid_load_load_phase_b_unit_delay8__state = _grid_load_load_phase_b_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase B.zig_zag_handler
    _grid_load_load_phase_b_zig_zag_handler__C_inc_applied = _grid_load_load_phase_b_c_inc__inc_applied;
    _grid_load_load_phase_b_zig_zag_handler__R_inc_applied = _grid_load_load_phase_b_r_inc__inc_applied;
    _grid_load_load_phase_b_zig_zag_handler__enable = _grid_load_load_phase_b_logical_operator19__out;
    {
        switch ( _grid_load_load_phase_b_zig_zag_handler__state )     {
        case 0 :
            if ( _grid_load_load_phase_b_zig_zag_handler__enable ) _grid_load_load_phase_b_zig_zag_handler__state = 1 ;
            break;
        case 1 :
            if ( ! _grid_load_load_phase_b_zig_zag_handler__enable ) _grid_load_load_phase_b_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_b_zig_zag_handler__state = 2 ;
            break;
        case 2 :
            if ( ! _grid_load_load_phase_b_zig_zag_handler__enable ) _grid_load_load_phase_b_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_b_zig_zag_handler__R_inc_applied ) _grid_load_load_phase_b_zig_zag_handler__state = 3 ;
            break;
        case 3 :
            if ( ! _grid_load_load_phase_b_zig_zag_handler__enable ) _grid_load_load_phase_b_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_b_zig_zag_handler__state = 4 ;
            break;
        case 4 :
            if ( ! _grid_load_load_phase_b_zig_zag_handler__enable ) _grid_load_load_phase_b_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_b_zig_zag_handler__C_inc_applied ) _grid_load_load_phase_b_zig_zag_handler__state = 1 ;
            break;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Delay1
    _grid_load_load_phase_c_grid_synchronization_delay1__state[_grid_load_load_phase_c_grid_synchronization_delay1__cbi] = _grid_load_load_phase_c_grid_synchronization_steady_state_check__out;
    if (_grid_load_load_phase_c_grid_synchronization_delay1__cbi < 0)
        _grid_load_load_phase_c_grid_synchronization_delay1__cbi++;
    else
        _grid_load_load_phase_c_grid_synchronization_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Low-Pass Filter3
    _grid_load_load_phase_c_grid_synchronization_low_pass_filter3__previous_in = _grid_load_load_phase_c_grid_synchronization_peak_calc_mathematical_function1__out;
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter2
    _grid_load_load_phase_c_low_pass_filter2__previous_in = _grid_load_load_phase_c_lref_calc__L;
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter8
    _grid_load_load_phase_c_low_pass_filter8__previous_in = _grid_load_load_phase_c_c_function2__c;
    // Generated from the component: Grid Load.Load.Phase C.Low-Pass Filter9
    _grid_load_load_phase_c_low_pass_filter9__previous_in = _grid_load_load_phase_c_c_function2__R;
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change.Ramping1.Ramping
    _grid_load_load_phase_c_rate_of_change_ramping1_ramping__fsm_state = _grid_load_load_phase_c_rate_of_change_constant14__out;
    _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pin = _grid_load_load_phase_c_rate_of_change_constant15__out;
    _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in = _grid_load_load_phase_c_f_to_w1__out;
    _grid_load_load_phase_c_rate_of_change_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_c_rate_of_change_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in != _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref - _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a = - _grid_load_load_phase_c_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in == _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pin && _grid_load_load_phase_c_rate_of_change_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pref_in ;
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_c_rate_of_change_ramping1_ramping__b = _grid_load_load_phase_c_rate_of_change_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Rate_of_change1.Ramping1.Ramping
    _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__fsm_state = _grid_load_load_phase_c_rate_of_change1_constant14__out;
    _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pin = _grid_load_load_phase_c_rate_of_change1_constant15__out;
    _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in = _grid_load_load_phase_c_f_to_w2__out;
    _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__ramp_time_ms = _grid_load_load_phase_c_rate_of_change1_ramping1_gain1__out;
    {
        if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__fsm_state == 1.0 )     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pin ;
        }
        if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in != _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old )     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i = 0 ;
            if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref - _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old >= 0 )         {
                _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a = - _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_old ;
        }
        else if ( _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in == _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pin && _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__fsm_state != 1.0 )     {
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_in ;
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__i = 0 ;
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__a = 0 ;
            _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__b = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.SR Flip Flop1
    if ((_grid_load_load_phase_c_logical_operator5__out != 0x0) && (_grid_load_load_phase_c_logical_operator7__out == 0x0))
        _grid_load_load_phase_c_sr_flip_flop1__state = 1;
    else if ((_grid_load_load_phase_c_logical_operator5__out == 0x0) && (_grid_load_load_phase_c_logical_operator7__out != 0x0))
        _grid_load_load_phase_c_sr_flip_flop1__state = 0;
    else if ((_grid_load_load_phase_c_logical_operator5__out != 0x0) && (_grid_load_load_phase_c_logical_operator7__out != 0x0))
        _grid_load_load_phase_c_sr_flip_flop1__state = -1;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.I
    if (!_grid_load_load_phase_c_single_phase_pll1_i__av_active || ((_grid_load_load_phase_c_single_phase_pll1_i__av_active < 0 && _grid_load_load_phase_c_single_phase_pll1_product5__out > 0 ) || (_grid_load_load_phase_c_single_phase_pll1_i__av_active > 0 && _grid_load_load_phase_c_single_phase_pll1_product5__out < 0 ))) {
        _grid_load_load_phase_c_single_phase_pll1_i__integrator_state += 1.0 * _grid_load_load_phase_c_single_phase_pll1_product5__out * 5e-05;
    }
    else {
        _grid_load_load_phase_c_single_phase_pll1_i__integrator_state = _grid_load_load_phase_c_single_phase_pll1_i__out;
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator1
    _grid_load_load_phase_c_single_phase_pll1_integrator1__state += _grid_load_load_phase_c_single_phase_pll1_product1__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator10
    _grid_load_load_phase_c_single_phase_pll1_integrator10__state += _grid_load_load_phase_c_single_phase_pll1_gain11__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator2
    _grid_load_load_phase_c_single_phase_pll1_integrator2__state += _grid_load_load_phase_c_single_phase_pll1_product2__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator3
    _grid_load_load_phase_c_single_phase_pll1_integrator3__state += _grid_load_load_phase_c_single_phase_pll1_gain4__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator4
    _grid_load_load_phase_c_single_phase_pll1_integrator4__state += _grid_load_load_phase_c_single_phase_pll1_gain5__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator5
    _grid_load_load_phase_c_single_phase_pll1_integrator5__state += _grid_load_load_phase_c_single_phase_pll1_gain7__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator6
    _grid_load_load_phase_c_single_phase_pll1_integrator6__state += _grid_load_load_phase_c_single_phase_pll1_gain6__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator7
    _grid_load_load_phase_c_single_phase_pll1_integrator7__state += _grid_load_load_phase_c_single_phase_pll1_gain9__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator8
    _grid_load_load_phase_c_single_phase_pll1_integrator8__state += _grid_load_load_phase_c_single_phase_pll1_gain8__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Integrator9
    _grid_load_load_phase_c_single_phase_pll1_integrator9__state += _grid_load_load_phase_c_single_phase_pll1_gain10__out * 5e-05;
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.integrator_with_reset
    _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__in = _grid_load_load_phase_c_single_phase_pll1_sum5__out;
    {
        _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc += _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__in * 5e-05 ;
        if ( _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc > _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__reset_value ) _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__out_calc -= _grid_load_load_phase_c_single_phase_pll1_integrator_with_reset__reset_value ;
    }
    // Generated from the component: Grid Load.Load.Phase C.Transport Delay1
    _grid_load_load_phase_c_transport_delay1__state[_grid_load_load_phase_c_transport_delay1__cbi] = _grid_load_load_phase_c_f_to_w6__out;
    if (_grid_load_load_phase_c_transport_delay1__cbi < 0)
        _grid_load_load_phase_c_transport_delay1__cbi++;
    else
        _grid_load_load_phase_c_transport_delay1__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase C.Transport Delay2
    _grid_load_load_phase_c_transport_delay2__state[_grid_load_load_phase_c_transport_delay2__cbi] = _grid_load_load_phase_c_f_to_w7__out;
    if (_grid_load_load_phase_c_transport_delay2__cbi < 0)
        _grid_load_load_phase_c_transport_delay2__cbi++;
    else
        _grid_load_load_phase_c_transport_delay2__cbi = 0;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay1
    _grid_load_load_phase_c_unit_delay1__state = _grid_load_load_phase_c_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay12
    _grid_load_load_phase_c_unit_delay12__state = _grid_load_load_phase_c_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay13
    _grid_load_load_phase_c_unit_delay13__state = _grid_load_load_phase_c_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay2
    _grid_load_load_phase_c_unit_delay2__state = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay3
    _grid_load_load_phase_c_unit_delay3__state = _grid_load_load_phase_c_limit6__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay4
    _grid_load_load_phase_c_unit_delay4__state = _grid_load_load_phase_c_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay5
    _grid_load_load_phase_c_unit_delay5__state = _grid_load_load_phase_c_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay6
    _grid_load_load_phase_c_unit_delay6__state = _grid_load_load_phase_c_signal_switch3__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay7
    _grid_load_load_phase_c_unit_delay7__state = _grid_load_load_phase_c_signal_switch11__out;
    // Generated from the component: Grid Load.Load.Phase C.Unit Delay8
    _grid_load_load_phase_c_unit_delay8__state = _grid_load_load_phase_c_signal_switch10__out;
    // Generated from the component: Grid Load.Load.Phase C.zig_zag_handler
    _grid_load_load_phase_c_zig_zag_handler__C_inc_applied = _grid_load_load_phase_c_c_inc__inc_applied;
    _grid_load_load_phase_c_zig_zag_handler__R_inc_applied = _grid_load_load_phase_c_r_inc__inc_applied;
    _grid_load_load_phase_c_zig_zag_handler__enable = _grid_load_load_phase_c_logical_operator19__out;
    {
        switch ( _grid_load_load_phase_c_zig_zag_handler__state )     {
        case 0 :
            if ( _grid_load_load_phase_c_zig_zag_handler__enable ) _grid_load_load_phase_c_zig_zag_handler__state = 1 ;
            break;
        case 1 :
            if ( ! _grid_load_load_phase_c_zig_zag_handler__enable ) _grid_load_load_phase_c_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_c_zig_zag_handler__state = 2 ;
            break;
        case 2 :
            if ( ! _grid_load_load_phase_c_zig_zag_handler__enable ) _grid_load_load_phase_c_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_c_zig_zag_handler__R_inc_applied ) _grid_load_load_phase_c_zig_zag_handler__state = 3 ;
            break;
        case 3 :
            if ( ! _grid_load_load_phase_c_zig_zag_handler__enable ) _grid_load_load_phase_c_zig_zag_handler__state = 0 ;
            else _grid_load_load_phase_c_zig_zag_handler__state = 4 ;
            break;
        case 4 :
            if ( ! _grid_load_load_phase_c_zig_zag_handler__enable ) _grid_load_load_phase_c_zig_zag_handler__state = 0 ;
            else if ( _grid_load_load_phase_c_zig_zag_handler__C_inc_applied ) _grid_load_load_phase_c_zig_zag_handler__state = 1 ;
            break;
        }
    }
    // Generated from the component: sine_a
    _sine_a__current_phase += 60.0 * 5e-05;
    if (_sine_a__current_phase >= 1.0f) {
        _sine_a__current_phase -= 1.0f;
    }
    // Generated from the component: sine_b
    _sine_b__current_phase += 60.0 * 5e-05;
    if (_sine_b__current_phase >= 1.0f) {
        _sine_b__current_phase -= 1.0f;
    }
    // Generated from the component: sine_c
    _sine_c__current_phase += 60.0 * 5e-05;
    if (_sine_c__current_phase >= 1.0f) {
        _sine_c__current_phase -= 1.0f;
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Steady state check
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer2.FFT
    {
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__f1 * 5e-05 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__N = 1 / 5e-05 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__f1 ;
        if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp = fmod ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__reset = 1 ;
            ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer2_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.C function1
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Harmonic Analyzer1.FFT
    {
        _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__f1 * 5e-05 ;
        _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__N = 1 / 5e-05 / _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__f1 ;
        if ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp = fmod ( _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__reset = 1 ;
            ++ _grid_load_load_phase_a_grid_synchronization_harmonic_analyzer1_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.RMS value1
    if (_grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_a_grid_synchronization_rms_value1__period_cnt += 2 * M_PI * 5e-05 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_a_grid_synchronization_rms_value1__square_sum += _grid_load_load_phase_a_v__out * _grid_load_load_phase_a_v__out * 2 * M_PI * 5e-05 * _grid_load_load_phase_a_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Harmonic Analyzer3.FFT
    {
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__f1 * 5e-05 ;
        _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__N = 1 / 5e-05 / _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__f1 ;
        if ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp = fmod ( _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__reset = 1 ;
            ++ _grid_load_load_phase_a_power_measurement_harmonic_analyzer3_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Steady state check
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer2.FFT
    {
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__f1 * 5e-05 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__N = 1 / 5e-05 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__f1 ;
        if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp = fmod ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__reset = 1 ;
            ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer2_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.C function1
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Harmonic Analyzer1.FFT
    {
        _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__f1 * 5e-05 ;
        _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__N = 1 / 5e-05 / _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__f1 ;
        if ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp = fmod ( _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__reset = 1 ;
            ++ _grid_load_load_phase_b_grid_synchronization_harmonic_analyzer1_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.RMS value1
    if (_grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_b_grid_synchronization_rms_value1__period_cnt += 2 * M_PI * 5e-05 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_b_grid_synchronization_rms_value1__square_sum += _grid_load_load_phase_b_v__out * _grid_load_load_phase_b_v__out * 2 * M_PI * 5e-05 * _grid_load_load_phase_b_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Harmonic Analyzer3.FFT
    {
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__f1 * 5e-05 ;
        _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__N = 1 / 5e-05 / _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__f1 ;
        if ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp = fmod ( _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__reset = 1 ;
            ++ _grid_load_load_phase_b_power_measurement_harmonic_analyzer3_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Steady state check
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer2.FFT
    {
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__f1 * 5e-05 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__N = 1 / 5e-05 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__f1 ;
        if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp = fmod ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__reset = 1 ;
            ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer2_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.C function1
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Harmonic Analyzer1.FFT
    {
        _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__f1 * 5e-05 ;
        _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__N = 1 / 5e-05 / _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__f1 ;
        if ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp = fmod ( _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__reset = 1 ;
            ++ _grid_load_load_phase_c_grid_synchronization_harmonic_analyzer1_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.RMS value1
    if (_grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt = fmod(_grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _grid_load_load_phase_c_grid_synchronization_rms_value1__period_cnt += 2 * M_PI * 5e-05 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    _grid_load_load_phase_c_grid_synchronization_rms_value1__square_sum += _grid_load_load_phase_c_v__out * _grid_load_load_phase_c_v__out * 2 * M_PI * 5e-05 * _grid_load_load_phase_c_single_phase_pll1_integrator10__out;
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Harmonic Analyzer3.FFT
    {
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp += 2 * M_PI * _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__f1 * 5e-05 ;
        _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__N = 1 / 5e-05 / _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__f1 ;
        if ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp > 2 * M_PI )     {
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp = fmod ( _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__wt_sp , M_PI ) ;
            _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__reset = 1 ;
            ++ _grid_load_load_phase_c_power_measurement_harmonic_analyzer3_fft__k ;
        }
    }
    // Generated from the component: Grid Load.Load.Phase A.C function4
    // Generated from the component: Grid Load.Load.Phase A.C function5
    // Generated from the component: Grid Load.Load.Phase B.C function4
    // Generated from the component: Grid Load.Load.Phase B.C function5
    // Generated from the component: Grid Load.Load.Phase C.C function4
    // Generated from the component: Grid Load.Load.Phase C.C function5
    // Generated from the component: MEAS_CLARKE
    // Generated from the component: Grid Load.Load.Phase A.Power measurement.Lref_calc
    // Generated from the component: Grid Load.Load.Phase B.Power measurement.Lref_calc
    // Generated from the component: Grid Load.Load.Phase C.Power measurement.Lref_calc
    // Generated from the component: Grid Load.Load.Phase A.Active power losses
    // Generated from the component: Grid Load.Load.Phase A.Reactive power losses
    // Generated from the component: Grid Load.Load.Phase B.Active power losses
    // Generated from the component: Grid Load.Load.Phase B.Reactive power losses
    // Generated from the component: Grid Load.Load.Phase C.Active power losses
    // Generated from the component: Grid Load.Load.Phase C.Reactive power losses
    // Generated from the component: REF_CLARKE
    // Generated from the component: Grid Load.Load.Phase A.Qmin_fun
    // Generated from the component: Grid Load.Load.Phase B.Qmin_fun
    // Generated from the component: Grid Load.Load.Phase C.Qmin_fun
    // Generated from the component: INNER_LOOP_ALPHA
    // Generated from the component: INNER_LOOP_ALPHA1
    // Generated from the component: Grid Load.Load.Phase A.Grid synchronization.Comparator1
    if (_grid_load_load_phase_a_grid_synchronization_constant1__out < _grid_load_load_phase_a_grid_synchronization_abs1__out) {
        _grid_load_load_phase_a_grid_synchronization_comparator1__state = 0;
    } else if (_grid_load_load_phase_a_grid_synchronization_constant1__out > _grid_load_load_phase_a_grid_synchronization_abs1__out) {
        _grid_load_load_phase_a_grid_synchronization_comparator1__state = 1;
    }
    // Generated from the component: Grid Load.Load.Phase A.Lref_calc
    // Generated from the component: Grid Load.Load.Phase A.C function2
    // Generated from the component: Grid Load.Load.Phase B.Grid synchronization.Comparator1
    if (_grid_load_load_phase_b_grid_synchronization_constant1__out < _grid_load_load_phase_b_grid_synchronization_abs1__out) {
        _grid_load_load_phase_b_grid_synchronization_comparator1__state = 0;
    } else if (_grid_load_load_phase_b_grid_synchronization_constant1__out > _grid_load_load_phase_b_grid_synchronization_abs1__out) {
        _grid_load_load_phase_b_grid_synchronization_comparator1__state = 1;
    }
    // Generated from the component: Grid Load.Load.Phase B.Lref_calc
    // Generated from the component: Grid Load.Load.Phase B.C function2
    // Generated from the component: Grid Load.Load.Phase C.Grid synchronization.Comparator1
    if (_grid_load_load_phase_c_grid_synchronization_constant1__out < _grid_load_load_phase_c_grid_synchronization_abs1__out) {
        _grid_load_load_phase_c_grid_synchronization_comparator1__state = 0;
    } else if (_grid_load_load_phase_c_grid_synchronization_constant1__out > _grid_load_load_phase_c_grid_synchronization_abs1__out) {
        _grid_load_load_phase_c_grid_synchronization_comparator1__state = 1;
    }
    // Generated from the component: Grid Load.Load.Phase C.Lref_calc
    // Generated from the component: Grid Load.Load.Phase C.C function2
    // Generated from the component: GEO_PWM
    // Generated from the component: INV_CLARKE
    // Generated from the component: Grid Load.Load.Phase A.counter
    // Generated from the component: Grid Load.Load.Phase A.Single phase PLL1.Discrete Transfer Function1
    _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__states[0] = _grid_load_load_phase_a_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Grid Load.Load.Phase B.counter
    // Generated from the component: Grid Load.Load.Phase B.Single phase PLL1.Discrete Transfer Function1
    _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__states[0] = _grid_load_load_phase_b_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Grid Load.Load.Phase C.counter
    // Generated from the component: Grid Load.Load.Phase C.Single phase PLL1.Discrete Transfer Function1
    _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__states[0] = _grid_load_load_phase_c_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Grid Load.Load.Phase A.R_inc
    // Generated from the component: Grid Load.Load.Phase A.C_inc
    // Generated from the component: Grid Load.Load.Phase B.R_inc
    // Generated from the component: Grid Load.Load.Phase B.C_inc
    // Generated from the component: Grid Load.Load.Phase C.R_inc
    // Generated from the component: Grid Load.Load.Phase C.C_inc
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------