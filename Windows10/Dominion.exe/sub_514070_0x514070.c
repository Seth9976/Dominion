// 函数: sub_514070
// 地址: 0x514070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_cca788
int32_t* result

if (i != 0)
    int32_t* result_1 = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    int32_t* result_2 = result_1
    
    if (result_2 == 0)
    label_5140cf:
        result = result_1
        
        if (result != 0)
            goto label_5140d7
    else
        while (i != *result_2)
            result_2 = result_2[4]
            
            if (result_2 == 0)
                result = result_1
                goto label_5140d7
        
        if (result_2 != 0xfffffffc)
            result = nullptr
            int32_t esi_2 = result_2[2]
            
            if (esi_2 s<= 0)
                goto label_5140cf
            
            do
                if (*(result_2[1] + (result << 2)) == 0x4f)
                    goto label_514133
                
                result += 1
            while (result s< esi_2)
            
            result = result_1
            goto label_5140d7
        
        result = result_1
    label_5140d7:
        
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                goto label_5140e1
        
        void* esi_3 = &result[1]
        
        if (esi_3 != 0)
            result = nullptr
            int32_t esi_4 = *(esi_3 + 4)
            
            if (esi_4 s> 0)
                while (*(*esi_3 + (result << 2)) != 3)
                    result += 1
                    
                    if (result s>= esi_4)
                        result.b = 1
                        return result
                
                while (i != *result_1)
                    result_1 = result_1[4]
                    
                    if (result_1 == 0)
                        result.b = 0
                        return result
                
                if (result_1 != 0xfffffffc)
                    result = nullptr
                    int32_t ecx_6 = result_1[2]
                    
                    if (ecx_6 s> 0)
                        do
                            if (*(result_1[1] + (result << 2)) == 0x59)
                                goto label_5140e1
                            
                            result += 1
                        while (result s< ecx_6)
                
            label_514133:
                result.b = 0
                return result

label_5140e1:
result.b = 1
return result
