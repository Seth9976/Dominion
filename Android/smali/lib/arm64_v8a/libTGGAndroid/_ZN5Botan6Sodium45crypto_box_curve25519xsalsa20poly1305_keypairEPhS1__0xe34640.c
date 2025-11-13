// 函数: _ZN5Botan6Sodium45crypto_box_curve25519xsalsa20poly1305_keypairEPhS1_
// 地址: 0xe34640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
Botan::system_rng()
int128_t v0
int128_t v1
v0, v1 = (*(data_23ecbc0 + 0x10))(&data_23ecbc0, arg2, 0x20)
v1 = data_7b0130
int128_t var_50 = data_7b0120
int128_t var_40 = v1
Botan::curve25519_donna(arg1, arg2, &var_50)

if (*(x21 + 0x28) == x8)
    return 0

__stack_chk_fail()
noreturn
