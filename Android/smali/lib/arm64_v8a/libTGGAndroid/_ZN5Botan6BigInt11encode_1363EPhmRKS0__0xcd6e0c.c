// 函数: _ZN5Botan6BigInt11encode_1363EPhmRKS0_
// 地址: 0xcd6e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::BigInt::bits()
int64_t x8_2

if ((result & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (result & 7)

if (arg2 u< (x8_2 + result) u>> 3)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    int64_t var_40 = x0_2
    int128_t var_50 = data_71a900
    __builtin_strncpy(x0_2, "encode_1363: n is too large to encode properly", 0x2f)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_50)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    char var_38
    void* var_28
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    *x0_1 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x9 = arg2 u>> 2
int64_t i = arg2 & 3

if (x9 != 0)
    int64_t x10_1 = 0
    void* x11_2 = &arg1[arg2] - 4
    
    do
        int64_t x12_3 = *arg3
        int32_t x12_1
        
        if (x10_1 u< (*(arg3 + 8) - x12_3) s>> 2)
            x12_1 = *(x12_3 + (x10_1 << 2))
        else
            x12_1 = 0
        
        x10_1 += 1
        *x11_2 = _byteswap(x12_1)
        x11_2 -= 4
    while (x9 != x10_1)

if (i != 0)
    int64_t x10_2 = *arg3
    int32_t x9_1
    
    if (x9 u>= (*(arg3 + 8) - x10_2) s>> 2)
        x9_1 = 0
    else
        x9_1 = *(x10_2 + (x9 << 2))
    
    int32_t x11_5 = 0x18
    
    do
        *(arg1 - 1 + i) = (x9_1 u>> (not.d(x11_5) & 0x18)).b
        i -= 1
        x11_5 -= 8
    while (i != 0)

return result
