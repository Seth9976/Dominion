// 函数: sub_5c8af0
// 地址: 0x5c8af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr

if (arg4 == 0)
    return 

int32_t eax = *(arg3 + 0x10)
int32_t esi = *(arg3 + 8)
int32_t edi_1 = (arg4 - 1) & 0xfffffffc
int32_t edx_1 = *(arg3 + 0xc)
int32_t eax_1 = *(arg3 + 4)
float xmm4[0x4] = *(*(arg3 + 4) + ((*(arg3 + 0x10) * esi + edx_1) << 2))
int32_t edx_3 = arg4
float (* eax_5)[0x4] = 1
float (* var_1c)[0x4] = 1
float xmm4_1[0x4] = _mm_mul_ps(xmm4, xmm4)

if (edi_1 s> 1)
    int32_t edx_4 = *(arg3 + 4)
    int128_t* var_18_1 = edx_4 + (((*(arg3 + 0x10) + 1) * *(arg3 + 8) + *(arg3 + 0xc)) << 2)
    int128_t* var_14_1 = edx_4 + (((*(arg3 + 0x10) + 2) * *(arg3 + 8) + *(arg3 + 0xc)) << 2)
    int32_t i_3 = ((edi_1 - 2) u>> 2) + 1
    int128_t* ecx = edx_4 + (((*(arg3 + 0x10) + 3) * *(arg3 + 8) + *(arg3 + 0xc)) << 2)
    var_1c = (i_3 << 2) + 1
    int128_t* eax_27 = edx_4 + (((*(arg3 + 0x10) + 4) * *(arg3 + 8) + *(arg3 + 0xc)) << 2)
    int32_t i
    
    do
        int128_t* edx_5 = var_14_1
        float xmm1_1[0x4] = *eax_27
        var_14_1 = &var_14_1[esi]
        eax_27 = &eax_27[esi]
        float xmm3_1[0x4] = *ecx
        ecx = &ecx[esi]
        float xmm2_1[0x4] = *edx_5
        int128_t* edx_6 = var_18_1
        var_18_1 = &var_18_1[esi]
        float xmm3_2[0x4] = _mm_mul_ps(xmm3_1, xmm3_1)
        float xmm1_2[0x4] = _mm_mul_ps(xmm1_1, xmm1_1)
        float xmm2_2[0x4] = _mm_mul_ps(xmm2_1, xmm2_1)
        float xmm0_2[0x4] = *edx_6
        edx_3 = arg4
        xmm4_1 = _mm_add_ps(xmm4_1, 
            _mm_add_ps(_mm_add_ps(xmm3_2, xmm1_2), _mm_add_ps(xmm2_2, _mm_mul_ps(xmm0_2, xmm0_2))))
        i = i_3
        i_3 -= 1
    while (i != 1)
    eax_5 = var_1c

if (eax_5 s>= edx_3)
    return 

int32_t ecx_1 = *(arg3 + 8)
void* i_2 = edx_3 - var_1c
eax_5 = eax_1 + (((eax_5 + eax) * ecx_1 + edx_1) << 2)
void* i_1

do
    float xmm0_4[0x4] = *eax_5
    eax_5 = &(*eax_5)[ecx_1]
    xmm4_1 = _mm_add_ps(xmm4_1, _mm_mul_ps(xmm0_4, xmm0_4))
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
