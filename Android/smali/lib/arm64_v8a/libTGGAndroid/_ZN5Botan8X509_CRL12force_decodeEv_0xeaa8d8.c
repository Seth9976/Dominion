// 函数: _ZN5Botan8X509_CRL12force_decodeEv
// 地址: 0xeaa8d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x110)
*x0 = _vtable_for_Botan::X509_DN + 0x10
__builtin_memset(&x0[1], 0, 0x30)
x0[7] = _vtable_for_Botan::ASN1_Time + 0x10
__builtin_memset(&x0[8], 0, 0x18)
x0[0xb].d = 0xff00
x0[0xc] = _vtable_for_Botan::ASN1_Time + 0x10
x0[0x10].d = 0xff00
__builtin_memset(&x0[0xd], 0, 0x18)
x0[0x11] = 0
x0[0x12] = 0
x0[0x13] = 0
x0[0x14] = _vtable_for_Botan::Extensions + 0x10
__builtin_memset(&x0[0x15], 0, 0x18)
x0[0x19] = 0
x0[0x18] = &x0[0x19]
x0[0x1a] = 0
*(x0 + 0xd8) = zx.o(0)
__builtin_memset(&x0[0x1d], 0, 0x20)
x0[0x21] = 0
uint64_t var_98[0x2]
Botan::BER_Decoder::BER_Decoder(&var_98)
void* __offset(vtable_for_Botan::OID, 0x10) var_238 = nullptr
int64_t var_a0
Botan::BER_Decoder::decode_optional<uint64_t>(&var_98, &var_a0, 2, nullptr)
void* var_228
int128_t var_100
int128_t var_e0

if (var_a0 u>= 2)
    void** x0_66 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(var_a0 + 1)
    int128_t* x0_69
    int128_t v0_7
    x0_69, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_100, nullptr)
    int64_t var_d0_1 = x0_69[1].q
    var_e0 = *x0_69
    __builtin_memset(x0_69, 0, 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "X509_CRL: ", &var_e0)
    *x0_66 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_66[1])
    *x0_66 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_238.b) & 1) != 0)
        operator delete(var_228)
    
    *x0_66 = _vtable_for_Botan::X509_CRL::X509_CRL_Error + 0x10
    __cxa_throw(x0_66, _typeinfo_for_Botan::X509_CRL::X509_CRL_Error, Botan::Exception::~Exception)
    noreturn

var_e0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
var_e0:8.q = _vtable_for_Botan::OID + 0x10
int32_t* var_d0
__builtin_memset(&var_d0, 0, 0x28)
Botan::AlgorithmIdentifier::decode_from(&var_e0)
void* entry_x0
int32_t* x9_1 = *(entry_x0 + 0x18)
int64_t x8_7 = *(entry_x0 + 0x20)
int32_t* x10 = var_d0
int64_t var_c8

