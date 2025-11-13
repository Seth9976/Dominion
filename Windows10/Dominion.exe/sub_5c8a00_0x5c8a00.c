// 函数: sub_5c8a00
// 地址: 0x5c8a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t edx = arg4

if (edx == 0)
    return 

int128_t* edi = *arg3
void* eax_1 = (edx - 1) & 0xfffffffc
void* esi = 1
void* var_14 = eax_1
void* ecx = &arg3[2]
float xmm3[0x4] = *edi

if (eax_1 s> 1)
    int32_t eax_2 = *ecx
    int32_t ecx_2 = eax_2 << 4
    void* edi_1 = edi + (eax_2 << 3)
    int128_t* esi_2 = edi + eax_2 * 0xc
    eax_1 = &edi[eax_2]
    int32_t i_2 = ((var_14 - 2) u>> 2) + 1
    void* edx_7 = edi + (eax_2 << 2)
    int32_t i
    
    do
        float xmm0_2[0x4] = *esi_2
        esi_2 = &esi_2[eax_2]
        float xmm2_1[0x4] = *eax_1
        eax_1 += ecx_2
        float xmm1_1[0x4] = *edi_1
        edi_1 += ecx_2
        float xmm2_2[0x4] = _mm_add_ps(xmm2_1, xmm0_2)
        float xmm0_3[0x4] = *edx_7
        edx_7 += ecx_2
        i = i_2
        i_2 -= 1
        xmm3 = _mm_add_ps(xmm3, _mm_add_ps(xmm2_2, _mm_add_ps(xmm1_1, xmm0_3)))
    while (i != 1)
    edx = arg4
    esi = ((((var_14 - 2) u>> 2) + 1) << 2) + 1

if (esi s>= edx)
    return 

int32_t eax_4 = *ecx
void* i_3 = edx - esi
eax_1 = edi + ((eax_4 * esi) << 2)
void* i_1

do
    float xmm0_4[0x4] = *eax_1
    eax_1 += eax_4 << 2
    xmm3 = _mm_add_ps(xmm3, xmm0_4)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
