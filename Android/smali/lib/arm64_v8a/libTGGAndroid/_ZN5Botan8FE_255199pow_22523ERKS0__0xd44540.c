// 函数: _ZN5Botan8FE_255199pow_22523ERKS0_
// 地址: 0xd44540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_70
__builtin_memset(&var_70, 0, 0x28)
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
int128_t v0
int128_t v1
v0, v1 = Botan::FE_25519::sqr_iter(arg1, 1)
int128_t var_48
v1 = var_48
int64_t var_28
Botan::FE_25519* entry_x8
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1
int128_t var_38
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = Botan::FE_25519::sqr_iter(entry_x8, 2)
var_70 = var_48
int128_t var_60 = var_38
int64_t var_50 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_2
int128_t v1_2
v0_2, v1_2 = Botan::FE_25519::mul(arg1, &var_70)
var_70 = var_48
int128_t var_60_1 = var_38
int64_t var_50_1 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_3
int128_t v1_3
v0_3, v1_3 = Botan::FE_25519::mul(entry_x8, &var_70)
v1_3 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_3
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_4
int128_t v1_4
v0_4, v1_4 = Botan::FE_25519::sqr_iter(entry_x8, 1)
v1_4 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_4
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_5
int128_t v1_5
v0_5, v1_5 = Botan::FE_25519::mul(&var_70, entry_x8)
v1_5 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_5
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_6
int128_t v1_6
v0_6, v1_6 = Botan::FE_25519::sqr_iter(entry_x8, 5)
var_70 = var_48
int128_t var_60_2 = var_38
int64_t var_50_2 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_7
int128_t v1_7
v0_7, v1_7 = Botan::FE_25519::mul(&var_70, entry_x8)
v1_7 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_7
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_8
int128_t v1_8
v0_8, v1_8 = Botan::FE_25519::sqr_iter(entry_x8, 0xa)
var_70 = var_48
int128_t var_60_3 = var_38
int64_t var_50_3 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_9
int128_t v1_9
v0_9, v1_9 = Botan::FE_25519::mul(&var_70, entry_x8)
var_70 = var_48
int128_t var_60_4 = var_38
int64_t var_50_4 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_10
int128_t v1_10
v0_10, v1_10 = Botan::FE_25519::sqr_iter(&var_70, 0x14)
var_a0 = var_48
int128_t var_90 = var_38
int64_t var_80 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_11
int128_t v1_11
v0_11, v1_11 = Botan::FE_25519::mul(&var_a0, &var_70)
var_70 = var_48
int128_t var_60_5 = var_38
int64_t var_50_5 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_12
int128_t v1_12
v0_12, v1_12 = Botan::FE_25519::sqr_iter(&var_70, 0xa)
var_70 = var_48
int128_t var_60_6 = var_38
int64_t var_50_6 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_13
int128_t v1_13
v0_13, v1_13 = Botan::FE_25519::mul(&var_70, entry_x8)
v1_13 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_13
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_14
int128_t v1_14
v0_14, v1_14 = Botan::FE_25519::sqr_iter(entry_x8, 0x32)
var_70 = var_48
int128_t var_60_7 = var_38
int64_t var_50_7 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_15
int128_t v1_15
v0_15, v1_15 = Botan::FE_25519::mul(&var_70, entry_x8)
var_70 = var_48
int128_t var_60_8 = var_38
int64_t var_50_8 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_16
int128_t v1_16
v0_16, v1_16 = Botan::FE_25519::sqr_iter(&var_70, 0x64)
var_a0 = var_48
int128_t var_90_1 = var_38
int64_t var_80_1 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_17
int128_t v1_17
v0_17, v1_17 = Botan::FE_25519::mul(&var_a0, &var_70)
var_70 = var_48
int128_t var_60_9 = var_38
int64_t var_50_9 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_18
int128_t v1_18
v0_18, v1_18 = Botan::FE_25519::sqr_iter(&var_70, 0x32)
var_70 = var_48
int128_t var_60_10 = var_38
int64_t var_50_10 = var_28
memset(&var_48, 0, 0x28)
int128_t v0_19
int128_t v1_19
v0_19, v1_19 = Botan::FE_25519::mul(&var_70, entry_x8)
v1_19 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_19
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_20
int128_t v1_20
v0_20, v1_20 = Botan::FE_25519::sqr_iter(entry_x8, 2)
v1_20 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_20
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
int128_t v0_21
int128_t v1_21
v0_21, v1_21 = Botan::FE_25519::mul(entry_x8, arg1)
v1_21 = var_48
*(entry_x8 + 0x20) = var_28
*entry_x8 = v1_21
*(entry_x8 + 0x10) = var_38
memset(&var_48, 0, 0x28)
memset(&var_a0, 0, 0x28)
return memset(&var_70, 0, 0x28)
