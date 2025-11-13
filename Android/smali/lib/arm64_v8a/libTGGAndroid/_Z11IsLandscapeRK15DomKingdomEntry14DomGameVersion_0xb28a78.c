// 函数: _Z11IsLandscapeRK15DomKingdomEntry14DomGameVersion
// 地址: 0xb28a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1

if (x8_2 == 3)
    int64_t x8_1 = *(arg1 + 8)
    
    if (x8_1 == 0x20000000 || x8_1 == 0x4000000000 || x8_1 == 0x10000000000)
        return 1
    
    if (x8_1 == 0x400 || x8_1 == 0x8000000 || x8_1 == 0x10000000)
        return 1
else if (x8_2 == 1)
    return IsLandscape(zx.q(*(arg1 + 4)), arg2) __tailcall

return 0
