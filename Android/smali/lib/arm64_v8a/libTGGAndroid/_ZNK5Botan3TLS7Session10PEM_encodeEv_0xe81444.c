// 函数: _ZNK5Botan3TLS7Session10PEM_encodeEv
// 地址: 0xe81444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::Session::DER_encode()
char var_50 = 0x16
int64_t var_4f
__builtin_strncpy(&var_4f, "TLS SESSION", 0xc)
uint8_t* var_38
int64_t var_30
int64_t result = Botan::PEM_Code::encode(var_38, var_30 - var_38, &var_50, 0x40)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result = operator delete(var_40)

if (var_38 == 0)
    return result

int64_t var_28
return Botan::deallocate_memory(var_38, var_28 - var_38, 1)
