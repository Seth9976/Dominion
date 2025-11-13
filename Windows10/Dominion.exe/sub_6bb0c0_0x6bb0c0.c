// 函数: sub_6bb0c0
// 地址: 0x6bb0c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float eax_2 = (sub_63eb70() & 0x7fffff) | 0x3f800000
float xmm3_1 = ((sub_63eb70() & 0x7fffff) | 0x3f800000) - 1f
float xmm4_1 = eax_2 - 1f
float xmm2_1 = ((sub_63eb70() & 0x7fffff) | 0x3f800000) - 1f
float xmm3_3 = xmm3_1 + xmm3_1 - 1f
float xmm4_3 = xmm4_1 + xmm4_1 - 1f
float xmm2_3 = xmm2_1 + xmm2_1 - 1f
float var_c_1 = xmm3_3
float var_10_1 = xmm2_3
float var_8_1 = xmm4_3

if (not(xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3 + xmm4_3 * xmm4_3 <= 1f))
    do
        float eax_11 = (sub_63eb70() & 0x7fffff) | 0x3f800000
        float xmm3_5 = ((sub_63eb70() & 0x7fffff) | 0x3f800000) - 1f
        float xmm4_5 = eax_11 - 1f
        float xmm2_5 = ((sub_63eb70() & 0x7fffff) | 0x3f800000) - 1f
        xmm3_3 = xmm3_5 + xmm3_5 - 1f
        xmm4_3 = xmm4_5 + xmm4_5 - 1f
        xmm2_3 = xmm2_5 + xmm2_5 - 1f
        var_c_1 = xmm3_3
        var_8_1 = xmm4_3
        var_10_1 = xmm2_3
    while (xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3 + xmm4_3 * xmm4_3 > 1f)

int32_t __saved_ebp
float xmm1_12 = 1f / sub_4ac580(&__saved_ebp, xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3 + xmm4_3 * xmm4_3)
*arg1 = xmm1_12 * var_10_1
arg1[1] = xmm1_12 * var_c_1
arg1[2] = xmm1_12 * var_8_1
return arg1
