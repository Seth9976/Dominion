// 函数: _ZN5Botan14PKCS10_Request12force_decodeEv
// 地址: 0xea4efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Public_Key* entry_x0
int64_t* x19 = *(entry_x0 + 0x80)
*(entry_x0 + 0x78) = 0
*(entry_x0 + 0x80) = 0

if (x19 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19[1])
        i = __stlxr(x9_1 - 1, &x19[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19 + 0x10))(x19)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x27 = operator new(0xd8)
Botan::PKCS10_Data::PKCS10_Data()
uint64_t var_98[0x2]
Botan::BER_Decoder::BER_Decoder(&var_98)
uint64_t var_a0
Botan::BER_Decoder::decode(&var_98, &var_a0, 2)
uint64_t x22 = var_a0
char var_200
int128_t var_170

if (x22 != 0)
    int64_t* var_240_3 = x27
    void** x0_66 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(x22)
    int128_t* x0_69
    int128_t v0_3
    x0_69, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_200, nullptr)
    int64_t var_160_2 = x0_69[1].q
    var_170 = *x0_69
    __builtin_memset(x0_69, 0, 0x18)
    *x0_66 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_66[1])
    *x0_66 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_66, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

(*(*x27 + 8))(x27, &var_98)
Botan::BER_Decoder::get_next_object()
int32_t var_c0
int32_t var_bc

