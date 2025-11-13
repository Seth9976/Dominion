// 函数: _ZN5Botan17Ed25519_PublicKeyC1EPKhm
// 地址: 0xd458d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Ed25519_PublicKey + 0x88
*(arg1 + 8) = 0
__builtin_memset(&arg1[0x10], 0, 0x10)
int64_t entry_x2

if (entry_x2 == 0x20)
    int128_t* result
    int128_t v0
    int128_t v1
    result, v0, v1 = operator new(0x20)
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result
    *(arg1 + 0x18) = &result[2]
    v0 = *(arg2 + 0x10)
    *result = *arg2
    result[1] = v0
    *(arg1 + 0x10) = &result[2]
    return result

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0_1
x0_1, v0_1 = operator new(0x20)
int64_t var_40 = x0_1
int128_t var_50 = data_71c370
__builtin_strncpy(x0_1, "Invalid length for Ed25519 key", 0x1f)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
