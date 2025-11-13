// 函数: sub_631e90
// 地址: 0x631e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t var_20
int128_t* eax_1
int32_t edx
int32_t edx_1
eax_1, edx_1 = sub_5cf960(&var_20, edx, arg1, &var_20)
int128_t xmm0 = *eax_1
var_20 = xmm0
int128_t var_30
int128_t xmm0_1 = *sub_5cf960(&var_30, edx_1, arg2, &var_30)
int32_t result = var_20.d
int32_t ecx_2 = xmm0_1
var_30 = xmm0_1

if (result s>= ecx_2)
    if (result s> ecx_2)
        result.b = 1
        return result
    
    if (result != 3)
    label_631ef0:
        result = xmm0:4.d
        int32_t temp0_1 = var_30:4.d
        
        if (result s>= temp0_1)
            if (result s> temp0_1)
                result.b = 1
                return result
            
            result = xmm0:0xc.d
            int32_t temp2_1 = var_30:0xc.d
            
            if (result s>= temp2_1)
                if (result s<= temp2_1)
                    result.b = arg1 u< arg2
                    return result
                
                result.b = 1
                return result
    else
        result = xmm0:8.d
        int32_t temp1_1 = var_30:8.d
        
        if (result s>= temp1_1)
            if (result s<= temp1_1)
                goto label_631ef0
            
            result.b = 1
            return result

result.b = 0
return result
