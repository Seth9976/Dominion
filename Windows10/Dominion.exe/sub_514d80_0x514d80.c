// 函数: sub_514d80
// 地址: 0x514d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_cca788
int32_t* result

if (i == 0)
label_514e14:
    result.b = 1
    return result

result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
int32_t* result_1 = result

if (result_1 != 0)
    while (i != *result_1)
        result_1 = result_1[4]
        
        if (result_1 == 0)
            goto label_514de3
    
    if (result_1 == 0xfffffffc)
        goto label_514de3
    
    int32_t ecx_5 = 0
    int32_t esi_2 = result_1[2]
    
    if (esi_2 s<= 0)
        goto label_514ddd
    
    do
        if (*(result_1[1] + (ecx_5 << 2)) == 0x1b)
            goto label_514e14
        
        ecx_5 += 1
    while (ecx_5 s< esi_2)
    
    goto label_514de3

label_514ddd:

if (result != 0)
label_514de3:
    
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
                if (*(*ecx_6 + (result << 2)) == 0x1c)
                    goto label_514e14
                
                result += 1
            while (result s< ecx_7)

result.b = 0
return result
