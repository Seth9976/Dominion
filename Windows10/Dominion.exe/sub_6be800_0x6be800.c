// 函数: sub_6be800
// 地址: 0x6be800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int128_t xmm0 = data_800248
arg6 f- 0
float xmm0_1 = *arg5
int32_t* eax
eax:1.b = (arg6 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg6, 0f) ? 1 : 0) << 2 | (arg6 < 0f ? 1 : 0)
float var_38 = 0f
bool p_1 = unimplemented  {test ah, 0x44}
float var_14
float var_10_1
float var_c
float var_8
float xmm5

if (p_1)
    float xmm1_1 = arg6 * 0.5f
    var_8 = sub_4ae0f0(ebp, xmm1_1)
    double* eax_1
    float xmm0_11
    eax_1, xmm0_11 = sub_4ae0d0(ebp, xmm1_1)
    xmm0_1 f- 0
    var_c = xmm0_11
    eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    bool p_5
    
    if (not(p_3))
        float xmm0_12 = arg5[1]
        xmm0_12 f- 0
        eax_1:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
            | (xmm0_12 < 0f ? 1 : 0)
        p_5 = unimplemented  {test ah, 0x44}
    
    if (p_3 || p_5)
        float xmm1_2 = arg5[1]
        xmm5 = var_8
        float xmm3_3 = xmm0_1 * xmm5 + xmm1_2 * xmm0_11
        float xmm2_3 = xmm0_1 * xmm0_11 - xmm1_2 * xmm5
        var_14 = (xmm3_3 * xmm0_11 + xmm2_3 * xmm5) * arg7[1]
        var_10_1 = (xmm2_3 * xmm0_11 - xmm3_3 * xmm5) * *arg7
    else
        xmm5 = var_8
        var_10_1 = 0f
        var_14 = 0f
        var_38 = 0f
else
    xmm5 = xmm0:8.d
    var_8 = xmm5
    var_10_1 = xmm0_1 * *arg7
    var_14 = arg5[1] f* arg7[1]
    var_38 = arg7[2] * 0f
    var_c = xmm0:0xc.d

