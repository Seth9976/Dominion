// 函数: _ZN5Botan6Sodium33crypto_scalarmult_curve25519_baseEPhPKh
// 地址: 0xe325f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x19 + 0x28)
int128_t v1 = data_7b0130
int128_t var_40 = data_7b0120
int128_t var_30 = v1
Botan::curve25519_donna(arg1, arg2, &var_40)

if (*(x19 + 0x28) == x9)
    return 0

__stack_chk_fail()
noreturn
