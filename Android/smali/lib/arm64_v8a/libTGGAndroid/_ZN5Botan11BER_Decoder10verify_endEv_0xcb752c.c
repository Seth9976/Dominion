// 函数: _ZN5Botan11BER_Decoder10verify_endEv
// 地址: 0xcb752c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
int128_t v0
x0, v0 = operator new(0x40)
int128_t var_40 = data_71b3f0
void* var_30 = x0
__builtin_strncpy(x0, "BER_Decoder::verify_end called, but data remains", 0x31)
void* entry_result

if (((*(**(entry_result + 0x28) + 0x18))() & 1) != 0 && *(entry_result + 8) == 0xff00)
    operator delete(x0)
    return entry_result

void** x0_5 = __cxa_allocate_exception(0x20)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
