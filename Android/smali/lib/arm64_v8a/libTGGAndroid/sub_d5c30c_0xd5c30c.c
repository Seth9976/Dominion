// 函数: sub_d5c30c
// 地址: 0xd5c30c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
int128_t var_c0
__builtin_memset(&var_c0, 0, 0x28)
int128_t v0_1 = arg2[1] + *(arg2 + 0x38)
int128_t var_90 = *arg2 + *(arg2 + 0x28)
int128_t var_80 = v0_1
v0_1.q = *(arg2 + 0x48)
int128_t v1
v1.q = arg2[2].q
*arg1 = var_90
arg1[1] = var_80
arg1[2].q = v1.q + v0_1.q
int128_t v0_3
int128_t v1_1
v0_3, v1_1 = memset(&var_90, 0, 0x28)
int128_t v0_4 = *(arg2 + 0x38) - arg2[1]
var_90 = *(arg2 + 0x28) - *arg2
int128_t var_80_1 = v0_4
v0_4.q = *(arg2 + 0x48)
v1_1.q = arg2[2].q
int64_t var_70_1 = (v0_4 - v1_1).q
int128_t v0_5 = var_90
*(arg1 + 0x48) = var_70_1
*(arg1 + 0x38) = var_80_1
*(arg1 + 0x28) = v0_5
memset(&var_90, 0, 0x28)
int128_t v0_6
int128_t v1_2
v0_6, v1_2 = Botan::FE_25519::mul(arg1, arg3)
arg1[7].q = var_70_1
arg1[5] = var_90
arg1[6] = var_80_1
memset(&var_90, 0, 0x28)
int128_t v0_7
int128_t v1_3
v0_7, v1_3 = Botan::FE_25519::mul(arg1 + 0x28, arg3 + 0x28)
v1_3 = var_90
*(arg1 + 0x48) = var_70_1
*(arg1 + 0x28) = v1_3
*(arg1 + 0x38) = var_80_1
memset(&var_90, 0, 0x28)
int128_t v0_8
int128_t v1_4
v0_8, v1_4 = Botan::FE_25519::mul(arg3 + 0x78, arg2 + 0x78)
v1_4 = var_90
*(arg1 + 0x98) = var_70_1
*(arg1 + 0x88) = var_80_1
*(arg1 + 0x78) = v1_4
memset(&var_90, 0, 0x28)
int128_t v0_9
int128_t v1_5
v0_9, v1_5 = Botan::FE_25519::mul(&arg2[5], arg3 + 0x50)
arg1[2].q = var_70_1
*arg1 = var_90
arg1[1] = var_80_1
int128_t v0_10
int128_t v1_6
v0_10, v1_6 = memset(&var_90, 0, 0x28)
v0_10 = *arg1
v1_6.d = v0_10.d << 1
v1_6:4.d = v0_10:4.d << 1
v1_6:8.d = v0_10:8.d << 1
v1_6:0xc.d = v0_10:0xc.d << 1
v0_10.d = arg1[1].d << 1
v0_10:4.d <<= 1
v0_10:8.d <<= 1
v0_10:0xc.d <<= 1
var_90 = v1_6
int128_t var_80_2 = v0_10
v0_10.q = arg1[2].q
v0_10.d <<= 1
v0_10:4.d <<= 1
int64_t var_70_2 = v0_10.q
var_c0 = var_90
int128_t v0_11
int128_t v1_7
v0_11, v1_7 = memset(&var_90, 0, 0x28)
int128_t v0_12 = arg1[6] - *(arg1 + 0x38)
var_90 = arg1[5] - *(arg1 + 0x28)
int128_t var_80_3 = v0_12
v0_12.q = arg1[7].q
v1_7.q = *(arg1 + 0x48)
arg1[2].q = (v0_12 - v1_7).q
*arg1 = var_90
arg1[1] = var_80_3
int128_t v0_14
int128_t v1_8
v0_14, v1_8 = memset(&var_90, 0, 0x28)
int128_t v0_15 = *(arg1 + 0x38) + arg1[6]
var_90 = *(arg1 + 0x28) + arg1[5]
int128_t var_80_4 = v0_15
v0_15.q = arg1[7].q
v1_8.q = *(arg1 + 0x48)
int64_t var_70_4 = (v1_8 + v0_15).q
v1_8 = var_90
*(arg1 + 0x48) = var_70_4
*(arg1 + 0x28) = v1_8
*(arg1 + 0x38) = var_80_4
memset(&var_90, 0, 0x28)
int128_t v0_17
v0_17.q = *(arg1 + 0x78)
int64_t v9 = var_c0.q
int128_t v8
v8.q = var_c0:8.q
int128_t v11
v11.q = var_80_2.q
int128_t v10
v10.q = var_80_2:8.q
int128_t v12
v12.q = var_70_2
int64_t v1_9 = v0_17.q + v9
v0_17.q = arg1[8].q
var_90.q = v1_9
var_90:8.q = (v0_17 + v8).q
int128_t v0_18
v0_18.q = *(arg1 + 0x88)
int128_t v1_10 = v0_18 + v11
v0_18.q = arg1[9].q
var_80_4.q = v1_10.q
var_80_4:8.q = (v0_18 + v10).q
int128_t v0_19
v0_19.q = *(arg1 + 0x98)
arg1[7].q = (v0_19 + v12).q
arg1[5] = var_90
arg1[6] = var_80_4
memset(&var_90, 0, 0x28)
int128_t v0_21
v0_21.q = *(arg1 + 0x78)
int64_t v1_11 = v9 - v0_21.q
v0_21.q = arg1[8].q
var_90.q = v1_11
var_90:8.q = (v8 - v0_21).q
int128_t v0_22
v0_22.q = *(arg1 + 0x88)
int128_t v1_12 = v11 - v0_22
v0_22.q = arg1[9].q
var_80_4.q = v1_12.q
var_80_4:8.q = (v10 - v0_22).q
int128_t v0_23
v0_23.q = *(arg1 + 0x98)
v1_12 = var_90
*(arg1 + 0x98) = (v12 - v0_23).q
*(arg1 + 0x78) = v1_12
*(arg1 + 0x88) = var_80_4
memset(&var_90, 0, 0x28)
return memset(&var_c0, 0, 0x28)
