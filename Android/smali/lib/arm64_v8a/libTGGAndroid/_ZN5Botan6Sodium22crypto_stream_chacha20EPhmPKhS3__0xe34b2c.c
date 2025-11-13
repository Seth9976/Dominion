// 函数: _ZN5Botan6Sodium22crypto_stream_chacha20EPhmPKhS3_
// 地址: 0xe34b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50 = 0x14
int64_t var_4f
__builtin_strncpy(&var_4f, "ChaCha(20)", 0xb)
int16_t var_68 = 0
Botan::StreamCipher::create_or_throw(&var_50, &var_68)
void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
uint8_t* var_38
Botan::SymmetricAlgorithm::set_key(var_38, arg4)
(*(*var_38 + 0x40))(var_38, arg3, 8)
(*(*var_38 + 0x38))(var_38, arg1, arg2)
(*(*var_38 + 8))(var_38)
return 0
