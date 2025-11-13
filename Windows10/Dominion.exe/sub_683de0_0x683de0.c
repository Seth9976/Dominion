// 函数: sub_683de0
// 地址: 0x683de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
double* eax

if (arg1 u> 7)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Sprite.cpp", 0x832, 
        "ImageRotationUVS")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_14_2
float var_10_2
double* eax_1
float xmm0_36
float xmm2_1
float xmm3_15
float xmm4_13
float xmm5_8
float xmm6_12
float xmm7_7

switch (arg1)
    case 0
        return 
    case 1
        goto label_683e3d
    case 2
        float xmm0_27 = sub_4ae0f0(ebp, 3.14159274f)
        float xmm0_28
        eax_1, xmm0_28 = sub_4ae0d0(ebp, 3.14159274f)
        float xmm1_4 = *arg2
        float xmm6_5 = arg2[1]
        float xmm7_4 = arg2[3]
        float xmm1_6 = arg2[2]
        var_10_2 = xmm6_5 * xmm0_28 + xmm1_4 * xmm0_27 + 1f
        float xmm5_5 = arg2[5]
        var_14_2 = xmm1_4 * xmm0_28 - xmm6_5 * xmm0_27 + 1f
        float xmm1_8 = arg2[4]
        xmm7_7 = xmm7_4 * xmm0_28 + xmm1_6 * xmm0_27 + 1f
        xmm6_12 = xmm1_6 * xmm0_28 - xmm7_4 * xmm0_27 + 1f
        float xmm3_12 = arg2[7]
        xmm0_36 = xmm3_12 * xmm0_27
        float xmm1_10 = arg2[6]
        xmm4_13 = xmm1_8 * xmm0_28 - xmm5_5 * xmm0_27 + 1f
        xmm5_8 = xmm5_5 * xmm0_28 + xmm1_8 * xmm0_27 + 1f
        xmm2_1 = xmm1_10 * xmm0_28
        xmm3_15 = xmm3_12 * xmm0_28 + xmm1_10 * xmm0_27 + 1f
    label_684078:
        *arg2 = var_14_2
        arg2[1] = var_10_2
        arg2[2] = xmm6_12
        arg2[3] = xmm7_7
        arg2[4] = xmm4_13
        arg2[5] = xmm5_8
        arg2[6] = xmm2_1 - xmm0_36 + 1f
        arg2[7] = xmm3_15
        return 
    case 3
        goto label_6840f5
    case 4
        arg2[1] = 1f - arg2[1]
        arg2[3] = 1f - arg2[3]
        float xmm1_20 = 1f - arg2[7]
        arg2[5] = 1f - arg2[5]
        arg2[7] = xmm1_20
        return 
    case 5
        *arg2 = 1f - *arg2
        arg2[2] = 1f - arg2[2]
        float xmm1_21 = 1f - arg2[6]
        arg2[4] = 1f - arg2[4]
        arg2[6] = xmm1_21
        return 
    case 6
        arg2[1] = 1f - arg2[1]
        arg2[3] = 1f - arg2[3]
        arg2[5] = 1f - arg2[5]
        arg2[7] = 1f - arg2[7]
    label_683e3d:
        float xmm0_5 = sub_4ae0f0(ebp, -1.57079637f)
        float xmm0_6
        eax, xmm0_6 = sub_4ae0d0(ebp, -1.57079637f)
        float xmm3_3 = xmm0_6 * *arg2 - xmm0_5 * arg2[1]
        float xmm3_7 = xmm0_6 * arg2[1] + xmm0_5 * *arg2 + 1f
        float xmm5_3 = xmm0_6 * arg2[4] - xmm0_5 * arg2[5]
        float xmm6_4 = xmm0_6 * arg2[3] + xmm0_5 * arg2[2] + 1f
        float xmm4_5 = xmm0_6 * arg2[5] + xmm0_5 * arg2[4] + 1f
        float xmm3_10 = xmm0_6 * arg2[6] - xmm0_5 * arg2[7]
        float xmm0_22 = xmm0_6 * arg2[7]
        float xmm0_24 = xmm0_5 * arg2[6]
        arg2[2] = xmm0_6 * arg2[2] - xmm0_5 * arg2[3]
        arg2[3] = xmm6_4
        *arg2 = xmm3_3
        arg2[1] = xmm3_7
        arg2[4] = xmm5_3
        arg2[5] = xmm4_5
        arg2[6] = xmm3_10
        arg2[7] = xmm0_22 + xmm0_24 + 1f
        return 
    case 7
        arg2[1] = 1f - arg2[1]
        arg2[3] = 1f - arg2[3]
        arg2[5] = 1f - arg2[5]
        arg2[7] = 1f - arg2[7]
    label_6840f5:
        float xmm0_43 = sub_4ae0f0(ebp, 1.57079637f)
        float xmm0_44
        eax_1, xmm0_44 = sub_4ae0d0(ebp, 1.57079637f)
        float xmm1_12 = *arg2
        float xmm4_14 = arg2[1]
        float xmm7_8 = arg2[3]
        float xmm5_9 = arg2[5]
        float xmm1_14 = arg2[2]
        var_10_2 = xmm4_14 * xmm0_44 + xmm1_12 * xmm0_43
        var_14_2 = xmm1_12 * xmm0_44 - xmm4_14 * xmm0_43 + 1f
        xmm7_7 = xmm7_8 * xmm0_44 + xmm1_14 * xmm0_43
        float xmm1_16 = arg2[4]
        float xmm3_21 = arg2[7]
        xmm5_8 = xmm5_9 * xmm0_44 + xmm1_16 * xmm0_43
        float xmm1_18 = arg2[6]
        xmm6_12 = xmm1_14 * xmm0_44 - xmm7_8 * xmm0_43 + 1f
        xmm4_13 = xmm1_16 * xmm0_44 - xmm5_9 * xmm0_43 + 1f
        xmm2_1 = xmm1_18 * xmm0_44
        xmm0_36 = xmm3_21 * xmm0_43
        xmm3_15 = xmm3_21 * xmm0_44 + xmm1_18 * xmm0_43
        goto label_684078
