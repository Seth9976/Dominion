// 函数: _ZN5Botan6Sodium20crypto_core_hsalsa20EPhPKhS3_S3_
// 地址: 0xe347b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8
int32_t x9
int32_t x10
uint32_t x11

if (arg4 == 0)
    x8 = 0x6b206574
    x9 = 0x79622d32
    x10 = 0x3320646e
    x11 = 0x61707865
else
    x11 = *arg4
    x10 = *(arg4 + 4)
    x9 = *(arg4 + 8)
    x8 = *(arg4 + 0xc)

uint32_t var_50 = x11
int32_t var_3c = x10
int32_t var_28 = x9
int32_t var_14 = x8
int128_t var_4c = *arg3
int128_t var_38 = *arg2
int128_t v0 = *(arg3 + 0x10)
int128_t var_70
__builtin_memset(&var_70, 0, 0x20)
int128_t var_24 = v0
int128_t v0_1
int128_t v1
v0_1, v1 = Botan::Salsa20::hsalsa20(&var_70, &var_50)
*arg1 = var_70
int128_t var_60
*(arg1 + 0x10) = var_60
return 0
