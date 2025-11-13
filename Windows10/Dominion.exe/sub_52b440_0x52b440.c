// 函数: sub_52b440
// 地址: 0x52b440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t eax_1 = sub_57da30(esi, 0xc0f)
int32_t i = 7
void* esi_1 = esi + 0x1598

do
    if ((*(esi_1 + 8) & 2) == 0)
        int32_t j = *(esi_1 - 4)
        
        if (j == 0xc0f)
        label_52b496:
            int32_t esi_2 = 7
            int32_t* ecx_2 = *(eax + 4) + 0x1594
            
            while (*ecx_2 != j)
                if (ecx_2[1] == j)
                    break
                
                esi_2 += 1
                ecx_2 = &ecx_2[4]
                
                if (esi_2 s>= 0x48)
                    esi_2 = 0
                    break
            
            if (esi_2 == 0)
                break
            
            void* eax_3
            int32_t edx_1
            eax_3, edx_1 = sub_573400()
            int32_t eax_4 = sub_583f70(eax_3, edx_1, *(eax_3 + 4), 0x601, esi_2)
            
            if (eax_4 s>= 4)
                return 0
            
            return eax_4 + 1
        
        if (*esi_1 == 0xc0f || j == eax_1)
            if (j == 0)
                break
            
            goto label_52b496
    
    i += 1
    esi_1 += 0x10
while (i s< 0x48)

return 0
