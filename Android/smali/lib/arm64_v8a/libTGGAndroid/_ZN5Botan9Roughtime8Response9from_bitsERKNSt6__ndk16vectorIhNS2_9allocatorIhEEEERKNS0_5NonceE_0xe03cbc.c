// 函数: _ZN5Botan9Roughtime8Response9from_bitsERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERKNS0_5NonceE
// 地址: 0xe03cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x20 + 0x28)
void* var_2c8
__builtin_memset(&var_2c8, 0, 0x18)
int64_t x22 = *arg1
int64_t x9_1 = *(arg1 + 8)
uint64_t x21 = x9_1 - x22

if (x9_1 == x22)
    goto label_e03d30

if ((x21 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_e055e8:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_e055f0:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x0_1 = operator new(x21)
    void* x19_1 = x0_1 + x21
    var_2c8 = x0_1
    void* var_2b8_1 = x19_1
    memcpy(x0_1, x22, x21)
    void* var_2c0_1 = x19_1
label_e03d30:
    int64_t* var_2b0
    sub_e05eb8(&var_2b0, &var_2c8)
    void* x0_3 = var_2c8
    
    if (x0_3 != 0)
        void* var_2c0_2 = x0_3
        operator delete(x0_3)
    
    char var_b0 = 8
    int32_t var_af
    __builtin_strncpy(&var_af, "CERT", 5)
    int64_t* x0_5 = sub_e065a8(&var_2b0, &var_b0)
    void* var_2f8
    __builtin_memset(&var_2f8, 0, 0x18)
    int64_t x9_2 = *x0_5
    int64_t x8 = x0_5[1]
    uint64_t x23_1 = x8 - x9_2
    
    if (x8 != x9_2)
        if ((x23_1 & 0xffffffff80000000) != 0)
            goto label_e055e8
        
        void* x0_7 = operator new(x23_1)
        var_2f8 = x0_7
        void* var_2f0_1 = x0_7
        void* var_2e8_1 = x0_7 + x23_1
        int64_t x1_3 = *x0_5
        void* x22_1 = x0_7
        size_t x21_2 = x0_5[1] - x1_3
        
        if (x21_2 s>= 1)
            memcpy(x22_1, x1_3, x21_2)
            x22_1 += x21_2
        
        void* var_2f0_2 = x22_1
    
    int64_t* var_2e0
    sub_e05eb8(&var_2e0, &var_2f8)
    void* x0_10 = var_2f8
    
    if (x0_10 != 0)
        void* var_2f0_3 = x0_10
        operator delete(x0_10)
    
    void* var_a0
    
    if ((zx.d(var_b0) & 1) != 0)
        operator delete(var_a0)
    
    char var_220 = 8
    int32_t var_21f
    __builtin_strncpy(&var_21f, "DELE", 5)
    void* x0_13
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_13, v0_1, v1_1, v2_1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        &var_2e0)
    int64_t var_2d8
    int128_t var_1e0
    int128_t var_1a0
    char var_f0
    void* var_e0
    
    if (&var_2d8 == x0_13)
        void** x0_121 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Tag ", &var_220)
        int128_t* x0_123
        int128_t v0_12
        x0_123, v0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_1e0)
        int64_t var_190_1 = x0_123[1].q
        var_1a0 = *x0_123
        __builtin_memset(x0_123, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Roughtime ", &var_1a0)
        *x0_121 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_121[1])
        *x0_121 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_f0) & 1) != 0)
            operator delete(var_e0)
        
        *x0_121 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
        __cxa_throw(x0_121, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
            Botan::Exception::~Exception)
        noreturn
    
    int128_t* x8_4 = *(x0_13 + 0x38)
    
    if (*(x0_13 + 0x40) - x8_4 != 0x48)
        void** x0_128 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Tag ", &var_220)
        int128_t* x0_130
        int128_t v0_13
        x0_130, v0_13 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_1e0)
        int64_t var_190_2 = x0_130[1].q
        var_1a0 = *x0_130
        __builtin_memset(x0_130, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Roughtime ", &var_1a0)
        *x0_128 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_128[1])
        *x0_128 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_f0) & 1) != 0)
            operator delete(var_e0)
        
        *x0_128 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
        __cxa_throw(x0_128, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
            Botan::Exception::~Exception)
        noreturn
    
    var_b0.o = *x8_4
    v2_1 = x8_4[2]
    v0_1 = x8_4[3]
    int64_t x9_5 = x8_4[4].q
    var_a0.o = x8_4[1]
    void* var_210
    
    if ((zx.d(var_220) & 1) != 0)
        operator delete(var_210)
    var_1a0.b = 6
    var_1a0:1.d = 0x474953
    int128_t v0_2
    int128_t v1_2
    v0_2, v1_2 = sub_e06720(&var_f0, &var_2e0, &var_1a0)
    void* var_190
    
    if ((zx.d(var_1a0.b) & 1) != 0)
        v0_2, v1_2 = operator delete(var_190)
    
    int128_t var_140 = var_b0.o
    int128_t var_130_1 = var_a0.o
    uint64_t x8_7 = zx.q(var_140.b)
    int64_t var_100_1 = x9_5
    int128_t var_120_1 = v2_1
    int128_t var_110_1 = v0_1
    
    if (x8_7.d u>= 0xa)
        void** x0_135 = __cxa_allocate_exception(0x20)
        int64_t x0_136
        int128_t v0_14
        x0_136, v0_14 = operator new(0x30)
        int64_t var_1d0_4 = x0_136
        var_1e0 = data_71aa70
        __builtin_strncpy(x0_136, "Map length too small to contain all tags", 0x29)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Roughtime ", &var_1e0)
        *x0_135 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_135[1])
        *x0_135 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_1a0.b) & 1) != 0)
            operator delete(var_190)
        
        *x0_135 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
        __cxa_throw(x0_135, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
            Botan::Exception::~Exception)
        noreturn
    
    int64_t var_308 = 0
    int64_t var_300_1 = 0
    char const (* var_310)[0x5] = &var_308
    char var_260
    char var_25f
    
    if (x8_7.d != 0)
        int32_t x26_1 = x8_7.d << 3
        uint64_t x27_1 = x8_7 << 2
        int64_t x23_2 = 0
        void* x20_1 = &var_140 + x27_1
        int32_t x21_3 = x26_1
        
        while (true)
            uint64_t x19_2
            
            if (x27_1 - 4 != x23_2)
                x19_2 = zx.q(sub_f48448(&var_140 + x23_2 + 4, 3) + x26_1)
                
                if (x19_2.d u< 0x49)
                    goto label_e03f28
            else
                x19_2 = 0x48
            label_e03f28:
                uint64_t x8_9 = zx.q(x21_3)
                
                if (x19_2 u< x8_9)
                    void** x0_101 = __cxa_allocate_exception(0x20)
                    int64_t x0_102
                    int128_t v0_8
                    x0_102, v0_8 = operator new(0x40)
                    int64_t var_1d0_1 = x0_102
                    var_1e0 = data_71b3f0
                    __builtin_strncpy(x0_102, "Tag offset must be more than previous tag offset", 
                        0x31)
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "Roughtime ", &var_1e0)
                    *x0_101 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_101[1])
                    *x0_101 = _vtable_for_Botan::Decoding_Error + 0x10
                    
                    if ((zx.d(var_1a0.b) & 1) != 0)
                        operator delete(var_190)
                    
                    *x0_101 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                    __cxa_throw(x0_101, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                void* x10_1 = x20_1 + x23_2
                char x11_1 = *(x10_1 + 1)
                void* x21_4 = &var_140 + x8_9
                var_260 = *(x20_1 + x23_2)
                char x9_8 = *(x10_1 + 2)
                void* x8_10 = &var_140 + x19_2
                size_t x22_2 = x8_10 - x21_4
                var_25f = x11_1
                char var_25e_1 = x9_8
                char x9_9 = *(x10_1 + 3)
                char var_25c = 0
                __builtin_memset(&var_1a0, 0, 0x18)
                char var_25d_1 = x9_9
                
                if (x8_10 == x21_4)
                    goto label_e03fac
                
                if ((x22_2 & 0xffffffff80000000) != 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                else
                    void* x0_20 = operator new(x22_2)
                    void* x24_1 = x0_20 + x22_2
                    var_1a0.q = x0_20
                    var_190 = x24_1
                    memcpy(x0_20, x21_4, x22_2)
                    var_1a0:8.q = x24_1
                label_e03fac:
                    int32_t x1_7 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::__emplace_unique_impl<char const (&)[0x5], std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >(
                        &var_310)
                    void* x0_22 = var_1a0.q
                    
                    if (x0_22 != 0)
                        var_1a0:8.q = x0_22
                        operator delete(x0_22)
                    
                    if ((x1_7 & 1) != 0)
                        x23_2 += 4
                        x21_3 = x19_2.d
                        
                        if (x27_1 == x23_2)
                            break
                        
                        continue
                    
                    void** x0_107 = __cxa_allocate_exception(0x20)
                    int64_t x0_108
                    int128_t v0_9
                    x0_108, v0_9 = operator new(0x20)
                    int64_t var_210_2 = x0_108
                    var_220.o = data_71af80
                    __builtin_strncpy(x0_108, "Map has duplicated tag: ", 0x19)
                    int128_t* x0_110
                    int128_t v0_10
                    x0_110, v0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_220)
                    int64_t var_1d0_2 = x0_110[1].q
                    var_1e0 = *x0_110
                    __builtin_memset(x0_110, 0, 0x18)
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "Roughtime ", &var_1e0)
                    *x0_107 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_107[1])
                    *x0_107 = _vtable_for_Botan::Decoding_Error + 0x10
                    
                    if ((zx.d(var_1a0.b) & 1) != 0)
                        operator delete(var_190)
                    
                    *x0_107 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                    __cxa_throw(x0_107, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                        Botan::Exception::~Exception)
                    noreturn
            void** x0_115 = __cxa_allocate_exception(0x20)
            int64_t x0_116
            int128_t v0_11
            x0_116, v0_11 = operator new(0x20)
            int64_t var_1d0_3 = x0_116
            var_1e0 = data_71abe0
            __builtin_strncpy(x0_116, "Tag end index out of bounds", 0x1c)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_1e0)
            *x0_115 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_115[1])
            *x0_115 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1a0.b) & 1) != 0)
                operator delete(var_190)
            
            *x0_115 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_115, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
    
    var_1a0.b = 8
    __builtin_strncpy(&var_1a0:1, "SREP", 5)
    int64_t* x0_24 = sub_e065a8(&var_2b0, &var_1a0)
    void* var_328_1
    __builtin_memset(&var_328_1, 0, 0x18)
    int64_t x9_10 = *x0_24
    int64_t x8_11 = x0_24[1]
    uint64_t x23_3 = x8_11 - x9_10
    void* var_320_1
    void* x8_14
    void* x21_6
    
    if (x8_11 == x9_10)
        x21_6 = nullptr
        x8_14 = nullptr
        
        if ((zx.d(var_1a0.b) & 1) != 0)
        label_e04064:
            operator delete(var_190)
            x21_6 = var_328_1
            x8_14 = var_320_1
    else
        if ((x23_3 & 0xffffffff80000000) != 0)
            goto label_e055f0
        
        void* x0_26 = operator new(x23_3)
        var_328_1 = x0_26
        void* var_320_2 = x0_26
        void* var_318_1 = x0_26 + x23_3
        int64_t x1_9 = *x0_24
        x21_6 = x0_26
        size_t x22_4 = x0_24[1] - x1_9
        x8_14 = x0_26
        
        if (x22_4 s>= 1)
            memcpy(x21_6, x1_9, x22_4)
            x8_14 = x21_6 + x22_4
        
        var_320_1 = x8_14
        
        if ((zx.d(var_1a0.b) & 1) != 0)
            goto label_e04064
    
    uint64_t x22_5 = x8_14 - x21_6
    void* var_358
    __builtin_memset(&var_358, 0, 0x18)
    
    if (x8_14 == x21_6)
        goto label_e040ac
    
    if ((x22_5 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        void* x0_30 = operator new(x22_5)
        void* x19_3 = x0_30 + x22_5
        var_358 = x0_30
        void* var_350_1 = x0_30
        void* var_348_1 = x19_3
        memcpy(x0_30, x21_6, x22_5)
        void* var_350_2 = x19_3
    label_e040ac:
        int64_t* var_340
        sub_e05eb8(&var_340, &var_358)
        void* x0_32 = var_358
        
        if (x0_32 != 0)
            void* var_350_3 = x0_32
            operator delete(x0_32)
        
        var_260 = 8
        __builtin_strncpy(&var_25f, "PUBK", 5)
        void* x0_34
        int128_t v0_3
        int128_t v1_3
        x0_34, v0_3, v1_3 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_310)
        
        if (&var_308 == x0_34)
            void** x0_141 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Tag ", &var_260)
            int128_t* x0_143
            int128_t v0_15
            x0_143, v0_15 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_220)
            int64_t var_1d0_5 = x0_143[1].q
            var_1e0 = *x0_143
            __builtin_memset(x0_143, 0, 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_1e0)
            *x0_141 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_141[1])
            *x0_141 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1a0.b) & 1) != 0)
                operator delete(var_190)
            
            *x0_141 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_141, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        int128_t* x8_16 = *(x0_34 + 0x38)
        
        if (*(x0_34 + 0x40) - x8_16 != 0x20)
            void** x0_148 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Tag ", &var_260)
            int128_t* x0_150
            int128_t v0_16
            x0_150, v0_16 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_220)
            int64_t var_1d0_6 = x0_150[1].q
            var_1e0 = *x0_150
            __builtin_memset(x0_150, 0, 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_1e0)
            *x0_148 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_148[1])
            *x0_148 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1a0.b) & 1) != 0)
                operator delete(var_190)
            
            *x0_148 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_148, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        v0_3 = *x8_16
        v1_3 = x8_16[1]
        void* var_250
        
        if ((zx.d(var_260) & 1) != 0)
            operator delete(var_250)
        
        var_1e0.b = 6
        var_1e0:1.d = 0x474953
        sub_e06720(&var_1a0, &var_2b0, &var_1e0)
        void* var_1d0
        
        if ((zx.d(var_1e0.b) & 1) != 0)
            operator delete(var_1d0)
        
        __builtin_strcpy(&var_1e0, "RoughTime v1 response signature")
        int128_t* x0_38
        int128_t v0_4
        int128_t v1_4
        x0_38, v0_4, v1_4 = operator new(0x20)
        *x0_38 = v0_3
        x0_38[1] = v1_3
        var_220.q = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        int64_t var_218_1
        __builtin_memset(&var_218_1, 0, 0x18)
        int128_t* x0_39
        int128_t v0_5
        int128_t v1_5
        x0_39, v0_5, v1_5 = operator new(0x20)
        v0_5 = x0_38[1]
        int128_t* var_210_1 = &x0_39[2]
        int128_t* var_208_1 = &x0_39[2]
        *x0_39 = *x0_38
        x0_39[1] = v0_5
        operator delete(x0_38)
        int64_t x8_22 = *(var_220.q - 0x88)
        char var_280 = 8
        int32_t var_27f
        __builtin_strncpy(&var_27f, "Pure", 5)
        int16_t var_298 = 0
        Botan::PK_Verifier::PK_Verifier(&var_260, &(&var_220)[x8_22], &var_280, nullptr)
        void* var_288
        
        if ((zx.d(var_298.b) & 1) != 0)
            operator delete(var_288)
        
        void* var_270
        
        if ((zx.d(var_280) & 1) != 0)
            operator delete(var_270)
        
        int64_t* x21_8 = var_260.q
        (**x21_8)(x21_8, &var_1e0, 0x20)
        void* x1_15 = var_328_1
        (**x21_8)(x21_8, x1_15, var_320_1 - x1_15)
        int32_t x0_47 = Botan::PK_Verifier::check_signature(&var_260, &var_1a0)
        (*(*x21_8 + 0x18))(x21_8)
        var_220.q = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        
        if (x0_39 != 0)
            var_210_1 = x0_39
            operator delete(x0_39)
        
        if ((x0_47 & 1) == 0)
            void** x0_155 = __cxa_allocate_exception(0x20)
            int64_t x0_156
            int128_t v0_17
            x0_156, v0_17 = operator new(0x20)
            int64_t var_210_3 = x0_156
            var_220.o = data_71bd10
            __builtin_strncpy(x0_156, "Response signature invalid", 0x1b)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_220)
            *x0_155 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_155[1])
            *x0_155 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1e0.b) & 1) != 0)
                operator delete(var_1d0)
            
            *x0_155 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_155, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        var_280 = 8
        int32_t var_27f_1
        __builtin_strncpy(&var_27f_1, "INDX", 5)
        void* x0_51 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_2b0)
        int64_t var_2a8
        
        if (&var_2a8 == x0_51)
            void** x0_161 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Tag ", &var_280)
            int128_t* x0_163
            int128_t v0_18
            x0_163, v0_18 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_260)
            int64_t var_210_4 = x0_163[1].q
            var_220.o = *x0_163
            __builtin_memset(x0_163, 0, 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_220)
            *x0_161 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_161[1])
            *x0_161 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1e0.b) & 1) != 0)
                operator delete(var_1d0)
            
            *x0_161 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_161, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        void* x0_52 = *(x0_51 + 0x38)
        
        if (*(x0_51 + 0x40) - x0_52 != 4)
            void** x0_168 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Tag ", &var_280)
            int128_t* x0_170
            int128_t v0_19
            x0_170, v0_19 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_260)
            int64_t var_210_5 = x0_170[1].q
            var_220.o = *x0_170
            __builtin_memset(x0_170, 0, 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_220)
            *x0_168 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_168[1])
            *x0_168 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_1e0.b) & 1) != 0)
                operator delete(var_1d0)
            
            *x0_168 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_168, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        uint32_t x21_9 = sub_f48448(x0_52, 3)
        
        if ((zx.d(var_280) & 1) != 0)
            operator delete(var_270)
        
        var_1e0.b = 8
        __builtin_strncpy(&var_1e0:1, "PATH", 5)
        int64_t* x0_56 = sub_e065a8(&var_2b0, &var_1e0)
        void* var_370_1
        __builtin_memset(&var_370_1, 0, 0x18)
        int64_t x9_15 = *x0_56
        int64_t x8_35 = x0_56[1]
        uint64_t x24_2 = x8_35 - x9_15
        void* var_368_1
        
        if (x8_35 == x9_15)
        label_e0435c:
            
            if ((zx.d(var_1e0.b) & 1) != 0)
                operator delete(var_1d0)
            
            var_220 = 8
            int32_t var_21f_1
            __builtin_strncpy(&var_21f_1, "ROOT", 5)
            sub_e06720(&var_1e0, &var_340, &var_220)
            
            if ((zx.d(var_220) & 1) != 0)
                operator delete(var_210_1)
            
            void* x8_41 = var_368_1 - var_370_1
            
            if ((x8_41 & 0x3f) != 0)
                void** x0_175 = __cxa_allocate_exception(0x20)
                int64_t x0_176
                int128_t v0_20
                x0_176, v0_20 = operator new(0x40)
                int64_t var_250_1 = x0_176
                var_260.o = data_71ac10
                __builtin_strncpy(x0_176, "Merkle tree path size must be multiple of 64 bytes", 
                    0x33)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_260)
                *x0_175 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_175[1])
                *x0_175 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_220) & 1) != 0)
                    operator delete(var_210_1)
                
                *x0_175 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_175, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            uint64_t x22_9 = x8_41 u>> 6
            
            if (x21_9 u>> x22_9.d != 0)
                void** x0_181 = __cxa_allocate_exception(0x20)
                int64_t x0_182
                int128_t v0_21
                x0_182, v0_21 = operator new(0x20)
                int64_t var_250_2 = x0_182
                var_260.o = data_71cd20
                __builtin_strncpy(x0_182, "Merkle tree path is too short", 0x1e)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_260)
                *x0_181 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_181[1])
                *x0_181 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_220) & 1) != 0)
                    operator delete(var_210_1)
                
                *x0_181 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_181, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            var_260 = 0xe
            __builtin_strncpy(&var_25f, "SHA-512", 8)
            var_280.w = 0
            Botan::HashFunction::create_or_throw(&var_260, &var_280)
            
            if ((zx.d(var_280) & 1) != 0)
                operator delete(var_270)
            
            if ((zx.d(var_260) & 1) != 0)
                operator delete(var_250)
            
            int64_t* x0_66 = var_298.q
            var_260 = 0
            (*(*x0_66 + 0x18))(x0_66, &var_260, 1)
            int64_t* x0_67 = var_298.q
            (*(*x0_67 + 0x18))(x0_67, arg2, 0x40)
            int64_t* x0_68 = var_298.q
            int128_t v0_6
            int128_t v1_6
            int128_t v2_2
            int128_t v3_1
            v0_6, v1_6, v2_2, v3_1 = (*(*x0_68 + 0x20))(x0_68, &var_220)
            int64_t* x0_69 = var_298.q
            var_298.q = 0
            
            if (x0_69 != 0)
                v0_6, v1_6, v2_2, v3_1 = (*(*x0_69 + 0x10))()
            
            int64_t* var_388
            
            if (x22_9 != 0)
                int32_t x20_2 = 0
                int32_t x27_2 = 1
                bool cond:5_1
                
                do
                    int128_t* x8_54 = var_370_1 + zx.q(x20_2)
                    v0_6 = x8_54[2]
                    v1_6 = x8_54[3]
                    v3_1 = *x8_54
                    v2_2 = x8_54[1]
                    var_280 = 0xe
                    __builtin_strncpy(&var_280 | 1, "SHA-512", 7)
                    char var_278_1 = 0
                    int128_t var_240_1 = v0_6
                    int128_t var_230_1 = v1_6
                    var_260.o = v3_1
                    var_250.o = v2_2
                    var_298 = 0
                    Botan::HashFunction::create_or_throw(&var_280, &var_298)
                    
                    if ((zx.d(var_298.b) & 1) != 0)
                        operator delete(var_288)
                    
                    if ((zx.d(var_280) & 1) != 0)
                        operator delete(var_270)
                    
                    int64_t* x0_73 = var_388
                    var_280 = 1
                    (*(*x0_73 + 0x18))(x0_73, &var_280, 1)
                    int64_t* x0_74 = var_388
                    int64_t x8_60 = *(*x0_74 + 0x18)
                    
                    if ((x21_9 & 1) != 0)
                        x8_60(x0_74, &var_260, 0x40)
                        int64_t* x0_76 = var_388
                        (*(*x0_76 + 0x18))(x0_76, &var_220, 0x40)
                    else
                        x8_60(x0_74, &var_220, 0x40)
                        int64_t* x0_75 = var_388
                        (*(*x0_75 + 0x18))(x0_75, &var_260, 0x40)
                    
                    int64_t* x0_77 = var_388
                    v0_6, v1_6, v2_2, v3_1 = (*(*x0_77 + 0x20))(x0_77, &var_220)
                    int64_t* x0_78 = var_388
                    var_388 = nullptr
                    
                    if (x0_78 != 0)
                        v0_6, v1_6, v2_2, v3_1 = (*(*x0_78 + 0x10))()
                    
                    x21_9 u>>= 1
                    cond:5_1 = x22_9 u<= zx.q(x27_2)
                    x27_2 += 1
                    x20_2 += 0x40
                while (not(cond:5_1))
            
            if ((sub_f487fc(&var_1e0, &var_220) & 1) == 0)
                void** x0_187 = __cxa_allocate_exception(0x20)
                int64_t x0_188
                int128_t v0_22
                x0_188, v0_22 = operator new(0x20)
                int64_t var_270_1 = x0_188
                var_280.o = data_71aa40
                __builtin_strncpy(x0_188, "Nonce verification failed", 0x1a)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_280)
                *x0_187 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_187[1])
                *x0_187 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_260) & 1) != 0)
                    operator delete(var_250)
                
                *x0_187 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_187, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            var_260 = 8
            __builtin_strncpy(&var_25f, "MAXT", 5)
            int64_t x0_82 = sub_e069e0(&var_310, &var_260)
            
            if ((zx.d(var_260) & 1) != 0)
                operator delete(var_250)
            
            var_260 = 8
            __builtin_strncpy(&var_25f, "MINT", 5)
            int64_t x0_85 = sub_e069e0(&var_310, &var_260)
            
            if ((zx.d(var_260) & 1) != 0)
                operator delete(var_250)
            
            var_260 = 8
            __builtin_strncpy(&var_25f, "MIDP", 5)
            int64_t x0_88 = sub_e069e0(&var_340, &var_260)
            
            if ((zx.d(var_260) & 1) != 0)
                operator delete(var_250)
            
            var_388.b = 8
            __builtin_strncpy(&var_388:1, "RADI", 5)
            void* x0_91 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                &var_340)
            int64_t var_338
            
            if (&var_338 == x0_91)
                void** x0_193 = __cxa_allocate_exception(0x20)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Tag ", &var_388)
                int128_t* x0_195
                int128_t v0_23
                x0_195, v0_23 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_298)
                int64_t var_270_2 = x0_195[1].q
                var_280.o = *x0_195
                __builtin_memset(x0_195, 0, 0x18)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_280)
                *x0_193 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_193[1])
                *x0_193 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_260) & 1) != 0)
                    operator delete(var_250)
                
                *x0_193 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_193, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            void* x0_92 = *(x0_91 + 0x38)
            
            if (*(x0_91 + 0x40) - x0_92 != 4)
                void** x0_200 = __cxa_allocate_exception(0x20)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Tag ", &var_388)
                int128_t* x0_202
                int128_t v0_24
                x0_202, v0_24 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_298)
                int64_t var_270_3 = x0_202[1].q
                var_280.o = *x0_202
                __builtin_memset(x0_202, 0, 0x18)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_280)
                *x0_200 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_200[1])
                *x0_200 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_260) & 1) != 0)
                    operator delete(var_250)
                
                *x0_200 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_200, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            int32_t x0_93
            int128_t v0_7
            int128_t v1_7
            int128_t v2_3
            int128_t v3_2
            x0_93, v0_7, v1_7, v2_3, v3_2 = sub_f48c44(x0_92, 3)
            void* var_378
            
            if ((zx.d(var_388.b) & 1) != 0)
                v0_7, v1_7, v2_3, v3_2 = operator delete(var_378)
            
            if (x0_88 u< x0_85)
                void** x0_207 = __cxa_allocate_exception(0x20)
                int64_t x0_208
                int128_t v0_25
                x0_208, v0_25 = operator new(0x30)
                int64_t var_270_4 = x0_208
                var_280.o = data_71b5b0
                __builtin_strncpy(x0_208, "Midpoint earlier than delegation start", 0x27)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_280)
                *x0_207 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_207[1])
                *x0_207 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_260) & 1) != 0)
                    operator delete(var_250)
                
                *x0_207 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_207, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            if (x0_82 u< x0_88)
                void** x0_213 = __cxa_allocate_exception(0x20)
                int64_t x0_214
                int128_t v0_26
                x0_214, v0_26 = operator new(0x30)
                int64_t var_270_5 = x0_214
                var_280.o = data_71d3f0
                __builtin_strncpy(x0_214, "Midpoint later than delegation end", 0x23)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Roughtime ", &var_280)
                *x0_213 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_213[1])
                *x0_213 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_260) & 1) != 0)
                    operator delete(var_250)
                
                *x0_213 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
                __cxa_throw(x0_213, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            v2_3 = var_b0.o
            void* x0_95 = var_370_1
            int128_t* entry_x8
            entry_x8[2] = v2_1
            entry_x8[3] = v0_1
            v0_7 = var_f0.o
            *entry_x8 = v2_3
            entry_x8[1] = var_a0.o
            *(entry_x8 + 0x88) = x0_88
            entry_x8[4].q = x9_5
            *(entry_x8 + 0x58) = var_e0.o
            int128_t var_c0
            *(entry_x8 + 0x78) = var_c0
            int128_t var_d0
            *(entry_x8 + 0x68) = var_d0
            *(entry_x8 + 0x48) = v0_7
            entry_x8[9].d = x0_93
            
            if (x0_95 != 0)
                void* var_368_3 = x0_95
                operator delete(x0_95)
            
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
                &var_340)
            void* x0_97 = var_328_1
            
            if (x0_97 != 0)
                void* var_320_3 = x0_97
                operator delete(x0_97)
            
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
                &var_310)
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
                &var_2e0)
            int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
                &var_2b0)
            
            if (*(x20 + 0x28) == x9)
                return result
        else
            if ((x24_2 & 0xffffffff80000000) == 0)
                void* x0_58 = operator new(x24_2)
                var_370_1 = x0_58
                void* var_368_2 = x0_58
                void* var_360_1 = x0_58 + x24_2
                int64_t x1_18 = *x0_56
                void* x23_4 = x0_58
                size_t x22_8 = x0_56[1] - x1_18
                
                if (x22_8 s>= 1)
                    memcpy(x23_4, x1_18, x22_8)
                    x23_4 += x22_8
                
                var_368_1 = x23_4
                goto label_e0435c
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
