// 函数: sub_58e290
// 地址: 0x58e290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = *arg4
int32_t esi = arg2
int32_t edi = 0
int32_t var_c = esi
int32_t* result_1 = result

if (result s> 0)
    int32_t* result_2
    
    while (true)
        int32_t esi_1 = *(esi + (edi << 2))
        int32_t eax_1 = 0
        
        while (true)
            int32_t ecx = *(arg3 + (eax_1 << 2))
            
            if (ecx != 0)
                if (ecx == esi_1)
                label_58e31d:
                    esi = var_c
                    result_2 = result_1 - 1
                    result_1 = result_2
                    *(esi + (edi << 2)) = *(esi + (result_2 << 2))
                    edi -= 1
                    break
                
                eax_1 += 1
                
                if (eax_1 s< 0xa)
                    continue
            
            int32_t ecx_1 = 0
            int32_t* eax_2 = arg3 + 0x28
            
            while (true)
                int32_t edx = *eax_2
                
                if (edx != 0)
                    if (edx == esi_1)
                        goto label_58e31d
                    
                    ecx_1 += 1
                    eax_2 = &eax_2[0xf]
                    
                    if (ecx_1 s< 4)
                        continue
                
                int32_t i = 0
                void* eax_3 = arg3 + 0x118
                
                do
                    int32_t edx_1 = *eax_3
                    
                    if (edx_1 != 0 && edx_1 == esi_1)
                        goto label_58e31d
                    
                    i += 1
                    eax_3 += 4
                while (i s< 0x6b)
                
                result_2 = result_1
                esi = var_c
                break
            
            break
        
        edi += 1
        
        if (edi s>= result_2)
            break
    
    result = arg4
    *result = result_2

return result
