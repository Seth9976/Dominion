// 函数: sub_73b200
// 地址: 0x73b200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg4
int32_t eax_2 = (ebx - arg3) s>> 2
int32_t eax_35

if (eax_2 s<= 0x28)
    if (arg5(arg2, arg3) != 0)
        int32_t ecx_18 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_18
    
    eax_35 = arg5(ebx, arg2)
    
    if (eax_35.b != 0)
        int32_t ecx_19 = *ebx
        *ebx = *arg2
        *arg2 = ecx_19
        eax_35 = arg5(arg2, arg3)
        
        if (eax_35.b != 0)
            int32_t ecx_20 = *arg2
            eax_35 = *arg3
            *arg2 = eax_35
            *arg3 = ecx_20
else
    int32_t ecx_1 = (eax_2 + 1) s>> 3
    int32_t* eax_4 = &arg3[ecx_1]
    
    if (arg5(eax_4, arg3) != 0)
        int32_t ecx_2 = *eax_4
        *eax_4 = *arg3
        *arg3 = ecx_2
    
    if (arg5(&arg3[ecx_1 * 2], eax_4) != 0)
        int32_t ecx_5 = arg3[ecx_1 * 2]
        arg3[ecx_1 * 2] = *eax_4
        *eax_4 = ecx_5
        
        if (arg5(eax_4, arg3) != 0)
            int32_t ecx_6 = *eax_4
            *eax_4 = *arg3
            *arg3 = ecx_6
    
    int32_t* eax_14 = arg2 - (ecx_1 << 2)
    
    if (arg5(arg2, eax_14) != 0)
        int32_t ecx_7 = *arg2
        *arg2 = *eax_14
        *eax_14 = ecx_7
    
    if (arg5(&arg2[ecx_1], arg2) != 0)
        int32_t ecx_8 = arg2[ecx_1]
        arg2[ecx_1] = *arg2
        *arg2 = ecx_8
        
        if (arg5(arg2, eax_14) != 0)
            int32_t ecx_9 = *arg2
            *arg2 = *eax_14
            *eax_14 = ecx_9
    
    void* ebx_3 = arg4 - (ecx_1 << 2)
    void* ecx_11 = arg4 - (ecx_1 << 3)
    
    if (arg5(ebx_3, ecx_11) != 0)
        int32_t ecx_12 = *ebx_3
        *ebx_3 = *ecx_11
        *ecx_11 = ecx_12
    
    if (arg5(arg4, ebx_3) != 0)
        int32_t ecx_13 = *arg4
        *arg4 = *ebx_3
        *ebx_3 = ecx_13
        
        if (arg5(ebx_3, ecx_11) != 0)
            int32_t ecx_14 = *ebx_3
            *ebx_3 = *ecx_11
            *ecx_11 = ecx_14
    
    void* eax_32 = &arg3[ecx_1]
    
    if (arg5(arg2, eax_32) != 0)
        int32_t ecx_15 = *arg2
        *arg2 = *eax_32
        *eax_32 = ecx_15
    
    eax_35 = arg5(ebx_3, arg2)
    
    if (eax_35.b != 0)
        int32_t ecx_16 = *ebx_3
        *ebx_3 = *arg2
        *arg2 = ecx_16
        eax_35 = arg5(arg2, eax_32)
        
        if (eax_35.b != 0)
            int32_t ecx_17 = *arg2
            int32_t eax_37 = *eax_32
            *arg2 = eax_37
            *eax_32 = ecx_17
            return eax_37

return eax_35
