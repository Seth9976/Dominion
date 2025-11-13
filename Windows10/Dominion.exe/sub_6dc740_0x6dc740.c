// 函数: sub_6dc740
// 地址: 0x6dc740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2 = arg2[1]
float xmm7 = arg2[3]
float xmm3 = arg2[2]
float xmm5 = *arg2
float xmm0_1 = xmm2 * xmm2
float xmm4_1 = xmm7 * xmm7
float xmm0_3 = xmm3 * xmm3
float xmm6_1 = xmm5 * xmm5
float xmm0_5 = xmm2 * xmm5
float xmm4_2 = xmm4_1 - xmm6_1
float xmm0_7 = xmm3 * xmm7
float xmm0_8 = arg3[5]
float xmm2_1 = xmm2 * xmm7
float xmm1_1 = xmm0_8 + xmm0_8
float xmm3_1 = arg3[4]
float xmm2_3 = xmm3 * xmm5
float xmm3_2 = xmm3_1 + xmm3_1
float xmm2_5 = xmm3 * xmm2
float xmm5_1 = arg3[6]
float xmm1_3 = xmm5 * xmm7
float xmm7_2 = xmm5_1 + xmm5_1
float xmm0_20 = (xmm2_3 - xmm2_1) * xmm3_2 + (xmm1_3 + xmm2_5) * xmm1_1
    + (xmm4_2 - xmm0_1 + xmm0_3) * xmm5_1 f+ arg2[6]
arg4[1].d = (xmm6_1 + xmm4_1 - xmm0_1 - xmm0_3) * arg3[4] + (xmm0_5 - xmm0_7) * xmm1_1
    + (xmm2_3 + xmm2_1) * xmm7_2 f+ arg2[4]
*(arg4 + 0x14) = (xmm4_2 + xmm0_1 - xmm0_3) * xmm0_8 + (xmm0_7 + xmm0_5) * xmm3_2
    + (xmm2_5 - xmm1_3) * xmm7_2 f+ arg2[5]
*(arg4 + 0x18) = xmm0_20
float xmm3_3 = arg3[3]
float xmm5_2 = *arg3
float xmm2_6 = arg3[1]
float xmm4_14 = arg3[2]
float var_40 = xmm3_3 * xmm7 - xmm5_2 * xmm5 - xmm2_6 * xmm2 - xmm4_14 * xmm3
float var_48 = xmm2_6 * xmm7 + xmm3_3 * xmm2 + xmm5_2 * xmm3 - xmm4_14 * xmm5
float var_44 = xmm4_14 * xmm7 + xmm3_3 * xmm3 + xmm2_6 * xmm5 - xmm5_2 * xmm2
*arg4 = (xmm5_2 * xmm7 + xmm3_3 * xmm5 + xmm4_14 * xmm2 - xmm2_6 * xmm3).o
return arg4
