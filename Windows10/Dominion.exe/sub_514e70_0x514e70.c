// 函数: sub_514e70
// 地址: 0x514e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_cca788
int32_t* result

if (i == 0)
label_514ffa:
    result.b = 1
    return result

if (i != 0x305 && (*(sub_571b30(i, 0x17) + 0x98) & 4) != 0)
    result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    int32_t* result_1 = result
    int32_t* result_2
    int32_t* result_3
    int32_t* result_4
    
    if (result_1 != 0)
        while (i != *result_1)
            result_1 = result_1[4]
            
            if (result_1 == 0)
                result_2 = result
                goto label_514f12
        
        if (result_1 != 0xfffffffc)
            int32_t ecx_6 = 0
            int32_t edx_2 = result_1[2]
            
            if (edx_2 s<= 0)
                goto label_514f08
            
            do
                if (*(result_1[1] + (ecx_6 << 2)) == 0x1b)
                    goto label_514ffa
                
                ecx_6 += 1
            while (ecx_6 s< edx_2)
            
            result_2 = result
            goto label_514f12
        
        result_2 = result
    label_514f12:
        
        while (i != *result_2)
            result_2 = result_2[4]
            
            if (result_2 == 0)
                result_3 = result
                goto label_514f52
        
        if (result_2 != 0xfffffffc)
            int32_t ecx_7 = 0
            int32_t edx_4 = result_2[2]
            
            if (edx_4 s<= 0)
                goto label_514f48
            
            do
                if (*(result_2[1] + (ecx_7 << 2)) == 0x1c)
                    goto label_514ffa
                
                ecx_7 += 1
            while (ecx_7 s< edx_4)
            
            result_3 = result
            goto label_514f52
        
        result_3 = result
    label_514f52:
        
        while (i != *result_3)
            result_3 = result_3[4]
            
            if (result_3 == 0)
                result_4 = result
                goto label_514f92
        
        if (result_3 != 0xfffffffc)
            int32_t ecx_8 = 0
            int32_t edx_6 = result_3[2]
            
            if (edx_6 s<= 0)
                goto label_514f88
            
            do
                if (*(result_3[1] + (ecx_8 << 2)) == 0x51)
                    goto label_514ffa
                
                ecx_8 += 1
            while (ecx_8 s< edx_6)
            
            result_4 = result
            goto label_514f92
        
        result_4 = result
    label_514f92:
        
        while (i != *result_4)
            result_4 = result_4[4]
            
            if (result_4 == 0)
                goto label_514fc3
        
        if (result_4 == 0xfffffffc)
            goto label_514fc3
        
        int32_t ecx_9 = 0
        int32_t edx_8 = result_4[2]
        
        if (edx_8 s<= 0)
            goto label_514fbd
        
        do
            if (*(result_4[1] + (ecx_9 << 2)) == 0x52)
                goto label_514ffa
            
            ecx_9 += 1
        while (ecx_9 s< edx_8)
        
        goto label_514fc3
    
label_514f08:
    result_2 = result
    
    if (result_2 != 0)
        goto label_514f12
    
label_514f48:
    result_3 = result
    
    if (result_3 != 0)
        goto label_514f52
    
label_514f88:
    result_4 = result
    
    if (result_4 != 0)
        goto label_514f92
    
label_514fbd:
    
    if (result != 0)
    label_514fc3:
        
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                result.b = 0
                return result
        
        void* ecx_10 = &result[1]
        
        if (ecx_10 != 0)
            result = nullptr
            int32_t ecx_11 = *(ecx_10 + 4)
            
            if (ecx_11 s> 0)
                do
                    if (*(*ecx_10 + (result << 2)) == 0x53)
                        goto label_514ffa
                    
                    result += 1
                while (result s< ecx_11)

result.b = 0
return result
