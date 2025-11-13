// 函数: sub_514b70
// 地址: 0x514b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_cca788
int32_t* result

if (i == 0)
label_514c44:
    result.b = 1
    return result

result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
int32_t* result_1 = result
int32_t* result_2

if (result_1 == 0)
label_514bd4:
    result_2 = result
    
    if (result_2 != 0)
        goto label_514be2
    
label_514c0d:
    
    if (result != 0)
    label_514c13:
        
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                result.b = 0
                return result
        
        void* ecx_7 = &result[1]
        
        if (ecx_7 != 0)
            result = nullptr
            int32_t ecx_8 = *(ecx_7 + 4)
            
            if (ecx_8 s> 0)
                do
                    if (*(*ecx_7 + (result << 2)) == 0x53)
                        goto label_514c44
                    
                    result += 1
                while (result s< ecx_8)
    
    result.b = 0
    return result

while (i != *result_1)
    result_1 = result_1[4]
    
    if (result_1 == 0)
        result_2 = result
        goto label_514be2

if (result_1 != 0xfffffffc)
    int32_t ecx_5 = 0
    int32_t esi_2 = result_1[2]
    
    if (esi_2 s<= 0)
        goto label_514bd4
    
    do
        if (*(result_1[1] + (ecx_5 << 2)) == 0x51)
            goto label_514c44
        
        ecx_5 += 1
    while (ecx_5 s< esi_2)
    
    result_2 = result
    goto label_514be2

result_2 = result
label_514be2:

while (i != *result_2)
    result_2 = result_2[4]
    
    if (result_2 == 0)
        goto label_514c13

if (result_2 == 0xfffffffc)
    goto label_514c13

int32_t ecx_6 = 0
int32_t esi_4 = result_2[2]

if (esi_4 s<= 0)
    goto label_514c0d

do
    if (*(result_2[1] + (ecx_6 << 2)) == 0x52)
        goto label_514c44
    
    ecx_6 += 1
while (ecx_6 s< esi_4)

goto label_514c13
