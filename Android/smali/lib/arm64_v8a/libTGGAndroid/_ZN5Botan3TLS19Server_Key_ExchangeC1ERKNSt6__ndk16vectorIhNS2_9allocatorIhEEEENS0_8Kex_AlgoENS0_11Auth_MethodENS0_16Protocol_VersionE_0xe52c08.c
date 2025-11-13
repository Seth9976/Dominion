// 函数: _ZN5Botan3TLS19Server_Key_ExchangeC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEENS0_8Kex_AlgoENS0_11Auth_MethodENS0_16Protocol_VersionE
// 地址: 0xe52c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Server_Key_Exchange + 0x10
int32_t x24 = arg3
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x42) = zx.o(0)
char const* const var_68 = "ServerKeyExchange"
int64_t* var_60 = arg2
int64_t var_58 = 0

if (arg3 - 5 u<= 2)
    Botan::TLS::TLS_Data_Reader::get_string(&var_68, 2, 0)
    char var_80
    void* var_70
    
    if ((zx.d(var_80) & 1) != 0)
        operator delete(var_70)

uint64_t x8_2 = zx.q(x24 - 1)

if (x8_2.d u> 6)
    void** x0_24 = __cxa_allocate_exception(0x20)
    Botan::TLS::kex_method_to_string(zx.q(x24))
    void var_158
    int128_t* x0_27
    int128_t v0_2
    x0_27, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_158, nullptr)
    int64_t var_130_1 = x0_27[1].q
    int128_t var_140_1 = *x0_27
    __builtin_memset(x0_27, 0, 0x18)
    *x0_24 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_24[1])
    *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

switch (x8_2)
    case 0, 5
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        void* var_98
        
        if (var_98 != 0)
            void* var_90_1 = var_98
            operator delete(var_98)
        
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        
        if (var_98 != 0)
            void* var_90_2 = var_98
            operator delete(var_98)
        
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        
        if (var_98 != 0)
            void* var_90_3 = var_98
            operator delete(var_98)
    case 1, 6
        Botan::TLS::TLS_Data_Reader::assert_at_least(&var_68)
        Botan::TLS::TLS_Data_Reader::assert_at_least(&var_68)
        var_58 += 3
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 1, 1)
        void* var_b0
        
        if (var_b0 != 0)
            void* var_a8_1 = var_b0
            operator delete(var_b0)
    case 2
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        void* var_128
        
        if (var_128 != 0)
            void* var_120_1 = var_128
            operator delete(var_128)
    case 3
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        void* var_c8
        
        if (var_c8 != 0)
            void* var_c0_1 = var_c8
            operator delete(var_c8)
        
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        void* var_e0
        
        if (var_e0 != 0)
            void* var_d8_1 = var_e0
            operator delete(var_e0)
        
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 1, 1)
        void* var_f8
        
        if (var_f8 != 0)
            void* var_f0_1 = var_f8
            operator delete(var_f8)
        
        Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 1)
        void* var_110
        
        if (var_110 != 0)
            void* var_108_1 = var_110
            operator delete(var_110)

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t const*>(arg1 + 0x20, 
    *arg2)

if ((arg4 & 0xfffffffe) != 0x10000)
    int16_t entry_x4
    uint32_t x8_9 = zx.d(entry_x4)
    
    if (x8_9 - 0x301 u>= 2 && x8_9 != 0xfeff)
        Botan::TLS::TLS_Data_Reader::assert_at_least(&var_68)
        int64_t var_58_2 = var_58 + 2
        *(arg1 + 0x50) = (_byteswap(zx.d(*(*var_60 + var_58))) u>> 0x10).w
    
    Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_68, 2, 0)
    void* x0_22 = *(arg1 + 0x38)
    
    if (x0_22 != 0)
        *(arg1 + 0x40) = x0_22
        operator delete(x0_22)
        __builtin_memset(arg1 + 0x38, 0, 0x18)
    
    int128_t var_140
    *(arg1 + 0x38) = var_140
    int64_t var_130
    *(arg1 + 0x48) = var_130

return Botan::TLS::TLS_Data_Reader::assert_done()
