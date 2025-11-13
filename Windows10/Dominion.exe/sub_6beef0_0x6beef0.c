// 函数: sub_6beef0
// 地址: 0x6beef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
float* eax = arg4
float xmm2_1 = arg5[2] - eax[2]
float xmm7_1 = arg5[1] - eax[1]
float xmm6_1 = *arg5 - *eax
float xmm3_2 = arg5[4] * xmm2_1 - arg5[5] * xmm7_1
float xmm1_2 = arg5[5] * xmm6_1 - arg5[3] * xmm2_1
float xmm2_4 = arg5[3] * xmm7_1 - arg5[4] * xmm6_1
float xmm1_7 = 1f / sub_4ac580(ebp, xmm1_2 * xmm1_2 + xmm3_2 * xmm3_2 + xmm2_4 * xmm2_4)
float var_28 = xmm1_7 * xmm3_2
float var_30 = xmm1_7 * xmm1_2
float var_20_1 = xmm1_7 * xmm2_4
float xmm3_5 = arg4[4] f* xmm2_1 - arg4[5] f* xmm7_1
float xmm1_11 = arg4[5] f* xmm6_1 - arg4[3] f* xmm2_1
float xmm2_7 = arg4[3] f* xmm7_1 - arg4[4] f* xmm6_1
float xmm6_2 = 1f / sub_4ac580(ebp, xmm1_11 * xmm1_11 + xmm3_5 * xmm3_5 + xmm2_7 * xmm2_7)
float xmm7_3 = xmm6_2 * xmm3_5
float xmm4_1 = xmm6_2 * xmm1_11
float xmm6_3 = xmm6_2 * xmm2_7
float var_34_1 = xmm7_3
float var_14_1 = xmm4_1
float var_18_2 = xmm6_3
int32_t* ebx_1

if (arg2 == 0)
    ebx_1 = arg4
else
    float xmm1_17 = arg4[2] f- arg2[2]
    float xmm3_7 = *arg4 - *arg2
    float xmm2_9 = arg4[1] f- arg2[1]
    ebx_1 = arg4
    float xmm5_1 = ebx_1[5]
    float xmm7_4 = ebx_1[4]
    float xmm6_4 = ebx_1[3]
    float xmm4_4 = xmm7_4 * xmm1_17 - xmm5_1 * xmm2_9
    float xmm6_6 = xmm6_4 * xmm2_9 - xmm7_4 * xmm3_7
    float xmm5_3 = xmm5_1 * xmm3_7 - xmm6_4 * xmm1_17
    float xmm3_8 = 1f / sub_4ac580(ebp, xmm5_3 * xmm5_3 + xmm4_4 * xmm4_4 + xmm6_6 * xmm6_6)
    float xmm1_26 = (xmm3_8 * xmm5_3 - var_30) * 0.5f + var_30
    float xmm2_14 = (xmm3_8 * xmm4_4 - var_28) * 0.5f + var_28
    float xmm3_12 = (xmm3_8 * xmm6_6 - var_20_1) * 0.5f + var_20_1
    float xmm1_31 = 1f / sub_4ac580(ebp, xmm1_26 * xmm1_26 + xmm2_14 * xmm2_14 + xmm3_12 * xmm3_12)
    xmm6_3 = var_18_2
    xmm7_3 = var_34_1
    xmm4_1 = var_14_1
    var_28 = xmm1_31 * xmm2_14
    var_30 = xmm1_31 * xmm1_26
    var_20_1 = xmm1_31 * xmm3_12

float* result = arg6

if (result != 0)
    float xmm1_34 = result[2] - arg5[2]
    float xmm2_16 = result[1] - arg5[1]
    float xmm5_4 = arg5[5]
    float xmm7_6 = arg5[4]
    float xmm3_14 = *result - *arg5
    float xmm6_7 = arg5[3]
    float xmm4_7 = xmm7_6 * xmm1_34 - xmm5_4 * xmm2_16
    float xmm6_9 = xmm6_7 * xmm2_16 - xmm7_6 * xmm3_14
    float xmm5_6 = xmm5_4 * xmm3_14 - xmm6_7 * xmm1_34
    float xmm3_15 = 1f / sub_4ac580(ebp, xmm5_6 * xmm5_6 + xmm4_7 * xmm4_7 + xmm6_9 * xmm6_9)
    float xmm1_43 = (xmm3_15 * xmm5_6 - var_14_1) * 0.5f + var_14_1
    float xmm2_21 = (xmm3_15 * xmm4_7 - var_34_1) * 0.5f + var_34_1
    float xmm3_19 = (xmm3_15 * xmm6_9 - var_18_2) * 0.5f + var_18_2
    float xmm0_57
    result, xmm0_57 = sub_4ac580(ebp, xmm1_43 * xmm1_43 + xmm2_21 * xmm2_21 + xmm3_19 * xmm3_19)
    float xmm6_10 = 1f / xmm0_57
    xmm4_1 = xmm6_10 * xmm1_43
    xmm7_3 = xmm6_10 * xmm2_21
    xmm6_3 = xmm6_10 * xmm3_19
    var_14_1 = xmm4_1

float xmm2_22 = ebx_1[6]
float xmm1_50 = xmm7_1 * arg7 f+ ebx_1[1]
float xmm3_22 = xmm6_1 * arg7 f+ *ebx_1
float xmm1_53 = xmm2_1 * arg7 f+ ebx_1[2]
float var_2c_1 = xmm3_22
arg3[3] = xmm3_22 - xmm2_22 * var_28 * 0.5f
arg3[4] = xmm1_50 - var_30 * xmm2_22 * 0.5f
arg3[5] = xmm1_53 - var_20_1 * xmm2_22 * 0.5f
float xmm1_63 = ebx_1[6]
arg3[9] = xmm1_63 * var_28 * 0.5f + xmm3_22
arg3[0xa] = xmm1_63 * var_30 * 0.5f + xmm1_50
arg3[0xb] = xmm1_63 * var_20_1 * 0.5f + xmm1_53
float xmm3_23 = arg5[6]
float xmm4_10 = arg5[1] - xmm4_1 * xmm3_23 * 0.5f
float xmm2_24 = arg5[2] - xmm6_3 * xmm3_23 * 0.5f
*arg3 = *arg5 - xmm7_3 * xmm3_23 * 0.5f
arg3[1] = xmm4_10
arg3[2] = xmm2_24
float xmm0_81 = arg5[6]
float xmm4_14 = var_14_1 * xmm0_81 * 0.5f + arg5[1]
float xmm6_13 = xmm6_3 * xmm0_81 * 0.5f + arg5[2]
arg3[6] = xmm7_3 * xmm0_81 * 0.5f + *arg5
arg3[7] = xmm4_14
arg3[8] = xmm6_13
return result
