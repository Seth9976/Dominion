// 函数: sub_53fd50
// 地址: 0x53fd50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result
bool cond:4_1

if (arg1 s> 0xc0f)
    if (arg1 s> 0x1024)
        if (arg1 != 0x1201 && arg1 != 0x1205)
            cond:4_1 = arg1 == 0x123d
        label_53fe0b:
            
            if (not(cond:4_1))
                goto label_53fe31
    else if (arg1 != 0x1024)
        if (arg1 s> 0xe02)
            cond:4_1 = arg1 == 0xf06
            goto label_53fe0b
        
        if (arg1 != 0xe02 && arg1 != 0xd01)
            cond:4_1 = arg1 == 0xd04
            goto label_53fe0b
else if (arg1 != 0xc0f)
    if (arg1 s> 0x604)
        if (arg1 - 0xb01 u> 8)
        label_53fe31:
            uint32_t var_28[0x6]
            uint128_t xmm0_1 = *sub_576c00(&var_28, *(sub_571b30(arg1, data_cce9b0) + 0x90))
            int64_t var_50_1 = xmm0_1.q
            uint32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 8)
            
            if (xmm0_2 == 0 && var_50_1:4.d == xmm0_2)
                result = var_50_1.d
                
                if (result s>= 2 && result s<= 3
                        && (*(sub_571b30(arg1, data_cce9b0) + 0x98) & 4) != 0
                        && (*(sub_571b30(arg1, data_cce9b0) + 0x98) & 0x80) == 0)
                    result.b = 1
                    return result
        else
            switch (arg1)
                case 0xb04, 0xb05, 0xb06, 0xb07, 0xb08
                    goto label_53fe31
    else if (arg1 != 0x604)
        if (arg1 s> 0x400)
            cond:4_1 = arg1 == 0x503
            goto label_53fe0b
        
        if (arg1 != 0x400 && arg1 != 0x202)
            cond:4_1 = arg1 == 0x31b
            goto label_53fe0b
result.b = 0
return result
