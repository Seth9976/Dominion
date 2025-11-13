// 函数: sub_596480
// 地址: 0x596480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = (arg4 - arg3) s>> 2
int32_t var_20 = *arg3
int32_t eax_36

if (eax_2 s<= 0x28)
    if (arg5(*arg2, var_20) != 0)
        int32_t eax_40 = *arg2
        *arg2 = *arg3
        *arg3 = eax_40
    
    eax_36 = arg5(*arg4, *arg2)
    
    if (eax_36.b != 0)
        int32_t eax_41 = *arg4
        *arg4 = *arg2
        *arg2 = eax_41
        eax_36 = arg5(eax_41, *arg3)
        
        if (eax_36.b != 0)
            eax_36 = *arg2
            *arg2 = *arg3
            *arg3 = eax_36
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    
    if (arg5(arg3[eax_4], var_20) != 0)
        int32_t eax_7 = arg3[eax_4]
        arg3[eax_4] = *arg3
        *arg3 = eax_7
    
    if (arg5(arg3[eax_4 * 2], arg3[eax_4]) != 0)
        int32_t eax_10 = arg3[eax_4 * 2]
        arg3[eax_4 * 2] = arg3[eax_4]
        arg3[eax_4] = eax_10
        
        if (arg5(eax_10, *arg3) != 0)
            int32_t eax_13 = arg3[eax_4]
            arg3[eax_4] = *arg3
            *arg3 = eax_13
    
    int32_t* eax_15 = arg2 - (eax_4 << 2)
    
    if (arg5(*arg2, *eax_15) != 0)
        int32_t eax_17 = *arg2
        *arg2 = *eax_15
        *eax_15 = eax_17
    
    if (arg5(arg2[eax_4], *arg2) != 0)
        int32_t eax_20 = arg2[eax_4]
        arg2[eax_4] = *arg2
        *arg2 = eax_20
        
        if (arg5(eax_20, *eax_15) != 0)
            int32_t eax_22 = *arg2
            *arg2 = *eax_15
            *eax_15 = eax_22
    
    void* ebx_3 = arg4 - (eax_4 << 2)
    void* ecx_10 = arg4 - (eax_4 << 3)
    
    if (arg5(*ebx_3, *ecx_10) != 0)
        int32_t eax_26 = *ebx_3
        *ebx_3 = *ecx_10
        *ecx_10 = eax_26
    
    if (arg5(*arg4, *ebx_3) != 0)
        int32_t eax_29 = *arg4
        *arg4 = *ebx_3
        *ebx_3 = eax_29
        
        if (arg5(eax_29, *ecx_10) != 0)
            int32_t eax_31 = *ebx_3
            *ebx_3 = *ecx_10
            *ecx_10 = eax_31
    
    void* eax_33 = &arg3[eax_4]
    
    if (arg5(*arg2, arg3[eax_4]) != 0)
        int32_t eax_35 = *arg2
        *arg2 = *eax_33
        *eax_33 = eax_35
    
    eax_36 = arg5(*ebx_3, *arg2)
    
    if (eax_36.b != 0)
        int32_t eax_37 = *ebx_3
        *ebx_3 = *arg2
        *arg2 = eax_37
        eax_36 = arg5(eax_37, *eax_33)
        
        if (eax_36.b != 0)
            int32_t eax_38 = *arg2
            *arg2 = *eax_33
            *eax_33 = eax_38
            return eax_38

return eax_36
