// 函数: sub_714700
// 地址: 0x714700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg2
int32_t esi = 0
int32_t ebx = arg1[1]

if (ebx s> 0)
    int32_t* edi_1 = *(*arg1 + 0x24)
    
    while (true)
        char* eax_2 = arg2
        char* ecx_1 = *(*edi_1 + 4)
        int32_t eax_4
        
        while (true)
            arg2.b = *ecx_1
            char temp0_1 = *eax_2
            bool c_1 = arg2.b u< temp0_1
            
            if (arg2.b == temp0_1)
                if (arg2.b == 0)
                    eax_4 = 0
                    break
                
                arg2.b = ecx_1[1]
                char temp1_1 = eax_2[1]
                c_1 = arg2.b u< temp1_1
                
                if (arg2.b == temp1_1)
                    ecx_1 = &ecx_1[2]
                    eax_2 = &eax_2[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_4 = 0
                    break
            
            eax_4 = sbb.d(eax_2, eax_2, c_1) | 1
            break
        
        if (eax_4 == 0)
            return *(arg1[2] + (esi << 2))
        
        arg2 = var_8
        esi += 1
        edi_1 = &edi_1[1]
        
        if (esi s>= ebx)
            break

return 0
