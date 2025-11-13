// 函数: sub_641ad0
// 地址: 0x641ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float* var_8 = arg3
float xmm0 = arg2[2]
float xmm7 = *arg2
float xmm5 = arg2[1]
float xmm6 = arg2[3]

if (xmm0 < xmm7 || xmm6 < xmm5)
    sub_63b870(arg4, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 0x12d, 
        "RectBottomRight")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

float xmm3_4 = xmm7 * arg3[4] + xmm5 * arg3[5] + arg3[6] * 0f + arg3[7]
float xmm2_4 = xmm7 * arg3[8] + xmm5 * arg3[9] + arg3[0xa] * 0f + arg3[0xb]
*arg4 = xmm5 * arg3[1] + xmm7 * *arg3 + arg3[2] * 0f + arg3[3]
arg4[1] = xmm3_4
arg4[2] = xmm2_4
float xmm2_9 = xmm5 * arg3[5] + xmm0 * arg3[4] + arg3[6] * 0f + arg3[7]
float xmm1_9 = xmm5 * arg3[9] + xmm0 * arg3[8] + arg3[0xa] * 0f + arg3[0xb]
arg4[3] = xmm5 * arg3[1] + xmm0 * *arg3 + arg3[2] * 0f + arg3[3]
arg4[4] = xmm2_9
arg4[5] = xmm1_9
float xmm3_10 = xmm6 * arg3[5] + xmm7 * arg3[4] + arg3[6] * 0f + arg3[7]
float xmm2_14 = xmm6 * arg3[9] + xmm7 * arg3[8] + arg3[0xa] * 0f + arg3[0xb]
arg4[6] = xmm6 * arg3[1] + xmm7 * *arg3 + arg3[2] * 0f + arg3[3]
arg4[7] = xmm3_10
arg4[8] = xmm2_14
float xmm2_19 = xmm6 * arg3[5] + xmm0 * arg3[4] + arg3[6] * 0f + arg3[7]
float xmm1_19 = xmm6 * arg3[9] + xmm0 * arg3[8] + arg3[0xa] * 0f + arg3[0xb]
arg4[9] = xmm6 * arg3[1] + xmm0 * *arg3 + arg3[2] * 0f + arg3[3]
arg4[0xa] = xmm2_19
arg4[0xb] = xmm1_19
return arg4
