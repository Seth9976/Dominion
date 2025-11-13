// 函数: _ZN5Botan16bigint_mod_sub_nILm4EEEvPjPKjS3_S1_
// 地址: 0xcd959c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_11 = *arg1
int32_t x9_25 = arg1[1]
uint32_t const x10 = *arg2
int32_t x11 = arg2[1]
int32_t x12 = arg1[2]
int32_t x13 = arg1[3]
int32_t x14 = arg2[2]
int32_t x15 = arg2[3]
uint32_t const x16 = *arg3
int32_t x5 = x11 ^ x9_25
int32_t x6 = x14 ^ x12
uint32_t x17 = x10 ^ x8_11
uint32_t x10_1 = x16 - x10
int32_t x7 = x15 ^ x13
*arg4 = x10_1
int32_t x12_1 = arg3[1]
int32_t x14_4 = arg2[1]
int32_t x15_4 = ((x5 - 1) & not.d(x5)) s>> 0x1f
int32_t x15_5 = x16 u< x10 ? 1 : 0
int32_t x12_2 = x12_1 - x14_4
int32_t x8_4 = (((((x8_11 - x10) ^ x8_11) | x17) ^ x8_11) s>> 0x1f
    & not.d(((x17 - 1) & not.d(x17)) s>> 0x1f) & x15_4)
    | (not.d(x15_4) & ((((x9_25 - x11) ^ x9_25) | x5) ^ x9_25) s>> 0x1f)
arg4[1] = x12_2 - x15_5
int32_t x17_2 = ((x6 - 1) & not.d(x6)) s>> 0x1f
int32_t x12_4 = arg3[2]
int32_t x14_5 = arg2[2]
int32_t x9_3 = (x12_1 u< x14_4 ? 1 : 0) | (x12_2 u< x15_5 ? 1 : 0)
int32_t x11_7 = x12_4 - x14_5
arg4[2] = x11_7 - x9_3
arg4[3] = arg3[3] - arg2[3] - ((x12_4 u< x14_5 ? 1 : 0) | (x11_7 u< x9_3 ? 1 : 0))
uint32_t x9_8 = *arg1
int32_t x12_7 = arg1[1]
uint32_t const x11_9 = *arg2
int32_t x4_4 = ((x7 - 1) & not.d(x7)) s>> 0x1f
int32_t x8_8 = (((x8_4 & x17_2) | (not.d(x17_2) & ((((x12 - x14) ^ x12) | x6) ^ x12) s>> 0x1f))
    & x4_4) | (not.d(x4_4) & ((((x13 - x15) ^ x13) | x7) ^ x13) s>> 0x1f)
int32_t x13_3 = x10_1 + x9_8 u< x10_1 ? 1 : 0
*arg1 = ((x10_1 + x9_8) & x8_8) | ((x9_8 - x11_9) & not.d(x8_8))
int32_t x9_12 = arg4[1]
int32_t x11_10 = arg2[1]
int32_t x10_4 = x9_8 u< x11_9 ? 1 : 0
int32_t x9_13 = x9_12 + x12_7
int32_t x11_11 = x12_7 - x11_10
int32_t x13_5 = (x9_12 + x12_7 u< x9_12 ? 1 : 0) | (x9_13 + x13_3 u< x9_13 ? 1 : 0)
arg1[1] = ((x9_13 + x13_3) & x8_8) | ((x11_11 - x10_4) & not.d(x8_8))
int32_t x12_8 = arg1[2]
int32_t x15_6 = arg1[3]
int32_t x9_17 = arg4[2]
int32_t x11_12 = arg2[2]
int32_t x10_8 = (x12_7 u< x11_10 ? 1 : 0) | (x11_11 u< x10_4 ? 1 : 0)
int32_t x9_18 = x9_17 + x12_8
int32_t x11_13 = x12_8 - x11_12
arg1[2] = ((x9_18 + x13_5) & x8_8) | ((x11_13 - x10_8) & not.d(x8_8))
int32_t x8_10 = ((arg4[3] + x15_6
    + ((x9_17 + x12_8 u< x9_17 ? 1 : 0) | (x9_18 + x13_5 u< x9_18 ? 1 : 0))) & x8_8)
    | ((x15_6 - arg2[3] - ((x12_8 u< x11_12 ? 1 : 0) | (x11_13 u< x10_8 ? 1 : 0))) & not.d(x8_8))
arg1[3] = x8_10
