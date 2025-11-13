// 函数: sub_514ca0
// 地址: 0x514ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t i = data_cca788
int32_t* result

if (i == 0)
label_514d22:
    result.b = 1
    return result

if ((*(sub_571b30(i, 0x17) + 0x98) & 4) != 0)
    result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    
    if (result != 0)
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                result.b = 0
                return result
        
        void* ecx_6 = &result[1]
        
        if (ecx_6 != 0)
            result = nullptr
            int32_t ecx_7 = *(ecx_6 + 4)
            
            if (ecx_7 s> 0)
                do
                    if (*(*ecx_6 + (result << 2)) == 0x11)
                        goto label_514d22
                    
                    result += 1
                while (result s< ecx_7)

result.b = 0
return result
