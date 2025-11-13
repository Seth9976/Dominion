// 函数: _ZN5Botan7Charset12caseless_cmpEcc
// 地址: 0xe8b518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_1 = zx.d(arg1)
uint32_t x9 = zx.d(arg2)
uint32_t x8

if (x8_1 - 0x41 u< 0x1a)
    x8 = x8_1 | 0x20
else
    x8 = x8_1

uint32_t x9_1

if (x9 - 0x41 u< 0x1a)
    x9_1 = x9 | 0x20
else
    x9_1 = x9

return zx.q(x8 == x9_1 ? 1 : 0)
