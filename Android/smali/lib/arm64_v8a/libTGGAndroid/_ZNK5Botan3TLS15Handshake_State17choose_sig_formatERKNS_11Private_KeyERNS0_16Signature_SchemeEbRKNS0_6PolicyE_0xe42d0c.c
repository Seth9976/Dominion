// 函数: _ZNK5Botan3TLS15Handshake_State17choose_sig_formatERKNS_11Private_KeyERNS0_16Signature_SchemeEbRKNS0_6PolicyE
// 地址: 0xe42d0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint16_t* x20 = arg3
(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
uint32_t x8 = zx.d(*(arg1 + 0x20))
char var_78
void* var_68
void* result
int128_t var_90
uint64_t var_70
int128_t* entry_x8

if (x8 - 0x301 u< 2 || x8 == 0xfeff)
    uint64_t x10_1 = zx.q(var_78)
    uint64_t x8_1 = var_70
    int32_t x9_5 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_5 == 0 ? x10_2 : x8_1
    
    if (x11_1 != 3)
        goto label_e42dc4
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, &data_76da56) == 0)
        void* x0_12
        int128_t v0_1
        x0_12, v0_1 = operator new(0x20)
        var_90 = data_71b7d0
        __builtin_strncpy(x0_12, "PKCS1v15(Parallel(MD5,SHA-160))", 0x20)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8)
        uint32_t x8_9 = zx.d(var_90.b)
        *(entry_x8 + 0x18) = 0
        
        if ((x8_9 & 1) != 0)
            result = operator delete(x0_12)
    else
        uint64_t x10_3 = zx.q(var_78)
        x8_1 = var_70
        x9_5 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_e42dc4:
        uint64_t x11_2
        
        if ((x9_5 & 0xff) == 0)
            x11_2 = x10_2
        else
            x11_2 = x8_1
        
        if (x11_2 != 3)
            goto label_e42e04
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, &data_72065f) != 0)
            uint64_t x10_4 = zx.q(var_78)
            x8_1 = var_70
            x9_5 = x10_4.d & 1
            x10_2 = x10_4 u>> 1
        label_e42e04:
            uint64_t x8_2
            
            if ((x9_5 & 0xff) == 0)
                x8_2 = x10_2
            else
                x8_2 = x8_1
            
            if (x8_2 != 5)
                goto label_e434f8
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "ECDSA") != 0)
                goto label_e434f8
            
            goto label_e42e48
        
    label_e42e48:
        var_90.b = 0x18
        __builtin_strncpy(&var_90:1, "EMSA1(SHA-1)", 0xd)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8)
        uint32_t x8_3 = zx.d(var_90.b)
        *(entry_x8 + 0x18) = 1
        void* var_80
        
        if ((x8_3 & 1) != 0)
            result = operator delete(var_80)
