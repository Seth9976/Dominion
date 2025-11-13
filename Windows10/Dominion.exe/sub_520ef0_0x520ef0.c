// 函数: sub_520ef0
// 地址: 0x520ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, data_cce9b0)
int32_t result

if (((*(eax + 0x98) & 0x7f000400) | (*(eax + 0x9c) & 0x940)) == 0)
    uint32_t var_2c[0x5]
    uint128_t xmm0_1 = *sub_576c00(&var_2c, *(sub_571b30(arg1, data_cce9b0) + 0x90))
    int64_t var_18_1 = xmm0_1.q
    int32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 8)
    
    if (xmm0_2 == 0 && var_18_1:4.d == xmm0_2)
        result = var_18_1.d
        
        if (result s>= 2)
            result.b = result s<= 3
            return result

result.b = 0
return result
