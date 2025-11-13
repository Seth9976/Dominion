// 函数: _ZNK5Botan3TLS15Handshake_State16parse_sig_formatERKNS_10Public_KeyENS0_16Signature_SchemeEbRKNS0_6PolicyE
// 地址: 0xe44020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3.d
(*(*arg2 + 0x10))(arg2)
char var_b8
int128_t var_a0
int128_t var_80
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x4

if ((Botan::TLS::Policy::allowed_signature_method(entry_x4) & 1) == 0)
    void** x0_47 = __cxa_allocate_exception(0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Rejecting ", &var_b8)
    int128_t* x0_49
    int128_t v0_7
    x0_49, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_a0)
    int64_t var_70_2 = x0_49[1].q
    var_80 = *x0_49
    __builtin_memset(x0_49, 0, 0x18)
    *x0_47 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_47[1])
    x0_47[4].d = 0x28
    *x0_47 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_47, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

uint32_t x8 = zx.d(*(arg1 + 0x20))
void* var_a8
void* result
uint64_t i_11
void* var_70
int128_t* entry_x8

if (x8 - 0x301 u< 2 || x8 == 0xfeff)
    if ((x20 & 0xffff) != 0)
    label_e4495c:
        void** x0_53 = __cxa_allocate_exception(0x20)
        int64_t x0_54
        int128_t v0_8
        x0_54, v0_8 = operator new(0x30)
        int64_t var_70_3 = x0_54
        var_80 = data_71c860
        __builtin_strncpy(x0_54, "Counterparty sent hash/sig IDs with old version", 0x30)
        *x0_53 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_53[1])
        *x0_53 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_53, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x10_1 = zx.q(var_b8)
    uint64_t i_12 = i_11
    int32_t x9_3 = x10_1.d & 1
    uint64_t i_23 = x10_1 u>> 1
    uint64_t i_19
    
    i_19 = x9_3 == 0 ? i_23 : i_12
    
    if (i_19 != 3)
        goto label_e440ec
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_b8, 0, -ffffffffffffffff, &data_76da56) == 0)
        void* x0_11
        int128_t v0_1
        x0_11, v0_1 = operator new(0x20)
        var_80 = data_71b7d0
        __builtin_strncpy(x0_11, "PKCS1v15(Parallel(MD5,SHA-160))", 0x20)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8)
        uint32_t x8_2 = zx.d(var_80.b)
        *(entry_x8 + 0x18) = 0
        
        if ((x8_2 & 1) != 0)
            result = operator delete(x0_11)
    else
        uint64_t x10_2 = zx.q(var_b8)
        i_12 = i_11
        x9_3 = x10_2.d & 1
        i_23 = x10_2 u>> 1
    label_e440ec:
        uint64_t i_20
        
        if ((x9_3 & 0xff) == 0)
            i_20 = i_23
        else
            i_20 = i_12
        
        if (i_20 != 3)
            goto label_e4412c
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_b8, 0, -ffffffffffffffff, &data_72065f) != 0)
            uint64_t x10_3 = zx.q(var_b8)
            i_12 = i_11
            x9_3 = x10_3.d & 1
            i_23 = x10_3 u>> 1
        label_e4412c:
            uint64_t i_17
            
            if ((x9_3 & 0xff) == 0)
                i_17 = i_23
            else
                i_17 = i_12
            
            int32_t x0_8
            
            if (i_17 == 5)
                x0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_b8, 0, -ffffffffffffffff, "ECDSA")
            
            if (i_17 != 5 || x0_8 != 0)
                void** x0_52 = __cxa_allocate_exception(0x20)
                uint64_t x8_33 = zx.q(var_b8)
                int32_t temp0_1 = x8_33.d & 1
                uint64_t i_15
                
                if (temp0_1 == 0)
                    i_15 = x8_33 u>> 1
                else
                    i_15 = i_11
                
                void* x21_3
                
                if (temp0_1 == 0)
                    x21_3 = &var_b8 | 1
                else
                    x21_3 = var_a8
                
                __builtin_memset(&var_80, 0, 0x18)
                
                if (i_15 + 0x26 u>= -0x10)
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    goto label_e4495c
                
                int64_t x22_5
                
                if (i_15 + 0x26 u> 0x16)
                    uint64_t x23_1 = (i_15 + 0x36) & 0xfffffffffffffff0
                    int64_t x0_72 = operator new(x23_1)
                    x22_5 = x0_72
                    var_80:8.q = i_15
                    int64_t var_70_7 = x0_72
                    var_80.q = x23_1 | 1
                    
                    if (i_15 != 0)
                        memcpy(x22_5, x21_3, i_15)
                else
                    var_80.b = (i_15.d << 1).b
                    x22_5 = &var_80 | 1
                    memcpy(x22_5, x21_3, i_15)
                
                *(x22_5 + i_15) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_80, " is invalid/unknown for TLS signatures")
                *x0_52 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_52[1])
                *x0_52 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_52, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
        
        var_80.b = 0x18
        __builtin_strncpy(&var_80:1, "EMSA1(SHA-1)", 0xd)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8)
        uint32_t x8_1 = zx.d(var_80.b)
        *(entry_x8 + 0x18) = 1
        
        if ((x8_1 & 1) != 0)
            result = operator delete(var_70)
