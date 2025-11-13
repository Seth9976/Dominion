// 函数: _ZN5Botan9sc_reduceEPh
// 地址: 0xd3f030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21_2 = zx.q(*(arg1 + 0x3c)) u>> 3
uint64_t x23_1 = zx.q(*(arg1 + 0x31)) u>> 7 & 0x1fffff
uint64_t x25_1 = zx.q(*(arg1 + 0x34)) u>> 4 & 0x1fffff
uint64_t x3_2 = (zx.q(*(arg1 + 0x2f)) | zx.q(zx.d(arg1[0x31]) << 0x10)) u>> 2 & 0x1fffff
int64_t x7_4 =
    (zx.q(*(arg1 + 0x2a)) | (zx.q(zx.d(arg1[0x2c]) << 0x10) & 0x1f0000)) - x21_2 * 0xa6f7d
uint64_t x21_4 = zx.q(*(arg1 + 0x39)) u>> 6 & 0x1fffff
int64_t x17_2 = (zx.q(*(arg1 + 0xf)) u>> 6 & 0x1fffff) + x3_2 * 0xa2c13
uint64_t x5_2 = (zx.q(*(arg1 + 0x37)) | zx.q(zx.d(arg1[0x39]) << 0x10)) u>> 1 & 0x1fffff
int64_t x3_3 = ((zx.q(zx.d(arg1[0x17]) << 0x10) & 0x1f0000) | zx.q(*(arg1 + 0x15)))
    + x23_1 * 0x72d18 + x25_1 * 0xa2c13 + x3_2 * 0x9fb67
int64_t x23_6 =
    (zx.q(*(arg1 + 0x24)) u>> 6 & 0x1fffff) - x21_2 * 0xf39ad + x21_4 * 0x215d1 - x5_2 * 0xa6f7d
int64_t x24_5 = x23_1 * 0xa2c13
    + (((-0xff0001 & zx.q(*(arg1 + 0x12))) | zx.q(arg1[0x14]) << 0x10) u>> 3) + x3_2 * 0x72d18
    + ((x17_2 + 0x100000) u>> 0x15)
int64_t x20_6 = (zx.q(*(arg1 + 0x1f)) u>> 4 & 0x1fffff) - x23_1 * 0xa6f7d + x25_1 * 0x215d1
    + x21_2 * 0x72d18 + x21_4 * 0x9fb67 - x5_2 * 0xf39ad
int64_t x4_7 = (((0xff00ffff & zx.q(*(arg1 + 0x1a))) | zx.q(zx.d(arg1[0x1c]) << 0x10)) u>> 2
    & 0x1fffff) - x23_1 * 0xf39ad + x25_1 * 0x9fb67 + x3_2 * 0x215d1 + x21_4 * 0xa2c13 + x5_2 * 0x72d18
int64_t x5_3 = (zx.q(*(arg1 + 0x1c)) u>> 7 & 0x1fffff) + x23_1 * 0x215d1 - x25_1 * 0xf39ad
    - x3_2 * 0xa6f7d + x21_2 * 0xa2c13 + x21_4 * 0x72d18 + x5_2 * 0x9fb67
int64_t x22_4 = x21_2 * 0x215d1
    + (((-0xff0001 & zx.q(*(arg1 + 0x27))) | zx.q(arg1[0x29]) << 0x10) u>> 3) - x21_4 * 0xa6f7d
    + ((x23_6 + 0x100000) s>> 0x15)
int64_t x25_3 = (zx.q(*(arg1 + 0x2c)) u>> 5 & 0x1fffff) + ((x7_4 + 0x100000) s>> 0x15)
int64_t x2_6 = (zx.q(*(arg1 + 0x17)) u>> 5 & 0x1fffff) + x23_1 * 0x9fb67 + x25_1 * 0x72d18
    - x3_2 * 0xf39ad + x5_2 * 0xa2c13 + ((x3_3 + 0x100000) u>> 0x15)
int64_t x1_7 = (((0xff00ffff & zx.q(*(arg1 + 0x22))) | zx.q(zx.d(arg1[0x24]) << 0x10)) u>> 1
    & 0x1fffff) - x25_1 * 0xa6f7d + x21_2 * 0x9fb67 - x21_4 * 0xf39ad + x5_2 * 0x215d1
    + ((x20_6 + 0x100000) s>> 0x15)
int64_t x5_4 = x5_3 + ((x4_7 + 0x100000) s>> 0x15)
int64_t x24_6 = x7_4 - ((x7_4 + 0x100000) & 0xffffffffffe00000) + ((x22_4 + 0x100000) s>> 0x15)
int64_t x19_9 = x23_6 - ((x23_6 + 0x100000) & 0xffffffffffe00000) + ((x1_7 + 0x100000) s>> 0x15)
int64_t x1_8 = x1_7 - ((x1_7 + 0x100000) & 0xffffffffffe00000)
int64_t x4_10 =
    x4_7 - x25_3 * 0xa6f7d - ((x4_7 + 0x100000) & 0xffffffffffe00000) + ((x2_6 + 0x100000) s>> 0x15)
