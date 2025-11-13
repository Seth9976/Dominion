// 函数: _ZN5Botan15AlternativeName11decode_fromERNS_11BER_DecoderE
// 地址: 0xe94844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
int128_t var_110
char* x11 = &var_110 | 1
char var_240
char* var_2d0 = &var_240
uint8_t var_298
int16_t* fp = &var_298 | 1
void* __offset(
    VTT_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) var_2e8 = _VTT_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 8
void* var_280
int64_t* var_2b0 = &var_280
int32_t var_90
void* result
int64_t var_78
int64_t* var_70
int64_t* var_68

while (((*(*var_70 + 0x18))() & (var_90 == 0xff00 ? 1 : 0) & 1) == 0)
    Botan::BER_Decoder::get_next_object()
    int32_t var_b8
    int32_t* var_a8
    int64_t var_a0
    int32_t* x0_25
    int32_t var_290
    void* var_288
    int64_t var_278
    int64_t* var_268
    void* __offset(vtable_for_Botan::X509_DN, 0x10) var_180
    void* var_178
    void* var_170
    char var_130
    void* var_128
    void* var_120
    int64_t var_118
    void* var_100
    int64_t var_f0
    int64_t* var_e0
    int32_t var_d8
    void* var_d0
    void* var_c8
    int64_t var_c0
    int32_t var_b4
    int32_t* var_b0
    uint64_t x8_11
    
    if (var_b8 != 0)
        x8_11 = zx.q(var_b8 - 1)
        
        if (x8_11.d u> 6)
            x0_25 = var_b0
        else
        label_e9496c:
            
            switch (x8_11)
                case 0
                    if (var_b4 == 0x80)
                        var_298 = 0xc
                        size_t x24_1 = var_a8 - var_b0
                        __builtin_strncpy(fp, "RFC822", 6)
                        char var_291_1 = 0
                        
                        if (x24_1 u>= -0x10)
                            goto label_e95160
                        
                        void* x26_1
                        
                        if (x24_1 u>= 0x17)
                            uint64_t x27_1 = (x24_1 + 0x10) & 0xfffffffffffffff0
                            void* x0_29 = operator new(x27_1)
                            x26_1 = x0_29
                            var_110:8.q = x24_1
                            var_100 = x0_29
                            var_110.q = x27_1 | 1
                            memcpy(x26_1, var_b0, x24_1)
                        else
                            x26_1 = x11
                            var_110.b = (x24_1.d << 1).b
                            
                            if (x24_1 != 0)
                                memcpy(x26_1, var_b0, x24_1)
                        
                        *(x26_1 + x24_1) = 0
                        Botan::AlternativeName::add_attribute(arg1, &var_298)
                        goto label_e94ecc
                    
                    x0_25 = var_b0
                case 1
                    if (var_b4 == 0x80)
                        var_298 = 6
                        size_t x24_4 = var_a8 - var_b0
                        fp[1].b = 0x53
                        *fp = 0x4e44
                        char var_294_1 = 0
                        
                        if (x24_4 u>= -0x10)
                            goto label_e95158
                        
                        char* x26_4
                        
                        if (x24_4 u>= 0x17)
                            uint64_t x27_2 = (x24_4 + 0x10) & 0xfffffffffffffff0
                            void* x0_33 = operator new(x27_2)
                            x26_4 = x0_33
                            var_110:8.q = x24_4
                            var_100 = x0_33
                            var_110.q = x27_2 | 1
                            memcpy(x26_4, var_b0, x24_4)
                        else
                            x26_4 = x11
                            var_110.b = (x24_4.d << 1).b
                            
                            if (x24_4 != 0)
                                memcpy(x26_4, var_b0, x24_4)
                        
                        x26_4[x24_4] = 0
                        Botan::AlternativeName::add_attribute(arg1, &var_298)
                        goto label_e94ecc
                    
                    x0_25 = var_b0
                case 2, 4
                    x0_25 = var_b0
                case 3
                    if (var_b4 == 0xa0)
                        Botan::BER_Decoder::BER_Decoder(&var_110, var_b0)
                        var_180 = _vtable_for_Botan::X509_DN + 0x10
                        __builtin_memset(&var_178, 0, 0x30)
                        var_290.q = 0
                        var_288 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        int64_t (* var_218)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        var_298.q = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        std::__ndk1::ios_base::init(&var_218)
                        int32_t var_188_1 = 0xffffffff
                        int64_t var_190_1 = 0
                        var_218 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x68
                        var_298.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_288 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                        int128_t v0_1
                        v0_1.q = 0
                        v0_1:8.q = 0
                        var_280 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        void* __offset(vtable_for_Botan::X509_DN, 0x10) x8_37 = var_180
                        *var_2d0 = zx.o(0)
                        *(var_2d0 + 0x10) = zx.o(0)
                        int32_t var_220_1 = 0x18
                        (*(x8_37 + 8))(&var_180, &var_110, v0_1)
                        Botan::operator<<(&var_288, &var_180)
                        var_d8.b = 4
                        var_d8:1.w = 0x4e44
                        var_d8:3.b = 0
                        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                        Botan::AlternativeName::add_attribute(arg1, &var_d8)
                        
                        if ((zx.d(var_130) & 1) != 0)
                            operator delete(var_120)
                        
                        if ((zx.d(var_d8.b) & 1) != 0)
                            operator delete(var_c8)
                        
                        uint32_t x11_1 = zx.d(var_240)
                        var_298.q = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_288 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        var_218 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x68
                        var_280 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        void* var_230
                        
                        if ((x11_1 & 1) != 0)
                            operator delete(var_230)
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                        std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
                        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                        var_180 = _vtable_for_Botan::X509_DN + 0x10
                        void* var_160
                        
                        if (var_160 != 0)
                            int128_t var_158_1
                            var_158_1.q = var_160
                            operator delete(var_160)
                        
                        void* x24_3 = var_178
                        
                        if (x24_3 != 0)
                            void* x25_3 = var_170
                            void* x0_21
                            
                            if (x25_3 != x24_3)
                                bool cond:0_1
                                
                                do
                                    uint32_t x8_44 = zx.d(*(x25_3 - 0x20))
                                    *(x25_3 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                                    
                                    if ((x8_44 & 1) != 0)
                                        operator delete(*(x25_3 - 0x10))
                                    
                                    void* x0_23 = *(x25_3 - 0x38)
                                    
                                    if (x0_23 != 0)
                                        *(x25_3 - 0x30) = x0_23
                                        operator delete(x0_23)
                                    
                                    void* x0_24 = *(x25_3 - 0x58)
                                    *(x25_3 - 0x60) = _vtable_for_Botan::OID + 0x10
                                    
                                    if (x0_24 != 0)
                                        *(x25_3 - 0x50) = x0_24
                                        operator delete(x0_24)
                                    
                                    cond:0_1 = x24_3 == x25_3 - 0x60
                                    x25_3 -= 0x60
                                while (not(cond:0_1))
                                x0_21 = var_178
                            else
                                x0_21 = x24_3
                            
                            var_170 = x24_3
                            operator delete(x0_21)
                        
                        int64_t* x0_42 = var_e0
                        var_e0 = nullptr
                        
                        if (x0_42 != 0)
                            (*(*x0_42 + 0x38))()
                        
                        if (var_100 != 0)
                            void* var_f8_1 = var_100
                            Botan::deallocate_memory(var_100, var_f0 - var_100, 1)
                    
                    x0_25 = var_b0
                case 5
                    if (var_b4 == 0x80)
                        var_298 = 6
                        void* x24_5 = var_a8 - var_b0
                        fp[1].b = 0x49
                        *fp = 0x5255
                        char var_294_2 = 0
                        
                        if (x24_5 u< -0x10)
                            char* x26_5
                            
                            if (x24_5 u>= 0x17)
                                uint64_t x27_3 = (x24_5 + 0x10) & 0xfffffffffffffff0
                                void* x0_37 = operator new(x27_3)
                                x26_5 = x0_37
                                var_110:8.q = x24_5
                                var_100 = x0_37
                                var_110.q = x27_3 | 1
                                memcpy(x26_5, var_b0, x24_5)
                            else
                                x26_5 = x11
                                var_110.b = (x24_5.d << 1).b
                                
                                if (x24_5 != 0)
                                    memcpy(x26_5, var_b0, x24_5)
                            
                            *(x26_5 + x24_5) = 0
                            Botan::AlternativeName::add_attribute(arg1, &var_298)
                            goto label_e94ecc
                        
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    label_e95158:
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    label_e95160:
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    label_e95168:
                        int64_t* x0_62 =
                            std::__ndk1::__basic_string_common<true>::__throw_length_error()
                        
                        if (var_128 != 0)
                            void* var_120_1 = var_128
                            Botan::deallocate_memory(var_128, var_118 - var_128, 1)
                        
                        int64_t var_e0_1 = 0
                        
                        if (var_e0 != 0)
                            (*(*var_e0 + 0x38))()
                        
                        if (var_100 != 0)
                            void* var_f8_3 = var_100
                            Botan::deallocate_memory(var_100, var_f0 - var_100, 1)
                        
                        if (var_d0 != 0)
                            void* var_c8_1 = var_d0
                            Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)
                        
                        void* x0_67 = var_178
                        var_180 = _vtable_for_Botan::OID + 0x10
                        int64_t* x0_68
                        
                        if (x0_67 == 0)
                            x0_68 = var_268
                            int64_t var_268_1 = 0
                            
                            if (x0_68 != 0)
                                goto label_e954f0
                            
                            goto label_e954c8
                        
                        void* var_170_1 = x0_67
                        operator delete(x0_67)
                        x0_68 = var_268
                        int64_t var_268_2 = 0
                        void* x0_69
                        
                        if (x0_68 == 0)
                        label_e954c8:
                            x0_69 = var_288
                            
                            if (x0_69 != 0)
                                var_280 = x0_69
                                Botan::deallocate_memory(x0_69, var_278 - x0_69, 1)
                        else
                        label_e954f0:
                            (*(*x0_68 + 0x38))()
                            x0_69 = var_288
                            
                            if (x0_69 != 0)
                                var_280 = x0_69
                                Botan::deallocate_memory(x0_69, var_278 - x0_69, 1)
                        
                        if (var_b0 != 0)
                            int32_t* var_a8_1 = var_b0
                            Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)
                        
                        if (var_68 != 0)
                            (*(*var_68 + 0x38))()
                        
                        if (result != 0)
                            Botan::deallocate_memory(result, var_78 - result, 1)
                        
                        sub_1101e04(x0_62)
                        noreturn
                    
                    x0_25 = var_b0
                case 6
                    if (var_b4 != 0x80)
                        x0_25 = var_b0
                    else
                        x0_25 = var_b0
                        
                        if (var_a8 - x0_25 == 4)
                            int32_t x8_55 = *x0_25
                            var_298 = 4
                            int16_t var_297_1 = 0x5049
                            char var_295_1 = 0
                            Botan::ipv4_to_string(_byteswap(x8_55))
                            Botan::AlternativeName::add_attribute(arg1, &var_298)
                        label_e94ecc:
                            
                            if ((zx.d(var_110.b) & 1) != 0)
                                operator delete(var_100)
                            
                            if ((zx.d(var_298) & 1) == 0)
                                x0_25 = var_b0
                            else
                                operator delete(var_288)
                                x0_25 = var_b0
    else if (var_b4 != 0x80)
        x0_25 = var_b0
    else
        Botan::BER_Decoder::BER_Decoder(&var_298, var_b0)
        var_180 = _vtable_for_Botan::OID + 0x10
        __builtin_memset(&var_178, 0, 0x18)
        Botan::OID::decode_from(&var_180)
        int64_t* var_270
        
        if (((*(*var_270 + 0x18))() & (var_290 == 0xff00 ? 1 : 0) & 1) == 0)
            Botan::BER_Decoder::get_next_object()
            Botan::BER_Decoder::verify_end()
            int32_t var_d4
            
            if (var_d8 != 0 || var_d4 != 0xa0)
                void** x0_58 = __cxa_allocate_exception(0x20)
                int64_t x0_59
                int128_t v0_2
                x0_59, v0_2 = operator new(0x20)
                int64_t var_100_1 = x0_59
                var_110 = data_71b7d0
                __builtin_strncpy(x0_59, "Invalid tags on otherName value", 0x20)
                *x0_58 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_58[1])
                *x0_58 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_58, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::BER_Decoder::BER_Decoder(&var_110, var_d0)
            Botan::BER_Decoder::get_next_object()
            Botan::BER_Decoder::verify_end()
            int32_t x8_26 = var_130.d
            int32_t var_12c
            
            if (x8_26 u<= 0x1e && (1 << x8_26 & 0x545c1000) != 0 && var_12c == 0)
                size_t x24_2 = var_120 - var_128
                
                if (x24_2 u>= -0x10)
                    goto label_e95168
                
                int64_t var_148
                void* var_138
                void* x26_2
                
                if (x24_2 u>= 0x17)
                    uint64_t x27_4 = (x24_2 + 0x10) & 0xfffffffffffffff0
                    void* x0_45 = operator new(x27_4)
                    x26_2 = x0_45
                    size_t var_140_1 = x24_2
                    var_138 = x0_45
                    var_148 = x27_4 | 1
                    memcpy(x26_2, var_128, x24_2)
                else
                    x26_2 = &var_148 | 1
                    var_148.b = (x24_2.d << 1).b
                    
                    if (x24_2 != 0)
                        memcpy(x26_2, var_128, x24_2)
                
                *(x26_2 + x24_2) = 0
                Botan::AlternativeName::add_othername(arg1, &var_180, &var_148)
                
                if ((zx.d(var_148.b) & 1) != 0)
                    operator delete(var_138)
            
            if (var_128 != 0)
                var_120 = var_128
                Botan::deallocate_memory(var_128, var_118 - var_128, 1)
            
            int64_t* x0_50 = var_e0
            var_e0 = nullptr
            
            if (x0_50 != 0)
                (*(*x0_50 + 0x38))()
            
            if (var_100 != 0)
                void* var_f8_2 = var_100
                Botan::deallocate_memory(var_100, var_f0 - var_100, 1)
            
            if (var_d0 != 0)
                var_c8 = var_d0
                Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)
            
            goto label_e94ff8
        
    label_e94ff8:
        void* x0_53 = var_178
        var_180 = _vtable_for_Botan::OID + 0x10
        
        if (x0_53 != 0)
            var_170 = x0_53
            operator delete(x0_53)
        
        int64_t* x0_54 = var_268
        var_268 = nullptr
        
        if (x0_54 != 0)
            (*(*x0_54 + 0x38))()
        
        void* x0_55 = var_288
        
        if (x0_55 != 0)
            var_280 = x0_55
            Botan::deallocate_memory(x0_55, var_278 - x0_55, 1)
        
        x8_11 = zx.q(var_b8 - 1)
        
        if (x8_11.d u<= 6)
            goto label_e9496c
        
        x0_25 = var_b0
    
    if (x0_25 != 0)
        var_a8 = x0_25
        Botan::deallocate_memory(x0_25, var_a0 - x0_25, 1)

if (var_68 != 0)
    (*(*var_68 + 0x38))()

if (result == 0)
    return result

return Botan::deallocate_memory(result, var_78 - result, 1)
