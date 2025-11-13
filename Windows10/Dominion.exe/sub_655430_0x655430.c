// 函数: sub_655430
// 地址: 0x655430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = *arg3
float xmm7 = arg3[4]
float xmm0_1 = xmm1 * *arg2
float xmm6 = arg3[1]
float xmm5 = arg3[2]
float xmm4_1 = xmm6 * xmm6
float xmm0_3 = xmm1 * arg2[1]
float xmm3_1 = xmm5 * xmm5
float xmm0_5 = xmm1 * 0f
float xmm1_2 = xmm5 * xmm6
float xmm0_7 = xmm7 * xmm7
float xmm0_8 = arg3[3]
float xmm2_1 = xmm0_8 * xmm0_8
float xmm0_9 = xmm0_8 * xmm7
float xmm4_3 = xmm1_2 - xmm0_9
float xmm0_13 = xmm4_1 + xmm0_7 - xmm3_1 - xmm2_1
float xmm6_3 = (arg3[3] f* xmm6 + xmm5 * xmm7) * (xmm0_5 + xmm0_5)
float xmm0_21 = xmm0_9 + xmm1_2
float xmm0_25 = xmm0_7 - xmm4_1 + xmm3_1 - xmm2_1
float xmm2_5 = (arg3[3] f* xmm5 - arg3[1] f* xmm7) * (xmm0_5 + xmm0_5)
float xmm4_10 = (xmm0_1 + xmm0_1) * xmm0_21 + xmm0_25 * xmm0_3 + xmm2_5 f+ arg3[6]

if (not(arg2[2] < *arg2))
    float xmm0_33 = arg2[3]
    
    if (not(xmm0_33 < arg2[1]))
        float xmm2_6 = *arg3
        float xmm1_5 = xmm2_6 * arg2[2]
        float xmm2_7 = xmm2_6 * xmm0_33
        float xmm1_10 = (xmm1_5 + xmm1_5) * xmm0_21 + xmm2_7 * xmm0_25 + xmm2_5 f+ arg3[6]
        float xmm0_39 = (xmm2_7 + xmm2_7) * xmm4_3 + xmm0_13 * xmm1_5 + xmm6_3 f+ arg3[5]
        *arg4 = (xmm0_3 + xmm0_3) * xmm4_3 + xmm0_13 * xmm0_1 + xmm6_3 f+ arg3[5]
        arg4[1] = xmm4_10
        arg4[2] = xmm0_39
        arg4[3] = xmm1_10
        return arg4

sub_63b870(arg1, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 0x12d, 
    "RectBottomRight")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
