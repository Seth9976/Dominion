// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Decryption18cbc_decrypt_recordEPhm
// 地址: 0xe86428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 != 0 && entry_x2 u% *(arg1 + 0x58) == 0)
    int64_t x1 = *(arg1 + 0x78)
    int64_t* x0 = *(arg1 + 0x68)
    (*(*x0 + 0x30))(x0, x1, *(arg1 + 0x80) - x1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(&arg1[0x78], 
        arg2 + entry_x2 - *(arg1 + 0x58))
    jump(*(**(arg1 + 0x68) + 0x38))

void** x0_3 = __cxa_allocate_exception(0x20)
int64_t x0_4
int128_t v0
x0_4, v0 = operator new(0x30)
(*"h invalid length")[0].o
int64_t var_30 = x0_4
v0 = data_71c860
__builtin_strncpy(x0_4, "Received TLS CBC ciphertext with invalid length", 0x30)
int128_t var_40 = v0
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
