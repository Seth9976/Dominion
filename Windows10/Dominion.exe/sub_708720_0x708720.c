// 函数: sub_708720
// 地址: 0x708720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = *(arg1 + 4)
char* edi = arg2

if (result != 0)
    while (true)
        char* ecx = *result
        char* eax_1 = edi
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
        
        result = result[0x14]
        
        if (result == 0)
            break

return 0
