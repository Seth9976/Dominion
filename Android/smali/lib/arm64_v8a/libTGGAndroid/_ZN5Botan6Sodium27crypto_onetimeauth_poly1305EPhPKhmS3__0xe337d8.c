// 函数: _ZN5Botan6Sodium27crypto_onetimeauth_poly1305EPhPKhmS3_
// 地址: 0xe337d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50 = 0x10
int64_t var_4f
__builtin_strncpy(&var_4f, "Poly1305", 9)
int16_t var_68 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
int64_t* var_38
Botan::SymmetricAlgorithm::set_key(&var_38[1], arg4)
(*(*var_38 + 0x18))(var_38, arg2, arg3)
(*(*var_38 + 0x20))(var_38, arg1)
(*(*var_38 + 0x10))(var_38)
return 0
