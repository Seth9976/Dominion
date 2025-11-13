// 函数: sub_6c39b0
// 地址: 0x6c39b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int32_t* ebx = arg3
int32_t* var_c = ebx
int32_t eax_2 = (esi - ebx) s>> 3
int32_t result
int32_t edx_11
int32_t* ebx_9
int32_t esi_18

if (eax_2 s<= 0x28)
    if (arg5(arg2, ebx) != 0)
        int32_t esi_19 = arg2[1]
        int32_t edx_12 = *arg2
        int32_t ecx_24 = ebx[1]
        *arg2 = *ebx
        arg2[1] = ecx_24
        ebx[1] = esi_19
        esi = arg4
        *ebx = edx_12
    
    result = arg5(esi, arg2)
    
    if (result.b != 0)
        edx_11 = *esi
        int32_t ecx_25 = arg2[1]
        esi_18 = esi[1]
        *arg4 = *arg2
        ebx_9 = var_c
        arg4[1] = ecx_25
    label_6c3c53:
        *arg2 = edx_11
        arg2[1] = esi_18
        result = arg5(arg2, ebx_9)
        
        if (result.b != 0)
            int32_t ecx_26 = ebx_9[1]
            result = *ebx_9
            int32_t edx_13 = *arg2
            int32_t esi_20 = arg2[1]
            *arg2 = result
            arg2[1] = ecx_26
            ebx_9[1] = esi_20
            *ebx_9 = edx_13
else
    int32_t ecx_1 = (eax_2 + 1) s>> 3
    int32_t* eax_5 = &ebx[ecx_1 * 4]
    int32_t* esi_1 = &ebx[ecx_1 * 2]
    int32_t* var_8_1 = esi_1
    
    if (arg5(esi_1, ebx) != 0)
        int32_t ecx_2 = ebx[1]
        int32_t edx = *esi_1
        int32_t esi_2 = esi_1[1]
        *var_8_1 = *ebx
        ebx = var_c
        var_8_1[1] = ecx_2
        ebx[1] = esi_2
        esi_1 = var_8_1
        *ebx = edx
    
    if (arg5(eax_5, esi_1) != 0)
        int32_t edx_1 = *eax_5
        int32_t esi_4 = eax_5[1]
        int32_t ecx_4 = var_8_1[1]
        *eax_5 = *var_8_1
        ebx = var_c
        eax_5[1] = ecx_4
        *var_8_1 = edx_1
        var_8_1[1] = esi_4
        
        if (arg5(var_8_1, ebx) != 0)
            int32_t ecx_5 = ebx[1]
            int32_t edx_2 = *var_8_1
            int32_t esi_5 = var_8_1[1]
            ebx[ecx_1 * 2] = *ebx
            var_8_1[1] = ecx_5
            *ebx = edx_2
            ebx[1] = esi_5
    
    int32_t* eax_19 = arg2 - (ecx_1 << 3)
    int32_t* esi_6 = &arg2[ecx_1 * 2]
    
    if (arg5(arg2, eax_19) != 0)
        int32_t edx_3 = *arg2
        int32_t esi_7 = arg2[1]
        int32_t ecx_8 = eax_19[1]
        *arg2 = *eax_19
        arg2[1] = ecx_8
        eax_19[1] = esi_7
        *eax_19 = edx_3
    
    if (arg5(esi_6, arg2) != 0)
        int32_t edx_4 = *esi_6
        int32_t ecx_9 = arg2[1]
        int32_t esi_8 = esi_6[1]
        arg2[ecx_1 * 2] = *arg2
        arg2[ecx_1 * 2 + 1] = ecx_9
        *arg2 = edx_4
        arg2[1] = esi_8
        ebx = var_c
        
        if (arg5(arg2, eax_19) != 0)
            int32_t edx_5 = *arg2
            int32_t esi_9 = arg2[1]
            int32_t ecx_12 = eax_19[1]
            *arg2 = *eax_19
            arg2[1] = ecx_12
            *eax_19 = edx_5
            eax_19[1] = esi_9
    
    int32_t* esi_11 = arg4 - (ecx_1 << 3)
    void* ecx_14 = arg4 - (ecx_1 << 4)
    int32_t* var_8_3 = esi_11
    int32_t* var_10_2 = ecx_14
    
    if (arg5(esi_11, ecx_14) != 0)
        int32_t edx_7 = *esi_11
        int32_t esi_12 = esi_11[1]
        int32_t ecx_16 = var_10_2[1]
        *var_8_3 = *var_10_2
        ebx = var_c
        var_8_3[1] = ecx_16
        var_10_2[1] = esi_12
        esi_11 = var_8_3
        *var_10_2 = edx_7
    
    if (arg5(arg4, esi_11) != 0)
        int32_t edx_8 = *arg4
        int32_t esi_14 = arg4[1]
        int32_t ecx_18 = var_8_3[1]
        *arg4 = *var_8_3
        arg4[1] = ecx_18
        var_8_3[1] = esi_14
        *var_8_3 = edx_8
        ebx = var_c
        
        if (arg5(var_8_3, var_10_2) != 0)
            int32_t edx_9 = *var_8_3
            int32_t esi_16 = var_8_3[1]
            int32_t ecx_21 = var_10_2[1]
            *var_8_3 = *var_10_2
            ebx = var_c
            var_8_3[1] = ecx_21
            *var_10_2 = edx_9
            var_10_2[1] = esi_16
    
    void* ebx_7 = &ebx[ecx_1 * 2]
    
    if (arg5(arg2, ebx_7) != 0)
        int32_t edx_10 = *arg2
        int32_t esi_17 = arg2[1]
        int32_t ecx_22 = *(ebx_7 + 4)
        *arg2 = *ebx_7
        arg2[1] = ecx_22
        *ebx_7 = edx_10
        *(ebx_7 + 4) = esi_17
    
    result = arg5(var_8_3, arg2)
    
    if (result.b != 0)
        edx_11 = *var_8_3
        esi_18 = var_8_3[1]
        int32_t ecx_23 = arg2[1]
        *var_8_3 = *arg2
        var_8_3[1] = ecx_23
        ebx_9 = ebx_7
        goto label_6c3c53
return result
