// 函数: _Z22DefCalcHashSymbolTablePK9SymbolMap5Crc32
// 地址: 0xc88cc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x2 = arg2

if (*(arg1 + 8) != 0)
    SymbolMap const* x19_1 = arg1
    int64_t i
    
    do
        uint32_t x0_1 = memcrc32(x19_1, 4, x2)
        char* x20_1 = *(x19_1 + 8)
        uint32_t x0_5 = memcrc32(x20_1, strlen(x20_1), x0_1)
        i = *(x19_1 + 0x18)
        x2 = x0_5
        x19_1 += 0x10
    while (i != 0)

return zx.q(x2)
