// 函数: sub_707be0
// 地址: 0x707be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (isspace(zx.d(**arg1)) != 0)
    int32_t i
    
    do
        void* eax_3 = *arg1
        
        if (eax_3 u>= arg1[1])
            break
        
        *arg1 = eax_3 + 1
        i = isspace(zx.d(*(eax_3 + 1)))
    while (i != 0)

int32_t edx = *arg1
void* result = arg1[1]

if (edx != result)
    char* eax_6 = result - 1
    arg1[1] = eax_6
    
    if (*eax_6 == 0xd)
        char* ecx = eax_6
        
        do
            eax_6 = ecx
            
            if (ecx u< edx)
                break
            
            eax_6 = &ecx[0xffffffff]
            arg1[1] = eax_6
            ecx = eax_6
        while (*eax_6 == 0xd)
    
    result = &eax_6[1]
    arg1[1] = result

return result
