// 函数: sub_600ad0
// 地址: 0x600ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t result = 0
int32_t* var_c = ebx
*ebx = 0
*arg3 = 0
void* i = data_b809e0
void* eax_1 = data_b809e4 * 0x1c30 + i

if (i u< eax_1)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= eax_1)
            return 0
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 0 && *(i + 0x168) == 0 && *(i + 0xa4) == 0x3eb)
            int32_t eax_3 = data_b604e0
            
            if (eax_3 == 0xffffffff)
                eax_3 = 0
            
            if (*(i + 0xa0) == eax_3)
                int32_t eax_4 = sub_5cbb20(i)
                
                if (eax_4 != 0 && sub_5754f0(eax_4, eax_4, 0xb80ad8, 0, 0x1000) != 0)
                    *ebx += 1
                    void* eax_6 = sub_5cbb20(i)
                    int32_t* edx_2 = arg3
                    int32_t ecx_2 = *edx_2
                    
                    if (ecx_2 == 0)
                        if (arg4 != 0)
                            char eax_7
                            
                            if (sub_5efe00(eax_6, nullptr, i, 1) == 0)
                                eax_7 = 0
                            else
                                int32_t ecx_4 = data_b604e0
                                
                                if (ecx_4 == 0xffffffff)
                                    ecx_4 = 0
                                
                                if (sub_5e4d40(ecx_4) != 0)
                                    eax_7 = 0
                                else
                                    eax_7 = 1
                            
                            edx_2 = arg3
                            *arg4 = eax_7
                        
                        if (arg5 != 0)
                            *arg5 = i
                        
                        *edx_2 = eax_6
                        result = 1
                    else if (ecx_2 != eax_6)
                        result = 2
                    
                    ebx = var_c
        
        i += 0x1c30
        int32_t eax_10 = data_b809e4 * 0x1c30 + data_b809e0
        
        if (i u>= eax_10)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= eax_10)
                return result

return result
