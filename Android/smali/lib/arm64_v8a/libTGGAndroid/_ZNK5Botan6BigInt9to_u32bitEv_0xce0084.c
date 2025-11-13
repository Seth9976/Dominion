// 函数: _ZNK5Botan6BigInt9to_u32bitEv
// 地址: 0xce0084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
char var_38
void* var_28
int64_t* entry_x0

if (entry_x0[4].d == 0)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x30)
    int64_t var_40 = x0_3
    var_50 = data_71b5a0
    __builtin_strncpy(x0_3, "BigInt::to_u32bit: Number is negative", 0x26)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_50)
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_2 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

if (Botan::BigInt::bits() u<= 0x20)
    int32_t* x8_1 = *entry_x0
    int32_t x8_2
    int32_t x9_1
    int32_t x10
    int32_t x11_1
    
    if (entry_x0[1] == x8_1)
        x9_1 = 0
        x8_2 = 0
        x10 = 0
        x11_1 = 0
    else
        int32_t x11 = *x8_1
        x8_2 = x11 & 0xff000000
        x10 = x11 & 0xff0000
        x9_1 = x11 & 0xff00
        x11_1 = x11 & 0xff
    
    return zx.q(x11_1) | zx.q(x9_1) | zx.q(x10) | zx.q(x8_2)

void** x0_8 = __cxa_allocate_exception(0x20)
int64_t x0_9
int128_t v0_1
x0_9, v0_1 = operator new(0x30)
int64_t var_40_1 = x0_9
var_50 = data_71c860
__builtin_strncpy(x0_9, "BigInt::to_u32bit: Number is too big to convert", 0x30)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_50)
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_8 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
