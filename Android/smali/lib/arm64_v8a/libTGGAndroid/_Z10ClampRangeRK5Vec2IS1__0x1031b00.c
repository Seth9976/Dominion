// 函数: _Z10ClampRangeRK5Vec2IS1_
// 地址: 0x1031b00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1
int32_t x10 = *arg2
int32_t x9 = *(arg2 + 4)

if (x8_2 s> x10)
    int32_t x10_1 = *(arg1 + 4)
    int32_t x9_1 = x8_2 - x10 + x9
    int32_t x9_2
    
    x9_2 = x9_1 s> x10_1 ? x10_1 : x9_1
    
    return zx.q(x8_2) | zx.q(x9_2) << 0x20

int32_t x11_1 = *(arg1 + 4)

if (x11_1 s>= x9)
    return zx.q(x10) | zx.q(x9) << 0x20

int32_t x9_3 = x11_1 - x9 + x10
int32_t x8

x8 = x9_3 s< x8_2 ? x8_2 : x9_3

return zx.q(x8) | zx.q(x11_1) << 0x20
