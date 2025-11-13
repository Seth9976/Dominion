// 函数: _ZN5Botan3TLS15Handshake_State21confirm_transition_toENS0_14Handshake_TypeE
// 地址: 0xe6a278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg1
int32_t entry_x1
int64_t result = sub_e729c4(entry_x1)
int32_t x25 = *(x21 + 0x1c)
bool cond:0 = (*(x21 + 0x18) & result.d) == 0
*(x21 + 0x1c) = x25 | result.d

if (not(cond:0))
    *(x21 + 0x18) = 0
    return result

int64_t (* var_168)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_f8)
int64_t var_70 = 0
int32_t var_68 = 0xffffffff
var_168 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_f8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int128_t var_120
__builtin_memset(&var_120, 0, 0x20)
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
int32_t var_100 = 0x10
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_3 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
    "Unexpected state transition in handshake got a ", 0x2f)
char* x0_5 = Botan::TLS::handshake_type_to_string(zx.q(entry_x1))
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_3, x0_5, 
    strlen(x0_5))
char var_180
uint64_t var_178
char* var_170

if (*(x21 + 0x18) != 0)
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_14 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
        " expected ", 0xa)
    sub_e72c3c(&var_180, *(x21 + 0x18), 0x7c)
    uint64_t x8_6 = zx.q(var_180)
    int32_t temp0_1 = x8_6.d & 1
    char* x1_3
    
    if (temp0_1 == 0)
        x1_3 = &var_180 | 1
    else
        x1_3 = var_170
    
    uint64_t x2_2
    
    if (temp0_1 == 0)
        x2_2 = x8_6 u>> 1
    else
        x2_2 = var_178
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_14, x1_3, x2_2)
    
    if ((zx.d(var_180) & 1) != 0)
        operator delete(var_170)
else
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
        " not expecting messages", 0x17)

int32_t x22_2 = x25 & not.d(result.d)

if (x22_2 != 0)
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_19 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
        " seen ", 6)
    sub_e72c3c(&var_180, x22_2, 0x2b)
    uint64_t x8_8 = zx.q(var_180)
    int32_t temp1_1 = x8_8.d & 1
    char* x1_5
    
    if (temp1_1 == 0)
        x1_5 = &var_180 | 1
    else
        x1_5 = var_170
    
    uint64_t x2_3
    
    if (temp1_1 == 0)
        x2_3 = x8_8 u>> 1
    else
        x2_3 = var_178
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_19, x1_5, x2_3)
    
    if ((zx.d(var_180) & 1) != 0)
        operator delete(var_170)

void** x0_9 = __cxa_allocate_exception(0x28)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
*x0_9 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_9[1])
x0_9[4].d = 0xa
*x0_9 = _vtable_for_Botan::TLS::Unexpected_Message + 0x10
__cxa_throw(x0_9, _typeinfo_for_Botan::TLS::Unexpected_Message, Botan::Exception::~Exception)
noreturn
