// 函数: sub_4ac5b0
// 地址: 0x4ac5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint16_t var_c = arg3.w
float xmm2 = *arg3
float xmm1 = arg3[4]
float xmm0 = arg3[8]
float xmm4_1 = xmm2 + xmm1
float xmm3_1 = xmm4_1 + xmm0
void var_8

if (not(xmm3_1 f<= 0))
    double xmm0_1 = _mm_cvtps_pd(xmm3_1 + 1f)
    
    if (0 f> xmm0_1)
        _libm_sse2_sqrt_precise(arg4, var_c, var_8)
    else
        xmm0_1 = _mm_sqrt_sd(xmm0_1, xmm0_1)
    
    float xmm1_1 = fconvert.s(xmm0_1)
    float xmm2_1 = 0.5f / xmm1_1
    arg5[3] = xmm1_1 * 0.5f
    *arg5 = (arg3[7] f- arg3[5]) * xmm2_1
    arg5[1] = (arg3[2] f- arg3[6]) * xmm2_1
    arg5[2] = (arg3[3] f- arg3[1]) * xmm2_1
    return arg5

if (xmm1 <= xmm2)
    if (xmm0 <= xmm2)
        double xmm0_41 = _mm_cvtps_pd(xmm2 - (xmm0 + xmm1) + 1f)
        
        if (0 f> xmm0_41)
            _libm_sse2_sqrt_precise(arg4, var_c, var_8)
        else
            xmm0_41 = _mm_sqrt_sd(xmm0_41, xmm0_41)
        
        float xmm1_6 = fconvert.s(xmm0_41)
        *arg5 = xmm1_6 * 0.5f
        xmm1_6 f- 0
        arg1:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
            | (xmm1_6 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            xmm1_6 = 0.5f / xmm1_6
        
        arg5[3] = (arg3[7] f- arg3[5]) * xmm1_6
        arg5[1] = (arg3[3] f+ arg3[1]) * xmm1_6
        arg5[2] = (arg3[6] f+ arg3[2]) * xmm1_6
        return arg5
else if (not(xmm0 > xmm1))
    double xmm0_14 = _mm_cvtps_pd(xmm1 - (xmm0 + xmm2) + 1f)
    
    if (0 f> xmm0_14)
        _libm_sse2_sqrt_precise(arg4, var_c, var_8)
    else
        xmm0_14 = _mm_sqrt_sd(xmm0_14, xmm0_14)
    
    float xmm1_4 = fconvert.s(xmm0_14)
    arg5[1] = xmm1_4 * 0.5f
    xmm1_4 f- 0
    arg1:1.b = (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2
        | (xmm1_4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        xmm1_4 = 0.5f / xmm1_4
    
    arg5[3] = (arg3[2] f- arg3[6]) * xmm1_4
    arg5[2] = (arg3[7] f+ arg3[5]) * xmm1_4
    *arg5 = (arg3[3] f+ arg3[1]) * xmm1_4
    return arg5

double xmm0_28 = _mm_cvtps_pd(xmm0 - xmm4_1 + 1f)

if (0 f> xmm0_28)
    _libm_sse2_sqrt_precise(arg4, var_c, var_8)
else
    xmm0_28 = _mm_sqrt_sd(xmm0_28, xmm0_28)

float xmm1_5 = fconvert.s(xmm0_28)
arg5[2] = xmm1_5 * 0.5f
xmm1_5 f- 0
arg1:1.b =
    (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    xmm1_5 = 0.5f / xmm1_5

arg5[3] = (arg3[3] f- arg3[1]) * xmm1_5
*arg5 = (arg3[6] f+ arg3[2]) * xmm1_5
arg5[1] = (arg3[7] f+ arg3[5]) * xmm1_5
return arg5
