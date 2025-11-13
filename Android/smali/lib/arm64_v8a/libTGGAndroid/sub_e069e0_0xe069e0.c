// 函数: sub_e069e0
// 地址: 0xe069e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1)
char var_68[0x18]
int128_t var_50
char var_38
void* var_28

if (arg1 + 8 == x0)
    void** x0_3 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Tag ", arg2)
    int128_t* x0_5
    int128_t v0_1
    x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_68)
    int64_t var_40 = x0_5[1].q
    var_50 = *x0_5
    __builtin_memset(x0_5, 0, 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Roughtime ", &var_50)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_3 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Roughtime::Roughtime_Error, Botan::Exception::~Exception)
    noreturn

void* x0_1 = *(x0 + 0x38)

if (*(x0 + 0x40) - x0_1 == 8)
    return sub_f48c08(x0_1, 7) __tailcall

void** x0_10 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >("Tag ", 
    arg2)
int128_t* x0_12
int128_t v0_2
x0_12, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_68)
int64_t var_40_1 = x0_12[1].q
var_50 = *x0_12
__builtin_memset(x0_12, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Roughtime ", &var_50)
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_10 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Roughtime::Roughtime_Error, Botan::Exception::~Exception)
noreturn
