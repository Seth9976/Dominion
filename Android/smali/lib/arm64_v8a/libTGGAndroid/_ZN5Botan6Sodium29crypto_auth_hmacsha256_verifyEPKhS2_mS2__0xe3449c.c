// 函数: _ZN5Botan6Sodium29crypto_auth_hmacsha256_verifyEPKhS2_mS2_
// 地址: 0xe3449c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0, 0, 0x20)
Botan::Sodium::crypto_auth_hmacsha256(x0, arg2, arg3, arg4)
int32_t x0_2 = Botan::Sodium::crypto_verify_32(x0, arg1)
Botan::deallocate_memory(x0, 0x20, 1)

if (x0_2 == 0)
    return 0xffffffff

return 0
