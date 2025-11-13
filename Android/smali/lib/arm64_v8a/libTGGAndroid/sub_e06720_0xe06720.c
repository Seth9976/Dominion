// 函数: sub_e06720
// 地址: 0xe06720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2)
char var_68[0x18]
int128_t var_50
char var_38
void* var_28

if (arg2 + 8 == result)
    void** x0_1 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Tag ", arg3)
    int128_t* x0_3
    int128_t v0_1
    x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_68)
    int64_t var_40 = x0_3[1].q
    var_50 = *x0_3
    __builtin_memset(x0_3, 0, 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Roughtime ", &var_50)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_1 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Roughtime::Roughtime_Error, Botan::Exception::~Exception)
    noreturn

int128_t* x8_1 = *(result + 0x38)

if (*(result + 0x40) - x8_1 == 0x40)
    v0 = x8_1[3]
    v3 = *x8_1
    v2 = x8_1[1]
    arg1[2] = x8_1[2]
    arg1[3] = v0
    *arg1 = v3
    arg1[1] = v2
    return result

void** x0_8 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >("Tag ", 
    arg3)
int128_t* x0_10
int128_t v0_2
x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_68)
int64_t var_40_1 = x0_10[1].q
var_50 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Roughtime ", &var_50)
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_8 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Roughtime::Roughtime_Error, Botan::Exception::~Exception)
noreturn
