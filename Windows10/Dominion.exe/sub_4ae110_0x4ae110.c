// 函数: sub_4ae110
// 地址: 0x4ae110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm3 = arg2
uint16_t var_14

switch (arg1)
    case 6
        if (0.5f < xmm3)
            float xmm3_9 = xmm3 - 0.5f
            float xmm3_10 = xmm3_9 + xmm3_9
            xmm3 = xmm3_10 * xmm3_10 * 0.5f + 0.5f
        else
            float xmm3_6 = xmm3 + xmm3
            xmm3 = (2f - xmm3_6) * xmm3_6 * 0.5f
        
        if (0.5f < xmm3)
            goto label_4ae23f
        
        float xmm3_13 = xmm3 + xmm3
        float var_18_1 = (2f - xmm3_13) * xmm3_13 * 0.5f
        return 
    case 7
        if (not(0.5f < xmm3))
            float xmm3_20 = xmm3 + xmm3
            float var_18_3 = (2f - xmm3_20) * xmm3_20 * 0.5f
            return 
        
    label_4ae23f:
        float xmm3_16 = xmm3 - 0.5f
        float xmm3_17 = xmm3_16 + xmm3_16
        float var_18_2 = xmm3_17 * xmm3_17 * 0.5f + 0.5f
        return 
    case 0xa
        sub_4ae0b0(1f - (xmm3 + xmm3))
        return 
    case 0xb
        sub_4ae0b0(1f - (xmm3 + xmm3))
        return 
    case 0xc
        sub_4ae0b0(1f - (xmm3 + xmm3))
        return 
    case 0xd
        sub_4ae0b0(1f - (xmm3 + xmm3))
        return 
    case 0xe
        _libm_sse2_sin_precise(xmm3, var_14, arg4)
        return 
    case 0xf
        _mm_cvtps_pd((3f - (arg2 + xmm3)) * xmm3 * xmm3 * 6.28318548f)
        _libm_sse2_sin_precise(xmm3, var_14, arg4)
        return 
    case 0x13
        return 
    case 0x14
        _libm_sse2_sin_precise(xmm3, var_14, arg4)
        _mm_cvtps_pd(xmm3 * -10f)
        _libm_sse2_pow_precise()
        return 
    case 0x15
        _libm_sse2_sin_precise(xmm3, var_14, arg4)
        _mm_cvtps_pd(xmm3 * -25f)
        _libm_sse2_pow_precise()
        return 
    case 0x18
        _libm_sse2_cos_precise(xmm3, var_14, arg4)
        return 
    case 0x1c
        return 

double* eax
sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\MathFunctions.cpp", 0x25b, 
    "XCurveEvalNormal")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
