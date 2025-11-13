// 函数: _ZN5Botan3TLS7Channel13received_dataEPKhm
// 地址: 0xe56688
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
uint64_t entry_x2
uint64_t x20 = entry_x2
uint64_t x21 = arg2
int64_t result
int32_t x22

if (zx.d(arg1[9]) == 0 || zx.d(arg1[8]) == 0)
    x22 = 0
    
    if (x20 == 0)
        result = 0
    else
    label_e56734:
        
        while (true)
            uint64_t var_a8 = 0
            struct std::__ndk1::__function::__base<std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>::std::__ndk1::__function::__func<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206, std::__ndk1::allocator<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206>, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>::VTable
                * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206, std::__ndk1::allocator<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206>, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>{for `std::__ndk1::__function::__base<std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>'}
            uint8_t const* var_98_1 = arg1
            struct std::__ndk1::__function::__base<std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>::std::__ndk1::__function::__func<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206, std::__ndk1::allocator<Botan::TLS::Channel::received_data(uint8_t const*, uint64_t)::$_206>, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> (uint16_t)>::VTable
                * const* var_80_1 = &var_a0
            char var_130_1 = x22.b & 1
            Botan::TLS::read_record(zx.q(arg1[9]), &arg1[0x98], x21, x20, &var_a8, &arg1[0xb0], 
                *(arg1 + 0x38), &var_a0)
            
            if (&var_a0 == var_80_1)
                (*var_80_1)->vFunc_4()
            else if (var_80_1 != 0)
                (*var_80_1)->j_operator delete()
            
            uint64_t fp_1 = var_a8
            
            if (fp_1 == 0)
                goto label_e56a40
            
            uint64_t temp0_1 = x20
            x20 -= fp_1
            
            if (temp0_1 u< fp_1)
                Botan::assertion_failure("consumed <= input_size", 
                    "Record reader consumed sane amount", "received_data", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ed3)
            else
                int64_t result_1
                result = result_1
                
                if (result == 0 || x20 == 0)
                    if (result != 0 && x20 == 0)
                        break
                    
                    char var_af
                    int32_t var_ac
                    uint64_t x3_2
                    uint32_t x8_14
                    
                    if (zx.d(arg1[9]) != 0)
                        if (result != 0)
                            goto label_e56b58
                        
                        if (var_ac == 0x100)
                            break
                        
                        if (*(arg1 + 0xb8) - *(arg1 + 0xb0) u<= 0x4000)
                            int16_t var_b2
                            
                            if (zx.q(var_b2) != 0)
                                goto label_e56834
                            
                            int64_t x8_13 = *(arg1 + 0x40)
                            
                            if (((x22 | (x8_13 == 0 ? 1 : 0)) & 1) == 0)
                                goto label_e56b84
                            
                            if (x8_13 == 0)
                                goto label_e56834
                            
                            x3_2 = zx.q(var_ac)
                            
                            if (x3_2.d == 0x15)
                                goto label_e5686c
                            
                            x8_14 = zx.d(var_af)
                            
                            if (x8_14 != 3 && x8_14 != 0xfe)
                                goto label_e56c1c
                            
                            goto label_e568f8
                    else if (*(arg1 + 0xb8) - *(arg1 + 0xb0) u<= 0x4000)
                    label_e56834:
                        void* x8_17 = *(arg1 + 0x48)
                        int32_t x9_6
                        
                        if (x8_17 == 0)
                            x9_6 = *(arg1 + 0x40) == 0 ? 1 : 0
                            
                            if (result != 0)
                            label_e56b30:
                                Botan::assertion_failure("m_needed == 0", &data_793a18, "type", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x19f2)
                            label_e56b58:
                                Botan::assertion_failure("m_needed == 0", &data_793a18, "type", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x19f2)
                            label_e56b84:
                                Botan::assertion_failure(
                                    "epoch0_restart implies allow_epoch0_restart", "Allowed state", 
                                    "received_data", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x13eea)
                            label_e56b8c:
                                void** x0_16 = __cxa_allocate_exception(0x28)
                                int64_t x0_17
                                int128_t v0
                                x0_17, v0 = operator new(0x40)
                                (*"nnection closure")[0].o
                                int64_t var_d0_1 = x0_17
                                v0 = data_71b3f0
                                __builtin_strncpy(x0_17, 
                                    "Received handshake data after connection closure", 0x31)
                                int128_t var_e0_2 = v0
                                *x0_16 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_16[1])
                                x0_16[4].d = 0xa
                                *x0_16 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_16, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                        else
                            x9_6 = 0
                            
                            if (result != 0)
                                goto label_e56b30
                        
                        x3_2 = zx.q(var_ac)
                        int64_t var_100
                        
                        if (x3_2.d != 0x15)
                            int16_t var_b0
                            
                            if (x9_6 == 0)
                                if (x8_17 == 0)
                                    void* x8_26 = *(arg1 + 0x40)
                                    
                                    if (x8_26 != 0 && zx.d(var_b0) != zx.d(*(x8_26 + 0x20)))
                                    label_e56f60:
                                        void** x0_49 = __cxa_allocate_exception(0x28)
                                        int64_t x0_50
                                        int128_t v0_7
                                        x0_50, v0_7 = operator new(0x30)
                                        v0_7 = data_71d3f0
                                        int64_t var_d0_7 = x0_50
                                        __builtin_strncpy(x0_50, 
                                            "Received unexpected record version", 0x23)
                                        int128_t var_e0_8 = v0_7
                                        *x0_49 = _vtable_for_Botan::Exception + 0x10
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &x0_49[1])
                                        x0_49[4].d = 0x46
                                        *x0_49 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                        __cxa_throw(x0_49, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                            Botan::Exception::~Exception)
                                        noreturn
                                else if (*(x8_17 + 0x108) != 0
                                        && zx.d(var_b0) != zx.d(*(x8_17 + 0x20)))
                                    void** x0_44 = __cxa_allocate_exception(0x28)
                                    int64_t x0_45
                                    int128_t v0_6
                                    x0_45, v0_6 = operator new(0x30)
                                    v0_6 = data_71d3f0
                                    int64_t var_d0_6 = x0_45
                                    __builtin_strncpy(x0_45, "Received unexpected record version", 
                                        0x23)
                                    int128_t var_e0_7 = v0_6
                                    *x0_44 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_44[1])
                                    x0_44[4].d = 0x46
                                    *x0_44 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_44, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                if (x3_2.d s<= 0x16)
                                    goto label_e56900
                                
                                goto label_e5697c
                            
                            x8_14 = zx.d(var_af)
                            
                            if (x8_14 != 3 && x8_14 != 0xfe)
                            label_e56c1c:
                                void** x0_21 = __cxa_allocate_exception(0x28)
                                int64_t x0_22
                                int128_t v0_1
                                x0_22, v0_1 = operator new(0x40)
                                v0_1 = data_71adb0
                                int64_t var_d0_2 = x0_22
                                __builtin_strncpy(x0_22, 
                                    "Received unexpected record version in initial record", 0x35)
                                int128_t var_e0_3 = v0_1
                                *x0_21 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_21[1])
                                x0_21[4].d = 0x46
                                *x0_21 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                __cxa_throw(x0_21, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                        label_e568f8:
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* var_b8
                            
                            if (x3_2.d s> 0x16)
                            label_e5697c:
                                
                                if (x3_2.d == 0x17)
                                    if (zx.d(arg1[0xc8]) != 0)
                                        void** x0_26 = __cxa_allocate_exception(0x28)
                                        int64_t x0_27
                                        int128_t v0_2
                                        x0_27, v0_2 = operator new(0x40)
                                        v0_2 = data_71ac10
                                        int64_t var_d0_3 = x0_27
                                        __builtin_strncpy(x0_27, 
                                            "Received application data after connection closure", 
                                            0x33)
                                        int128_t var_e0_4 = v0_2
                                        *x0_26 = _vtable_for_Botan::Exception + 0x10
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &x0_26[1])
                                        x0_26[4].d = 0xa
                                        *x0_26 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                        __cxa_throw(x0_26, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                            Botan::Exception::~Exception)
                                        noreturn
                                    
                                    if (*(arg1 + 0x48) != 0)
                                        void** x0_31 = __cxa_allocate_exception(0x28)
                                        int64_t x0_32
                                        int128_t v0_3
                                        x0_32, v0_3 = operator new(0x30)
                                        (*"d handshake data")[0].o
                                        int64_t var_d0_4 = x0_32
                                        v0_3 = data_71c860
                                        __builtin_strncpy(x0_32, 
                                            "Can\'t interleave application and handshake data", 
                                            0x30)
                                        int128_t var_e0_5 = v0_3
                                        *x0_31 = _vtable_for_Botan::Exception + 0x10
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &x0_31[1])
                                        x0_31[4].d = 0xa
                                        *x0_31 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                        __cxa_throw(x0_31, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                            Botan::Exception::~Exception)
                                        noreturn
                                    
                                    Botan::TLS::Channel::process_application_data(arg1, var_b8)
                                else if (x3_2.d != 0x100)
                                    goto label_e56de0
                            else
                            label_e56900:
                                
                                if (x3_2.d != 0x14 && x3_2.d != 0x16)
                                label_e56de0:
                                    void** x0_36 = __cxa_allocate_exception(0x28)
                                    
                                    if (result_1 != 0)
                                        Botan::assertion_failure("m_needed == 0", &data_793a18, 
                                            "type", 
                                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                            0x19f2)
                                        goto label_e56f60
                                    
                                    std::__ndk1::to_string(var_ac)
                                    void var_118
                                    int128_t* x0_39
                                    int128_t v0_4
                                    x0_39, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                                        &var_118, nullptr)
                                    int64_t var_f0 = x0_39[1].q
                                    var_100.o = *x0_39
                                    __builtin_memset(x0_39, 0, 0x18)
                                    int128_t* x0_41
                                    int128_t v0_5
                                    x0_41, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                        &var_100)
                                    int64_t var_d0_5 = x0_41[1].q
                                    int128_t var_e0_6 = *x0_41
                                    __builtin_memset(x0_41, 0, 0x18)
                                    *x0_36 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_36[1])
                                    x0_36[4].d = 0xa
                                    *x0_36 = _vtable_for_Botan::TLS::Unexpected_Message + 0x10
                                    __cxa_throw(x0_36, 
                                        _typeinfo_for_Botan::TLS::Unexpected_Message, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                if (zx.d(arg1[0xc8]) != 0)
                                    goto label_e56b8c
                                
                                Botan::TLS::Channel::process_handshake_ccs(arg1, &arg1[0xb0], 
                                    var_b8, x3_2, var_b0.b)
                        else
                        label_e5686c:
                            Botan::TLS::Alert::Alert(&var_100)
                            int32_t var_fc
                            
                            if (var_fc == 0x64)
                                int64_t* x0_6 = *(arg1 + 0x48)
                                *(arg1 + 0x48) = 0
                                
                                if (x0_6 != 0)
                                    (*(*x0_6 + 8))()
                            
                            int64_t* x0_7 = *(arg1 + 0x18)
                            int64_t x25_1 = var_100
                            (*(*x0_7 + 0x20))(x0_7, x25_1)
                            
                            if ((x25_1.d & 0xff) != 0)
                                void* x8_22 = *(arg1 + 0x40)
                                
                                if (x8_22 != 0)
                                    int64_t* x0_8 = *(arg1 + 0x20)
                                    (*(*x0_8 + 0x10))(x0_8, *(x8_22 + 0x108) + 0x10)
                                
                                if (var_fc == 0)
                                    goto label_e56710
                                
                                arg1[0xc8] = 1
                            else if (var_fc == 0)
                            label_e56710:
                                int128_t var_e0
                                var_e0.b = 0
                                var_e0:4.d = 0
                                Botan::TLS::Channel::send_alert(arg1)
                                arg1[0xc8] = 1
                        x21 += fp_1
                        
                        if (x20 != 0)
                            continue
                        
                        result = 0
                        break
                else
                    Botan::assertion_failure("input_size == 0 || needed == 0", 
                        "Got a full record or consumed all input", "received_data", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ed9)
                label_e56a40:
                    Botan::assertion_failure("consumed > 0", "Got to eat something", 
                        "received_data", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ed0)
                    Botan::assertion_failure("consumed <= input_size", 
                        "Record reader consumed sane amount", "received_data", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ed3)
            
            void** x0_11 = __cxa_allocate_exception(0x28)
            int64_t x0_12
            int128_t v1
            x0_12, v1 = operator new(0x40)
            int64_t var_d0 = x0_12
            v1 = data_71bb80
            __builtin_strncpy(x0_12, "TLS plaintext record is larger than allowed maximum", 0x34)
            int128_t var_e0_1 = v1
            *x0_11 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_11[1])
            x0_11[4].d = 0x16
            *x0_11 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_11, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
else
    x22 = (*(**(arg1 + 0x28) + 0x148))()
    
    if (x20 != 0)
        goto label_e56734
    
    result = 0

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
