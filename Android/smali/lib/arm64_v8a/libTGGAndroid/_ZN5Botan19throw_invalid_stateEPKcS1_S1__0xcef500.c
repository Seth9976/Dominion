// 函数: _ZN5Botan19throw_invalid_stateEPKcS1_S1_
// 地址: 0xcef500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* var_158)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_e8)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_e8)
int64_t var_60 = 0
int32_t var_58 = 0xffffffff
var_158 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_e8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int128_t var_110
__builtin_memset(&var_110, 0, 0x20)
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_150 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
int32_t var_f0 = 0x10
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_158, "Invalid state: ", 0xf), 
                    arg1, strlen(arg1)), 
                " was false in ", 0xe), 
            arg2, strlen(arg2)), 
        ":", 1), 
    arg3, strlen(arg3))
void** x0_16 = __cxa_allocate_exception(0x20)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
*x0_16 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_16[1])
*x0_16 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_16, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
