// 函数: sub_eb9ea8
// 地址: 0xeb9ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
int64_t x0 = operator new(0x440)
Botan::X509_Certificate_Data::X509_Certificate_Data()
*arg1 = x0
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_e0 = -1
int32_t var_d8 = 1
int32_t var_118 = 0xff00
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_b0
Botan::BER_Decoder::BER_Decoder(&var_b0)
char* var_178 = nullptr
Botan::BigInt* x0_3 = Botan::BER_Decoder::decode_optional<uint64_t>(&var_b0, *arg1 + 0x428, 0, 0xa0)
Botan::BER_Decoder::decode(x0_3, &result_1, 2)
int64_t* x0_5 = *arg1 + 0x18
(*(*x0_5 + 8))(x0_5, x0_3)
int64_t* x0_7 = *arg1 + 0x58
(*(*x0_7 + 8))(x0_7, x0_3)
Botan::BER_Decoder::start_cons(x0_3, 0x10)
int64_t* x0_10 = *arg1 + 0xf8
int128_t var_160
(*(*x0_10 + 8))(x0_10, &var_160)
void* x8_8 = *arg1
(*(*(x8_8 + 0x120) + 8))(x8_8 + 0x120, &var_160)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_12 =
    Botan::BER_Decoder::end_cons()
int64_t* x0_14 = *arg1 + 0x90
(*(*x0_14 + 8))(x0_14, x0_12)
Botan::BER_Decoder::get_next_object()
uint64_t var_c8
uint64_t x20_7 = var_c8
int64_t* i_3
var_118.q = i_3
uint64_t var_110 = x20_7
int64_t var_c0
int64_t var_108 = var_c0
int64_t var_b8
int64_t var_100 = var_b8
void* x0_18 = Botan::BER_Decoder::decode_optional_string<std::__ndk1::allocator<uint8_t> >(
    Botan::BER_Decoder::decode_optional_string<std::__ndk1::allocator<uint8_t> >(x0_12, 
        *arg1 + 0x1e8, 3, 1), 
    *arg1 + 0x200, 3, 2)
Botan::BER_Decoder::get_next_object()
int64_t* i_6 = i_3
uint64_t x8_13 = var_c8
void* x0_19
int128_t v0
x0_19, v0 = operator new(0x40)
i_3.o = data_71adb0
__builtin_strncpy(x0_19, "TBSCertificate has extra data after extensions block", 0x35)

if (((*(**(x0_18 + 0x28) + 0x18))() & 1) == 0 || *(x0_18 + 8) != 0xff00)
    void** x0_198 = __cxa_allocate_exception(0x20)
    *x0_198 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_198[1])
    *x0_198 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_198, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

operator delete(x0_19)
int64_t var_130_1 = 0
int64_t* var_130

if (var_130 != 0)
    (*(*var_130 + 0x38))()

void* var_150
void* var_148

if (var_150 != 0)
    var_148 = var_150
    int64_t var_140
    Botan::deallocate_memory(var_150, var_140 - var_150, 1)

int64_t* var_80_1 = nullptr
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0
void* var_98
int64_t var_90

if (var_a0 != 0)
    var_98 = var_a0
    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)

void* x8_24 = *arg1

if (*(x8_24 + 0x428) u>= 3)
    void** x0_201 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(*(*arg1 + 0x428))
    int128_t* x0_204
    int128_t v0_14
    x0_204, v0_14 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_b0, nullptr)
    int64_t var_150_3 = x0_204[1].q
    var_160 = *x0_204
    __builtin_memset(x0_204, 0, 0x18)
    *x0_201 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_201[1])
    *x0_201 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_201, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int32_t* x10 = *(arg2 + 0x18)
int64_t x9_4 = *(arg2 + 0x20)
int32_t* x11 = *(x8_24 + 0x28)

