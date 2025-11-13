// 函数: _ZN5Botan19argon2_check_pwhashEPKcmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xcaa804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_98 = 0x24
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_80 = &var_a0
Botan::split_on_pred(arg3, &var_a0)

if (&var_a0 == var_80)
    (*var_80)->vFunc_4()
else if (var_80 != 0)
    (*var_80)->j_operator delete()

char* var_c0
char* x21 = var_c0
char* var_b8
int32_t x19_1

if (var_b8 - x21 != 0x78)
    x19_1 = 0
    
    if (x21 != 0)
    label_caa9c4:
        char* x8_10 = var_b8
        char* x0_12
        
        if (x8_10 == x21)
            x0_12 = x21
        else
            char* x20_1 = x8_10
            
            do
                x20_1 = &x20_1[-0x18]
                
                if ((zx.d(*x20_1) & 1) != 0)
                    operator delete(*(x8_10 - 8))
                
                x8_10 = x20_1
            while (x21 != x20_1)
            
            x0_12 = var_c0
        
        char* var_b8_1 = x21
        operator delete(x0_12)
    
label_caaa14:
    
    if (*(x27 + 0x28) == x8)
        return zx.q(x19_1)
else
    uint64_t x10_1 = zx.q(*x21)
    uint64_t x8_6 = *(x21 + 8)
    int32_t x9_1 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_1 == 0 ? x10_2 : x8_6
    
    if (x11_1 != 7)
        goto label_caa8ec
    
    char x22_1
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x21, 0, -ffffffffffffffff, "argon2d") == 0)
        x22_1 = 0
    else
        x21 = var_c0
        uint64_t x10_3 = zx.q(*x21)
        x8_6 = *(x21 + 8)
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_caa8ec:
        uint64_t x11_2
        
        if ((x9_1 & 0xff) == 0)
            x11_2 = x10_2
        else
            x11_2 = x8_6
        
        if (x11_2 != 7)
            goto label_caa930
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                x21, 0, -ffffffffffffffff, "argon2i") == 0)
            x22_1 = 1
        else
            x21 = var_c0
            uint64_t x10_4 = zx.q(*x21)
            x8_6 = *(x21 + 8)
            x9_1 = x10_4.d & 1
            x10_2 = x10_4 u>> 1
        label_caa930:
            uint64_t x8_7
            
            if ((x9_1 & 0xff) == 0)
                x8_7 = x10_2
            else
                x8_7 = x8_6
            
            if (x8_7 != 8)
                goto label_caa9b8
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x21, 0, -ffffffffffffffff, "argon2id") != 0)
                goto label_caa9b8
            
            x22_1 = 2
    
    uint64_t x8_8 = zx.q(var_c0[0x18])
    uint64_t x8_9
    
    if ((x8_8.d & 1) == 0)
        x8_9 = x8_8 u>> 1
    else
        x8_9 = *(var_c0 + 0x20)
    
    if (x8_9 != 4)
    label_caa9b8:
        x19_1 = 0
    label_caa9bc:
        x21 = var_c0
        
        if (x21 == 0)
            goto label_caaa14
        
        goto label_caa9c4
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_c0[0x18], 0, -ffffffffffffffff, "v=19") != 0)
        goto label_caa9b8
    
    var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
    char var_98_1 = 0x2c
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const* var_80_1 = &var_a0
    Botan::split_on_pred(&var_c0[0x30], &var_a0)
    
    if (&var_a0 == var_80_1)
        (*var_80_1)->vFunc_4()
    else if (var_80_1 != 0)
        (*var_80_1)->j_operator delete()
    
    void* var_d8
    void* x21_1 = var_d8
    char* var_d0
    
    if (var_d0 - x21_1 != 0x48)
        x19_1 = 0
    label_cab06c:
        
        if (x21_1 == 0)
            goto label_caa9bc
        
        char* x8_46 = var_d0
        void* x0_57
        
        if (x8_46 == x21_1)
            x0_57 = x21_1
        else
            char* x20_2 = x8_46
            
            do
                x20_2 = &x20_2[-0x18]
                
                if ((zx.d(*x20_2) & 1) != 0)
                    operator delete(*(x8_46 - 8))
                
                x8_46 = x20_2
            while (x21_1 != x20_2)
            
            x0_57 = var_d8
        
        void* var_d0_1 = x21_1
        operator delete(x0_57)
        goto label_caa9bc
    
    uint64_t var_120_1
    uint64_t var_118_1
    uint64_t var_110_1
    char var_f0
    
    if (x21_1 != var_d0)
        __builtin_memset(&var_120_1, 0, 0x18)
        
        while (true)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_f0)
            var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
            var_98_1 = 0x3d
            struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                * const* var_80_2 = &var_a0
            Botan::split_on_pred(&var_f0, &var_a0)
            
            if (&var_a0 == var_80_2)
                (*var_80_2)->vFunc_4()
            else if (var_80_2 != 0)
                (*var_80_2)->j_operator delete()
            
            char* var_108
            char* x25_1 = var_108
            char* var_100
            int32_t x22_2
            
            if (var_100 - x25_1 != 0x30)
                x22_2 = 1
                
                if (x25_1 != 0)
                label_caac1c:
                    char* x8_26 = var_100
                    char* x0_30
                    
                    if (x8_26 == x25_1)
                        x0_30 = x25_1
                    else
                        char* x28_1 = x8_26
                        
                        do
                            x28_1 = &x28_1[-0x18]
                            
                            if ((zx.d(*x28_1) & 1) != 0)
                                operator delete(*(x8_26 - 8))
                            
                            x8_26 = x28_1
                        while (x25_1 != x28_1)
                        
                        x0_30 = var_108
                    
                    var_100 = x25_1
                    operator delete(x0_30)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_a0)
                int32_t x0_21 = Botan::to_u32bit(&var_108[0x18])
                uint64_t x10_6 = zx.q(var_a0.b)
                uint64_t x8_23 = var_98_1.q
                uint64_t x25_2 = zx.q(x0_21)
                int32_t x9_5 = x10_6.d & 1
                uint64_t x10_7 = x10_6 u>> 1
                uint64_t x11_3
                
                x11_3 = x9_5 == 0 ? x10_7 : x8_23
                
                if (x11_3 != 1)
                    goto label_caab88
                
                void* var_90
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_a0, 0, -ffffffffffffffff, 0x771585) == 0)
                    var_110_1 = x25_2
                label_caac9c:
                    x22_2 = 0
                    
                    if ((zx.d(var_a0.b) & 1) != 0)
                        operator delete(var_90)
                else
                    uint64_t x10_8 = zx.q(var_a0.b)
                    x8_23 = var_98_1.q
                    x9_5 = x10_8.d & 1
                    x10_7 = x10_8 u>> 1
                label_caab88:
                    uint64_t x11_4
                    
                    if ((x9_5 & 0xff) == 0)
                        x11_4 = x10_7
                    else
                        x11_4 = x8_23
                    
                    if (x11_4 == 1)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_a0, 0, -ffffffffffffffff, &data_72d864) == 0)
                            var_118_1 = x25_2
                            goto label_caac9c
                        
                        uint64_t x10_9 = zx.q(var_a0.b)
                        x8_23 = var_98_1.q
                        x9_5 = x10_9.d & 1
                        x10_7 = x10_9 u>> 1
                    
                    uint64_t x8_24
                    
                    if ((x9_5 & 0xff) == 0)
                        x8_24 = x10_7
                    else
                        x8_24 = x8_23
                    
                    int32_t x0_27
                    
                    if (x8_24 == 1)
                        x0_27 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_a0, 0, -ffffffffffffffff, &data_774d4b)
                    
                    if (x8_24 == 1 && x0_27 == 0)
                        var_120_1 = x25_2
                        goto label_caac9c
                    
                    x22_2 = 1
                    
                    if ((zx.d(var_a0.b) & 1) != 0)
                        operator delete(var_90)
                x25_1 = var_108
                
                if (x25_1 != 0)
                    goto label_caac1c
            
            void* var_e0
            
            if ((zx.d(var_f0) & 1) != 0)
                operator delete(var_e0)
            
            if (x22_2 != 0)
                x19_1 = 0
                break
            
            x21_1 += 0x18
            
            if (x21_1 == var_d0)
                goto label_caacc4
        
        goto label_cab068
    
    __builtin_memset(&var_120_1, 0, 0x18)