else
    if ((x20 & 0xffff) == 0)
    label_e44ab0:
        void** x0_63 = __cxa_allocate_exception(0x20)
        int64_t x0_64
        int128_t v0_9
        x0_64, v0_9 = operator new(0x30)
        int64_t var_70_5 = x0_64
        var_80 = data_71b5b0
        __builtin_strncpy(x0_64, "Counterparty did not send hash/sig IDS", 0x27)
        *x0_63 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_63[1])
        *x0_63 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_63, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    Botan::TLS::signature_algorithm_of_scheme(zx.q(x20))
    uint64_t x9_4 = zx.q(var_b8)
    uint64_t x24_1 = zx.q(var_80.b)
    uint64_t i_4 = x9_4 u>> 1
    uint64_t i_8
    
    if ((x9_4.d & 1) == 0)
        i_8 = i_4
    else
        i_8 = i_11
    
    uint64_t x10_5
    
    if ((x24_1.d & 1) == 0)
        x10_5 = x24_1 u>> 1
    else
        x10_5 = var_80:8.q
    
    int32_t x25_1
    
    if (i_8 != x10_5)
        x25_1 = 1
        
        if ((x24_1.d & 1) != 0)
            operator delete(var_70)
    else
        void* x9_5 = &var_b8 | 1
        void* x1
        
        if ((x24_1.d & 1) == 0)
            x1 = &var_80 | 1
        else
            x1 = var_70
        
        if ((x9_4.d & 1) == 0)
            if (i_8 == 0)
                goto label_e442bc
            
            uint32_t x10_6
            uint32_t x11_3
            uint64_t i
            
            do
                x10_6 = zx.d(*x9_5)
                x11_3 = zx.d(*x1)
                
                if (x10_6 != x11_3)
                    break
                
                i = i_4
                i_4 -= 1
                x9_5 += 1
                x1 += 1
            while (i != 1)
            x25_1 = x10_6 != x11_3 ? 1 : 0
            
            if ((x24_1.d & 1) != 0)
                operator delete(var_70)
        else if (i_8 == 0)
        label_e442bc:
            x25_1 = 0
            
            if ((x24_1.d & 1) != 0)
                operator delete(var_70)
        else
            x25_1 = memcmp() != 0 ? 1 : 0
            
            if ((x24_1.d & 1) != 0)
                operator delete(var_70)
    
    if (x25_1 != 0)
        void** x0_67 = __cxa_allocate_exception(0x20)
        int64_t x0_68
        int128_t v0_10
        x0_68, v0_10 = operator new(0x40)
        int64_t var_70_6 = x0_68
        var_80 = data_71b3f0
        __builtin_strncpy(x0_68, "Counterparty sent inconsistent key and sig types", 0x31)
        *x0_67 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_67[1])
        *x0_67 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_67, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* result_1
    
    if ((arg4.d & 1) == 0)
        void* x8_7 = *(arg1 + 0x100)
        __builtin_memset(&result_1, 0, 0x18)
        int64_t* i_1 = *(x8_7 + 0x90)
        
        if (i_1 != 0)
            int64_t* i_6 = x8_7 + 0x90
            
            do
                int32_t x11_4 = i_1[4].d
                
                if (x11_4 s>= 0xd)
                    i_6 = i_1
                
                i_1 = i_1[zx.q(x11_4 s< 0xd ? 1 : 0)]
            while (i_1 != 0)
            
            if (i_6 != x8_7 + 0x90 && i_6[4].d s<= 0xd)
                int64_t x0_17 = i_6[5]
                
                if (x0_17 != 0)
                    void* x0_18 = __dynamic_cast(x0_17, _typeinfo_for_Botan::TLS::Extension, 
                        _typeinfo_for_Botan::TLS::Signature_Algorithms, 0)
                    
                    if (x0_18 != 0 && &result_1 != x0_18 + 8)
                        *(x0_18 + 0x10)
                        std::__ndk1::vector<Botan::TLS::Signature_Scheme, std::__ndk1::allocator<Botan::TLS::Signature_Scheme> >::assign<Botan::TLS::Signature_Scheme*>(
                            &result_1, *(x0_18 + 8))
        
        goto label_e443bc
    
    void* x24_2 = *(arg1 + 0x128)
    
    if (x24_2 == 0)
        void** x0_78 = __cxa_allocate_exception(0x28)
        int64_t x0_79
        int128_t v0_11
        x0_79, v0_11 = operator new(0x20)
        int64_t var_70_8 = x0_79
        var_80 = data_71aa40
        __builtin_strncpy(x0_79, "No certificate verify set", 0x1a)
        *x0_78 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_78[1])
        x0_78[4].d = 0x28
        *x0_78 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_78, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    __builtin_memset(&result_1, 0, 0x18)
    int64_t x9_6 = *(x24_2 + 0x38)
    int64_t x8_3 = *(x24_2 + 0x40)
    uint64_t x22_1 = x8_3 - x9_6
    void* result_7
    
    if (x8_3 != x9_6)
        if ((x22_1 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_e44d3c:
            void** x0_84 = __cxa_allocate_exception(0x28)
            int64_t x0_85
            int128_t v0_12
            x0_85, v0_12 = operator new(0x30)
            int64_t var_70_10 = x0_85
            var_80 = data_71d3f0
            __builtin_strncpy(x0_85, "Peer sent unknown signature scheme", 0x23)
            *x0_84 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_84[1])
            x0_84[4].d = 0x28
            *x0_84 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_84, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        void* result_3 = operator new(x22_1)
        result_1 = result_3
        void* result_5 = result_3
        void* var_c0_1 = result_3 + (x22_1 s>> 1 << 1)
        int64_t x1_1 = *(x24_2 + 0x38)
        void* result_6 = result_3
        size_t x22_2 = *(x24_2 + 0x40) - x1_1
        
        if (x22_2 s>= 1)
            memcpy(result_6, x1_1, x22_2)
            result_6 += x22_2
        
        result_7 = result_6
        goto label_e443bc
    
label_e443bc:
    int32_t x8_10 = x20 & 0xffff
    int32_t x8_11
    
    if (x8_10 s<= 0x500)
        if (x8_10 - 0x201 u>= 3)
            x8_11 = x8_10 - 0x401
        label_e443f8:
            
            if (x8_11 u>= 3)
                goto label_e44d3c
    else if (x8_10 - 0x501 u>= 3 && x8_10 - 0x601 u>= 3)
        x8_11 = x8_10 - 0x804
        goto label_e443f8
    Botan::TLS::hash_function_of_scheme(zx.q(x20))
    void* result_4 = result_1
    char var_e8
    char* var_d8
    
    if (result_4 == result_7)
    label_e44774:
        void** x0_38 = __cxa_allocate_exception(0x28)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "TLS signature extension did not allow for ", &var_b8)
        char var_118[0x18]
        int128_t* x0_40
        int128_t v0_4
        x0_40, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_118)
        int64_t var_f0 = x0_40[1].q
        int128_t var_100 = *x0_40
        __builtin_memset(x0_40, 0, 0x18)
        uint64_t x1_8
        
        if ((zx.d(var_e8) & 1) == 0)
            x1_8 = &var_e8 | 1
        else
            x1_8 = var_d8
        
        int128_t* x0_42
        int128_t v0_5
        x0_42, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_100, x1_8)
        int64_t var_90_1 = x0_42[1].q
        var_a0 = *x0_42
        __builtin_memset(x0_42, 0, 0x18)
        int128_t* x0_44
        int128_t v0_6
        x0_44, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a0)
        int64_t var_70_1 = x0_44[1].q
        var_80 = *x0_44
        __builtin_memset(x0_44, 0, 0x18)
        *x0_38 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_38[1])
        x0_38[4].d = 0x2f
        *x0_38 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_38, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    void* x24_3 = &var_b8 | 1
    
    while (true)
        uint32_t x21_1 = zx.d(*result_4)
        
        if (x21_1 s<= 0x500)
            if (x21_1 - 0x201 u< 3 || x21_1 - 0x401 u< 3)
            label_e444a8:
                Botan::TLS::hash_function_of_scheme(zx.q(x21_1))
                uint64_t x9_11 = zx.q(var_80.b)
                uint64_t x10_7 = zx.q(var_e8)
                uint64_t i_5 = x9_11 u>> 1
                uint64_t i_9
                
                if ((x9_11.d & 1) == 0)
                    i_9 = i_5
                else
                    i_9 = var_80:8.q
                
                uint64_t x11_7
                uint64_t var_e0
                
                if ((x10_7.d & 1) == 0)
                    x11_7 = x10_7 u>> 1
                else
                    x11_7 = var_e0
                
                if (i_9 == x11_7)
                    char* x1_4
                    
                    if ((x10_7.d & 1) == 0)
                        x1_4 = &var_e8 | 1
                    else
                        x1_4 = var_d8
                    
                    if ((x9_11.d & 1) == 0)
                        void* x9_13 = &var_80 | 1
                        
                        if (i_9 != 0)
                            uint64_t i_2
                            
                            do
                                if (zx.d(*x9_13) != zx.d(*x1_4))
                                    goto label_e44448
                                
                                i_2 = i_5
                                i_5 -= 1
                                x9_13 += 1
                                x1_4 = &x1_4[1]
                            while (i_2 != 1)
                        
                        goto label_e44550
                    
                    if (i_9 == 0)
                    label_e44550:
                        Botan::TLS::signature_algorithm_of_scheme(zx.q(x21_1))
                        uint64_t x8_17 = zx.q(var_a0.b)
                        uint64_t x10_9 = zx.q(var_b8)
                        uint64_t i_7 = x8_17 u>> 1
                        uint64_t i_10
                        
                        if ((x8_17.d & 1) == 0)
                            i_10 = i_7
                        else
                            i_10 = var_a0:8.q
                        
                        uint64_t i_14
                        
                        if ((x10_9.d & 1) == 0)
                            i_14 = x10_9 u>> 1
                        else
                            i_14 = i_11
                        
                        int32_t x22_4
                        char* var_90
                        
                        if (i_10 != i_14)
                            x22_4 = 0
                        label_e445d4:
                            
                            if ((x8_17.d & 1) != 0)
                                operator delete(var_90)
                        else
                            void* x1_5
                            
                            if ((x10_9.d & 1) == 0)
                                x1_5 = x24_3
                            else
                                x1_5 = var_a8
                            
                            if ((x8_17.d & 1) != 0)
                                if (i_10 == 0)
                                    x22_4 = 1
                                else
                                    x22_4 = memcmp() == 0 ? 1 : 0
                                
                                operator delete(var_90)
                            else
                                char* x10_10 = &var_a0 | 1
                                
                                if (i_10 != 0)
                                    uint64_t i_3
                                    
                                    do
                                        uint32_t x11_12 = zx.d(*x10_10)
                                        uint32_t x12_6 = zx.d(*x1_5)
                                        x22_4 = x11_12 == x12_6 ? 1 : 0
                                        
                                        if (x11_12 != x12_6)
                                            break
                                        
                                        i_3 = i_7
                                        i_7 -= 1
                                        x10_10 = &x10_10[1]
                                        x1_5 += 1
                                    while (i_3 != 1)
                                    goto label_e445d4
                                
                                x22_4 = 1
                        
                        if ((zx.d(var_80.b) & 1) != 0)
                            operator delete(var_70)
                            
                            if ((x22_4 & 1) != 0)
                                break
                        else if ((x22_4 & 1) != 0)
                            break
                    else
                        if (memcmp() == 0)
                            goto label_e44550
                        
                        operator delete(var_70)
                else if ((x9_11.d & 1) != 0)
                    operator delete(var_70)
        else if (x21_1 - 0x501 u< 3 || x21_1 - 0x804 u< 3 || x21_1 - 0x601 u<= 2)
            goto label_e444a8
        
    label_e44448:
        result_4 += 2
        
        if (result_4 == result_7)
            goto label_e44774
    
    uint64_t x10_11 = zx.q(var_b8)
    uint64_t i_13 = i_11
    int32_t x9_14 = x10_11.d & 1
    uint64_t i_24 = x10_11 u>> 1
    uint64_t i_21
    
    i_21 = x9_14 == 0 ? i_24 : i_13
    
    if (i_21 != 3)
        goto label_e44664
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_b8, 0, -ffffffffffffffff, &data_76da56) == 0)
        Botan::TLS::padding_string_for_scheme(zx.q(x20))
        int128_t v0_3 = var_80
        *(entry_x8 + 0x18) = 0
        entry_x8[1].q = var_70
        *entry_x8 = v0_3
        
        if ((zx.d(var_e8) & 1) != 0)
            operator delete(var_d8)
    else
        uint64_t x10_12 = zx.q(var_b8)
        i_13 = i_11
        x9_14 = x10_12.d & 1
        i_24 = x10_12 u>> 1
    label_e44664:
        uint64_t i_22
        
        if ((x9_14 & 0xff) == 0)
            i_22 = i_24
        else
            i_22 = i_13
        
        if (i_22 != 3)
            goto label_e446a4
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_b8, 0, -ffffffffffffffff, &data_72065f) != 0)
            uint64_t x10_13 = zx.q(var_b8)
            i_13 = i_11
            x9_14 = x10_13.d & 1
            i_24 = x10_13 u>> 1
        label_e446a4:
            uint64_t i_18
            
            if ((x9_14 & 0xff) == 0)
                i_18 = i_24
            else
                i_18 = i_13
            
            int32_t x0_33
            
            if (i_18 == 5)
                x0_33 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_b8, 0, -ffffffffffffffff, "ECDSA")
            
            if (i_18 != 5 || x0_33 != 0)
                void** x0_62 = __cxa_allocate_exception(0x20)
                uint64_t x8_41 = zx.q(var_b8)
                var_80.q = 0
                var_80:8.q = 0
                int32_t temp5_1 = x8_41.d & 1
                uint64_t i_16
                
                if (temp5_1 == 0)
                    i_16 = x8_41 u>> 1
                else
                    i_16 = i_11
                
                void* x21_4
                
                x21_4 = temp5_1 == 0 ? x24_3 : var_a8
                
                int64_t var_70_4 = 0
                
                if (i_16 + 0x26 u>= -0x10)
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    goto label_e44ab0
                
                int64_t x22_6
                
                if (i_16 + 0x26 u> 0x16)
                    uint64_t x23_2 = (i_16 + 0x36) & 0xfffffffffffffff0
                    int64_t x0_83 = operator new(x23_2)
                    x22_6 = x0_83
                    var_80:8.q = i_16
                    int64_t var_70_9 = x0_83
                    var_80.q = x23_2 | 1
                    
                    if (i_16 != 0)
                        memcpy(x22_6, x21_4, i_16)
                else
                    var_80.b = (i_16.d << 1).b
                    x22_6 = &var_80 | 1
                    memcpy(x22_6, x21_4, i_16)
                
                *(x22_6 + i_16) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_80, " is invalid/unknown for TLS signatures")
                *x0_62 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_62[1])
                *x0_62 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_62, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
        
        Botan::TLS::padding_string_for_scheme(zx.q(x20))
        int128_t v0_2 = var_80
        *(entry_x8 + 0x18) = 1
        entry_x8[1].q = var_70
        *entry_x8 = v0_2
        
        if ((zx.d(var_e8) & 1) != 0)
            operator delete(var_d8)
    
    result = result_1
    
    if (result != 0)
        void* result_2 = result
        result = operator delete(result)

if ((zx.d(var_b8) & 1) == 0)
    return result

return operator delete(var_a8)
