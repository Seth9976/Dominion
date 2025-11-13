// 函数: _Z9RectUnionRK5RectIS1_
// 地址: 0xfa24c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg2
int32_t x12 = *(arg2 + 4)
int32_t x9 = *arg1
int32_t x11 = *(arg1 + 4)
int32_t x8

x8 = x9 s< x8_2 ? x9 : x8_2

*(arg1 + 8) s> *(arg2 + 8)
int32_t x10_1

x10_1 = x11 s< x12 ? x11 : x12

*(arg1 + 0xc) s> *(arg2 + 0xc)
return zx.q(x8) | zx.q(x10_1) << 0x20
