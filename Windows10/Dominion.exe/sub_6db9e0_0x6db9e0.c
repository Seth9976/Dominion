// 函数: sub_6db9e0
// 地址: 0x6db9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = *arg2
float xmm5 = arg2[2]
float xmm0_1 = xmm1 * *arg3
float xmm6 = arg2[1]
float xmm7 = arg2[3]
float xmm0_3 = xmm1 * arg3[1]
float xmm4_1 = xmm5 * xmm5
float xmm0_5 = xmm1 * arg3[2]
float xmm2_1 = xmm6 * xmm6
float xmm0_6 = arg2[4]
float xmm3_1 = xmm0_6 * xmm0_6
float xmm0_8 = xmm5 * xmm6
float xmm1_2 = xmm7 * xmm7
float xmm6_2 = xmm7 * xmm0_6
float xmm0_10 = xmm5 * xmm0_6
float xmm5_2 = xmm3_1 - xmm2_1
float xmm0_12 = xmm7 * xmm6
float xmm3_3 = xmm7 * xmm5
float xmm2_3 = xmm6 * xmm0_6
float xmm7_6 = (xmm6_2 + xmm0_8) * (xmm0_1 + xmm0_1) + (xmm5_2 + xmm4_1 - xmm1_2) * xmm0_3
    + (xmm3_3 - xmm2_3) * (xmm0_5 + xmm0_5) f+ arg2[6]
float xmm4_7 = (xmm0_3 + xmm0_3) * (xmm2_3 + xmm3_3) + (xmm0_1 + xmm0_1) * (xmm0_12 - xmm0_10)
    + (xmm5_2 - xmm4_1 + xmm1_2) * xmm0_5 f+ arg2[7]
*arg4 = (xmm0_8 - xmm6_2) * (xmm0_3 + xmm0_3) + (xmm2_1 + xmm3_1 - xmm4_1 - xmm1_2) * xmm0_1
    + (xmm0_12 + xmm0_10) * (xmm0_5 + xmm0_5) f+ arg2[5]
arg4[1] = xmm7_6
arg4[2] = xmm4_7
float xmm3_7 = arg3[6]
float xmm5_12 = arg3[3]
float xmm2_5 = arg3[4]
float xmm4_8 = arg3[5]
float var_48 = xmm3_7 * xmm0_6 - xmm5_12 * xmm6 - xmm2_5 * xmm5 - xmm4_8 * xmm7
float var_50 = xmm2_5 * xmm0_6 + xmm3_7 * xmm5 + xmm5_12 * xmm7 - xmm4_8 * xmm6
float xmm1_25 = xmm1 * arg3[8]
float var_4c = xmm4_8 * xmm0_6 + xmm3_7 * xmm7 + xmm2_5 * xmm6 - xmm5_12 * xmm5
*(arg4 + 0xc) = (xmm5_12 * xmm0_6 + xmm3_7 * xmm6 + xmm4_8 * xmm5 - xmm2_5 * xmm7).o
float xmm0_45 = xmm1 * arg3[9]
arg4[7] = xmm1 * arg3[7]
arg4[8] = xmm1_25
arg4[9] = xmm0_45
return arg4
