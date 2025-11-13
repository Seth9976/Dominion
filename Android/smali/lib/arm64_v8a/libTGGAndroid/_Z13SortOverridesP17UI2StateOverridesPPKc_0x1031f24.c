// 函数: _Z13SortOverridesP17UI2StateOverridesPPKc
// 地址: 0x1031f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 8))

if (x9.d s>= 1)
    int64_t x10_1 = 0
    int64_t x11_1 = 0
    
    do
        int64_t x9_2 = *(*arg1 + x10_1)
        x10_1 += 0x30
        arg2[x11_1] = x9_2
        x9 = sx.q(*(arg1 + 8))
        x11_1 += 1
    while (x11_1 s< x9)

bool (* var_8)(char const*, char const*) = SortNames
return std::__ndk1::__sort<bool (*&)(char const*, char const*), char const**>(arg2, 
    &arg2[sx.q(x9.d)], &var_8)
