// 函数: sub_596750
// 地址: 0x596750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = (arg4 - arg3) s>> 4
char result

if (eax_2 s<= 0x28)
    if (arg5(arg2, arg3) != 0)
        int128_t xmm1_13 = *arg2
        *arg2 = *arg3
        *arg3 = xmm1_13
    
    result = arg5(arg4, arg2)
    
    if (result != 0)
        int128_t xmm1_14 = *arg4
        *arg4 = *arg2
        *arg2 = xmm1_14
        result = arg5(arg2, arg3)
        
        if (result != 0)
            int128_t xmm1_15 = *arg2
            *arg2 = *arg3
            *arg3 = xmm1_15
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t eax_5 = eax_4 << 4
    int128_t* ebx_1 = &arg3[eax_4]
    
    if (arg5(ebx_1, arg3) != 0)
        int128_t xmm1_1 = *ebx_1
        *ebx_1 = *arg3
        *arg3 = xmm1_1
    
    if (arg5(&arg3[eax_4 * 2], ebx_1) != 0)
        int128_t xmm1_2 = arg3[eax_4 * 2]
        arg3[eax_4 * 2] = *ebx_1
        *ebx_1 = xmm1_2
        
        if (arg5(ebx_1, arg3) != 0)
            int128_t xmm1_3 = *ebx_1
            *ebx_1 = *arg3
            *arg3 = xmm1_3
    
    int128_t* eax_12 = &arg2[eax_4]
    int128_t* eax_14 = arg2 - eax_5
    
    if (arg5(arg2, eax_14) != 0)
        int128_t xmm1_4 = *arg2
        *arg2 = *eax_14
        *eax_14 = xmm1_4
    
    if (arg5(eax_12, arg2) != 0)
        int128_t xmm1_5 = *eax_12
        *eax_12 = *arg2
        *arg2 = xmm1_5
        
        if (arg5(arg2, eax_14) != 0)
            int128_t xmm1_6 = *arg2
            *arg2 = *eax_14
            *eax_14 = xmm1_6
    
    void* eax_22 = arg4 - (eax_4 << 5)
    int128_t* edi_3 = arg4 - eax_5
    int128_t* var_c_2 = eax_22
    
    if (arg5(edi_3, eax_22) != 0)
        int128_t xmm1_7 = *edi_3
        *edi_3 = *var_c_2
        *var_c_2 = xmm1_7
    
    if (arg5(arg4, edi_3) != 0)
        int128_t xmm1_8 = *arg4
        *arg4 = *edi_3
        *edi_3 = xmm1_8
        
        if (arg5(edi_3, var_c_2) != 0)
            int128_t xmm1_9 = *edi_3
            *edi_3 = *var_c_2
            *var_c_2 = xmm1_9
    
    if (arg5(arg2, ebx_1) != 0)
        int128_t xmm1_10 = *arg2
        *arg2 = *ebx_1
        *ebx_1 = xmm1_10
    
    result = arg5(edi_3, arg2)
    
    if (result != 0)
        int128_t xmm1_11 = *edi_3
        *edi_3 = *arg2
        *arg2 = xmm1_11
        result = arg5(arg2, ebx_1)
        
        if (result != 0)
            int128_t xmm1_12 = *arg2
            *arg2 = *ebx_1
            *ebx_1 = xmm1_12

return result
