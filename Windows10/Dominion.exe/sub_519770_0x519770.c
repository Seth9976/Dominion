// 函数: sub_519770
// 地址: 0x519770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, 0x18)
int32_t* result

if (((*(eax + 0x98) & 0x7f000400) | (*(eax + 0x9c) & 0x940)) == 0)
    result = *(data_1597e0c + (((arg1 s>> 4 | arg1) & data_1597e10) << 2))
    int32_t* result_1 = result
    int32_t* result_2
    
    if (result_1 == 0)
    label_5197f4:
        result_2 = result
        
        if (result_2 != 0)
            goto label_519802
    else
        while (arg1 != *result_1)
            result_1 = result_1[4]
            
            if (result_1 == 0)
                result_2 = result
                goto label_519802
        
        if (result_1 != 0xfffffffc)
            int32_t ecx_8 = 0
            int32_t edx_2 = result_1[2]
            
            if (edx_2 s<= 0)
                goto label_5197f4
            
            do
                if (*(result_1[1] + (ecx_8 << 2)) == 0x32)
                    goto label_51981c
                
                ecx_8 += 1
            while (ecx_8 s< edx_2)
            
            result_2 = result
            goto label_519802
        
        result_2 = result
    label_519802:
        
        while (arg1 != *result_2)
            result_2 = result_2[4]
            
            if (result_2 == 0)
                goto label_51980b
        
        if (result_2 != 0xfffffffc)
            int32_t ecx_9 = 0
            int32_t edx_4 = result_2[2]
            
            if (edx_4 s> 0)
                do
                    if (*(result_2[1] + (ecx_9 << 2)) == 1)
                        goto label_519868
                    
                    ecx_9 += 1
                while (ecx_9 s< edx_4)
                
                goto label_519812
label_51980b:
    
    if (result != 0)
    label_519812:
        
        while (arg1 != *result)
            result = result[4]
            
            if (result == 0)
                goto label_51981c
        
        void* ecx_10 = &result[1]
        
        if (ecx_10 != 0)
            result = nullptr
            int32_t ecx_11 = *(ecx_10 + 4)
            
            if (ecx_11 s> 0)
                while (*(*ecx_10 + (result << 2)) != 0x4b)
                    result += 1
                    
                    if (result s>= ecx_11)
                        result.b = 0
                        return result
                
            label_519868:
                result.b = 1
                return result

label_51981c:
result.b = 0
return result
