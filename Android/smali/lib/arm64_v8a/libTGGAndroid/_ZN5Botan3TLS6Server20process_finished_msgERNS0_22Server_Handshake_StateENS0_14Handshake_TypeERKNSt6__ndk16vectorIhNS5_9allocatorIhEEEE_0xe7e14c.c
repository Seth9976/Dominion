// 函数: _ZN5Botan3TLS6Server20process_finished_msgERNS0_22Server_Handshake_StateENS0_14Handshake_TypeERKNSt6__ndk16vectorIhNS5_9allocatorIhEEEE
// 地址: 0xe7e14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
int64_t* x0 = operator new(0x20)
x0[2] = 0
x0[3] = 0
int64_t* x23 = x0
*x0 = _vtable_for_Botan::TLS::Finished + 0x10
x0[1] = 0
int64_t* entry_x3
int64_t x26 = *entry_x3
int64_t x8_1 = entry_x3[1]
uint64_t x25 = x8_1 - x26

if (x8_1 == x26)
    goto label_e7e1d4

if ((x25 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("m_sequence_numbers", "Have a sequence numbers object", 
        "sequence_numbers", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)
else
    int64_t x0_2 = operator new(x25)
    int64_t x24_2 = x0_2 + x25
    x23[1] = x0_2
    x23[2] = x0_2
    x23[3] = x24_2
    memcpy(x0_2, x26, x25)
    x23[2] = x24_2
label_e7e1d4:
    void** x24_3 = *(x20 + 0x160)
    *(x20 + 0x160) = x23
    
    if (x24_3 != 0)
        void* x0_3 = x24_3[1]
        *x24_3 = _vtable_for_Botan::TLS::Finished + 0x10
        
        if (x0_3 != 0)
            x24_3[2] = x0_3
            operator delete(x0_3)
        
        operator delete(x24_3)
        x23 = *(x20 + 0x160)
    
    int64_t* x0_5 = *(x20 + 8)
    (*(*x0_5 + 0x70))(x0_5, x23)
    void* x23_1 = *(x20 + 0x160)
    char* var_130
    sub_e4e140(&var_130, x20, 1)
    char* x8_5 = *(x23_1 + 8)
    char* x0_7 = var_130
    void* i_11 = *(x23_1 + 0x10) - x8_5
    char var_198
    char* var_128
    int32_t x23_2
    
    if (i_11 != var_128 - x0_7)
        x23_2 = 0
        
        if (x0_7 != 0)
            var_128 = x0_7
            operator delete(x0_7)
    else
        var_198 = 0
        
        if (i_11 != 0)
            char* x10_3 = x0_7
            void* i
            
            do
                char x11_1 = *x8_5
                x8_5 = &x8_5[1]
                char x12_1 = *x10_3
                x10_3 = &x10_3[1]
                i = i_11
                i_11 -= 1
                var_198 |= x12_1 ^ x11_1
            while (i != 1)
        
        uint32_t x8_6 = zx.d(var_198)
        x23_2 = sx.d((x8_6.b - 1) & (not.d(x8_6)).b) s< 0 ? 1 : 0
        
        if (x0_7 != 0)
            var_128 = x0_7
            operator delete(x0_7)
    
    if ((x23_2 & 1) == 0)
        void** x0_77 = __cxa_allocate_exception(0x28)
        int64_t x0_78
        int128_t v0
        x0_78, v0 = operator new(0x20)
        int64_t var_120 = x0_78
        var_130.o = data_71c370
        __builtin_strncpy(x0_78, "Finished message didn\'t verify", 0x1f)
        *x0_77 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_77[1])
        x0_77[4].d = 0x33
        *x0_77 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_77, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    if (*(x20 + 0x158) != 0)
    label_e7e8c4:
        int64_t* x0_56 = *(arg1 + 0x40)
        void* x8_50 = *(arg1 + 0x48)
        *(arg1 + 0x40) = x8_50
        *(arg1 + 0x48) = 0
        
        if (x0_56 != 0)
            (*(*x0_56 + 8))()
            x8_50 = *(arg1 + 0x40)
        
        if (zx.d(*(x8_50 + 0x21)) u> 0xfa)
            return (*(**(arg1 + 0x18) + 0x30))()
        
        int64_t* x0_57 = *(arg1 + 0x38)
        
        if (x0_57 != 0)
            int16_t x0_58 = (*(*x0_57 + 0x28))()
            sub_e5d01c(x0_58, arg1 + 0x50)
            sub_e5d01c(x0_58, arg1 + 0x68)
            return (*(**(arg1 + 0x18) + 0x30))()
        
        Botan::assertion_failure("m_sequence_numbers", "Have a sequence numbers object", 
            "sequence_numbers", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x13ded)
    else
        int64_t* x0_8 = *(x20 + 0x10)
        (*(*x0_8 + 0x20))(x0_8, entry_x3, zx.q(arg3.d))
        void* x25_1 = *(x20 + 0xe8)
        char* x23_3 = var_130
        void* x24_4 = *(x20 + 0xf0)
        void* x26_1 = x24_4 - x25_1
        void* x28_1 = var_128 - x23_3 + x26_1
        
        if (*(x20 + 0xf8) - x25_1 u< x28_1)
            void* x0_10 = operator new(x28_1)
            x24_4 = x0_10 + x26_1
            
            if (x26_1 s>= 1)
                memcpy(x0_10, x25_1, x26_1)
            
            *(x20 + 0xe8) = x0_10
            *(x20 + 0xf0) = x24_4
            *(x20 + 0xf8) = x0_10 + x28_1
            
            if (x25_1 != 0)
                operator delete(x25_1)
                x24_4 = *(x20 + 0xf0)
                x23_3 = var_130
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            x20 + 0xe8, x24_4, x23_3)
        char* x0_14 = var_130
        
        if (x0_14 != 0)
            char* var_128_1 = x0_14
            operator delete(x0_14)
        
        int64_t* i_18 = *(x20 + 0x108) + 0x50
        int64_t* i_2 = *i_18
        uint64_t x22_2 = zx.q(i_18[-9].w)
        uint32_t x23_4 = zx.d(i_18[-2].w)
        int32_t x24_5
        int32_t x25_2
        
        if (i_2 == 0)
            x24_5 = 0
            x25_2 = 0
        else
            int64_t* i_13 = i_18
            int64_t* i_7 = i_18
            int64_t* i_1 = i_2
            
            do
                int32_t x10_4 = i_1[4].d
                
                if (x10_4 s>= 0x17)
                    i_7 = i_1
                
                i_1 = i_1[zx.q(x10_4 s< 0x17 ? 1 : 0)]
            while (i_1 != 0)
            
            if (i_7 == i_18)
                x24_5 = 0
            else if (i_7[4].d s<= 0x17)
                int64_t x0_15 = i_7[5]
                
                if (x0_15 == 0)
                    x24_5 = 0
                else
                    x24_5 = __dynamic_cast(x0_15, _typeinfo_for_Botan::TLS::Extension, 
                        _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0 ? 1 : 0
            else
                x24_5 = 0
            
            do
                int32_t x8_13 = i_2[4].d
                
                if (x8_13 s>= 0x16)
                    i_13 = i_2
                
                i_2 = i_2[zx.q(x8_13 s< 0x16 ? 1 : 0)]
            while (i_2 != 0)
            
            if (i_13 == i_18 || i_13[4].d s> 0x16)
                x25_2 = 0
            else
                int64_t x0_17 = i_13[5]
                
                if (x0_17 == 0)
                    x25_2 = 0
                else
                    x25_2 = __dynamic_cast(x0_17, _typeinfo_for_Botan::TLS::Extension, 
                        _typeinfo_for_Botan::TLS::Encrypt_then_MAC, 0) != 0 ? 1 : 0
        
        void* x0_20 = __dynamic_cast(x20, _typeinfo_for_Botan::TLS::Handshake_State, 
            _typeinfo_for_Botan::TLS::Server_Handshake_State, 0)
        
        if (x0_20 != 0)
            void* var_148
            
            if (*(x0_20 + 0x180) != *(x0_20 + 0x178) || *(x0_20 + 0x138) != 0)
                std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
                    &var_148)
            
            int64_t var_160
            __builtin_memset(&var_160, 0, 0x30)
            int64_t* i_15 = *(x20 + 0x100) + 0x90
            int64_t* i_3 = *i_15
            int16_t var_1b0
            
            if (i_3 == 0)
                var_1b0 = 0
            else
                int64_t* i_8 = i_15
                
                do
                    int32_t x11_4 = i_3[4].d
                    
                    if (x11_4 s>= 0)
                        i_8 = i_3
                    
                    i_3 = i_3[zx.q(x11_4 u>> 0x1f)]
                while (i_3 != 0)
                
                if (i_8 == i_15 || i_8[4].d s> 0)
                    var_1b0 = 0
                else
                    int64_t x0_69 = i_8[5]
                    
                    if (x0_69 == 0)
                        var_1b0 = 0
                    else if (__dynamic_cast(x0_69, _typeinfo_for_Botan::TLS::Extension, 
                            _typeinfo_for_Botan::TLS::Server_Name_Indicator, 0) == 0)
                        var_1b0 = 0
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_1b0)
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_198)
            char var_180_1 = 0
            int16_t var_168_1 = 0
            int16_t var_1c8
            
            if (zx.d(*(x20 + 0x68)) == 0 || *(x20 + 0x3c) != 4)
                var_1c8 = 0
            else
                int64_t* i_16 = *(x20 + 0x100) + 0x90
                int64_t* i_4 = *i_16
                
                if (i_4 == 0)
                    var_1c8 = 0
                else
                    int64_t* i_9 = i_16
                    
                    do
                        int32_t x11_6 = i_4[4].d
                        
                        if (x11_6 s>= 0xc)
                            i_9 = i_4
                        
                        i_4 = i_4[zx.q(x11_6 s< 0xc ? 1 : 0)]
                    while (i_4 != 0)
                    
                    if (i_9 == i_16 || i_9[4].d s> 0xc)
                        var_1c8 = 0
                    else
                        int64_t x0_23 = i_9[5]
                        
                        if (x0_23 == 0)
                            var_1c8 = 0
                        else if (__dynamic_cast(x0_23, _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::SRP_Identifier, 0) == 0)
                            var_1c8 = 0
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_1c8)
            
            *(x20 + 0x108)
            int16_t var_1f0_1 = Botan::TLS::Server_Hello::srtp_profile()
            char* var_200_1 = &var_198
            int16_t* var_1f8_1 = &var_1c8
            int64_t* var_210_1 = &var_148
            int64_t* var_208_1 = &var_160
            Botan::TLS::Session::Session(&var_130, i_18 - 0x40, x20 + 0x70, x22_2, zx.q(x23_4), 2, 
                zx.q(x24_5), zx.q(x25_2))
            
            if ((zx.d(var_1c8.b) & 1) == 0)
                if ((zx.d(var_180_1) & 1) != 0)
                    goto label_e7e600
                
                goto label_e7e5d4
            
            void* var_1b8
            operator delete(var_1b8)
            
            if ((zx.d(var_180_1) & 1) != 0)
            label_e7e600:
                void* var_170
                operator delete(var_170)
                
                if ((zx.d(var_198) & 1) == 0)
                    goto label_e7e5dc
                
                goto label_e7e610
            
        label_e7e5d4:
            
            if ((zx.d(var_198) & 1) == 0)
            label_e7e5dc:
                
                if ((zx.d(var_1b0.b) & 1) != 0)
                    goto label_e7e620
                
                goto label_e7e5e0
            
        label_e7e610:
            void* var_188
            operator delete(var_188)
            void* var_1a0
            void* x23_5
            
            if ((zx.d(var_1b0.b) & 1) == 0)
            label_e7e5e0:
                x23_5 = var_148
                
                if (x23_5 != 0)
                label_e7e62c:
                    void* var_140
                    void* x22_3 = var_140
                    void* x0_34
                    
                    if (x22_3 == x23_5)
                        x0_34 = x23_5
                    else
                        do
                            x22_3 -= 0x88
                            (*(*x22_3 + 0x10))(x22_3)
                        while (x23_5 != x22_3)
                        
                        x0_34 = var_148
                    
                    var_140 = x23_5
                    operator delete(x0_34)
            else
            label_e7e620:
                operator delete(var_1a0)
                x23_5 = var_148
                
                if (x23_5 != 0)
                    goto label_e7e62c
            int64_t* x0_35 = *(arg1 + 0x18)
            
            if (((*(*x0_35 + 0x28))(x0_35, &var_130) & 1) != 0)
                int64_t* i_14 = *(x20 + 0x108) + 0x50
                int64_t* i_5 = *i_14
                int64_t* x0_48
                
                if (i_5 == 0)
                    x0_48 = *(arg1 + 0x20)
                    (*(*x0_48 + 0x20))(x0_48, &var_130)
                else
                    int64_t* i_12 = i_14
                    
                    do
                        int32_t x11_8 = i_5[4].d
                        
                        if (x11_8 s>= 0x23)
                            i_12 = i_5
                        
                        i_5 = i_5[zx.q(x11_8 s< 0x23 ? 1 : 0)]
                    while (i_5 != 0)
                    
                    if (i_12 == i_14 || i_12[4].d s> 0x23)
                        x0_48 = *(arg1 + 0x20)
                        (*(*x0_48 + 0x20))(x0_48, &var_130)
                    else
                        int64_t x0_37 = i_12[5]
                        
                        if (x0_37 == 0)
                            x0_48 = *(arg1 + 0x20)
                            (*(*x0_48 + 0x20))(x0_48, &var_130)
                        else if (__dynamic_cast(x0_37, _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::Session_Ticket, 0) == 0)
                            x0_48 = *(arg1 + 0x20)
                            (*(*x0_48 + 0x20))(x0_48, &var_130)
                        else
                            int64_t* x0_39 = *(arg1 + 0xd0)
                            var_148.b = 0x14
                            var_160.b = 0x1c
                            __builtin_strncpy(&var_148:1, "tls-server", 0xb)
                            __builtin_strncpy(&var_160:1, "session-ticket", 0xf)
                            var_1b0 = 0
                            (*(*x0_39 + 0x60))(x0_39, &var_148, &var_160, &var_1b0)
                            
                            if ((zx.d(var_1b0.b) & 1) == 0)
                                if ((zx.d(var_160.b) & 1) != 0)
                                    goto label_e7ea68
                                
                                goto label_e7e760
                            
                            operator delete(var_1a0)
                            void* var_138
                            
                            if ((zx.d(var_160.b) & 1) == 0)
                            label_e7e760:
                                
                                if ((zx.d(var_148.b) & 1) != 0)
                                    operator delete(var_138)
                            else
                            label_e7ea68:
                                void* var_150
                                operator delete(var_150)
                                
                                if ((zx.d(var_148.b) & 1) != 0)
                                    operator delete(var_138)
                            Botan::TLS::Handshake_IO* x0_41 = operator new(0x28)
                            Botan::TLS::Handshake_Hash* x23_6 = *(x20 + 0x10)
                            *(arg1 + 0x30)
                            Botan::TLS::Session::encrypt(&var_130, &var_198)
                            (*(**(arg1 + 0x28) + 0xf0))()
                            Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_41, x23_6, 
                                x20 + 0xe8, &var_148)
                            void** x23_7 = *(x20 + 0x150)
                            *(x20 + 0x150) = x0_41
                            
                            if (x23_7 != 0)
                                void* x0_46 = x23_7[2]
                                *x23_7 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                                
                                if (x0_46 != 0)
                                    x23_7[3] = x0_46
                                    operator delete(x0_46)
                                
                                operator delete(x23_7)
                            
                            (*(**(x20 + 8) + 0x70))()
                            void* x0_75 = var_148
                            
                            if (x0_75 != 0)
                                void* var_140_1 = x0_75
                                operator delete(x0_75)
                            
                            void* x0_76 = var_198.q
                            
                            if (x0_76 != 0)
                                void* var_190_1 = x0_76
                                Botan::deallocate_memory(x0_76, var_188 - x0_76, 1)
            
            if (*(x20 + 0x150) == 0)
                int64_t* i_17 = *(x20 + 0x108) + 0x50
                int64_t* i_6 = *i_17
                
                if (i_6 != 0)
                    int64_t* i_10 = i_17
                    
                    do
                        int32_t x11_10 = i_6[4].d
                        
                        if (x11_10 s>= 0x23)
                            i_10 = i_6
                        
                        i_6 = i_6[zx.q(x11_10 s< 0x23 ? 1 : 0)]
                    while (i_6 != 0)
                    
                    if (i_10 != i_17 && i_10[4].d s<= 0x23)
                        int64_t x0_63 = i_10[5]
                        
                        if (x0_63 != 0 && __dynamic_cast(x0_63, 
                                _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::Session_Ticket, 0) != 0)
                            Botan::TLS::Handshake_IO* x0_65 = operator new(0x28)
                            Botan::TLS::Handshake_IO* x22_6 = x0_65
                            Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_65, *(x20 + 0x10))
                            void** x21_4 = *(x20 + 0x150)
                            *(x20 + 0x150) = x22_6
                            
                            if (x21_4 != 0)
                                void* x0_66 = x21_4[2]
                                *x21_4 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                                
                                if (x0_66 != 0)
                                    x21_4[3] = x0_66
                                    operator delete(x0_66)
                                
                                operator delete(x21_4)
                                x22_6 = *(x20 + 0x150)
                            
                            int64_t* x0_68 = *(x20 + 8)
                            (*(*x0_68 + 0x70))(x0_68, x22_6)
            
            int64_t* x0_49 = *(x20 + 0x10)
            var_198.q = _vtable_for_Botan::TLS::Change_Cipher_Spec + 0x10
            (*(*x0_49 + 8))(x0_49, &var_198)
            void* var_1e0
            
            if (var_1e0 != 0)
                void* var_1d8_1 = var_1e0
                operator delete(var_1e0)
            
            Botan::TLS::Channel::change_cipher_spec_writer(arg1)
            Botan::TLS::Handshake_IO* x0_52 = operator new(0x20)
            Botan::TLS::Handshake_IO* x21_3 = x0_52
            Botan::TLS::Finished::Finished(x0_52, *(x20 + 0x10), x20)
            void** x22_5 = *(x20 + 0x158)
            *(x20 + 0x158) = x21_3
            
            if (x22_5 != 0)
                void* x0_53 = x22_5[1]
                *x22_5 = _vtable_for_Botan::TLS::Finished + 0x10
                
                if (x0_53 != 0)
                    x22_5[2] = x0_53
                    operator delete(x0_53)
                
                operator delete(x22_5)
                x21_3 = *(x20 + 0x158)
            
            int64_t* x0_55 = *(x20 + 8)
            (*(*x0_55 + 0x70))(x0_55, x21_3)
            Botan::TLS::Session::~Session()
            goto label_e7e8c4

__cxa_bad_cast()
noreturn
