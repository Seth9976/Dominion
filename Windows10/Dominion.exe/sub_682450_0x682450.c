// 函数: sub_682450
// 地址: 0x682450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = *arg2
float xmm4 = arg3[1]
float xmm2 = *arg3
float xmm5 = arg3[5]
float xmm3 = arg3[4]
float xmm6_1 = arg3[6] f* 0f
float xmm7_1 = arg3[2] f* 0f
float xmm7_6 = xmm5 f* arg2[1] + xmm3 * xmm1 + xmm6_1 f+ arg3[7]

if (not(arg2[2] f< xmm1))
    float xmm0_5 = arg2[3]
    
    if (not(xmm0_5 f< arg2[1]))
        float xmm2_4 = xmm2 f* arg2[2] + xmm4 * xmm0_5 + xmm7_1 f+ arg3[3]
        float xmm3_4 = xmm3 f* arg2[2] + xmm5 * xmm0_5 + xmm6_1 f+ arg3[7]
        *arg4 = xmm4 f* arg2[1] + xmm2 * xmm1 + xmm7_1 f+ arg3[3]
        arg4[1] = xmm7_6
        arg4[2] = xmm2_4
        arg4[3] = xmm3_4
        return arg4

sub_63b870(arg1, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 0x12d, 
    "RectBottomRight")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