if (x9_4 - x10 == *(x8_24 + 0x30) - x11)
    if (x10 != x9_4)
        do
            if (*x10 != *x11)
                goto label_ebb698
            
            x10 = &x10[1]
            x11 = &x11[1]
        while (x9_4 != x10)
    
    char* x9_5 = *(arg2 + 0x30)
    int64_t x10_1 = *(arg2 + 0x38)
    char* x11_4
    int64_t x12_3
    
    if (x9_5 == x10_1 || (x10_1 - x9_5 == 2 && zx.d(*x9_5) == 5 && zx.d(x9_5[1]) == 0))
        x11_4 = *(x8_24 + 0x40)
        x12_3 = *(x8_24 + 0x48)
    
    if ((x9_5 == x10_1 || (x10_1 - x9_5 == 2 && zx.d(*x9_5) == 5 && zx.d(x9_5[1]) == 0))
        && (x11_4 == x12_3 || (x12_3 - x11_4 == 2 && zx.d(*x11_4) == 5 && zx.d(x11_4[1]) == 0)))
    label_eba22c:
        void* x0_27
        int128_t v0_1
        x0_27, v0_1 = operator new(0x20)
        v0_1 = data_71d400
        void* var_150_1 = x0_27
        var_160 = v0_1
        __builtin_strncpy(x0_27, "X.509 certificate public key", 0x1d)
        Botan::BER_Object::assert_is_a(&var_118, 0x10, 0x20)
        
        if ((zx.d(var_160.b) & 1) != 0)
            operator delete(var_150_1)
        
        *(*arg1 + 0x43e) = (var_d8 == 0 ? 1 : 0).b
        void* x8_29 = *arg1
        *(x8_29 + 0x428) += 1
        Botan::BigInt::encode(&result_1)
        int64_t* x24_1 = *arg1
        void* x0_31 = *x24_1
        
        if (x0_31 != 0)
            x24_1[1] = x0_31
            operator delete(x0_31)
            __builtin_memset(x24_1, 0, 0x18)
        
        *x24_1 = var_160.q
        x24_1[1] = var_160:8.q
        x24_1[2] = var_150_1
        void* x8_33 = *arg1
        uint8_t* x0_32 = *(x8_33 + 0xb0)
        Botan::ASN1::put_in_sequence(x0_32, *(x8_33 + 0xb8) - x0_32)
        void* x21_1 = *arg1
        void* x0_33 = *(x21_1 + 0xe0)
        
        if (x0_33 != 0)
            *(x21_1 + 0xe8) = x0_33
            operator delete(x0_33)
            __builtin_memset(x21_1 + 0xe0, 0, 0x18)
        
        *(x21_1 + 0xe0) = var_160
        *(x21_1 + 0xf0) = var_150_1
        void* x8_36 = *arg1
        uint8_t* x0_34 = *(x8_36 + 0x78)
        Botan::ASN1::put_in_sequence(x0_34, *(x8_36 + 0x80) - x0_34)
        void* x24_4 = *arg1
        void* x0_35 = *(x24_4 + 0xc8)
        
        if (x0_35 != 0)
            *(x24_4 + 0xd0) = x0_35
            operator delete(x0_35)
            __builtin_memset(x24_4 + 0xc8, 0, 0x18)
        
        *(x24_4 + 0xc8) = var_160
        *(x24_4 + 0xd8) = var_150_1
        var_160.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        var_160:8.q = _vtable_for_Botan::OID + 0x10
        __builtin_memset(&var_150_1, 0, 0x30)
        Botan::BER_Decoder::BER_Decoder(&var_b0, x20_7)
        (*(var_160.q + 8))(&var_160, &var_b0)
        int64_t* var_88
        int64_t i
        
        do
            i = (**var_88)(var_88, &i_3, 1)
        while (i != 0)
        int64_t* var_80_2 = nullptr
        
        if (var_80_1 != 0)
            (*(*var_80_1 + 0x38))()
        
        if (var_a0 != 0)
            var_98 = var_a0
            Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)
        
        Botan::OIDS::oid2str_or_empty(&var_160:8)
        var_b0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
        char var_a8 = 0x2f
        struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
            * const* var_90_1 = &var_b0
        Botan::split_on_pred(&i_3, &var_b0)
        
        if (&var_b0 == var_90_1)
            (*var_90_1)->vFunc_4()
        else if (var_90_1 != 0)
            (*var_90_1)->j_operator delete()
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        char* var_170
        char* var_138
        
        if (var_178 != var_170)
            uint64_t x8_51 = zx.q(*var_178)
            uint64_t x8_52
            
            if ((x8_51.d & 1) == 0)
                x8_52 = x8_51 u>> 1
            else
                x8_52 = *(var_178 + 8)
            
            if (x8_52 == 3 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    var_178, 0, -ffffffffffffffff, &data_76da56) == 0)
                if (((var_170 - var_178) s>> 3) * -0x5555555555555555 u< 2)
                    Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_b0, &var_160:8)
                    void* x9_14 = var_150_1
                    void* x0_51 = var_a0
                    int32_t x24_5
                    
                    if (var_148 - x9_14 != var_98 - x0_51)
                    label_eba6f4:
                        x24_5 = 0
                    else
                        if (x9_14 != var_148)
                            void* x10_14 = x0_51
                            
                            do
                                if (*x9_14 != *x10_14)
                                    goto label_eba6f4
                                
                                x9_14 += 4
                                x10_14 += 4
                            while (var_148 != x9_14)
                        
                        char* x8_62 = var_138
                        
                        if ((x8_62 == var_130_1 || (var_130_1 - x8_62 == 2 && zx.d(*x8_62) == 5
                                && zx.d(x8_62[1]) == 0)) && (var_88 == var_80_2 || (var_80_2 - var_88 == 2
                                && zx.d(*var_88) == 5 && zx.d(*(var_88 + 1)) == 0)))
                            x24_5 = 1
                        else
                            int64_t* x10_20 = var_88
                            void* x11_22 = var_80_2 - x10_20
                            x24_5 = var_130_1 - x8_62 == x11_22 ? 1 : 0
                            
                            if (var_130_1 != x8_62 && var_130_1 - x8_62 == x11_22)
                                do
                                    uint32_t x11_23 = zx.d(*x8_62)
                                    uint32_t x12_17 = zx.d(*x10_20)
                                    x24_5 = x11_23 == x12_17 ? 1 : 0
                                    
                                    if (x11_23 != x12_17)
                                        break
                                    
                                    x8_62 = &x8_62[1]
                                    x10_20 += 1
                                while (var_130_1 != x8_62)
                    
                    var_b0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                    
                    if (var_88 != 0)
                        var_80_2 = var_88
                        operator delete(var_88)
                        x0_51 = var_a0
                    
                    var_a8.q = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_51 != 0)
                        void* var_98_1 = x0_51
                        operator delete(x0_51)
                    
                    if ((x24_5 & 1) == 0)
                        void** x0_211 = __cxa_allocate_exception(0x20)
                        int64_t x0_212
                        int128_t v0_16
                        x0_212, v0_16 = operator new(0x40)
                        (*"UST contain NULL")[0].o
                        int64_t var_a0_5 = x0_212
                        v0_16 = data_71b3f0
                        __builtin_strncpy(x0_212, 
                            "RSA algorithm parameters field MUST contain NULL", 0x31)
                        var_b0.o = v0_16
                        *x0_211 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_211[1])
                        *x0_211 = _vtable_for_Botan::Decoding_Error + 0x10
                        __cxa_throw(x0_211, _typeinfo_for_Botan::Decoding_Error, 
                            Botan::Exception::~Exception)
                        noreturn
                else
                    uint64_t x8_57 = zx.q(var_178[0x18])
                    uint64_t x8_58
                    
                    if ((x8_57.d & 1) == 0)
                        x8_58 = x8_57 u>> 1
                    else
                        x8_58 = *(var_178 + 0x20)
                    
                    if (x8_58 == 5 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_178[0x18], 0, -ffffffffffffffff, "EMSA4") == 0)
                        void* x9_12 = var_150_1
                        int32_t* x10_5 = *(arg2 + 0x18)
                        
                        if (var_148 - x9_12 != *(arg2 + 0x20) - x10_5)
                        label_ebb604:
                            void** x0_189 = __cxa_allocate_exception(0x20)
                            int64_t x0_190
                            int128_t v0_12
                            x0_190, v0_12 = operator new(0x20)
                            int64_t var_a0_3 = x0_190
                            var_b0.o = data_71cd20
                            __builtin_strncpy(x0_190, "Algorithm identifier mismatch", 0x1e)
                            *x0_189 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_189[1])
                            *x0_189 = _vtable_for_Botan::Decoding_Error + 0x10
                            __cxa_throw(x0_189, _typeinfo_for_Botan::Decoding_Error, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        if (x9_12 != var_148)
                            do
                                if (*x9_12 != *x10_5)
                                    goto label_ebb604
                                
                                x9_12 += 4
                                x10_5 = &x10_5[1]
                            while (var_148 != x9_12)
                        
                        char* x8_60 = var_138
                        
                        if (x8_60 == var_130_1 || (var_130_1 - x8_60 == 2 && zx.d(*x8_60) == 5
                                && zx.d(x8_60[1]) == 0))
                            char* x10_9 = *(arg2 + 0x30)
                            int64_t x11_11 = *(arg2 + 0x38)
                            
                            if (x10_9 != x11_11 && (x11_11 - x10_9 != 2 || zx.d(*x10_9) != 5
                                    || zx.d(x10_9[1]) != 0))
                                goto label_eba5c0
                        else
                        label_eba5c0:
                            char* x10_11 = *(arg2 + 0x30)
                            void* x11_14 = var_130_1 - x8_60
                            void* x12_12 = *(arg2 + 0x38) - x10_11
                            
                            if (var_130_1 != x8_60 && x11_14 == x12_12)
                                do
                                    if (zx.d(*x8_60) != zx.d(*x10_11))
                                        goto label_ebb604
                                    
                                    x8_60 = &x8_60[1]
                                    x10_11 = &x10_11[1]
                                while (var_130_1 != x8_60)
                            else if (x11_14 != x12_12)
                                goto label_ebb604
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t const*>(
            *arg1 + 0x148, x20_7)
        void* x8_66 = *arg1
        uint8_t* x0_54 = *(x8_66 + 0x148)
        Botan::ASN1::put_in_sequence(x0_54, *(x8_66 + 0x150) - x0_54)
        void* x21_4 = *arg1
        void* x0_55 = *(x21_4 + 0x160)
        
        if (x0_55 != 0)
            *(x21_4 + 0x168) = x0_55
            operator delete(x0_55)
            __builtin_memset(x21_4 + 0x160, 0, 0x18)
        
        *(x21_4 + 0x160) = var_b0.o
        *(x21_4 + 0x170) = var_a0
        *arg1
        Botan::BER_Decoder::BER_Decoder(&var_b0)
        void* x8_70 = *arg1
        (*(*(x8_70 + 0x1a8) + 8))(x8_70 + 0x1a8, &var_b0)
        Botan::BER_Decoder::decode(&var_b0, *arg1 + 0x178, 3, 3)
        int64_t* var_80_3 = nullptr
        
        if (var_80_2 != 0)
            (*(*var_80_2 + 0x38))()
        
        if (var_a0 != 0)
            void* var_98_2 = var_a0
            Botan::deallocate_memory(var_a0, var_90_1 - var_a0, 1)
        
        if (i_6.d != 0xff00)
            if (i_6.d != 3 || i_6 u>> 0x20 != 0xa0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    * x0_207 = __cxa_allocate_exception(0x20)
                int64_t x0_208
                int128_t v0_15
                x0_208, v0_15 = operator new(0x20)
                int64_t var_a0_4 = x0_208
                var_b0.o = data_71aa40
                __builtin_strncpy(x0_208, "Unknown tag in X.509 cert", 0x1a)
                Botan::BER_Bad_Tag::BER_Bad_Tag(x0_207, &var_b0)
                __cxa_throw(x0_207, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
                noreturn
            
            Botan::BER_Decoder::BER_Decoder(&var_b0, x8_13)
            void* x8_75 = *arg1
            (*(*(x8_75 + 0x218) + 8))(x8_75 + 0x218, &var_b0)
            Botan::BER_Decoder::verify_end()
            int64_t var_80_4 = 0
            
            if (var_80_3 != 0)
                (*(*var_80_3 + 0x38))()
            
            if (var_a0 != 0)
                void* var_98_3 = var_a0
                Botan::deallocate_memory(var_a0, var_90_1 - var_a0, 1)
        
        void* x21_5 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.15")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_68 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Key_Usage>(
            x21_5 + 0x218)
        void* x0_69 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_69 != 0)
            var_a0 = x0_69
            operator delete(x0_69)
        
        void* x21_6
        
        if (x0_68 == 0)
            *(*arg1 + 0x438) = 0
            x21_6 = *arg1
        else
            *(*arg1 + 0x438) = *(x0_68 + 8)
            x21_6 = *arg1
            
            if (*(x21_6 + 0x438) == 0)
                void** x0_70 = __cxa_allocate_exception(0x20)
                int64_t x0_71
                int128_t v0_5
                x0_71, v0_5 = operator new(0x30)
                (*"ing for KeyUsage")[0].o
                int64_t var_a0_1 = x0_71
                v0_5 = data_71ce10
                __builtin_strncpy(x0_71, "Certificate has invalid encoding for KeyUsage", 0x2e)
                var_b0.o = v0_5
                *x0_70 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_70[1])
                *x0_70 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_70, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
        
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.14")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_78 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Subject_Key_ID>(x21_6
            + 0x218)
        void* x0_79 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_79 != 0)
            var_a0 = x0_79
            operator delete(x0_79)
        
        if (x0_78 != 0)
            uint8_t* x0_80 = *arg1 + 0x280
            
            if (x0_80 != x0_78 + 8)
                *(x0_78 + 0x10)
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
                    x0_80, *(x0_78 + 8))
        
        void* x21_7 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.35")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_84 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Authority_Key_ID>(
            x21_7 + 0x218)
        void* x0_85 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_85 != 0)
            var_a0 = x0_85
            operator delete(x0_85)
        
        if (x0_84 != 0)
            uint8_t* x0_86 = *arg1 + 0x268
            
            if (x0_86 != x0_84 + 8)
                *(x0_84 + 0x10)
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
                    x0_86, *(x0_84 + 8))
        
        void* x21_8 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.30")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_90 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Name_Constraints>(
            x21_8 + 0x218)
        void* x0_91 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_91 != 0)
            var_a0 = x0_91
            operator delete(x0_91)
        
        if (x0_90 != 0)
            void* x21_9 = *arg1
            
            if (x21_9 + 0x3c8 != x0_90 + 8)
                *(x0_90 + 0x10)
                std::__ndk1::vector<Botan::GeneralSubtree, std::__ndk1::allocator<Botan::GeneralSubtree> >::assign<Botan::GeneralSubtree*>(
                    x21_9 + 0x3c8, *(x0_90 + 8))
                *(x0_90 + 0x28)
                std::__ndk1::vector<Botan::GeneralSubtree, std::__ndk1::allocator<Botan::GeneralSubtree> >::assign<Botan::GeneralSubtree*>(
                    x21_9 + 0x3e0, *(x0_90 + 0x20))
        
        void* x21_10 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.19")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_97 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Basic_Constraints>(
            x21_10 + 0x218)
        void* x0_98 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_98 != 0)
            var_a0 = x0_98
            operator delete(x0_98)
        
        if (x0_97 != 0 && zx.d(*(x0_97 + 8)) != 0)
            void* x8_98 = *arg1
            int32_t x9_24 = *(x8_98 + 0x438)
            
            if (x9_24 == 0 || (x9_24 & 0x400) != 0)
                *(x8_98 + 0x43d) = 1
                *(*arg1 + 0x430) = Botan::Cert_Extension::Basic_Constraints::get_path_limit()
        
        void* x21_11 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.18")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_104 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Issuer_Alternative_Name>(
            x21_11 + 0x218)
        void* x0_105 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_105 != 0)
            var_a0 = x0_105
            operator delete(x0_105)
        
        if (x0_104 != 0)
            int64_t x21_12 = *arg1
            
            if (x21_12 + 0x390 != x0_104 + 8)
                std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, int64_t> >(
                    x21_12 + 0x398, *(x0_104 + 0x10))
                std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__tree_node<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, void*>*, int64_t> >(
                    x21_12 + 0x3b0, *(x0_104 + 0x28))
        
        void* x21_13 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.17")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_111 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Subject_Alternative_Name>(
            x21_13 + 0x218)
        void* x0_112 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_112 != 0)
            var_a0 = x0_112
            operator delete(x0_112)
        
        if (x0_111 != 0)
            int64_t x21_14 = *arg1
            
            if (x21_14 + 0x358 != x0_111 + 8)
                std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, int64_t> >(
                    x21_14 + 0x360, *(x0_111 + 0x10))
                std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__tree_node<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, void*>*, int64_t> >(
                    x21_14 + 0x378, *(x0_111 + 0x28))
        
        void* x21_15 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.37")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_118 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Extended_Key_Usage>(
            x21_15 + 0x218)
        void* x0_119 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_119 != 0)
            var_a0 = x0_119
            operator delete(x0_119)
        
        if (x0_118 != 0)
            Botan::OID* x0_120 = *arg1 + 0x250
            
            if (x0_120 != x0_118 + 8)
                *(x0_118 + 0x10)
                std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::assign<Botan::OID*>(
                    x0_120, *(x0_118 + 8))
        
        void* x21_16 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.32")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_124 =
            Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Certificate_Policies>(
            x21_16 + 0x218)
        void* x0_125 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_125 != 0)
            var_a0 = x0_125
            operator delete(x0_125)
        
        if (x0_124 != 0)
            Botan::OID* x0_126 = *arg1 + 0x298
            
            if (x0_126 != x0_124 + 8)
                *(x0_124 + 0x10)
                std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::assign<Botan::OID*>(
                    x0_126, *(x0_124 + 8))
        
        void* x21_17 = *arg1
        __builtin_strcpy(&i_3, "\"1.3.6.1.5.5.7.1.1")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        int64_t x0_130 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Authority_Information_Access>(
            x21_17 + 0x218)
        void* x0_131 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_131 != 0)
            var_a0 = x0_131
            operator delete(x0_131)
        
        if (x0_130 != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_b0)
            void* x8_114 = *arg1
            
            if ((zx.d(*(x8_114 + 0x2c8)) & 1) != 0)
                operator delete(*(x8_114 + 0x2d8))
            
            int128_t v0_6 = var_b0.o
            *(x8_114 + 0x2d8) = var_a0
            *(x8_114 + 0x2c8) = v0_6
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
                &var_b0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_135 = *arg1 + 0x2e0
            
            if (x0_135 != &var_b0)
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::assign<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x0_135, var_b0)
            
            struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                * x21_19 = var_b0
            
            if (x21_19 != 0)
                char* x8_117 = var_a8.q
                struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                    * const x0_137
                
                if (x8_117 == x21_19)
                    x0_137 = x21_19
                else
                    char* x23_13 = x8_117
                    
                    do
                        x23_13 = &x23_13[-0x18]
                        
                        if ((zx.d(*x23_13) & 1) != 0)
                            operator delete(*(x8_117 - 8))
                        
                        x8_117 = x23_13
                    while (x21_19 != x23_13)
                    
                    x0_137 = var_b0
                
                var_a8.q = x21_19
                operator delete(x0_137)
        
        void* x21_20 = *arg1
        i_3.b = 0x12
        __builtin_strcpy(&i_3:1, "2.5.29.31")
        Botan::OID::OID(&var_b0)
        
        if ((zx.d(i_3.b) & 1) != 0)
            operator delete(x0_19)
        
        void* x0_141 = Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::CRL_Distribution_Points>(
            x21_20 + 0x218)
        void* x0_142 = var_a8.q
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_142 != 0)
            void* var_a0_2 = x0_142
            operator delete(x0_142)
        
        if (x0_141 != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_143 = *arg1 + 0x2b0
            
            if (x0_143 != x0_141 + 0x20)
                *(x0_141 + 0x28)
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::assign<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x0_143, *(x0_141 + 0x20))
        
        void* x8_121 = *arg1
        
        if ((Botan::operator==(x8_121 + 0x90, x8_121 + 0x58) & 1) != 0)
            void* x8_122 = *arg1
            char* x9_32 = *(x8_122 + 0x280)
            int64_t x10_21 = *(x8_122 + 0x288)
            char* x11_24
            int64_t x12_18
            
            if (x9_32 != x10_21)
                x11_24 = *(x8_122 + 0x268)
                x12_18 = *(x8_122 + 0x270)
            
            if (x9_32 == x10_21 || x11_24 == x12_18)
                *(x8_122 + 0x43c) = 1
                int64_t* x0_147 = Botan::X509::load_key(*arg1 + 0x160)
                int32_t x0_149 = Botan::X509_Object::verify_signature(arg2)
                char x8_124 = 1
                
                if (x0_149 != 0 && x0_149 != 0x138c)
                    x8_124 = 0
                
                *(*arg1 + 0x43c) = x8_124
                (*(*x0_147 + 8))(x0_147)
            else if (x10_21 - x9_32 != x12_18 - x11_24)
                *(x8_122 + 0x43c) = 0
            else
                uint32_t x12_20
                uint32_t x13_3
                
                do
                    x12_20 = zx.d(*x9_32)
                    x13_3 = zx.d(*x11_24)
                    
                    if (x12_20 != x13_3)
                        break
                    
                    x9_32 = &x9_32[1]
                    x11_24 = &x11_24[1]
                while (x10_21 != x9_32)
                
                *(x8_122 + 0x43c) = (x12_20 == x13_3 ? 1 : 0).b
        
        Botan::ASN1_Object::BER_encode()
        __builtin_strcpy(&i_3, "\nSHA-1")
        int16_t var_198 = 0
        Botan::HashFunction::create(&i_3, &var_198)
        
        if ((zx.d(var_198.b) & 1) == 0)
            if ((zx.d(i_3.b) & 1) != 0)
                goto label_ebb10c
            
            goto label_ebb0ec
        
        void* var_188
        operator delete(var_188)
        int64_t* var_180
        int64_t* x0_155
        
        if ((zx.d(i_3.b) & 1) == 0)
        label_ebb0ec:
            x0_155 = var_180
            
            if (x0_155 != 0)
            label_ebb118:
                void* x8_130 = *arg1
                int64_t x1_47 = *(x8_130 + 0x178)
                (*(*x0_155 + 0x18))(x0_155, x1_47, *(x8_130 + 0x180) - x1_47)
                Botan::Buffered_Computation::final_stdvec()
                void* x21_21 = *arg1
                void* x0_157 = *(x21_21 + 0x190)
                
                if (x0_157 != 0)
                    *(x21_21 + 0x198) = x0_157
                    operator delete(x0_157)
                    __builtin_memset(x21_21 + 0x190, 0, 0x18)
                
                *(x21_21 + 0x190) = i_3.o
                *(x21_21 + 0x1a0) = x0_19
                struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                    * const x0_158 = var_b0
                __builtin_strcpy(&var_198, "\nSHA-1")
                Botan::create_hex_fingerprint(x0_158, var_a8.q - x0_158, &var_198)
                void* x8_134 = *arg1
                
                if ((zx.d(*(x8_134 + 0x328)) & 1) != 0)
                    operator delete(*(x8_134 + 0x338))
                
                int128_t v0_8 = i_3.o
                *(x8_134 + 0x338) = x0_19
                *(x8_134 + 0x328) = v0_8
                i_3.w = 0
                
                if ((zx.d(var_198.b) & 1) != 0)
                    operator delete(var_188)
        else
        label_ebb10c:
            operator delete(x0_19)
            x0_155 = var_180
            
            if (x0_155 != 0)
                goto label_ebb118
        i_3.b = 0xe
        __builtin_strncpy(&i_3:1, "SHA-256", 8)
        var_198 = 0
        Botan::HashFunction::create(&i_3, &var_198)
        
        if ((zx.d(var_198.b) & 1) == 0)
            if ((zx.d(i_3.b) & 1) != 0)
                goto label_ebb244
            
            goto label_ebb224
        
        operator delete(var_188)
        int64_t* var_1a0
        int64_t* x0_164
        
        if ((zx.d(i_3.b) & 1) == 0)
        label_ebb224:
            x0_164 = var_1a0
            
            if (x0_164 != 0)
            label_ebb250:
                void* x8_140 = *arg1
                int64_t x1_50 = *(x8_140 + 0xc8)
                (*(*x0_164 + 0x18))(x0_164, x1_50, *(x8_140 + 0xd0) - x1_50)
                Botan::Buffered_Computation::final_stdvec()
                void* x21_23 = *arg1
                void* x0_166 = *(x21_23 + 0x2f8)
                
                if (x0_166 != 0)
                    *(x21_23 + 0x300) = x0_166
                    operator delete(x0_166)
                    __builtin_memset(x21_23 + 0x2f8, 0, 0x18)
                
                *(x21_23 + 0x2f8) = i_3.o
                *(x21_23 + 0x308) = x0_19
                void* x8_143 = *arg1
                int64_t x1_51 = *(x8_143 + 0xe0)
                (*(*var_1a0 + 0x18))(var_1a0, x1_51, *(x8_143 + 0xe8) - x1_51)
                Botan::Buffered_Computation::final_stdvec()
                void* x21_24 = *arg1
                void* x0_169 = *(x21_24 + 0x310)
                
                if (x0_169 != 0)
                    *(x21_24 + 0x318) = x0_169
                    operator delete(x0_169)
                    __builtin_memset(x21_24 + 0x310, 0, 0x18)
                
                *(x21_24 + 0x310) = i_3.o
                *(x21_24 + 0x320) = x0_19
                struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                    * const x0_170 = var_b0
                var_198.b = 0xe
                __builtin_strncpy(&var_198:1, "SHA-256", 8)
                Botan::create_hex_fingerprint(x0_170, var_a8.q - x0_170, &var_198)
                void* x8_147 = *arg1
                
                if ((zx.d(*(x8_147 + 0x340)) & 1) != 0)
                    operator delete(*(x8_147 + 0x350))
                
                int128_t v0_11 = i_3.o
                *(x8_147 + 0x350) = x0_19
                *(x8_147 + 0x340) = v0_11
                i_3.w = 0
                
                if ((zx.d(var_198.b) & 1) != 0)
                    operator delete(var_188)
        else
        label_ebb244:
            operator delete(x0_19)
            x0_164 = var_1a0
            
            if (x0_164 != 0)
                goto label_ebb250
        void* x22_4 = *arg1
        Botan::X509_DN::contents()
        int64_t* i_1 = i_3
        
        while (i_1 != &var_c8)
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(
                x22_4 + 0x3f8)
            int64_t* j_1 = i_1[1]
            
            if (j_1 == 0)
                void* x8_151 = &i_1[2]
                int64_t* i_4 = *x8_151
                
                if (*i_4 == i_1)
                    i_1 = i_4
                else
                    void* j
                    
                    do
                        j = *x8_151
                        x8_151 = j + 0x10
                        i_1 = *x8_151
                    while (*i_1 != j)
            else
                do
                    i_1 = j_1
                    j_1 = *j_1
                while (j_1 != 0)
        
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
            &i_3)
        void* x22_6 = *arg1
        Botan::X509_DN::contents()
        int64_t* i_2 = i_3
        
        while (i_2 != &var_c8)
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(
                x22_6 + 0x410)
            int64_t* j_3 = i_2[1]
            
            if (j_3 == 0)
                void* x8_154 = &i_2[2]
                int64_t* i_5 = *x8_154
                
                if (*i_5 == i_2)
                    i_2 = i_5
                else
                    void* j_2
                    
                    do
                        j_2 = *x8_154
                        x8_154 = j_2 + 0x10
                        i_2 = *x8_154
                    while (*i_2 != j_2)
            else
                do
                    i_2 = j_3
                    j_3 = *j_3
                while (j_3 != 0)
        
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
            &i_3)
        void* x8_156 = *arg1
        Botan::Extensions::contents_to(x8_156 + 0x218, x8_156 + 0x3f8)
        int64_t var_1a0_1 = 0
        
        if (var_1a0 != 0)
            (*(*var_1a0 + 0x10))()
        
        int64_t var_180_1 = 0
        
        if (var_180 != 0)
            (*(*var_180 + 0x10))()
        
        struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
            * const x0_182 = var_b0
        
        if (x0_182 != 0)
            var_a8.q = x0_182
            operator delete(x0_182)
        
        if (var_178 != 0)
            char* x8_161 = var_170
            char* x0_184
            
            if (x8_161 == var_178)
                x0_184 = var_178
            else
                char* x21_26 = x8_161
                
                do
                    x21_26 = &x21_26[-0x18]
                    
                    if ((zx.d(*x21_26) & 1) != 0)
                        operator delete(*(x8_161 - 8))
                    
                    x8_161 = x21_26
                while (var_178 != x21_26)
                
                x0_184 = var_178
            
            char* var_170_1 = var_178
            operator delete(x0_184)
        
        var_160.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        
        if (var_138 != 0)
            char* var_130_2 = var_138
            operator delete(var_138)
        
        void* x0_186 = var_150_1
        var_160:8.q = _vtable_for_Botan::OID + 0x10
        
        if (x0_186 != 0)
            void* var_148_1 = x0_186
            operator delete(x0_186)
        
        if (x8_13 != 0)
            Botan::deallocate_memory(x8_13, var_b8 - x8_13, 1)
        
        if (x20_7 != 0)
            Botan::deallocate_memory(x20_7, var_b8 - x20_7, 1)
        
        void* result = result_1
        
        if (result != 0)
            void* result_2 = result
            int64_t var_e8
            result = Botan::deallocate_memory(result, (var_e8 - result) s>> 2, 4)
        
        if (*(x27 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn
    
    char* x8_25 = *(x8_24 + 0x40)
    void* x11_6 = x10_1 - x9_5
    void* x12_7 = *(x8_24 + 0x48) - x8_25
    
    if (x10_1 != x9_5 && x11_6 == x12_7)
        do
            if (zx.d(*x9_5) != zx.d(*x8_25))
                goto label_ebb698
            
            x9_5 = &x9_5[1]
            x8_25 = &x8_25[1]
        while (x10_1 != x9_5)
        
        goto label_eba22c
    
    if (x11_6 == x12_7)
        goto label_eba22c

label_ebb698:
void** x0_193 = __cxa_allocate_exception(0x20)
int64_t x0_194
int128_t v0_13
x0_194, v0_13 = operator new(0x60)
v0_13 = data_71ce60
int64_t var_150_2 = x0_194
__builtin_strncpy(x0_194, 
    "X.509 Certificate had differing algorithm identifers in inner and outer ID fields", 0x52)
var_160 = v0_13
*x0_193 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_193[1])
*x0_193 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_193, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