if (var_c0 != 0x10 || var_bc != 0x20)
    int64_t* var_240_2 = x27
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_62 = __cxa_allocate_exception(0x20)
    int64_t x0_63
    int128_t v0_2
    x0_63, v0_2 = operator new(0x30)
    var_170 = data_71ce10
    int64_t var_160_1 = x0_63
    __builtin_strncpy(x0_63, "PKCS10_Request: Unexpected tag for public key", 0x2e)
    Botan::BER_Bad_Tag::BER_Bad_Tag(x0_62, &var_170)
    __cxa_throw(x0_62, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
    noreturn

uint8_t* var_b8
int64_t var_b0
Botan::ASN1::put_in_sequence(var_b8, var_b0 - var_b8)
void* x0_7 = x27[7]

if (x0_7 != 0)
    x27[8] = x0_7
    operator delete(x0_7)
    __builtin_memset(&x27[7], 0, 0x18)

int32_t* var_160
int32_t* x8_9 = var_160
*(x27 + 0x38) = var_170
x27[9] = x8_9
Botan::BER_Decoder::get_next_object()
int64_t var_f0 = 0
int64_t var_e8 = 0
int64_t* i_3 = &var_f0
int32_t* var_1f0
int32_t var_e0
uint64_t var_d8

if (var_e0 != 0xff00)
    int32_t var_dc
    
    if (var_e0 != 0 || var_dc != 0xa0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_72 = __cxa_allocate_exception(0x20)
        int64_t x0_73
        int128_t v0_4
        x0_73, v0_4 = operator new(0x30)
        var_170 = data_71ce10
        int64_t var_160_3 = x0_73
        __builtin_strncpy(x0_73, "PKCS10_Request: Unexpected tag for attributes", 0x2e)
        Botan::BER_Bad_Tag::BER_Bad_Tag(x0_72, &var_170)
        __cxa_throw(x0_72, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
        noreturn
    
    uint8_t var_130
    Botan::BER_Decoder::BER_Decoder(&var_130, var_d8)
    int128_t v0_1 = data_71c520
    char var_1c0
    int64_t x19_3 = &var_1c0 | 1
    void var_1df
    void* var_228_1 = &var_1df
    int32_t var_128
    int64_t* var_108
    
    while (((*(*var_108 + 0x18))() & (var_128 == 0xff00 ? 1 : 0) & 1) == 0)
        var_170.q = _vtable_for_Botan::Attribute + 0x10
        var_170:8.q = _vtable_for_Botan::OID + 0x10
        __builtin_memset(&var_160, 0, 0x30)
        Botan::Attribute::decode_from(&var_170)
        void var_1a8
        Botan::BER_Decoder::BER_Decoder(&var_1a8)
        var_1c0 = 0x24
        __builtin_strncpy(x19_3, "PKCS9.EmailAddress", 0x12)
        char var_1ad_1 = 0
        Botan::OID::from_string(&var_1c0)
        int32_t* x9_2 = var_160
        int64_t var_1ff
        int32_t* x0_14 = var_1ff
        int32_t* var_158
        int32_t fp_1
        
        if (var_158 - x9_2 != var_1f0 - x0_14)
            fp_1 = 0
        label_ea519c:
            var_200.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_14 != 0)
                var_1f0 = x0_14
                operator delete(x0_14)
        else
            if (x9_2 != var_158)
                int32_t* x10_4 = x0_14
                
                do
                    int32_t x11_4 = *x9_2
                    int32_t x12_2 = *x10_4
                    fp_1 = x11_4 == x12_2 ? 1 : 0
                    
                    if (x11_4 != x12_2)
                        break
                    
                    x9_2 = &x9_2[1]
                    x10_4 = &x10_4[1]
                while (var_158 != x9_2)
                
                goto label_ea519c
            
            fp_1 = 1
            var_200.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_14 != 0)
                var_1f0 = x0_14
                operator delete(x0_14)
        
        void* var_1b0
        
        if ((zx.d(var_1c0) & 1) != 0)
            operator delete(var_1b0)
        
        char var_1e0
        int64_t var_1d8
        void* var_1d0
        
        if (fp_1 != 0)
            var_1c0.w = 0
            var_200.q = _vtable_for_Botan::ASN1_String + 0x10
            __builtin_memset(&var_1ff:7, 0, 0x18)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_1e0)
            uint64_t x8_23 = zx.q(var_1e0)
            
            if ((x8_23.d & 1) != 0)
                int64_t x8_26 = var_1d8
                void* x9_5 = var_1d0
                uint64_t x10_10
                
                do
                    if (x8_26 == 0)
                        goto label_ea52c4
                    
                    x10_10 = zx.q(*x9_5)
                    x9_5 += 1
                    x8_26 -= 1
                while (zx.d(*(&data_84a2f8 + x10_10)) != 0)
            else
                void* x9_3 = var_228_1
                uint64_t x8_24 = x8_23 u>> 1
                uint64_t x10_5
                
                do
                    if (x8_24 == 0)
                    label_ea52c4:
                        int32_t var_1c8_2 = 0x13
                        
                        if ((zx.d(var_1c0) & 1) == 0)
                            goto label_ea52e4
                        
                        goto label_ea52d0
                    
                    x10_5 = zx.q(*x9_3)
                    x9_3 += 1
                    x8_24 -= 1
                while (zx.d(*(&data_84a2f8 + x10_5)) != 0)
            
            int32_t var_1c8_1 = 0xc
            
            if ((zx.d(var_1c0) & 1) != 0)
            label_ea52d0:
                operator delete(var_1b0)
            
        label_ea52e4:
            (*(var_200.q + 8))(&var_200, &var_1a8)
            std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                &i_3, &var_1e0)
            goto label_ea547c
        
        void* x0_17
        int128_t v1_1
        x0_17, v1_1 = operator new(0x20)
        var_1b0 = x0_17
        __builtin_strncpy(x0_17, "PKCS9.ChallengePassword", 0x18)
        var_1c0.o = v0_1
        Botan::OID::from_string(&var_1c0)
        int32_t* x9_4 = var_160
        int32_t* x0_19 = var_1ff
        int32_t fp_2
        
        if (var_158 - x9_4 != var_1f0 - x0_19)
            fp_2 = 0
        label_ea5304:
            var_200.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_19 != 0)
                var_1f0 = x0_19
                operator delete(x0_19)
        else
            if (x9_4 != var_158)
                int32_t* x10_9 = x0_19
                
                do
                    int32_t x11_6 = *x9_4
                    int32_t x12_3 = *x10_9
                    fp_2 = x11_6 == x12_3 ? 1 : 0
                    
                    if (x11_6 != x12_3)
                        break
                    
                    x9_4 = &x9_4[1]
                    x10_9 = &x10_9[1]
                while (var_158 != x9_4)
                
                goto label_ea5304
            
            fp_2 = 1
            var_200.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_19 != 0)
                var_1f0 = x0_19
                operator delete(x0_19)
        
        if ((zx.d(var_1c0) & 1) != 0)
            operator delete(var_1b0)
        
        if (fp_2 == 0)
            var_1c0 = 0x2c
            __builtin_strncpy(x19_3, "PKCS9.ExtensionRequest", 0x16)
            char var_1a9_1 = 0
            Botan::OID::from_string(&var_1c0)
            int32_t* x9_9 = var_160
            int32_t* x0_26 = var_1ff
            int32_t fp_3
            
            if (var_158 - x9_9 != var_1f0 - x0_26)
                fp_3 = 0
            label_ea54a8:
                var_200.q = _vtable_for_Botan::OID + 0x10
                
                if (x0_26 != 0)
                    var_1f0 = x0_26
                    operator delete(x0_26)
            else
                if (x9_9 != var_158)
                    int32_t* x10_16 = x0_26
                    
                    do
                        int32_t x11_8 = *x9_9
                        int32_t x12_4 = *x10_16
                        fp_3 = x11_8 == x12_4 ? 1 : 0
                        
                        if (x11_8 != x12_4)
                            break
                        
                        x9_9 = &x9_9[1]
                        x10_16 = &x10_16[1]
                    while (var_158 != x9_9)
                    
                    goto label_ea54a8
                
                fp_3 = 1
                var_200.q = _vtable_for_Botan::OID + 0x10
                
                if (x0_26 != 0)
                    var_1f0 = x0_26
                    operator delete(x0_26)
            
            if ((zx.d(var_1c0) & 1) != 0)
                operator delete(var_1b0)
            
            if (fp_3 != 0)
                (*(x27[0x14] + 8))(&x27[0x14], &var_1a8)
                Botan::BER_Decoder::verify_end()
        else
            var_1c0.w = 0
            var_200.q = _vtable_for_Botan::ASN1_String + 0x10
            __builtin_memset(&var_1ff:7, 0, 0x18)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_1e0)
            uint64_t x8_32 = zx.q(var_1e0)
            
            if ((x8_32.d & 1) != 0)
                int64_t x8_36 = var_1d8
                void* x9_10 = var_1d0
                uint64_t x10_17
                
                do
                    if (x8_36 == 0)
                        goto label_ea543c
                    
                    x10_17 = zx.q(*x9_10)
                    x9_10 += 1
                    x8_36 -= 1
                while (zx.d(*(&data_84a2f8 + x10_17)) != 0)
            else
                void* x9_8 = var_228_1
                uint64_t x8_33 = x8_32 u>> 1
                uint64_t x10_12
                
                do
                    if (x8_33 == 0)
                    label_ea543c:
                        int32_t var_1c8_4 = 0x13
                        
                        if ((zx.d(var_1c0) & 1) == 0)
                            goto label_ea545c
                        
                        goto label_ea5448
                    
                    x10_12 = zx.q(*x9_8)
                    x9_8 += 1
                    x8_33 -= 1
                while (zx.d(*(&data_84a2f8 + x10_12)) != 0)
            
            int32_t var_1c8_3 = 0xc
            
            if ((zx.d(var_1c0) & 1) != 0)
            label_ea5448:
                operator delete(var_1b0)
            
        label_ea545c:
            (*(var_200.q + 8))(&var_200, &var_1a8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                &x27[0x11])
        label_ea547c:
            var_200.q = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((zx.d(var_1e0) & 1) != 0)
                operator delete(var_1d0)
            
            int32_t* x0_31 = var_1ff
            
            if (x0_31 != 0)
                var_1f0 = x0_31
                operator delete(x0_31)
        
        int64_t* var_178
        int64_t* x0_34 = var_178
        var_178 = nullptr
        
        if (x0_34 != 0)
            (*(*x0_34 + 0x38))()
        
        void* var_198
        
        if (var_198 != 0)
            void* var_190_1 = var_198
            int64_t var_188
            Botan::deallocate_memory(var_198, var_188 - var_198, 1)
        
        var_170.q = _vtable_for_Botan::Attribute + 0x10
        void* var_148
        
        if (var_148 != 0)
            int128_t var_140_1
            var_140_1.q = var_148
            operator delete(var_148)
        
        int32_t* x0_37 = var_160
        var_170:8.q = _vtable_for_Botan::OID + 0x10
        
        if (x0_37 != 0)
            var_158 = x0_37
            operator delete(x0_37)
    
    Botan::BER_Decoder::verify_end()
    int64_t var_100_1 = 0
    int64_t* var_100
    
    if (var_100 != 0)
        (*(*var_100 + 0x38))()
    
    void* var_120
    
    if (var_120 != 0)
        void* var_118_1 = var_120
        int64_t var_110
        Botan::deallocate_memory(var_120, var_110 - var_120, 1)

