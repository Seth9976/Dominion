// 函数: _ZN5Botan3TLS6Client21process_handshake_msgEPKNS0_15Handshake_StateERS2_NS0_14Handshake_TypeERKNSt6__ndk16vectorIhNS7_9allocatorIhEEEEb
// 地址: 0xe6654c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x5

if ((entry_x5 & 1) != 0)
    Botan::assertion_failure("epoch0_restart == false", &data_793a18, "process_handshake_msg", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x14283)
else
    Botan::TLS::Handshake_State& i_8 = arg2
    int32_t x24_1 = arg4.d
    Botan::TLS::Policy* x23_1 = arg5
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_1 = __dynamic_cast(arg3, 
        _typeinfo_for_Botan::TLS::Handshake_State, 
        &_typeinfo_for_Botan::TLS::(anonymous namespace)::Client_Handshake_State, 0)
    
    if (x0_1 != 0)
        char var_270
        void* result_13
        
        if (i_8 != 0 && x24_1 == 0)
            Botan::TLS::Hello_Request::Hello_Request(&var_270)
            
            if (*(x0_1 + 0x100) != 0)
                void** x0_256 = __cxa_allocate_exception(0x28)
                int64_t x0_257
                int128_t v0_9
                x0_257, v0_9 = operator new(0x30)
                v0_9 = data_71b5a0
                int64_t var_190_7 = x0_257
                __builtin_strncpy(x0_257, "Cannot renegotiate during a handshake", 0x26)
                result_13.o = v0_9
                *x0_256 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_256[1])
                x0_256[4].d = 0x28
                *x0_256 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_256, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            if (((*(**(arg1 + 0x28) + 0x70))() & 1) == 0)
                if (((*(**(arg1 + 0x28) + 0x78))() & 1) == 0)
                    result_13.b = 0
                    result_13:4.d = 0x64
                    return Botan::TLS::Channel::send_alert(arg1)
                
                void** x0_261 = __cxa_allocate_exception(0x28)
                int64_t x0_262
                int128_t v0_10
                x0_262, v0_10 = operator new(0x30)
                v0_10 = data_71b5a0
                int64_t var_190_8 = x0_262
                __builtin_strncpy(x0_262, "Client policy prohibits renegotiation", 0x26)
                result_13.o = v0_10
                *x0_261 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_261[1])
                x0_261[4].d = 0x64
                *x0_261 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_261, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::TLS::Handshake_State const* x20_1 = arg1
            
            if ((Botan::TLS::Channel::secure_renegotiation_supported() & 1) == 0)
                int32_t x0_8 = (*(**(x20_1 + 0x28) + 0x58))()
                x20_1 = arg1
                
                if ((x0_8 & 1) == 0)
                    void** x0_270 = __cxa_allocate_exception(0x28)
                    int64_t x0_271
                    int128_t v0_12
                    x0_271, v0_12 = operator new(0x30)
                    (*"re renegotiation")[0].o
                    int64_t var_190_10 = x0_271
                    v0_12 = data_71a900
                    __builtin_strncpy(x0_271, "Client policy prohibits insecure renegotiation", 
                        0x2f)
                    result_13.o = v0_12
                    *x0_270 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_270[1])
                    x0_270[4].d = 0x28
                    *x0_270 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                    __cxa_throw(x0_270, _typeinfo_for_Botan::TLS::TLS_Exception, 
                        Botan::Exception::~Exception)
                    noreturn
            
            *(x0_1 + 0x178) = 1
            return Botan::TLS::Client::initiate_handshake(x20_1, x0_1.b)
        
        Botan::TLS::Handshake_State::confirm_transition_to(x0_1)
        void* result
        void* result_2
        
        if (x24_1 == 3)
            *(x0_1 + 0x18) |= 9
            Botan::TLS::Hello_Verify_Request::Hello_Verify_Request(&result_13)
            Botan::TLS::Handshake_State::hello_verify_request(x0_1)
            result = result_2
            result_13 = _vtable_for_Botan::TLS::Hello_Verify_Request + 0x10
            
            if (result != 0)
                void* result_3 = result
                return operator delete(result)
        else
            uint16_t var_1c0
            void* var_1b0
            void* var_190
            void* var_98
            char var_80
            uint64_t i_44
            
            if (x24_1 == 0x14)
                int64_t* x0_15 = operator new(0x20)
                x0_15[2] = 0
                x0_15[3] = 0
                int64_t* x22_1 = x0_15
                *x0_15 = _vtable_for_Botan::TLS::Finished + 0x10
                x0_15[1] = 0
                int64_t x25_1 = *x23_1
                int64_t x8_13 = *(x23_1 + 8)
                uint64_t x24_2 = x8_13 - x25_1
                
                if (x8_13 != x25_1)
                    if ((x24_2 & 0xffffffff80000000) != 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    label_e68a38:
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    label_e68a64:
                        Botan::assertion_failure("m_sequence_numbers", 
                            "Have a sequence numbers object", "sequence_numbers", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)
                    label_e68a6c:
                        void** x0_276 = __cxa_allocate_exception(0x28)
                        int64_t x0_277
                        int128_t v0_13
                        x0_277, v0_13 = operator new(0x30)
                        (*"ling ciphersuite")[0].o
                        int64_t var_190_11 = x0_277
                        v0_13 = data_71cfc0
                        __builtin_strncpy(x0_277, "Server replied with a signaling ciphersuite", 
                            0x2c)
                        result_13.o = v0_13
                        *x0_276 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_276[1])
                        x0_276[4].d = 0x28
                        *x0_276 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                        __cxa_throw(x0_276, _typeinfo_for_Botan::TLS::TLS_Exception, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    int64_t x0_17 = operator new(x24_2)
                    int64_t x21_3 = x0_17 + x24_2
                    x22_1[1] = x0_17
                    x22_1[2] = x0_17
                    x22_1[3] = x21_3
                    memcpy(x0_17, x25_1, x24_2)
                    x22_1[2] = x21_3
                
                void** x21_4 = *(x0_1 + 0x158)
                *(x0_1 + 0x158) = x22_1
                
                if (x21_4 != 0)
                    void* x0_18 = x21_4[1]
                    *x21_4 = _vtable_for_Botan::TLS::Finished + 0x10
                    
                    if (x0_18 != 0)
                        x21_4[2] = x0_18
                        operator delete(x0_18)
                    
                    operator delete(x21_4)
                    x22_1 = *(x0_1 + 0x158)
                
                int64_t* x0_20 = *(x0_1 + 8)
                (*(*x0_20 + 0x70))(x0_20, x22_1)
                void* x21_5 = *(x0_1 + 0x158)
                sub_e4e140(&result_13, x0_1, 2)
                char* x8_17 = *(x21_5 + 8)
                void* result_5 = result_13
                void* i_31 = *(x21_5 + 0x10) - x8_17
                int32_t x21_6
                
                if (i_31 != result_2 - result_5)
                    x21_6 = 0
                    
                    if (result_5 != 0)
                        result_2 = result_5
                        operator delete(result_5)
                else
                    var_270 = 0
                    
                    if (i_31 != 0)
                        void* result_15 = result_5
                        void* i
                        
                        do
                            char x11_1 = *x8_17
                            x8_17 = &x8_17[1]
                            char x12_1 = *result_15
                            result_15 += 1
                            i = i_31
                            i_31 -= 1
                            var_270 |= x12_1 ^ x11_1
                        while (i != 1)
                    
                    uint32_t x8_18 = zx.d(var_270)
                    x21_6 = sx.d((x8_18.b - 1) & (not.d(x8_18)).b) s< 0 ? 1 : 0
                    
                    if (result_5 != 0)
                        result_2 = result_5
                        operator delete(result_5)
                
                if ((x21_6 & 1) == 0)
                    void** x0_266 = __cxa_allocate_exception(0x28)
                    int64_t x0_267
                    int128_t v0_11
                    x0_267, v0_11 = operator new(0x20)
                    int64_t var_190_9 = x0_267
                    result_13.o = data_71c370
                    __builtin_strncpy(x0_267, "Finished message didn\'t verify", 0x1f)
                    *x0_266 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_266[1])
                    x0_266[4].d = 0x33
                    *x0_266 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                    __cxa_throw(x0_266, _typeinfo_for_Botan::TLS::TLS_Exception, 
                        Botan::Exception::~Exception)
                    noreturn
                
                int64_t* x0_37 = *(x0_1 + 0x10)
                (*(*x0_37 + 0x20))(x0_37, x23_1, 0x14)
                void* x25_3 = *(x0_1 + 0xe8)
                void* result_16 = result_13
                void* x24_3 = *(x0_1 + 0xf0)
                void* x26_1 = x24_3 - x25_3
                void* x28_2 = result_2 - result_16 + x26_1
                
                if (*(x0_1 + 0xf8) - x25_3 u< x28_2)
                    void* x0_39 = operator new(x28_2)
                    x24_3 = x0_39 + x26_1
                    
                    if (x26_1 s>= 1)
                        memcpy(x0_39, x25_3, x26_1)
                    
                    *(x0_1 + 0xe8) = x0_39
                    *(x0_1 + 0xf0) = x24_3
                    *(x0_1 + 0xf8) = x0_39 + x28_2
                    
                    if (x25_3 != 0)
                        operator delete(x25_3)
                        x24_3 = *(x0_1 + 0xf0)
                        result_16 = result_13
                
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                    x0_1 + 0xe8, x24_3, result_16)
                void* result_7 = result_13
                
                if (result_7 != 0)
                    result_2 = result_7
                    operator delete(result_7)
                
                if (*(x0_1 + 0x160) == 0)
                    int64_t* x0_43 = *(x0_1 + 0x10)
                    result_13 = _vtable_for_Botan::TLS::Change_Cipher_Spec + 0x10
                    (*(*x0_43 + 8))(x0_43, &result_13)
                    void* var_2a0
                    
                    if (var_2a0 != 0)
                        void* var_298_1 = var_2a0
                        operator delete(var_2a0)
                    
                    Botan::TLS::Channel::change_cipher_spec_writer(arg1)
                    Botan::TLS::Handshake_IO* x0_46 = operator new(0x20)
                    Botan::TLS::Handshake_IO* x21_9 = x0_46
                    Botan::TLS::Finished::Finished(x0_46, *(x0_1 + 0x10), x0_1)
                    void** x22_5 = *(x0_1 + 0x160)
                    *(x0_1 + 0x160) = x21_9
                    
                    if (x22_5 != 0)
                        void* x0_47 = x22_5[1]
                        *x22_5 = _vtable_for_Botan::TLS::Finished + 0x10
                        
                        if (x0_47 != 0)
                            x22_5[2] = x0_47
                            operator delete(x0_47)
                        
                        operator delete(x22_5)
                        x21_9 = *(x0_1 + 0x160)
                    
                    int64_t* x0_49 = *(x0_1 + 8)
                    (*(*x0_49 + 0x70))(x0_49, x21_9)
                
                void* x20_4 = *(x0_1 + 0x108)
                __builtin_memset(&var_270, 0, 0x18)
                int64_t x9_12 = *(x20_4 + 0x10)
                int64_t x8_43 = *(x20_4 + 0x18)
                uint64_t x22_6 = x8_43 - x9_12
                void* var_268_1
                
                if (x8_43 != x9_12)
                    if ((x22_6 & 0xffffffff80000000) != 0)
                        goto label_e68a38
                    
                    void* x0_51 = operator new(x22_6)
                    var_270.q = x0_51
                    void* var_268_2 = x0_51
                    void* var_260_1 = x0_51 + x22_6
                    int64_t x1_22 = *(x20_4 + 0x10)
                    void* x21_10 = x0_51
                    size_t x20_5 = *(x20_4 + 0x18) - x1_22
                    
                    if (x20_5 s>= 1)
                        memcpy(x21_10, x1_22, x20_5)
                        x21_10 += x20_5
                    
                    var_268_1 = x21_10
                
                Botan::TLS::Handshake_State::session_ticket()
                
                if (var_270.q == var_268_1 && var_80.q != i_44)
                    Botan::TLS::make_hello_random(*(arg1 + 0x30), *(arg1 + 0x28))
                    void* x0_55 = var_270.q
                    
                    if (x0_55 != 0)
                        var_268_1 = x0_55
                        operator delete(x0_55)
                    
                    var_270.o = result_13.o
                    void* var_260_2 = var_190
                
                int64_t* i_42 = *(x0_1 + 0x108) + 0x50
                int64_t* i_2 = *i_42
                uint64_t x21_11 = zx.q(i_42[-9].w)
                uint32_t x22_7 = zx.d(i_42[-2].w)
                int32_t x23_2
                int32_t x24_6
                
                if (i_2 == 0)
                    x23_2 = 0
                    x24_6 = 0
                else
                    int64_t* i_36 = i_42
                    int64_t* i_23 = i_42
                    int64_t* i_1 = i_2
                    
                    do
                        int32_t x10_7 = i_1[4].d
                        
                        if (x10_7 s>= 0x17)
                            i_23 = i_1
                        
                        i_1 = i_1[zx.q(x10_7 s< 0x17 ? 1 : 0)]
                    while (i_1 != 0)
                    
                    if (i_23 == i_42)
                        x23_2 = 0
                    else if (i_23[4].d s<= 0x17)
                        int64_t x0_56 = i_23[5]
                        
                        if (x0_56 == 0)
                            x23_2 = 0
                        else
                            x23_2 = __dynamic_cast(x0_56, _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0 ? 1 : 0
                    else
                        x23_2 = 0
                    
                    do
                        int32_t x8_99 = i_2[4].d
                        
                        if (x8_99 s>= 0x16)
                            i_36 = i_2
                        
                        i_2 = i_2[zx.q(x8_99 s< 0x16 ? 1 : 0)]
                    while (i_2 != 0)
                    
                    if (i_36 == i_42 || i_36[4].d s> 0x16)
                        x24_6 = 0
                    else
                        int64_t x0_109 = i_36[5]
                        
                        if (x0_109 == 0)
                            x24_6 = 0
                        else
                            x24_6 = __dynamic_cast(x0_109, _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::Encrypt_then_MAC, 0) != 0 ? 1 : 0
                
                void* x0_112 = __dynamic_cast(x0_1, _typeinfo_for_Botan::TLS::Handshake_State, 
                    &_typeinfo_for_Botan::TLS::(anonymous namespace)::Client_Handshake_State, 0)
                
                if (x0_112 == 0)
                    __cxa_bad_cast()
                    noreturn
                
                if (*(x0_112 + 0x170) != 0)
                    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
                        &var_98)
                else if (*(x0_1 + 0x110) == 0)
                    __builtin_memset(&var_98, 0, 0x18)
                else
                    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
                        &var_98)
                
                var_1c0 = 0
                *(x0_1 + 0x108)
                int16_t var_2c0_1 = Botan::TLS::Server_Hello::srtp_profile()
                void* __offset(Botan::TLS::Handshake_State, 0xd8) var_2d0_1 = arg1 + 0xd8
                uint16_t* var_2c8_1 = &var_1c0
                void** var_2e0_1 = &var_98
                char* var_2d8_1 = &var_80
                Botan::TLS::Session::Session(&result_13, &var_270, x0_1 + 0x70, x21_11, 
                    zx.q(x22_7), 1, zx.q(x23_2), zx.q(x24_6))
                
                if ((zx.d(var_1c0.b) & 1) != 0)
                    operator delete(var_1b0)
                
                void* x20_14 = var_98
                
                if (x20_14 != 0)
                    int64_t* var_90
                    int64_t* x21_17 = var_90
                    void* x0_120
                    
                    if (x21_17 == x20_14)
                        x0_120 = x20_14
                    else
                        do
                            x21_17 = &x21_17[-0x11]
                            (*(*x21_17 + 0x10))(x21_17)
                        while (x20_14 != x21_17)
                        
                        x0_120 = var_98
                    
                    void* var_90_2 = x20_14
                    operator delete(x0_120)
                
                int64_t* x0_121 = *(arg1 + 0x18)
                int32_t x0_122 = (*(*x0_121 + 0x28))(x0_121, &result_13)
                
                if (var_268_1 != var_270.q && *(x0_1 + 0x170) == 0)
                    int64_t* x0_123 = *(arg1 + 0x20)
                    
                    if ((x0_122 & 1) == 0)
                        (*(*x0_123 + 0x10))(x0_123, &result_2)
                    else
                        (*(*x0_123 + 0x20))(x0_123, &result_13)
                
                int64_t* x0_124 = *(arg1 + 0x40)
                void* x8_117 = *(arg1 + 0x48)
                *(arg1 + 0x40) = x8_117
                *(arg1 + 0x48) = 0
                
                if (x0_124 != 0)
                    (*(*x0_124 + 8))()
                    x8_117 = *(arg1 + 0x40)
                
                if (zx.d(*(x8_117 + 0x21)) u<= 0xfa)
                    int64_t* x0_125 = *(arg1 + 0x38)
                    
                    if (x0_125 == 0)
                        goto label_e68a64
                    
                    int16_t x0_126 = (*(*x0_125 + 0x28))()
                    sub_e5d01c(x0_126, arg1 + 0x50)
                    sub_e5d01c(x0_126, arg1 + 0x68)
                
                (*(**(arg1 + 0x18) + 0x30))()
                Botan::TLS::Session::~Session()
                uint64_t i_45 = var_80.q
                
                if (i_45 != 0)
                    i_44 = i_45
                    operator delete(i_45)
                
                result = var_270.q
                
                if (result != 0)
                    void* result_1 = result
                    return operator delete(result)
            else
                if (x24_1 == 0xfe)
                    *(x0_1 + 0x18) |= 0x4000
                    return Botan::TLS::Channel::change_cipher_spec_reader(arg1)
                
                int64_t* x0_22 = *(x0_1 + 0x10)
                (*(*x0_22 + 0x20))(x0_22, x23_1, zx.q(x24_1))
                void* x28_1 = *(x0_1 + 0xe8)
                void* result_17 = result_13
                int64_t x27_1 = *(x0_1 + 0xf0)
                size_t fp_1 = x27_1 - x28_1
                uint64_t x20_2 = result_2 - result_17 + fp_1
                
                if (*(x0_1 + 0xf8) - x28_1 u< x20_2)
                    int64_t x0_24 = operator new(x20_2)
                    x27_1 = x0_24 + fp_1
                    
                    if (fp_1 s>= 1)
                        memcpy(x0_24, x28_1, fp_1)
                    
                    *(x0_1 + 0xe8) = x0_24
                    *(x0_1 + 0xf0) = x27_1
                    *(x0_1 + 0xf8) = x0_24 + x20_2
                    
                    if (x28_1 != 0)
                        operator delete(x28_1)
                        x27_1 = *(x0_1 + 0xf0)
                        result_17 = result_13
                
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                    x0_1 + 0xe8, x27_1, result_17)
                void* result_6 = result_13
                
                if (result_6 != 0)
                    result_2 = result_6
                    operator delete(result_6)
                
                uint64_t x8_26 = zx.q(x24_1 - 2)
                
                if (x8_26.d u> 0x14)
                    if (x24_1 == 0xfe)
                        *(x0_1 + 0x18) |= 0x4000
                        return Botan::TLS::Channel::change_cipher_spec_reader(arg1)
                    
                label_e66c90:
                    void** x0_58 = __cxa_allocate_exception(0x28)
                    int64_t x0_59
                    int128_t v0_3
                    x0_59, v0_3 = operator new(0x30)
                    v0_3 = data_71d3f0
                    int64_t var_190_2 = x0_59
                    __builtin_strncpy(x0_59, "Unknown handshake message received", 0x23)
                    result_13.o = v0_3
                    *x0_58 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_58[1])
                    x0_58[4].d = 0xa
                    *x0_58 = _vtable_for_Botan::TLS::Unexpected_Message + 0x10
                    __cxa_throw(x0_58, _typeinfo_for_Botan::TLS::Unexpected_Message, 
                        Botan::Exception::~Exception)
                    noreturn
                
                int64_t var_26f
                void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_268
                void* __offset(vtable_for_Botan::OID, 0x10) var_260
                void* var_70
                
                switch (x8_26)
                    case 0
                        Botan::TLS::Server_Hello::Server_Hello(operator new(0x60))
                        Botan::TLS::Handshake_State::server_hello(x0_1)
                        void* x8_27 = *(x0_1 + 0x100)
                        int16_t* x8_28 = *(x8_27 + 0x40)
                        int64_t x10_4 = *(x8_27 + 0x48)
                        void* x9_5 = x10_4 - x8_28
                        
                        if (x10_4 == x8_28)
                        label_e668fc:
                            void** x0_30 = __cxa_allocate_exception(0x28)
                            int64_t x0_31
                            int128_t v0_1
                            x0_31, v0_1 = operator new(0x30)
                            (*"e we didn't send")[0].o
                            int64_t var_190_1 = x0_31
                            v0_1 = data_71a900
                            __builtin_strncpy(x0_31, 
                                "Server replied with ciphersuite we didn\'t send", 0x2f)
                            result_13.o = v0_1
                            *x0_30 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_30[1])
                            x0_30[4].d = 0x28
                            *x0_30 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_30, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        void* x12_2
                        
                        x12_2 = x9_5 s>= 0 ? x9_5 : -ffffffffffffffff
                        
                        void* x10_5 = x8_28 - x10_4
                        void* x12_3
                        
                        x12_3 = x12_2 s< 1 ? x12_2 : 1
                        
                        uint32_t i_3 = zx.d(*(*(x0_1 + 0x108) + 0x40))
                        void* x9_6
                        
                        x9_6 = x10_5 s> x9_5 ? x10_5 : x9_5
                        
                        int64_t x9_8 = x12_3 * (x9_6 u>> 1)
                        
                        while (zx.d(*x8_28) != i_3)
                            int64_t temp2_1 = x9_8
                            x9_8 -= 1
                            x8_28 = &x8_28[1]
                            
                            if (temp2_1 == 1)
                                goto label_e668fc
                        
                        int128_t v0_5
                        int128_t v1_1
                        int128_t v2_1
                        v0_5, v1_1, v2_1 = Botan::TLS::Ciphersuite::all_known_ciphersuites()
                        void* x8_83 = data_23ecc48
                        int64_t x9_22 = data_23ecc50
                        
                        if (x9_22 != x8_83)
                            uint64_t i_4 = ((x9_22 - x8_83) s>> 3) * -0x71c71c71c71c71c7
                            
                            do
                                uint64_t i_34 = i_4 u>> 1
                                int16_t* x13_2 = x8_83 + i_34 * 0x48
                                uint32_t x14_1 = zx.d(*x13_2)
                                
                                if (x14_1 u< i_3)
                                    i_4 += not.q(i_34)
                                else
                                    i_4 = i_34
                                
                                if (x14_1 u< i_3)
                                    x8_83 = &x13_2[0x24]
                            while (i_4 != 0)
                        
                        if (x8_83 == x9_22 || zx.d(*x8_83) != i_3)
                            __builtin_memset(&result_13, 0, 0x48)
                            var_190.d = 0x10001
                            __builtin_memset(&var_190:4, 0, 0x2d)
                        else
                            result_13.o = *x8_83
                            int64_t var_160_1 = *(x8_83 + 0x40)
                            int128_t var_180_1 = *(x8_83 + 0x20)
                            int128_t var_170_1 = *(x8_83 + 0x30)
                            var_190.o = *(x8_83 + 0x10)
                        
                        *(*(x0_1 + 0x108) + 8)
                        
                        if ((Botan::TLS::Ciphersuite::usable_in_version(&result_13) & 1) == 0)
                            void** x0_292 = __cxa_allocate_exception(0x28)
                            int64_t x0_293
                            int128_t v0_16
                            x0_293, v0_16 = operator new(0x50)
                            v0_16 = data_71aa50
                            int64_t var_190_13 = x0_293
                            __builtin_strncpy(x0_293, 
                                "Server replied using a ciphersuite not allowed in version it offered", 
                                0x45)
                            result_13.o = v0_16
                            *x0_292 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_292[1])
                            x0_292[4].d = 0x28
                            *x0_292 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_292, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        void* x8_85 = *(x0_1 + 0x108)
                        uint32_t x9_25 = zx.d(*(x8_85 + 0x40))
                        
                        if (x9_25 == 0x5600 || x9_25 == 0xff)
                            goto label_e68a6c
                        
                        if (zx.d(*(x8_85 + 0x42)) != 0)
                            void** x0_297 = __cxa_allocate_exception(0x28)
                            int64_t x0_298
                            int128_t v0_17
                            x0_298, v0_17 = operator new(0x30)
                            (*"mpression method")[0].o
                            int64_t var_190_14 = x0_298
                            v0_17 = data_71c860
                            __builtin_strncpy(x0_298, 
                                "Server replied with non-null compression method", 0x30)
                            result_13.o = v0_17
                            *x0_297 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_297[1])
                            x0_297[4].d = 0x2f
                            *x0_297 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_297, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        result_13.w = *(*(x0_1 + 0x100) + 8)
                        var_270.w = *(x8_85 + 8)
                        
                        if ((Botan::TLS::Protocol_Version::operator>(&result_13) & 1) != 0
                                && *(*(*(x0_1 + 0x108) + 0x28) + 0x18) == 0x4452474e574f44)
                            goto label_e691e4
                        
                        *(x0_1 + 0x100)
                        Botan::TLS::Extensions::extension_types()
                        *(x0_1 + 0x108)
                        Botan::TLS::Extensions::extension_types()
                        int64_t x0_100 = var_80.q
                        int64_t x2_19 = var_270.q
                        __builtin_memset(&var_98, 0, 0x18)
                        std::__ndk1::__set_difference<std::__ndk1::__less<Botan::TLS::Handshake_Extension_Type, Botan::TLS::Handshake_Extension_Type>&, std::__ndk1::__tree_const_iterator<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__tree_node<Botan::TLS::Handshake_Extension_Type, void*>*, int64_t>, std::__ndk1::__tree_const_iterator<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__tree_node<Botan::TLS::Handshake_Extension_Type, void*>*, int64_t>, std::__ndk1::back_insert_iterator<std::__ndk1::vector<Botan::TLS::Handshake_Extension_Type, std::__ndk1::allocator<Botan::TLS::Handshake_Extension_Type> > > >(
                            x0_100, &i_44, x2_19, &var_26f:7, &var_98, &result_13)
                        int64_t var_90_1
                        
                        if (var_98 != var_90_1)
                            result_13 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x18
                            int64_t (* var_130)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x40
                            std::__ndk1::ios_base::init(&var_130)
                            int64_t var_a8 = 0
                            int32_t var_a0 = 0xffffffff
                            result_13 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x18
                            var_130 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x40
                            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                            result_2 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x10
                            int128_t var_158_1
                            __builtin_memset(&var_158_1, 0, 0x20)
                            int32_t var_138_1 = 0x10
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                &result_13, "Server replied with unsupported extensions:", 0x2b)
                            void* x22_19 = var_98
                            
                            if (x22_19 != var_90_1)
                                do
                                    int32_t x0_305 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                        &result_13, " ", 1)
                                    *x22_19
                                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                                        x0_305)
                                    x22_19 += 4
                                while (var_90_1 != x22_19)
                            
                            void** x0_306 = __cxa_allocate_exception(0x28)
                            std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                            *x0_306 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_306[1])
                            x0_306[4].d = 0x6e
                            *x0_306 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_306, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        *(x0_1 + 0x108)
                        int16_t x0_102 = Botan::TLS::Server_Hello::srtp_profile()
                        
                        if (zx.d(x0_102) != 0)
                            *(x0_1 + 0x100)
                            Botan::TLS::Client_Hello::srtp_profiles()
                            void* result_8 = result_13
                            void* result_10 = result_2
                            void* x10_11 = result_10 - result_8
                            
                            if (result_10 != result_8)
                                void* x11_10
                                
                                x11_10 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
                                
                                void* x8_93 = result_8 - result_10
                                void* x11_11
                                
                                x11_11 = x11_10 s< 1 ? x11_10 : 1
                                
                                void* x8_94
                                
                                x8_94 = x8_93 s> x10_11 ? x8_93 : x10_11
                                
                                int64_t i_5 = 0
                                
                                do
                                    if (zx.d(*(result_8 + (i_5 << 1))) == zx.d(x0_102))
                                        result_2 = result_8
                                        operator delete(result_8)
                                        goto label_e67628
                                    
                                    i_5 += 1
                                while (x11_11 * (x8_94 u>> 1) != i_5)
                                
                                result_2 = result_8
                                operator delete(result_8)
                            else if (result_10 != 0)
                                operator delete(result_10)
                            
                            void** x0_104 = __cxa_allocate_exception(0x28)
                            int64_t x0_105
                            int128_t v0_6
                            x0_105, v0_6 = operator new(0x40)
                            v0_6 = data_71d0c0
                            int64_t var_190_4 = x0_105
                            __builtin_strncpy(x0_105, 
                                "Server replied with DTLS-SRTP alg we did not send", 0x32)
                            result_13.o = v0_6
                            *x0_104 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_104[1])
                            x0_104[4].d = 0x28
                            *x0_104 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_104, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                    label_e67628:
                        int64_t* x0_130 = *(arg1 + 0x18)
                        (*(*x0_130 + 0x88))(x0_130, *(x0_1 + 0x108) + 0x48, 2)
                        void* x8_132 = *(x0_1 + 0x108)
                        *(x0_1 + 0x20) = *(x8_132 + 8)
                        void* i_6 = *(x8_132 + 0x50)
                        int128_t v0_7
                        
                        if (i_6 == 0)
                            result_13.w = 0
                        else
                            void* i_32 = x8_132 + 0x50
                            
                            do
                                int32_t x11_12 = *(i_6 + 0x20)
                                
                                if (x11_12 s>= 0x10)
                                    i_32 = i_6
                                
                                i_6 = *(i_6 + (zx.q(x11_12 s< 0x10 ? 1 : 0) << 3))
                            while (i_6 != 0)
                            
                            if (i_32 == x8_132 + 0x50 || *(i_32 + 0x20) s> 0x10)
                                result_13.w = 0
                            else
                                int64_t x0_131 = *(i_32 + 0x28)
                                
                                if (x0_131 == 0)
                                    result_13.w = 0
                                else
                                    int64_t x0_132
                                    x0_132, v0_7 = __dynamic_cast(x0_131, 
                                        _typeinfo_for_Botan::TLS::Extension, 
                                        _typeinfo_for_Botan::TLS::Application_Layer_Protocol_Notification, 
                                        0)
                                    
                                    if (x0_132 == 0)
                                        result_13.w = 0
                                    else
                                        Botan::TLS::Application_Layer_Protocol_Notification::single_protocol()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &result_13)
                        
                        if ((zx.d(*(arg1 + 0x110)) & 1) != 0)
                            operator delete(*(arg1 + 0x120))
                        
                        v0_7 = result_13.o
                        *(arg1 + 0x120) = var_190
                        *(arg1 + 0x110) = v0_7
                        *(x0_1 + 0x108)
                        Botan::TLS::Channel::secure_renegotiation_check(arg1)
                        Botan::TLS::Handshake_State* i_43 = *(x0_1 + 0x108)
                        char* x8_137 = *(i_43 + 0x10)
                        int64_t x9_35 = *(i_43 + 0x18)
                        
                        if (x8_137 == x9_35)
                            goto label_e67830
                        
                        void* x10_14 = *(x0_1 + 0x100)
                        char* x11_14 = *(x10_14 + 0x10)
                        
                        if (x9_35 - x8_137 != *(x10_14 + 0x18) - x11_14)
                            goto label_e67830
                        
                        do
                            if (zx.d(*x8_137) != zx.d(*x11_14))
                                goto label_e67830
                            
                            x8_137 = &x8_137[1]
                            x11_14 = &x11_14[1]
                        while (x9_35 != x8_137)
                        
                        if (zx.d(*(i_43 + 8)) != zx.d(*(x10_14 + 8)))
                            void** x0_346 = __cxa_allocate_exception(0x28)
                            int64_t x0_347
                            int128_t v0_23
                            x0_347, v0_23 = operator new(0x30)
                            (*"th wrong version")[0].o
                            int64_t var_190_21 = x0_347
                            v0_23 = data_71ce10
                            __builtin_strncpy(x0_347, 
                                "Server resumed session but with wrong version", 0x2e)
                            result_13.o = v0_23
                            *x0_346 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_346[1])
                            x0_346[4].d = 0x28
                            *x0_346 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_346, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        i_43 += 0x50
                        i_8 = *i_43
                        void* x8_144
                        
                        if (i_8 == 0)
                        label_e68094:
                            x8_144 = *(x0_1 + 0x170)
                            
                            if (zx.d(*(x8_144 + 0x5a)) == 0)
                                goto label_e680b0
                            
                            void** x0_351 = __cxa_allocate_exception(0x28)
                            int64_t x0_352
                            int128_t v2_6
                            x0_352, v2_6 = operator new(0x40)
                            (*"ed master secret")[0].o
                            int64_t var_190_22 = x0_352
                            v2_6 = data_71b210
                            __builtin_strncpy(x0_352, 
                                "Server resumed session and removed extended master secret", 0x3a)
                            result_13.o = v2_6
                            *x0_351 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_351[1])
                            x0_351[4].d = 0x28
                            *x0_351 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_351, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        Botan::TLS::Handshake_State& i_35 = i_43
                        Botan::TLS::Handshake_State* i_25 = i_43
                        Botan::TLS::Handshake_State* i_7 = i_8
                        
                        do
                            int32_t x10_15 = *(i_7 + 0x20)
                            
                            if (x10_15 s>= 0x17)
                                i_25 = i_7
                            
                            i_7 = *(i_7 + (zx.q(x10_15 s< 0x17 ? 1 : 0) << 3))
                        while (i_7 != 0)
                        
                        if (i_25 != i_43 && *(i_25 + 0x20) s< 0x18)
                            int64_t x0_137 = *(i_25 + 0x28)
                            
                            if (x0_137 != 0 && __dynamic_cast(x0_137, 
                                    _typeinfo_for_Botan::TLS::Extension, 
                                    _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0
                                    && zx.d(*(*(x0_1 + 0x170) + 0x5a)) == 0)
                                void** x0_356 = __cxa_allocate_exception(0x28)
                                int64_t x0_357
                                int128_t v2_7
                                x0_357, v2_7 = operator new(0x40)
                                (*" extended master secret")[0].o
                                int64_t var_190_23 = x0_357
                                v2_7 = data_71c540
                                __builtin_strncpy(x0_357, 
                                    "Server resumed session but added extended master secret", 0x38)
                                result_13.o = v2_7
                                *x0_356 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_356[1])
                                x0_356[4].d = 0x28
                                *x0_356 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_356, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                        
                        do
                            int32_t x8_141 = *(i_8 + 0x20)
                            
                            if (x8_141 s>= 0x17)
                                i_35 = i_8
                            
                            i_8 = *(i_8 + (zx.q(x8_141 s< 0x17 ? 1 : 0) << 3))
                        while (i_8 != 0)
                        
                        if (i_35 == i_43 || *(i_35 + 0x20) s> 0x17)
                            goto label_e68094
                        
                        int64_t x0_139 = *(i_35 + 0x28)
                        
                        if (x0_139 == 0)
                            goto label_e68094
                        
                        if (__dynamic_cast(x0_139, _typeinfo_for_Botan::TLS::Extension, 
                                _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) == 0)
                            goto label_e68094
                        
                        x8_144 = *(x0_1 + 0x170)
                        int32_t x8_156
                        
                        if (x8_144 != 0)
                        label_e680b0:
                            Botan::TLS::Session_Keys::Session_Keys(&result_13, x0_1, 
                                x8_144.b + 0x38)
                            Botan::TLS::Session_Keys::operator=(x0_1 + 0x70)
                            Botan::TLS::Session_Keys::~Session_Keys()
                            int64_t* i_40 = *(x0_1 + 0x108) + 0x50
                            int64_t* i_9 = *i_40
                            
                            if (i_9 == 0)
                                x8_156 = 0x2000
                            else
                                int64_t* i_29 = i_40
                                
                                do
                                    int32_t x11_26 = i_9[4].d
                                    
                                    if (x11_26 s>= 0x23)
                                        i_29 = i_9
                                    
                                    i_9 = i_9[zx.q(x11_26 s< 0x23 ? 1 : 0)]
                                while (i_9 != 0)
                                
                                if (i_29 == i_40 || i_29[4].d s> 0x23)
                                    x8_156 = 0x2000
                                else
                                    int64_t x0_203 = i_29[5]
                                    
                                    if (x0_203 == 0)
                                        x8_156 = 0x2000
                                    else if (__dynamic_cast(x0_203, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Session_Ticket, 0) == 0)
                                        x8_156 = 0x2000
                                    else
                                        x8_156 = 0x1000
                        else
                            Botan::throw_invalid_state("is_a_resumption()", "resume_master_secret", 
                                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
                        label_e67830:
                            
                            if (i_8 != 0)
                                if (zx.d(*(i_8 + 0x20)) != zx.d(*(i_43 + 8)))
                                    void** x0_332 = __cxa_allocate_exception(0x28)
                                    int64_t x0_333
                                    int128_t v0_20
                                    x0_333, v0_20 = operator new(0x30)
                                    (*"er renegotiation")[0].o
                                    int64_t var_190_19 = x0_333
                                    v0_20 = data_71c1e0
                                    __builtin_strncpy(x0_333, 
                                        "Server changed version after renegotiation", 0x2b)
                                    result_13.o = v0_20
                                    *x0_332 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_332[1])
                                    x0_332[4].d = 0x46
                                    *x0_332 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_332, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                void* i_10 = *(i_43 + 0x50)
                                int32_t x20_16
                                
                                if (i_10 == 0)
                                    x20_16 = 0
                                else
                                    void* __offset(Botan::TLS::Handshake_State, 0x50) i_26 =
                                        i_43 + 0x50
                                    
                                    do
                                        int32_t x11_15 = *(i_10 + 0x20)
                                        
                                        if (x11_15 s>= 0x17)
                                            i_26 = i_10
                                        
                                        i_10 = *(i_10 + (zx.q(x11_15 s< 0x17 ? 1 : 0) << 3))
                                    while (i_10 != 0)
                                    
                                    if (i_26 == i_43 + 0x50 || *(i_26 + 0x20) s> 0x17)
                                        x20_16 = 0
                                    else
                                        int64_t x0_141 = *(i_26 + 0x28)
                                        
                                        if (x0_141 == 0)
                                            x20_16 = 0
                                        else
                                            x20_16 = __dynamic_cast(x0_141, 
                                                _typeinfo_for_Botan::TLS::Extension, 
                                                _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0)
                                                != 0 ? 1 : 0
                                
                                int64_t* i_39 = *(i_8 + 0x108) + 0x50
                                int64_t* i_11 = *i_39
                                
                                if (i_11 == 0)
                                label_e679b8:
                                    
                                    if ((x20_16 & 1) != 0)
                                    label_e67920:
                                        void** x0_145 = __cxa_allocate_exception(0x28)
                                        int64_t x0_146
                                        int128_t v0_8
                                        x0_146, v0_8 = operator new(0x40)
                                        v0_8 = data_71adb0
                                        int64_t var_190_5 = x0_146
                                        __builtin_strncpy(x0_146, 
                                            "Server changed its mind about extended master secret", 
                                            0x35)
                                        result_13.o = v0_8
                                        *x0_145 = _vtable_for_Botan::Exception + 0x10
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &x0_145[1])
                                        x0_145[4].d = 0x28
                                        *x0_145 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                        __cxa_throw(x0_145, 
                                            _typeinfo_for_Botan::TLS::TLS_Exception, 
                                            Botan::Exception::~Exception)
                                        noreturn
                                else
                                    int64_t* i_27 = i_39
                                    
                                    do
                                        int32_t x11_17 = i_11[4].d
                                        
                                        if (x11_17 s>= 0x17)
                                            i_27 = i_11
                                        
                                        i_11 = i_11[zx.q(x11_17 s< 0x17 ? 1 : 0)]
                                    while (i_11 != 0)
                                    
                                    if (i_27 == i_39 || i_27[4].d s> 0x17)
                                        goto label_e679b8
                                    
                                    int64_t x0_143 = i_27[5]
                                    
                                    if (x0_143 == 0)
                                        goto label_e679b8
                                    
                                    if (x20_16 != (__dynamic_cast(x0_143, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0 ? 1
                                            : 0))
                                        goto label_e67920
                            
                            void* x20_17 = *(x0_1 + 0x170)
                            *(x0_1 + 0x170) = 0
                            
                            if (x20_17 != 0)
                                Botan::TLS::Session::~Session()
                                operator delete(x20_17)
                                i_43 = *(x0_1 + 0x108)
                            
                            uint32_t x8_150 = zx.d(*(*(x0_1 + 0x100) + 8))
                            
                            if ((x8_150 u>> 8 u> 0xfa ? 1 : 0)
                                    != (zx.d(*(i_43 + 9)) u> 0xfa ? 1 : 0))
                                void** x0_310 = __cxa_allocate_exception(0x28)
                                int64_t x0_311
                                int128_t v2_3
                                x0_311, v2_3 = operator new(0x40)
                                (*" than we offered")[0].o
                                int64_t var_190_15 = x0_311
                                v2_3 = data_71ac40
                                __builtin_strncpy(x0_311, 
                                    "Server replied with different protocol type than we offered", 
                                    0x3c)
                                result_13.o = v2_3
                                *x0_310 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_310[1])
                                x0_310[4].d = 0x46
                                *x0_310 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_310, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            int16_t x9_46 = *(x0_1 + 0x20)
                            var_1c0 = x8_150.w
                            result_13.w = x9_46
                            
                            if ((Botan::TLS::Protocol_Version::operator>(&result_13) & 1) != 0)
                                void** x0_315 = __cxa_allocate_exception(0x28)
                                int64_t x0_316
                                int128_t v2_4
                                x0_316, v2_4 = operator new(0x40)
                                (*"n than client offered")[0].o
                                int64_t var_190_16 = x0_316
                                v2_4 = data_71c880
                                __builtin_strncpy(x0_316, 
                                    "Server replied with later version than client offered", 0x36)
                                result_13.o = v2_4
                                *x0_315 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_315[1])
                                x0_315[4].d = 0x28
                                *x0_315 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_315, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            uint64_t x1_65 = zx.q(*(x0_1 + 0x20))
                            
                            if (x1_65 == 0x300)
                                void** x0_320 = __cxa_allocate_exception(0x28, x1_65)
                                int64_t x0_321
                                int128_t v2_5
                                x0_321, v2_5 = operator new(0x40)
                                (*"is not supported")[0].o
                                int64_t var_190_17 = x0_321
                                v2_5 = data_71ac40
                                __builtin_strncpy(x0_321, 
                                    "Server attempting to negotiate SSLv3 which is not supported", 
                                    0x3c)
                                result_13.o = v2_5
                                *x0_320 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_320[1])
                                x0_320[4].d = 0x46
                                *x0_320 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_320, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            if (((*(**(arg1 + 0x28) + 0x100))() & 1) == 0)
                                void** x0_325 = __cxa_allocate_exception(0x28)
                                int16_t var_1e0 = *(x0_1 + 0x20)
                                Botan::TLS::Protocol_Version::to_string()
                                void var_1d8
                                int128_t* x0_327
                                int128_t v0_18
                                x0_327, v0_18 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                                    &var_1d8, nullptr)
                                int64_t var_1b0_1 = x0_327[1].q
                                var_1c0.o = *x0_327
                                __builtin_memset(x0_327, 0, 0x18)
                                int128_t* x0_329
                                int128_t v0_19
                                x0_329, v0_19 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_1c0)
                                int64_t var_190_18 = x0_329[1].q
                                result_13.o = *x0_329
                                __builtin_memset(x0_329, 0, 0x18)
                                *x0_325 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_325[1])
                                x0_325[4].d = 0x46
                                *x0_325 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_325, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            x8_156 = 0x10
                            
                            if ((*(x0_1 + 0x38) & 0xfffffffe) == 0x10000)
                                int32_t x9_47 = *(x0_1 + 0x3c)
                                int32_t x10_19
                                
                                x10_19 = x9_47 == 5 ? 0x280 : 0x80
                                
                                x8_156 = x9_47 == 0 ? 0x10 : x10_19
                        
                        *(x0_1 + 0x18) |= x8_156
                        void* x0_205 = var_98
                        
                        if (x0_205 != 0)
                            void* var_90_5 = x0_205
                            operator delete(x0_205)
                        
                        std::__ndk1::__tree<Botan::TLS::Handshake_Extension_Type, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, std::__ndk1::allocator<Botan::TLS::Handshake_Extension_Type> >::destroy(
                            &var_80)
                        return std::__ndk1::__tree<Botan::TLS::Handshake_Extension_Type, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, std::__ndk1::allocator<Botan::TLS::Handshake_Extension_Type> >::destroy(
                            &var_270)
                    case 2
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_90 =
                            operator new(0x28)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x20_13 =
                            x0_90
                        Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_90)
                        void** x21_16 = *(x0_1 + 0x150)
                        *(x0_1 + 0x150) = x20_13
                        
                        if (x21_16 != 0)
                            void* x0_91 = x21_16[2]
                            *x21_16 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                            
                            if (x0_91 != 0)
                                x21_16[3] = x0_91
                                operator delete(x0_91)
                            
                            operator delete(x21_16)
                            x20_13 = *(x0_1 + 0x150)
                        
                        int64_t* x0_93 = *(x0_1 + 8)
                        result = (*(*x0_93 + 0x70))(x0_93, x20_13)
                        *(x0_1 + 0x18) |= 0x2000
                    case 3, 4, 5, 6, 7, 8, 0xd, 0xe, 0xf, 0x10, 0x11, 0x13
                        goto label_e66c90
                    case 9
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_74 =
                            operator new(0x20)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x24_5 =
                            x0_74
                        *(arg1 + 0x28)
                        Botan::TLS::Certificate::Certificate(x0_74, x23_1)
                        void** x22_8 = *(x0_1 + 0x110)
                        *(x0_1 + 0x110) = x24_5
                        
                        if (x22_8 != 0)
                            void* x20_9 = x22_8[1]
                            *x22_8 = _vtable_for_Botan::TLS::Certificate + 0x10
                            
                            if (x20_9 != 0)
                                int64_t* x23_3 = x22_8[2]
                                void* x0_76
                                
                                if (x23_3 == x20_9)
                                    x0_76 = x20_9
                                else
                                    do
                                        x23_3 = &x23_3[-0x11]
                                        (*(*x23_3 + 0x10))(x23_3)
                                    while (x20_9 != x23_3)
                                    
                                    x0_76 = x22_8[1]
                                
                                x22_8[2] = x20_9
                                operator delete(x0_76)
                            
                            operator delete(x22_8)
                            x24_5 = *(x0_1 + 0x110)
                        
                        int64_t* x0_157 = *(x0_1 + 8)
                        (*(*x0_157 + 0x70))(x0_157, x24_5)
                        int64_t* x22_12 = *(x0_1 + 0x110) + 8
                        void* x20_18 = *x22_12
                        
                        if (x20_18 == x22_12[1])
                            void** x0_281 = __cxa_allocate_exception(0x28)
                            int64_t x0_282
                            int128_t v0_14
                            x0_282, v0_14 = operator new(0x30)
                            v0_14 = data_71b5b0
                            int64_t var_190_12 = x0_282
                            __builtin_strncpy(x0_282, "Client: No certificates sent by server", 
                                0x27)
                            result_13.o = v0_14
                            *x0_281 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_281[1])
                            x0_281[4].d = 0x28
                            *x0_281 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                            __cxa_throw(x0_281, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        Botan::X509_Object::X509_Object(&result_13)
                        result_13 = _vtable_for_Botan::X509_Certificate + 0x10
                        int64_t* x8_161 = *(x20_18 + 0x80)
                        int64_t var_128_1 = *(x20_18 + 0x78)
                        
                        if (x8_161 != 0)
                            int32_t i_12
                            
                            do
                                i_12 = __stxr(__ldxr(&x8_161[1]) + 1, &x8_161[1])
                            while (i_12 != 0)
                        
                        if (i_8 != 0)
                            void* x0_159 = *(i_8 + 0x110)
                            
                            if (x0_159 != 0)
                                void* x21_18 = *(x0_159 + 8)
                                
                                if (*(x0_159 + 0x10) == x21_18)
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                label_e6927c:
                                    void** x0_341 = __cxa_allocate_exception(0x28)
                                    int64_t x0_342
                                    int128_t v0_22
                                    x0_342, v0_22 = operator new(0x30)
                                    (*"ng renegotiation")[0].o
                                    int64_t var_70_3 = x0_342
                                    v0_22 = data_71c860
                                    __builtin_strncpy(x0_342, 
                                        "Server certificate changed during renegotiation", 0x30)
                                    var_80.o = v0_22
                                    *x0_341 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_341[1])
                                    x0_341[4].d = 0x2a
                                    *x0_341 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_341, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                Botan::X509_Object::X509_Object(&var_270)
                                var_270.q = _vtable_for_Botan::X509_Certificate + 0x10
                                int64_t* x8_165 = *(x21_18 + 0x80)
                                int64_t var_1f8_1 = *(x21_18 + 0x78)
                                
                                if (x8_165 != 0)
                                    int32_t i_13
                                    
                                    do
                                        i_13 = __stxr(__ldxr(&x8_165[1]) + 1, &x8_165[1])
                                    while (i_13 != 0)
                                
                                if ((Botan::X509_Certificate::operator==(&var_270) & 1) == 0)
                                    goto label_e6927c
                                
                                var_270.q = _vtable_for_Botan::X509_Certificate + 0x10
                                
                                if (x8_165 != 0)
                                    int64_t x9_54
                                    int32_t i_14
                                    
                                    do
                                        x9_54 = __ldaxr(&x8_165[1])
                                        i_14 = __stlxr(x9_54 - 1, &x8_165[1])
                                    while (i_14 != 0)
                                    
                                    if (x9_54 == 0)
                                        (*(*x8_165 + 0x10))(x8_165)
                                        std::__ndk1::__shared_weak_count::__release_weak()
                                
                                var_270.q = _vtable_for_Botan::X509_Object + 0x10
                                void* var_210
                                
                                if (var_210 != 0)
                                    void* var_208_1 = var_210
                                    operator delete(var_210)
                                
                                void* var_228
                                
                                if (var_228 != 0)
                                    void* var_220_1 = var_228
                                    operator delete(var_228)
                                
                                var_268 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                                void* var_240
                                
                                if (var_240 != 0)
                                    void* var_238_1 = var_240
                                    operator delete(var_240)
                                
                                var_260 = _vtable_for_Botan::OID + 0x10
                                void* var_258
                                
                                if (var_258 != 0)
                                    void* var_250_1 = var_258
                                    operator delete(var_258)
                        
                        Botan::X509_Certificate::load_subject_public_key()
                        uint64_t x0_170 = zx.q(*(x0_1 + 0x38))
                        int64_t* x23_4 = var_270.q
                        
                        if ((x0_170.d & 0xfffffffe) != 0x10000)
                            Botan::TLS::auth_method_to_string(x0_170)
                        else
                            var_270 = 6
                            var_26f.d = 0x415352
                        
                        (*(*x23_4 + 0x10))(x23_4)
                        uint64_t x8_176 = zx.q(var_80)
                        uint64_t x11_20 = zx.q(var_270)
                        uint64_t i_33 = x8_176 u>> 1
                        uint64_t i_37
                        
                        if ((x8_176.d & 1) == 0)
                            i_37 = i_33
                        else
                            i_37 = i_44
                        
                        void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) x10_24
                        
                        if ((x11_20.d & 1) == 0)
                            x10_24 = x11_20 u>> 1
                        else
                            x10_24 = var_268
                        
                        if (i_37 != x10_24)
                            if ((x8_176.d & 1) != 0)
                                operator delete(var_70)
                            
                            goto label_e68b98
                        
                        char* x21_20 = var_70
                        char* x10_25 = &var_80 | 1
                        void* __offset(vtable_for_Botan::OID, 0x10) x1_69
                        
                        if ((x11_20.d & 1) == 0)
                            x1_69 = &var_270 | 1
                        else
                            x1_69 = var_260
                        
                        if ((x8_176.d & 1) != 0)
                            if (i_37 == 0)
                                operator delete(x21_20)
                            else
                                int32_t x0_173 = memcmp()
                                operator delete(x21_20)
                                
                                if (x0_173 != 0)
                                label_e68b98:
                                    void** x0_287 = __cxa_allocate_exception(0x28)
                                    int64_t x0_288
                                    int128_t v0_15
                                    x0_288, v0_15 = operator new(0x30)
                                    (*"atch ciphersuite")[0].o
                                    int64_t var_70_2 = x0_288
                                    v0_15 = data_71a900
                                    __builtin_strncpy(x0_288, 
                                        "Certificate key type did not match ciphersuite", 0x2f)
                                    var_80.o = v0_15
                                    *x0_287 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_287[1])
                                    x0_287[4].d = 0x2f
                                    *x0_287 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_287, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                        else if (i_37 != 0)
                            uint32_t x20_19
                            uint32_t x21_21
                            uint64_t i_15
                            
                            do
                                x20_19 = zx.d(*x10_25)
                                x21_21 = zx.d(*x1_69)
                                
                                if (x20_19 != x21_21)
                                    break
                                
                                i_15 = i_33
                                i_33 -= 1
                                x10_25 = &x10_25[1]
                                x1_69 += 1
                            while (i_15 != 1)
                            
                            if ((x8_176.d & 1) != 0)
                                operator delete(var_70)
                            
                            if (x20_19 != x21_21)
                                goto label_e68b98
                        
                        int32_t x8_177 = *(Botan::X509_Certificate::data() + 0x438)
                        
                        if (x8_177 != 0)
                            if (*(x0_1 + 0x3c) == 0)
                                if ((x8_177 & 0x3000) == 0)
                                label_e68000:
                                    void** x0_196 = __cxa_allocate_exception(0x28)
                                    int64_t x0_197
                                    int128_t v2_2
                                    x0_197, v2_2 = operator new(0x40)
                                    (*"this ciphersuite")[0].o
                                    int64_t var_70_1 = x0_197
                                    v2_2 = data_71ac40
                                    __builtin_strncpy(x0_197, 
                                        "Certificate usage constraints do not allow this ciphersuite", 
                                        0x3c)
                                    var_80.o = v2_2
                                    *x0_196 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_196[1])
                                    x0_196[4].d = 0x2a
                                    *x0_196 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_196, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                            else if ((x8_177 & 0xc000) == 0)
                                goto label_e68000
                        
                        int64_t* x0_177 = *(x0_1 + 0x168)
                        *(x0_1 + 0x168) = x23_4
                        
                        if (x0_177 != 0)
                            (*(*x0_177 + 8))()
                        
                        int32_t x8_180 = *(x0_1 + 0x18)
                        void* x9_57 = *(x0_1 + 0x108)
                        int32_t x20_21
                        
                        if (*(x0_1 + 0x3c) == 0)
                            x20_21 = x8_180 | 0x300
                        else
                            x20_21 = x8_180 | 0x80
                        
                        *(x0_1 + 0x18) = x20_21
                        int64_t* i_17 = *(x9_57 + 0x50)
                        
                        if (i_17 == 0)
                        label_e67dec:
                            int64_t* x21_22 = *(arg1 + 0xd0)
                            var_98.b = 0x14
                            __builtin_strncpy(&var_98:1, "tls-client", 0xb)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_1c0)
                            (*(*x21_22 + 0x10))(x21_22, &var_98, &var_1c0)
                            
                            if ((zx.d(var_1c0.b) & 1) != 0)
                                operator delete(var_1b0)
                            
                            void* var_88
                            
                            if ((zx.d(var_98.b) & 1) != 0)
                                operator delete(var_88)
                            int64_t* x21_23 = *(arg1 + 0x18)
                            __builtin_memset(&var_98, 0, 0x18)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_1c0)
                            (*(*x21_23 + 0x38))(x21_23, x22_12, &var_98, &var_80, 1, &var_1c0, 
                                *(arg1 + 0x28))
                            
                            if ((zx.d(var_1c0.b) & 1) != 0)
                                operator delete(var_1b0)
                            
                            void* x20_23 = var_98
                            
                            if (x20_23 != 0)
                                void* var_90_3
                                void* x21_24 = var_90_3
                                void* x0_187
                                
                                if (x21_24 != x20_23)
                                    do
                                        int64_t* x19_9 = *(x21_24 - 8)
                                        x21_24 -= 0x10
                                        
                                        if (x19_9 != 0)
                                            int64_t x9_61
                                            int32_t i_16
                                            
                                            do
                                                x9_61 = __ldaxr(&x19_9[1])
                                                i_16 = __stlxr(x9_61 - 1, &x19_9[1])
                                            while (i_16 != 0)
                                            
                                            if (x9_61 == 0)
                                                (*(*x19_9 + 0x10))(x19_9)
                                                std::__ndk1::__shared_weak_count::__release_weak()
                                    while (x21_24 != x20_23)
                                    
                                    x0_187 = var_98
                                else
                                    x0_187 = x20_23
                                
                                void* var_90_4 = x20_23
                                operator delete(x0_187)
                            
                            uint64_t i_46 = var_80.q
                            
                            if (i_46 != 0)
                                i_44 = i_46
                                operator delete(i_46)
                        else
                            int64_t* i_28 = x9_57 + 0x50
                            
                            do
                                int32_t x11_22 = i_17[4].d
                                
                                if (x11_22 s>= 5)
                                    i_28 = i_17
                                
                                i_17 = i_17[zx.q(x11_22 s< 5 ? 1 : 0)]
                            while (i_17 != 0)
                            
                            if (i_28 == x9_57 + 0x50 || i_28[4].d s> 5)
                                goto label_e67dec
                            
                            int64_t x0_178 = i_28[5]
                            
                            if (x0_178 == 0)
                                goto label_e67dec
                            
                            if (__dynamic_cast(x0_178, _typeinfo_for_Botan::TLS::Extension, 
                                    _typeinfo_for_Botan::TLS::Certificate_Status_Request, 0) == 0)
                                goto label_e67dec
                            
                            *(x0_1 + 0x18) = x20_21 | 0x40
                        
                        if ((zx.d(var_270) & 1) != 0)
                            operator delete(var_260)
                        
                        result_13 = _vtable_for_Botan::X509_Certificate + 0x10
                        
                        if (x8_161 != 0)
                            int64_t x9_62
                            int32_t i_18
                            
                            do
                                x9_62 = __ldaxr(&x8_161[1])
                                i_18 = __stlxr(x9_62 - 1, &x8_161[1])
                            while (i_18 != 0)
                            
                            if (x9_62 == 0)
                                (*(*x8_161 + 0x10))(x8_161)
                                std::__ndk1::__shared_weak_count::__release_weak()
                        
                        int128_t var_148
                        void* x0_193 = var_148:8.q
                        result_13 = _vtable_for_Botan::X509_Object + 0x10
                        
                        if (x0_193 != 0)
                            int32_t var_138
                            var_138.q = x0_193
                            operator delete(x0_193)
                        
                        void* var_158
                        void* x0_194 = var_158
                        
                        if (x0_194 != 0)
                            var_158 = x0_194
                            operator delete(x0_194)
                        
                        void* var_170
                        void* x0_195 = var_170
                        result_2 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                        
                        if (x0_195 != 0)
                            var_170 = x0_195
                            operator delete(x0_195)
                        
                        void* result_4
                        result = result_4
                        void* __offset(vtable_for_Botan::OID, 0x10) var_190_6 =
                            _vtable_for_Botan::OID + 0x10
                        
                        if (result != 0)
                            int128_t var_180
                            var_180.q = result
                            return operator delete(result)
                    case 0xa
                        int32_t x8_71 = *(x0_1 + 0x18)
                        
                        if (*(x0_1 + 0x3c) - 5 u>= 3)
                            x8_71 |= 0x100
                            *(x0_1 + 0x18) = x8_71
                        
                        *(x0_1 + 0x18) = x8_71 | 0x200
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_80 =
                            operator new(0x58)
                        *(x0_1 + 0x20)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x21_15 =
                            x0_80
                        Botan::TLS::Server_Key_Exchange::Server_Key_Exchange(x0_80, x23_1, 
                            zx.q(*(x0_1 + 0x3c)), zx.q(*(x0_1 + 0x38)))
                        void* x20_12 = *(x0_1 + 0x120)
                        *(x0_1 + 0x120) = x21_15
                        
                        if (x20_12 != 0)
                            Botan::TLS::Server_Key_Exchange::~Server_Key_Exchange()
                            operator delete(x20_12)
                            x21_15 = *(x0_1 + 0x120)
                        
                        int64_t* x0_83 = *(x0_1 + 8)
                        result = (*(*x0_83 + 0x70))(x0_83, x21_15)
                        
                        if ((*(x0_1 + 0x38) & 0xfffffffe) != 0x10000)
                            Botan::TLS::Handshake_State* x1_39 = *(x0_1 + 0x168)
                            
                            if (x1_39 == 0)
                                Botan::assertion_failure("server_public_key", 
                                    "Server sent us a certificate", "get_server_public_key", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x141a7)
                            label_e691e4:
                                void** x0_337 = __cxa_allocate_exception(0x28)
                                int64_t x0_338
                                int128_t v0_21
                                x0_338, v0_21 = operator new(0x20)
                                int64_t var_190_20 = x0_338
                                result_13.o = data_71aa40
                                __builtin_strncpy(x0_338, "Downgrade attack detected", 0x1a)
                                *x0_337 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_337[1])
                                x0_337[4].d = 0x2f
                                *x0_337 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_337, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            *(arg1 + 0x28)
                            result = Botan::TLS::Server_Key_Exchange::verify(*(x0_1 + 0x120), 
                                x1_39, x0_1)
                            
                            if ((result.d & 1) == 0)
                                void** x0_85 = __cxa_allocate_exception(0x28)
                                int64_t x0_86
                                int128_t v0_4
                                x0_86, v0_4 = operator new(0x30)
                                v0_4 = data_71b7f0
                                int64_t var_190_3 = x0_86
                                __builtin_strncpy(x0_86, "Bad signature on server key exchange", 
                                    0x25)
                                result_13.o = v0_4
                                *x0_85 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_85[1])
                                x0_85[4].d = 0x33
                                *x0_85 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_85, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                    case 0xb
                        *(x0_1 + 0x18) |= 0x200
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_77 =
                            operator new(0x50)
                        *(x0_1 + 0x20)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x20_10 =
                            x0_77
                        Botan::TLS::Certificate_Req::Certificate_Req(x0_77, x23_1)
                        void** x1_35 = *(x0_1 + 0x128)
                        *(x0_1 + 0x128) = x20_10
                        
                        if (x1_35 != 0)
                            sub_f4edb8(x0_1 + 0x128, x1_35)
                            x20_10 = *(x0_1 + 0x128)
                        
                        int64_t* x0_79 = *(x0_1 + 8)
                        return (*(*x0_79 + 0x70))(x0_79, x20_10)
                    case 0xc
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_67 =
                            operator new(8)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x21_13 =
                            x0_67
                        Botan::TLS::Server_Hello_Done::Server_Hello_Done(x0_67)
                        void* x0_68 = *(x0_1 + 0x130)
                        *(x0_1 + 0x130) = x21_13
                        
                        if (x0_68 != 0)
                            operator delete(x0_68)
                            x21_13 = *(x0_1 + 0x130)
                        
                        int64_t* x0_69 = *(x0_1 + 8)
                        (*(*x0_69 + 0x70))(x0_69, x21_13)
                        
                        if (*(x0_1 + 0x110) != 0)
                            int64_t* i_38 = *(x0_1 + 0x108) + 0x50
                            int64_t* i_19 = *i_38
                            
                            if (i_19 != 0)
                                int64_t* i_24 = i_38
                                
                                do
                                    int32_t x11_6 = i_19[4].d
                                    
                                    if (x11_6 s>= 5)
                                        i_24 = i_19
                                    
                                    i_19 = i_19[zx.q(x11_6 s< 5 ? 1 : 0)]
                                while (i_19 != 0)
                                
                                if (i_24 != i_38 && i_24[4].d s<= 5)
                                    int64_t x0_70 = i_24[5]
                                    
                                    if (x0_70 != 0 && __dynamic_cast(x0_70, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Certificate_Status_Request, 0) != 0)
                                        int64_t* x21_14 = *(arg1 + 0xd0)
                                        var_270 = 0x14
                                        __builtin_strncpy(&var_26f, "tls-client", 0xb)
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &var_80)
                                        (*(*x21_14 + 0x10))(x21_14, &var_270, &var_80)
                                        
                                        if ((zx.d(var_80) & 1) == 0)
                                            if ((zx.d(var_270) & 1) != 0)
                                                goto label_e68180
                                            
                                            goto label_e66e9c
                                        
                                        operator delete(var_70)
                                        void* x20_8
                                        
                                        if ((zx.d(var_270) & 1) == 0)
                                        label_e66e9c:
                                            __builtin_memset(&var_270, 0, 0x18)
                                            x20_8 = *(x0_1 + 0x118)
                                            
                                            if (x20_8 != 0)
                                            label_e68198:
                                                uint64_t i_47 = operator new(0x158)
                                                *(i_47 + 0x10) = 0
                                                *i_47 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::OCSP::Response, std::__ndk1::allocator<Botan::OCSP::Response> >
                                                    + 0x10
                                                *(i_47 + 8) = 0
                                                *(x20_8 + 0x10)
                                                Botan::OCSP::Response::Response(i_47 + 0x18, 
                                                    *(x20_8 + 8))
                                                var_80.q = i_47 + 0x18
                                                i_44 = i_47
                                                
                                                if (var_268 u>= var_260)
                                                    std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::OCSP::Response const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::OCSP::Response const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::OCSP::Response const> >(
                                                        &var_270)
                                                    uint64_t i_48 = i_44
                                                    
                                                    if (i_48 != 0)
                                                        int64_t x9_69
                                                        int32_t i_20
                                                        
                                                        do
                                                            x9_69 = __ldaxr(i_48 + 8)
                                                            i_20 = __stlxr(x9_69 - 1, i_48 + 8)
                                                        while (i_20 != 0)
                                                        
                                                        if (x9_69 == 0)
                                                            (*(*i_48 + 0x10))(i_48)
                                                            std::__ndk1::__shared_weak_count::__release_weak()
                                                else
                                                    *var_268 = i_47 + 0x18
                                                    *(var_268 + 8) = i_44
                                                    var_268 += 0x10
                                        else
                                        label_e68180:
                                            operator delete(var_260)
                                            __builtin_memset(&var_270, 0, 0x18)
                                            x20_8 = *(x0_1 + 0x118)
                                            
                                            if (x20_8 != 0)
                                                goto label_e68198
                                        int64_t x20_24 = *(x0_1 + 0x110)
                                        int64_t* x21_26 = *(arg1 + 0x18)
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &var_80)
                                        (*(*x21_26 + 0x38))(x21_26, x20_24 + 8, &var_270, 
                                            &result_13, 1, &var_80, *(arg1 + 0x28))
                                        
                                        if ((zx.d(var_80) & 1) != 0)
                                            operator delete(var_70)
                                        
                                        void* x20_25 = var_270.q
                                        
                                        if (x20_25 != 0)
                                            void* __offset(vtable_for_Botan::AlgorithmIdentifier, 
                                                0x10) x22_14 = var_268
                                            void* x0_217
                                            
                                            if (x22_14 != x20_25)
                                                do
                                                    int64_t* x21_27 = *(x22_14 - 8)
                                                    x22_14 -= 0x10
                                                    
                                                    if (x21_27 != 0)
                                                        int64_t x9_70
                                                        int32_t i_21
                                                        
                                                        do
                                                            x9_70 = __ldaxr(&x21_27[1])
                                                            i_21 = __stlxr(x9_70 - 1, &x21_27[1])
                                                        while (i_21 != 0)
                                                        
                                                        if (x9_70 == 0)
                                                            (*(*x21_27 + 0x10))(x21_27)
                                                            std::__ndk1::__shared_weak_count::__release_weak()
                                                while (x22_14 != x20_25)
                                                
                                                x0_217 = var_270.q
                                            else
                                                x0_217 = x20_25
                                            
                                            var_268 = x20_25
                                            operator delete(x0_217)
                                        
                                        void* result_9 = result_13
                                        
                                        if (result_9 != 0)
                                            result_2 = result_9
                                            operator delete(result_9)
                        
                        if ((zx.d(*(x0_1 + 0x1d)) & 1) != 0)
                            int64_t x20_26 = *(x0_1 + 0x128)
                            int64_t* x21_28 = *(arg1 + 0xd0)
                            var_270 = 0x14
                            __builtin_strncpy(&var_26f, "tls-client", 0xb)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_80)
                            (*(*x21_28 + 0x18))(x21_28, x20_26 + 0x20, x20_26 + 8, &var_270, 
                                &var_80)
                            
                            if ((zx.d(var_80) & 1) != 0)
                                operator delete(var_70)
                            
                            if ((zx.d(var_270) & 1) != 0)
                                operator delete(var_260)
                            
                            Botan::TLS::Handshake_IO* x0_224 = operator new(0x20)
                            Botan::TLS::Handshake_IO* x23_6 = x0_224
                            Botan::TLS::Certificate::Certificate(x0_224, *(x0_1 + 0x10), 
                                x0_1 + 0xe8)
                            void** x21_29 = *(x0_1 + 0x138)
                            *(x0_1 + 0x138) = x23_6
                            
                            if (x21_29 != 0)
                                void* x20_27 = x21_29[1]
                                *x21_29 = _vtable_for_Botan::TLS::Certificate + 0x10
                                
                                if (x20_27 != 0)
                                    int64_t* x22_15 = x21_29[2]
                                    void* x0_226
                                    
                                    if (x22_15 == x20_27)
                                        x0_226 = x20_27
                                    else
                                        do
                                            x22_15 = &x22_15[-0x11]
                                            (*(*x22_15 + 0x10))(x22_15)
                                        while (x20_27 != x22_15)
                                        
                                        x0_226 = x21_29[1]
                                    
                                    x21_29[2] = x20_27
                                    operator delete(x0_226)
                                
                                operator delete(x21_29)
                                x23_6 = *(x0_1 + 0x138)
                            
                            int64_t* x0_228 = *(x0_1 + 8)
                            (*(*x0_228 + 0x70))(x0_228, x23_6)
                            void* result_11 = result_13
                            
                            if (result_11 != 0)
                                void* result_12 = result_2
                                void* result_14
                                
                                if (result_12 == result_11)
                                    result_14 = result_11
                                else
                                    do
                                        result_12 -= 0x88
                                        (*(*result_12 + 0x10))(result_12)
                                    while (result_11 != result_12)
                                    
                                    result_14 = result_13
                                
                                result_2 = result_11
                                operator delete(result_14)
                        
                        Botan::TLS::Handshake_IO* x0_230 = operator new(0x38)
                        Botan::TLS::Handshake_State* x23_7 = *(x0_1 + 0x10)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x26_2 = *(x0_1 + 0x168)
                        Botan::Credentials_Manager* x24_7 = *(arg1 + 0x28)
                        Botan::Public_Key* x25_4 = *(arg1 + 0xd0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &result_13)
                        *(arg1 + 0x30)
                        Botan::TLS::Client_Key_Exchange::Client_Key_Exchange(x0_230, x23_7, x0_1, 
                            x24_7, x25_4, x26_2, &result_13)
                        void** x23_8 = *(x0_1 + 0x140)
                        *(x0_1 + 0x140) = x0_230
                        
                        if (x23_8 != 0)
                            void* x0_233 = x23_8[4]
                            *x23_8 = _vtable_for_Botan::TLS::Client_Key_Exchange + 0x10
                            
                            if (x0_233 != 0)
                                int64_t x8_228 = x23_8[6]
                                x23_8[5] = x0_233
                                Botan::deallocate_memory(x0_233, x8_228 - x0_233, 1)
                            
                            void* x0_234 = x23_8[1]
                            
                            if (x0_234 != 0)
                                x23_8[2] = x0_234
                                operator delete(x0_234)
                            
                            operator delete(x23_8)
                        
                        (*(**(x0_1 + 8) + 0x70))()
                        
                        if ((zx.d(result_13.b) & 1) != 0)
                            operator delete(var_190)
                        
                        Botan::TLS::Session_Keys::Session_Keys(&result_13, x0_1, 
                            (*(x0_1 + 0x140)).b + 0x20)
                        Botan::TLS::Session_Keys::operator=(x0_1 + 0x70)
                        Botan::TLS::Session_Keys::~Session_Keys()
                        
                        if ((zx.d(*(x0_1 + 0x1d)) & 1) != 0)
                            void* x8_234 = *(x0_1 + 0x138)
                            int64_t x22_17 = *(x8_234 + 8)
                            
                            if (x22_17 != *(x8_234 + 0x10))
                                int64_t* x23_9 = *(arg1 + 0xd0)
                                result_13.b = 0x14
                                __builtin_strncpy(&result_13:1, "tls-client", 0xb)
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_270)
                                (*(*x23_9 + 0x28))(x23_9, x22_17, &result_13, &var_270)
                                
                                if ((zx.d(var_270) & 1) != 0)
                                    operator delete(var_260)
                                
                                if ((zx.d(result_13.b) & 1) != 0)
                                    operator delete(var_190)
                                
                                Botan::TLS::Handshake_IO* x0_245 = operator new(0x28)
                                Botan::TLS::Handshake_IO* x22_18 = x0_245
                                Botan::TLS::Certificate_Verify::Certificate_Verify(x0_245, 
                                    *(x0_1 + 0x10), x0_1, *(arg1 + 0x28), *(arg1 + 0x30))
                                void** x21_32 = *(x0_1 + 0x148)
                                *(x0_1 + 0x148) = x22_18
                                
                                if (x21_32 != 0)
                                    void* x0_246 = x21_32[1]
                                    *x21_32 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
                                    
                                    if (x0_246 != 0)
                                        x21_32[2] = x0_246
                                        operator delete(x0_246)
                                    
                                    operator delete(x21_32)
                                    x22_18 = *(x0_1 + 0x148)
                                
                                int64_t* x0_248 = *(x0_1 + 8)
                                (*(*x0_248 + 0x70))(x0_248, x22_18)
                        
                        int64_t* x0_249 = *(x0_1 + 0x10)
                        result_13 = _vtable_for_Botan::TLS::Change_Cipher_Spec + 0x10
                        (*(*x0_249 + 8))(x0_249, &result_13)
                        void* var_288
                        
                        if (var_288 != 0)
                            void* var_280_1 = var_288
                            operator delete(var_288)
                        
                        Botan::TLS::Channel::change_cipher_spec_writer(arg1)
                        Botan::TLS::Handshake_IO* x0_252 = operator new(0x20)
                        Botan::TLS::Handshake_IO* x20_31 = x0_252
                        Botan::TLS::Finished::Finished(x0_252, *(x0_1 + 0x10), x0_1)
                        void** x21_33 = *(x0_1 + 0x160)
                        *(x0_1 + 0x160) = x20_31
                        
                        if (x21_33 != 0)
                            void* x0_253 = x21_33[1]
                            *x21_33 = _vtable_for_Botan::TLS::Finished + 0x10
                            
                            if (x0_253 != 0)
                                x21_33[2] = x0_253
                                operator delete(x0_253)
                            
                            operator delete(x21_33)
                            x20_31 = *(x0_1 + 0x160)
                        
                        int64_t* x0_255 = *(x0_1 + 8)
                        result = (*(*x0_255 + 0x70))(x0_255, x20_31)
                        void** i_41 = *(x0_1 + 0x108) + 0x50
                        void** i_22 = *i_41
                        
                        if (i_22 == 0)
                            *(x0_1 + 0x18) |= 0x2000
                        else
                            void** i_30 = i_41
                            
                            do
                                int32_t x11_31 = i_22[4].d
                                
                                if (x11_31 s>= 0x23)
                                    i_30 = i_22
                                
                                i_22 = i_22[zx.q(x11_31 s< 0x23 ? 1 : 0)]
                            while (i_22 != 0)
                            
                            if (i_30 == i_41 || i_30[4].d s> 0x23)
                                *(x0_1 + 0x18) |= 0x2000
                            else
                                result = i_30[5]
                                
                                if (result == 0)
                                    *(x0_1 + 0x18) |= 0x2000
                                else
                                    result = __dynamic_cast(result, 
                                        _typeinfo_for_Botan::TLS::Extension, 
                                        _typeinfo_for_Botan::TLS::Session_Ticket, 0)
                                    
                                    if (result == 0)
                                        *(x0_1 + 0x18) |= 0x2000
                                    else
                                        *(x0_1 + 0x18) |= 0x1000
                    case 0x14
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_63 =
                            operator new(0x20)
                        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x20_7 =
                            x0_63
                        Botan::TLS::Certificate_Status::Certificate_Status(x0_63)
                        void** x21_12 = *(x0_1 + 0x118)
                        *(x0_1 + 0x118) = x20_7
                        
                        if (x21_12 != 0)
                            void* x0_64 = x21_12[1]
                            *x21_12 = _vtable_for_Botan::TLS::Certificate_Status + 0x10
                            
                            if (x0_64 != 0)
                                x21_12[2] = x0_64
                                operator delete(x0_64)
                            
                            operator delete(x21_12)
                            x20_7 = *(x0_1 + 0x118)
                        
                        int64_t* x0_66 = *(x0_1 + 8)
                        result = (*(*x0_66 + 0x70))(x0_66, x20_7)
                        int32_t x8_55 = *(x0_1 + 0x18)
                        int32_t x8_56
                        
                        if (*(x0_1 + 0x3c) == 0)
                            x8_56 = x8_55 | 0x300
                        else
                            x8_56 = x8_55 | 0x80
                        
                        *(x0_1 + 0x18) = x8_56
        return result

__cxa_bad_cast()
noreturn
