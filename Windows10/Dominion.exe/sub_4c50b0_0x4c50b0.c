// 函数: sub_4c50b0
// 地址: 0x4c50b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
int32_t var_14 = 0xffffffff
*(eax + 0x18bc) = sub_4c4f20
int32_t var_1c = 0xffffffff
sub_666380(sub_666380(eax, &data_8dbed8, arg1, &data_8db750), &data_8dbee4, arg1, &data_8db754)
void* eax_2 = data_8db758
char* const esi = &data_801800
void* ecx_3 = &data_801800

if (eax_2 != 0)
    ecx_3 = eax_2

char* const eax_3 = &data_801800
int32_t eax_5

while (true)
    char edx_1 = *ecx_3
    char temp0_1 = *eax_3
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            eax_5 = 0
            break
        
        edx_1 = *(ecx_3 + 1)
        char temp1_1 = eax_3[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_3 += 2
            eax_3 = &eax_3[2]
            
            if (edx_1 != 0)
                continue
            
            eax_5 = 0
            break
    
    eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
    break

if (eax_5 != 0)
    int32_t var_14_1 = 0xffffffff
    sub_666380(eax_5, &data_8dbef0, arg1, &data_8db758)

char* eax_6 = data_8db75c

if (eax_6 != 0)
    esi = eax_6

char* const eax_7 = &data_801800
void* const result

while (true)
    ecx_3.b = *esi
    char temp2_1 = *eax_7
    bool c_2 = ecx_3.b u< temp2_1
    
    if (ecx_3.b == temp2_1)
        if (ecx_3.b == 0)
            result = nullptr
            break
        
        ecx_3.b = esi[1]
        char temp3_1 = eax_7[1]
        c_2 = ecx_3.b u< temp3_1
        
        if (ecx_3.b == temp3_1)
            esi = &esi[2]
            eax_7 = &eax_7[2]
            
            if (ecx_3.b != 0)
                continue
            
            result = nullptr
            break
    
    result = sbb.d(eax_7, eax_7, c_2) | 1
    break

if (result == 0)
    return result

int32_t var_14_2 = 0xffffffff
return sub_666380(result, &data_8dbefc, arg1, &data_8db75c)
