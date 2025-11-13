// 函数: sub_5c8ce0
// 地址: 0x5c8ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t edx = arg4

if (edx == 0)
    return 

int32_t esi_1 = (edx - 1) & 0xfffffffc
void* edi = &arg3[2]
void* var_2c = edi
float xmm3[0x4] = **arg3
void* eax_1 = 1
void* var_18 = 1

if (esi_1 s> 1)
    int32_t eax_2 = *edi
    int32_t edx_1 = *arg3
    void* var_24_1 = edx_1 + (eax_2 << 2)
    int128_t* var_14_1 = edx_1 + (eax_2 << 3)
    void* var_20_1 = edx_1 + eax_2 * 0xc
    int32_t i_3 = ((esi_1 - 2) u>> 2) + 1
    var_18 = (i_3 << 2) + 1
    int128_t* eax_8 = *arg3 + (eax_2 << 4)
    int32_t i
    
    do
        int128_t* edi_4 = var_14_1
        int128_t* edx_3 = var_20_1
        float xmm2_1[0x4] = *eax_8
        var_14_1 = &var_14_1[eax_2]
        eax_8 = &eax_8[eax_2]
        int128_t* edi_5 = var_24_1
        var_20_1 = &edx_3[eax_2]
        edx = arg4
        var_24_1 = &edi_5[eax_2]
        edi = var_2c
        xmm3 = _mm_max_ps(_mm_max_ps(_mm_max_ps(xmm2_1, *edx_3), _mm_max_ps(*edi_4, *edi_5)), xmm3)
        i = i_3
        i_3 -= 1
    while (i != 1)
    eax_1 = var_18

if (eax_1 s>= edx)
    return 

int32_t eax_9 = *edi
float xmm0_4[0x4] = xmm3
void* i_2 = arg4 - var_18
eax_1 = *arg3 + ((eax_9 * var_18) << 2)
void* i_1

do
    float xmm3_1[0x4] = *eax_1
    eax_1 += eax_9 << 2
    xmm0_4 = _mm_max_ps(xmm3_1, xmm0_4)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
