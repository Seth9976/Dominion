// 函数: sub_752840
// 地址: 0x752840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi_2 = *(arg3 + ((arg2 u% 0x64) << 2) + 0x18)

if (esi_2 != 0)
    while (true)
        int32_t* edi_1 = *esi_2
        
        if (*edi_1 == arg2)
            char* eax_2 = arg4
            void* ecx = edi_1[1]
            int32_t eax_4
            
            while (true)
                uint32_t edx_1
                edx_1.b = *ecx
                char temp0_1 = *eax_2
                bool c_1 = edx_1.b u< temp0_1
                
                if (edx_1.b == temp0_1)
                    if (edx_1.b == 0)
                        eax_4 = 0
                        break
                    
                    edx_1.b = *(ecx + 1)
                    char temp1_1 = eax_2[1]
                    c_1 = edx_1.b u< temp1_1
                    
                    if (edx_1.b == temp1_1)
                        ecx += 2
                        eax_2 = &eax_2[2]
                        
                        if (edx_1.b != 0)
                            continue
                        
                        eax_4 = 0
                        break
                
                eax_4 = sbb.d(eax_2, eax_2, c_1) | 1
                break
            
            if (eax_4 == 0)
                return edi_1[2]
        
        esi_2 = esi_2[1]
        
        if (esi_2 == 0)
            break

return 0
