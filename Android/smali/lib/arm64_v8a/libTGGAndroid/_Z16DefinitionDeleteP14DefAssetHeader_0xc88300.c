// 函数: _Z16DefinitionDeleteP14DefAssetHeader
// 地址: 0xc88300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*(arg1 + 0x10)) & 1) == 0)
    void* x21_1 = *(arg1 + 0x18)
    void* x20_1 = *arg1
    int32_t x22_1 = *(x21_1 + 0x10)
    
    if (x22_1 != 0)
        DefinitionDeleteField(x20_1, *(x21_1 + 8), nullptr)
        
        if (x22_1 s>= 2)
            int64_t x22_2 = 1
            int64_t x23_1 = 0x68
            int64_t x24_1
            
            do
                x24_1 = sx.q(*(x21_1 + 0x10))
                x22_2 += 1
                DefinitionDeleteField(x20_1, *(x21_1 + 8) + x23_1, nullptr)
                x23_1 += 0x68
            while (x22_2 s< x24_1)
    
    XFree(x20_1)
    *arg1 = 0

DefParseTree* x0_3 = *(arg1 + 8)

if (x0_3 != 0)
    DefParseTreeDelete(x0_3)
    *(arg1 + 8) = 0

return XFree(arg1) __tailcall
