// 函数: _ZN5Botan16bigint_mod_sub_nILm6EEEvPjPKjS3_S1_
// 地址: 0xcd979c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = *arg1
int32_t x9 = arg1[1]
uint32_t const x10 = *arg2
int32_t x12 = arg2[1]
int32_t x11 = arg1[2]
int32_t x13 = arg1[3]
int32_t x14 = arg2[2]
int32_t x15 = arg2[3]
int32_t x16 = arg1[4]
int32_t x17 = arg1[5]
int32_t x4 = arg2[4]
int32_t x5 = arg2[5]
uint32_t const x6 = *arg3
int32_t x20 = x12 ^ x9
int32_t x21 = x14 ^ x11
int32_t x22 = x15 ^ x13
int32_t x23 = x4 ^ x16
uint32_t x7 = x10 ^ x8
uint32_t x10_1 = x6 - x10
int32_t x24 = x5 ^ x17
*arg4 = x10_1
int32_t x14_4 = arg3[1]
int32_t x16_1 = arg2[1]
int32_t x17_1 = ((x20 - 1) & not.d(x20)) s>> 0x1f
int32_t x4_4 = ((x21 - 1) & not.d(x21)) s>> 0x1f
int32_t x17_2 = x6 u< x10 ? 1 : 0
int32_t x14_5 = x14_4 - x16_1
int32_t x8_5 = (((((x8 - x10) ^ x8) | x7) ^ x8) s>> 0x1f & not.d(((x7 - 1) & not.d(x7)) s>> 0x1f)
    & x17_1) | (not.d(x17_1) & ((((x9 - x12) ^ x9) | x20) ^ x9) s>> 0x1f)
arg4[1] = x14_5 - x17_2
int32_t x11_3 = arg3[2]
int32_t x14_7 = arg2[2]
int32_t x5_4 = ((x22 - 1) & not.d(x22)) s>> 0x1f
int32_t x9_4 = (x14_4 u< x16_1 ? 1 : 0) | (x14_5 u< x17_2 ? 1 : 0)
int32_t x11_4 = x11_3 - x14_7
int32_t x8_9 = (((x8_5 & x4_4) | (not.d(x4_4) & ((((x11 - x14) ^ x11) | x21) ^ x11) s>> 0x1f))
    & x5_4) | (not.d(x5_4) & ((((x13 - x15) ^ x13) | x22) ^ x13) s>> 0x1f)
arg4[2] = x11_4 - x9_4
int32_t x9_6 = arg3[3]
int32_t x11_5 = arg2[3]
int32_t x12_7 = (x11_3 u< x14_7 ? 1 : 0) | (x11_4 u< x9_4 ? 1 : 0)
int32_t x9_7 = x9_6 - x11_5
arg4[3] = x9_7 - x12_7
int32_t x7_2 = ((x23 - 1) & not.d(x23)) s>> 0x1f
int32_t x9_9 = arg3[4]
int32_t x12_8 = arg2[4]
int32_t x11_7 = (x9_6 u< x11_5 ? 1 : 0) | (x9_7 u< x12_7 ? 1 : 0)
int32_t x9_10 = x9_9 - x12_8
arg4[4] = x9_10 - x11_7
arg4[5] = arg3[5] - arg2[5] - ((x9_9 u< x12_8 ? 1 : 0) | (x9_10 u< x11_7 ? 1 : 0))
uint32_t x9_15 = *arg1
int32_t x12_11 = arg1[1]
uint32_t const x11_9 = *arg2
int32_t x19_4 = ((x24 - 1) & not.d(x24)) s>> 0x1f
int32_t x8_13 = (((x8_9 & x7_2) | (not.d(x7_2) & ((((x16 - x4) ^ x16) | x23) ^ x16) s>> 0x1f))
    & x19_4) | (not.d(x19_4) & ((((x17 - x5) ^ x17) | x24) ^ x17) s>> 0x1f)
int32_t x13_5 = x10_1 + x9_15 u< x10_1 ? 1 : 0
*arg1 = ((x10_1 + x9_15) & x8_13) | ((x9_15 - x11_9) & not.d(x8_13))
int32_t x9_19 = arg4[1]
int32_t x11_10 = arg2[1]
int32_t x10_4 = x9_15 u< x11_9 ? 1 : 0
int32_t x9_20 = x9_19 + x12_11
int32_t x11_11 = x12_11 - x11_10
int32_t x13_7 = (x9_19 + x12_11 u< x9_19 ? 1 : 0) | (x9_20 + x13_5 u< x9_20 ? 1 : 0)
arg1[1] = ((x9_20 + x13_5) & x8_13) | ((x11_11 - x10_4) & not.d(x8_13))
int32_t x12_12 = arg1[2]
int32_t x15_6 = arg1[3]
int32_t x9_24 = arg4[2]
int32_t x11_12 = arg2[2]
int32_t x10_8 = (x12_11 u< x11_10 ? 1 : 0) | (x11_11 u< x10_4 ? 1 : 0)
int32_t x9_25 = x9_24 + x12_12
int32_t x11_13 = x12_12 - x11_12
int32_t x12_13 = (x9_24 + x12_12 u< x9_24 ? 1 : 0) | (x9_25 + x13_7 u< x9_25 ? 1 : 0)
arg1[2] = ((x9_25 + x13_7) & x8_13) | ((x11_13 - x10_8) & not.d(x8_13))
int32_t x9_29 = arg4[3]
int32_t x11_14 = arg2[3]
int32_t x10_12 = (x12_12 u< x11_12 ? 1 : 0) | (x11_13 u< x10_8 ? 1 : 0)
int32_t x9_30 = x9_29 + x15_6
int32_t x11_15 = x15_6 - x11_14
int32_t x12_15 = (x9_29 + x15_6 u< x9_29 ? 1 : 0) | (x9_30 + x12_13 u< x9_30 ? 1 : 0)
arg1[3] = ((x9_30 + x12_13) & x8_13) | ((x11_15 - x10_12) & not.d(x8_13))
int32_t x14_12 = arg1[4]
int32_t x15_7 = arg1[5]
int32_t x9_34 = arg4[4]
int32_t x11_16 = arg2[4]
int32_t x10_16 = (x15_6 u< x11_14 ? 1 : 0) | (x11_15 u< x10_12 ? 1 : 0)
int32_t x9_35 = x9_34 + x14_12
int32_t x11_17 = x14_12 - x11_16
arg1[4] = ((x9_35 + x12_15) & x8_13) | ((x11_17 - x10_16) & not.d(x8_13))
int32_t x8_15 = ((arg4[5] + x15_7
    + ((x9_34 + x14_12 u< x9_34 ? 1 : 0) | (x9_35 + x12_15 u< x9_35 ? 1 : 0))) & x8_13) | ((x15_7
    - arg2[5] - ((x14_12 u< x11_16 ? 1 : 0) | (x11_17 u< x10_16 ? 1 : 0))) & not.d(x8_13))
arg1[5] = x8_15
