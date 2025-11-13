// 函数: sub_60ecc0
// 地址: 0x60ecc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 == 1)
    int32_t esi_1 = 0
    int32_t i_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71dc)
    
    if (i_1 s> 0)
        int32_t edi_1 = 0x6edc
        int32_t i
        
        do
            bool cond:0_1 =
                sub_60eae0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + edi_1 + 8), arg2) == 0
            int32_t ecx_5 = esi_1 + 1
            edi_1 += 0xc
            
            if (cond:0_1)
                ecx_5 = esi_1
            
            esi_1 = ecx_5
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(esi_1 + 3)
    return (eax_5 + (edx_1 & 3)) s>> 2

int32_t result = *((arg2 << 2) + &data_1a957e0)

if (result == 0)
    int32_t result_1 = result
    void* const eax_8 = &data_783418
    void* const var_14_1 = &data_783418
    int32_t ecx_7
    int32_t result_2
    
    while (true)
        int32_t esi_2 = 0
        
        while (true)
            ecx_7 = arg2
            void var_5
            
            if (sub_60eb90(*(eax_8 + (esi_2 << 2)), &var_5) == ecx_7)
                void* const edx_4 = var_14_1
                int32_t esi_3 = 0
                void* ecx_8 = edx_4
                void* const var_18_1 = edx_4
                
                while (true)
                    if (*edx_4 != 0)
                        int32_t eax_10 = 0
                        
                        if (arg4 s<= 0)
                        label_60edaa:
                            ecx_7 = arg2
                            break
                        
                        while (*(arg5 + (eax_10 << 2)) != *ecx_8)
                            eax_10 += 1
                            
                            if (eax_10 s>= arg4)
                                goto label_60edaa
                        
                        esi_3 += 1
                        ecx_8 = var_18_1 + 4
                        edx_4 += 4
                        var_18_1 = ecx_8
                        
                        if (esi_3 s< 3)
                            continue
                    
                    ecx_7 = arg2
                    result_2 = result_1 + 1
                    result_1 = result_2
                    goto label_60edb3
                
                break
            
            eax_8 = var_14_1
            esi_2 += 1
            
            if (esi_2 s>= 3)
                break
        
        result_2 = result_1
    label_60edb3:
        eax_8 = var_14_1 + 0x64
        var_14_1 = eax_8
        
        if (eax_8 s>= 0x78decc)
            break
    
    int32_t eax_13
    int32_t edx_5
    edx_5:eax_13 = sx.q(result_2 + 3)
    result = (eax_13 + (edx_5 & 3)) s>> 2
    *((ecx_7 << 2) + &data_1a957e0) = result

return result
