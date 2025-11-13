// 函数: sub_5121c0
// 地址: 0x5121c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_516f30(0x1194)
int32_t esi = 0
int32_t* edi = eax

while (true)
    if (edi[3] == 3)
        void* edx = &edi[4]
        int32_t edi_1 = 0
        void* var_c_1 = edx
        eax = eax[esi * 0x9b + 0x9c]
        int32_t* var_8_1 = eax
        
        if (eax s> 0)
            while (true)
                int32_t eax_3 = sub_516f30(*(edx + (edi_1 << 2)))
                int32_t ecx_2 = 0
                int32_t* edx_1 = eax_3 + 0xc
                
                while (true)
                    if (*edx_1 == 2)
                        int32_t eax_5 = *(ecx_2 * 0x26c + eax_3 + 0x10)
                        
                        if (eax_5 != 0 && eax_5().b == 0)
                            break
                    else
                        ecx_2 += 1
                        edx_1 = &edx_1[0x9b]
                        
                        if (ecx_2 s< 4)
                            continue
                    
                    int32_t i = 0
                    eax = eax_3 + 0x274
                    
                    do
                        if (eax[-0x9a] == 6 && *eax == 0)
                            int32_t eax_6 = i * 0x26c
                            int32_t ecx_3 = *(eax_6 + eax_3 + 0x270)
                            eax = nullptr
                            
                            if (ecx_3 s> 0)
                                do
                                    if (*(*(eax_6 + eax_3 + 0x10) + (eax << 2)) == arg1)
                                        *arg2 = *(edx + (edi_1 << 2))
                                        int32_t eax_8
                                        eax_8.b = 1
                                        return eax_8
                                    
                                    eax += 1
                                while (eax s< ecx_3)
                            
                            break
                        
                        i += 1
                        eax = &eax[0x9b]
                    while (i s< 4)
                    
                    break
                
                edi_1 += 1
                
                if (edi_1 s>= var_8_1)
                    break
                
                edx = var_c_1
        
        break
    
    esi += 1
    edi = &edi[0x9b]
    
    if (esi s>= 4)
        break

eax.b = 0
return eax
