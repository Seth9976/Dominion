// 函数: sub_5d7940
// 地址: 0x5d7940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* eax = arg1
void* var_8_1 = eax

if (*(eax + 0x2c) == 1)
    void* edi_1 = &data_b7d438
    bool cond:1_1 = data_b7f4b8 == 0
    *arg2 = 0
    
    if (cond:1_1)
        edi_1 = nullptr
    
    if (edi_1 != 0)
        void* esi_1 = nullptr
        
        while (true)
            int32_t edx = *edi_1
            int32_t ecx = 0
            
            if (edx s> 0)
                void* eax_1 = edi_1 + 0xc
                
                do
                    if (*eax_1 == *(eax + 0x1c28))
                        eax_1.b = 1
                        return eax_1
                    
                    ecx += 1
                    eax_1 += 0xc
                while (ecx s< edx)
                
                esi_1 = *arg2
            
            edi_1 = edi_1 + edx * 0xc + 8
            
            if (edi_1 == data_b7f4b8 + &data_b7d438)
                *arg2 = esi_1 + 1
                break
            
            esi_1 += 1
            *arg2 = esi_1
            
            if (edi_1 == 0)
                break
            
            eax = var_8_1

eax.b = 0
return eax