label_caacc4:
    uint64_t x8_29 = zx.q(var_c0[0x48])
    uint64_t x9_7
    
    if ((x8_29.d & 1) != 0)
        x9_7 = *(var_c0 + 0x50)
    else
        x9_7 = x8_29 u>> 1
    
    int64_t x10_12
    
    if ((x9_7 & 3) == 0)
        x10_12 = 0
    else
        x10_12 = 4 - (x9_7 & 3)
    
    size_t x22_3 = ((x10_12 + x9_7) * 3) u>> 2
    __builtin_memset(&var_a0, 0, 0x18)
    uint8_t* x21_2
    void* x25_3
    
    if (x22_3 == 0)
        x25_3 = nullptr
        x21_2 = nullptr
    else
        uint8_t* x0_33 = operator new(x22_3)
        x25_3 = &x0_33[x22_3]
        x21_2 = x0_33
        var_a0 = x0_33
        void* var_90_1 = x25_3
        memset(x0_33, 0, x22_3)
        var_98_1.q = x25_3
        x8_29 = zx.q(var_c0[0x48])
    
    int32_t x9_10 = x8_29.d & 1
    void* x1_5
    
    if (x9_10 != 0)
        x1_5 = *(var_c0 + 0x58)
    else
        x1_5 = &var_c0[0x49]
    
    uint64_t x2_1
    
    if (x9_10 == 0)
        x2_1 = zx.q(x8_29.d u>> 1)
    else
        x2_1 = *(var_c0 + 0x50)
    
    int64_t x0_35 = Botan::base64_decode(x21_2, x1_5, x2_1, false)
    size_t x22_4 = x25_3 - x21_2
    
    if (x0_35 u<= x22_4)
        if (x0_35 u< x22_4)
            var_98_1.q = &x21_2[x0_35]
        
        goto label_caae18
    
    if (x0_35 == x22_4)
        var_98_1.q = x25_3
    label_caae18:
        uint64_t x8_34 = zx.q(var_c0[0x60])
        uint64_t x9_11
        
        if ((x8_34.d & 1) != 0)
            x9_11 = *(var_c0 + 0x68)
        else
            x9_11 = x8_34 u>> 1
        
        int64_t x10_16
        
        if ((x9_11 & 3) == 0)
            x10_16 = 0
        else
            x10_16 = 4 - (x9_11 & 3)
        
        size_t x22_5 = ((x10_16 + x9_11) * 3) u>> 2
        __builtin_memset(&var_f0, 0, 0x18)
        uint8_t* x21_3
        void* x26_3
        
        if (x22_5 == 0)
            x26_3 = nullptr
            x21_3 = nullptr
        else
            uint8_t* x0_42 = operator new(x22_5)
            x26_3 = &x0_42[x22_5]
            x21_3 = x0_42
            var_f0.q = x0_42
            void* var_e0_1 = x26_3
            memset(x0_42, 0, x22_5)
            void* var_e8_1 = x26_3
            x8_34 = zx.q(var_c0[0x60])
        
        int32_t x9_14 = x8_34.d & 1
        void* x1_7
        
        if (x9_14 != 0)
            x1_7 = *(var_c0 + 0x70)
        else
            x1_7 = &var_c0[0x61]
        
        uint64_t x2_5
        
        if (x9_14 == 0)
            x2_5 = zx.q(x8_34.d u>> 1)
        else
            x2_5 = *(var_c0 + 0x68)
        
        int64_t x0_44 = Botan::base64_decode(x21_3, x1_7, x2_5, false)
        size_t x23_7 = x26_3 - x21_3
        void* x22_6
        
        if (x0_44 u<= x23_7)
            if (x0_44 u>= x23_7)
                goto label_caaf08
            
            x26_3 = &x21_3[x0_44]
        label_caaf04:
            void* var_e8_2 = x26_3
        label_caaf08:
            x22_6 = x21_3
        label_caaf5c:
            void* x21_4 = x26_3 - x22_6
            
            if (x21_4 u< 4)
                x19_1 = 0
            label_cab048:
                
                if (x22_6 != 0)
                    void* var_e8_4 = x22_6
                    operator delete(x22_6)
                
                struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                    * const x0_55 = var_a0
                
                if (x0_55 != 0)
                    var_98_1.q = x0_55
                    operator delete(x0_55)
                
            label_cab068:
                x21_1 = var_d8
                goto label_cab06c
            
            int64_t var_108_1
            __builtin_memset(&var_108_1, 0, 0x18)
            
            if ((x21_4 & 0xffffffff80000000) == 0)
                void* x0_51 = operator new(x21_4)
                void* x23_8 = x0_51 + x21_4
                void* var_f8_1 = x23_8
                memset(x0_51, 0, x21_4)
                uint8_t* x4_8 = var_a0
                uint64_t var_140_1 = var_110_1
                uint64_t var_138_1 = var_118_1
                uint64_t var_148_1 = var_120_1
                int64_t var_160_1 = 0
                int64_t var_158_1 = 0
                char var_150_1 = x22_1
                Botan::argon2(x0_51, x21_4, arg1, arg2, x4_8, var_98_1.q - x4_8, nullptr, 0)
                x22_6 = var_f0.q
                char var_a4_1 = 0
                void* i_1 = x23_8 - x0_51
                
                if (x23_8 != x0_51)
                    void* x9_16 = x0_51
                    void* x10_18 = x22_6
                    void* i
                    
                    do
                        char x11_7 = *x9_16
                        x9_16 += 1
                        char x12_1 = *x10_18
                        x10_18 += 1
                        i = i_1
                        i_1 -= 1
                        var_a4_1 |= x12_1 ^ x11_7
                    while (i != 1)
                
                uint32_t x8_43 = zx.d(var_a4_1)
                x19_1 = sx.d((x8_43.b - 1) & (not.d(x8_43)).b) s< 0 ? 1 : 0
                
                if (x0_51 != 0)
                    void* var_100_2 = x0_51
                    operator delete(x0_51)
                    x22_6 = var_f0.q
                
                goto label_cab048
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else
            if (x0_44 == x23_7)
                goto label_caaf04
            
            if ((x0_44 & 0xffffffff80000000) == 0)
                int64_t x8_36 = x23_7 << 1
                int64_t x8_37
                
                x8_37 = x8_36 u< x0_44 ? x0_44 : x8_36
                
                int64_t x26_4
                
                x26_4 = x23_7 u< 0x3fffffffffffffff ? x8_37 : 0x7fffffffffffffff
                
                if (x26_4 == 0)
                    x22_6 = nullptr
                else
                    x22_6 = operator new(x26_4)
                
                x26_3 = x22_6 + x0_44
                memset(x22_6 + x23_7, 0, x0_44 - x23_7)
                
                if (x23_7 s>= 1)
                    memcpy(x22_6, x21_3, x23_7)
                
                var_f0.q = x22_6
                void* var_e0_2 = x22_6 + x26_4
                
                if (x21_3 != 0)
                    operator delete(x21_3)
                    x22_6 = var_f0.q
                
                goto label_caaf5c
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if ((x0_35 & 0xffffffff80000000) == 0)
            int64_t x8_31 = x22_4 << 1
            int64_t x8_32
            
            x8_32 = x8_31 u< x0_35 ? x0_35 : x8_31
            
            int64_t x26_1
            
            x26_1 = x22_4 u< 0x3fffffffffffffff ? x8_32 : 0x7fffffffffffffff
            
            struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                * x25_4
            
            if (x26_1 == 0)
                x25_4 = nullptr
            else
                x25_4 = operator new(x26_1)
            
            memset(x25_4 + x22_4, 0, x0_35 - x22_4)
            
            if (x22_4 s>= 1)
                memcpy(x25_4, x21_2, x22_4)
            
            var_a0 = x25_4
            var_98_1.q = x25_4 + x0_35
            void* var_90_2 = x25_4 + x26_1
            
            if (x21_2 != 0)
                operator delete(x21_2)
            
            goto label_caae18
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
