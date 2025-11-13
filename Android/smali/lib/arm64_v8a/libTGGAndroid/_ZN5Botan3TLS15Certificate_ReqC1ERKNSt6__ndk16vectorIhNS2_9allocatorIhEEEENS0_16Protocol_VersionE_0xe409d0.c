// 函数: _ZN5Botan3TLS15Certificate_ReqC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEENS0_16Protocol_VersionE
// 地址: 0xe409d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*arg1 = _vtable_for_Botan::TLS::Certificate_Req + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
int128_t var_e0

if (*(arg2 + 8) - *arg2 u<= 3)
    void** x0_27 = __cxa_allocate_exception(0x20, v0)
    int64_t x0_28
    int128_t v0_1
    x0_28, v0_1 = operator new(0x30)
    v0_1 = data_71aa70
    int64_t var_d0_1 = x0_28
    __builtin_strncpy(x0_28, "Certificate_Req: Bad certificate request", 0x29)
    var_e0 = v0_1
    *x0_27 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_27[1])
    *x0_27 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_27, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

char const* const var_78 = "CertificateRequest"
int64_t* var_70 = arg2
int64_t var_68 = 0
Botan::TLS::TLS_Data_Reader::get_range_vector<uint8_t>(&var_78, 1, 1)
void* result
void* result_2 = result
void* var_d0
int64_t var_88

if (var_88 != result_2)
    int64_t i = 0
    int16_t* x21_1 = &var_e0 | 1
    
    do
        uint32_t x8_4 = zx.d(*(result_2 + i))
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x24_1
        
        if (x8_4 == 0x40)
            var_e0.b = 0xa
            __builtin_strncpy(x21_1, "ECDSA", 5)
            var_e0:6.b = 0
            x24_1 = *(arg1 + 0x28)
            
            if (x24_1 u< *(arg1 + 0x30))
            label_e40b14:
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    x24_1)
                *(arg1 + 0x28) = x24_1 + 0x18
                
                if ((zx.d(var_e0.b) & 1) != 0)
                    operator delete(var_d0)
            else
            label_e40b50:
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__emplace_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                    arg1 + 0x20)
                
                if ((zx.d(var_e0.b) & 1) != 0)
                    operator delete(var_d0)
        else
            if (x8_4 == 2)
                var_e0.b = 6
                x21_1[1].b = 0x41
                *x21_1 = 0x5344
                var_e0:4.b = 0
                x24_1 = *(arg1 + 0x28)
                
                if (x24_1 u>= *(arg1 + 0x30))
                    goto label_e40b50
                
                goto label_e40b14
            
            if (x8_4 == 1)
                var_e0.b = 6
                x21_1[1].b = 0x41
                *x21_1 = 0x5352
                var_e0:4.b = 0
                x24_1 = *(arg1 + 0x28)
                
                if (x24_1 u>= *(arg1 + 0x30))
                    goto label_e40b50
                
                goto label_e40b14
            
            var_e0.w = 0
        result_2 = result
        i += 1
    while (i != var_88 - result_2)

int16_t entry_x2
uint32_t x8_11 = zx.d(entry_x2)
int128_t var_120

