// 函数: _Z13ColorRgbaIAddRK10ColorRgbaIS1_
// 地址: 0xf64194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg2) + zx.d(*arg1)
uint32_t x10_1 = zx.d(*(arg2 + 1)) + zx.d(*(arg1 + 1))
uint32_t x8_1

x8_1 = x8 u< 0xff ? x8 : 0xff

uint32_t x9_2 = zx.d(*(arg2 + 2)) + zx.d(*(arg1 + 2))
char x10_2

x10_2 = x10_1 u< 0xff ? x10_1.b : -1

uint32_t x12_1 = zx.d(*(arg2 + 3)) + zx.d(*(arg1 + 3))
char x9_3

x9_3 = x9_2 u< 0xff ? x9_2.b : -1

char x11_1

x11_1 = x12_1 u< 0xff ? x12_1.b : -1

return (0xffffff
    & ((0xff00ffff & (zx.q(zx.d(x10_2) << 8) | zx.q(x8_1))) | zx.q(zx.d(x9_3) << 0x10)))
    | zx.q(zx.d(x11_1) << 0x18)
