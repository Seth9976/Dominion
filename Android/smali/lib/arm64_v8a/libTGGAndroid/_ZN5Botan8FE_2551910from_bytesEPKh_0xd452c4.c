// 函数: _ZN5Botan8FE_2551910from_bytesEPKh
// 地址: 0xd452c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
uint64_t x3_2 = zx.q(entry_x1[4])
int64_t x9_3 = (-0x3fc00001
    & ((-0x3fc001 & zx.q(entry_x1[1].b) << 6) | zx.q(*(entry_x1 + 5)) << 0xe))
    | zx.q(*(entry_x1 + 6)) << 0x16
int64_t x10_3 = (-0x7f80001
    & ((-0x7f801 & zx.q(*(entry_x1 + 0xa)) << 3) | zx.q(*(entry_x1 + 0xb)) << 0xb))
    | zx.q(entry_x1[3].b) << 0x13
int64_t x12_3 = (-0x1fe00001
    & ((-0x1fe001 & zx.q(*(entry_x1 + 0x17)) << 5) | zx.q(entry_x1[6].b) << 0xd))
    | zx.q(*(entry_x1 + 0x19)) << 0x15
int64_t x1_3 = (-0x3fc01 & zx.q(*(entry_x1 + 0x1d)) << 2) | zx.q(*(entry_x1 + 0x1e)) << 0xa
    | (zx.q(zx.d(*(entry_x1 + 0x1f)) << 0x12) & 0x1fc0000)
int64_t x8_1 = zx.q(*entry_x1) + ((x1_3 + 0x1000000) u>> 0x19) * 0x13
int64_t x11_3 = ((-0x7f800001
    & ((-0x7f8001 & zx.q(entry_x1[5].b) << 7) | zx.q(*(entry_x1 + 0x15)) << 0xf))
    | zx.q(*(entry_x1 + 0x16)) << 0x17) + ((x3_2 + 0x1000000) u>> 0x19)
int64_t x14_3 = ((-0x1fe00001
    & ((-0x1fe001 & zx.q(*(entry_x1 + 7)) << 5) | zx.q(entry_x1[2].b) << 0xd))
    | zx.q(*(entry_x1 + 9)) << 0x15) + ((x9_3 + 0x1000000) u>> 0x19)
int64_t x2_4 = ((-0x3fc0001
    & ((-0x3fc01 & zx.q(*(entry_x1 + 0xd)) << 2) | zx.q(*(entry_x1 + 0xe)) << 0xa))
    | zx.q(*(entry_x1 + 0xf)) << 0x12) + ((x10_3 + 0x1000000) u>> 0x19)
int64_t x17_5 = ((-0xff00001
    & ((-0xff001 & zx.q(*(entry_x1 + 0x1a)) << 4) | zx.q(*(entry_x1 + 0x1b)) << 0xc))
    | zx.q(entry_x1[7].b) << 0x14) + ((x12_3 + 0x1000000) u>> 0x19)
*(arg1 + 0x10) = x2_4.d - ((x2_4 + 0x2000000).d & 0xfc000000)
*(arg1 + 0x14) = x3_2.d - ((x3_2 + 0x1000000).d & 0xfe000000) + ((x2_4 + 0x2000000) u>> 0x1a).d
*(arg1 + 0x18) = x11_3.d - ((x11_3 + 0x2000000).d & 0xfc000000)
*(arg1 + 0x1c) = ((x11_3 + 0x2000000) u>> 0x1a).d + x12_3.d - ((x12_3 + 0x1000000).d & 0x3e000000)
*arg1 = x8_1.d - ((x8_1 + 0x2000000).d & 0xfc000000)
*(arg1 + 4) = x9_3.d - ((x9_3 + 0x1000000).d & 0x7e000000) + ((x8_1 + 0x2000000) u>> 0x1a).d
*(arg1 + 8) = x14_3.d - ((x14_3 + 0x2000000).d & 0xfc000000)
*(arg1 + 0xc) = ((x14_3 + 0x2000000) u>> 0x1a).d + x10_3.d - ((x10_3 + 0x1000000).d & 0xe000000)
*(arg1 + 0x20) = x17_5.d - ((x17_5 + 0x2000000).d & 0xfc000000)
*(arg1 + 0x24) = x1_3.d + ((x17_5 + 0x2000000) u>> 0x1a).d - ((x1_3 + 0x1000000).d & 0x2000000)
