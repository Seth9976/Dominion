// 函数: sub_5a59e0
// 地址: 0x5a59e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg6 + 0x175fd0
sub_5a5840(arg6, arg6 + 0x185fd0)
void* ecx = arg3
*(arg6 + 0x175fcc) = 1
int32_t i = 0
int32_t* ebx = ecx + 4
int32_t* edx_1

do
    int32_t eax_1 = *(edi + 0x10000)
    
    if (eax_1 s< 0)
        edx_1 = arg2
    else
        float xmm2_1 = ebx[1]
        float var_14_1 = 0f
        
        if (not(xmm2_1 <= 0f))
            int32_t eax_2 = eax_1 * 3
            float xmm1_2 = *ebx f- *(ecx + (eax_2 << 2) + 4)
            float xmm0_2 = ebx[-1] f- *(ecx + (eax_2 << 2))
            float xmm2_2 = xmm2_1 f- *(ecx + (eax_2 << 2) + 8)
            int32_t __saved_ebp
            var_14_1 = xmm2_2
                / sub_4ac580(&__saved_ebp, xmm0_2 * xmm0_2 + xmm1_2 * xmm1_2 + xmm2_2 * xmm2_2)
        
        double xmm0_8 = _mm_cvtps_pd(*edi)
        int32_t entry_ebx
        
        if (0 f> xmm0_8)
            _libm_sse2_sqrt_precise(arg5, arg4, entry_ebx)
        else
            xmm0_8 = _mm_sqrt_sd(xmm0_8, xmm0_8)
        edx_1 = arg2
        ecx = arg3
        edx_1[i] =
            _mm_min_ss(0x43480000, fconvert.s(xmm0_8) * var_14_1 * 1000f + var_14_1 * var_14_1)
    
    i += 1
    ebx = &ebx[3]
    edi += 4
while (i s< 0x4000)

float xmm3 = *edx_1
void* eax_3 = &edx_1[2]
int32_t i_3 = 0x1555
int32_t i_1

do
    int32_t xmm0_12 = *(eax_3 - 4)
    eax_3 += 0xc
    int32_t xmm1_12 = *(eax_3 - 0xc)
    int32_t xmm0_13 = _mm_max_ss(xmm0_12, xmm3)
    xmm3 = _mm_max_ss(*(eax_3 - 8), _mm_max_ss(xmm1_12, xmm0_13))
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
void* result = &edx_1[8]
float xmm2_3[0x4] = 1f / xmm3
int32_t i_4 = 0x400
float xmm2_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
int32_t i_2

do
    result += 0x40
    *(result - 0x60) = _mm_mul_ps(xmm2_4, *(result - 0x60))
    *(result - 0x50) = _mm_mul_ps(*(result - 0x50), xmm2_4)
    *(result - 0x40) = _mm_mul_ps(xmm2_4, *(result - 0x40))
    *(result - 0x30) = _mm_mul_ps(xmm2_4, *(result - 0x30))
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
return result
