// 函数: _Z11RandomSplitR9RandomPCG
// 地址: 0xfa1d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_4 = *arg1
int64_t x9_1 = *(arg1 + 8)
int64_t x11 = x9_1 + x8_4 * 0x5851f42d4c957f2d
int64_t x13_1 = x9_1 + x11 * 0x5851f42d4c957f2d
int64_t x14_2 = x9_1 + x13_1 * 0x5851f42d4c957f2d
uint64_t x8_2 = zx.q(ror.d((x8_4 u>> 0x2d).d ^ (x8_4 u>> 0x1b).d, (x8_4 u>> 0x3b).d))
    | zx.q(ror.d((x11 u>> 0x2d).d ^ (x11 u>> 0x1b).d, (x11 u>> 0x3b).d)) << 0x20
int64_t x11_7 = (-0x1ffffffff
    & zx.q(ror.d((x14_2 u>> 0x2d).d ^ (x14_2 u>> 0x1b).d, (x14_2 u>> 0x3b).d)) << 0x21)
    | zx.q(ror.d((x13_1 u>> 0x2d).d ^ (x13_1 u>> 0x1b).d, (x13_1 u>> 0x3b).d)) << 1
*arg1 = x9_1 + x14_2 * 0x5851f42d4c957f2d
return (x11_7 | 1) + x8_2 * 0x5851f42d4c957f2d
