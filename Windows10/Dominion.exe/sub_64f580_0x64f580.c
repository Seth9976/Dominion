// 函数: sub_64f580
// 地址: 0x64f580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx = *arg2
char* const eax_1 = &data_801800
char* const edx = &data_801800

if (ecx != 0)
    edx = ecx

char* ecx_2 = *arg1

if (ecx_2 != 0)
    eax_1 = ecx_2

while (true)
    ecx_2.b = *eax_1
    char temp0_1 = *edx
    bool c_1 = ecx_2.b u< temp0_1
    
    if (ecx_2.b == temp0_1)
        if (ecx_2.b == 0)
            break
        
        ecx_2.b = eax_1[1]
        char temp1_1 = edx[1]
        c_1 = ecx_2.b u< temp1_1
        
        if (ecx_2.b == temp1_1)
            eax_1 = &eax_1[2]
            edx = &edx[2]
            
            if (ecx_2.b == 0)
                break
            
            continue
    
    return (sbb.d(eax_1, eax_1, c_1) | 1) u>> 0x1f

return 0