Botan::BER_Decoder::verify_end()
var_200 = 0x12
int64_t var_1ff_1
__builtin_strcpy(&var_1ff_1, "2.5.29.17")
Botan::OID::OID(&var_170)

if ((zx.d(var_200) & 1) != 0)
    operator delete(var_1f0)

void* x0_43 =
    Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::Subject_Alternative_Name>(
    &x27[0x14])
int32_t* x0_44 = var_170:8.q
var_170.q = _vtable_for_Botan::OID + 0x10

if (x0_44 != 0)
    var_160 = x0_44
    operator delete(x0_44)

if (x0_43 != 0 && x0_43 + 8 != &x27[0xa])
    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, int64_t> >(
        &x27[0xb], *(x0_43 + 0x10))
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__tree_node<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, void*>*, int64_t> >(
        &x27[0xe], *(x0_43 + 0x28))

int64_t* i_1 = i_3

while (i_1 != &var_f0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_170)
    var_200 = 0xc
    __builtin_strncpy(&var_200 | 1, "RFC882", 6)
    var_1ff_1:6.b = 0
    Botan::AlternativeName::add_attribute(&x27[0xa], &var_200)
    
    if ((zx.d(var_200) & 1) == 0)
        if ((zx.d(var_170.b) & 1) != 0)
            goto label_ea56f4
        
        goto label_ea56d4
    
    operator delete(var_1f0)
    int64_t* j
    
    if ((zx.d(var_170.b) & 1) != 0)
    label_ea56f4:
        operator delete(var_160)
        j = i_1[1]
        
        if (j == 0)
            goto label_ea5714
        
        goto label_ea5708
    
