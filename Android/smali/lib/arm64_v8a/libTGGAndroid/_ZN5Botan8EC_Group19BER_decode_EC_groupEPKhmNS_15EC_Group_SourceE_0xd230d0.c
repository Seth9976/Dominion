// 函数: _ZN5Botan8EC_Group19BER_decode_EC_groupEPKhmNS_15EC_Group_SourceE
// 地址: 0xd230d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t var_68[0x10]
Botan::BER_Decoder::BER_Decoder(&var_68, arg1)
Botan::BER_Decoder::get_next_object()
int32_t var_88
int128_t var_2e0
void* var_2d0
int64_t var_2c0
int64_t* var_2b0
void* __offset(vtable_for_Botan::OID, 0x10) var_1b8

if (var_88 == 6)
    var_1b8 = _vtable_for_Botan::OID + 0x10
    void* var_1b0
    __builtin_memset(&var_1b0, 0, 0x18)
    Botan::BER_Decoder::BER_Decoder(&var_2e0, arg1)
    (*(var_1b8 + 8))(&var_1b8, &var_2e0)
    int64_t var_2b0_2 = 0
    
    if (var_2b0 != 0)
        (*(*var_2b0 + 0x38))()
    
    if (var_2d0 != 0)
        void* var_2c8_2 = var_2d0
        Botan::deallocate_memory(var_2d0, var_2c0 - var_2d0, 1)
    
    Botan::EC_Group::ec_group_data()
    Botan::EC_Group_Data_Map::lookup(&data_23ecee0)
    void* x0_38 = var_1b0
    var_1b8 = _vtable_for_Botan::OID + 0x10
    
    if (x0_38 != 0)
        void* var_1a8_1 = x0_38
        operator delete(x0_38)
