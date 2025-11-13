// 函数: sub_e72c3c
// 地址: 0xe72c3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_a0
__builtin_memcpy(&var_a0, 
    "\x03\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x0b\x00\x00\x00\x15\x00\x00\x00\x"
"16\x00\x00\x00\x0c\x00\x00\x00\x0d\x00\x00\x00\x0e\x00\x00\x00\x0f\x00\x00\x00\x10\x00\x00\x00\x04"
"00\x00\x00\xfe\x00\x00\x00\x14\x00\x00\x00", 
    0x3c)
int64_t (* var_1a8)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_138)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_138)
int64_t var_b0 = 0
int32_t var_a8 = 0xffffffff
var_1a8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_138 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int64_t x27 = 0
int32_t x24 = 1
int32_t x0_1 = 3
char var_160 = (zx.o(0)).b
int64_t var_150 = (zx.o(0)).q
int32_t var_140 = 0x10
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_1a0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

while (true)
    if ((sub_e729c4(x0_1) & arg2) != 0)
        if ((x24 & 1) == 0)
            char var_64 = arg3
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_1a8, 
                &var_64, 1)
        
        char* x0_5 = Botan::TLS::handshake_type_to_string(zx.q(*(&var_a0 + x27)))
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_1a8, 
            x0_5, strlen(x0_5))
        x24 = 0
    
    if (x27 == 0x38)
        break
    
    x0_1 = *(&var_a0 + x27 + 4)
    x27 += 4

std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
var_138 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_1a8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_1a0_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_160) & 1) != 0)
    operator delete(var_150)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
