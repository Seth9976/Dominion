// 函数: sub_52e6b0
// 地址: 0x52e6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t eax_1 = sub_57da30(esi, 0x105)
int32_t edx = 7
void* esi_1 = esi + 0x1594
void* i

while (true)
    int32_t ecx_1 = *esi_1
    
    if (ecx_1 != 0x105)
        if (*(esi_1 + 4) != 0x105 && ecx_1 != eax_1)
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
            goto label_52e727
        
        if (eax_3[1] == ecx_1)
            goto label_52e727
        
        i += 1
        eax_3 = &eax_3[4]
    while (i s< 0x48)
    
    break

i = nullptr
label_52e727:
void* eax_4 = sub_573400()
int32_t var_14 = 0
int32_t var_18 = 0xffffffff
int32_t var_1c = 0
sub_571fa0(eax_4, 0xffffffff, *(eax_4 + 4), 0x601, 8, i, nullptr)
void* eax_5 = sub_573400()
void* esi_2 = *(eax_5 + 4)
int32_t eax_6 = sub_57da30(esi_2, 0x106)
int32_t edx_1 = 7
void* esi_3 = esi_2 + 0x1594
void* i_1

while (true)
    int32_t ecx_4 = *esi_3
    
    if (ecx_4 != 0x106)
        if (*(esi_3 + 4) != 0x106 && ecx_4 != eax_6)
            edx_1 += 1
            esi_3 += 0x10
            
            if (edx_1 s>= 0x48)
                break
            
            continue
        
        if (ecx_4 == 0)
            break
    
    i_1 = 7
    int32_t* eax_8 = *(eax_5 + 4) + 0x1594
    
    do
        if (*eax_8 == ecx_4)
            goto label_52e7b7
        
        if (eax_8[1] == ecx_4)
            goto label_52e7b7
        
        i_1 += 1
        eax_8 = &eax_8[4]
    while (i_1 s< 0x48)
    
    break

i_1 = nullptr
label_52e7b7:
void* eax_9 = sub_573400()
int32_t var_14_1 = 0
int32_t var_18_1 = 0xffffffff
int32_t var_1c_1 = 0
return sub_571fa0(eax_9, 0xffffffff, *(eax_9 + 4), 0x601, 8, i_1, nullptr)