label_ea56d4:
    j = i_1[1]
    
    if (j != 0)
    label_ea5708:
        
        do
            i_1 = j
            j = *j
        while (j != 0)
    else
    label_ea5714:
        void* x8_61 = &i_1[2]
        int64_t* i_4 = *x8_61
        
        if (*i_4 == i_1)
            i_1 = i_4
        else
            void* j_1
            
            do
                j_1 = *x8_61
                x8_61 = j_1 + 0x10
                i_1 = *x8_61
            while (*i_1 != j_1)

std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &i_3)

if (var_d8 != 0)
    uint64_t var_d0_1 = var_d8
    int64_t var_c8
    Botan::deallocate_memory(var_d8, var_c8 - var_d8, 1)

if (var_b8 != 0)
    uint8_t* var_b0_1 = var_b8
    int64_t var_a8
    Botan::deallocate_memory(var_b8, var_a8 - var_b8, 1)

int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* var_88

if (var_88 != 0)
    void* var_80_1 = var_88
    int64_t var_78
    Botan::deallocate_memory(var_88, var_78 - var_88, 1)

int64_t* x0_56 = operator new(0x20)
x0_56[2] = 0
x0_56[3] = x27
*x0_56 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::PKCS10_Data*, std::__ndk1::default_delete<Botan::PKCS10_Data>, std::__ndk1::allocator<Botan::PKCS10_Data> >
    + 0x10
x0_56[1] = 0
int64_t* x21_4 = *(entry_x0 + 0x80)
*(entry_x0 + 0x78) = x27
*(entry_x0 + 0x80) = x0_56

if (x21_4 != 0)
    int64_t x9_15
    int32_t i_2
    
    do
        x9_15 = __ldaxr(&x21_4[1])
        i_2 = __stlxr(x9_15 - 1, &x21_4[1])
    while (i_2 != 0)
    
    if (x9_15 == 0)
        (*(*x21_4 + 0x10))(x21_4)
        std::__ndk1::__shared_weak_count::__release_weak()

Botan::PKCS10_Request::subject_public_key()
int64_t result = Botan::X509_Object::check_signature(entry_x0)

if ((result.d & 1) != 0)
    return result

void** x0_76 = __cxa_allocate_exception(0x20)
int64_t x0_77
int128_t v0_5
x0_77, v0_5 = operator new(0x30)
v0_5 = data_71aa70
int64_t var_160_4 = x0_77
__builtin_strncpy(x0_77, "PKCS #10 request: Bad signature detected", 0x29)
var_170 = v0_5
*x0_76 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_76[1])
*x0_76 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_76, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
