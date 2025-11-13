// 函数: sub_72d7d0
// 地址: 0x72d7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float* var_8 = arg3
arg1 = arg2[3]
uint32_t result

if (arg1 == 0)
    result = arg5 - 1
    
    switch (result)
        case 0
            *arg3 = 0f
        case 1
            arg3[1] = 0x3f800000
            *arg3 = 0f
        case 2
            goto label_72d8b7
        case 3
            arg3[3] = 0x3f800000
        label_72d8b7:
            arg3[2] = 0
            arg3[1] = 0
            *arg3 = 0f
else
    ldexp(1.0, zx.d(arg1) - 0x88)
    float var_8_1 = fconvert.s(arg4)
    
    if (arg5 s> 2)
        *arg3 = _mm_cvtepi32_ps(zx.o(*arg2)) * var_8_1
        arg3[1] = _mm_cvtepi32_ps(zx.o(arg2[1])) * var_8_1
        result = zx.d(arg2[2])
        arg3[2] = _mm_cvtepi32_ps(zx.o(result)) * var_8_1
        
        if (arg5 == 4)
            arg3[3] = 0x3f800000
    else
        result = zx.d(*arg2)
        *arg3 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[2]) + zx.d(arg2[1]) + result)) * var_8_1 / 3f
        
        if (arg5 == 2)
            arg3[1] = 0x3f800000

return result
