// 函数: _ZN5Botan9Power_Mod11window_bitsEmmNS0_11Usage_HintsE
// 地址: 0xdd8d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (arg1 == 0)
    x8 = 1
else if (arg1 u>= 0x59a)
    x8 = *((0 << 4) + 0x837240) + 1
else if (arg1 u>= 0x21b)
    x8 = *((1 << 4) + 0x837240) + 1
else if (arg1 u> 0xc4)
    x8 = *((2 << 4) + 0x837240) + 1
else if (arg1 u> 0x45)
    x8 = *((3 << 4) + 0x837240) + 1
else if (arg1 u>= 0x11)
    x8 = *((4 << 4) + 0x837240) + 1
else
    x8 = 1

int64_t x8_4

if ((arg3 & 1) == 0)
    x8_4 = x8
else
    x8_4 = x8 + 2

return x8_4 + (zx.q(arg3 u>> 0xa) & 1)
