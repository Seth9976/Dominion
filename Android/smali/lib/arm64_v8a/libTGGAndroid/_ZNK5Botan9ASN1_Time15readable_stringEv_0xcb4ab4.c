// 函数: _ZNK5Botan9ASN1_Time15readable_stringEv
// 地址: 0xcb4ab4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_150
void* entry_x0

if (*(entry_x0 + 8) == 0)
    void** x0_15 = __cxa_allocate_exception(0x20)
    void* x0_16
    int128_t v0
    x0_16, v0 = operator new(0x30)
    v0 = data_71c500
    var_150 = x0_16
    __builtin_strncpy(x0_16, "ASN1_Time::readable_string: No time set", 0x28)
    int128_t var_160_1 = v0
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int128_t var_160
var_160:8.q = 0
var_150 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_e0)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_160.q = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_e0)
int32_t var_50 = 0xffffffff
int64_t var_58 = 0
var_e0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_160.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_150 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_108 = (zx.o(0)).b
int64_t var_f8 = (zx.o(0)).q
int32_t var_e8 = 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_148 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
*(&var_150 + *(var_150 - 0x18) + 0x90) = 0x30
*(&var_150 + *(var_150 - 0x18) + 0x18) = 4
*(entry_x0 + 8)
int64_t* x0_3 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(&var_150), "/", 1)
*(x0_3 + *(*x0_3 - 0x18) + 0x18) = 2
*(entry_x0 + 0xc)
int64_t* x0_5 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_3.d), "/", 1)
*(x0_5 + *(*x0_5 - 0x18) + 0x18) = 2
*(entry_x0 + 0x10)
int64_t* x0_7 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_5.d), " ", 1)
*(x0_7 + *(*x0_7 - 0x18) + 0x18) = 2
*(entry_x0 + 0x14)
int64_t* x0_9 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_7.d), ":", 1)
*(x0_9 + *(*x0_9 - 0x18) + 0x18) = 2
*(entry_x0 + 0x18)
int64_t* x0_11 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_9.d), ":", 1)
*(x0_11 + *(*x0_11 - 0x18) + 0x18) = 2
*(entry_x0 + 0x1c)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_11.d), " UTC", 
    4)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
var_160.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_e0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_150 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_148_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_108) & 1) != 0)
    operator delete(var_f8)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