float xmm3_7 = xmm0:4.d
float xmm1_9 = arg4[1] * arg7[1]
float xmm0_18 = *arg4 * *arg7
float xmm1_11 = arg7[2] * 0f
float xmm7_1 = xmm3_7 * 2f
float xmm4_3 = var_c * 2f
float xmm5_2 = xmm5 * 2f * var_8
float xmm6_1 = xmm7_1 * xmm3_7
float xmm7_2 = xmm7_1 * var_8
float xmm2_7 = (1f - xmm6_1 - xmm5_2) * xmm0_18
float xmm2_9 = xmm0.d * 2f
float xmm1_13 = xmm4_3 * var_8
float xmm0_20 = xmm2_9 * xmm3_7
float xmm1_15 = xmm4_3 * xmm3_7
float xmm3_9 = xmm2_9 * var_8
float xmm4_6 = (xmm0_20 - xmm1_13) * xmm1_9
float xmm4_9 = (xmm3_9 + xmm1_15) * xmm1_11
float xmm0_21 = 1f - xmm2_9 f* xmm0.d
float xmm4_12 = (xmm1_13 + xmm0_20) * xmm0_18
float xmm2_12 = xmm0_21 - xmm5_2
float xmm0_23 = (xmm0_21 - xmm6_1) * xmm1_11
float var_34 = xmm2_12
float xmm5_4 = xmm2_12 * xmm1_9
float xmm0_25 = var_10_1 * *arg4
float xmm5_6 = xmm4_3 f* xmm0.d
float xmm4_15 = (xmm7_2 - xmm5_6) * xmm1_11
float xmm5_8 = (xmm5_6 + xmm7_2) * xmm1_9
float xmm4_18 = (xmm3_9 - xmm1_15) * xmm0_18
float xmm0_27 = var_14 * arg4[1]
float xmm7_3 = arg2[2]
float xmm4_19 = arg2[3]
float xmm0_29 = xmm7_3 + xmm7_3
float xmm5_9 = *arg2
float xmm2_13 = arg2[4]
float xmm2_14 = xmm2_13 + xmm2_13
float xmm0_30 = xmm0_29 * xmm7_3
float xmm3_13 = (xmm4_19 + xmm4_19) * xmm4_19
float xmm0_31 = arg2[1]
float xmm6_3 = xmm4_19 * xmm2_14
float xmm1_18 = (1f - xmm0_30 - xmm3_13) * xmm5_9
float xmm1_20 = xmm0_31 + xmm0_31
float xmm7_4 = xmm7_3 * xmm2_14
float xmm0_33 = xmm7_3 * xmm1_20
float xmm6_6 = (xmm0_33 - xmm6_3) * xmm5_9
float xmm0_35 = (xmm6_3 + xmm0_33) * xmm5_9
float xmm6_8 = xmm4_19 * xmm1_20
float xmm3_17 = xmm0_31 * xmm2_14
float xmm1_21 = 1f - xmm0_31 * xmm1_20
float xmm6_10 = (xmm6_8 + xmm7_4) * xmm5_9
float xmm0_40 = (xmm1_21 - xmm3_13) * xmm5_9
float xmm6_11 = arg2[5]
float xmm0_42 = xmm0_29 * xmm4_19
float xmm2_16 = xmm6_11 * 0f
float xmm1_24 = (xmm0_42 - xmm3_17) * xmm5_9
float xmm3_19 = (xmm3_17 + xmm0_42) * xmm5_9
float xmm1_25 = arg2[6]
float xmm0_45 = (xmm1_21 - xmm0_30) * xmm5_9
float xmm7_5 = arg2[7]
float xmm1_28 = (xmm6_8 - xmm7_4) * xmm5_9
*arg3 = xmm2_7 * xmm1_18 + xmm4_12 * xmm6_6 + xmm4_18 * xmm6_10 + xmm2_16
arg3[1] = xmm6_6 * xmm5_4 + xmm1_18 * xmm4_6 + xmm6_10 * xmm5_8 + xmm2_16
float xmm2_18 = xmm1_25 * 0f
arg3[2] = xmm6_6 * xmm4_15 + xmm1_18 * xmm4_9 + xmm6_10 * xmm0_23 + xmm2_16
arg3[3] = xmm6_6 * xmm0_27 + xmm1_18 * xmm0_25 + xmm6_10 * var_38 + xmm6_11
arg3[4] = xmm0_40 * xmm4_12 + xmm0_35 * xmm2_7 + xmm1_24 * xmm4_18 + xmm2_18
arg3[5] = xmm0_40 * xmm5_4 + xmm0_35 * xmm4_6 + xmm1_24 * xmm5_8 + xmm2_18
arg3[6] = xmm0_40 * xmm4_15 + xmm0_35 * xmm4_9 + xmm1_24 * xmm0_23 + xmm2_18
float xmm2_20 = xmm7_5 * 0f
arg3[7] = xmm0_40 * xmm0_27 + xmm0_35 * xmm0_25 + xmm1_24 * var_38 + xmm1_25
arg3[8] = xmm3_19 * xmm4_12 + xmm1_28 * xmm2_7 + xmm0_45 * xmm4_18 + xmm2_20
arg3[9] = xmm3_19 * xmm5_4 + xmm1_28 * xmm4_6 + xmm0_45 * xmm5_8 + xmm2_20
arg3[0xa] = xmm3_19 * xmm4_15 + xmm1_28 * xmm4_9 + xmm0_45 * xmm0_23 + xmm2_20
arg3[0xb] = xmm3_19 * xmm0_27 + xmm1_28 * xmm0_25 + xmm0_45 * var_38 + xmm7_5
arg3[0xc] = xmm4_12 * 0f + xmm2_7 * 0f + xmm4_18 * 0f + 0f
arg3[0xd] = xmm5_4 * 0f + xmm4_6 * 0f + xmm5_8 * 0f + 0f
arg3[0xe] = xmm4_15 * 0f + xmm4_9 * 0f + xmm0_23 * 0f + 0f
arg3[0xf] = xmm0_27 * 0f + xmm0_25 * 0f + var_38 * 0f + 1f
return arg2
