// 函数: _ZN5BotanrsERNSt6__ndk113basic_istreamIcNS0_11char_traitsIcEEEERNS_6BigIntE
// 地址: 0xcd81f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
*(*arg1 - 0x18)
std::__ndk1::ios_base::getloc()
char var_80
int64_t* x0_2 = std::__ndk1::locale::use_facet(&var_80)
char x0_3 = (*(*x0_2 + 0x38))(x0_2, 0xa)
std::__ndk1::locale::~locale()
std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(arg1, 
    &var_38, x0_3)
int32_t x8_7 = *(arg1 + *(*arg1 - 0x18) + 0x20)
void* var_70

if ((x8_7 & 1) != 0 || ((x8_7 & 5) != 0 && (x8_7 & 2) == 0))
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v0_1
    x0_10, v0_1 = operator new(0x30)
    int64_t var_40 = x0_10
    int128_t var_50 = data_71bb40
    __builtin_strncpy(x0_10, "BigInt input operator has failed", 0x21)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "I/O error: ", &var_50)
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    
    if ((zx.d(var_80) & 1) != 0)
        operator delete(var_70)
    
    *x0_9 = _vtable_for_Botan::Stream_IO_Error + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
    noreturn

Botan::BigInt::BigInt(&var_80)
void* var_78_1
void* x0_6

if (&var_80 == arg2)
    x0_6 = *arg2
    
    if (x0_6 != 0)
        var_78_1 = x0_6
        Botan::deallocate_memory(x0_6, (var_70 - x0_6) s>> 2, 4)
else
    x0_6 = *arg2
    var_80.q = x0_6
    *arg2 = var_80.o
    void* x11_1 = *(arg2 + 0x10)
    int64_t x9_1 = *(arg2 + 0x18)
    *(arg2 + 0x10) = var_70
    int64_t var_68
    *(arg2 + 0x18) = var_68
    int64_t var_68_1 = x9_1
    int32_t x9_2 = *(arg2 + 0x20)
    int32_t var_60
    *(arg2 + 0x20) = var_60
    int32_t var_60_1 = x9_2
    
    if (x0_6 != 0)
        var_78_1 = x0_6
        Botan::deallocate_memory(x0_6, (x11_1 - x0_6) s>> 2, 4)
void* var_28

if ((zx.d(var_38.b) & 1) != 0)
    operator delete(var_28)
return arg1
