// 函数: _Z19SymbolMapLookupNamePK9SymbolMapi
// 地址: 0xfd6130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const x0 = *(arg1 + 8)

if (x0 == 0)
    return &data_793a18

if (*arg1 != arg2)
    void* __offset(SymbolMap, 0x18) x8 = arg1 + 0x18
    x0 = &data_793a18
    
    while (true)
        void* x9_1 = *x8
        
        if (x9_1 == 0)
            break
        
        int32_t x10_1 = *(x8 - 8)
        x8 += 0x10
        
        if (x10_1 == arg2)
            return x9_1

return x0
