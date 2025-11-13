// 函数: _Z21DefinitionDeleteBlockPvPK6DefMap
// 地址: 0xc88288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg2 + 0x10)

if (x21 != 0)
    DefinitionDeleteField(arg1, *(arg2 + 8), nullptr)
    
    if (x21 s>= 2)
        int64_t x21_1 = 1
        int64_t x22_1 = 0x68
        int64_t x23_1
        
        do
            x23_1 = sx.q(*(arg2 + 0x10))
            x21_1 += 1
            DefinitionDeleteField(arg1, *(arg2 + 8) + x22_1, nullptr)
            x22_1 += 0x68
        while (x21_1 s< x23_1)

return XFree(arg1) __tailcall
