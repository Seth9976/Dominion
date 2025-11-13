// 函数: sub_596fb0
// 地址: 0x596fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t* ebx = arg4
int16_t* edi = arg3
int32_t eax_2 = (ebx - edi) s>> 1
int16_t* var_20 = edi

if (eax_2 s<= 0x28)
    arg4 = arg5
else
    int32_t ecx_1 = (eax_2 + 1) s>> 3
    int16_t* var_c = arg5
    int16_t* ebx_1 = &edi[ecx_1]
    
    if (sub_596040(&var_c, ebx_1, var_20).b != 0)
        int16_t ecx_3 = *ebx_1
        *ebx_1 = *edi
        *edi = ecx_3
    
    if (sub_596040(&var_c, &edi[ecx_1 * 2], ebx_1) != 0)
        int16_t ecx_6 = edi[ecx_1 * 2]
        int32_t eax_7
        eax_7.w = *ebx_1
        edi[ecx_1 * 2] = eax_7.w
        *ebx_1 = ecx_6
        
        if (sub_596040(&var_c, ebx_1, edi).b != 0)
            int16_t ecx_8 = *ebx_1
            *ebx_1 = *edi
            *edi = ecx_8
    
    var_c = arg5
    int32_t ecx_9 = ecx_1 * 2
    int16_t* ebx_3 = arg2 - ecx_9
    
    if (sub_596040(&var_c, arg2, ebx_3).b != 0)
        int16_t ecx_11 = *arg2
        *arg2 = *ebx_3
        *ebx_3 = ecx_11
    
    if (sub_596040(&var_c, &arg2[ecx_1], arg2).b != 0)
        int16_t ecx_13 = arg2[ecx_1]
        arg2[ecx_1] = *arg2
        *arg2 = ecx_13
        
        if (sub_596040(&var_c, arg2, ebx_3).b != 0)
            int16_t ecx_15 = *arg2
            *arg2 = *ebx_3
            *ebx_3 = ecx_15
    
    int16_t* ecx_16 = arg4
    ebx = ecx_16 - ecx_9
    var_c = arg5
    int16_t* ecx_17 = ecx_16 - (ecx_1 << 2)
    
    if (sub_596040(&var_c, ebx, ecx_17).b != 0)
        int16_t ecx_19 = *ebx
        *ebx = *ecx_17
        *ecx_17 = ecx_19
    
    if (sub_596040(&var_c, arg4, ebx).b != 0)
        int16_t* edx_3 = arg4
        int16_t ecx_21 = *edx_3
        *edx_3 = *ebx
        *ebx = ecx_21
        
        if (sub_596040(&var_c, ebx, ecx_17).b != 0)
            int16_t ecx_23 = *ebx
            *ebx = *ecx_17
            *ecx_17 = ecx_23
    
    arg4 = arg5
    edi = &edi[ecx_1]
    var_20 = edi

if (sub_596040(&arg4, arg2, var_20).b != 0)
    int16_t ecx_25 = *arg2
    *arg2 = *edi
    *edi = ecx_25

int16_t result = sub_596040(&arg4, ebx, arg2)

if (result.b != 0)
    int16_t ecx_27 = *ebx
    *ebx = *arg2
    *arg2 = ecx_27
    result = sub_596040(&arg4, arg2, edi)
    
    if (result.b != 0)
        result = *edi
        int16_t ecx_29 = *arg2
        *arg2 = result
        *edi = ecx_29

return result
