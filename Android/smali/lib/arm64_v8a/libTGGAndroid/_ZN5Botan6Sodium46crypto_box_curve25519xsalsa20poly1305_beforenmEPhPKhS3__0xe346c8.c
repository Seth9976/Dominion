// 函数: _ZN5Botan6Sodium46crypto_box_curve25519xsalsa20poly1305_beforenmEPhPKhS3_
// 地址: 0xe346c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0, 0, 0x20)
int128_t v0
int128_t v1
v0, v1 = Botan::curve25519_donna(x0, arg3, arg2)
uint32_t var_70 = 0x61707865
v0 = *x0
v1 = *(x0 + 0x10)
int32_t var_5c
__builtin_strncpy(&var_5c, "nd 3", 0x14)
int32_t var_48
__builtin_strncpy(&var_48, "2-by", 4)
int128_t var_6c = v0
int32_t var_34
__builtin_strncpy(&var_34, "te k", 4)
int128_t var_44 = v1
int128_t var_90
__builtin_memset(&var_90, 0, 0x20)
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = Botan::Salsa20::hsalsa20(&var_90, &var_70)
*arg1 = var_90
int128_t var_80
*(arg1 + 0x10) = var_80
Botan::deallocate_memory(x0, 0x20, 1)
return 0