else
    if (var_88 != 0x10)
        if (var_88 == 5)
            void** x0_69 = __cxa_allocate_exception(0x20)
            int64_t x0_70
            int128_t v0_5
            x0_70, v0_5 = operator new(0x30)
            v0_5 = data_71c500
            int64_t var_2d0_4 = x0_70
            __builtin_strncpy(x0_70, "Cannot handle ImplicitCA ECC parameters", 0x28)
            var_2e0 = v0_5
            *x0_69 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_69[1])
            *x0_69 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_69, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        void** x0_82 = __cxa_allocate_exception(0x20)
        int64_t x0_83
        int128_t v0_8
        x0_83, v0_8 = operator new(0x30)
        (*"CC domain params")[0].o
        int64_t var_2d0_7 = x0_83
        v0_8 = data_71c860
        __builtin_strncpy(x0_83, "Unexpected tag while decoding ECC domain params", 0x30)
        var_2e0 = v0_8
        *x0_82 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_82[1])
        *x0_82 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_82, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    void* var_d8
    __builtin_memset(&var_d8, 0, 0x18)
    void* var_100
    __builtin_memset(&var_100, 0, 0x18)
    void* var_128
    __builtin_memset(&var_128, 0, 0x18)
    void* var_180
    __builtin_memset(&var_180, 0, 0x48)
    int64_t var_98_1 = -1
    int32_t var_90_1 = 1
    int64_t var_c0_1 = -1
    int32_t var_b8_1 = 1
    int64_t i_21 = -1
    int32_t var_e0_1 = 1
    int64_t i_19 = -1
    int32_t var_108_1 = 1
    int64_t i_16 = -1
    int32_t var_130_1 = 1
    uint8_t var_228[0x10]
    Botan::BER_Decoder::BER_Decoder(&var_228, arg1)
    Botan::BER_Decoder::start_cons(&var_228, 0x10)
    void* x0_3
    int128_t v2_1
    x0_3, v2_1 = operator new(0x20)
    v2_1 = data_71c370
    char var_240_1 = v2_1.b
    __builtin_strncpy(x0_3, "Unknown ECC param version code", 0x1f)
    void* __offset(vtable_for_Botan::OID, 0x10) var_260
    uint64_t var_1f0[0x2]
    Botan::BER_Decoder::decode(&var_1f0, &var_260, 2)
    
    if (var_260 != 1)
        void** x0_87 = __cxa_allocate_exception(0x20)
        *x0_87 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_87[1])
        *x0_87 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_87, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    Botan::BER_Decoder::start_cons(&var_1f0, 0x10)
    char var_278
    __builtin_strcpy(&var_278, "\"1.2.840.10045.1.1")
    Botan::OID::OID(&var_260)
    void* x0_7 = operator new(0x20)
    char v0_1 = (data_71b7d0).b
    __builtin_strncpy(x0_7, "Only prime ECC fields supported", 0x20)
    Botan::BER_Decoder::decode(
        Botan::BER_Decoder::decode_and_check<Botan::OID>(&var_1b8, &var_260), &var_b0, 2)
    Botan::BER_Decoder::start_cons(Botan::BER_Decoder::end_cons(), 0x10)
    Botan::BER_Decoder::decode_octet_string_bigint(&var_2e0)
    Botan::BER_Decoder::decode_octet_string_bigint(&var_2e0)
    Botan::BER_Decoder::decode_optional_string<std::__ndk1::allocator<uint8_t> >(&var_2e0, 
        &var_180, 3, 3)
    uint8_t* var_168
    int32_t* var_150
    Botan::BER_Decoder::decode(
        Botan::BER_Decoder::decode(
            Botan::BER_Decoder::decode(Botan::BER_Decoder::end_cons(), &var_168, 4, 4), &var_128, 
            2), 
        &var_150, 2)
    Botan::BER_Decoder::end_cons()
    Botan::BER_Decoder::verify_end()
    int64_t var_2b0_1 = 0
    
    if (var_2b0 != 0)
        (*(*var_2b0 + 0x38))()
    
    if (var_2d0 != 0)
        void* var_2c8_1 = var_2d0
        Botan::deallocate_memory(var_2d0, var_2c0 - var_2d0, 1)
    
    if ((zx.d(v0_1) & 1) != 0)
        operator delete(x0_7)
    
    var_260 = _vtable_for_Botan::OID + 0x10
    void* var_258
    
    if (var_258 != 0)
        void* var_250_1 = var_258
        operator delete(var_258)
    
    int128_t var_277
    
    if ((zx.d(var_278) & 1) != 0)
        operator delete(var_277:0xf.q)
    int64_t var_188_1 = 0
    int64_t* var_188
    
    if (var_188 != 0)
        (*(*var_188 + 0x38))()
    
    void* var_1a8
    
    if (var_1a8 != 0)
        void* var_1a0_1 = var_1a8
        int64_t var_198
        Botan::deallocate_memory(var_1a8, var_198 - var_1a8, 1)
    
    if ((zx.d(var_240_1) & 1) != 0)
        operator delete(x0_3)
    
    int64_t var_1c0_1 = 0
    int64_t* var_1c0
    
    if (var_1c0 != 0)
        (*(*var_1c0 + 0x38))()
    
    void* var_1e0
    
    if (var_1e0 != 0)
        void* var_1d8_1 = var_1e0
        int64_t var_1d0
        Botan::deallocate_memory(var_1e0, var_1d0 - var_1e0, 1)
    
    int64_t var_1f8_1 = 0
    int64_t* var_1f8
    
    if (var_1f8 != 0)
        (*(*var_1f8 + 0x38))()
    
    void* var_218
    
    if (var_218 != 0)
        void* var_210_1 = var_218
        int64_t var_208
        Botan::deallocate_memory(var_218, var_208 - var_218, 1)
    
    if (Botan::BigInt::bits() u< 0x40 || var_90_1 == 0)
    label_d23c8c:
        void** x0_74 = __cxa_allocate_exception(0x20)
        int64_t x0_75
        int128_t v0_6
        x0_75, v0_6 = operator new(0x20)
        int64_t var_2d0_5 = x0_75
        var_2e0 = data_71c520
        __builtin_strncpy(x0_75, "Invalid ECC p parameter", 0x18)
        *x0_74 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_74[1])
        *x0_74 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_74, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if ((Botan::is_bailie_psw_probable_prime(&var_b0) & 1) == 0)
        goto label_d23c8c
    
    if (var_b8_1 == 0)
    label_d23d18:
        void** x0_78 = __cxa_allocate_exception(0x20)
        int64_t x0_79
        int128_t v0_7
        x0_79, v0_7 = operator new(0x20)
        int64_t var_2d0_6 = x0_79
        var_2e0 = data_71c520
        __builtin_strncpy(x0_79, "Invalid ECC a parameter", 0x18)
        *x0_78 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_78[1])
        *x0_78 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_78, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if ((Botan::BigInt::cmp(&var_d8, &var_b0) & 0x80000000) == 0)
        goto label_d23d18
    
    if (var_e0_1 == 0)
    label_d23ae4:
        void** x0_61 = __cxa_allocate_exception(0x20)
        int64_t x0_62
        int128_t v0_3
        x0_62, v0_3 = operator new(0x20)
        int64_t var_2d0_2 = x0_62
        var_2e0 = data_71c520
        __builtin_strncpy(x0_62, "Invalid ECC b parameter", 0x18)
        *x0_61 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_61[1])
        *x0_61 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_61, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t i_8 = i_21
    
    if (i_8 == -1)
        void* x9_1 = var_100
        int64_t var_f8
        void* x10_1 = var_f8 - x9_1
        
        if (var_f8 == x9_1)
            i_8 = 0
            int64_t var_e8_1 = 0
        label_d235bc:
            
            if (i_8 == 0)
                goto label_d23ae4
            
            void* x9_3 = var_100
            int32_t x10_4 = 0
            int64_t i
            
            do
                int32_t x11_4 = *x9_3
                x9_3 += 4
                i = i_8
                i_8 -= 1
                int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
            while (i != 1)
            
            if (x10_4 s< 1)
                goto label_d23ae4
        else
            void* x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x11_2 = x9_1 - var_f8
            void* x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_8 = x10_1 s>> 2
            void* x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_11 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i_1
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_11 << 2))
                i_1 = i_11
                i_11 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_8 -= x11_3
            while (i_1 != 1)
            int64_t i_22 = i_8
            
            if (i_8 u<= 1)
                goto label_d235bc
    else if (i_8 u<= 1)
        goto label_d235bc
    
    if ((Botan::BigInt::cmp(&var_100, &var_b0) & 0x80000000) == 0)
        goto label_d23ae4
    
    if (var_108_1 == 0)
    label_d23b70:
        void** x0_65 = __cxa_allocate_exception(0x20)
        int64_t x0_66
        int128_t v0_4
        x0_66, v0_4 = operator new(0x20)
        int64_t var_2d0_3 = x0_66
        var_2e0 = data_71abe0
        __builtin_strncpy(x0_66, "Invalid ECC order parameter", 0x1c)
        *x0_65 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_65[1])
        *x0_65 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_65, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t i_9 = i_19
    
    if (i_9 == -1)
        void* x9_4 = var_128
        int64_t var_120
        void* x10_6 = var_120 - x9_4
        
        if (var_120 == x9_4)
            i_9 = 0
            int64_t var_110_1 = 0
        label_d236a4:
            
            if (i_9 == 0)
                goto label_d23b70
            
            void* x9_6 = var_128
            int32_t x10_9 = 0
            int64_t i_2
            
            do
                int32_t x11_12 = *x9_6
                x9_6 += 4
                i_2 = i_9
                i_9 -= 1
                int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
                x10_9 = (x10_9 & x11_14) | (not.d(x11_14) & 1)
            while (i_2 != 1)
            
            if (x10_9 s< 1)
                goto label_d23b70
        else
            void* x12_6
            
            x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
            
            void* x11_10 = x9_4 - var_120
            void* x12_7
            
            x12_7 = x12_6 s< 1 ? x12_6 : 1
            
            i_9 = x10_6 s>> 2
            void* x10_7
            
            x10_7 = x11_10 s> x10_6 ? x11_10 : x10_6
            
            int64_t i_12 = x12_7 * (x10_7 u>> 2)
            uint64_t x11_11 = 1
            int64_t i_3
            
            do
                int32_t x12_8 = *(x9_4 - 4 + (i_12 << 2))
                i_3 = i_12
                i_12 -= 1
                x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                i_9 -= x11_11
            while (i_3 != 1)
            int64_t i_20 = i_9
            
            if (i_9 u<= 1)
                goto label_d236a4
    else if (i_9 u<= 1)
        goto label_d236a4
    
    if ((Botan::is_bailie_psw_probable_prime(&var_128) & 1) == 0)
        goto label_d23b70
    
    if (var_130_1 == 0)
    label_d23a5c:
        void** x0_57 = __cxa_allocate_exception(0x20)
        int64_t x0_58
        int128_t v0_2
        x0_58, v0_2 = operator new(0x20)
        int64_t var_2d0_1 = x0_58
        var_2e0 = v2_1
        __builtin_strncpy(x0_58, "Invalid ECC cofactor parameter", 0x1f)
        *x0_57 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_57[1])
        *x0_57 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_57, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t i_10 = i_16
    int64_t var_148
    
    if (i_10 == -1)
        int32_t* x9_7 = var_150
        void* x10_11 = var_148 - x9_7
        
        if (var_148 == x9_7)
            i_10 = 0
            int64_t var_138_1 = 0
        label_d23784:
            
            if (i_10 == 0)
                goto label_d23a5c
            
            int32_t* x9_9 = var_150
            int32_t x10_14 = 0
            int64_t i_15 = i_10
            int64_t i_4
            
            do
                int32_t x12_15 = *x9_9
                x9_9 = &x9_9[1]
                i_4 = i_15
                i_15 -= 1
                int32_t x12_17 = ((x12_15 - 1) & not.d(x12_15)) s>> 0x1f
                x10_14 = (x10_14 & x12_17) | (not.d(x12_17) & 1)
            while (i_4 != 1)
            
            if (x10_14 s< 1)
                goto label_d23a5c
        else
            void* x12_11
            
            x12_11 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
            
            void* x11_18 = x9_7 - var_148
            void* x12_12
            
            x12_12 = x12_11 s< 1 ? x12_11 : 1
            
            i_10 = x10_11 s>> 2
            void* x10_12
            
            x10_12 = x11_18 s> x10_11 ? x11_18 : x10_11
            
            int64_t i_13 = x12_12 * (x10_12 u>> 2)
            uint64_t x11_19 = 1
            int64_t i_5
            
            do
                int32_t x12_13 = *(x9_7 - 4 + (i_13 << 2))
                i_5 = i_13
                i_13 -= 1
                x11_19 = zx.q(x11_19.d) & zx.q(((x12_13 - 1) & not.d(x12_13)) s>> 0x1f)
                i_10 -= x11_19
            while (i_5 != 1)
            int64_t i_17 = i_10
            
            if (i_10 u<= 1)
                goto label_d23784
    else if (i_10 u<= 1)
        goto label_d23784
    
    if (i_10 == -1)
        int32_t* x9_10 = var_150
        void* x10_16 = var_148 - x9_10
        
        if (var_148 == x9_10)
            i_10 = 0
        else
            void* x12_20
            
            x12_20 = x10_16 s>= 0 ? x10_16 : -ffffffffffffffff
            
            void* x11_21 = x9_10 - var_148
            void* x12_21
            
            x12_21 = x12_20 s< 1 ? x12_20 : 1
            
            i_10 = x10_16 s>> 2
            void* x10_17
            
            x10_17 = x11_21 s> x10_16 ? x11_21 : x10_16
            
            int64_t i_14 = x12_21 * (x10_17 u>> 2)
            uint64_t x11_22 = 1
            int64_t i_6
            
            do
                int32_t x12_22 = *(x9_10 - 4 + (i_14 << 2))
                i_6 = i_14
                i_14 -= 1
                x11_22 = zx.q(x11_22.d) & zx.q(((x12_22 - 1) & not.d(x12_22)) s>> 0x1f)
                i_10 -= x11_22
            while (i_6 != 1)
        
        int64_t i_18 = i_10
    
    if (i_10 u> 1)
        goto label_d23a5c
    
    if (i_10 != 0)
        int32_t* x9_12 = var_150
        int32_t x10_19 = 0
        int64_t i_7
        
        do
            int32_t x11_23 = *x9_12
            x9_12 = &x9_12[1]
            i_7 = i_10
            i_10 -= 1
            int32_t x11_25 = (((x11_23 ^ 0x10) - 1) & not.d(x11_23)) s>> 0x1f
            x10_19 = (x10_19 & x11_25)
                | ((((x11_23 - 0x10) & not.d(x11_23)) s>> 0x1f | 1) & not.d(x11_25))
        while (i_7 != 1)
        
        if ((x10_19 & 0x80000000) == 0)
            goto label_d23a5c
    
    uint8_t* x0_43 = var_168
    int64_t var_160
    Botan::OS2ECP(x0_43, var_160 - x0_43, &var_b0, &var_d8, &var_100)
    Botan::EC_Group::ec_group_data()
    var_1b8 = _vtable_for_Botan::OID + 0x10
    void* var_1b0_1
    __builtin_memset(&var_1b0_1, 0, 0x18)
    void* __offset(vtable_for_Botan::OID, 0x10)* var_300_1 = &var_1b8
    int32_t var_2f8_1 = arg3
    void* var_2b8
    Botan::EC_Group_Data_Map::lookup_or_create(&data_23ecee0, &var_b0, &var_d8, &var_100, &var_2e0, 
        &var_2b8, &var_128, &var_150)
    void* x0_44 = var_1b0_1
    var_1b8 = _vtable_for_Botan::OID + 0x10
    
    if (x0_44 != 0)
        void* var_1a8_2 = x0_44
        operator delete(x0_44)
    
    void* x0_45 = var_2b8
    
    if (x0_45 != 0)
        void* var_2b0_3 = x0_45
        int64_t var_2a8
        Botan::deallocate_memory(x0_45, (var_2a8 - x0_45) s>> 2, 4)
    
    void* x0_46 = var_2e0.q
    
    if (x0_46 != 0)
        var_2e0:8.q = x0_46
        Botan::deallocate_memory(x0_46, (var_2d0 - x0_46) s>> 2, 4)
    
    void* x0_47 = var_180
    
    if (x0_47 != 0)
        void* var_178_1 = x0_47
        operator delete(x0_47)
    
    uint8_t* x0_48 = var_168
    
    if (x0_48 != 0)
        uint8_t* var_160_1 = x0_48
        operator delete(x0_48)
    
    int32_t* x0_49 = var_150
    
    if (x0_49 != 0)
        int32_t* var_148_1 = x0_49
        int64_t var_140
        Botan::deallocate_memory(x0_49, (var_140 - x0_49) s>> 2, 4)
    
    void* x0_50 = var_128
    
    if (x0_50 != 0)
        void* var_120_1 = x0_50
        int64_t var_118
        Botan::deallocate_memory(x0_50, (var_118 - x0_50) s>> 2, 4)
    
    void* x0_51 = var_100
    
    if (x0_51 != 0)
        void* var_f8_1 = x0_51
        int64_t var_f0
        Botan::deallocate_memory(x0_51, (var_f0 - x0_51) s>> 2, 4)
    
    void* x0_52 = var_d8
    
    if (x0_52 != 0)
        void* var_d0_1 = x0_52
        int64_t var_c8
        Botan::deallocate_memory(x0_52, (var_c8 - x0_52) s>> 2, 4)
    
    void* x0_53 = var_b0
    
    if (x0_53 != 0)
        void* var_a8_1 = x0_53
        int64_t var_a0
        Botan::deallocate_memory(x0_53, (var_a0 - x0_53) s>> 2, 4)
void* var_80

if (var_80 != 0)
    void* var_78_1 = var_80
    int64_t var_70
    Botan::deallocate_memory(var_80, var_70 - var_80, 1)

int64_t* var_38

if (var_38 != 0)
    (*(*var_38 + 0x38))()

void* result

if (result == 0)
    return result

int64_t var_48
return Botan::deallocate_memory(result, var_48 - result, 1)
