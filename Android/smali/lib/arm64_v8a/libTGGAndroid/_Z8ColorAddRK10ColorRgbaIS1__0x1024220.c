// 函数: _Z8ColorAddRK10ColorRgbaIS1_
// 地址: 0x1024220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg2) + zx.d(*arg1)
uint32_t x10_1 = zx.d(*(arg2 + 1)) + zx.d(*(arg1 + 1))
uint32_t x9_2 = zx.d(*(arg2 + 2)) + zx.d(*(arg1 + 2))
uint32_t x12_1 = zx.d(*(arg2 + 3)) + zx.d(*(arg1 + 3))
int32_t x8_2

if (x8 u> 0xff)
    x8_2 = 0xff
else
    x8_2 = x8 & 0xff

int32_t x10_3

if (x10_1 u> 0xff)
    x10_3 = 0xff00
else
    x10_3 = (x10_1 & 0xff) << 8

int32_t x9_4

if (x9_2 u> 0xff)
    x9_4 = 0xff0000
else
    x9_4 = (x9_2 & 0xff) << 0x10

uint32_t x10_4

if (x12_1 u> 0xff)
    x10_4 = -0x1000000
else
    x10_4 = x12_1 << 0x18

return zx.q(x10_3) | zx.q(x8_2) | zx.q(x9_4) | zx.q(x10_4)
