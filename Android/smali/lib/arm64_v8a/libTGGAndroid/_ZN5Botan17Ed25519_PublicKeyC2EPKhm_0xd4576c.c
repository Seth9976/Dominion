// 函数: _ZN5Botan17Ed25519_PublicKeyC2EPKhm
// 地址: 0xd4576c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
__builtin_memset(&arg1[8], 0, 0x18)
int64_t entry_x3

if (entry_x3 == 0x20)
    int128_t* result
    int128_t v0
    int128_t v1
    result, v0, v1 = operator new(0x20)
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result
    *(arg1 + 0x18) = &result[2]
    int128_t* entry_x2
    v0 = entry_x2[1]
    *result = *entry_x2
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
