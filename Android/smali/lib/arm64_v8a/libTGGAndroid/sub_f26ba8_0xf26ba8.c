// 函数: sub_f26ba8
// 地址: 0xf26ba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(arg1)

if (x8 u< 0x40 || x8 == 0x81 || (x8 == 0x80 && (arg3 & 1) != 0))
    return zx.q(x8 u< 0x40 ? 1 : 0)

char var_37 = arg2
char var_38 = 2
char var_36 = 0

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, 0x7a6a6b) != 0)
    uint64_t x10_1 = zx.q(var_38)
    uint64_t var_30
    uint64_t x8_1 = var_30
    int32_t x9_1 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_1 == 0 ? x10_2 : x8_1
    
    if (x11_1 != 1)
        goto label_f26c98
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, &data_77e1ad) != 0)
        uint64_t x10_3 = zx.q(var_38)
        x8_1 = var_30
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_f26c98:
        uint64_t x8_2
        
        if ((x9_1 & 0xff) == 0)
            x8_2 = x10_2
        else
            x8_2 = x8_1
        
        if (x8_2 == 1 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_38, 0, -ffffffffffffffff, 0x785d6f) == 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                &var_38)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            &var_38)
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &var_38)

void** x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11
int128_t v0
x0_11, v0 = operator new(0x30)
uint64_t x9_2 = zx.q(var_38)
int128_t var_90 = data_71cbb0
uint64_t x1_3
uint64_t var_28

if ((x9_2.d & 1) == 0)
    x1_3 = &var_38 | 1
else
    x1_3 = var_28
int64_t var_80 = x0_11
__builtin_strncpy(x0_11, "base64_decode: invalid base64 character \'", 0x2a)
int128_t* x0_13
int128_t v0_1
x0_13, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90, x1_3)
int64_t var_60 = x0_13[1].q
int128_t var_70 = *x0_13
__builtin_memset(x0_13, 0, 0x18)
int128_t* x0_15
int128_t v0_2
x0_15, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40 = x0_15[1].q
int128_t var_50 = *x0_15
__builtin_memset(x0_15, 0, 0x18)
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
