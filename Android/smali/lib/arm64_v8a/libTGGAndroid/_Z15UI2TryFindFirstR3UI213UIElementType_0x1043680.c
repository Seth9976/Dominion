// 函数: _Z15UI2TryFindFirstR3UI213UIElementType
// 地址: 0x1043680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x167c) == arg2)
    return arg1

int32_t x21_1 = *(arg1 + 0x1970)

if (x21_1 != 0)
    uint64_t x24_1 = 0
    int64_t x22_1 = *gUI2
    bool cond:0_1
    
    do
        UI2* x0_1 = UI2TryFindFirst(
            x22_1 + zx.q(*(arg1 + (x24_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, zx.q(arg2))
        
        if (x0_1 != 0)
            return x0_1
        
        cond:0_1 = x21_1 != x24_1.d + 1
        x24_1 = zx.q(x24_1.d + 1)
    while (cond:0_1)

return nullptr
