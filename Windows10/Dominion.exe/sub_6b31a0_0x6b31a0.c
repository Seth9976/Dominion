// 函数: sub_6b31a0
// 地址: 0x6b31a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg1
memset(ebx + 0x44, 0xffffffff, 0x200)
*(ebx + 0x38) = 0
*(ebx + 0x40) = 0
int32_t* result = sub_64c020(0x400)
*(ebx + 0x38) = result
*(ebx + 0x3c) = 0xff

if (*(ebx + 0x1c) != 0)
    void* ecx_1 = *(ebx + 0x20)
    int32_t i = 0
    void* var_10_1 = ecx_1
    
    if (*(ecx_1 + 0x18) s> 0)
        int32_t* edx_1 = nullptr
        int32_t* var_8_1 = nullptr
        
        do
            result = *(ecx_1 + 0x20)
            int32_t j = *(edx_1 + result)
            
            if (j == 0)
                j = *(ecx_1 + 0x14) + i
            
            if (j s>= 0x80)
                int32_t* eax_5 = ((j s>> 4 | j) & *(ebx + 0x3c)) << 2
                result = *(eax_5 + *(ebx + 0x38))
                edx_1 = var_8_1
                
                if (result == 0)
                label_6b3250:
                    int32_t* eax_7 = sub_64bfd0(0xc)
                    eax_7[3] += 1
                    
                    if (*eax_7 == 0)
                        sub_64be70(eax_7)
                    
                    int32_t* ecx_3 = *eax_7
                    *eax_7 = *ecx_3
                    ebx = arg1
                    *ecx_3 = j
                    ecx_3[1] = i
                    ecx_3[2] = *(eax_5 + *(ebx + 0x38))
                    result = *(ebx + 0x38)
                    *(eax_5 + result) = ecx_3
                    *(ebx + 0x40) += 1
                    ecx_1 = var_10_1
                    edx_1 = var_8_1
                else
                    while (j != *result)
                        result = result[2]
                        
                        if (result == 0)
                            goto label_6b3250
                    
                    result[1] = i
            else
                *(ebx + (j << 2) + 0x44) = i
            
            i += 1
            edx_1 = &edx_1[9]
            var_8_1 = edx_1
        while (i s< *(ecx_1 + 0x18))

return result
