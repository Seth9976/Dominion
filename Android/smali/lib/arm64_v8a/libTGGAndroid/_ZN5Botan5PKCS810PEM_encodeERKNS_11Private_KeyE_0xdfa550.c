// 函数: _ZN5Botan5PKCS810PEM_encodeERKNS_11Private_KeyE
// 地址: 0xdfa550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Private_Key::private_key_info()
char var_50 = 0x16
int64_t var_4f
__builtin_strncpy(&var_4f, "PRIVATE KEY", 0xc)
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
