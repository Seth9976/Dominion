// 函数: sub_52db30
// 地址: 0x52db30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t eax = sub_56b490(0, 0x28)
void* eax_1 = sub_573400()
void* esi = *(eax_1 + 4)
int32_t eax_2 = sub_57da30(esi, eax)
int32_t edx_1 = 7
void* ecx_2 = esi + 0x1594
void* i

while (true)
    int32_t esi_1 = *ecx_2
    
    if (esi_1 != eax && *(ecx_2 + 4) != eax && esi_1 != eax_2)
        edx_1 += 1
        ecx_2 += 0x10
        
        if (edx_1 s>= 0x48)
            break
        
        continue
    
    if (esi_1 == 0)
        break
    
    i = 7
    int32_t* eax_4 = *(eax_1 + 4) + 0x1594
    
    do
        if (*eax_4 == esi_1)
            goto label_52dba7
        
        if (eax_4[1] == esi_1)
            goto label_52dba7
        
        i += 1
        eax_4 = &eax_4[4]
    while (i s< 0x48)
    
    break

i = nullptr
label_52dba7:
void* eax_5 = sub_573400()
int32_t var_1c = 0x10
int32_t var_20 = *(eax_5 + 0xc)
int32_t var_24 = 0
return sub_571fa0(eax_5, 0xffffffff, *(eax_5 + 4), 0xc00, 2, i, nullptr)
