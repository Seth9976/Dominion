// 函数: _ZN5Botan11BER_Decoder6decodeERbNS_8ASN1_TagES2_
// 地址: 0xcb8c54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
char var_48 = 0xc
int32_t var_47
__builtin_strncpy(&var_47, "object", 7)
void var_68
int32_t entry_x3
Botan::BER_Object::assert_is_a(&var_68, zx.q(arg3), zx.q(entry_x3))
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

char* var_60
int64_t var_58

if (var_58 - var_60 == 1)
    *arg2 = (zx.d(*var_60) != 0 ? 1 : 0).b
    char* var_58_1 = var_60
    int64_t var_50
    Botan::deallocate_memory(var_60, var_50 - var_60, 1)
    return arg1

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
int64_t var_70 = x0_5
int128_t var_80 = data_71d3f0
__builtin_strncpy(x0_5, "BER boolean value had invalid size", 0x23)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_80)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

*x0_4 = _vtable_for_Botan::BER_Decoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
noreturn
