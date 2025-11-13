// 函数: _Z13RectIntersectRK5RectIS1_
// 地址: 0xfa2454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg2
int32_t x13 = *(arg2 + 4)
int32_t x9 = *arg1
int32_t x12 = *(arg1 + 4)
int32_t x10 = *(arg2 + 8)
int32_t x15 = *(arg2 + 0xc)
int32_t x11 = *(arg1 + 8)
int32_t x14 = *(arg1 + 0xc)
int32_t x8

x8 = x9 s> x8_1 ? x9 : x8_1

int32_t x11_1

x11_1 = x11 s< x10 ? x11 : x10

int32_t x9_1

x9_1 = x12 s> x13 ? x12 : x13

int32_t x10_1

x10_1 = x14 s< x15 ? x14 : x15

if (x8 s<= x11_1 && x9_1 s<= x10_1)
    return zx.q(x8) | zx.q(x9_1) << 0x20

return 0
