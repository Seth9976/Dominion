// 函数: sub_5a7460
// 地址: 0x5a7460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x1001c)
__security_cookie
float xmm4 = data_b4a5b8
float xmm5 = data_b4a5b4
void* const i = nullptr
var_4 = edx
int32_t* ebx = ecx + 4
__return_addr = nullptr
int32_t arg_c[0x4001]

do
    if (0 f>= ebx[1])
        arg_c[i] = 0xc97423f0
    else
        float xmm0_1 = ebx[-1]
        
        if (0.0250000004f > xmm0_1 || xmm0_1 > 1.97500002f)
            arg_c[i] = 0xc97423f0
        else
            float xmm2_1 = *ebx
            
            if (0.0250000004f > xmm2_1 || xmm2_1 > 0.975000024f)
                arg_c[i] = 0xc97423f0
            else
                float xmm1_1 = 0.0500000007f / (sub_4ae0b0(xmm0_1 - xmm5) + 9.99999975e-06f - xmm5)
                float xmm1_2 = 0.0500000007f / (sub_4ae0b0(xmm2_1 - xmm4) + 9.99999975e-06f - xmm4)
                double xmm0_12 = _mm_cvtps_pd(*(edx + (i << 2)))
                float var_8 = xmm1_2
                int32_t entry_ebx
                
                if (0 f> xmm0_12)
                    _libm_sse2_sqrt_precise(arg2, arg1, entry_ebx)
                else
                    xmm0_12 = _mm_sqrt_sd(xmm0_12, xmm0_12)
                int32_t edi = 0
                float xmm1_6 = var_8 + fconvert.s(xmm0_12) + xmm1_1 + xmm1_1
                var_8 = xmm1_6
                arg_c[i] = xmm1_6
                
                if (ecx s> 0)
                    float xmm0_22
                    
                    do
                        int32_t eax_4 = *(xmm1_1 i+ (edi << 2)) * 3
                        float xmm0_16 = *ebx f- *(ecx + (eax_4 << 2) + 4)
                        float xmm1_8 = ebx[-1] f- *(ecx + (eax_4 << 2))
                        edi += 1
                        float xmm1_10 = 0.100000001f / (
                            sub_4ac580(&var_4, xmm0_16 * xmm0_16 + xmm1_8 * xmm1_8)
                            + 9.99999975e-06f)
                        xmm0_22 = var_8 - xmm1_10
                        var_8 = xmm0_22
                    while (edi s< ecx)
                    
                    i = __return_addr
                    arg_c[i] = xmm0_22
                
                edx = var_4
                xmm5 = data_b4a5b4
                xmm4 = data_b4a5b8
    
    i += 1
    ebx = &ebx[3]
    __return_addr = i
while (i s< 0x4000)

uint32_t result = sub_5ac8c0(&arg_c)
CookieCheckFunction(result)
return result
