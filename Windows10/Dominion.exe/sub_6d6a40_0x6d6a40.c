// 函数: sub_6d6a40
// 地址: 0x6d6a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2_4 = (arg6 + arg6 + arg4 + arg8) * 0.25f
float xmm3_4 = (arg7 + arg7 + arg5 + arg9) * 0.25f
float var_14 = xmm2_4
float xmm1_4 = (arg4 + arg8) * 0.5f - xmm2_4
float var_10 = xmm3_4
float xmm0_4 = (arg5 + arg9) * 0.5f - xmm3_4

if (arg11 s<= 0x10)
    if (not(xmm0_4 * xmm0_4 + xmm1_4 * xmm1_4 f<= arg10))
        sub_6d6a40((arg4 + arg6) * 0.5f, (arg5 + arg7) * 0.5f, xmm2_4, xmm3_4, arg10, arg11 + 1)
        sub_6d6a40((arg6 + arg8) * 0.5f, (arg7 + arg9) * 0.5f, arg8, arg9, arg10, arg11 + 1)
        return 1
    
    int32_t eax_1 = *arg2
    
    if (arg3 != 0)
        *(arg3 + (eax_1 << 3)) = arg8
        *(arg3 + (eax_1 << 3) + 4) = arg9
    
    *arg2 = eax_1 + 1

return 1