else
    int64_t* entry_x4
    (*(*entry_x4 + 0x28))(entry_x4)
    void* var_a8
    void* var_a0_1
    void* var_98_1
    void* x22_3
    void* x23_1
    
    if ((arg4.d & 1) != 0)
        void* x24_1 = *(arg1 + 0x128)
        __builtin_memset(&var_a8, 0, 0x18)
        int64_t x9_7 = *(x24_1 + 0x38)
        int64_t x8_5 = *(x24_1 + 0x40)
        uint64_t x22_1 = x8_5 - x9_7
        
        if (x8_5 == x9_7)
            goto label_e42fd0
        
        if ((x22_1 & 0xffffffff80000000) != 0)
            goto label_e436bc
        
        void* x0_10 = operator new(x22_1)
        var_a8 = x0_10
        void* var_a0 = x0_10
        var_98_1 = x0_10 + (x22_1 s>> 1 << 1)
        int64_t x1 = *(x24_1 + 0x38)
        x23_1 = x0_10
        size_t x22_2 = *(x24_1 + 0x40) - x1
        
        if (x22_2 s< 1)
            x22_3 = x23_1
            var_a0_1 = x23_1
        else
            memcpy(x23_1, x1, x22_2)
            x22_3 = x23_1 + x22_2
            var_a0_1 = x22_3
        
        goto label_e431c0
    
    void* x8_10 = *(arg1 + 0x100)
    __builtin_memset(&var_a8, 0, 0x18)
    int64_t* i = *(x8_10 + 0x90)
    
    if (i == 0)
    label_e42fd0:
        x22_3 = nullptr
    label_e42fe4:
        void* x8_15
        int16_t* x22_4
        
        if (x22_3 u>= var_98_1)
            int64_t x8_16 = var_98_1 - x22_3
            int64_t x10_5
            
            x10_5 = var_98_1 != x22_3 ? x8_16 : 1
            
            int64_t x25_1
            
            if (0x3fffffffffffffff u> x8_16 s>> 1)
                x25_1 = x10_5
            else
                x25_1 = 0x7fffffffffffffff
            
            if ((x25_1 & 0xffffffff80000000) != 0)
                sub_ef2a0c()
                noreturn
            
            int16_t* x0_18 = operator new(x25_1 << 1)
            var_a8 = x0_18
            *x0_18 = 0x201
            var_98_1 = &x0_18[x25_1]
            
            if (x22_3 == 0)
                x22_4 = &x0_18[1]
                x8_15 = var_98_1
                
                if (x22_4 u< x8_15)
                    goto label_e43004
                
                goto label_e43068
            
            operator delete(x22_3)
            x22_4 = &x0_18[1]
            x8_15 = var_98_1
            
            if (x22_4 u< x8_15)
                goto label_e43004
            
            goto label_e43068
        
        *x22_3 = 0x201
        x22_4 = x22_3 + 2
        int16_t* var_a0_2 = x22_4
        x8_15 = var_98_1
        int16_t* x22_7
        
        if (x22_4 u>= x8_15)
        label_e43068:
            void* x23_2 = var_a8
            void* x24_2 = x22_4 - x23_2
            
            if (x24_2 s<= -3)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e436b4:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e436bc:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t x22_5 = x24_2 s>> 1
            void* x8_18 = x8_15 - x23_2
            void* x10_7
            
            if (x8_18 u< x22_5 + 1)
                x10_7 = x22_5 + 1
            else
                x10_7 = x8_18
            
            void* x26_1
            
            if (0x3fffffffffffffff u> x8_18 s>> 1)
                x26_1 = x10_7
            else
                x26_1 = 0x7fffffffffffffff
            
            void* x25_2
            
            if (x26_1 == 0)
                x25_2 = nullptr
            else
                if ((x26_1 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                x25_2 = operator new(x26_1 << 1)
            
            int16_t* x22_6 = x25_2 + (x22_5 << 1)
            *x22_6 = 0x203
            x22_7 = &x22_6[1]
            
            if (x24_2 s>= 1)
                memcpy(x25_2, x23_2, x24_2)
            
            var_a8 = x25_2
            var_98_1 = x25_2 + (x26_1 << 1)
            
            if (x23_2 != 0)
                operator delete(x23_2)
        else
        label_e43004:
            *x22_4 = 0x203
            x22_7 = &x22_4[1]
            int16_t* var_a0_3 = x22_7
        
        if (x22_7 u>= var_98_1)
            void* x23_3 = var_a8
            void* x22_9 = x22_7 - x23_3
            
            if (x22_9 s<= -3)
                goto label_e436b4
            
            int64_t x25_3 = x22_9 s>> 1
            void* x8_20 = var_98_1 - x23_3
            void* x10_9
            
            if (x8_20 u< x25_3 + 1)
                x10_9 = x25_3 + 1
            else
                x10_9 = x8_20
            
            void* x26_3
            
            if (0x3fffffffffffffff u> x8_20 s>> 1)
                x26_3 = x10_9
            else
                x26_3 = 0x7fffffffffffffff
            
            void* x24_3
            
            if (x26_3 == 0)
                x24_3 = nullptr
            else
                if ((x26_3 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                x24_3 = operator new(x26_3 << 1)
            
            int16_t* x27_1 = x24_3 + (x25_3 << 1)
            *x27_1 = 0x202
            
            if (x22_9 s>= 1)
                memcpy(x24_3, x23_3, x22_9)
            
            var_a8 = x24_3
            var_a0_1 = &x27_1[1]
            void* var_98_2 = x24_3 + (x26_3 << 1)
            
            if (x23_3 != 0)
                operator delete(x23_3)
        else
            *x22_7 = 0x202
            var_a0_1 = &x22_7[1]
    else
        int64_t* i_2 = x8_10 + 0x90
        
        do
            int32_t x11_3 = i[4].d
            
            if (x11_3 s>= 0xd)
                i_2 = i
            
            i = i[zx.q(x11_3 s< 0xd ? 1 : 0)]
        while (i != 0)
        
        if (i_2 == x8_10 + 0x90 || i_2[4].d s> 0xd)
            goto label_e42fd0
        
        int64_t x0_14 = i_2[5]
        
        if (x0_14 == 0)
            goto label_e42fd0
        
        void* x0_15 = __dynamic_cast(x0_14, _typeinfo_for_Botan::TLS::Extension, 
            _typeinfo_for_Botan::TLS::Signature_Algorithms, 0)
        
        if (x0_15 == 0 || &var_a8 == x0_15 + 8)
            goto label_e42fd0
        
        *(x0_15 + 0x10)
        std::__ndk1::vector<Botan::TLS::Signature_Scheme, std::__ndk1::allocator<Botan::TLS::Signature_Scheme> >::assign<Botan::TLS::Signature_Scheme*>(
            &var_a8, *(x0_15 + 8))
        x23_1 = var_a8
        x22_3 = var_a0_1
    label_e431c0:
        
        if (x23_1 == x22_3)
            goto label_e42fe4
    
    int16_t* i_1 = var_90.q
    char var_c0
    void* var_b0
    
    for (int64_t x26_4 = var_90:8.q; i_1 != x26_4; i_1 = &i_1[1])
        uint32_t j_1 = zx.d(*i_1)
        
        if (j_1 s<= 0x500)
            if (j_1 - 0x201 u< 3 || j_1 - 0x401 u< 3)
            label_e43250:
                Botan::TLS::signature_algorithm_of_scheme(zx.q(j_1))
                uint64_t x8_27 = zx.q(var_c0)
                uint64_t x10_10 = zx.q(var_78)
                uint64_t j_2 = x8_27 u>> 1
                uint64_t j_3
                uint64_t j_4
                
                if ((x8_27.d & 1) == 0)
                    j_3 = j_2
                else
                    j_3 = j_4
                uint64_t x11_6
                
                if ((x10_10.d & 1) == 0)
                    x11_6 = x10_10 u>> 1
                else
                    x11_6 = var_70
                
                if (j_3 == x11_6)
                    void* x1_5
                    
                    if ((x10_10.d & 1) == 0)
                        x1_5 = &var_78 | 1
                    else
                        x1_5 = var_68
                    
                    void* x8_21
                    void* x9_9
                    
                    if ((x8_27.d & 1) == 0)
                        void* x10_11 = &var_c0 | 1
                        
                        if (j_3 == 0)
                        label_e43308:
                            x8_21 = var_a8
                            x9_9 = var_a0_1
                            
                            if (x8_21 != x9_9)
                                goto label_e43334
                            
                            goto label_e431e8
                        
                        uint32_t x23_5
                        uint32_t x24_4
                        uint64_t j
                        
                        do
                            x23_5 = zx.d(*x10_11)
                            x24_4 = zx.d(*x1_5)
                            
                            if (x23_5 != x24_4)
                                break
                            
                            j = j_2
                            j_2 -= 1
                            x10_11 += 1
                            x1_5 += 1
                        while (j != 1)
                        
                        if ((x8_27.d & 1) != 0)
                            operator delete(var_b0)
                        
                        if (x23_5 == x24_4)
                            goto label_e43308
                    else if (j_3 == 0)
                        operator delete(var_b0)
                        x8_21 = var_a8
                        x9_9 = var_a0_1
                        
                        if (x8_21 != x9_9)
                        label_e43334:
                            
                            while (zx.d(*x8_21) != j_1)
                                x8_21 += 2
                                
                                if (x9_9 == x8_21)
                                    goto label_e431f0
                        
                    label_e431e8:
                        
                        if (x8_21 != x9_9)
                            *x20 = j_1.w
                            break
                    else
                        int32_t x0_31 = memcmp()
                        operator delete(var_b0)
                        
                        if (x0_31 == 0)
                            goto label_e43308
                else if ((x8_27.d & 1) != 0)
                    operator delete(var_b0)
        else if (j_1 - 0x501 u< 3 || j_1 - 0x804 u< 3 || j_1 - 0x601 u<= 2)
            goto label_e43250
        
    label_e431f0:
    
    Botan::TLS::hash_function_of_scheme(zx.q(*x20))
    
    if ((Botan::TLS::Policy::allowed_signature_hash(entry_x4) & 1) == 0)
        void** x0_58 = __cxa_allocate_exception(0x28)
        int64_t x0_59
        int128_t v0_4
        x0_59, v0_4 = operator new(0x50)
        v0_4 = data_71c530
        int64_t var_d0_1 = x0_59
        __builtin_strncpy(x0_59, 
            "Policy refuses to accept signing with any hash supported by peer", 0x41)
        int128_t var_e0_1 = v0_4
        *x0_58 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_58[1])
        x0_58[4].d = 0x28
        *x0_58 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_58, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x10_13 = zx.q(var_78)
    uint64_t x8_28 = var_70
    int32_t x9_10 = x10_13.d & 1
    uint64_t x10_14 = x10_13 u>> 1
    uint64_t x11_8
    
    x11_8 = x9_10 == 0 ? x10_14 : x8_28
    
    if (x11_8 != 3)
        goto label_e433b8
    
    int128_t var_e0
    int64_t var_d0
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, &data_76da56) != 0)
        uint64_t x10_15 = zx.q(var_78)
        x8_28 = var_70
        x9_10 = x10_15.d & 1
        x10_14 = x10_15 u>> 1
    label_e433b8:
        uint64_t x11_9
        
        if ((x9_10 & 0xff) == 0)
            x11_9 = x10_14
        else
            x11_9 = x8_28
        
        if (x11_9 == 3)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, &data_72065f) == 0)
            label_e4342c:
                Botan::TLS::padding_string_for_scheme(zx.q(*x20))
                uint32_t x9_11 = zx.d(var_c0)
                entry_x8[1].q = var_d0
                *entry_x8 = var_e0
                *(entry_x8 + 0x18) = 1
                
                if ((x9_11 & 1) == 0)
                    goto label_e43458
                
                goto label_e43454
            
            uint64_t x10_16 = zx.q(var_78)
            x8_28 = var_70
            x9_10 = x10_16.d & 1
            x10_14 = x10_16 u>> 1
        
        uint64_t x8_29
        
        if ((x9_10 & 0xff) == 0)
            x8_29 = x10_14
        else
            x8_29 = x8_28
        
        int32_t x0_42
        
        if (x8_29 == 5)
            x0_42 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "ECDSA")
        
        if (x8_29 == 5 && x0_42 == 0)
            goto label_e4342c
        
        void* x0_48
        
        if ((zx.d(var_c0) & 1) == 0)
            x0_48 = var_a8
            
            if (x0_48 != 0)
                goto label_e43688
            
            goto label_e434e4
        
        operator delete(var_b0)
        x0_48 = var_a8
        void* x0_49
        
        if (x0_48 != 0)
        label_e43688:
            void* var_a0_7 = x0_48
            operator delete(x0_48)
            x0_49 = var_90.q
            
            if (x0_49 != 0)
                goto label_e434ec
            
            goto label_e434f8
        
    label_e434e4:
        x0_49 = var_90.q
        
        if (x0_49 == 0)
            goto label_e434f8
        
    label_e434ec:
        var_90:8.q = x0_49
        operator delete(x0_49)
    label_e434f8:
        void** x0_50 = __cxa_allocate_exception(0x20)
        uint64_t x8_34 = zx.q(var_78)
        int32_t temp1 = x8_34.d & 1
        uint64_t x19_1
        
        if (temp1 == 0)
            x19_1 = x8_34 u>> 1
        else
            x19_1 = var_70
        
        int64_t x8_35 = x19_1 + 0x26
        void* x21_1
        
        if (temp1 == 0)
            x21_1 = &var_78 | 1
        else
            x21_1 = var_68
        
        __builtin_memset(&var_90, 0, 0x18)
        
        if (x8_35 u>= -0x10)
            x8_35 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        int64_t x22_10
        
        if (x8_35 u> 0x16)
            uint64_t x23_6 = (x19_1 + 0x36) & 0xfffffffffffffff0
            int64_t x0_57 = operator new(x23_6)
            x22_10 = x0_57
            var_90:8.q = x19_1
            int64_t var_80_1 = x0_57
            var_90.q = x23_6 | 1
            
            if (x19_1 != 0)
                memcpy(x22_10, x21_1, x19_1)
        else
            var_90.b = (x19_1.d << 1).b
            x22_10 = &var_90 | 1
            memcpy(x22_10, x21_1, x19_1)
        
        *(x22_10 + x19_1) = 0
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_90, " is invalid/unknown for TLS signatures")
        *x0_50 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_50[1])
        *x0_50 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_50, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    Botan::TLS::padding_string_for_scheme(zx.q(*x20))
    uint32_t x9_12 = zx.d(var_c0)
    *(entry_x8 + 0x18) = 0
    entry_x8[1].q = var_d0
    *entry_x8 = var_e0
    
    if ((x9_12 & 1) == 0)
        goto label_e43458
    
label_e43454:
    operator delete(var_b0)
label_e43458:
    void* x0_45 = var_a8
    
    if (x0_45 != 0)
        void* var_a0_6 = x0_45
        operator delete(x0_45)
    
    result = var_90.q
    
    if (result != 0)
        var_90:8.q = result
        result = operator delete(result)

if ((zx.d(var_78) & 1) == 0)
    return result

return operator delete(var_68)
