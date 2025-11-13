// 函数: sub_66bdd0
// 地址: 0x66bdd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax = arg2
char* ecx = arg1

while (true)
    char edx = *ecx
    char temp0_1 = *eax
    bool c_1 = edx u< temp0_1
    
    if (edx == temp0_1)
        if (edx == 0)
            break
        
        edx = ecx[1]
        char temp1_1 = eax[1]
        c_1 = edx u< temp1_1
        
        if (edx == temp1_1)
            ecx = &ecx[2]
            eax = &eax[2]
            
            if (edx == 0)
                break
            
            continue
    
    return (sbb.d(eax, eax, c_1) | 1) u>> 0x1f

return 0