int64_t x17_7 = x22_4 - ((x22_4 + 0x100000) & 0xffffffffffe00000)
int64_t x20_8 = x20_6 - ((x20_6 + 0x100000) & 0xffffffffffe00000) + ((x5_4 + 0x100000) s>> 0x15)
int64_t x1_9 = x17_2 - ((x17_2 + 0x100000) & 0x7ffffe00000) + x25_3 * 0x72d18 + x24_6 * 0x9fb67
    - x17_7 * 0xf39ad + x19_9 * 0x215d1 - x1_8 * 0xa6f7d
int64_t x16_2 = (zx.q(*arg1) | (zx.q(zx.d(arg1[2]) << 0x10) & 0x1f0000)) + x20_8 * 0xa2c13
int64_t x17_8 = x3_3 - ((x3_3 + 0x100000) & 0xfffffe00000) + ((x24_5 + 0x100000) u>> 0x15)
    - x25_3 * 0xf39ad + x24_6 * 0x215d1 - x17_7 * 0xa6f7d
int64_t x8_5 = (((0xff00ffff & zx.q(*(arg1 + 5))) | zx.q(zx.d(arg1[7]) << 0x10)) u>> 2 & 0x1fffff)
    + x19_9 * 0xa2c13 + x1_8 * 0x72d18 + x20_8 * 0x9fb67
int64_t x21_18 = (zx.q(*(arg1 + 0xa)) u>> 4 & 0x1fffff) + x24_6 * 0xa2c13 + x17_7 * 0x72d18
    + x19_9 * 0x9fb67 - x1_8 * 0xf39ad + x20_8 * 0x215d1
int64_t x5_6 = x5_4 - ((x5_4 + 0x100000) & 0xffffffffffe00000) + ((x4_10 + 0x100000) s>> 0x15)
int64_t x3_9 = (zx.q(*(arg1 + 2)) u>> 5 & 0x1fffff) + x1_8 * 0xa2c13 + x20_8 * 0x72d18
    + ((x16_2 + 0x100000) s>> 0x15)
int64_t x2_11 = x2_6 + x25_3 * 0x215d1 - ((x2_6 + 0x100000) & 0xffffffffffe00000) - x24_6 * 0xa6f7d
    + ((x17_8 + 0x100000) s>> 0x15)
int64_t x7_11 = x24_5 - ((x24_5 + 0x100000) & 0xffffffffffe00000) + x25_3 * 0x9fb67
    - x24_6 * 0xf39ad + x17_7 * 0x215d1 - x19_9 * 0xa6f7d + ((x1_9 + 0x100000) s>> 0x15)
int64_t x20_12 = (x5_6 + 0x100000) s>> 0x15
int64_t x19_13 = (zx.q(*(arg1 + 7)) u>> 7 & 0x1fffff) + x17_7 * 0xa2c13 + x19_9 * 0x72d18
    + x1_8 * 0x9fb67 - x20_8 * 0xf39ad + ((x8_5 + 0x100000) s>> 0x15)
int64_t x15_9 = (((0xff00ffff & zx.q(*(arg1 + 0xd))) | zx.q(zx.d(arg1[0xf]) << 0x10)) u>> 1
    & 0x1fffff) + x25_3 * 0xa2c13 + x24_6 * 0x72d18 + x17_7 * 0x9fb67 - x19_9 * 0xf39ad
    + x1_8 * 0x215d1 - x20_8 * 0xa6f7d + ((x21_18 + 0x100000) s>> 0x15)
int64_t x16_4 = x16_2 - ((x16_2 + 0x100000) & 0xffffffffffe00000) + x20_12 * 0xa2c13
int64_t x3_12 =
    x3_9 + x20_12 * 0x72d18 - ((x3_9 + 0x100000) & 0xffffffffffe00000) + (x16_4 s>> 0x15)
int64_t x7_19 = x8_5 + x20_12 * 0x9fb67 - ((x8_5 + 0x100000) & 0xffffffffffe00000)
    + ((x3_9 + 0x100000) s>> 0x15) + (x3_12 s>> 0x15)
int64_t x19_16 =
    x19_13 - x20_12 * 0xf39ad - ((x19_13 + 0x100000) & 0xffffffffffe00000) + (x7_19 s>> 0x15)
int64_t x22_14 = x21_18 + x20_12 * 0x215d1 - ((x21_18 + 0x100000) & 0xffffffffffe00000)
    + ((x19_13 + 0x100000) s>> 0x15) + (x19_16 s>> 0x15)
int64_t x23_16 =
    x15_9 - x20_12 * 0xa6f7d - ((x15_9 + 0x100000) & 0xffffffffffe00000) + (x22_14 s>> 0x15)
int64_t x2_14 = x1_9 - ((x1_9 + 0x100000) & 0xffffffffffe00000) + ((x15_9 + 0x100000) s>> 0x15)
    + (x23_16 s>> 0x15)
