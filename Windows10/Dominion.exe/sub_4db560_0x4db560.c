// 函数: sub_4db560
// 地址: 0x4db560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t eax = 0
void* const eax_1
void* const ecx
void* const edi

while (true)
    if (*(eax + &data_780878) == arg1)
        int32_t eax_2 = esi * 0x10c
        edi = eax_2 + &data_780884
        ecx = eax_2 + &data_78087c
        eax_1 = eax_2 + &data_780880
        break
    
    eax += 0x10c
    esi += 1
    
    if (eax u>= 0x28d4)
        edi = &data_780884
        ecx = &data_78087c
        eax_1 = &data_780880
        break

int32_t result = *eax_1

if (result == 1 || *ecx == arg2)
label_4db5e2:
    result.b = 1
    return result

if (result == 5)
    int32_t esi_1 = 0
    
    while (*edi != 0)
        if (sub_4db560().b == 1)
            goto label_4db5e2
        
        esi_1 += 1
        edi += 4
        
        if (esi_1 s>= 0x40)
            break

result.b = 0
return result
