// 函数: _ZN5Botan6Sodium14sodium_compareEPKhS2_m
// 地址: 0xe36f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 0

int32_t x8 = 0
uint64_t i

do
    uint32_t x9_1 = zx.d(*arg1)
    arg1 = &arg1[1]
    uint32_t x10_1 = zx.d(*arg2)
    arg2 = &arg2[1]
    i = arg3
    arg3 -= 1
    uint32_t x11_1 = x10_1 ^ x9_1
    int32_t x11_2 = ((x11_1 - 1) & not.d(x11_1) & 0x80) << 0x18 s>> 0x1f
    x8 = (x8 & x11_2) | (((((((x9_1 - x10_1) ^ x9_1) | x11_1) ^ x9_1) & 0x80) << 0x18 s>> 0x1f | 1)
        & not.d(x11_2))
while (i != 1)
return zx.q(sx.d(x8.b))
