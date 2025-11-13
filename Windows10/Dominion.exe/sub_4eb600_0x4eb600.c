// 函数: sub_4eb600
// 地址: 0x4eb600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm5 = arg4[4]
float xmm4 = arg4[1]
float xmm0_1 = xmm5 * xmm5
float xmm3 = arg4[2]
float xmm7 = arg4[3]
float xmm0_3 = xmm4 * xmm4
float xmm0_5 = xmm3 * xmm3
float xmm2_1 = xmm0_1 - xmm0_3
float xmm0_7 = xmm7 * xmm7
float xmm0_9 = xmm3 * xmm4
float xmm0_11 = xmm7 * xmm5
float xmm0_12 = arg2[6]
float xmm1_1 = xmm0_12 + xmm0_12
float xmm1_3 = xmm3 * xmm5
float xmm7_1 = xmm7 * xmm3
float xmm3_2 = xmm4 * xmm5
float xmm1_5 = xmm7 * xmm4
float xmm4_1 = arg2[7]
float xmm1_6 = arg2[5]
float xmm6_1 = xmm4_1 + xmm4_1
float xmm1_7 = xmm1_6 + xmm1_6
float xmm3_3 = *arg4
float xmm5_8 = ((xmm2_1 + xmm0_5 - xmm0_7) * xmm0_12 + (xmm0_11 + xmm0_9) * xmm1_7
    + (xmm7_1 - xmm3_2) * xmm6_1) * xmm3_3 + arg4[6]
float xmm4_5 = ((xmm3_2 + xmm7_1) * xmm1_1 + (xmm1_5 - xmm1_3) * xmm1_7
    + (xmm2_1 - xmm0_5 + xmm0_7) * xmm4_1) * xmm3_3 + arg4[7]
arg3[5] = ((xmm0_3 + xmm0_1 - xmm0_5 - xmm0_7) * arg2[5] + (xmm0_9 - xmm0_11) * xmm1_1
    + (xmm1_5 + xmm1_3) * xmm6_1) * xmm3_3 + arg4[5]
arg3[6] = xmm5_8
arg3[7] = xmm4_5
float xmm4_6 = arg2[4]
float xmm6_2 = arg4[1]
float xmm3_4 = arg2[2]
float xmm7_5 = arg4[2]
float xmm2_14 = arg2[3]
float xmm5_9 = arg4[3]
float var_30 = xmm4_6 * arg4[4] - xmm6_2 * arg2[1] - xmm3_4 * xmm7_5 - xmm2_14 * xmm5_9
float var_38 = xmm7_5 * xmm4_6 + xmm3_4 * arg4[4] + xmm5_9 * arg2[1] - xmm2_14 * xmm6_2
float var_34 = xmm5_9 * xmm4_6 + xmm2_14 * arg4[4] + xmm3_4 * xmm6_2 - xmm7_5 * arg2[1]
*(arg3 + 4) = (xmm6_2 * xmm4_6 + arg2[1] * arg4[4] + xmm2_14 * xmm7_5 - xmm5_9 * xmm3_4).o
*arg3 = *arg2 * *arg4
return arg4
