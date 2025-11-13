// 函数: _ZN5Botan6Sodium29crypto_auth_hmacsha512_verifyEPKhS2_mS2_
// 地址: 0xe33c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x40, 1)
__builtin_memset(x0, 0, 0x40)
Botan::Sodium::crypto_auth_hmacsha512(x0, arg2, arg3, arg4)
int64_t i = 0
char var_34 = 0

do
    char x9_1 = x0[i]
    char x10_1 = arg1[i]
    i += 1
    var_34 |= x10_1 ^ x9_1
while (i != 0x40)

Botan::deallocate_memory(x0, 0x40, 1)

if (zx.d(var_34) != 0)
    return 0xffffffff

return 0
