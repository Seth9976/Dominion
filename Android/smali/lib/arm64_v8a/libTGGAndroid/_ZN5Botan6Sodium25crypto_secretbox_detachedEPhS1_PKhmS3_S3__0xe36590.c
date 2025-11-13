// 函数: _ZN5Botan6Sodium25crypto_secretbox_detachedEPhS1_PKhmS3_S3_
// 地址: 0xe36590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_60 = 0xe
int32_t var_5f
__builtin_strncpy(&var_5f, "Salsa20", 8)
int16_t var_78 = 0
Botan::StreamCipher::create_or_throw(&var_60, &var_78)
void* var_68

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)

uint8_t* var_48
Botan::SymmetricAlgorithm::set_key(var_48, arg6)
(*(*var_48 + 0x40))(var_48, arg5, 0x18)
void* x0_5
int128_t v0
x0_5, v0 = Botan::allocate_memory(0x20, 1)
v0.q = 0
v0:8.q = 0
__builtin_memset(x0_5, 0, 0x20)
(*(*var_48 + 0x38))(var_48, x0_5, 0x20, v0)
(*(*var_48 + 0x30))(var_48, arg3, arg1, arg4)
var_60 = 0x10
__builtin_strncpy(&var_5f, "Poly1305", 9)
var_78 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_60, &var_78)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)

int64_t* var_80
Botan::SymmetricAlgorithm::set_key(&var_80[1], x0_5)
(*(*var_80 + 0x18))(var_80, arg1, arg4)
(*(*var_80 + 0x20))(var_80, arg2)
(*(*var_80 + 0x10))(var_80)
Botan::deallocate_memory(x0_5, 0x20, 1)
(*(*var_48 + 8))(var_48)
return 0
