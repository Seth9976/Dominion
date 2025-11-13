// 函数: _ZN5Botan6Sodium50crypto_box_curve25519xsalsa20poly1305_seed_keypairEPhS1_PKh
// 地址: 0xe3453c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
uint8_t* x0 = Botan::allocate_memory(0x40, 1)
__builtin_memset(x0, 0, 0x40)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = Botan::Sodium::crypto_hash_sha512(x0, arg3, 0x20)

if (arg2 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    v1 = *(x0 + 0x10)
    v2 = data_7b0120
    v3 = data_7b0130
    *arg2 = *x0
    *(arg2 + 0x10) = v1
    int128_t var_60 = v2
    int128_t var_50_1 = v3
    Botan::curve25519_donna(arg1, arg2, &var_60)
    Botan::deallocate_memory(x0, 0x40, 1)
    
    if (*(x23 + 0x28) == x8)
        return 0

__stack_chk_fail()
noreturn
