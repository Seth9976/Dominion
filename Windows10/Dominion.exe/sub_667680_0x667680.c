// 函数: sub_667680
// 地址: 0x667680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t* eax = sub_64cc90(arg1)
int32_t* eax_1 = sub_6dd1e0(eax, eax, &data_8cae70, data_1724a80, 0x69)

if (eax_1 != 0)
    int32_t ebx_1 = eax_1[2]
    int32_t esi_1 = 0
    
    if (ebx_1 s> 0)
        char* edx_1 = *arg2
        int32_t* result = *eax_1
        char* var_8_1 = edx_1
        
        while (true)
            char* ecx = *result
            char* const eax_2 = &data_801800
            
            if (edx_1 != 0)
                eax_2 = edx_1
            
            int32_t eax_4
            
            while (true)
                edx_1.b = *eax_2
                char temp0_1 = *ecx
                bool c_1 = edx_1.b u< temp0_1
                
                if (edx_1.b == temp0_1)
                    if (edx_1.b == 0)
                        eax_4 = 0
                        break
                    
                    edx_1.b = eax_2[1]
                    char temp1_1 = ecx[1]
                    c_1 = edx_1.b u< temp1_1
                    
                    if (edx_1.b == temp1_1)
                        eax_2 = &eax_2[2]
                        ecx = &ecx[2]
                        
                        if (edx_1.b != 0)
                            continue
                        
                        eax_4 = 0
                        break
                
                eax_4 = sbb.d(eax_2, eax_2, c_1) | 1
                break
            
            if (eax_4 == 0)
                return result
            
            edx_1 = var_8_1
            esi_1 += 1
            result = &result[0xc]
            
            if (esi_1 s>= ebx_1)
                break

return 0
