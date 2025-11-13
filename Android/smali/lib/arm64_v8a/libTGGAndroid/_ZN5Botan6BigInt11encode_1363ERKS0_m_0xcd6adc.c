// 函数: _ZN5Botan6BigInt11encode_1363ERKS0_m
// 地址: 0xcd6adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::BigInt::bits()
int64_t x8_2

if ((result & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (result & 7)

int128_t var_60
char var_48
void* var_38

if (arg2 u< (x8_2 + result) u>> 3)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x30)
    int64_t var_50_1 = x0_3
    var_60 = data_71a900
    __builtin_strncpy(x0_3, "encode_1363: n is too large to encode properly", 0x2f)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_60)
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
    
    *x0_2 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t i
uint64_t x9
int64_t x20

if (arg2 == 0)
    x20 = 0
    x9 = 0
    i = 0
else
    if ((arg2 & 0xffffffff80000000) != 0)
        int64_t* x0_9 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::exception::~exception()
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        void* var_50
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        __cxa_free_exception(arg1)
        sub_1101e04(x0_9)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(arg2, 1)
    int64_t x23 = x0_1 + arg2
    x20 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x23
    result = memset(x0_1, 0, arg2)
    entry_x8[1] = x23
    int64_t x8_4 = x23 - x20
    x9 = x8_4 u>> 2
    i = x8_4 & 3
    
    if (x9 != 0)
        int64_t x11_1 = *arg1
        int64_t x10_1 = 0
        int32_t* x13_1 = x23 - 4
        int64_t x12_3 = (*(arg1 + 8) - x11_1) s>> 2
        
        do
            int32_t x14_1
            
            if (x12_3 u> x10_1)
                x14_1 = *(x11_1 + (x10_1 << 2))
            else
                x14_1 = 0
            
            x10_1 += 1
            *x13_1 = _byteswap(x14_1)
            x13_1 = &x13_1[-1]
        while (x9 != x10_1)

if (i != 0)
    int64_t x10_2 = *arg1
    int32_t x9_1
    
    if (x9 u>= (*(arg1 + 8) - x10_2) s>> 2)
        x9_1 = 0
    else
        x9_1 = *(x10_2 + (x9 << 2))
    
    int32_t x11_4 = 0x18
    
    do
        (x20 - 1)[i] = (x9_1 u>> (not.d(x11_4) & 0x18)).b
        i -= 1
        x11_4 -= 8
    while (i != 0)

return result
