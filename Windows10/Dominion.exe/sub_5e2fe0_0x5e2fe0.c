// 函数: sub_5e2fe0
// 地址: 0x5e2fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_b809e0
uint32_t result = data_b809e4 * 0x1c30 + esi
int32_t var_8 = arg2

if (esi u< result)
    while ((*(esi + 0x1c28) & 0xffff0000) == 0)
        esi += 0x1c30
        
        if (esi u>= result)
            return result
    
    if (esi != 0xffffffff)
        while (true)
            if (*(esi + 0x2c) == 6 && *(esi + 0x1e0) == arg3 && *(esi + 0x1e4) == arg4
                    && *(esi + 0x1ec) == arg2)
                int32_t temp0_1 = *(esi + 0x1e8)
                *(esi + 0x1e8) -= 1
                
                if (temp0_1 != 1)
                    break
                
                if (arg2 == 0)
                    sub_5cd3e0(esi)
                else
                    int32_t ebx_1 = 7
                    void* edi_1 = &data_b8206c
                    
                    while (true)
                        if (ebx_1 s>= 0x48)
                            result = sub_591930()
                            arg2 = var_8
                        
                        if (*edi_1 == arg2)
                            break
                        
                        if (*(edi_1 + 4) == arg2)
                            break
                        
                        edi_1 += 0x10
                        ebx_1 += 1
                        
                        if (edi_1 s>= 0xb8247c)
                            ebx_1 = 0
                            break
                    
                    void* eax_1 = sub_5cc410(result, 0xffffffff, ebx_1, 0, 0)
                    
                    if (eax_1 != 0)
                        sub_5cd880(esi, eax_1)
                
                return sub_5cb5a0(esi)
            
            esi += 0x1c30
            
            if (esi u>= result)
                break
            
            while ((*(esi + 0x1c28) & 0xffff0000) == 0)
                esi += 0x1c30
                
                if (esi u>= result)
                    return result
            
            if (esi == 0xffffffff)
                return result

return result
