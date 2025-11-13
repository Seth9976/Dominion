// 函数: sub_4ad2b0
// 地址: 0x4ad2b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2 = arg4 f* data_8c4634
*arg5 = 0
float xmm1_1 = *arg2 - *arg3
float xmm2_2 = arg2[1] f- arg3[1]
int32_t __saved_ebp
float xmm0_3 = sub_4ac580(&__saved_ebp, xmm1_1 * xmm1_1 + xmm2_2 * xmm2_2)

if (xmm2 <= xmm0_3)
    float xmm0_4 = 1f / xmm0_3
    float var_c = arg3[1] + xmm2_2 * xmm0_4 * xmm2
    return *arg3 + xmm1_1 * xmm0_4 * xmm2

*arg5 = 1
arg2[1]
return *arg2
