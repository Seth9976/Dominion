// 函数: sub_5142a0
// 地址: 0x5142a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t i = data_cca788
int32_t* result

if (i != 0)
    if ((*(sub_571b30(i, 0x17) + 0x98) & 4) == 0)
        result.b = 0
        return result
    
    if ((*(sub_571b30(i, 0x17) + 0x98) & 0x80) != 0)
        result.b = 0
        return result
    
    result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    
    if (result != 0)
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                goto label_51430c
        
        void* ecx_7 = &result[1]
        
        if (ecx_7 != 0)
            result = nullptr
            int32_t ecx_8 = *(ecx_7 + 4)
            
            if (ecx_8 s> 0)
                while (*(*ecx_7 + (result << 2)) != 0x5c)
                    result += 1
                    
                    if (result s>= ecx_8)
                        result.b = 1
                        return result
                
                result.b = 0
                return result

label_51430c:
result.b = 1
return result
