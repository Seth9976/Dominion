// 函数: sub_5eaa50
// 地址: 0x5eaa50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, 0x18)
char* ecx_2 = *(sub_571b30(arg2, 0x18) + 0x58)
char* eax_2 = *(eax + 0x58)

while (true)
    char edx_1 = *eax_2
    char temp0_1 = *ecx_2
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            break
        
        edx_1 = eax_2[1]
        char temp1_1 = ecx_2[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            eax_2 = &eax_2[2]
            ecx_2 = &ecx_2[2]
            
            if (edx_1 == 0)
                break
            
            continue
    
    return (sbb.d(eax_2, eax_2, c_1) | 1) u>> 0x1f

return 0
