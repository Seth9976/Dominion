// 函数: sub_6a49a0
// 地址: 0x6a49a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg2
int32_t* result

if (arg1 == 0)
label_6a49eb:
    int32_t* edi_2 = data_147ac64
    edi_2[3] += 1
    
    if (*edi_2 == 0)
        sub_6a64c0(edi_2)
    
    result = *edi_2
    *edi_2 = *result
    result[3] = 0
    result[4] = 0
    result[5] = 0
    *result = &data_801800
    result[1] = &data_801800
    result[2] = &data_801800
    int32_t* eax_3 = sub_64bfd0(0xc)
    eax_3[3] += 1
    
    if (*eax_3 == 0)
        sub_64be70(eax_3)
    
    int32_t* ecx_2 = *eax_3
    *eax_3 = *ecx_2
    ecx_2[2] = 0
    *ecx_2 = result
    ecx_2[1] = 0
    ecx_2[2] = *(arg1 + 8)
    void* eax_6 = *(arg1 + 8)
    
    if (eax_6 == 0)
        *(arg1 + 4) = ecx_2
    else
        *(eax_6 + 4) = ecx_2
    
    *(arg1 + 0xc) += 1
    *(arg1 + 8) = ecx_2
else
    int32_t* edi_1 = *(arg1 + 4)
    
    if (edi_1 == 0)
        goto label_6a49eb
    
    while (true)
        result = *edi_1
        char* const _Str1 = &data_801800
        edi_1 = edi_1[1]
        char* _Str1_1 = *result
        
        if (_Str1_1 != 0)
            _Str1 = _Str1_1
        
        if (_stricmp(_Str1, arg2) == 0)
            break
        
        arg2 = var_8
        
        if (edi_1 == 0)
            goto label_6a49eb
    
    if (result == 0)
        goto label_6a49eb
    
    char* eax_7 = result[1]
    
    if (eax_7 != 0 && eax_7 != &data_801800)
        if (data_cf65bc != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&result[1])
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                result[1] = &data_801800
        
        result[1] = &data_801800
    
    char* eax_9 = result[2]
    
    if (eax_9 != 0 && eax_9 != &data_801800)
        if (data_cf65bc != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(&result[2])
            int32_t temp1_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                result[2] = &data_801800
        
        result[2] = &data_801800
    
    char** ecx_7 = result[3]
    
    if (ecx_7 != 0)
        sub_6a3220(ecx_7)
        result[3] = 0
        sub_63d8d0(result, var_8)
        return result

sub_63d8d0(result, var_8)
return result
