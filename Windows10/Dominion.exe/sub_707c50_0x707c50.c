// 函数: sub_707c50
// 地址: 0x707c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg3

if (eax != arg2)
    *arg4 = eax
    int32_t eax_1 = *arg3
    
    if (eax_1 != arg2)
        int32_t ecx = eax_1
        
        do
            eax_1 = ecx
            
            if (*ecx == 0xa)
                break
            
            eax_1 = ecx + 1
            *arg3 = eax_1
            ecx = eax_1
        while (eax_1 != arg2)
    
    arg4[1] = eax_1
    sub_707be0(arg4)
    int32_t eax_2 = *arg3
    
    if (eax_2 != arg2)
        *arg3 = eax_2 + 1

char* i = *arg4
arg3.b = *i

while (i != arg4[1])
    i = &i[1]
    
    if (arg3.b == 0x3a)
        *arg4 = i
        sub_707be0(arg4)
        return 1
    
    arg3.b = *i

return 0
