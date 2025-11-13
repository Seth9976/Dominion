// 函数: _ZN5Botan11GeneralName11decode_fromERNS_11BER_DecoderE
// 地址: 0xe9aba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
Botan::BER_Decoder::get_next_object()
int32_t var_90
uint64_t x8_2 = zx.q(var_90 - 1)
int128_t var_220
char* var_210
uint8_t var_100
void* var_f0
void* __offset(vtable_for_Botan::X509_DN, 0x10) var_c8
int32_t var_8c
void* result_1
int64_t var_80
int128_t var_70
char* x0_3
size_t x20_1
void* result_3
uint64_t x23_1

if (x8_2.d u<= 6)
    switch (x8_2)
        case 0
            if (var_8c == 0x80)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    arg1 + 8)
                result_3 = result_1
                x20_1 = var_80 - result_3
                
                if (x20_1 u>= -0x10)
                    goto label_e9b2d0
                
                void* __offset(Botan::BER_Decoder, 0x20) x20_4
                char* x22_3
                
                if (x20_1 u< 0x17)
                label_e9b014:
                    x22_3 = &var_220 | 1
                    var_220.b = (x20_1.d << 1).b
                    
                    if (x20_1 != 0)
                        goto label_e9b0bc
                    
                    x22_3[x20_1] = 0
                    x20_4 = arg1 + 0x20
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(arg1 + 0x30))
                else
                    x23_1 = (x20_1 + 0x10) & 0xfffffffffffffff0
                    x0_3 = operator new(x23_1)
                label_e9b0a4:
                    x22_3 = x0_3
                    var_220:8.q = x20_1
                    var_210 = x0_3
                    var_220.q = x23_1 | 1
                label_e9b0bc:
                    memcpy(x22_3, result_3, x20_1)
                    x22_3[x20_1] = 0
                    x20_4 = arg1 + 0x20
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(arg1 + 0x30))
                int128_t v0 = var_220
                *(x20_4 + 0x10) = var_210
                *x20_4 = v0
            label_e9b048:
                void* result = result_1
                
                if (result != 0)
                    void* result_2 = result
                    int64_t var_78
                    result = Botan::deallocate_memory(result, var_78 - result, 1)
                
                if (*(x24 + 0x28) == x8)
                    return result
                
                __stack_chk_fail()
                noreturn
        case 1
            if (var_8c == 0x80)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    arg1 + 8)
                result_3 = result_1
                x20_1 = var_80 - result_3
                
                if (x20_1 u>= -0x10)
                    goto label_e9b2c8
                
                if (x20_1 u< 0x17)
                    goto label_e9b014
                
                x23_1 = (x20_1 + 0x10) & 0xfffffffffffffff0
                x0_3 = operator new(x23_1)
                goto label_e9b0a4
        case 3
            if (var_8c == 0xa0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    arg1 + 8)
                var_c8 = _vtable_for_Botan::X509_DN + 0x10
                int128_t var_c0_1
                __builtin_memset(&var_c0_1, 0, 0x30)
                Botan::BER_Decoder::BER_Decoder(&var_100, result_1)
                var_220:8.q = 0
                var_210 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                int64_t (* var_1a0)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                var_220.q = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                std::__ndk1::ios_base::init(&var_1a0)
                int32_t var_110_1 = 0xffffffff
                int64_t var_118_1 = 0
                var_1a0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x68
                var_220.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                var_210 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                char var_1c8_1 = (zx.o(0)).b
                int64_t var_1b8_1 = (zx.o(0)).q
                void* __offset(
                    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x10) var_208_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x10
                int32_t var_1a8_1 = 0x18
                Botan::X509_DN::decode_from(&var_c8)
                Botan::operator<<(&var_210, &var_c8)
                std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                
                if ((zx.d(*(arg1 + 0x20)) & 1) != 0)
                    operator delete(*(arg1 + 0x30))
                
                *(arg1 + 0x20) = var_70
                int64_t var_60
                *(arg1 + 0x30) = var_60
                var_220.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                var_1a0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x68
                var_210 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                void* __offset(
                    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x10) var_208_2 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x10
                
                if ((zx.d(var_1c8_1) & 1) != 0)
                    operator delete(var_1b8_1)
                
                std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
                std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                int64_t var_d0_1 = 0
                int64_t* var_d0
                
                if (var_d0 != 0)
                    (*(*var_d0 + 0x38))()
                
                if (var_f0 != 0)
                    void* var_e8_1 = var_f0
                    int64_t var_e0
                    Botan::deallocate_memory(var_f0, var_e0 - var_f0, 1)
                
                int128_t var_b0
                void* x0_21 = var_b0:8.q
                var_c8 = _vtable_for_Botan::X509_DN + 0x10
                
                if (x0_21 != 0)
                    int128_t var_a0
                    var_a0.q = x0_21
                    operator delete(x0_21)
                
                void* x19_1 = var_c0_1.q
                
                if (x19_1 != 0)
                    void* x22_2 = var_c0_1:8.q
                    void* x0_34
                    
                    if (x22_2 == x19_1)
                        x0_34 = x19_1
                    else
                        bool cond:2_1
                        
                        do
                            uint32_t x8_31 = zx.d(*(x22_2 - 0x20))
                            *(x22_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                            
                            if ((x8_31 & 1) != 0)
                                operator delete(*(x22_2 - 0x10))
                            
                            void* x0_23 = *(x22_2 - 0x38)
                            
                            if (x0_23 != 0)
                                *(x22_2 - 0x30) = x0_23
                                operator delete(x0_23)
                            
                            void* x0_24 = *(x22_2 - 0x58)
                            *(x22_2 - 0x60) = _vtable_for_Botan::OID + 0x10
                            
                            if (x0_24 != 0)
                                *(x22_2 - 0x50) = x0_24
                                operator delete(x0_24)
                            
                            cond:2_1 = x19_1 == x22_2 - 0x60
                            x22_2 -= 0x60
                        while (not(cond:2_1))
                        x0_34 = var_c0_1.q
                    
                    var_c0_1:8.q = x19_1
                    operator delete(x0_34)
                
                goto label_e9b048
        case 5
            if (var_8c == 0x80)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    arg1 + 8)
                result_3 = result_1
                x20_1 = var_80 - result_3
                
                if (x20_1 u>= -0x10)
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                label_e9b2c8:
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                label_e9b2d0:
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    __stack_chk_fail()
                    noreturn
                
                if (x20_1 u< 0x17)
                    goto label_e9b014
                
                x23_1 = (x20_1 + 0x10) & 0xfffffffffffffff0
                x0_3 = operator new(x23_1)
                goto label_e9b0a4
        case 6
            if (var_8c == 0x80)
                void* x8_8 = var_80 - result_1
                
                if (x8_8 != 8)
                    if (x8_8 == 0x20)
                        void** x0_39 = __cxa_allocate_exception(0x20)
                        char* x0_40
                        int128_t v0_4
                        x0_40, v0_4 = operator new(0x30)
                        var_210 = x0_40
                        v0_4 = data_71bb40
                        __builtin_strncpy(x0_40, "Unsupported IPv6 name constraint", 0x21)
                        var_220 = v0_4
                        *x0_39 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_39[1])
                        *x0_39 = _vtable_for_Botan::Decoding_Error + 0x10
                        __cxa_throw(x0_39, _typeinfo_for_Botan::Decoding_Error, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    void** x0_43 = __cxa_allocate_exception(0x20)
                    std::__ndk1::to_string(var_80 - result_1)
                    int128_t* x0_46
                    int128_t v0_5
                    x0_46, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                        &var_c8, nullptr)
                    v0_5 = *x0_46
                    var_210 = x0_46[1].q
                    var_220 = v0_5
                    __builtin_memset(x0_46, 0, 0x18)
                    *x0_43 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_43[1])
                    *x0_43 = _vtable_for_Botan::Decoding_Error + 0x10
                    __cxa_throw(x0_43, _typeinfo_for_Botan::Decoding_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    arg1 + 8)
                Botan::ipv4_to_string(_byteswap(*result_1))
                int128_t* x0_7
                int128_t v0_1
                x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_c8)
                v0_1 = *x0_7
                var_210 = x0_7[1].q
                var_220 = v0_1
                __builtin_memset(x0_7, 0, 0x18)
                Botan::ipv4_to_string(_byteswap(*(result_1 + 4)))
                void* x1_4
                
                if ((zx.d(var_100) & 1) == 0)
                    x1_4 = &var_100 | 1
                else
                    x1_4 = var_f0
                
                char* x0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_220, x1_4)
                int64_t x22_1 = *(x0_10 + 0x10)
                char x23_2 = *x0_10
                char x21_1 = x0_10[1]
                var_70:6.q = *(x0_10 + 8)
                var_70.q = *(x0_10 + 2)
                __builtin_memset(x0_10, 0, 0x18)
                
                if ((zx.d(*(arg1 + 0x20)) & 1) != 0)
                    operator delete(*(arg1 + 0x30))
                
                *(arg1 + 0x20) = x23_2
                *(arg1 + 0x21) = x21_1
                *(arg1 + 0x28) = var_70:6.q
                *(arg1 + 0x30) = x22_1
                *(arg1 + 0x22) = var_70.q
                
                if ((zx.d(var_100) & 1) == 0)
                    if ((zx.d(var_220.b) & 1) != 0)
                        goto label_e9b0e8
                    
                    goto label_e9ad4c
                
                operator delete(var_f0)
                int128_t var_c0
                
                if ((zx.d(var_220.b) & 1) == 0)
                label_e9ad4c:
                    
                    if ((zx.d(var_c8.b) & 1) != 0)
                        operator delete(var_c0:8.q)
                else
                label_e9b0e8:
                    operator delete(var_210)
                    
                    if ((zx.d(var_c8.b) & 1) != 0)
                        operator delete(var_c0:8.q)
                goto label_e9b048
void** x0_35 = __cxa_allocate_exception(0x20)
char* x0_36
int128_t v0_3
x0_36, v0_3 = operator new(0x20)
var_210 = x0_36
var_220 = data_71c370
__builtin_strncpy(x0_36, "Found unknown GeneralName type", 0x1f)
*x0_35 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_35[1])
*x0_35 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_35, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
