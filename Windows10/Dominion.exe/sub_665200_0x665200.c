// 函数: sub_665200
// 地址: 0x665200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg1

if (data_c28c60 != 0 || data_ca9a74 != 0 || data_ca9a75 != 0 || data_ca9a76 != 0 || data_ca9a77 != 0
        || eax == 0)
    return eax

int32_t ecx = *(eax + 0x10)
float xmm1[0x4] = zx.o(0)
int32_t esi = 0
void* edi_1

if (ecx s< 4)
    if (ecx s> 0)
        edi_1 = *(eax + 8)
    label_6652c8:
        eax = (esi << 4) + 4 + edi_1
        int32_t i_2 = ecx - esi
        int32_t i
        
        do
            float xmm0_9 = *(eax + 4) f+ *eax
            eax += 0x10
            xmm1 = _mm_max_ss(xmm0_9, xmm1)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    return eax

edi_1 = *(eax + 8)
int32_t i_3 = ((ecx - 4) u>> 2) + 1
float* eax_1 = edi_1 + 4
esi = i_3 << 2
int32_t i_1

do
    int32_t xmm0_3 = _mm_max_ss(eax_1[1] + *eax_1, xmm1)
    int32_t xmm1_3 = _mm_max_ss(eax_1[5] + eax_1[4], xmm0_3)
    int32_t xmm0_6 = _mm_max_ss(eax_1[9] + eax_1[8], xmm1_3)
    float xmm1_5 = eax_1[0xd] + eax_1[0xc]
    eax_1 = &eax_1[0x10]
    xmm1 = _mm_max_ss(xmm1_5, xmm0_6)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)

if (esi s>= ecx)
    return eax_1

goto label_6652c8
