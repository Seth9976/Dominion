// 函数: sub_63d7f0
// 地址: 0x63d7f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx = *arg1
char* edx = *arg2
char* const eax_1 = &data_801800
char* const esi = &data_801800

if (edx != 0)
    esi = edx

if (ecx != 0)
    eax_1 = ecx

while (true)
    ecx.b = *eax_1
    char temp1_1 = *esi
    bool c_1 = ecx.b u< temp1_1
    
    if (ecx.b == temp1_1)
        if (ecx.b == 0)
            break
        
        ecx.b = eax_1[1]
        char temp2_1 = esi[1]
        c_1 = ecx.b u< temp2_1
        
        if (ecx.b == temp2_1)
            eax_1 = &eax_1[2]
            esi = &esi[2]
            
            if (ecx.b == 0)
                break
            
            continue
    
    int32_t result
    result.b = (sbb.d(eax_1, eax_1, c_1) | 1) != 0
    return result

int32_t eax_2
eax_2.b = false
return 0
