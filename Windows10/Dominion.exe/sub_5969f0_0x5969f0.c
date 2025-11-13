// 函数: sub_5969f0
// 地址: 0x5969f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg4
int32_t eax_2 = (ebx - arg3) s>> 2
int32_t ecx = *arg3
uint32_t eax_35

if (eax_2 s<= 0x28)
    int32_t var_24_12 = *arg2
    arg4 = arg5
    
    if (sub_586690(&arg4, var_24_12, ecx) != 0)
        int32_t ecx_28 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_28
    
    eax_35 = sub_586690(&arg4, *ebx, *arg2)
    
    if (eax_35.b != 0)
        int32_t ecx_30 = *ebx
        *ebx = *arg2
        *arg2 = ecx_30
        eax_35 = sub_586690(&arg4, ecx_30, *arg3)
        
        if (eax_35.b != 0)
            int32_t ecx_32 = *arg2
            eax_35 = *arg3
            *arg2 = eax_35
            *arg3 = ecx_32
else
    int32_t ebx_2 = (eax_2 + 1) s>> 3
    int32_t* var_10 = arg5
    
    if (sub_586690(&var_10, arg3[ebx_2], ecx) != 0)
        int32_t ecx_2 = arg3[ebx_2]
        arg3[ebx_2] = *arg3
        *arg3 = ecx_2
    
    if (sub_586690(&var_10, arg3[ebx_2 * 2], arg3[ebx_2]) != 0)
        int32_t ecx_4 = arg3[ebx_2 * 2]
        arg3[ebx_2 * 2] = arg3[ebx_2]
        arg3[ebx_2] = ecx_4
        
        if (sub_586690(&var_10, ecx_4, *arg3) != 0)
            int32_t ecx_6 = arg3[ebx_2]
            arg3[ebx_2] = *arg3
            *arg3 = ecx_6
    
    var_10 = arg5
    int32_t* ebx_5 = arg2 - (ebx_2 << 2)
    
    if (sub_586690(&var_10, *arg2, *ebx_5) != 0)
        int32_t ecx_8 = *arg2
        *arg2 = *ebx_5
        *ebx_5 = ecx_8
    
    if (sub_586690(&var_10, arg2[ebx_2], *arg2) != 0)
        int32_t ecx_10 = arg2[ebx_2]
        arg2[ebx_2] = *arg2
        *arg2 = ecx_10
        
        if (sub_586690(&var_10, ecx_10, *ebx_5) != 0)
            int32_t ecx_12 = *arg2
            *arg2 = *ebx_5
            *ebx_5 = ecx_12
    
    int32_t* ecx_13 = arg4
    var_10 = arg5
    int32_t* ebx_7 = ecx_13 - (ebx_2 << 2)
    int32_t* ecx_14 = ecx_13 - (ebx_2 << 3)
    
    if (sub_586690(&var_10, *ebx_7, *ecx_14) != 0)
        int32_t ecx_16 = *ebx_7
        *ebx_7 = *ecx_14
        *ecx_14 = ecx_16
    
    if (sub_586690(&var_10, *arg4, *ebx_7) != 0)
        int32_t* edx_4 = arg4
        int32_t ecx_18 = *edx_4
        *edx_4 = *ebx_7
        *ebx_7 = ecx_18
        
        if (sub_586690(&var_10, ecx_18, *ecx_14) != 0)
            int32_t ecx_20 = *ebx_7
            *ebx_7 = *ecx_14
            *ecx_14 = ecx_20
    
    arg4 = arg5
    
    if (sub_586690(&arg4, *arg2, arg3[ebx_2]) != 0)
        int32_t ecx_22 = *arg2
        *arg2 = arg3[ebx_2]
        arg3[ebx_2] = ecx_22
    
    eax_35 = sub_586690(&arg4, *ebx_7, *arg2)
    
    if (eax_35.b != 0)
        int32_t ecx_24 = *ebx_7
        *ebx_7 = *arg2
        *arg2 = ecx_24
        eax_35 = sub_586690(&arg4, ecx_24, arg3[ebx_2])
        
        if (eax_35.b != 0)
            int32_t ecx_26 = *arg2
            int32_t eax_37 = arg3[ebx_2]
            *arg2 = eax_37
            arg3[ebx_2] = ecx_26
            return eax_37

return eax_35
