// 函数: _Z10ShowTaptipR3UI2
// 地址: 0x1041c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gUI2 + 0x5c)

if (x9 != 0)
    uint64_t x10_1 = zx.q(x9.w)
    
    if (x10_1.d u< *(gUI2 + 8))
        int64_t x11_2 = *gUI2
        
        if (*(x11_2 + x10_1 * 0x19a8 + 0x19a0) == x9)
            *(x11_2 + x10_1 * 0x19a8 + 0x13f1) = 0

*(arg1 + 0x13f1) = 1
*(gUI2 + 0x5c) = *(arg1 + 0x19a0)
