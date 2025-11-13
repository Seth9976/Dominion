// 函数: sub_51eb00
// 地址: 0x51eb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t j = *arg2
int32_t* result = *(data_1597e0c + (((j s>> 4 | j) & data_1597e10) << 2))

for (int32_t* i = result; i != 0; i = i[4])
    if (j == *i)
        if (i != 0xfffffffc)
            int32_t ecx_4 = 0
            int32_t esi_2 = i[2]
            
            if (esi_2 s> 0)
                while (*(i[1] + (ecx_4 << 2)) != *(arg1 + 4))
                    ecx_4 += 1
                    
                    if (ecx_4 s>= esi_2)
                        result.b = 0
                        return result
                
                while (j != *result)
                    result = result[4]
                    
                    if (result == 0)
                        result.b = 0
                        return result
                
                void* ecx_5 = &result[1]
                
                if (ecx_5 != 0)
                    result = nullptr
                    int32_t ecx_6 = *(ecx_5 + 4)
                    
                    if (ecx_6 s> 0)
                        do
                            if (*(*ecx_5 + (result << 2)) == 0x11)
                                result.b = 1
                                return result
                            
                            result += 1
                        while (result s< ecx_6)
                        
                        result.b = 0
                        return result
        
        break

result.b = 0
return result
