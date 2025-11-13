// 函数: _Z13DefinitionNewPK6DefMap
// 地址: 0xc88c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = XCalloc(0x20)
void* x0_1 = XMalloc(*(arg1 + 0x14))
memset(x0_1, 0, sx.q(*(arg1 + 0x14)))
int32_t x22 = *(arg1 + 0x10)

if (x22 != 0)
    DefField* x2_1 = *(arg1 + 8)
    DefinitionFillSubFieldWithDefaults(x0_1, *(x2_1 + 0x18), x2_1)
    
    if (x22 s>= 2)
        int64_t x22_1 = 1
        int64_t x23_1 = 0x80
        int64_t x24_1
        
        do
            x24_1 = sx.q(*(arg1 + 0x10))
            x22_1 += 1
            DefMap** x2_2 = *(arg1 + 8) + x23_1
            DefinitionFillSubFieldWithDefaults(x0_1, *x2_2, &x2_2[-3])
            x23_1 += 0x68
        while (x22_1 s< x24_1)

*result = x0_1
result[3] = arg1
return result
