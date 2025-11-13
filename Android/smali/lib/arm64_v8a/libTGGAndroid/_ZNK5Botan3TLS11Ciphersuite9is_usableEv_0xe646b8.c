// 函数: _ZNK5Botan3TLS11Ciphersuite9is_usableEv
// 地址: 0xe646b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
void* entry_x0
int64_t result

if (*(entry_x0 + 0x30) == 0)
label_e64dd8:
    result = 0
label_e64de4:
    
    if (*(x24 + 0x28) == x8)
        return result
else
    Botan::TLS::kdf_algo_to_string(zx.q(*(entry_x0 + 0x18)))
    char var_98
    Botan::HashFunction::providers(&var_98)
    void* var_80
    char* x20_1 = var_80
    char* var_78
    char* x21_1 = var_78
    
    if (x20_1 != 0)
        void* x0_3
        
        if (x21_1 == x20_1)
            x0_3 = x20_1
        else
            char* x8_2 = x21_1
            char* x22_1 = x21_1
            
            do
                x22_1 = &x22_1[-0x18]
                
                if ((zx.d(*x22_1) & 1) != 0)
                    operator delete(*(x8_2 - 8))
                
                x8_2 = x22_1
            while (x20_1 != x22_1)
            
            x0_3 = var_80
        
        var_78 = x20_1
        operator delete(x0_3)
    
    void* var_88
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
    
    if (x21_1 == x20_1)
        goto label_e64dd8
    
    char* x21_2 = *(entry_x0 + 0x28)
    size_t x0_6 = strlen(x21_2)
    
    if (x0_6 u>= -0x10)
    label_e64e08:
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_e64e10:
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
        Botan::assertion_failure("cipher_and_mode.size() == 2", "Expected format for AEAD algo", 
            "is_usable", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1413b)
    else
        void* var_70
        void* x22_2
        
        if (x0_6 u>= 0x17)
            uint64_t x23_1 = (x0_6 + 0x10) & 0xfffffffffffffff0
            void* x0_8 = operator new(x23_1)
            x22_2 = x0_8
            var_78 = x0_6
            var_70 = x0_8
            var_80 = x23_1 | 1
            memcpy(x22_2, x21_2, x0_6)
        else
            x22_2 = &var_80 | 1
            var_80.b = (x0_6.d << 1).b
            
            if (x0_6 != 0)
                memcpy(x22_2, x21_2, x0_6)
        
        *(x22_2 + x0_6) = 0
        uint64_t x9_2 = zx.q(var_80.b)
        int32_t x8_7 = x9_2.d & 1
        char* x9_4
        
        if (x8_7 == 0)
            x9_4 = x9_2 u>> 1
        else
            x9_4 = var_78
        
        int32_t x20_3
        
        if (x9_4 != 4)
            x20_3 = 0
            
            if ((x8_7 & 0xff) != 0)
                operator delete(var_70)
        else
            x20_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_80, 0, -ffffffffffffffff, "AEAD") == 0 ? 1 : 0
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * var_b0
        size_t var_90
        
        if (x20_3 == 0)
            char* x21_4 = *(entry_x0 + 0x20)
            size_t x0_16 = strlen(x21_4)
            
            if (x0_16 u>= -0x10)
                goto label_e64e10
            
            void* var_a0
            void* x22_4
            
            if (x0_16 u>= 0x17)
                uint64_t x23_3 = (x0_16 + 0x10) & 0xfffffffffffffff0
                void* x0_23 = operator new(x23_3)
                x22_4 = x0_23
                size_t var_a8_1 = x0_16
                var_a0 = x0_23
                var_b0 = x23_3 | 1
                memcpy(x22_4, x21_4, x0_16)
            else
                x22_4 = &var_b0 | 1
                var_b0.b = (x0_16.d << 1).b
                
                if (x0_16 != 0)
                    memcpy(x22_4, x21_4, x0_16)
            
            *(x22_4 + x0_16) = 0
            Botan::BlockCipher::providers(&var_b0)
            void* x21_5 = var_80
            int32_t x20_7
            
            if (var_78 == x21_5)
                Botan::StreamCipher::providers(&var_b0)
                void* x21_7 = var_98.q
                size_t x8_21 = var_90
                x20_7 = x8_21 != x21_7 ? 1 : 0
                
                if (x21_7 != 0)
                    void* x0_43
                    
                    if (x8_21 == x21_7)
                        x0_43 = x21_7
                    else
                        size_t x22_5 = x8_21
                        
                        do
                            x22_5 -= 0x18
                            
                            if ((zx.d(*x22_5) & 1) != 0)
                                operator delete(*(x8_21 - 8))
                            
                            x8_21 = x22_5
                        while (x21_7 != x22_5)
                        
                        x0_43 = var_98.q
                    
                    void* var_90_1 = x21_7
                    operator delete(x0_43)
                
                x21_5 = var_80
                
                if (x21_5 != 0)
                    goto label_e64bc0
            else
                x20_7 = 1
                
                if (x21_5 != 0)
                label_e64bc0:
                    char* x8_35 = var_78
                    void* x0_46
                    
                    if (x8_35 == x21_5)
                        x0_46 = x21_5
                    else
                        char* x22_7 = x8_35
                        
                        do
                            x22_7 = &x22_7[-0x18]
                            
                            if ((zx.d(*x22_7) & 1) != 0)
                                operator delete(*(x8_35 - 8))
                            
                            x8_35 = x22_7
                        while (x21_5 != x22_7)
                        
                        x0_46 = var_80
                    
                    var_78 = x21_5
                    operator delete(x0_46)
            
            if ((zx.d(var_b0.b) & 1) != 0)
                operator delete(var_a0)
            
            if ((x20_7 & 1) == 0)
                goto label_e64dd8
            
            char* x20_12 = *(entry_x0 + 0x28)
            size_t x0_49 = strlen(x20_12)
            
            if (x0_49 u< -0x10)
                void* x21_9
                
                if (x0_49 u>= 0x17)
                    uint64_t x22_8 = (x0_49 + 0x10) & 0xfffffffffffffff0
                    void* x0_51 = operator new(x22_8)
                    x21_9 = x0_51
                    size_t var_90_2 = x0_49
                    var_88 = x0_51
                    var_98.q = x22_8 | 1
                    memcpy(x21_9, x20_12, x0_49)
                else
                    x21_9 = &var_98 | 1
                    var_98 = (x0_49.d << 1).b
                    
                    if (x0_49 != 0)
                        memcpy(x21_9, x20_12, x0_49)
                
                *(x21_9 + x0_49) = 0
                Botan::HashFunction::providers(&var_98)
                void* x19_7 = var_80
                
                if (x19_7 != 0)
                    void* x0_55
                    
                    if (var_78 == x19_7)
                        x0_55 = x19_7
                    else
                        char* x8_40 = var_78
                        char* x21_10 = var_78
                        
                        do
                            x21_10 = &x21_10[-0x18]
                            
                            if ((zx.d(*x21_10) & 1) != 0)
                                operator delete(*(x8_40 - 8))
                            
                            x8_40 = x21_10
                        while (x19_7 != x21_10)
                        
                        x0_55 = var_80
                    
                    void* var_78_1 = x19_7
                    operator delete(x0_55)
                
                if ((zx.d(var_98) & 1) != 0)
                    operator delete(var_88)
                
                if (var_78 != x19_7)
                    goto label_e64d14
                
                goto label_e64dd8
            
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
            Botan::assertion_failure("cipher_and_mode.size() == 2", 
                "Expected format for AEAD algo", "is_usable", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1413b)
        else
            char* x21_3 = *(entry_x0 + 0x20)
            size_t x0_14 = strlen(x21_3)
            
            if (x0_14 u>= -0x10)
                goto label_e64e08
            
            void* x22_3
            
            if (x0_14 u>= 0x17)
                uint64_t x23_2 = (x0_14 + 0x10) & 0xfffffffffffffff0
                void* x0_18 = operator new(x23_2)
                x22_3 = x0_18
                var_78 = x0_14
                var_70 = x0_18
                var_80 = x23_2 | 1
                memcpy(x22_3, x21_3, x0_14)
            else
                x22_3 = &var_80 | 1
                var_80.b = (x0_14.d << 1).b
                
                if (x0_14 != 0)
                    memcpy(x22_3, x21_3, x0_14)
            
            *(x22_3 + x0_14) = 0
            uint64_t x9_5 = zx.q(var_80.b)
            int32_t x8_14 = x9_5.d & 1
            char* x9_7
            
            if (x8_14 == 0)
                x9_7 = x9_5 u>> 1
            else
                x9_7 = var_78
            
            int32_t x20_6
            
            if (x9_7 != 0x10)
                x20_6 = 0
                
                if ((x8_14 & 0xff) != 0)
                    operator delete(var_70)
            else
                x20_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_80, 0, -ffffffffffffffff, "ChaCha20Poly1305") == 0 ? 1 : 0
                
                if ((zx.d(var_80.b) & 1) != 0)
                    operator delete(var_70)
            
            if ((x20_6 & 1) != 0)
            label_e64d14:
                result = 1
                goto label_e64de4
            
            char* x20_8 = *(entry_x0 + 0x20)
            size_t x0_28 = strlen(x20_8)
            
            if (x0_28 u>= -0x10)
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
                Botan::assertion_failure("cipher_and_mode.size() == 2", 
                    "Expected format for AEAD algo", "is_usable", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1413b)
            else
                void* x21_6
                
                if (x0_28 u>= 0x17)
                    uint64_t x22_6 = (x0_28 + 0x10) & 0xfffffffffffffff0
                    void* x0_32 = operator new(x22_6)
                    x21_6 = x0_32
                    var_90 = x0_28
                    var_88 = x0_32
                    var_98.q = x22_6 | 1
                    memcpy(x21_6, x20_8, x0_28)
                else
                    x21_6 = &var_98 | 1
                    var_98 = (x0_28.d << 1).b
                    
                    if (x0_28 != 0)
                        memcpy(x21_6, x20_8, x0_28)
                
                *(x21_6 + x0_28) = 0
                var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
                var_78.b = 0x2f
                void** var_60_1 = &var_80
                Botan::split_on_pred(&var_98, &var_80)
                
                if (&var_80 == var_60_1)
                    (*(*var_60_1 + 0x20))()
                else if (var_60_1 != 0)
                    (*(*var_60_1 + 0x28))()
                
                if ((zx.d(var_98) & 1) != 0)
                    operator delete(var_88)
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    * x19_3 = var_b0
                char* var_a8
                
                if (var_a8 - x19_3 == 0x30)
                    Botan::BlockCipher::providers(x19_3)
                    void* x20_9 = var_80
                    int32_t x19_4
                    
                    if (var_78 == x20_9)
                        Botan::StreamCipher::providers(x19_3)
                        void* x20_11 = var_98.q
                        size_t x8_34 = var_90
                        x19_4 = x8_34 != x20_11 ? 1 : 0
                        
                        if (x20_11 != 0)
                            void* x0_57
                            
                            if (x8_34 == x20_11)
                                x0_57 = x20_11
                            else
                                size_t x21_8 = x8_34
                                
                                do
                                    x21_8 -= 0x18
                                    
                                    if ((zx.d(*x21_8) & 1) != 0)
                                        operator delete(*(x8_34 - 8))
                                    
                                    x8_34 = x21_8
                                while (x20_11 != x21_8)
                                
                                x0_57 = var_98.q
                            
                            void* var_90_3 = x20_11
                            operator delete(x0_57)
                        
                        x20_9 = var_80
                        
                        if (x20_9 == 0)
                            goto label_e64af0
                        
                        goto label_e64d30
                    
                    x19_4 = 1
                    
                    if (x20_9 != 0)
                    label_e64d30:
                        char* x8_42 = var_78
                        
                        if (x8_42 == x20_9)
                            void* var_78_3 = x20_9
                            operator delete(x20_9)
                            
                            if (x19_4 == 0)
                                goto label_e64d88
                        else
                            char* x21_11 = x8_42
                            
                            do
                                x21_11 = &x21_11[-0x18]
                                
                                if ((zx.d(*x21_11) & 1) != 0)
                                    operator delete(*(x8_42 - 8))
                                
                                x8_42 = x21_11
                            while (x20_9 != x21_11)
                            
                            void* var_78_2 = x20_9
                            operator delete(var_80)
                            
                            if (x19_4 == 0)
                                goto label_e64d88
                    else
                    label_e64af0:
                        
                        if (x19_4 == 0)
                        label_e64d88:
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                * x19_8 = var_b0
                            
                            if (x19_8 != 0)
                                char* x8_43 = var_a8
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                    * x0_62
                                
                                if (x8_43 == x19_8)
                                    x0_62 = x19_8
                                else
                                    char* x20_14 = x8_43
                                    
                                    do
                                        x20_14 = &x20_14[-0x18]
                                        
                                        if ((zx.d(*x20_14) & 1) != 0)
                                            operator delete(*(x8_43 - 8))
                                        
                                        x8_43 = x20_14
                                    while (x19_8 != x20_14)
                                    
                                    x0_62 = var_b0
                                
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                    * var_a8_3 = x19_8
                                operator delete(x0_62)
                            
                            goto label_e64dd8
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_80)
                    
                    if ((zx.d(var_80.b) & 1) != 0)
                        operator delete(var_70)
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * x19_5 = var_b0
                    
                    if (x19_5 != 0)
                        char* x8_33 = var_a8
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x0_44
                        
                        if (x8_33 == x19_5)
                            x0_44 = x19_5
                        else
                            char* x20_10 = x8_33
                            
                            do
                                x20_10 = &x20_10[-0x18]
                                
                                if ((zx.d(*x20_10) & 1) != 0)
                                    operator delete(*(x8_33 - 8))
                                
                                x8_33 = x20_10
                            while (x19_5 != x20_10)
                            
                            x0_44 = var_b0
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * var_a8_2 = x19_5
                        operator delete(x0_44)
                    
                    goto label_e64d14
                
                Botan::assertion_failure("cipher_and_mode.size() == 2", 
                    "Expected format for AEAD algo", "is_usable", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1413b)
__stack_chk_fail()
noreturn
