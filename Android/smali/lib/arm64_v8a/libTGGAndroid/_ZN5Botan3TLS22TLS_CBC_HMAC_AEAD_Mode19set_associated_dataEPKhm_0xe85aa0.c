// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode19set_associated_dataEPKhm
// 地址: 0xe85aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 != 0xd)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0
    x0_5, v0 = operator new(0x30)
    v0 = data_71c500
    int64_t var_50_1 = x0_5
    __builtin_strncpy(x0_5, "Invalid TLS AEAD associated data length", 0x28)
    int128_t var_60_1 = v0
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* x22 = *(arg1 + 0x90)
uint8_t const* x19 = arg1
int64_t x8 = *(arg1 + 0xa0)

if (x8 - x22 u>= 0xd)
    void* x25_1 = *(x19 + 0x98) - x22
    void* x21_2
    
    if (x25_1 u< 0xd)
        x21_2 = arg2 + x25_1
    else
        x21_2 = arg2 + 0xd
    
    size_t x23_1 = x21_2 - arg2
    
    if (x21_2 != arg2)
        memmove(x22, arg2, x23_1)
    
    if (x25_1 u> 0xc)
        *(x19 + 0x98) = x22 + x23_1
    else
        int64_t x20_1 = *(x19 + 0x98)
        size_t x22_2 = arg2 + 0xd - x21_2
        
        if (x22_2 s>= 1)
            memcpy(x20_1, x21_2, x22_2)
            x20_1 += x22_2
        
        *(x19 + 0x98) = x20_1
else
    if (x22 != 0)
        *(x19 + 0x98) = x22
        operator delete(x22)
        x8 = 0
        __builtin_memset(&arg1[0x90], 0, 0x18)
    
    int64_t x9_1 = x8 << 1
    int64_t x9_2
    
    x9_2 = x9_1 u> 0xd ? x9_1 : 0xd
    
    int64_t x22_1
    
    x22_1 = x8 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    if ((x22_1 & 0xffffffff80000000) != 0)
        int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char var_60
        void* var_50
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_50)
        sub_1101e04(x0_10)
        noreturn
    
    arg1 = operator new(x22_1)
    *(x19 + 0x90) = arg1
    *(x19 + 0x98) = arg1
    *(x19 + 0xa0) = &arg1[x22_1]
    int64_t x9_3 = *arg2
    *(arg1 + 5) = *(arg2 + 5)
    *arg1 = x9_3
    *(x19 + 0x98) = &arg1[0xd]
