// 函数: _ZNK5Botan3OID9to_stringEv
// 地址: 0xcb0e4c
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
char var_110 = (zx.o(0)).b
int64_t var_100 = (zx.o(0)).q
int32_t var_f0 = 0x10
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_150 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
void* entry_x0
int64_t x8_2 = *(entry_x0 + 8)

if (*(entry_x0 + 0x10) != x8_2)
    int64_t x26_1 = 0
    int64_t x9_4
    
    do
        *(x8_2 + (x26_1 << 2))
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(&var_158)
        x8_2 = *(entry_x0 + 8)
        x9_4 = (*(entry_x0 + 0x10) - x8_2) s>> 2
        
        if (x26_1 != x9_4 - 1)
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_158, 
                ".", 1)
            x8_2 = *(entry_x0 + 8)
            x9_4 = (*(entry_x0 + 0x10) - x8_2) s>> 2
        
        x26_1 += 1
    while (x26_1 != x9_4)

std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
var_e8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_158 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_150_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_110) & 1) != 0)
    operator delete(var_100)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