int64_t x1_12 = x7_11 - ((x7_11 + 0x100000) & 0xffffffffffe00000) + (x2_14 s>> 0x15)
int64_t x16_5 = x17_8 - ((x17_8 + 0x100000) & 0xffffffffffe00000) + ((x7_11 + 0x100000) s>> 0x15)
    + (x1_12 s>> 0x15)
int64_t x17_11 = x2_11 - ((x2_11 + 0x100000) & 0xffffffffffe00000) + (x16_5 s>> 0x15)
int64_t x15_13 = x4_10 - ((x4_10 + 0x100000) & 0xffffffffffe00000) + ((x2_11 + 0x100000) s>> 0x15)
    + (x17_11 s>> 0x15)
int64_t x8_9 = x5_6 - ((x5_6 + 0x100000) & 0xffffffffffe00000) + (x15_13 s>> 0x15)
int64_t x4_13 = x8_9 s>> 0x15
int64_t x5_8 = (x16_4 & 0x1fffff) + x4_13 * 0xa2c13
int64_t x10_2 = (x3_12 & 0x1fffff) + x4_13 * 0x72d18 + (x5_8 s>> 0x15)
arg1[1] = (x5_8 u>> 8).b
arg1[3] = (x10_2 u>> 3).b
int64_t x11_3 = (x7_19 & 0x1fffff) + x4_13 * 0x9fb67 + (x10_2 s>> 0x15)
arg1[4] = (x10_2 u>> 0xb).b
int64_t x12_2 = (x19_16 & 0x1fffff) - x4_13 * 0xf39ad + (x11_3 s>> 0x15)
arg1[5] = ((x10_2.d u>> 0x13).b & 3) | ((x11_3.d & 0x1fffff) << 2).b
arg1[8] = (x12_2 u>> 1).b
arg1[9] = (x12_2 u>> 9).b
int64_t x10_8 = (x22_14 & 0x1fffff) + x4_13 * 0x215d1 + (x12_2 s>> 0x15)
arg1[7] = ((x11_3.d u>> 0xe).b & 0x7f) | ((x12_2.d & 0x1fffff) << 7).b
arg1[0xb] = (x10_8 u>> 4).b
int64_t x9_7 = (x23_16 & 0x1fffff) - x4_13 * 0xa6f7d + (x10_8 s>> 0x15)
arg1[0xc] = (x10_8 u>> 0xc).b
arg1[0xe] = (x9_7 u>> 7).b
int64_t x11_12 = (x2_14 & 0x1fffff) + (x9_7 s>> 0x15)
arg1[0xd] = ((x10_8.d u>> 0x14).b & 1) | ((x9_7.d & 0x1fffff) << 1).b
arg1[0x10] = (x11_12 u>> 2).b
arg1[0xf] = ((x9_7.d u>> 0xf).b & 0x3f) | ((x11_12.d & 0x1fffff) << 6).b
arg1[0x11] = (x11_12 u>> 0xa).b
int64_t x9_11 = (x1_12 & 0x1fffff) + (x11_12 s>> 0x15)
arg1[0x12] = ((x11_12.d u>> 0x12).b & 7) | ((0x1fffffff & x9_11.d) << 3).b
arg1[0x13] = (x9_11 u>> 5).b
int64_t x10_18 = (x16_5 & 0x1fffff) + (x9_11 s>> 0x15)
int64_t x11_14 = (x17_11 & 0x1fffff) + (x10_18 s>> 0x15)
arg1[0x14] = (x9_11 u>> 0xd).b
arg1[0x15] = (x10_18.d).b
arg1[0x16] = (x10_18 u>> 8).b
arg1[0x18] = (x11_14 u>> 3).b
arg1[0x19] = (x11_14 u>> 0xb).b
int64_t x9_18 = (x15_13 & 0x1fffff) + (x11_14 s>> 0x15)
arg1[0x17] = ((x10_18.d u>> 0x10).b & 0x1f) | ((x11_14.d & 0x1fffff) << 5).b
int64_t x8_10 = x8_9 + (x9_18 u>> 0x15)
arg1[0x1c] = ((x9_18.d u>> 0xe).b & 0x7f) | ((0x1ffffff & x8_10.d) << 7).b
arg1[0x1d] = (x8_10 u>> 1).b
*arg1 = (x5_8.d).b
arg1[2] = ((x5_8.d u>> 0x10).b & 0x1f) | ((x10_2.d & 0x1fffff) << 5).b
arg1[6] = (x11_3 u>> 6).b
arg1[0xa] = ((x12_2.d u>> 0x11).b & 0xf) | ((x10_8.d & 0x1fffff) << 4).b
arg1[0x1b] = (x9_18 u>> 6).b
arg1[0x1a] = ((x11_14.d u>> 0x13).b & 3) | ((x9_18.d & 0x1fffff) << 2).b
arg1[0x1e] = (x8_10 u>> 9).b
arg1[0x1f] = (x8_10.d u>> 0x11).b & 0xf
