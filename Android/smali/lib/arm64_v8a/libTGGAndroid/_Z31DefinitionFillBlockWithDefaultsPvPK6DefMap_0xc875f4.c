// 函数: _Z31DefinitionFillBlockWithDefaultsPvPK6DefMap
// 地址: 0xc875f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = memset(arg1, 0, sx.q(*(arg2 + 0x14)))
int32_t x21 = *(arg2 + 0x10)

if (x21 != 0)
    DefField* x2_1 = *(arg2 + 8)
    result = DefinitionFillSubFieldWithDefaults(arg1, *(x2_1 + 0x18), x2_1)
    
    if (x21 s>= 2)
        int32_t x21_1 = 1
        int64_t x22_1 = 0x80
        int32_t x23_1
        
        do
            x23_1 = *(arg2 + 0x10)
            x21_1 += 1
            DefMap** x2_2 = *(arg2 + 8) + x22_1
            result = DefinitionFillSubFieldWithDefaults(arg1, *x2_2, &x2_2[-3])
            x22_1 += 0x68
        while (x21_1 s< x23_1)

return result
