// 函数: _Z14SkipWhiteSpacePPKc
// 地址: 0xf90d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x8 = *arg1

while (true)
    uint32_t x9_1 = zx.d(*x8)
    
    if (x9_1 != 0x20 && x9_1 != 9)
        *arg1 = x8
        return 
    
    x8 = &x8[1]
