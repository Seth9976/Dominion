// 函数: sub_52c010
// 地址: 0x52c010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t eax_1 = sub_57da30(esi, 0xc13)
int32_t edx = 7
void* esi_1 = esi + 0x1594
void* i

while (true)
    int32_t ecx_1 = *esi_1
    
    if (ecx_1 != 0xc13)
        if (*(esi_1 + 4) != 0xc13 && ecx_1 != eax_1)
            edx += 1
            esi_1 += 0x10
            
            if (edx s>= 0x48)
                break
            
            continue
        
        if (ecx_1 == 0)
            break
    
    i = 7
    int32_t* eax_3 = *(eax + 4) + 0x1594
    
    do
        if (*eax_3 == ecx_1)
            goto label_52c07a
        
        if (eax_3[1] == ecx_1)
            goto label_52c07a
        
        i += 1
        eax_3 = &eax_3[4]
    while (i s< 0x48)
    
    break

i = nullptr
label_52c07a:
void* eax_4
int32_t edx_1
eax_4, edx_1 = sub_573400()
uint32_t eax_5 = sub_583f70(eax_4, edx_1, *(eax_4 + 4), 0x601, i)
int32_t edi_1 = eax_5

if (edi_1 s> 0)
    eax_5 = sub_56e9c0(1)

return sub_56cae0(eax_5, 0x3f1, i, 0x601, edi_1)
