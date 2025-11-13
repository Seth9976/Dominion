// 函数: _ZN5Botan17assertion_failureEPKcS1_S1_S1_i
// 地址: 0xca79d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* var_180)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_110)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_110)
int64_t var_88 = 0
int32_t var_80 = 0xffffffff
var_180 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_110 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int128_t var_138
__builtin_memset(&var_138, 0, 0x20)
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_178 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
int32_t var_118 = 0x10
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_180, 
    "False assertion ", 0x10)

if (arg2 == 0 || zx.d(*arg2) == 0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_180, 
            arg1, strlen(arg1)), 
        " ", 1)
else
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_180, "'", 1), 
                    arg2, strlen(arg2)), 
                "' (expression ", 0xe), 
            arg1, strlen(arg1)), 
        ") ", 2)

if (arg3 != 0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_180, 
                "in ", 3), 
            arg3, strlen(arg3)), 
        " ", 1)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_180, "@", 
            1), 
        arg4, strlen(arg4)), 
    ":", 1))
void** x0_13 = __cxa_allocate_exception(0x20)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
void var_198
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_198)
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
char var_78
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
*x0_13 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
