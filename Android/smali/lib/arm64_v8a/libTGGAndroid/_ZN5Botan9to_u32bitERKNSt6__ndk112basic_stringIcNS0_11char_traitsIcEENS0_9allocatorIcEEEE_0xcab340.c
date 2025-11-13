// 函数: _ZN5Botan9to_u32bitERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xcab340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int32_t temp0 = x8.d & 1
uint64_t i_1

if (temp0 == 0)
    i_1 = x8 u>> 1
else
    i_1 = *(arg1 + 8)

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x9_1

if (temp0 != 0)
    x9_1 = *(arg1 + 0x10)
else
    x9_1 = arg1 + 1

int128_t var_40

if (i_1 != 0)
    uint64_t i
    
    do
        uint32_t x10_1 = zx.d(*x9_1)
        x9_1 += 1
        
        if (x10_1 - 0x30 u>= 0xa)
            var_40:1.b = x10_1.b
            var_40.b = 2
            var_40:2.b = 0
            void** x0_1 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "String contains non-digit char: ", &var_40)
            *x0_1 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_1[1])
            *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result = std::__ndk1::stoul(arg1, nullptr, 0xa)

if (result u>> 0x20 == 0)
    return result

void** x0_5 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Integer value of ", arg1)
char var_58[0x18]
int128_t* x0_7
int128_t v0
x0_7, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_7[1].q
var_40 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
