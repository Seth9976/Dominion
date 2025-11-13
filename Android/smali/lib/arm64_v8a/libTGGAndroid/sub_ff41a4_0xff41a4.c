// 函数: sub_ff41a4
// 地址: 0xff41a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 0xb8)

if (x8 u< *(arg1 + 0xc0))
    *(arg1 + 0xb8) = &x8[1]
    return zx.q(*x8)

if (*(arg1 + 0x30) == 0)
    return 0

int32_t x0_2 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))

if (x0_2 != 0)
    uint64_t x0_3 = zx.q(*(arg1 + 0x38))
    *(arg1 + 0xb8) = arg1 + 0x39
    *(arg1 + 0xc0) = arg1 + 0x38 + sx.q(x0_2)
    return x0_3

*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0xb8) = arg1 + 0x39
*(arg1 + 0xc0) = arg1 + 0x39
return x0_2
