// 函数: sub_4d5ab0
// 地址: 0x4d5ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = (arg4 - arg3) s>> 2
int32_t ecx = *arg3
int32_t eax_40

if (eax_2 s<= 0x28)
    if (arg5(*arg2, ecx) != 0)
        int32_t ecx_15 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_15
    
    eax_40 = arg5(*arg4, *arg2)
    
    if (eax_40.b != 0)
        int32_t ecx_16 = *arg4
        *arg4 = *arg2
        *arg2 = ecx_16
        eax_40 = arg5(ecx_16, *arg3)
        
        if (eax_40.b != 0)
            int32_t ecx_17 = *arg2
            eax_40 = *arg3
            *arg2 = eax_40
            *arg3 = ecx_17
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t eax_5 = eax_4 << 2
    
    if (arg5(arg3[eax_4], ecx) != 0)
        int32_t ecx_1 = arg3[eax_4]
        arg3[eax_4] = *arg3
        *arg3 = ecx_1
    
    int32_t edx_2
    
    if (arg5(arg3[eax_4 * 2], arg3[eax_4]) == 0)
        edx_2 = eax_5
    else
        int32_t ecx_2 = arg3[eax_4 * 2]
        arg3[eax_4 * 2] = arg3[eax_4]
        arg3[eax_4] = ecx_2
        edx_2 = eax_5
        
        if (arg5(ecx_2, *arg3) != 0)
            int32_t ecx_3 = *(edx_2 + arg3)
            *(edx_2 + arg3) = *arg3
            *arg3 = ecx_3
    
    int32_t* eax_17 = arg2 - edx_2
    
    if (arg5(*arg2, *eax_17) != 0)
        int32_t ecx_4 = *arg2
        *arg2 = *eax_17
        *eax_17 = ecx_4
    
    if (arg5(arg2[eax_4], *arg2) != 0)
        int32_t ecx_5 = arg2[eax_4]
        arg2[eax_4] = *arg2
        *arg2 = ecx_5
        
        if (arg5(ecx_5, *eax_17) != 0)
            int32_t ecx_6 = *arg2
            *arg2 = *eax_17
            *eax_17 = ecx_6
    
    void* ebx_3 = arg4 - (eax_4 << 2)
    void* ecx_8 = arg4 - (eax_4 << 3)
    
    if (arg5(*ebx_3, *ecx_8) != 0)
        int32_t ecx_9 = *ebx_3
        *ebx_3 = *ecx_8
        *ecx_8 = ecx_9
    
    if (arg5(*arg4, *ebx_3) != 0)
        int32_t ecx_10 = *arg4
        *arg4 = *ebx_3
        *ebx_3 = ecx_10
        
        if (arg5(ecx_10, *ecx_8) != 0)
            int32_t ecx_11 = *ebx_3
            *ebx_3 = *ecx_8
            *ecx_8 = ecx_11
    
    void* eax_37 = &arg3[eax_4]
    
    if (arg5(*arg2, arg3[eax_4]) != 0)
        int32_t ecx_12 = *arg2
        *arg2 = *eax_37
        *eax_37 = ecx_12
    
    eax_40 = arg5(*ebx_3, *arg2)
    
    if (eax_40.b != 0)
        int32_t ecx_13 = *ebx_3
        *ebx_3 = *arg2
        *arg2 = ecx_13
        eax_40 = arg5(ecx_13, *eax_37)
        
        if (eax_40.b != 0)
            int32_t ecx_14 = *arg2
            int32_t eax_42 = *eax_37
            *arg2 = eax_42
            *eax_37 = ecx_14
            return eax_42

return eax_40
