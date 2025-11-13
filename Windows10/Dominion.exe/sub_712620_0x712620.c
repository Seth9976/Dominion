// 函数: sub_712620
// 地址: 0x712620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *(arg1 + 0x24)
int32_t ecx = *(eax + 0x10)
int32_t ecx_1 = 0
*(eax + 0x10) = 1
int32_t edx = *(arg1 + 4)
int32_t var_14 = edx
int32_t var_c = 0

if (edx s> 0)
    do
        if (ecx_1 s< *(arg1 + 4))
            void* i_4 = *(*(arg1 + 8) + (ecx_1 << 2))
            
            if (i_4 != 0)
                int32_t* esi_1 = *(arg1 + 0x24)
                sub_710f50(esi_1)
                *(esi_1[1] + (esi_1[2] << 2)) = 2
                esi_1[2] += 1
                sub_710f50(esi_1)
                *(esi_1[1] + (esi_1[2] << 2)) = i_4
                void* eax_4 = *esi_1
                esi_1[2] += 1
                *(eax_4 + 0x34) = 1
                sub_712cb0(arg1, i_4)
                void* i_2 = i_4
                
                for (void* i = *(i_4 + 8); i != 0; i = *(i + 8))
                    int32_t* esi_2 = *(arg1 + 0x24)
                    sub_710f50(esi_2)
                    *(esi_2[1] + (esi_2[2] << 2)) = 2
                    esi_2[2] += 1
                    sub_710f50(esi_2)
                    *(esi_2[1] + (esi_2[2] << 2)) = i
                    void* eax_7 = *esi_2
                    esi_2[2] += 1
                    *(eax_7 + 0x34) = 1
                    void* i_3 = i_2
                    i_2 = i
                    *(i_3 + 8) = 0
                    *(i_3 + 0xc) = 0
                
                *(*(arg1 + 8) + (*(i_4 + 0x14) << 2)) = 0
                sub_710fd0(*(arg1 + 0x24))
                ecx_1 = var_c
                edx = var_14
        
        ecx_1 += 1
        var_c = ecx_1
    while (ecx_1 s< edx)

void* result = *(arg1 + 0x24)
*(arg1 + 4) = 0
*(result + 0x10) = ecx
int32_t* edi_1 = *(arg1 + 0x24)

if (edi_1[4] == 0)
    int32_t i_1 = 0
    edi_1[4] = 1
    
    if (edi_1[2] s> 0)
        do
            int32_t ecx_15 = edi_1[1]
            result = *(ecx_15 + (i_1 << 2))
            void* esi_3 = *(ecx_15 + (i_1 << 2) + 4)
            
            switch (result)
                case nullptr, 1, 3
                    int32_t ecx_16 = *(esi_3 + 0x10)
                    
                    if (ecx_16 != 0)
                        ecx_16(*edi_1, result, esi_3, 0)
                    
                    void* ecx_17 = *edi_1
                    int32_t edx_2 = *(ecx_17 + 0xc)
                    
                    if (edx_2 != 0)
                        result = edx_2(ecx_17, result, esi_3, 0)
                case 2
                    int32_t eax_9 = *(esi_3 + 0x10)
                    
                    if (eax_9 != 0)
                        eax_9(*edi_1, 2, esi_3, 0)
                    
                    void* eax_10 = *edi_1
                    int32_t ecx_18 = *(eax_10 + 0xc)
                    
                    if (ecx_18 != 0)
                        ecx_18(eax_10, 2, esi_3, 0)
                    
                    goto label_7127d8
                case 4
                label_7127d8:
                    int32_t eax_11 = *(esi_3 + 0x10)
                    
                    if (eax_11 != 0)
                        eax_11(*edi_1, 4, esi_3, 0)
                    
                    void* eax_12 = *edi_1
                    int32_t ecx_19 = *(eax_12 + 0xc)
                    
                    if (ecx_19 != 0)
                        ecx_19(eax_12, 4, esi_3, 0)
                    
                    void* esi_4 = *(esi_3 + 0x6c)
                    free(*(esi_4 + 8))
                    free(esi_4)
                    void* esi_6 = *(esi_3 + 0x70)
                    free(*(esi_6 + 8))
                    free(esi_6)
                    free(*(esi_3 + 0x74))
                    result = free(esi_3)
                case 5
                    int32_t eax_13 = *(esi_3 + 0x10)
                    int32_t edx_3 = *(ecx_15 + (i_1 << 2) + 8)
                    
                    if (eax_13 != 0)
                        eax_13(*edi_1, 5, esi_3, edx_3)
                    
                    result = *edi_1
                    int32_t ecx_20 = *(result + 0xc)
                    
                    if (ecx_20 != 0)
                        result = ecx_20(result, 5, esi_3, edx_3)
                    
                    i_1 += 1
            
            i_1 += 2
        while (i_1 s< edi_1[2])
    
    edi_1[2] = 0
    edi_1[4] = 0

return result
