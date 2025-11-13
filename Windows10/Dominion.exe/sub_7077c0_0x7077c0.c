// 函数: sub_7077c0
// 地址: 0x7077c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t result

if (*(arg1 + 4) == 2)
    if (arg2 != 0)
        result = _strnicmp(arg2, *(arg1 + 0xc), *(arg1 + 0x10))
    
    if (arg2 == 0 || result == 0)
        sub_7072d0(arg1)
        
        if (sub_707330(arg1, 0x3d).b != 0)
            sub_7072d0(arg1)
            char edx_2 = sub_707330(arg1, 0x22).b
            var_8:3.b = edx_2
            *(arg1 + 0xc) = *(arg1 + 8)
            char* ecx_5
            
            while (true)
                ecx_5 = *(arg1 + 8)
                result.b = *ecx_5
                bool cond:1_1
                
                if (edx_2 == 0)
                    if (result.b == 0)
                        break
                    
                    if (result.b == 0x20)
                        break
                    
                    if (result.b == 9)
                        break
                    
                    cond:1_1 = result.b == 0x3e
                else
                    if (result.b == 0)
                        break
                    
                    cond:1_1 = result.b == 0x22
                
                if (cond:1_1)
                    break
                
                if (result.b == 0xa)
                    *(arg1 + 0x118) += 1
                
                ecx_5.b = *ecx_5
                
                if (ecx_5.b u>= 0x80)
                    result.b = ecx_5.b
                    result.b &= 0xe0
                    
                    if (result.b != 0xc0)
                        result.b = ecx_5.b
                        result.b &= 0xf0
                        
                        if (result.b != 0xe0)
                            ecx_5.b &= 0xf8
                            
                            if (ecx_5.b != 0xf0)
                                *(arg1 + 8) += 1
                                continue
                
                edx_2 = var_8:3.b
                *(arg1 + 8) = sub_5a0db0(*(arg1 + 8))
            
            bool cond:0_1 = ecx_5 == *(arg1 + 0xc)
            *(arg1 + 0x10) = ecx_5 - *(arg1 + 0xc)
            
            if (not(cond:0_1))
                if (edx_2 != 0)
                    return sub_707330(arg1, 0x22) != 0
                
                result.b = 1
                return result

result.b = 0
return result