if (x8_11 - 0x301 u>= 2 && x8_11 != 0xfeff)
    Botan::TLS::TLS_Data_Reader::get_range_vector<uint8_t>(&var_78, 2, 2)
    void* x8_12 = var_e0.q
    void* x0_5 = var_e0:8.q
    
    if (((x0_5.d - x8_12.d) & 1) != 0)
        void** x0_37 = __cxa_allocate_exception(0x20)
        int64_t x0_38
        int128_t v1
        x0_38, v1 = operator new(0x40)
        int64_t var_110_1 = x0_38
        v1 = data_71bb80
        __builtin_strncpy(x0_38, "Bad length for signature IDs in certificate request", 0x34)
        var_120 = v1
        *x0_37 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_37[1])
        *x0_37 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_37, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (x0_5 != x8_12)
        int64_t i_1 = 0
        x0_5 = x8_12
        
        do
            uint16_t* x9_9 = *(arg1 + 0x40)
            int64_t x8_15 = *(arg1 + 0x48)
            uint16_t x20_1 = (_byteswap(zx.d(*(x0_5 + i_1))) u>> 0x10).w
            
            if (x9_9 u< x8_15)
                *x9_9 = x20_1
                *(arg1 + 0x40) = &x9_9[1]
            else
                void* x23_1 = *(arg1 + 0x38)
                void* x24_2 = x9_9 - x23_1
                
                if (x24_2 s<= -3)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    sub_ef2a0c()
                    noreturn
                
                int64_t x22_1 = x24_2 s>> 1
                void* x8_16 = x8_15 - x23_1
                void* x9_11
                
                if (x8_16 u< x22_1 + 1)
                    x9_11 = x22_1 + 1
                else
                    x9_11 = x8_16
                
                void* x21_2
                
                if (0x3fffffffffffffff u> x8_16 s>> 1)
                    x21_2 = x9_11
                else
                    x21_2 = 0x7fffffffffffffff
                
                void* x22_3
                int64_t x25_1
                
                if (x21_2 == 0)
                    x25_1 = 0
                    *(x22_1 << 1) = x20_1
                    x22_3 = (x22_1 << 1) + 2
                    
                    if (x24_2 s>= 1)
                        memcpy(x25_1, x23_1, x24_2)
                else
                    if ((x21_2 & 0xffffffff80000000) != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    x25_1 = operator new(x21_2 << 1)
                    uint16_t* x22_2 = x25_1 + (x22_1 << 1)
                    *x22_2 = x20_1
                    x22_3 = &x22_2[1]
                    
                    if (x24_2 s>= 1)
                        memcpy(x25_1, x23_1, x24_2)
                
                *(arg1 + 0x38) = x25_1
                *(arg1 + 0x40) = x22_3
                *(arg1 + 0x48) = x25_1 + (x21_2 << 1)
                
                if (x23_1 != 0)
                    operator delete(x23_1)
            
            x0_5 = var_e0.q
            i_1 += 2
        while (i_1 != var_e0:8.q - x0_5)
    
    if (x0_5 != 0)
        var_e0:8.q = x0_5
        operator delete(x0_5)

Botan::TLS::TLS_Data_Reader::assert_at_least(&var_78)
int64_t x9_13 = *var_70
int64_t x10_5 = var_70[1]

if (x10_5 - (var_68 + x9_13) - 2 != _byteswap(zx.q(*(*var_70 + var_68)) << 0x30))
    void** x0_32 = __cxa_allocate_exception(0x20)
    int64_t x0_33
    int128_t v0_2
    x0_33, v0_2 = operator new(0x30)
    (*"tificate request")[0].o
    int64_t var_d0_2 = x0_33
    v0_2 = data_71c1e0
    __builtin_strncpy(x0_33, "Inconsistent length in certificate request", 0x2b)
    var_e0 = v0_2
    *x0_32 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_32[1])
    *x0_32 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_32, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x10_5 - x9_13 != var_68 + 2)
    do
        Botan::TLS::TLS_Data_Reader::get_range_vector<uint8_t>(&var_78, 2, 0)
        uint64_t var_a8
        Botan::BER_Decoder::BER_Decoder(&var_e0, var_a8)
        var_120.q = _vtable_for_Botan::X509_DN + 0x10
        int128_t var_108
        __builtin_memset(&var_108, 0, 0x20)
        void* var_118_1 = (zx.o(0)).q
        Botan::X509_DN::decode_from(&var_120)
        Botan::X509_DN* x24_3 = *(arg1 + 0x10)
        
        if (x24_3 u>= *(arg1 + 0x18))
            std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::__emplace_back_slow_path<Botan::X509_DN&>(
                arg1 + 8)
        else
            Botan::X509_DN::X509_DN(x24_3)
            *(arg1 + 0x10) = x24_3 + 0x38
        
        void* x0_17 = var_108:8.q
        var_120.q = _vtable_for_Botan::X509_DN + 0x10
        
        if (x0_17 != 0)
            int128_t var_f8_1
            var_f8_1.q = x0_17
            operator delete(x0_17)
        
        if (var_118_1 != 0)
            void* var_110
            void* x21_3 = var_110
            void* x0_18
            
            if (x21_3 != var_118_1)
                bool cond:4_1
                
                do
                    uint32_t x8_26 = zx.d(*(x21_3 - 0x20))
                    *(x21_3 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                    
                    if ((x8_26 & 1) != 0)
                        operator delete(*(x21_3 - 0x10))
                    
                    void* x0_20 = *(x21_3 - 0x38)
                    
                    if (x0_20 != 0)
                        *(x21_3 - 0x30) = x0_20
                        operator delete(x0_20)
                    
                    void* x0_21 = *(x21_3 - 0x58)
                    *(x21_3 - 0x60) = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_21 != 0)
                        *(x21_3 - 0x50) = x0_21
                        operator delete(x0_21)
                    
                    cond:4_1 = var_118_1 == x21_3 - 0x60
                    x21_3 -= 0x60
                while (not(cond:4_1))
                x0_18 = var_118_1
            else
                x0_18 = var_118_1
            
            var_110 = var_118_1
            operator delete(x0_18)
        
        int64_t* var_b0
        int64_t* x0_22 = var_b0
        var_b0 = nullptr
        
        if (x0_22 != 0)
            (*(*x0_22 + 0x38))()
        
        if (var_d0 != 0)
            void* var_c8_1 = var_d0
            int64_t var_c0
            Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)
        
        if (var_a8 != 0)
            uint64_t var_a0 = var_a8
            operator delete(var_a8)
    while (var_70[1] - *var_70 != var_68 + 2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
