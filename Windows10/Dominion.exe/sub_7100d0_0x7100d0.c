// 函数: sub_7100d0
// 地址: 0x7100d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 0x30)
int32_t esi = 0
char* var_c = arg2

if (eax s> 0)
    int32_t* edi_1 = *(arg1 + 0x34)
    
    while (true)
        int32_t* result = *edi_1
        char* eax_1 = arg2
        char* ecx = *result
        int32_t eax_3
        
        while (true)
            arg2.b = *ecx
            char temp0_1 = *eax_1
            bool c_1 = arg2.b u< temp0_1
            
            if (arg2.b == temp0_1)
                if (arg2.b == 0)
                    eax_3 = 0
                    break
                
                arg2.b = ecx[1]
                char temp1_1 = eax_1[1]
                c_1 = arg2.b u< temp1_1
                
                if (arg2.b == temp1_1)
                    ecx = &ecx[2]
                    eax_1 = &eax_1[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_3 = 0
                    break
            
            eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
            break
        
        if (eax_3 == 0)
            return result
        
        arg2 = var_c
        esi += 1
        edi_1 = &edi_1[1]
        
        if (esi s>= eax)
            break

return 0
