// 函数: _ZN5Botan9AEAD_Mode6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_10Cipher_DirES9_
// 地址: 0xc9eef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x24 + 0x28)
int32_t x20 = arg2
uint64_t x9_1 = zx.q(*arg1)
uint64_t x9_2

if ((x9_1.d & 1) == 0)
    x9_2 = x9_1 u>> 1
else
    x9_2 = *(arg1 + 8)

int32_t x0_1

if (x9_2 == 0x10)
    x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "ChaCha20Poly1305")

int64_t* result
int64_t* entry_x8

if (x9_2 == 0x10 && x0_1 == 0)
    void** x0_45 = operator new(0x40)
    struct vtable_for_Botan::ChaCha20Poly1305_Decryption* const x8_38
    
    if (x20 == 0)
        result = Botan::ChaCha20Poly1305_Mode::ChaCha20Poly1305_Mode()
        x8_38 = _vtable_for_Botan::ChaCha20Poly1305_Encryption
    else
        result = Botan::ChaCha20Poly1305_Mode::ChaCha20Poly1305_Mode()
        x8_38 = _vtable_for_Botan::ChaCha20Poly1305_Decryption
    
    *x0_45 = x8_38 + 0x10
    *entry_x8 = x0_45
else
    int64_t* result_1
    char var_188
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const var_170
    void* var_128
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
            arg1.b, 0x2f) == -1)
        char var_200
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_200)
        result = Botan::SCAN_Name::SCAN_Name(&var_170)
        void* var_1f0
        
        if ((zx.d(var_200) & 1) != 0)
            result = operator delete(var_1f0)
        char var_158
        void* var_140
        char* var_138
        
        if (var_138 == var_140)
            *entry_x8 = 0
        else
            Botan::SCAN_Name::arg(&var_170)
            result = Botan::BlockCipher::create(&var_188, arg3)
            void* var_178
            
            if ((zx.d(var_188) & 1) != 0)
                result = operator delete(var_178)
            
            if (result_1 == 0)
                *entry_x8 = 0
            else
                uint64_t x10_1 = zx.q(var_158)
                uint64_t var_150
                uint64_t x8_6 = var_150
                int32_t x9_4 = x10_1.d & 1
                uint64_t x10_2 = x10_1 u>> 1
                uint64_t x12_1
                
                x12_1 = x9_4 == 0 ? x10_2 : x8_6
                
                if (x12_1 != 3)
                    goto label_c9f090
                
                struct vtable_for_Botan::SIV_Decryption* const x8_47
                Botan::BlockCipher* x20_3
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_158, 0, -ffffffffffffffff, 0x79e40f) == 0)
                    int32_t x22_2
                    
                    if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u< 2)
                        x22_2 = 0x10
                    else
                        x22_2 = Botan::to_u32bit(var_140 + 0x18)
                        
                        if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u>= 3)
                            Botan::to_u32bit(var_140 + 0x30)
                    
                    uint64_t x22_3 = zx.q(x22_2)
                    
                    if (x20 == 0)
                        Botan::BlockCipher* x0_64 = operator new(0x68)
                        uint64_t result_5 = result_1
                        x20_3 = x0_64
                        result_1 = nullptr
                        Botan::CCM_Mode::CCM_Mode(x0_64, result_5, x22_3)
                        x8_47 = _vtable_for_Botan::CCM_Encryption
                    else
                        Botan::BlockCipher* x0_61 = operator new(0x68)
                        uint64_t result_3 = result_1
                        x20_3 = x0_61
                        result_1 = nullptr
                        Botan::CCM_Mode::CCM_Mode(x0_61, result_3, x22_3)
                        x8_47 = _vtable_for_Botan::CCM_Decryption
                    
                    *x20_3 = x8_47 + 0x10
                    *entry_x8 = x20_3
                else
                    uint64_t x10_3 = zx.q(var_158)
                    x8_6 = var_150
                    x9_4 = x10_3.d & 1
                    x10_2 = x10_3 u>> 1
                label_c9f090:
                    uint64_t x11_1
                    
                    if ((x9_4 & 0xff) == 0)
                        x11_1 = x10_2
                    else
                        x11_1 = x8_6
                    
                    if (x11_1 != 3)
                        goto label_c9f0d0
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_158, 0, -ffffffffffffffff, 0x7509b9) == 0)
                        if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u>= 2)
                            Botan::to_u32bit(var_140 + 0x18)
                        
                        if (x20 == 0)
                            Botan::BlockCipher* x0_66 = operator new(0x50)
                            uint64_t result_7 = result_1
                            x20_3 = x0_66
                            result_1 = nullptr
                            Botan::GCM_Mode::GCM_Mode(x0_66, result_7)
                            x8_47 = _vtable_for_Botan::GCM_Encryption
                        else
                            Botan::BlockCipher* x0_63 = operator new(0x50)
                            uint64_t result_4 = result_1
                            x20_3 = x0_63
                            result_1 = nullptr
                            Botan::GCM_Mode::GCM_Mode(x0_63, result_4)
                            x8_47 = _vtable_for_Botan::GCM_Decryption
                        
                        *x20_3 = x8_47 + 0x10
                        *entry_x8 = x20_3
                    else
                        uint64_t x10_4 = zx.q(var_158)
                        x8_6 = var_150
                        x9_4 = x10_4.d & 1
                        x10_2 = x10_4 u>> 1
                    label_c9f0d0:
                        uint64_t x11_2
                        
                        if ((x9_4 & 0xff) == 0)
                            x11_2 = x10_2
                        else
                            x11_2 = x8_6
                        
                        if (x11_2 != 3)
                            goto label_c9f110
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_158, 0, -ffffffffffffffff, 0x75c5ff) == 0)
                            if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u>= 2)
                                Botan::to_u32bit(var_140 + 0x18)
                            
                            if (x20 == 0)
                                Botan::BlockCipher* x0_67 = operator new(0xc8)
                                uint64_t result_8 = result_1
                                x20_3 = x0_67
                                result_1 = nullptr
                                Botan::OCB_Mode::OCB_Mode(x0_67, result_8)
                                x8_47 = _vtable_for_Botan::OCB_Encryption
                            else
                                Botan::BlockCipher* x0_65 = operator new(0xc8)
                                uint64_t result_6 = result_1
                                x20_3 = x0_65
                                result_1 = nullptr
                                Botan::OCB_Mode::OCB_Mode(x0_65, result_6)
                                x8_47 = _vtable_for_Botan::OCB_Decryption
                            
                            *x20_3 = x8_47 + 0x10
                            *entry_x8 = x20_3
                        else
                            uint64_t x10_5 = zx.q(var_158)
                            x8_6 = var_150
                            x9_4 = x10_5.d & 1
                            x10_2 = x10_5 u>> 1
                        label_c9f110:
                            uint64_t x11_3
                            
                            if ((x9_4 & 0xff) == 0)
                                x11_3 = x10_2
                            else
                                x11_3 = x8_6
                            
                            if (x11_3 != 3)
                                goto label_c9f150
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_158, 0, -ffffffffffffffff, 0x749aea) == 0)
                                (*(*result_1 + 0x30))()
                                
                                if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u>= 2)
                                    Botan::to_u32bit(var_140 + 0x18)
                                
                                if (x20 == 0)
                                    Botan::BlockCipher* x0_68 = operator new(0x58)
                                    uint64_t result_9 = result_1
                                    x20_3 = x0_68
                                    result_1 = nullptr
                                    Botan::EAX_Mode::EAX_Mode(x0_68, result_9)
                                    x8_47 = _vtable_for_Botan::EAX_Encryption
                                else
                                    Botan::BlockCipher* x0_60 = operator new(0x58)
                                    int64_t* result_2 = result_1
                                    x20_3 = x0_60
                                    result_1 = nullptr
                                    Botan::EAX_Mode::EAX_Mode(x0_60, result_2)
                                    x8_47 = _vtable_for_Botan::EAX_Decryption
                                
                                *x20_3 = x8_47 + 0x10
                                *entry_x8 = x20_3
                            else
                                uint64_t x10_6 = zx.q(var_158)
                                x8_6 = var_150
                                x9_4 = x10_6.d & 1
                                x10_2 = x10_6 u>> 1
                            label_c9f150:
                                uint64_t x8_7
                                
                                if ((x9_4 & 0xff) == 0)
                                    x8_7 = x10_2
                                else
                                    x8_7 = x8_6
                                
                                int32_t x0_21
                                
                                if (x8_7 == 3)
                                    x0_21 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_158, 0, -ffffffffffffffff, 0x738f6e)
                                
                                if (x8_7 == 3 && x0_21 == 0)
                                    if (x20 == 0)
                                        Botan::BlockCipher* x0_69 = operator new(0x80)
                                        x20_3 = x0_69
                                        result_1 = nullptr
                                        Botan::SIV_Mode::SIV_Mode(x0_69)
                                        x8_47 = _vtable_for_Botan::SIV_Encryption
                                    else
                                        Botan::BlockCipher* x0_62 = operator new(0x80)
                                        x20_3 = x0_62
                                        result_1 = nullptr
                                        Botan::SIV_Mode::SIV_Mode(x0_62)
                                        x8_47 = _vtable_for_Botan::SIV_Decryption
                                    
                                    *x20_3 = x8_47 + 0x10
                                    *entry_x8 = x20_3
                                else
                                    *entry_x8 = 0
                result = result_1
                result_1 = nullptr
                
                if (result != 0)
                    result = (*(*result + 8))()
        
        void* x19_3 = var_128
        
        if (x19_3 != 0)
            char* var_120
            char* x8_51 = var_120
            void* x0_71
            
            if (x8_51 == x19_3)
                x0_71 = x19_3
            else
                char* x20_4 = x8_51
                
                do
                    x20_4 = &x20_4[-0x18]
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(x8_51 - 8))
                    
                    x8_51 = x20_4
                while (x19_3 != x20_4)
                
                x0_71 = var_128
            
            void* var_120_1 = x19_3
            result = operator delete(x0_71)
        
        if (var_140 != 0)
            char* x8_52 = var_138
            void* x0_73
            
            if (x8_52 == var_140)
                x0_73 = var_140
            else
                char* x20_5 = x8_52
                
                do
                    x20_5 = &x20_5[-0x18]
                    
                    if ((zx.d(*x20_5) & 1) != 0)
                        operator delete(*(x8_52 - 8))
                    
                    x8_52 = x20_5
                while (var_140 != x20_5)
                
                x0_73 = var_140
            
            void* var_138_1 = var_140
            result = operator delete(x0_73)
        
        void* var_148
        
        if ((zx.d(var_158) & 1) != 0)
            result = operator delete(var_148)
        void* var_160
        
        if ((zx.d(var_170.b) & 1) != 0)
            result = operator delete(var_160)
    else
        char var_168_1 = 0x2f
        var_170 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
        struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
            * const* var_150_1 = &var_170
        Botan::split_on_pred(arg1, &var_170)
        
        if (&var_170 == var_150_1)
            (*var_150_1)->vFunc_4()
        else if (var_150_1 != 0)
            (*var_150_1)->j_operator delete()
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &result_1)
        result = Botan::parse_algorithm_name(var_188.q + 0x18)
        char* var_1b0
        char* x25_1 = var_1b0
        char* var_1b8
        char* var_190
        char* var_180
        
        if (var_1b8 == x25_1)
            *entry_x8 = 0
            
            if (var_1b8 != 0)
                result = operator delete(var_1b8)
        else
            var_170 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            int64_t (* var_100)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            int64_t (** var_208_1)() = &var_100
            std::__ndk1::ios_base::init(&var_100)
            int64_t var_78_1 = 0
            int32_t var_70_1 = 0xffffffff
            var_170 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
            var_168_1.q = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x10
            __builtin_memset(&var_128, 0, 0x18)
            int32_t var_108_1 = 0x10
            char var_1d0[0x10]
            var_1d0[0] = 0x28
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_26 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_170, &var_1d0, 1)
            uint64_t x8_12 = zx.q(result_1.b)
            int32_t temp0_1 = x8_12.d & 1
            char* x1_6
            
            if (temp0_1 == 0)
                x1_6 = &result_1 | 1
            else
                x1_6 = var_190
            
            uint64_t x2_1
            uint64_t var_198
            
            if (temp0_1 == 0)
                x2_1 = x8_12 u>> 1
            else
                x2_1 = var_198
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_26, 
                x1_6, x2_1)
            int64_t x8_15 = ((x25_1 - var_1b8) s>> 3) * -0x5555555555555555
            
            if (x8_15 u>= 2)
                int64_t i_2 = x8_15 - 1
                void* x27_1 = &var_1b8[0x28]
                int64_t i
                
                do
                    var_1d0[0] = 0x2c
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_28 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_170, &var_1d0, 1)
                    uint64_t x8_16 = zx.q(*(x27_1 - 0x10))
                    int32_t temp2_1 = x8_16.d & 1
                    void* x1_8
                    
                    if (temp2_1 == 0)
                        x1_8 = x27_1 - 0xf
                    else
                        x1_8 = *x27_1
                    
                    uint64_t x2_2
                    
                    if (temp2_1 == 0)
                        x2_2 = x8_16 u>> 1
                    else
                        x2_2 = *(x27_1 - 8)
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        x0_28, x1_8, x2_2)
                    i = i_2
                    i_2 -= 1
                    x27_1 += 0x18
                while (i != 1)
            
            if (((var_180 - var_188.q) s>> 3) * -0x5555555555555555 u>= 3)
                int64_t x28_1 = 0
                int64_t i_1 = 2
                
                do
                    var_1d0[0] = 0x2c
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_30 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_170, &var_1d0, 1)
                    void* x8_22 = var_188.q + x28_1
                    uint64_t x9_10 = zx.q(*(x8_22 + 0x30))
                    int32_t temp3_1 = x9_10.d & 1
                    void* x1_10
                    
                    if (temp3_1 == 0)
                        x1_10 = x8_22 + 0x31
                    else
                        x1_10 = *(x8_22 + 0x40)
                    
                    uint64_t x2_3
                    
                    if (temp3_1 == 0)
                        x2_3 = x9_10 u>> 1
                    else
                        x2_3 = *(x8_22 + 0x38)
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        x0_30, x1_10, x2_3)
                    i_1 += 1
                    x28_1 += 0x18
                while (i_1 u< ((var_180 - var_188.q) s>> 3) * -0x5555555555555555)
            
            var_1d0[0] = 0x29
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
                &var_1d0, 1)
            std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
            *(var_1b8 + 8)
            void* x2_4
            
            if ((zx.d(*var_1b8) & 1) != 0)
                x2_4 = *(var_1b8 + 0x10)
            else
                x2_4 = &var_1b8[1]
            
            char var_1e8
            int128_t* x0_33
            int128_t v0_1
            x0_33, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_1e8, nullptr, x2_4)
            void* x8_29 = x0_33[1].q
            var_1d0 = *x0_33
            __builtin_memset(x0_33, 0, 0x18)
            void* var_1d8
            
            if ((zx.d(var_1e8) & 1) != 0)
                operator delete(var_1d8)
            
            var_1e8.w = 0
            Botan::AEAD_Mode::create(&var_1d0, zx.q(x20), &var_1e8)
            
            if ((zx.d(var_1e8) & 1) != 0)
                operator delete(var_1d8)
            
            if ((zx.d(var_1d0[0]) & 1) != 0)
                operator delete(x8_29)
            
            var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            uint32_t x10_11 = zx.d(var_128.b)
            var_170 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            var_168_1.q = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x10
            void* var_118
            
            if ((x10_11 & 1) != 0)
                operator delete(var_118)
            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
            std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
            
            if (var_1b8 != x25_1)
                char* x19_1 = x25_1
                
                do
                    x19_1 = &x19_1[-0x18]
                    
                    if ((zx.d(*x19_1) & 1) != 0)
                        operator delete(*(x25_1 - 8))
                    
                    x25_1 = x19_1
                while (var_1b8 != x19_1)
            
            result = operator delete(var_1b8)
        
        if ((zx.d(result_1.b) & 1) != 0)
            result = operator delete(var_190)
        
        void* x19_2 = var_188.q
        
        if (x19_2 != 0)
            char* x8_37 = var_180
            void* x0_44
            
            if (x8_37 == x19_2)
                x0_44 = x19_2
                void* var_180_2 = x19_2
            else
                char* x20_2 = x8_37
                
                do
                    x20_2 = &x20_2[-0x18]
                    
                    if ((zx.d(*x20_2) & 1) != 0)
                        operator delete(*(x8_37 - 8))
                    
                    x8_37 = x20_2
                while (x19_2 != x20_2)
                
                x0_44 = var_188.q
                void* var_180_1 = x19_2
            
            result = operator delete(x0_44)

if (*(x24 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