if (x8_7 - x9_1 == var_c8 - x10)
    if (x9_1 != x8_7)
        do
            if (*x9_1 != *x10)
                goto label_eab280
            
            x9_1 = &x9_1[1]
            x10 = &x10[1]
        while (x8_7 != x9_1)
    
    char* x8_8 = *(entry_x0 + 0x30)
    int64_t x9_2 = *(entry_x0 + 0x38)
    int128_t var_c0
    char* x10_4
    
    if (x8_8 == x9_2 || (x9_2 - x8_8 == 2 && zx.d(*x8_8) == 5 && zx.d(x8_8[1]) == 0))
        x10_4 = var_c0:8.q
    
    void* var_b0
    
    if ((x8_8 == x9_2 || (x9_2 - x8_8 == 2 && zx.d(*x8_8) == 5 && zx.d(x8_8[1]) == 0))
        && (x10_4 == var_b0 || (var_b0 - x10_4 == 2 && zx.d(*x10_4) == 5 && zx.d(x10_4[1]) == 0)))
    label_eaab00:
        (*(*x0 + 8))(x0, &var_98)
        (*(x0[7] + 8))(&x0[7], &var_98)
        (*(x0[0xc] + 8))(&x0[0xc], &var_98)
        Botan::BER_Decoder::get_next_object()
        int32_t x8_15 = var_100.d
        char var_120
        int32_t var_230
        int64_t var_22c
        int128_t var_11f
        int64_t var_108
        int64_t var_e8
        
        if (x8_15 != 0x10)
        label_eaad08:
            
            if (x8_15 != 0)
            label_eaae00:
                
                if (x8_15 == 0xff00)
                    Botan::BER_Decoder::verify_end()
                    var_120 = 0x12
                    __builtin_strcpy(&var_11f, "2.5.29.20")
                    Botan::OID::OID(&var_238)
                    
                    if ((zx.d(var_120) & 1) != 0)
                        operator delete(var_11f:0xf.q)
                    
                    int64_t x0_24 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::CRL_Number>(
                        &x0[0x14])
                    void* x0_25 = var_230.q
                    var_238 = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_25 != 0)
                        void* var_228_1 = x0_25
                        operator delete(x0_25)
                    
                    if (x0_24 != 0)
                        x0[0x1b] = Botan::Cert_Extension::CRL_Number::get_crl_number()
                    
                    var_120 = 0x12
                    __builtin_strcpy(&var_11f, "2.5.29.35")
                    Botan::OID::OID(&var_238)
                    
                    if ((zx.d(var_120) & 1) != 0)
                        operator delete(var_11f:0xf.q)
                    
                    void* x0_31 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Authority_Key_ID>(
                        &x0[0x14])
                    void* x0_32 = var_230.q
                    var_238 = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_32 != 0)
                        void* var_228_2 = x0_32
                        operator delete(x0_32)
                    
                    if (x0_31 != 0 && x0_31 + 8 != &x0[0x1c])
                        *(x0_31 + 0x10)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
                            &x0[0x1c], *(x0_31 + 8))
                    
                    var_120 = 0x12
                    __builtin_strcpy(&var_11f, "2.5.29.28")
                    Botan::OID::OID(&var_238)
                    
                    if ((zx.d(var_120) & 1) != 0)
                        operator delete(var_11f:0xf.q)
                    
                    int64_t x0_37 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::CRL_Issuing_Distribution_Point>(
                        &x0[0x14])
                    void* x0_38 = var_230.q
                    var_238 = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_38 != 0)
                        void* var_228_3 = x0_38
                        operator delete(x0_38)
                    
                    if (x0_37 != 0)
                        var_230.q = 0
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x40) var_228_4 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        int64_t (* var_1b8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        var_238 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        std::__ndk1::ios_base::init(&var_1b8)
                        int32_t var_128_1 = 0xffffffff
                        int64_t var_130_1 = 0
                        var_1b8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x68
                        var_238 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x40) var_228_5 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                        char var_1e0_1 = (zx.o(0)).b
                        int64_t var_1d0_1 = (zx.o(0)).q
                        int32_t var_1c0_1 = 0x18
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x10) var_220_3 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        Botan::AlternativeName::contents()
                        int64_t* i = var_120.q
                        
                        while (i != &var_11f:7)
                            uint64_t x8_51 = zx.q(i[4].b)
                            int32_t temp0_1 = x8_51.d & 1
                            void* x1_11
                            
                            if (temp0_1 == 0)
                                x1_11 = i + 0x21
                            else
                                x1_11 = i[6]
                            
                            uint64_t x2_2
                            
                            if (temp0_1 == 0)
                                x2_2 = x8_51 u>> 1
                            else
                                x2_2 = i[5]
                            
                            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* 
                                x0_43 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                    &var_22c:4, x1_11, x2_2), 
                                ": ", 2)
                            uint64_t x8_52 = zx.q(i[7].b)
                            int32_t temp1_1 = x8_52.d & 1
                            char* x1_12
                            
                            if (temp1_1 == 0)
                                x1_12 = i + 0x39
                            else
                                x1_12 = i[9]
                            
                            uint64_t x2_3
                            
                            if (temp1_1 == 0)
                                x2_3 = x8_52 u>> 1
                            else
                                x2_3 = i[8]
                            
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                    x0_43, x1_12, x2_3), 
                                " ", 1)
                            int64_t* j_1 = i[1]
                            
                            if (j_1 == 0)
                                void* x8_54 = &i[2]
                                int64_t* i_4 = *x8_54
                                
                                if (*i_4 == i)
                                    i = i_4
                                else
                                    void* j
                                    
                                    do
                                        j = *x8_54
                                        x8_54 = j + 0x10
                                        i = *x8_54
                                    while (*i != j)
                            else
                                do
                                    i = j_1
                                    j_1 = *j_1
                                while (j_1 != 0)
                        
                        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
                            &var_120)
                        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                        
                        if ((zx.d(x0[0x1f].b) & 1) != 0)
                            operator delete(x0[0x21])
                        
                        int128_t v0_5 = var_120.o
                        int64_t x8_57 = var_11f:0xf.q
                        var_238 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x40) var_228_6 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x10) var_220_4 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        x0[0x21] = x8_57
                        *(x0 + 0xf8) = v0_5
                        var_1b8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x68
                        
                        if ((zx.d(var_1e0_1) & 1) != 0)
                            operator delete(var_1d0_1)
                        
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                        std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
                        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                    
                    void* x0_48 = var_100:8.q
                    
                    if (x0_48 != 0)
                        void* var_f0_3 = x0_48
                        Botan::deallocate_memory(x0_48, var_e8 - x0_48, 1)
                    
                    void* x0_49 = var_c0:8.q
                    var_e0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                    
                    if (x0_49 != 0)
                        var_b0 = x0_49
                        operator delete(x0_49)
                    
                    int32_t* x0_50 = var_d0
                    var_e0:8.q = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_50 != 0)
                        int32_t* var_c8_1 = x0_50
                        operator delete(x0_50)
                    
                    int64_t var_68_1 = 0
                    int64_t* var_68
                    
                    if (var_68 != 0)
                        (*(*var_68 + 0x38))()
                    
                    void* var_88
                    
                    if (var_88 != 0)
                        void* var_80_1 = var_88
                        int64_t var_78
                        Botan::deallocate_memory(var_88, var_78 - var_88, 1)
                    
                    int64_t* result = operator new(0x20)
                    result[2] = 0
                    result[3] = x0
                    *result = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::CRL_Data*, std::__ndk1::default_delete<Botan::CRL_Data>, std::__ndk1::allocator<Botan::CRL_Data> >
                        + 0x10
                    result[1] = 0
                    int64_t* x21_2 = *(entry_x0 + 0x80)
                    *(entry_x0 + 0x78) = x0
                    *(entry_x0 + 0x80) = result
                    
                    if (x21_2 != 0)
                        int64_t x9_17
                        int32_t i_1
                        
                        do
                            x9_17 = __ldaxr(&x21_2[1])
                            i_1 = __stlxr(x9_17 - 1, &x21_2[1])
                        while (i_1 != 0)
                        
                        if (x9_17 == 0)
                            (*(*x21_2 + 0x10))(x21_2)
                            return std::__ndk1::__shared_weak_count::__release_weak()
                    
                    return result
            else if (var_100:4.d == 0xa0)
                __builtin_memset(&var_22c, 0, 0x1c)
                var_230 = 0xff00
                struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable
                    ** x0_16
                int128_t v0_3
                x0_16, v0_3 = operator new(0x30)
                int64_t x9_10 = var_100.q
                v0_3 = var_100
                *x0_16 = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
                x0_16[1] = x9_10
                void* x8_35 = x0[0x14]
                __builtin_memset(&var_100:8, 0, 0x18)
                struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable
                    ** var_210_2 = x0_16
                *(x0_16 + 0x10) = v0_3
                x0_16[4] = var_e8
                x0_16[5] = 0
                var_238 = nullptr
                (*(x8_35 + 8))(&x0[0x14], &var_238)
                Botan::BER_Decoder::verify_end()
                Botan::BER_Decoder::get_next_object()
                void* x0_18 = var_100:8.q
                var_100.q = var_120.q
                
                if (x0_18 != 0)
                    void* var_f0_2 = x0_18
                    int64_t var_e8_2
                    Botan::deallocate_memory(x0_18, var_e8_2 - x0_18, 1)
                
                int64_t var_208_4 = 0
                var_100 = var_11f
                var_e8 = var_108
                
                if (x0_16 != 0)
                    (*x0_16)->vFunc_7()
                
                if (var_228 != 0)
                    void* var_220_2 = var_228
                    int64_t var_21c_1
                    Botan::deallocate_memory(var_228, var_21c_1 - var_228, 1)
                
                x8_15 = var_100.d
                goto label_eaae00
        else if (var_100:4.d == 0x20)
            __builtin_memset(&var_22c, 0, 0x1c)
            var_230 = 0xff00
            struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** 
                x0_7
            int128_t v0_1
            x0_7, v0_1 = operator new(0x30)
            int64_t x9_3 = var_100.q
            v0_1 = var_100
            __builtin_memset(&var_100:8, 0, 0x18)
            struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** 
                var_210_1 = x0_7
            struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** 
                var_208_1 = x0_7
            var_238 = nullptr
            *x0_7 = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
            x0_7[1] = x9_3
            *(x0_7 + 0x10) = v0_1
            x0_7[4] = var_e8
            x0_7[5] = 0
            
            while (((*x0_7)->vFunc_3() & (var_230 == 0xff00 ? 1 : 0) & 1) == 0)
                var_120.q = _vtable_for_Botan::CRL_Entry + 0x10
                var_11f:7.q = 0
                var_11f:0xf.q = 0
                Botan::CRL_Entry::decode_from(&var_120)
                void** x8_22 = x0[0x12]
                
                if (x8_22 == x0[0x13])
                    std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> >::__push_back_slow_path<Botan::CRL_Entry const&>(
                        &x0[0x11])
                else
                    *x8_22 = _vtable_for_Botan::CRL_Entry + 0x10
                    x8_22[1] = var_11f:7.q
                    int64_t x9_7 = var_11f:0xf.q
                    x8_22[2] = x9_7
                    
                    if (x9_7 != 0)
                        int32_t i_2
                        
                        do
                            i_2 = __stxr(__ldxr(x9_7 + 8) + 1, x9_7 + 8)
                        while (i_2 != 0)
                    
                    x0[0x12] = &x8_22[3]
                
                int64_t* x23_2 = var_11f:0xf.q
                var_120.q = _vtable_for_Botan::CRL_Entry + 0x10
                
                if (x23_2 != 0)
                    int64_t x9_9
                    int32_t i_3
                    
                    do
                        x9_9 = __ldaxr(&x23_2[1])
                        i_3 = __stlxr(x9_9 - 1, &x23_2[1])
                    while (i_3 != 0)
                    
                    if (x9_9 == 0)
                        (*(*x23_2 + 0x10))(x23_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                x0_7 = var_210_1
            
            Botan::BER_Decoder::get_next_object()
            void* x0_13 = var_100:8.q
            var_100.q = var_120.q
            
            if (x0_13 != 0)
                void* var_f0_1 = x0_13
                int64_t var_e8_1
                Botan::deallocate_memory(x0_13, var_e8_1 - x0_13, 1)
            
            int64_t var_208_2 = 0
            var_100 = var_11f
            var_e8 = var_108
            
            if (var_208_1 != 0)
                (*var_208_1)->vFunc_7()
            
            if (var_228 != 0)
                void* var_220_1 = var_228
                int64_t var_21c
                Botan::deallocate_memory(var_228, var_21c - var_228, 1)
            
            x8_15 = var_100.d
            goto label_eaad08
        void** x0_61 = __cxa_allocate_exception(0x20)
        __builtin_strncpy(&var_120, "$Unknown tag in CRL", 0x14)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "X509_CRL: ", &var_120)
        *x0_61 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_61[1])
        *x0_61 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_238.b) & 1) != 0)
            operator delete(var_228)
        
        *x0_61 = _vtable_for_Botan::X509_CRL::X509_CRL_Error + 0x10
        __cxa_throw(x0_61, _typeinfo_for_Botan::X509_CRL::X509_CRL_Error, 
            Botan::Exception::~Exception)
        noreturn
    
    char* x10_6 = var_c0:8.q
    void* x11_6 = x9_2 - x8_8
    void* x12_3 = var_b0 - x10_6
    
    if (x9_2 != x8_8 && x11_6 == x12_3)
        do
            if (zx.d(*x8_8) != zx.d(*x10_6))
                goto label_eab280
            
            x8_8 = &x8_8[1]
            x10_6 = &x10_6[1]
        while (x9_2 != x8_8)
        
        goto label_eaab00
    
    if (x11_6 == x12_3)
        goto label_eaab00

label_eab280:
void** x0_55 = __cxa_allocate_exception(0x20)
int64_t x0_56
int128_t v0_6
x0_56, v0_6 = operator new(0x20)
int64_t var_f0_4 = x0_56
var_100 = data_71cd20
__builtin_strncpy(x0_56, "Algorithm identifier mismatch", 0x1e)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "X509_CRL: ", &var_100)
*x0_55 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_55[1])
*x0_55 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_238.b) & 1) != 0)
    operator delete(var_228)

*x0_55 = _vtable_for_Botan::X509_CRL::X509_CRL_Error + 0x10
__cxa_throw(x0_55, _typeinfo_for_Botan::X509_CRL::X509_CRL_Error, Botan::Exception::~Exception)
noreturn
