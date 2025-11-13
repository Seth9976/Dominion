// 函数: sub_6ddeb0
// 地址: 0x6ddeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1_1 = arg4[9] f* arg2[9]
float xmm2_1 = arg4[8] f* arg2[8]
*(arg3 + 0x1c) = arg2[7] f* arg4[7]
arg3[2].d = xmm2_1
*(arg3 + 0x24) = xmm1_1
float xmm4 = arg2[3]
float xmm7 = *arg2
float xmm6 = arg2[1]
float xmm5 = arg4[1]
float xmm2_2 = arg2[2]
float xmm3 = arg4[2]
float var_30 = xmm4 f* arg4[3] - *arg4 * xmm7 - xmm6 * xmm5 - xmm2_2 * xmm3
float var_38 = xmm5 * xmm4 + xmm6 f* arg4[3] + xmm2_2 f* *arg4 - xmm3 * xmm7
float var_34 = xmm3 * xmm4 + xmm2_2 f* arg4[3] + xmm5 * xmm7 - xmm6 f* *arg4
*arg3 = (*arg4 * xmm4 + xmm7 f* arg4[3] + xmm3 * xmm6 - xmm2_2 * xmm5).o
float xmm5_2 = arg2[3]
float xmm4_1 = *arg2
float xmm3_5 = arg2[1]
float xmm7_1 = arg2[2]
float xmm0_22 = xmm5_2 * xmm5_2
float xmm0_24 = xmm4_1 * xmm4_1
float xmm0_26 = xmm3_5 * xmm3_5
float xmm0_28 = xmm7_1 * xmm7_1
float xmm0_30 = xmm3_5 * xmm4_1
float xmm0_32 = xmm7_1 * xmm5_2
float xmm2_5 = xmm0_22 - xmm0_24
float xmm0_33 = arg4[5]
float xmm1_18 = xmm0_33 + xmm0_33
float xmm1_20 = xmm3_5 * xmm5_2
float xmm7_2 = xmm7_1 * xmm3_5
float xmm3_7 = xmm4_1 * xmm5_2
float xmm1_22 = xmm7_1 * xmm4_1
float xmm4_2 = arg4[6]
float xmm6_3 = xmm4_2 + xmm4_2
float xmm1_23 = arg4[4]
float xmm1_24 = xmm1_23 + xmm1_23
float xmm4_6 = ((xmm3_7 + xmm7_2) * xmm1_18 + (xmm1_22 - xmm1_20) * xmm1_24
    + (xmm2_5 - xmm0_26 + xmm0_28) * xmm4_2) f* arg2[9] f+ arg2[6]
arg3[1].d = ((xmm0_24 + xmm0_22 - xmm0_26 - xmm0_28) f* arg4[4] + (xmm0_30 - xmm0_32) * xmm1_18
    + (xmm1_22 + xmm1_20) * xmm6_3) f* arg2[7] f+ arg2[4]
*(arg3 + 0x14) = ((xmm2_5 + xmm0_26 - xmm0_28) * xmm0_33 + (xmm0_32 + xmm0_30) * xmm1_24
    + (xmm7_2 - xmm3_7) * xmm6_3) f* arg2[8] f+ arg2[5]
*(arg3 + 0x18) = xmm4_6
return arg4
