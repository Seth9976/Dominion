// 函数: _ZN5Botan11Cipher_Mode6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_10Cipher_DirES9_
// 地址: 0xdae72c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x20 = arg2
int16_t var_170 = 0
Botan::StreamCipher::create(arg1, &var_170)
void* var_160

if ((zx.d(var_170.b) & 1) != 0)
    operator delete(var_160)

void* var_188
void* x23 = var_188
void** result
int64_t* entry_x8

if (x23 == 0)
    var_170 = 0
    result = Botan::AEAD_Mode::create(arg1, zx.q(x20), &var_170)
    
    if ((zx.d(var_170.b) & 1) != 0)
        result = operator delete(var_160)
    
    void* x8_4 = var_188
    
    if (x8_4 == 0)
        void** result_1
        char var_1a0
        char* var_190
        uint64_t var_180
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
                
                if ((zx.d(var_188.b) & 1) != 0)
                    result = operator delete(var_178)
                
                if (result_1 == 0)
                    *entry_x8 = 0
                else
                    uint64_t x8_11 = zx.q(var_158)
                    uint64_t var_150
                    uint64_t x8_12
                    
                    if ((x8_11.d & 1) == 0)
                        x8_12 = x8_11 u>> 1
                    else
                        x8_12 = var_150
                    
                    if (x8_12 != 3)
                    label_dae8f4:
                        uint64_t x10_1 = zx.q(var_158)
                        uint64_t x8_13 = var_150
                        int32_t x9_3 = x10_1.d & 1
                        uint64_t x10_2 = x10_1 u>> 1
                        uint64_t x11_2
                        
                        x11_2 = x9_3 == 0 ? x10_2 : x8_13
                        
                        if (x11_2 != 3)
                            goto label_dae944
                        
                        struct vtable_for_Botan::CFB_Decryption* const x8_45
                        Botan::BlockCipher* x20_2
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_158, 0, -ffffffffffffffff, 0x75ce3e) == 0)
                            if (x20 == 0)
                                Botan::BlockCipher* x0_55 = operator new(0x40)
                                x20_2 = x0_55
                                result_1 = nullptr
                                Botan::XTS_Mode::XTS_Mode(x0_55)
                                x8_45 = _vtable_for_Botan::XTS_Encryption
                            else
                                Botan::BlockCipher* x0_42 = operator new(0x40)
                                x20_2 = x0_42
                                result_1 = nullptr
                                Botan::XTS_Mode::XTS_Mode(x0_42)
                                x8_45 = _vtable_for_Botan::XTS_Decryption
                            
                            *x20_2 = x8_45 + 0x10
                            *entry_x8 = x20_2
                        else
                            uint64_t x10_3 = zx.q(var_158)
                            x8_13 = var_150
                            x9_3 = x10_3.d & 1
                            x10_2 = x10_3 u>> 1
                        label_dae944:
                            uint64_t x8_14
                            
                            if ((x9_3 & 0xff) == 0)
                                x8_14 = x10_2
                            else
                                x8_14 = x8_13
                            
                            int32_t x0_18
                            
                            if (x8_14 == 3)
                                x0_18 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_158, 0, -ffffffffffffffff, 0x720b59)
                            
                            if (x8_14 == 3 && x0_18 == 0)
                                (*(*result_1 + 0x30))()
                                
                                if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u>= 2)
                                    Botan::to_u32bit(var_140 + 0x18)
                                
                                if (x20 == 0)
                                    Botan::BlockCipher* x0_56 = operator new(0x58)
                                    uint64_t result_4 = result_1
                                    x20_2 = x0_56
                                    result_1 = nullptr
                                    Botan::CFB_Mode::CFB_Mode(x0_56, result_4)
                                    x8_45 = _vtable_for_Botan::CFB_Encryption
                                else
                                    Botan::BlockCipher* x0_54 = operator new(0x58)
                                    void** result_3 = result_1
                                    x20_2 = x0_54
                                    result_1 = nullptr
                                    Botan::CFB_Mode::CFB_Mode(x0_54, result_3)
                                    x8_45 = _vtable_for_Botan::CFB_Decryption
                                
                                *x20_2 = x8_45 + 0x10
                                *entry_x8 = x20_2
                            else
                                *entry_x8 = 0
                    else
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_158, 0, -ffffffffffffffff, 0x729965) != 0)
                            goto label_dae8f4
                        
                        __builtin_strcpy(&var_1a0, "\nPKCS7")
                        
                        if (((var_138 - var_140) s>> 3) * -0x5555555555555555 u<= 1)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_188)
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_188)
                        
                        if ((zx.d(var_1a0) & 1) != 0)
                            operator delete(var_190)
                        
                        uint64_t x8_50 = zx.q(var_188.b)
                        uint64_t x8_51
                        
                        if ((x8_50.d & 1) == 0)
                            x8_51 = x8_50 u>> 1
                        else
                            x8_51 = var_180
                        
                        int32_t x0_50
                        
                        if (x8_51 == 3)
                            x0_50 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_188, 0, -ffffffffffffffff, 0x79ee80)
                        
                        if (x8_51 == 3 && x0_50 == 0)
                            uint32_t x8_62
                            struct vtable_for_Botan::CTS_Decryption* const x9_26
                            Botan::BlockCipher* x20_5
                            
                            if (x20 == 0)
                                Botan::BlockCipher* x0_65 = operator new(0x38)
                                Botan::BlockCipherModePaddingMethod* result_7 = result_1
                                x20_5 = x0_65
                                result_1 = nullptr
                                Botan::CBC_Mode::CBC_Mode(x0_65, result_7)
                                x8_62 = zx.d(var_188.b)
                                x9_26 = _vtable_for_Botan::CTS_Encryption
                            else
                                Botan::BlockCipher* x0_64 = operator new(0x50)
                                void** result_6 = result_1
                                x20_5 = x0_64
                                result_1 = nullptr
                                Botan::CBC_Decryption::CBC_Decryption(x0_64, result_6)
                                x8_62 = zx.d(var_188.b)
                                x9_26 = _vtable_for_Botan::CTS_Decryption
                            
                            *x20_5 = x9_26 + 0x10
                            *entry_x8 = x20_5
                            
                            if ((x8_62 & 1) != 0)
                                operator delete(var_178)
                        else
                            int64_t x0_52 = Botan::get_bc_pad(&var_188)
                            
                            if (x0_52 != 0)
                                Botan::BlockCipher* x23_1
                                
                                if (x20 == 0)
                                    Botan::BlockCipher* x0_57 = operator new(0x38)
                                    Botan::BlockCipherModePaddingMethod* result_5 = result_1
                                    x23_1 = x0_57
                                    result_1 = nullptr
                                    Botan::CBC_Mode::CBC_Mode(x0_57, result_5)
                                    *x23_1 = _vtable_for_Botan::CBC_Encryption + 0x10
                                else
                                    Botan::BlockCipher* x0_53 = operator new(0x50)
                                    void** result_2 = result_1
                                    x23_1 = x0_53
                                    result_1 = nullptr
                                    Botan::CBC_Decryption::CBC_Decryption(x0_53, result_2)
                                
                                *entry_x8 = x23_1
                            
                            if ((zx.d(var_188.b) & 1) != 0)
                                operator delete(var_178)
                            
                            if (x0_52 == 0)
                                goto label_dae8f4
                    
                    result = result_1
                    int64_t var_1b8 = 0
                    
                    if (result != 0)
                        result = (*(*result + 8))()
            
            void* x19_3 = var_128
            
            if (x19_3 != 0)
                char* var_120
                char* x8_57 = var_120
                void* x0_60
                
                if (x8_57 == x19_3)
                    x0_60 = x19_3
                else
                    char* x20_3 = x8_57
                    
                    do
                        x20_3 = &x20_3[-0x18]
                        
                        if ((zx.d(*x20_3) & 1) != 0)
                            operator delete(*(x8_57 - 8))
                        
                        x8_57 = x20_3
                    while (x19_3 != x20_3)
                    
                    x0_60 = var_128
                
                void* var_120_1 = x19_3
                result = operator delete(x0_60)
            
            if (var_140 != 0)
                char* x8_58 = var_138
                void* x0_62
                
                if (x8_58 == var_140)
                    x0_62 = var_140
                else
                    char* x20_4 = x8_58
                    
                    do
                        x20_4 = &x20_4[-0x18]
                        
                        if ((zx.d(*x20_4) & 1) != 0)
                            operator delete(*(x8_58 - 8))
                        
                        x8_58 = x20_4
                    while (var_140 != x20_4)
                    
                    x0_62 = var_140
                
                void* var_138_1 = var_140
                result = operator delete(x0_62)
            
            void* var_148
            
            if ((zx.d(var_158) & 1) != 0)
                result = operator delete(var_148)
            
            if ((zx.d(var_170.b) & 1) != 0)
                result = operator delete(var_160)
        else
            char var_168_1 = 0x2f
            var_170.q = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
            int16_t* var_150_1 = &var_170
            Botan::split_on_pred(arg1, &var_170)
            
            if (&var_170 == var_150_1)
                (*(*var_150_1 + 0x20))()
            else if (var_150_1 != 0)
                (*(*var_150_1 + 0x28))()
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_1a0)
            result = Botan::parse_algorithm_name(var_188 + 0x18)
            char* var_1b0
            char* x26_1 = var_1b0
            
            if (result_1 == x26_1)
                *entry_x8 = 0
                
                if (result_1 != 0)
                    result = operator delete(result_1)
            else
                var_170.q = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                int64_t (* var_100)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                int64_t (** var_208_1)() = &var_100
                std::__ndk1::ios_base::init(&var_100)
                int64_t var_78_1 = 0
                int32_t var_70_1 = 0xffffffff
                var_170.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
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
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_23 =
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    &var_170, &var_1d0, 1)
                uint64_t x8_19 = zx.q(var_1a0)
                int32_t temp0_1 = x8_19.d & 1
                char* x1_8
                
                if (temp0_1 == 0)
                    x1_8 = &var_1a0 | 1
                else
                    x1_8 = var_190
                
                uint64_t x2_2
                uint64_t var_198
                
                if (temp0_1 == 0)
                    x2_2 = x8_19 u>> 1
                else
                    x2_2 = var_198
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_23, 
                    x1_8, x2_2)
                int64_t x8_22 = ((x26_1 - result_1) s>> 3) * -0x5555555555555555
                
                if (x8_22 u>= 2)
                    int64_t i_2 = x8_22 - 1
                    void* x27_1 = &result_1[5]
                    int64_t i
                    
                    do
                        var_1d0[0] = 0x2c
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_25 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_170, &var_1d0, 1)
                        uint64_t x8_23 = zx.q(*(x27_1 - 0x10))
                        int32_t temp2_1 = x8_23.d & 1
                        void* x1_10
                        
                        if (temp2_1 == 0)
                            x1_10 = x27_1 - 0xf
                        else
                            x1_10 = *x27_1
                        
                        uint64_t x2_3
                        
                        if (temp2_1 == 0)
                            x2_3 = x8_23 u>> 1
                        else
                            x2_3 = *(x27_1 - 8)
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            x0_25, x1_10, x2_3)
                        i = i_2
                        i_2 -= 1
                        x27_1 += 0x18
                    while (i != 1)
                
                if (((var_180 - var_188) s>> 3) * -0x5555555555555555 u>= 3)
                    int64_t fp_1 = 0
                    int64_t i_1 = 2
                    
                    do
                        var_1d0[0] = 0x2c
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_27 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_170, &var_1d0, 1)
                        void* x8_29 = var_188 + fp_1
                        uint64_t x9_9 = zx.q(*(x8_29 + 0x30))
                        int32_t temp3_1 = x9_9.d & 1
                        char* x1_12
                        
                        if (temp3_1 == 0)
                            x1_12 = x8_29 + 0x31
                        else
                            x1_12 = *(x8_29 + 0x40)
                        
                        uint64_t x2_4
                        
                        if (temp3_1 == 0)
                            x2_4 = x9_9 u>> 1
                        else
                            x2_4 = *(x8_29 + 0x38)
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            x0_27, x1_12, x2_4)
                        i_1 += 1
                        fp_1 += 0x18
                    while (i_1 u< ((var_180 - var_188) s>> 3) * -0x5555555555555555)
                
                var_1d0[0] = 0x29
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    &var_170, &var_1d0, 1)
                std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                result_1[1]
                void* x2_5
                
                if ((zx.d(*result_1) & 1) != 0)
                    x2_5 = result_1[2]
                else
                    x2_5 = result_1 + 1
                
                char var_1e8
                int128_t* x0_30
                int128_t v0_1
                x0_30, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                    &var_1e8, nullptr, x2_5)
                void* x8_36 = x0_30[1].q
                var_1d0 = *x0_30
                __builtin_memset(x0_30, 0, 0x18)
                void* var_1d8
                
                if ((zx.d(var_1e8) & 1) != 0)
                    operator delete(var_1d8)
                Botan::Cipher_Mode::create(&var_1d0, zx.q(x20), arg3)
                
                if ((zx.d(var_1d0[0]) & 1) != 0)
                    operator delete(x8_36)
                
                uint32_t x10_8 = zx.d(var_128.b)
                var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                var_170.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                var_168_1.q = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x10
                void* var_118
                
                if ((x10_8 & 1) != 0)
                    operator delete(var_118)
                std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                char* x19_1 = x26_1
                
                do
                    x19_1 = &x19_1[-0x18]
                    
                    if ((zx.d(*x19_1) & 1) != 0)
                        operator delete(*(x26_1 - 8))
                    
                    x26_1 = x19_1
                while (result_1 != x19_1)
                
                result = operator delete(result_1)
            
            if ((zx.d(var_1a0) & 1) != 0)
                result = operator delete(var_190)
            
            void* x19_2 = var_188
            
            if (x19_2 != 0)
                uint64_t x8_43 = var_180
                void* x0_40
                
                if (x8_43 == x19_2)
                    x0_40 = x19_2
                    void* var_180_2 = x19_2
                else
                    uint64_t x20_1 = x8_43
                    
                    do
                        x20_1 -= 0x18
                        
                        if ((zx.d(*x20_1) & 1) != 0)
                            operator delete(*(x8_43 - 8))
                        
                        x8_43 = x20_1
                    while (x19_2 != x20_1)
                    
                    x0_40 = var_188
                    void* var_180_1 = x19_2
                
                result = operator delete(x0_40)
    else
        *entry_x8 = x8_4
else
    result = operator new(0x10)
    *entry_x8 = result
    *result = _vtable_for_Botan::Stream_Cipher_Mode + 0x10
    result[1] = x23

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
