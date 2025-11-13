// 函数: sub_7145c0
// 地址: 0x7145c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t* i = nullptr
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* esi = *(arg1 + 0x70)
int32_t* eax

if (*(arg1 + 0x68) s> 0)
    do
        void* ecx = *(esi + (i << 2))
        i += 1
        int128_t xmm0_1 = *(ecx + 0x14)
        *(ecx + 0x40) = *(ecx + 0x24)
        *(ecx + 0x44) = *(ecx + 0x28)
        eax = *(ecx + 0x2c)
        *(ecx + 0x30) = xmm0_1
        *(ecx + 0x48) = eax
        *(ecx + 0x4c) = 1
    while (i s< *(arg1 + 0x68))

int32_t i_1 = 0

if (*(arg1 + 0x5c) s<= 0)
    return 

do
    int32_t ecx_1 = *(arg1 + 0x64)
    eax = *(ecx_1 + (i_1 << 3))
    
    switch (eax)
        case nullptr
            int32_t* ecx_2 = *(ecx_1 + (i_1 << 3) + 4)
            eax, i =
                sub_710240(eax, i, ecx_2, esi, i_1, ecx_2[5], ecx_2[6], ecx_2[7], *(ecx_2 + 0x20))
        case 1
            i = *(ecx_1 + (i_1 << 3) + 4)
            int32_t eax_3 = i[1]
            int128_t var_1c
            
            if (eax_3 == 1)
                void* eax_6 = *i
                esi = i[3]
                var_1c:0xc.d = ecx_1
                var_1c:0xc.d = i[7]
                var_1c:8.d = *(eax_6 + 0x24)
                var_1c:4.d = i[6]
                eax, i = sub_756270(eax_6, i[5], *i[2], esi, i_1, *(esi + 0x58), *(esi + 0x64))
                int16_t top = top - 1
                unimplemented  {call 0x756270}
            else if (eax_3 == 2)
                void* eax_5 = i[3]
                int32_t** ecx_3 = i[2]
                var_1c:0xc.d = i[7]
                var_1c:8.d = i[8]
                var_1c:4.d = i[6]
                var_1c.d = i[4]
                eax, i = sub_7564e0(eax_5, ecx_3[1], *ecx_3, esi, i_1, *(eax_5 + 0x58), 
                    *(eax_5 + 0x64), var_1c)
        case 2
            eax, i = sub_7532e0(*(ecx_1 + (i_1 << 3) + 4), esi, i_1)
        case 3
            eax, i = sub_756060(*(ecx_1 + (i_1 << 3) + 4))
    
    i_1 += 1
while (i_1 s< *(arg1 + 0x5c))
