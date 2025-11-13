// 函数: sub_d5c6cc
// 地址: 0xd5c6cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80
__builtin_memset(&var_80, 0, 0x28)
int128_t v0
int128_t v1
v0, v1 = Botan::FE_25519::sqr_iter(arg2, 1)
int64_t var_30
arg1[2].q = var_30
int128_t var_50
*arg1 = var_50
int128_t var_40
arg1[1] = var_40
memset(&var_50, 0, 0x28)
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = Botan::FE_25519::sqr_iter(arg2 + 0x28, 1)
arg1[7].q = var_30
arg1[5] = var_50
arg1[6] = var_40
memset(&var_50, 0, 0x28)
int128_t v0_2
int128_t v1_2
v0_2, v1_2 = Botan::FE_25519::sqr2(arg2 + 0x50)
v1_2 = var_50
*(arg1 + 0x98) = var_30
*(arg1 + 0x88) = var_40
*(arg1 + 0x78) = v1_2
int128_t v0_3
int128_t v1_3
v0_3, v1_3 = memset(&var_50, 0, 0x28)
int128_t v0_4 = *(arg2 + 0x38) + *(arg2 + 0x10)
var_50 = *(arg2 + 0x28) + *arg2
int128_t var_40_1 = v0_4
v0_4.q = *(arg2 + 0x20)
v1_3.q = *(arg2 + 0x48)
int64_t var_30_1 = (v1_3 + v0_4).q
int128_t v0_5 = var_50
*(arg1 + 0x48) = var_30_1
*(arg1 + 0x38) = var_40_1
*(arg1 + 0x28) = v0_5
memset(&var_50, 0, 0x28)
int128_t v0_6
int128_t v1_4
v0_6, v1_4 = Botan::FE_25519::sqr_iter(arg1 + 0x28, 1)
var_80 = var_50
int128_t v0_7
int128_t v1_5
v0_7, v1_5 = memset(&var_50, 0, 0x28)
int128_t v0_8 = arg1[1] + arg1[6]
var_50 = *arg1 + arg1[5]
int128_t var_40_2 = v0_8
v0_8.q = arg1[7].q
v1_5.q = arg1[2].q
int64_t var_30_2 = (v1_5 + v0_8).q
v1_5 = var_50
*(arg1 + 0x48) = var_30_2
*(arg1 + 0x28) = v1_5
*(arg1 + 0x38) = var_40_2
int128_t v0_10
int128_t v1_6
v0_10, v1_6 = memset(&var_50, 0, 0x28)
int128_t v0_11 = arg1[6] - arg1[1]
var_50 = arg1[5] - *arg1
int128_t var_40_3 = v0_11
v0_11.q = arg1[7].q
v1_6.q = arg1[2].q
arg1[7].q = (v0_11 - v1_6).q
arg1[5] = var_50
arg1[6] = var_40_3
int128_t v0_13
int128_t v1_7
int128_t v2_3
v0_13, v1_7, v2_3 = memset(&var_50, 0, 0x28)
v1_7.q = var_30_1
int128_t v0_14 = var_40_1 - *(arg1 + 0x38)
var_50 = var_80 - *(arg1 + 0x28)
int128_t var_40_4 = v0_14
v0_14.q = *(arg1 + 0x48)
arg1[2].q = (v1_7 - v0_14).q
*arg1 = var_50
arg1[1] = var_40_4
int128_t v0_16
int128_t v1_8
v0_16, v1_8 = memset(&var_50, 0, 0x28)
int128_t v0_17 = *(arg1 + 0x88) - arg1[6]
var_50 = *(arg1 + 0x78) - arg1[5]
int128_t var_40_5 = v0_17
v0_17.q = *(arg1 + 0x98)
v1_8.q = arg1[7].q
int64_t var_30_5 = (v0_17 - v1_8).q
v1_8 = var_50
*(arg1 + 0x98) = var_30_5
*(arg1 + 0x78) = v1_8
*(arg1 + 0x88) = var_40_5
memset(&var_50, 0, 0x28)
return memset(&var_80, 0, 0x28)
