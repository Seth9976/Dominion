// 函数: sub_56d6b0
// 地址: 0x56d6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_56b780()
void* eax_1 = sub_573400()
void* esi = *(eax_1 + 4)
int32_t eax_2 = sub_57da30(esi, eax)
int32_t edx_1 = 7
void* ecx_1 = esi + 0x1594
int32_t i

while (true)
    int32_t esi_1 = *ecx_1
    
    if (esi_1 != eax && *(ecx_1 + 4) != eax && esi_1 != eax_2)
        edx_1 += 1
        ecx_1 += 0x10
        
        if (edx_1 s>= 0x48)
            break
        
        continue
    
    if (esi_1 == 0)
        break
    
    i = 7
    int32_t* eax_4 = *(eax_1 + 4) + 0x1594
    
    do
        if (*eax_4 == esi_1)
            goto label_56d719
        
        if (eax_4[1] == esi_1)
            goto label_56d719
        
        i += 1
        eax_4 = &eax_4[4]
    while (i s< 0x48)
    
    break

i = 0
label_56d719:
void* eax_5
int32_t edx_2
eax_5, edx_2 = sub_573400()
return sub_583f70(eax_5, edx_2, *(eax_5 + 4), 0x601, i)
