// 函数: sub_4db650
// 地址: 0x4db650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t eax = 0
void* const eax_1
void* const ecx
void* const edi

while (true)
    if (*(eax + &data_780878) == arg1)
        int32_t eax_2 = esi * 0x10c
        ecx = eax_2 + &data_780884
        edi = eax_2 + &data_780884
        eax_1 = eax_2 + &data_780880
        break
    
    eax += 0x10c
    esi += 1
    
    if (eax u>= 0x28d4)
        ecx = &data_780884
        eax_1 = &data_780880
        edi = &data_780884
        break

int32_t i = *eax_1

if (i == 1)
label_4db6ed:
    i.b = 1
    return i

if (i == 3)
    for (i = 0; i s< 4; )
        int32_t edx_1 = *ecx
        
        if (edx_1 == 0)
            break
        
        if (edx_1 == arg2)
            goto label_4db6ed
        
        i += 1
        ecx += 4
else if (i == 5)
    int32_t esi_1 = 0
    
    while (*edi != 0)
        if (sub_4db650().b == 1)
            goto label_4db6ed
        
        esi_1 += 1
        edi += 4
        
        if (esi_1 s>= 0x40)
            i.b = 0
            return i

i.b = 0
return i
