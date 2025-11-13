// 函数: _ZN5Botan6Sodium30crypto_stream_xchacha20_xor_icEPhPKhmS3_mS3_
// 地址: 0xe351dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 u> 0x3f)
    return 0xffffffff

char var_60 = 0x14
int64_t var_5f
__builtin_strncpy(&var_5f, "ChaCha(20)", 0xb)
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
(*(*var_48 + 0x40))(var_48, arg4, 0x18)
(*(*var_48 + 0x60))(var_48, arg5 << 6)
(*(*var_48 + 0x30))(var_48, arg2, arg1, arg3)
(*(*var_48 + 8))(var_48)
return 0
