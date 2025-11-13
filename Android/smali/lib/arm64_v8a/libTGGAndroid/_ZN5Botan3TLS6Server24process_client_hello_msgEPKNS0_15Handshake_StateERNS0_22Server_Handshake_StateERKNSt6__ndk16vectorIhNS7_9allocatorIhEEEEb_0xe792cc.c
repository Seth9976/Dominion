// 函数: _ZN5Botan3TLS6Server24process_client_hello_msgEPKNS0_15Handshake_StateERNS0_22Server_Handshake_StateERKNSt6__ndk16vectorIhNS7_9allocatorIhEEEEb
// 地址: 0xe792cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23
uint64_t var_28 = x23
char var_150
int32_t entry_x4
uint64_t var_1c8_3

if (arg2 != 0 || (entry_x4 & 1) == 0)
    int32_t x28_1 = (arg2 == 0 ? 1 : 0) | entry_x4
    int32_t x0_1
    
    if ((x28_1 & 1) == 0)
        x0_1 = (*(**(arg1 + 0x28) + 0x68))()
    
    if ((x28_1 & 1) == 0 && (x0_1 & 1) == 0)
        if (((*(**(arg1 + 0x28) + 0x78))() & 1) == 0)
            goto label_e794f8
        
        void** x0_146 = __cxa_allocate_exception(0x28)
        int64_t x0_147
        int128_t v0_9
        x0_147, v0_9 = operator new(0x30)
        int64_t var_140_4 = x0_147
        var_150.o = data_71b5a0
        __builtin_strncpy(x0_147, "Server policy prohibits renegotiation", 0x26)
        *x0_146 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_146[1])
        x0_146[4].d = 0x64
        *x0_146 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_146, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    if (((x28_1 | (*(**(arg1 + 0x28) + 0x58))()) & 1) == 0
        && (Botan::TLS::Channel::secure_renegotiation_supported() & 1) == 0)
    label_e794f8:
        var_150 = 0
        int32_t var_14c_1 = 0x64
        return Botan::TLS::Channel::send_alert(arg1)
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_6 = operator new(0xa0)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x23_1 = x0_6
    Botan::TLS::Client_Hello::Client_Hello(x0_6)
    void** x1_1 = *(arg3 + 0x100)
    *(arg3 + 0x100) = x23_1
    
    if (x1_1 != 0)
        sub_f4ed30(arg3 + 0x100, x1_1)
        x23_1 = *(arg3 + 0x100)
    
    int64_t* x0_8 = *(arg3 + 8)
    (*(*x0_8 + 0x70))(x0_8, x23_1)
    void* x0_9 = *(arg3 + 0x100)
    x23 = zx.q(*(x0_9 + 8))
    uint32_t fp_1 = x23.d u>> 8
    
    if (((x23 u>> 8).d & 0xffffff) u< 0xfb)
        if (fp_1 u<= 2)
            void** x0_135 = __cxa_allocate_exception(0x28)
            int64_t x0_136
            int128_t v0_7
            x0_136, v0_7 = operator new(0x40)
            int64_t var_140_2 = x0_136
            var_150.o = data_71c880
            __builtin_strncpy(x0_136, "Client offered TLS version with major version under 3", 0x36)
            *x0_135 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_135[1])
            x0_135[4].d = 0x46
            *x0_135 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_135, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        if ((x23.d & 0xff) == 0 && fp_1 == 3)
            void** x0_139 = __cxa_allocate_exception(0x28)
            __builtin_strncpy(&var_150, ",SSLv3 is not supported", 0x18)
            *x0_139 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_139[1])
            x0_139[4].d = 0x46
            *x0_139 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_139, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
    else if (fp_1 == 0xff)
        void** x0_10 = __cxa_allocate_exception(0x28)
        int64_t x0_11
        int128_t v0_1
        x0_11, v0_1 = operator new(0x40)
        int64_t var_140 = x0_11
        var_150.o = data_71bb80
        __builtin_strncpy(x0_11, "Client offered DTLS version with major version 0xFF", 0x34)
        *x0_10 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_10[1])
        x0_10[4].d = 0x46
        *x0_10 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_10, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    int64_t* x24_1 = *(arg1 + 0x28)
    void* __offset(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 0x100) var_2f0_1
    int32_t x26_1
    uint32_t x27_1
    int16_t* x8_13
    void* x9_2
    int64_t x10_1
    
    if (arg2 == 0)
        x27_1 = 0
        x8_13 = *(x0_9 + 0x40)
        x10_1 = *(x0_9 + 0x48)
        var_2f0_1 = arg3 + 0x100
        x9_2 = x10_1 - x8_13
        
        if (x10_1 != x8_13)
        label_e79490:
            void* x11_1
            
            x11_1 = x9_2 s>= 0 ? x9_2 : -ffffffffffffffff
            
            void* x10_2 = x8_13 - x10_1
            void* x11_2
            
            x11_2 = x11_1 s< 1 ? x11_1 : 1
            
            void* x9_3
            
            x9_3 = x10_2 s> x9_2 ? x10_2 : x9_2
            
            int64_t i_2 = x11_2 * (x9_3 u>> 1) - 1
            int64_t i
            
            do
                uint32_t x12_1 = zx.d(*x8_13)
                x8_13 = &x8_13[1]
                x26_1 = x12_1 == 0x5600 ? 1 : 0
                
                if (x12_1 == 0x5600)
                    break
                
                i = i_2
                i_2 -= 1
            while (i != 0)
        else
            x26_1 = 0
    else
        x27_1 = zx.d(*(arg2 + 0x20))
        x8_13 = *(x0_9 + 0x40)
        x10_1 = *(x0_9 + 0x48)
        var_2f0_1 = arg3 + 0x100
        x9_2 = x10_1 - x8_13
        
        if (x10_1 != x8_13)
            goto label_e79490
        
        x26_1 = 0
    Botan::TLS::Client_Hello::supported_versions()
    int16_t var_1b0 = (x23.d).w
    uint16_t var_1d0 = x27_1.w
    uint64_t x0_18 = (*(*x24_1 + 0x108))(x24_1, zx.q(fp_1 u> 0xfa ? 1 : 0))
    int16_t var_1b8 = (x0_18.d).w
    
    if (x26_1 != 0 && (Botan::TLS::Protocol_Version::operator>(&var_1b8) & 1) != 0)
        void** x0_142 = __cxa_allocate_exception(0x28)
        int64_t x0_143
        int128_t v0_8
        x0_143, v0_8 = operator new(0x30)
        int64_t var_140_3 = x0_143
        var_150.o = data_71c860
        __builtin_strncpy(x0_143, "Client signalled fallback SCSV, possible attack", 0x30)
        *x0_142 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_142[1])
        x0_142[4].d = 0x56
        *x0_142 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_142, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    int16_t* var_198
    int16_t* var_190
    
    if (var_190 != var_198)
        void* x8_19 = *x24_1
        
        if (fp_1 u< 0xfb)
            int32_t x0_32 = (*(x8_19 + 0x98))(x24_1)
            int16_t* x8_27
            void* x9_11
            
            if ((x0_32 & 1) != 0)
                x8_27 = var_198
                x9_11 = var_190 - x8_27
            
            if ((x0_32 & 1) == 0 || var_190 == x8_27)
            label_e7971c:
                void** x0_33 = __cxa_allocate_exception(0x28)
                __builtin_strncpy(&var_150, "*No shared TLS version", 0x17)
                *x0_33 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_33[1])
                x0_33[4].d = 0x46
                *x0_33 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_33, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            void* x11_5
            
            x11_5 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
            
            void* x10_7 = x8_27 - var_190
            void* x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            void* x9_12
            
            x9_12 = x10_7 s> x9_11 ? x10_7 : x9_11
            
            int64_t x9_14 = x11_6 * (x9_12 u>> 1)
            x23 = 0x303
            
            while (zx.d(*x8_27) != 0x303)
                int64_t temp3_1 = x9_14
                x9_14 -= 1
                x8_27 = &x8_27[1]
                
                if (temp3_1 == 1)
                    goto label_e7971c
        else
            int32_t x0_22 = (*(x8_19 + 0xa8))(x24_1)
            int16_t* x8_21
            void* x9_7
            
            if ((x0_22 & 1) != 0)
                x8_21 = var_198
                x9_7 = var_190 - x8_21
            
            if ((x0_22 & 1) == 0 || var_190 == x8_21)
            label_e795e4:
                void** x0_23 = __cxa_allocate_exception(0x28)
                __builtin_strncpy(&var_150, ",No shared DTLS version", 0x18)
                *x0_23 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_23[1])
                x0_23[4].d = 0x46
                *x0_23 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_23, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            void* x11_3
            
            x11_3 = x9_7 s>= 0 ? x9_7 : -ffffffffffffffff
            
            void* x10_4 = x8_21 - var_190
            void* x11_4
            
            x11_4 = x11_3 s< 1 ? x11_3 : 1
            
            void* x9_8
            
            x9_8 = x10_4 s> x9_7 ? x10_4 : x9_7
            
            int64_t x9_10 = x11_4 * (x9_8 u>> 1)
            x23 = 0xfefd
            
            while (sx.d(*x8_21) != 0xfffffefd)
                int64_t temp4_1 = x9_10
                x9_10 -= 1
                x8_21 = &x8_21[1]
                
                if (temp4_1 == 1)
                    goto label_e795e4
        
        goto label_e797d8
    
    if (x23.d - 0x301 u>= 3 && x23.d != 0xfeff && x23.d != 0xfefd)
        if (x27_1 != 0)
            goto label_e796a4
        
        goto label_e797a4
    
    int32_t x0_27 = (*(*x24_1 + 0x100))(x24_1, x23)
    int128_t var_2d0
    char var_180
    void* var_170
    char var_168
    int128_t var_80
    int16_t* x0_30
    
    if (x27_1 != 0)
    label_e796a4:
        
        if ((Botan::TLS::Protocol_Version::operator>(&var_1d0) & 1) != 0)
            void** x0_150 = __cxa_allocate_exception(0x28)
            Botan::TLS::Protocol_Version::to_string()
            int128_t* x0_152
            int128_t v0_10
            x0_152, v0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_168, nullptr)
            int64_t var_70_1 = x0_152[1].q
            var_80 = *x0_152
            __builtin_memset(x0_152, 0, 0x18)
            int128_t* x0_154
            int128_t v0_11
            x0_154, v0_11 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_80)
            int64_t var_2c0_1 = x0_154[1].q
            var_2d0 = *x0_154
            __builtin_memset(x0_154, 0, 0x18)
            Botan::TLS::Protocol_Version::to_string()
            void* x1_53
            
            if ((zx.d(var_180) & 1) == 0)
                x1_53 = &var_180 | 1
            else
                x1_53 = var_170
            
            int128_t* x0_156
            int128_t v0_12
            x0_156, v0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_2d0, x1_53)
            int64_t var_140_5 = x0_156[1].q
            var_150.o = *x0_156
            __builtin_memset(x0_156, 0, 0x18)
            *x0_150 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_150[1])
            x0_150[4].d = 0x46
            *x0_150 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_150, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        x23 = zx.q(x27_1)
        x0_30 = var_198
        
        if (x0_30 != 0)
            var_190 = x0_30
            operator delete(x0_30)
    else if ((x0_27 & 1) == 0)
    label_e797a4:
        
        if (x23.d - 0x301 u< 3 || x23.d == 0xfeff || x23.d == 0xfefd)
            x23 = x0_18
            
            if ((Botan::TLS::Protocol_Version::operator>(&var_1b0) & 1) != 0)
                goto label_e797d8
            
            void** x0_163 = __cxa_allocate_exception(0x28)
            Botan::TLS::Protocol_Version::to_string()
            int128_t* x0_165
            int128_t v0_14
            x0_165, v0_14 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_80, nullptr)
            int64_t var_2c0_2 = x0_165[1].q
            var_2d0 = *x0_165
            __builtin_memset(x0_165, 0, 0x18)
            int128_t* x0_167
            int128_t v0_15
            x0_167, v0_15 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_2d0)
            int64_t var_140_7 = x0_167[1].q
            var_150.o = *x0_167
            __builtin_memset(x0_167, 0, 0x18)
            *x0_163 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_163[1])
            x0_163[4].d = 0x46
            *x0_163 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_163, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        x23 = x0_18
        x0_30 = var_198
        
        if (x0_30 != 0)
            var_190 = x0_30
            operator delete(x0_30)
    else
    label_e797d8:
        x0_30 = var_198
        
        if (x0_30 != 0)
            var_190 = x0_30
            operator delete(x0_30)
    void* x25_3 = *(arg3 + 0x100)
    *(arg3 + 0x20) = (x23.d).w
    __builtin_memset(&var_1d0, 0, 0x18)
    int64_t x9_15 = *(x25_3 + 0x58)
    int64_t x8_30 = *(x25_3 + 0x60)
    uint64_t x24_2 = x8_30 - x9_15
    
    if (x8_30 != x9_15)
        if ((x24_2 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            var_1c8_3 = x23
        else
            uint64_t x0_39 = operator new(x24_2)
            var_1d0.q = x0_39
            uint64_t var_1c8_1 = x0_39
            uint64_t var_1c0_1 = x0_39 + x24_2
            int64_t x1_8 = *(x25_3 + 0x58)
            x23 = x0_39
            size_t i_3 = *(x25_3 + 0x60) - x1_8
            
            if (i_3 s<= 0)
                var_1c8_3 = x23
            else
                memcpy(x23, x1_8, i_3)
                int64_t var_1c8_2 = x23 + i_3
                size_t i_1
                
                do
                    if (zx.d(*x23) == 0)
                        if ((((fp_1 u< 0xfb ? 1 : 0) | not.d(x28_1)) & 1) != 0)
                            goto label_e79b18
                        
                        var_150.w = 0
                        Botan::OctetString::OctetString(&var_2d0)
                        int64_t* x0_46 = *(arg1 + 0xd0)
                        var_80.b = 0x14
                        __builtin_strncpy(&var_168, "$dtls-cookie-secret", 0x14)
                        __builtin_strncpy(&var_80:1, "tls-server", 0xb)
                        var_180.w = 0
                        (*(*x0_46 + 0x60))(x0_46, &var_80, &var_168, &var_180)
                        void* x0_47 = var_2d0.q
                        
                        if (x0_47 != 0)
                            var_2d0:8.q = x0_47
                            int64_t var_2c0
                            Botan::deallocate_memory(x0_47, var_2c0 - x0_47, 1)
                        
                        uint32_t x9_18 = zx.d(var_180)
                        var_2d0 = var_150.o
                        char* j_27
                        char* j_32 = j_27
                        __builtin_memset(&var_150, 0, 0x18)
                        
                        if ((x9_18 & 1) == 0)
                            if ((zx.d(var_168) & 1) != 0)
                                goto label_e799e8
                            
                            goto label_e799cc
                        
                        operator delete(var_170)
                        int128_t var_167
                        void* var_70
                        
                        if ((zx.d(var_168) & 1) == 0)
                        label_e799cc:
                            
                            if ((zx.d(var_80.b) & 1) != 0)
                                operator delete(var_70)
                        else
                        label_e799e8:
                            operator delete(var_167:0xf.q)
                            
                            if ((zx.d(var_80.b) & 1) != 0)
                                operator delete(var_70)
                        
                        void* x0_59 = var_2d0.q
                        
                        if (var_2d0:8.q == x0_59)
                            if ((entry_x4 & 1) == 0)
                                goto label_e79b00
                            
                            void** x0_159 = __cxa_allocate_exception(0x28)
                            int64_t x0_160
                            int128_t v0_13
                            x0_160, v0_13 = operator new(0x40)
                            int64_t var_140_6 = x0_160
                            var_150.o = data_71b0e0
                            __builtin_strncpy(x0_160, 
                                "Reuse of DTLS association requires DTLS cookie secret be set", 
                                0x3d)
                            *x0_159 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_159[1])
                            x0_159[4].d = 0x28
                            *x0_159 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_159, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        (*(**(arg1 + 0x18) + 0x98))()
                        *(arg3 + 0x100)
                        Botan::TLS::Client_Hello::cookie_input_data()
                        Botan::TLS::Hello_Verify_Request::Hello_Verify_Request(&var_150, &var_168, 
                            &var_80)
                        void* x0_54 = var_168.q
                        
                        if (x0_54 != 0)
                            var_167:7.q = x0_54
                            operator delete(x0_54)
                        
                        void* x9_20 = *(arg3 + 0x100)
                        char* x9_21 = *(x9_20 + 0x70)
                        int64_t x8_49 = *(x9_20 + 0x78)
                        char* j_26
                        
                        if (x8_49 - x9_21 != j_27 - j_26)
                        label_e79ac8:
                            int64_t* x0_57 = *(arg3 + 0x10)
                            void* __offset(
                                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 
                                0x100) x20_5
                            
                            if ((entry_x4 & 1) == 0)
                                (*(*x0_57 + 8))(x0_57, &var_150)
                                x20_5 = var_2f0_1
                                void* var_200
                                
                                if (var_200 != 0)
                                    void* var_1f8_1 = var_200
                                    operator delete(var_200)
                            else
                                (*(*x0_57 + 0x10))(x0_57, &var_150, 0)
                                x20_5 = var_2f0_1
                                void* var_1e8
                                
                                if (var_1e8 != 0)
                                    void* var_1e0_1 = var_1e8
                                    operator delete(var_1e8)
                            
                            void** x1_28 = *x20_5
                            *x20_5 = 0
                            
                            if (x1_28 != 0)
                                sub_f4ed30(x20_5, x1_28)
                            
                            int32_t x9_36 = *(arg3 + 0x18)
                            *(arg3 + 0xf0) = *(arg3 + 0xe8)
                            *(arg3 + 0x18) = x9_36 | 4
                            var_150.q = _vtable_for_Botan::TLS::Hello_Verify_Request + 0x10
                            
                            if (j_26 != 0)
                                char* j_28 = j_26
                                operator delete(j_26)
                            
                            if ((zx.d(var_80.b) & 1) != 0)
                                operator delete(var_70)
                            
                            void* x0_91 = var_2d0.q
                            
                            if (x0_91 != 0)
                                var_2d0:8.q = x0_91
                                Botan::deallocate_memory(x0_91, j_32 - x0_91, 1)
                        else
                            if (x9_21 != x8_49)
                                char* j_31 = j_26
                                
                                do
                                    if (zx.d(*x9_21) != zx.d(*j_31))
                                        goto label_e79ac8
                                    
                                    x9_21 = &x9_21[1]
                                    j_31 = &j_31[1]
                                while (x8_49 != x9_21)
                            
                            var_150.q = _vtable_for_Botan::TLS::Hello_Verify_Request + 0x10
                            
                            if (j_26 != 0)
                                j_27 = j_26
                                operator delete(j_26)
                            
                            if ((zx.d(var_80.b) & 1) != 0)
                                operator delete(var_70)
                            
                            x0_59 = var_2d0.q
                        label_e79b00:
                            
                            if (x0_59 == 0)
                                goto label_e79b18
                            
                            var_2d0:8.q = x0_59
                            Botan::deallocate_memory(x0_59, j_32 - x0_59, 1)
                        label_e79b18:
                            
                            if ((entry_x4 & 1) != 0)
                                Botan::TLS::Channel::reset_active_association_state()
                            
                            *(arg3 + 0x100)
                            Botan::TLS::Channel::secure_renegotiation_check(arg1)
                            int64_t* x0_62 = *(arg1 + 0x18)
                            (*(*x0_62 + 0x88))(x0_62, *(arg3 + 0x100) + 0x88, 1)
                            int128_t v0_4
                            v0_4.q = 0
                            v0_4:8.q = 0
                            int32_t var_278_1 = 0
                            int64_t var_270
                            __builtin_memset(&var_270, 0, 0x1a)
                            int16_t var_240_1 = 0
                            int16_t var_228_1 = 0
                            var_2d0.q = -0x8000000000000000
                            __builtin_memset(&var_2d0:8, 0, 0x4c)
                            int64_t var_220
                            __builtin_memset(&var_220, 0, 0x18)
                            int32_t x24_4
                            
                            if (zx.d(*(arg3 + 0x170)) == 0)
                                x24_4 = 0
                            else
                                int64_t* x24_3 = *(arg1 + 0x20)
                                int64_t* x23_2 = *(arg1 + 0xd0)
                                void* x21_1 = *(arg3 + 0x100)
                                int32_t x0_64 = (*(**(arg1 + 0x28) + 0xf0))(v0_4)
                                Botan::TLS::Client_Hello::session_ticket()
                                int96_t var_288
                                
                                if (var_80.q != var_80:8.q)
                                    var_180 = 0x14
                                    var_198.b = 0x1c
                                    int64_t var_17f
                                    __builtin_strncpy(&var_17f, "tls-server", 0xb)
                                    __builtin_strncpy(&var_198:1, "session-ticket", 0xf)
                                    var_1b0 = 0
                                    (*(*x23_2 + 0x60))(x23_2, &var_180, &var_198, &var_1b0)
                                    uint8_t* x0_67 = var_80.q
                                    Botan::TLS::Session::decrypt(x0_67, var_80:8.q - x0_67, 
                                        &var_168)
                                    Botan::TLS::Session::operator=(&var_2d0)
                                    Botan::TLS::Session::~Session()
                                    void* x0_69 = var_168.q
                                    
                                    if (x0_69 != 0)
                                        var_167:7.q = x0_69
                                        Botan::deallocate_memory(x0_69, var_167:0xf.q - x0_69, 1)
                                    
                                    if ((zx.d(var_1b0.b) & 1) == 0)
                                        if ((zx.d(var_198.b) & 1) != 0)
                                            goto label_e79ce0
                                        
                                        goto label_e79c8c
                                    
                                    void* var_1a0
                                    operator delete(var_1a0)
                                    
                                    if ((zx.d(var_198.b) & 1) != 0)
                                    label_e79ce0:
                                        void* var_188
                                        operator delete(var_188)
                                        
                                        if ((zx.d(var_180) & 1) == 0)
                                            goto label_e79c90
                                        
                                        goto label_e79cf0
                                    
                                label_e79c8c:
                                    
                                    if ((zx.d(var_180) & 1) != 0)
                                    label_e79cf0:
                                        operator delete(var_170)
                                        
                                        if (x0_64 == 0)
                                        label_e79d34:
                                            
                                            if (zx.d(*(x21_1 + 8)) != zx.d(var_288:8.w))
                                                goto label_e79d90
                                            
                                            goto label_e79d3c
                                    else
                                    label_e79c90:
                                        
                                        if (x0_64 == 0)
                                            goto label_e79d34
                                    
                                    int64_t x8_73 = (muls.dp.q(
                                        std::__ndk1::chrono::system_clock::now() - var_2d0.q, 
                                        0x431bde82d7b634db) u>> 0x40).q
                                    
                                    if ((x8_73 s>> 0x12) + (x8_73 u>> 0x3f) s> zx.q(x0_64)
                                            || zx.d(*(x21_1 + 8)) != zx.d(var_288:8.w))
                                        goto label_e79d90
                                    
                                    goto label_e79d3c
                                
                                void* x0_76
                                
                                if (*(x21_1 + 0x10) == *(x21_1 + 0x18))
                                label_e79d90:
                                    x24_4 = 0
                                    x0_76 = var_80.q
                                    
                                    if (x0_76 != 0)
                                        var_80:8.q = x0_76
                                        operator delete(x0_76)
                                else
                                    if (((**x24_3)(x24_3, x21_1 + 0x10, &var_2d0) & 1) == 0
                                            || zx.d(*(x21_1 + 8)) != zx.d(var_288:8.w))
                                        goto label_e79d90
                                    
                                label_e79d3c:
                                    int16_t* x8_76 = *(x21_1 + 0x40)
                                    int64_t x11_9 = *(x21_1 + 0x48)
                                    void* x10_11 = x11_9 - x8_76
                                    
                                    if (x11_9 == x8_76)
                                        goto label_e79d90
                                    
                                    void* x12_3
                                    
                                    x12_3 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
                                    
                                    void* x11_10 = x8_76 - x11_9
                                    void* x12_4
                                    
                                    x12_4 = x12_3 s< 1 ? x12_3 : 1
                                    
                                    void* x10_12
                                    
                                    x10_12 = x11_10 s> x10_11 ? x11_10 : x10_11
                                    
                                    int64_t x10_14 = x12_4 * (x10_12 u>> 1)
                                    
                                    while (zx.d(*x8_76) != zx.d(var_288:0xa.w))
                                        int64_t temp5_1 = x10_14
                                        x10_14 -= 1
                                        x8_76 = &x8_76[1]
                                        
                                        if (temp5_1 == 1)
                                            goto label_e79d90
                                    
                                    void* j = *(x21_1 + 0x90)
                                    uint32_t x9_40
                                    
                                    if (j == 0)
                                        x9_40 = 0
                                        var_150.w = 0
                                    else
                                        void* j_13 = x21_1 + 0x90
                                        
                                        do
                                            int32_t x10_17 = *(j + 0x20)
                                            
                                            if (x10_17 s>= 0xc)
                                                j_13 = j
                                            
                                            j = *(j + (zx.q(x10_17 s< 0xc ? 1 : 0) << 3))
                                        while (j != 0)
                                        
                                        if (j_13 == x21_1 + 0x90 || *(j_13 + 0x20) s> 0xc)
                                            x9_40 = 0
                                            var_150.w = 0
                                        else
                                            int64_t x0_95 = *(j_13 + 0x28)
                                            
                                            if (x0_95 == 0)
                                                x9_40 = 0
                                                var_150.w = 0
                                            else if (__dynamic_cast(x0_95, 
                                                    _typeinfo_for_Botan::TLS::Extension, 
                                                    _typeinfo_for_Botan::TLS::SRP_Identifier, 0) == 0)
                                                x9_40 = 0
                                                var_150.w = 0
                                            else
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                    &var_150)
                                                x9_40 = zx.d(var_150)
                                    
                                    int32_t x8_95 = x9_40 & 1
                                    char* j_29
                                    
                                    if (x8_95 == 0)
                                        j_29 = zx.q(x9_40 u>> 1)
                                    else
                                        j_29 = j_26
                                    
                                    int32_t x22_5
                                    
                                    if (j_29 == 0)
                                        x22_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_150, 0, -ffffffffffffffff, &data_793a18) != 0 ? 1 : 0
                                        x8_95 = zx.d(var_150) & 1
                                    else
                                        x22_5 = 1
                                    
                                    if ((x8_95 & 0xff) != 0)
                                        operator delete(j_27)
                                    
                                    if (x22_5 == 0)
                                        goto label_e7a42c
                                    
                                    void* j_1 = *(x21_1 + 0x90)
                                    uint32_t x9_43
                                    
                                    if (j_1 == 0)
                                        x9_43 = 0
                                        var_150.w = 0
                                    else
                                        void* j_14 = x21_1 + 0x90
                                        
                                        do
                                            int32_t x10_20 = *(j_1 + 0x20)
                                            
                                            if (x10_20 s>= 0xc)
                                                j_14 = j_1
                                            
                                            j_1 = *(j_1 + (zx.q(x10_20 s< 0xc ? 1 : 0) << 3))
                                        while (j_1 != 0)
                                        
                                        if (j_14 == x21_1 + 0x90 || *(j_14 + 0x20) s> 0xc)
                                            x9_43 = 0
                                            var_150.w = 0
                                        else
                                            int64_t x0_102 = *(j_14 + 0x28)
                                            
                                            if (x0_102 == 0)
                                                x9_43 = 0
                                                var_150.w = 0
                                            else if (__dynamic_cast(x0_102, 
                                                    _typeinfo_for_Botan::TLS::Extension, 
                                                    _typeinfo_for_Botan::TLS::SRP_Identifier, 0) == 0)
                                                x9_43 = 0
                                                var_150.w = 0
                                            else
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                    &var_150)
                                                x9_43 = zx.d(var_150)
                                    
                                    uint64_t x10_22 = zx.q(var_220.b)
                                    char* j_15 = zx.q(x9_43 u>> 1)
                                    char* j_22
                                    
                                    if ((x9_43 & 1) == 0)
                                        j_22 = j_15
                                    else
                                        j_22 = j_26
                                    
                                    uint64_t x11_14
                                    uint64_t var_218
                                    
                                    if ((x10_22.d & 1) == 0)
                                        x11_14 = x10_22 u>> 1
                                    else
                                        x11_14 = var_218
                                    
                                    if (j_22 != x11_14)
                                        if ((x9_43 & 1) == 0)
                                            goto label_e79d90
                                        
                                        operator delete(j_27)
                                        x24_4 = 0
                                        x0_76 = var_80.q
                                        
                                        if (x0_76 != 0)
                                            var_80:8.q = x0_76
                                            operator delete(x0_76)
                                    else
                                        char* x9_44 = &var_150 | 1
                                        void* x1_35
                                        void* var_210
                                        
                                        if ((x10_22.d & 1) != 0)
                                            x1_35 = var_210
                                        else
                                            x1_35 = &var_220:1
                                        
                                        if ((x9_43 & 1) == 0)
                                            if (j_22 != 0)
                                                char* j_2
                                                
                                                do
                                                    if (zx.d(*x9_44) != zx.d(*x1_35))
                                                        goto label_e79d90
                                                    
                                                    j_2 = j_15
                                                    j_15 -= 1
                                                    x9_44 = &x9_44[1]
                                                    x1_35 += 1
                                                while (j_2 != 1)
                                            
                                            goto label_e7a42c
                                        
                                        if (j_22 != 0)
                                            int32_t x0_115 = memcmp()
                                            operator delete(j_27)
                                            
                                            if (x0_115 != 0)
                                                goto label_e79d90
                                            
                                            goto label_e7a42c
                                        
                                        operator delete(j_27)
                                    label_e7a42c:
                                        void* j_3 = *(x21_1 + 0x90)
                                        uint32_t x9_50
                                        
                                        if (j_3 == 0)
                                            x9_50 = 0
                                            var_150.w = 0
                                        else
                                            void* j_17 = x21_1 + 0x90
                                            
                                            do
                                                int32_t x10_24 = *(j_3 + 0x20)
                                                
                                                if (x10_24 s>= 0)
                                                    j_17 = j_3
                                                
                                                j_3 = *(j_3 + (zx.q(x10_24 u>> 0x1f) << 3))
                                            while (j_3 != 0)
                                            
                                            if (j_17 == x21_1 + 0x90 || *(j_17 + 0x20) s> 0)
                                                x9_50 = 0
                                                var_150.w = 0
                                            else
                                                int64_t x0_122 = *(j_17 + 0x28)
                                                
                                                if (x0_122 == 0)
                                                    x9_50 = 0
                                                    var_150.w = 0
                                                else if (__dynamic_cast(x0_122, 
                                                        _typeinfo_for_Botan::TLS::Extension, 
                                                        _typeinfo_for_Botan::TLS::Server_Name_Indicator, 
                                                        0) == 0)
                                                    x9_50 = 0
                                                    var_150.w = 0
                                                else
                                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                        &var_150)
                                                    x9_50 = zx.d(var_150)
                                        
                                        int32_t x8_103 = x9_50 & 1
                                        char* j_30
                                        
                                        if (x8_103 == 0)
                                            j_30 = zx.q(x9_50 u>> 1)
                                        else
                                            j_30 = j_26
                                        
                                        int32_t x22_8
                                        
                                        if (j_30 == 0)
                                            x22_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_150, 0, -ffffffffffffffff, &data_793a18) != 0 ? 1
                                                : 0
                                            x8_103 = zx.d(var_150) & 1
                                        else
                                            x22_8 = 1
                                        
                                        if ((x8_103 & 0xff) != 0)
                                            operator delete(j_27)
                                        
                                        int32_t x24_5
                                        
                                        if (x22_8 != 0)
                                            void* j_4 = *(x21_1 + 0x90)
                                            
                                            if (j_4 == 0)
                                                var_150.w = 0
                                            else
                                                void* j_18 = x21_1 + 0x90
                                                
                                                do
                                                    int32_t x10_27 = *(j_4 + 0x20)
                                                    
                                                    if (x10_27 s>= 0)
                                                        j_18 = j_4
                                                    
                                                    j_4 = *(j_4 + (zx.q(x10_27 u>> 0x1f) << 3))
                                                while (j_4 != 0)
                                                
                                                if (j_18 == x21_1 + 0x90 || *(j_18 + 0x20) s> 0)
                                                    var_150.w = 0
                                                else
                                                    int64_t x0_132 = *(j_18 + 0x28)
                                                    
                                                    if (x0_132 == 0)
                                                        var_150.w = 0
                                                    else if (__dynamic_cast(x0_132, 
                                                            _typeinfo_for_Botan::TLS::Extension, 
                                                            _typeinfo_for_Botan::TLS::Server_Name_Indicator, 
                                                            0) == 0)
                                                        var_150.w = 0
                                                    else
                                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                            &var_150)
                                            
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &var_168)
                                            uint64_t x8_105 = zx.q(var_150)
                                            uint64_t x23_9 = zx.q(var_168)
                                            int32_t x22_9 = x8_105.d & 1
                                            char* j_19 = x8_105 u>> 1
                                            char* j_23
                                            
                                            j_23 = x22_9 == 0 ? j_19 : j_26
                                            
                                            uint64_t x9_54
                                            
                                            if ((x23_9.d & 1) == 0)
                                                x9_54 = x23_9 u>> 1
                                            else
                                                x9_54 = var_167:7.q
                                            
                                            if (j_23 != x9_54)
                                                x24_5 = 1
                                            else
                                                char* x9_55 = &var_150 | 1
                                                char* x1_41
                                                
                                                if ((x23_9.d & 1) == 0)
                                                    x1_41 = &var_168 | 1
                                                else
                                                    x1_41 = var_167:0xf.q
                                                
                                                if ((x22_9 & 0xff) != 0)
                                                    if (j_23 == 0)
                                                        x24_5 = 0
                                                    else
                                                        x24_5 = memcmp() != 0 ? 1 : 0
                                                else if (j_23 == 0)
                                                    x24_5 = 0
                                                else
                                                    uint32_t x10_30
                                                    uint32_t x11_20
                                                    char* j_5
                                                    
                                                    do
                                                        x10_30 = zx.d(*x9_55)
                                                        x11_20 = zx.d(*x1_41)
                                                        
                                                        if (x10_30 != x11_20)
                                                            break
                                                        
                                                        j_5 = j_19
                                                        j_19 -= 1
                                                        x9_55 = &x9_55[1]
                                                        x1_41 = &x1_41[1]
                                                    while (j_5 != 1)
                                                    x24_5 = x10_30 != x11_20 ? 1 : 0
                                            
                                            if ((x23_9.d & 1) != 0)
                                                operator delete(var_167:0xf.q)
                                                x22_9 = zx.d(var_150) & 1
                                            
                                            if ((x22_9 & 0xff) != 0)
                                                operator delete(j_27)
                                        
                                        if (x22_8 != 0 && (x24_5 & 1) != 0)
                                            goto label_e79d90
                                        
                                        void* j_7 = *(x21_1 + 0x90)
                                        
                                        if (j_7 == 0)
                                        label_e7a6a0:
                                            
                                            if (zx.d(var_278_1:2.b) != 0)
                                            label_e7ac44:
                                                void** x0_170 = __cxa_allocate_exception(0x28)
                                                int64_t x0_171
                                                int128_t v0_16
                                                x0_171, v0_16 = operator new(0x40)
                                                int64_t var_140_8 = x0_171
                                                var_150.o = data_71b0e0
                                                __builtin_strncpy(x0_171, 
                                                    "Client resumed extended ms session without sending 
                                                        extension", 
                                                    0x3d)
                                                *x0_170 = _vtable_for_Botan::Exception + 0x10
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                    &x0_170[1])
                                                x0_170[4].d = 0x28
                                                *x0_170 =
                                                    _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                                __cxa_throw(x0_170, 
                                                    _typeinfo_for_Botan::TLS::TLS_Exception, 
                                                    Botan::Exception::~Exception)
                                                noreturn
                                        else
                                            void* j_20 = x21_1 + 0x90
                                            void* j_6 = j_7
                                            
                                            do
                                                int32_t x10_31 = *(j_6 + 0x20)
                                                
                                                if (x10_31 s>= 0x17)
                                                    j_20 = j_6
                                                
                                                j_6 = *(j_6 + (zx.q(x10_31 s< 0x17 ? 1 : 0) << 3))
                                            while (j_6 != 0)
                                            
                                            if (j_20 == x21_1 + 0x90 || *(j_20 + 0x20) s> 0x17)
                                                goto label_e7a6a0
                                            
                                            int64_t x0_128 = *(j_20 + 0x28)
                                            
                                            if (x0_128 == 0)
                                                goto label_e7a6a0
                                            
                                            uint32_t x8_107 = zx.d(var_278_1:2.b)
                                            
                                            if ((__dynamic_cast(x0_128, 
                                                    _typeinfo_for_Botan::TLS::Extension, 
                                                    _typeinfo_for_Botan::TLS::Extended_Master_Secret, 
                                                    0) != 0 ? 1 : 0) != (x8_107 != 0 ? 1 : 0))
                                                if (x8_107 == 0)
                                                    goto label_e79d90
                                                
                                                goto label_e7ac44
                                        
                                        if (j_7 == 0)
                                        label_e7a700:
                                            
                                            if (zx.d(var_278_1:3.b) != 0)
                                            label_e7ace4:
                                                void** x0_174 = __cxa_allocate_exception(0x28)
                                                int64_t x0_175
                                                int128_t v0_17
                                                x0_175, v0_17 = operator new(0x50)
                                                int64_t var_140_9 = x0_175
                                                var_150.o = data_71cfd0
                                                __builtin_strncpy(x0_175, 
                                                    "Client resumed Encrypt-then-MAC session without "
                                                "sending extension", 
                                                    0x42)
                                                *x0_174 = _vtable_for_Botan::Exception + 0x10
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                    &x0_174[1])
                                                x0_174[4].d = 0x28
                                                *x0_174 =
                                                    _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                                __cxa_throw(x0_174, 
                                                    _typeinfo_for_Botan::TLS::TLS_Exception, 
                                                    Botan::Exception::~Exception)
                                                noreturn
                                        else
                                            void* j_21 = x21_1 + 0x90
                                            
                                            do
                                                int32_t x9_58 = *(j_7 + 0x20)
                                                
                                                if (x9_58 s>= 0x16)
                                                    j_21 = j_7
                                                
                                                j_7 = *(j_7 + (zx.q(x9_58 s< 0x16 ? 1 : 0) << 3))
                                            while (j_7 != 0)
                                            
                                            if (j_21 == x21_1 + 0x90 || *(j_21 + 0x20) s> 0x16)
                                                goto label_e7a700
                                            
                                            int64_t x0_130 = *(j_21 + 0x28)
                                            
                                            if (x0_130 == 0)
                                                goto label_e7a700
                                            
                                            if (__dynamic_cast(x0_130, 
                                                    _typeinfo_for_Botan::TLS::Extension, 
                                                    _typeinfo_for_Botan::TLS::Encrypt_then_MAC, 0) == 0
                                                    && zx.d(var_278_1:3.b) != 0)
                                                goto label_e7ace4
                                        
                                        x24_4 = 1
                                        x0_76 = var_80.q
                                        
                                        if (x0_76 != 0)
                                            var_80:8.q = x0_76
                                            operator delete(x0_76)
                            
                            int64_t* x0_77 = *(arg1 + 0xd0)
                            var_80.b = 0x14
                            var_168 = 0x1c
                            __builtin_strncpy(&var_80:1, "tls-server", 0xb)
                            __builtin_strncpy(&var_167, "session-ticket", 0xf)
                            var_180.w = 0
                            (*(*x0_77 + 0x60))(x0_77, &var_80, &var_168, &var_180)
                            void* x0_78 = var_150.q
                            
                            if (x0_78 != 0)
                                void* var_148 = x0_78
                                Botan::deallocate_memory(x0_78, j_27 - x0_78, 1)
                            
                            if ((zx.d(var_180) & 1) == 0)
                                if ((zx.d(var_168) & 1) != 0)
                                    goto label_e79e58
                                
                                goto label_e79e3c
                            
                            operator delete(var_170)
                            
                            if ((zx.d(var_168) & 1) == 0)
                            label_e79e3c:
                                
                                if ((zx.d(var_80.b) & 1) != 0)
                                    operator delete(var_70)
                            else
                            label_e79e58:
                                operator delete(var_167:0xf.q)
                                
                                if ((zx.d(var_80.b) & 1) != 0)
                                    operator delete(var_70)
                            
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                                arg1 + 0xd8)
                            int64_t* j_25 = *(arg3 + 0x100) + 0x90
                            int64_t* j_9 = *j_25
                            
                            if (j_9 != 0)
                                int64_t* j_11 = j_25
                                int64_t* j_8 = j_9
                                
                                do
                                    int32_t x10_15 = j_8[4].d
                                    
                                    if (x10_15 s>= 0x10)
                                        j_11 = j_8
                                    
                                    j_8 = j_8[zx.q(x10_15 s< 0x10 ? 1 : 0)]
                                while (j_8 != 0)
                                
                                if (j_11 != j_25 && j_11[4].d s<= 0x10)
                                    int64_t x0_83 = j_11[5]
                                    
                                    if (x0_83 != 0 && __dynamic_cast(x0_83, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Application_Layer_Protocol_Notification, 
                                            0) != 0)
                                        int64_t* x23_3 = *(arg1 + 0x18)
                                        int64_t* j_12 = j_25
                                        
                                        do
                                            int32_t x9_32 = j_9[4].d
                                            
                                            if (x9_32 s>= 0x10)
                                                j_12 = j_9
                                            
                                            j_9 = j_9[zx.q(x9_32 s< 0x10 ? 1 : 0)]
                                        while (j_9 != 0)
                                        
                                        if (j_12 == j_25 || j_12[4].d s> 0x10)
                                            __builtin_memset(&var_80, 0, 0x18)
                                        else
                                            int64_t x0_85 = j_12[5]
                                            
                                            if (x0_85 == 0)
                                                __builtin_memset(&var_80, 0, 0x18)
                                            else if (__dynamic_cast(x0_85, 
                                                    _typeinfo_for_Botan::TLS::Extension, 
                                                    _typeinfo_for_Botan::TLS::Application_Layer_Protocol_Notification, 
                                                    0) == 0)
                                                __builtin_memset(&var_80, 0, 0x18)
                                            else
                                                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
                                                    &var_80)
                                        
                                        (*(*x23_3 + 0x78))(x23_3, &var_80)
                                        
                                        if ((zx.d(*(arg1 + 0xd8)) & 1) != 0)
                                            operator delete(*(arg1 + 0xe8))
                                        
                                        int128_t v0_5 = var_150.o
                                        *(arg1 + 0xe8) = j_27
                                        *(arg1 + 0xd8) = v0_5
                                        void* x23_4 = var_80.q
                                        var_150.w = 0
                                        
                                        if (x23_4 != 0)
                                            char* x8_94 = var_80:8.q
                                            void* x0_98
                                            
                                            if (x8_94 == x23_4)
                                                x0_98 = x23_4
                                            else
                                                char* x25_5 = x8_94
                                                
                                                do
                                                    x25_5 = &x25_5[-0x18]
                                                    
                                                    if ((zx.d(*x25_5) & 1) != 0)
                                                        operator delete(*(x8_94 - 8))
                                                    
                                                    x8_94 = x25_5
                                                while (x23_4 != x25_5)
                                                
                                                x0_98 = var_80.q
                                            
                                            var_80:8.q = x23_4
                                            operator delete(x0_98)
                                        
                                        uint64_t x8_97 = zx.q(*(arg1 + 0xd8))
                                        uint64_t x8_98
                                        
                                        if ((x8_97.d & 1) != 0)
                                            x8_98 = *(arg1 + 0xe0)
                                        else
                                            x8_98 = x8_97 u>> 1
                                        
                                        if (x8_98 == 0)
                                            int64_t* x23_6 = *(arg1 + 0x110)
                                            
                                            if (x23_6 != 0)
                                                int64_t* j_24 = *(arg3 + 0x100) + 0x90
                                                int64_t* j_10 = *j_24
                                                void* var_2e8
                                                
                                                if (j_10 == 0)
                                                    __builtin_memset(&var_2e8, 0, 0x18)
                                                else
                                                    int64_t* j_16 = j_24
                                                    
                                                    do
                                                        int32_t x11_16 = j_10[4].d
                                                        
                                                        if (x11_16 s>= 0x10)
                                                            j_16 = j_10
                                                        
                                                        j_10 = j_10[zx.q(x11_16 s< 0x10 ? 1 : 0)]
                                                    while (j_10 != 0)
                                                    
                                                    if (j_16 == j_24 || j_16[4].d s> 0x10)
                                                        __builtin_memset(&var_2e8, 0, 0x18)
                                                    else
                                                        int64_t x0_107 = j_16[5]
                                                        
                                                        if (x0_107 == 0)
                                                            __builtin_memset(&var_2e8, 0, 0x18)
                                                        else if (__dynamic_cast(x0_107, 
                                                                _typeinfo_for_Botan::TLS::Extension, 
                                                                _typeinfo_for_Botan::TLS::Application_Layer_Protocol_Notification, 
                                                                0) == 0)
                                                            __builtin_memset(&var_2e8, 0, 0x18)
                                                        else
                                                            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
                                                                &var_2e8)
                                                            x23_6 = *(arg1 + 0x110)
                                                
                                                if (x23_6 == 0)
                                                    sub_a58ab4()
                                                    noreturn
                                                
                                                (*(*x23_6 + 0x30))(x23_6, &var_2e8)
                                                
                                                if ((zx.d(*(arg1 + 0xd8)) & 1) != 0)
                                                    operator delete(*(arg1 + 0xe8))
                                                
                                                int128_t v0_6 = var_150.o
                                                *(arg1 + 0xe8) = j_27
                                                *(arg1 + 0xd8) = v0_6
                                                void* x22_7 = var_2e8
                                                var_150.w = 0
                                                
                                                if (x22_7 != 0)
                                                    char* var_2e0
                                                    char* x8_102 = var_2e0
                                                    void* x0_114
                                                    
                                                    if (x8_102 == x22_7)
                                                        x0_114 = x22_7
                                                    else
                                                        char* x23_7 = x8_102
                                                        
                                                        do
                                                            x23_7 = &x23_7[-0x18]
                                                            
                                                            if ((zx.d(*x23_7) & 1) != 0)
                                                                operator delete(*(x8_102 - 8))
                                                            
                                                            x8_102 = x23_7
                                                        while (x22_7 != x23_7)
                                                        
                                                        x0_114 = var_2e8
                                                    
                                                    void* var_2e0_1 = x22_7
                                                    operator delete(x0_114)
                            
                            if (x24_4 == 0)
                                Botan::TLS::Server::session_create(arg1, arg3.b)
                            else
                                Botan::TLS::Server::session_resume(arg1, arg3.b, 
                                    zx.q(j_26 != x0_78 ? 1 : 0))
                            
                            Botan::TLS::Session::~Session()
                        
                        void* result = var_1d0.q
                        
                        if (result == 0)
                            return result
                        
                        void* result_1 = result
                        return operator delete(result)
                    
                    i_1 = i_3
                    i_3 -= 1
                    x23 += 1
                while (i_1 != 1)
else
    Botan::assertion_failure("epoch0_restart implies active_state != nullptr", 
        "Can't restart with a dead connection", "process_client_hello_msg", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x151a3)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    var_1c8_3 = x23
void** x0_41 = __cxa_allocate_exception(0x28)
int64_t x0_42
int128_t v0_2
x0_42, v0_2 = operator new(0x30)
int64_t var_140_1 = x0_42
var_150.o = data_71b5a0
__builtin_strncpy(x0_42, "Client did not offer NULL compression", 0x26)
*x0_41 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_41[1])
x0_41[4].d = 0x2f
*x0_41 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_41, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
