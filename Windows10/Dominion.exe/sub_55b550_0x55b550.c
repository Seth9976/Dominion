// 函数: sub_55b550
// 地址: 0x55b550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, data_cce9b0)
int32_t result

if (((*(eax + 0x98) & 0x7f000400) | (*(eax + 0x9c) & 0x940)) == 0)
    bool cond:1_1
    
    if (arg1 s> 0xb13)
        if (arg1 != 0xb18)
            cond:1_1 = arg1 == 0xc2c
        label_55b5bd:
            
            if (not(cond:1_1))
                uint32_t var_28[0x6]
                uint128_t xmm0_1 = *sub_576c00(&var_28, *(sub_571b30(arg1, data_cce9b0) + 0x90))
                int64_t var_50_1 = xmm0_1.q
                int32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 8)
                
                if (xmm0_2 == 0 && var_50_1:4.d == xmm0_2)
                    result = var_50_1.d
                    
                    if (result s>= 5 && result s<= 5
                            && (*(sub_571b30(arg1, data_cce9b0) + 0x98) & 4) != 0
                            && (*(sub_571b30(arg1, data_cce9b0) + 0x9c) & 0x4000) == 0
                            && (*(sub_571b30(arg1, data_cce9b0) + 0x98) & 0x80) == 0)
                        result.b = 1
                        return result
    else if (arg1 != 0xb13 && arg1 != 0x716)
        cond:1_1 = arg1 == 0x91e
        goto label_55b5bd

result.b = 0
return result
