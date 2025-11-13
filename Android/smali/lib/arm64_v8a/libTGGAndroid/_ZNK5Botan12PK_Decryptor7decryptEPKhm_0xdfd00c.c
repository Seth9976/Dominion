// 函数: _ZNK5Botan12PK_Decryptor7decryptEPKhm
// 地址: 0xdfd00c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_24 = 0
int64_t entry_x2
int64_t result = (*(*arg1 + 0x18))(arg1, &var_24, arg2, entry_x2)

if (zx.d(var_24) != 0)
    return result

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
(*", cannot decrypt")[0].o
int64_t var_40 = x0_1
v0 = data_71ce10
__builtin_strncpy(x0_1, "Invalid public key ciphertext, cannot decrypt", 0x2e)
int128_t var_50 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
