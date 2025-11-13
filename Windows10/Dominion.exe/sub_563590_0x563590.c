// 函数: sub_563590
// 地址: 0x563590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t eax_1 = sub_57da30(esi, arg1)
int32_t ecx_1 = 7
void* esi_1 = esi + 0x1594

while (true)
    int32_t edx_1 = *esi_1
    
    if (edx_1 != arg1 && *(esi_1 + 4) != arg1 && edx_1 != eax_1)
        ecx_1 += 1
        esi_1 += 0x10
        
        if (ecx_1 s>= 0x48)
            break
        
        continue
    
    if (edx_1 == 0)
        break
    
    int32_t esi_2 = 7
    int32_t* eax_4 = *(eax + 4) + 0x1594
    int32_t edi_1
    
    while (true)
        if (*eax_4 == edx_1 || eax_4[1] == edx_1)
            edi_1 = *(eax + 4)
            break
        
        esi_2 += 1
        eax_4 = &eax_4[4]
        
        if (esi_2 s>= 0x48)
            return 0
        
        continue
    
    if (esi_2 == 0)
        break
    
    if (esi_2 - 7 u> 0x41)
        sub_591930()
    
    if (esi_2 s>= 0x48)
        sub_591930()
    
    return *(edi_1 + esi_2 * 0x10 + 0x152c)

return 0
