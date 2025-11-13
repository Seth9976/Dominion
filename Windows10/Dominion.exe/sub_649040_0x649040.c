// 函数: sub_649040
// 地址: 0x649040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2 * 0x180
int32_t ecx_1 = arg1 * 0x180
int32_t edx = *(ecx_1 + 0xcf6c8c)
int32_t temp0 = *(result + 0xcf6c8c)

if (edx s>= temp0)
    if (edx s> temp0)
        result.b = 0
        return result
    
    int32_t edx_1 = *(ecx_1 + 0xcf6c90)
    
    if (edx_1 != 2)
        if (*(result + 0xcf6c90) == 2)
            if (edx_1 == 2)
                goto label_64909c
            
            result.b = 0
            return result
        
        if (edx_1 == 2)
            goto label_64909c
        
        if (edx_1 != 5)
        label_6490dd:
            int32_t xmm1_2 = *(ecx_1 + 0xcf6c94)
            int32_t xmm0_2 = *(result + 0xcf6c94)
            
            if (xmm0_2 f> xmm1_2)
                result.b = 0
                return result
            
            if (not(xmm1_2 f> xmm0_2))
            label_6490f7:
                result = *(result + 0xcf6c98)
                int32_t temp3_1 = *(ecx_1 + 0xcf6c98)
                
                if (temp3_1 s> result)
                    result.b = 0
                    return result
                
                if (temp3_1 s>= result)
                    result.b = arg1 s< arg2
                    return result
        else
            int32_t edx_3 = *(ecx_1 + 0xcf6b8c)
            int32_t temp2_1 = *(result + 0xcf6b8c)
            
            if (edx_3 u>= temp2_1)
                if (edx_3 u<= temp2_1)
                    goto label_6490dd
                
                result.b = 0
                return result
    else if (*(result + 0xcf6c90) == edx_1)
    label_64909c:
        int32_t edx_2 = *(ecx_1 + 0xcf6c9c)
        int32_t temp1_1 = *(result + 0xcf6c9c)
        
        if (edx_2 u>= temp1_1)
            if (edx_2 u> temp1_1)
                result.b = 0
                return result
            
            int32_t xmm1_1 = *(ecx_1 + 0xcf6c94)
            int32_t xmm0_1 = *(result + 0xcf6c94)
            
            if (not(xmm0_1 f> xmm1_1))
                if (not(xmm1_1 f> xmm0_1))
                    goto label_6490f7
                
                result.b = 0
                return result

result.b = 1
return result
