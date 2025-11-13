// 函数: _ZN5Botan6Sodium33crypto_secretbox_xsalsa20poly1305EPhPKhmS3_S3_
// 地址: 0xe35e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 u< 0x20)
    return 0xffffffff

char var_58 = 0xe
int32_t var_57
__builtin_strncpy(&var_57, "Salsa20", 8)
int16_t var_70 = 0
Botan::StreamCipher::create_or_throw(&var_58, &var_70)
void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

uint8_t* var_38
Botan::SymmetricAlgorithm::set_key(var_38, arg5)
(*(*var_38 + 0x40))(var_38, arg4, 0x18)
void* x0_6
int128_t v0_1
x0_6, v0_1 = Botan::allocate_memory(0x20, 1)
v0_1.q = 0
v0_1:8.q = 0
__builtin_memset(x0_6, 0, 0x20)
(*(*var_38 + 0x38))(var_38, x0_6, 0x20, v0_1)
(*(*var_38 + 0x30))(var_38, &arg2[0x20], &arg1[0x20], arg3 - 0x20)
var_58 = 0x10
__builtin_strncpy(&var_57, "Poly1305", 9)
var_70 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_58, &var_70)

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

int64_t* var_78
Botan::SymmetricAlgorithm::set_key(&var_78[1], x0_6)
(*(*var_78 + 0x18))(var_78, &arg1[0x20], arg3 - 0x20)
(*(*var_78 + 0x20))(var_78, &arg1[0x10])
*arg1 = 0
*(arg1 + 8) = 0
(*(*var_78 + 0x10))(var_78)
Botan::deallocate_memory(x0_6, 0x20, 1)
(*(*var_38 + 8))(var_38)
return 0
