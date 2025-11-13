// 函数: sub_756270
// 地址: 0x756270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg3[2]

if (arg3[0x13] == 0)
    sub_710b10(arg3, arg3)

float xmm4 = *(edi + 0x50)
float xmm2 = *(edi + 0x54)
float xmm5 = *(edi + 0x60)
float xmm3 = *(edi + 0x5c)
float xmm6_1 = arg6 f- *(edi + 0x58)
float xmm7_1 = arg7 f- *(edi + 0x64)
float xmm0_2 = 1f / (xmm4 * xmm5 - xmm2 * xmm3)
float xmm4_4[0x2] = (xmm4 * xmm7_1 - xmm3 * xmm6_1) * xmm0_2 f- arg3[0xd]
float xmm5_4[0x2] = (xmm5 * xmm6_1 - xmm2 * xmm7_1) * xmm0_2 f- arg3[0xc]
float var_c = xmm5_4
float var_18
var_18.q = _mm_cvtps_pd(xmm4_4)
long double result = fconvert.t(var_18.q)
float var_10 = xmm4_4
var_18.q = _mm_cvtps_pd(xmm5_4)
uint32_t eax
int32_t edx
eax, edx = _CIatan2()
float xmm2_2 = arg3[0xf]
var_18.q = fconvert.d(fconvert.t(var_18.q))
float var_18_1 = arg3[0xf]
float xmm1_7 = _mm_cvtpd_ps(zx.o(var_18.q)) * 57.2957764f f- arg3[0x11] f- arg3[0xe]
float var_24 = xmm1_7

if (not(0f <= xmm2_2))
    xmm1_7 = xmm1_7 + 180f
    var_24 = xmm1_7

if (not(xmm1_7 <= 180f))
    xmm1_7 = xmm1_7 - 360f
    var_24 = xmm1_7
else if (not(-180f <= xmm1_7))
    xmm1_7 = xmm1_7 + 360f
    var_24 = xmm1_7

float var_1c_1 = arg3[0x10]
float xmm3_2

if (arg2 != 0 || arg8 != 0)
    eax = *arg3
    float xmm0_8 = xmm2_2 f* *(eax + 0xc)
    double xmm0_12 = _mm_cvtps_pd(var_10 * var_10 + var_c * var_c)
    int32_t entry_ebx
    
    if (0 f> xmm0_12)
        eax, edx = _libm_sse2_sqrt_precise(arg5, arg4, entry_ebx)
    else
        xmm0_12 = _mm_sqrt_sd(xmm0_12, xmm0_12)
    float xmm1_10 = fconvert.s(xmm0_12)
    
    if ((arg2 == 0 || not(xmm0_8 > xmm1_10))
            && (arg8 == 0 || xmm1_10 <= xmm0_8 || xmm0_8 <= 9.99999975e-05f))
        xmm1_7 = var_24
        xmm3_2 = arg10
    else
        xmm3_2 = arg10
        float xmm1_14 = (xmm1_10 / xmm0_8 - 1f) * xmm3_2 + 1f
        var_18_1 = xmm1_14 f* arg3[0xf]
        
        if (arg9 != 0)
            var_1c_1 = arg3[0x10] f* xmm1_14
        
        xmm1_7 = var_24
else
    xmm3_2 = arg10

sub_710240(eax, edx, arg3, arg3, arg8, arg3[0xc], arg3[0xd], xmm3_2 * xmm1_7 f+ arg3[0xe], 
    var_18_1, var_1c_1, arg3[0x11], arg3[0x12])
return result
