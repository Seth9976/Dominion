// 函数: _ZN5Botan18create_private_keyERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERNS_21RandomNumberGeneratorES8_S8_
// 地址: 0xdf5164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x24 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x22 = arg1
uint64_t x11 = zx.q(*arg1)
uint64_t x9_1 = *(arg1 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9_1

if (x12 != 0xa)
    goto label_df51e4

void** entry_x8

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x22, 0, -ffffffffffffffff, "Curve25519").d == 0)
    Botan::RandomNumberGenerator* x0_16 = operator new(0x40)
    Botan::Curve25519_PrivateKey::Curve25519_PrivateKey(x0_16)
    *entry_x8 = x0_16 + 0x38
else
    uint64_t x8 = zx.q(*x22)
    x9_1 = *(x22 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_df51e4:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9_1
    
    if (x8_1 != 3)
        goto label_df5224
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x22, 0, -ffffffffffffffff, &data_76da56).d == 0)
        uint64_t x8_30 = zx.q(*arg3)
        uint64_t x8_31
        
        if ((x8_30.d & 1) == 0)
            x8_31 = x8_30 u>> 1
        else
            x8_31 = *(arg3 + 8)
        
        uint64_t x21_2
        
        if (x8_31 == 0)
            x21_2 = 0xc00
        else
            x21_2 = zx.q(Botan::to_u32bit(arg3))
        
        void* x0_37 = operator new(0x30)
        Botan::RSA_PrivateKey::RSA_PrivateKey(x0_37, arg2, x21_2)
        *entry_x8 = x0_37
    else
        uint64_t x8_2 = zx.q(*x22)
        x9_1 = *(x22 + 8)
        x10 = x8_2.d & 1
        x11_1 = x8_2 u>> 1
    label_df5224:
        uint64_t x8_3
        
        if ((x10 & 0xff) == 0)
            x8_3 = x11_1
        else
            x8_3 = x9_1
        
        if (x8_3 != 8)
            goto label_df5264
        
        char var_e0
        char var_c8
        int128_t var_c7
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * var_b0
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                x22, 0, -ffffffffffffffff, "McEliece").d == 0)
            uint64_t x8_32 = zx.q(*arg3)
            uint64_t x8_33
            
            if ((x8_32.d & 1) == 0)
                x8_33 = x8_32 u>> 1
            else
                x8_33 = *(arg3 + 8)
            
            if (x8_33 == 0)
                var_e0 = 0xe
                int32_t var_df
                __builtin_strncpy(&var_df, "2960,57", 8)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_e0)
            
            var_b0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
            char var_a8_1 = 0x2c
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                ** var_90_1 = &var_b0
            Botan::split_on_pred(&var_e0, &var_b0)
            
            if (&var_b0 == var_90_1)
                (*(*var_90_1 + 0x20))()
            else if (var_90_1 != 0)
                (*(*var_90_1 + 0x28))()
            
            void* var_d0
            
            if ((zx.d(var_e0) & 1) != 0)
                operator delete(var_d0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_41 = var_c8.q
            
            if (var_c7:7.q - x0_41 != 0x30)
                void** x0_98 = __cxa_allocate_exception(0x20)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "create_private_key bad McEliece parameters ", arg3)
                *x0_98 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_98[1])
                *x0_98 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_98, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            int32_t x0_42 = Botan::to_u32bit(x0_41)
            Botan::to_u32bit(var_c8.q + 0x18)
            void* x0_45 = operator new(0xa8)
            Botan::McEliece_PrivateKey::McEliece_PrivateKey(x0_45, arg2, zx.q(x0_42))
            void* x20_1 = var_c8.q
            *entry_x8 = x0_45
            
            if (x20_1 != 0)
                char* x8_47 = var_c7:7.q
                void* x0_47
                
                if (x8_47 == x20_1)
                    x0_47 = x20_1
                else
                    char* x19_1 = x8_47
                    
                    do
                        x19_1 = &x19_1[-0x18]
                        
                        if ((zx.d(*x19_1) & 1) != 0)
                            operator delete(*(x8_47 - 8))
                        
                        x8_47 = x19_1
                    while (x20_1 != x19_1)
                    
                    x0_47 = var_c8.q
                
                var_c7:7.q = x20_1
                operator delete(x0_47)
        else
            uint64_t x8_4 = zx.q(*x22)
            x9_1 = *(x22 + 8)
            x10 = x8_4.d & 1
            x11_1 = x8_4 u>> 1
        label_df5264:
            uint64_t x8_5
            
            if ((x10 & 0xff) == 0)
                x8_5 = x11_1
            else
                x8_5 = x9_1
            
            if (x8_5 != 4)
                goto label_df52a4
            
            char var_a8
            char var_90
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x22, 0, -ffffffffffffffff, "XMSS").d == 0)
                void* x0_34 = operator new(0x2a0)
                uint64_t x8_36 = zx.q(*arg3)
                uint64_t x8_37
                
                if ((x8_36.d & 1) == 0)
                    x8_37 = x8_36 u>> 1
                else
                    x8_37 = *(arg3 + 8)
                
                if (x8_37 == 0)
                    __builtin_strncpy(&var_c8, " XMSS-SHA2_10_512", 0x12)
                else
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_c8)
                
                Botan::XMSS_Parameters::xmss_id_from_string(&var_c8)
                Botan::XMSS_Parameters::XMSS_Parameters(&var_b0)
                Botan::XMSS_PrivateKey::XMSS_PrivateKey(x0_34, zx.q(var_b0.d))
                *entry_x8 = x0_34
                void* var_80
                
                if ((zx.d(var_90) & 1) != 0)
                    operator delete(var_80)
                void* var_98
                
                if ((zx.d(var_a8) & 1) != 0)
                    operator delete(var_98)
                goto label_df59c0
            
            uint64_t x8_6 = zx.q(*x22)
            x9_1 = *(x22 + 8)
            x10 = x8_6.d & 1
            x11_1 = x8_6 u>> 1
        label_df52a4:
            uint64_t x8_7
            
            if ((x10 & 0xff) == 0)
                x8_7 = x11_1
            else
                x8_7 = x9_1
            
            if (x8_7 != 7)
                goto label_df52e4
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x22, 0, -ffffffffffffffff, "Ed25519").d == 0)
                Botan::RandomNumberGenerator* x0_36 = operator new(0x40)
                Botan::Ed25519_PrivateKey::Ed25519_PrivateKey(x0_36)
                *entry_x8 = x0_36 + 0x38
            else
                uint64_t x8_8 = zx.q(*x22)
                x9_1 = *(x22 + 8)
                x10 = x8_8.d & 1
                x11_1 = x8_8 u>> 1
            label_df52e4:
                uint64_t x8_9
                
                if ((x10 & 0xff) == 0)
                    x8_9 = x11_1
                else
                    x8_9 = x9_1
                
                if (x8_9 != 5)
                    goto label_df5324
                
                arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x22, 0, -ffffffffffffffff, "ECDSA")
                
                if (arg1.d == 0)
                label_df5550:
                    uint64_t x8_28 = zx.q(*arg3)
                    uint64_t x8_29
                    
                    if ((x8_28.d & 1) == 0)
                        x8_29 = x8_28 u>> 1
                    else
                        x8_29 = *(arg3 + 8)
                    
                    if (x8_29 == 0)
                        uint64_t x10_4 = zx.q(*x22)
                        uint64_t x8_34 = *(x22 + 8)
                        int32_t x9_5 = x10_4.d & 1
                        uint64_t x10_5 = x10_4 u>> 1
                        uint64_t x11_2
                        
                        x11_2 = x9_5 == 0 ? x10_5 : x8_34
                        
                        if (x11_2 != 3)
                            goto label_df5630
                        
                        int16_t var_a7_1
                        char const* const x9_6
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, &data_745dc1) == 0)
                        label_df5830:
                            x9_6 = "sm2p256v1"
                        label_df5834:
                            var_b0.b = 0x12
                            var_a7_1 = 0x31
                            var_b0 = *x9_6
                        else
                            uint64_t x10_6 = zx.q(*x22)
                            x8_34 = *(x22 + 8)
                            x9_5 = x10_6.d & 1
                            x10_5 = x10_6 u>> 1
                        label_df5630:
                            uint64_t x11_3
                            
                            if ((x9_5 & 0xff) == 0)
                                x11_3 = x10_5
                            else
                                x11_3 = x8_34
                            
                            if (x11_3 == 7)
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        x22, 0, -ffffffffffffffff, "SM2_Enc") == 0)
                                    goto label_df5830
                                
                                uint64_t x10_7 = zx.q(*x22)
                                x8_34 = *(x22 + 8)
                                x9_5 = x10_7.d & 1
                                x10_5 = x10_7 u>> 1
                            
                            uint64_t x11_4
                            
                            if ((x9_5 & 0xff) == 0)
                                x11_4 = x10_5
                            else
                                x11_4 = x8_34
                            
                            if (x11_4 == 7)
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        x22, 0, -ffffffffffffffff, "SM2_Sig") == 0)
                                    goto label_df5830
                                
                                uint64_t x10_8 = zx.q(*x22)
                                x8_34 = *(x22 + 8)
                                x9_5 = x10_8.d & 1
                                x10_5 = x10_8 u>> 1
                            
                            uint64_t x11_5
                            
                            if ((x9_5 & 0xff) == 0)
                                x11_5 = x10_5
                            else
                                x11_5 = x8_34
                            
                            if (x11_5 != 0xa)
                                goto label_df56f0
                            
                            char const* const x9_9
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x22, 0, -ffffffffffffffff, "GOST-34.10") == 0)
                            label_df59e8:
                                x9_9 = "gost_256A"
                            label_df59fc:
                                var_b0.b = 0x12
                                var_a7_1 = 0x41
                                var_b0 = *x9_9
                            else
                                uint64_t x10_9 = zx.q(*x22)
                                x8_34 = *(x22 + 8)
                                x9_5 = x10_9.d & 1
                                x10_5 = x10_9 u>> 1
                            label_df56f0:
                                uint64_t x11_6
                                
                                if ((x9_5 & 0xff) == 0)
                                    x11_6 = x10_5
                                else
                                    x11_6 = x8_34
                                
                                if (x11_6 == 0x13)
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            x22, 0, -ffffffffffffffff, "GOST-34.10-2012-256") == 0)
                                        goto label_df59e8
                                    
                                    uint64_t x10_10 = zx.q(*x22)
                                    x8_34 = *(x22 + 8)
                                    x9_5 = x10_10.d & 1
                                    x10_5 = x10_10 u>> 1
                                
                                uint64_t x11_7
                                
                                if ((x9_5 & 0xff) == 0)
                                    x11_7 = x10_5
                                else
                                    x11_7 = x8_34
                                
                                if (x11_7 != 0x13)
                                    goto label_df5770
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        x22, 0, -ffffffffffffffff, "GOST-34.10-2012-512") == 0)
                                    x9_9 = "gost_512A"
                                    goto label_df59fc
                                
                                uint64_t x10_11 = zx.q(*x22)
                                x8_34 = *(x22 + 8)
                                x9_5 = x10_11.d & 1
                                x10_5 = x10_11 u>> 1
                            label_df5770:
                                uint64_t x8_35
                                
                                if ((x9_5 & 0xff) == 0)
                                    x8_35 = x10_5
                                else
                                    x8_35 = x8_34
                                
                                int32_t x0_33
                                
                                if (x8_35 == 6)
                                    x0_33 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        x22, 0, -ffffffffffffffff, "ECGDSA")
                                
                                if (x8_35 != 6 || x0_33 != 0)
                                    x9_6 = "secp256r1"
                                    goto label_df5834
                                
                                var_b0.b = 0x1c
                                __builtin_strncpy(&var_b0:1, "brainpool256r1", 0xf)
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_b0)
                    
                    Botan::EC_Group::EC_Group(&var_c8)
                    void* var_a0
                    
                    if ((zx.d(var_b0.b) & 1) != 0)
                        operator delete(var_a0)
                    uint64_t x10_13 = zx.q(*x22)
                    uint64_t x8_52 = *(x22 + 8)
                    int32_t x9_11 = x10_13.d & 1
                    uint64_t x10_14 = x10_13 u>> 1
                    uint64_t x11_8
                    
                    x11_8 = x9_11 == 0 ? x10_14 : x8_52
                    
                    if (x11_8 != 5)
                        goto label_df5a7c
                    
                    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        x22, 0, -ffffffffffffffff, "ECDSA")
                    int64_t x9_28
                    int64_t* x19_2
                    
                    if (arg1.d == 0)
                        int64_t* x0_82 = operator new(0xe0)
                        __builtin_memset(&var_b0, 0, 0x18)
                        int64_t var_98_2 = -1
                        __builtin_memset(&x0_82[0xe], 0, 0x20)
                        *(x0_82 + 0xa0) = zx.o(0)
                        __builtin_memset(&x0_82[0x18], 0, 0x20)
                        x0_82[0xf] = -1
                        x0_82[0x14] = -1
                        x0_82[0x19] = -1
                        var_90 = 1
                        x0_82[0x10].d = 1
                        x0_82[0x15].d = 1
                        x0_82[0x1a].d = 1
                        *(x0_82 + 0x90) = zx.o(0)
                        *(x0_82 + 0xb0) = zx.o(0)
                        __builtin_memset(&x0_82[8], 0, 0x30)
                        __builtin_memset(&x0_82[0x11], 0, 0x18)
                        __builtin_memset(&x0_82[0x16], 0, 0x18)
                        x0_82[1] =
                            construction_vtable_for_Botan::Private_Key-in-Botan::ECDSA_PrivateKey
                            + 0xc0
                        x0_82[7] = construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey
                            + 0x190
                        *x0_82 = construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey
                            + 0x90
                        Botan::EC_PrivateKey::EC_PrivateKey(&x0_82[1], 
                            _VTT_for_Botan::ECDSA_PrivateKey + 0x20, arg2, &var_c8)
                        arg1 = var_b0
                        *entry_x8 = &x0_82[1]
                        x0_82[7] = _vtable_for_Botan::ECDSA_PrivateKey + 0x320
                        *x0_82 = _vtable_for_Botan::ECDSA_PrivateKey + 0x98
                        x0_82[1] = _vtable_for_Botan::ECDSA_PrivateKey + 0x1e8
                        
                        if (arg1 != 0)
                            var_a8.q = arg1
                            int64_t var_a0_2
                            Botan::deallocate_memory(arg1, (var_a0_2 - arg1) s>> 2, 4)
                        
                        x19_2 = var_c7:7.q
                        
                        if (x19_2 != 0)
                            int32_t i
                            
                            do
                                x9_28 = __ldaxr(&x19_2[1])
                                i = __stlxr(x9_28 - 1, &x19_2[1])
                            while (i != 0)
                        label_df637c:
                            
                            if (x9_28 == 0)
                                (*(*x19_2 + 0x10))(x19_2)
                                std::__ndk1::__shared_weak_count::__release_weak()
                    else
                        uint64_t x10_15 = zx.q(*x22)
                        x8_52 = *(x22 + 8)
                        x9_11 = x10_15.d & 1
                        x10_14 = x10_15 u>> 1
                    label_df5a7c:
                        uint64_t x11_9
                        
                        if ((x9_11 & 0xff) == 0)
                            x11_9 = x10_14
                        else
                            x11_9 = x8_52
                        
                        if (x11_9 != 4)
                            goto label_df5abc
                        
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "ECDH")
                        
                        if (arg1.d == 0)
                            int64_t* x0_84 = operator new(0xe8)
                            __builtin_memset(&var_b0, 0, 0x18)
                            int64_t var_98_3 = -1
                            *(x0_84 + 0x78) = zx.o(0)
                            *(x0_84 + 0xa8) = zx.o(0)
                            __builtin_memset(&x0_84[0x19], 0, 0x20)
                            x0_84[0x10] = -1
                            x0_84[0x15] = -1
                            x0_84[0x19] = 0
                            x0_84[0x1a] = -1
                            var_90 = 1
                            *(x0_84 + 0x88) = zx.o(0)
                            x0_84[0x11].d = 1
                            x0_84[0x16].d = 1
                            x0_84[0x1b].d = 1
                            *(x0_84 + 0x98) = zx.o(0)
                            *(x0_84 + 0xb8) = zx.o(0)
                            __builtin_memset(&x0_84[9], 0, 0x30)
                            __builtin_memset(&x0_84[0x12], 0, 0x18)
                            x0_84[0x17] = 0
                            x0_84[0x18] = 0
                            x0_84[1] =
                                construction_vtable_for_Botan::Private_Key-in-Botan::ECDH_PrivateKey
                                + 0xc0
                            x0_84[8] = construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey
                                + 0x190
                            *x0_84 = construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey
                                + 0x90
                            Botan::EC_PrivateKey::EC_PrivateKey(&x0_84[1], 
                                _VTT_for_Botan::ECDH_PrivateKey + 0x20, arg2, &var_c8)
                            arg1 = var_b0
                            *entry_x8 = &x0_84[1]
                            *x0_84 = _vtable_for_Botan::ECDH_PrivateKey + 0x98
                            x0_84[1] = _vtable_for_Botan::ECDH_PrivateKey + 0x1f0
                            x0_84[7] = _vtable_for_Botan::ECDH_PrivateKey + 0x368
                            x0_84[8] = _vtable_for_Botan::ECDH_PrivateKey + 0x4a8
                            
                            if (arg1 != 0)
                                var_a8.q = arg1
                                int64_t var_a0_3
                                Botan::deallocate_memory(arg1, (var_a0_3 - arg1) s>> 2, 4)
                            
                            x19_2 = var_c7:7.q
                            
                            if (x19_2 != 0)
                                int32_t i_1
                                
                                do
                                    x9_28 = __ldaxr(&x19_2[1])
                                    i_1 = __stlxr(x9_28 - 1, &x19_2[1])
                                while (i_1 != 0)
                                goto label_df637c
                        else
                            uint64_t x10_16 = zx.q(*x22)
                            x8_52 = *(x22 + 8)
                            x9_11 = x10_16.d & 1
                            x10_14 = x10_16 u>> 1
                        label_df5abc:
                            uint64_t x11_10
                            
                            if ((x9_11 & 0xff) == 0)
                                x11_10 = x10_14
                            else
                                x11_10 = x8_52
                            
                            if (x11_10 != 7)
                                goto label_df5afc
                            
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x22, 0, -ffffffffffffffff, "ECKCDSA")
                            
                            if (arg1.d == 0)
                                int64_t* x0_87 = operator new(0xe0)
                                __builtin_memset(&var_b0, 0, 0x18)
                                int64_t var_98_5 = -1
                                __builtin_memset(&x0_87[0xe], 0, 0x20)
                                *(x0_87 + 0xa0) = zx.o(0)
                                __builtin_memset(&x0_87[0x18], 0, 0x20)
                                x0_87[0xf] = -1
                                x0_87[0x14] = -1
                                x0_87[0x19] = -1
                                var_90 = 1
                                x0_87[0x10].d = 1
                                x0_87[0x15].d = 1
                                x0_87[0x1a].d = 1
                                *(x0_87 + 0x90) = zx.o(0)
                                *(x0_87 + 0xb0) = zx.o(0)
                                __builtin_memset(&x0_87[8], 0, 0x30)
                                __builtin_memset(&x0_87[0x11], 0, 0x18)
                                __builtin_memset(&x0_87[0x16], 0, 0x18)
                                x0_87[1] = construction_vtable_for_Botan::Private_Key-in-Botan::ECKCDSA_PrivateKey
                                    + 0xc0
                                x0_87[7] = construction_vtable_for_Botan::ECKCDSA_PublicKey-in-Botan::ECKCDSA_PrivateKey
                                    + 0x190
                                *x0_87 = construction_vtable_for_Botan::ECKCDSA_PublicKey-in-Botan::ECKCDSA_PrivateKey
                                    + 0x90
                                Botan::EC_PrivateKey::EC_PrivateKey(&x0_87[1], 
                                    _VTT_for_Botan::ECKCDSA_PrivateKey + 0x20, arg2, &var_c8)
                                arg1 = var_b0
                                *entry_x8 = &x0_87[1]
                                x0_87[7] = _vtable_for_Botan::ECKCDSA_PrivateKey + 0x320
                                *x0_87 = _vtable_for_Botan::ECKCDSA_PrivateKey + 0x98
                                x0_87[1] = _vtable_for_Botan::ECKCDSA_PrivateKey + 0x1e8
                                
                                if (arg1 != 0)
                                    var_a8.q = arg1
                                    int64_t var_a0_5
                                    Botan::deallocate_memory(arg1, (var_a0_5 - arg1) s>> 2, 4)
                                
                                x19_2 = var_c7:7.q
                                
                                if (x19_2 != 0)
                                    int32_t i_2
                                    
                                    do
                                        x9_28 = __ldaxr(&x19_2[1])
                                        i_2 = __stlxr(x9_28 - 1, &x19_2[1])
                                    while (i_2 != 0)
                                    goto label_df637c
                            else
                                uint64_t x10_17 = zx.q(*x22)
                                x8_52 = *(x22 + 8)
                                x9_11 = x10_17.d & 1
                                x10_14 = x10_17 u>> 1
                            label_df5afc:
                                uint64_t x11_11
                                
                                if ((x9_11 & 0xff) == 0)
                                    x11_11 = x10_14
                                else
                                    x11_11 = x8_52
                                
                                if (x11_11 != 0xa)
                                    goto label_df5b3c
                                
                                arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    x22, 0, -ffffffffffffffff, "GOST-34.10")
                                
                                if (arg1.d == 0)
                                label_df5f40:
                                    Botan::RandomNumberGenerator* x0_81 = operator new(0xe0)
                                    __builtin_memset(&var_b0, 0, 0x18)
                                    int64_t var_98_1 = -1
                                    var_90 = 1
                                    Botan::GOST_3410_PrivateKey::GOST_3410_PrivateKey(x0_81, arg2, 
                                        &var_c8)
                                    arg1 = var_b0
                                    *entry_x8 = x0_81 + 8
                                    
                                    if (arg1 != 0)
                                        var_a8.q = arg1
                                        int64_t var_a0_1
                                        Botan::deallocate_memory(arg1, (var_a0_1 - arg1) s>> 2, 4)
                                    
                                    x19_2 = var_c7:7.q
                                    
                                    if (x19_2 != 0)
                                        int32_t i_3
                                        
                                        do
                                            x9_28 = __ldaxr(&x19_2[1])
                                            i_3 = __stlxr(x9_28 - 1, &x19_2[1])
                                        while (i_3 != 0)
                                        goto label_df637c
                                else
                                    uint64_t x10_18 = zx.q(*x22)
                                    x8_52 = *(x22 + 8)
                                    x9_11 = x10_18.d & 1
                                    x10_14 = x10_18 u>> 1
                                label_df5b3c:
                                    uint64_t x11_12
                                    
                                    if ((x9_11 & 0xff) == 0)
                                        x11_12 = x10_14
                                    else
                                        x11_12 = x8_52
                                    
                                    if (x11_12 == 0x13)
                                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            x22, 0, -ffffffffffffffff, "GOST-34.10-2012-256")
                                        
                                        if (arg1.d == 0)
                                            goto label_df5f40
                                        
                                        uint64_t x10_19 = zx.q(*x22)
                                        x8_52 = *(x22 + 8)
                                        x9_11 = x10_19.d & 1
                                        x10_14 = x10_19 u>> 1
                                    
                                    uint64_t x11_13
                                    
                                    if ((x9_11 & 0xff) == 0)
                                        x11_13 = x10_14
                                    else
                                        x11_13 = x8_52
                                    
                                    if (x11_13 == 0x13)
                                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            x22, 0, -ffffffffffffffff, "GOST-34.10-2012-512")
                                        
                                        if (arg1.d == 0)
                                            goto label_df5f40
                                        
                                        uint64_t x10_20 = zx.q(*x22)
                                        x8_52 = *(x22 + 8)
                                        x9_11 = x10_20.d & 1
                                        x10_14 = x10_20 u>> 1
                                    
                                    uint64_t x11_14
                                    
                                    if ((x9_11 & 0xff) == 0)
                                        x11_14 = x10_14
                                    else
                                        x11_14 = x8_52
                                    
                                    if (x11_14 != 3)
                                        goto label_df5bfc
                                    
                                    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        x22, 0, -ffffffffffffffff, &data_745dc1)
                                    
                                    if (arg1.d == 0)
                                    label_df61f4:
                                        Botan::RandomNumberGenerator* x0_86 = operator new(0x108)
                                        __builtin_memset(&var_b0, 0, 0x18)
                                        int64_t var_98_4 = -1
                                        var_90 = 1
                                        Botan::SM2_PrivateKey::SM2_PrivateKey(x0_86, arg2, &var_c8)
                                        arg1 = var_b0
                                        *entry_x8 = x0_86 + 8
                                        
                                        if (arg1 != 0)
                                            var_a8.q = arg1
                                            int64_t var_a0_4
                                            Botan::deallocate_memory(arg1, (var_a0_4 - arg1) s>> 2, 
                                                4)
                                        
                                        x19_2 = var_c7:7.q
                                        
                                        if (x19_2 != 0)
                                            int32_t i_4
                                            
                                            do
                                                x9_28 = __ldaxr(&x19_2[1])
                                                i_4 = __stlxr(x9_28 - 1, &x19_2[1])
                                            while (i_4 != 0)
                                            goto label_df637c
                                    else
                                        uint64_t x10_21 = zx.q(*x22)
                                        x8_52 = *(x22 + 8)
                                        x9_11 = x10_21.d & 1
                                        x10_14 = x10_21 u>> 1
                                    label_df5bfc:
                                        uint64_t x11_15
                                        
                                        if ((x9_11 & 0xff) == 0)
                                            x11_15 = x10_14
                                        else
                                            x11_15 = x8_52
                                        
                                        if (x11_15 == 7)
                                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                x22, 0, -ffffffffffffffff, "SM2_Sig")
                                            
                                            if (arg1.d == 0)
                                                goto label_df61f4
                                            
                                            uint64_t x10_22 = zx.q(*x22)
                                            x8_52 = *(x22 + 8)
                                            x9_11 = x10_22.d & 1
                                            x10_14 = x10_22 u>> 1
                                        
                                        uint64_t x11_16
                                        
                                        if ((x9_11 & 0xff) == 0)
                                            x11_16 = x10_14
                                        else
                                            x11_16 = x8_52
                                        
                                        if (x11_16 == 7)
                                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                x22, 0, -ffffffffffffffff, "SM2_Enc")
                                            
                                            if (arg1.d == 0)
                                                goto label_df61f4
                                            
                                            uint64_t x10_23 = zx.q(*x22)
                                            x8_52 = *(x22 + 8)
                                            x9_11 = x10_23.d & 1
                                            x10_14 = x10_23 u>> 1
                                        
                                        uint64_t x8_53
                                        
                                        if ((x9_11 & 0xff) == 0)
                                            x8_53 = x10_14
                                        else
                                            x8_53 = x8_52
                                        
                                        if (x8_53 == 6)
                                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                x22, 0, -ffffffffffffffff, "ECGDSA")
                                        
                                        if (x8_53 != 6 || arg1.d != 0)
                                            int64_t* x23_2 = var_c7:7.q
                                            
                                            if (x23_2 != 0)
                                                int64_t x9_12
                                                int32_t i_5
                                                
                                                do
                                                    x9_12 = __ldaxr(&x23_2[1])
                                                    i_5 = __stlxr(x9_12 - 1, &x23_2[1])
                                                while (i_5 != 0)
                                                
                                                if (x9_12 == 0)
                                                    (*(*x23_2 + 0x10))(x23_2)
                                                    std::__ndk1::__shared_weak_count::__release_weak()
                                            
                                            goto label_df5ce0
                                        
                                        int64_t* x0_91 = operator new(0xe0)
                                        __builtin_memset(&var_b0, 0, 0x18)
                                        int64_t var_98_6 = -1
                                        __builtin_memset(&x0_91[0xe], 0, 0x20)
                                        *(x0_91 + 0xa0) = zx.o(0)
                                        __builtin_memset(&x0_91[0x18], 0, 0x20)
                                        x0_91[0xf] = -1
                                        x0_91[0x14] = -1
                                        x0_91[0x19] = -1
                                        var_90 = 1
                                        x0_91[0x10].d = 1
                                        x0_91[0x15].d = 1
                                        x0_91[0x1a].d = 1
                                        *(x0_91 + 0x90) = zx.o(0)
                                        *(x0_91 + 0xb0) = zx.o(0)
                                        __builtin_memset(&x0_91[8], 0, 0x30)
                                        __builtin_memset(&x0_91[0x11], 0, 0x18)
                                        __builtin_memset(&x0_91[0x16], 0, 0x18)
                                        x0_91[1] = construction_vtable_for_Botan::Private_Key-in-Botan::ECGDSA_PrivateKey
                                            + 0xc0
                                        x0_91[7] = construction_vtable_for_Botan::ECGDSA_PublicKey-in-Botan::ECGDSA_PrivateKey
                                            + 0x190
                                        *x0_91 = construction_vtable_for_Botan::ECGDSA_PublicKey-in-Botan::ECGDSA_PrivateKey
                                            + 0x90
                                        Botan::EC_PrivateKey::EC_PrivateKey(&x0_91[1], 
                                            _VTT_for_Botan::ECGDSA_PrivateKey + 0x20, arg2, &var_c8)
                                        arg1 = var_b0
                                        *entry_x8 = &x0_91[1]
                                        x0_91[7] = _vtable_for_Botan::ECGDSA_PrivateKey + 0x320
                                        *x0_91 = _vtable_for_Botan::ECGDSA_PrivateKey + 0x98
                                        x0_91[1] = _vtable_for_Botan::ECGDSA_PrivateKey + 0x1e8
                                        
                                        if (arg1 != 0)
                                            var_a8.q = arg1
                                            int64_t var_a0_6
                                            Botan::deallocate_memory(arg1, (var_a0_6 - arg1) s>> 2, 
                                                4)
                                        
                                        x19_2 = var_c7:7.q
                                        
                                        if (x19_2 != 0)
                                            int32_t i_6
                                            
                                            do
                                                x9_28 = __ldaxr(&x19_2[1])
                                                i_6 = __stlxr(x9_28 - 1, &x19_2[1])
                                            while (i_6 != 0)
                                            goto label_df637c
                else
                    uint64_t x8_10 = zx.q(*x22)
                    x9_1 = *(x22 + 8)
                    x10 = x8_10.d & 1
                    x11_1 = x8_10 u>> 1
                label_df5324:
                    uint64_t x8_11
                    
                    if ((x10 & 0xff) == 0)
                        x8_11 = x11_1
                    else
                        x8_11 = x9_1
                    
                    if (x8_11 == 4)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "ECDH")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_12 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_12.d & 1
                        x11_1 = x8_12 u>> 1
                    
                    uint64_t x8_13
                    
                    if ((x10 & 0xff) == 0)
                        x8_13 = x11_1
                    else
                        x8_13 = x9_1
                    
                    if (x8_13 == 7)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "ECKCDSA")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_14 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_14.d & 1
                        x11_1 = x8_14 u>> 1
                    
                    uint64_t x8_15
                    
                    if ((x10 & 0xff) == 0)
                        x8_15 = x11_1
                    else
                        x8_15 = x9_1
                    
                    if (x8_15 == 6)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "ECGDSA")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_16 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_16.d & 1
                        x11_1 = x8_16 u>> 1
                    
                    uint64_t x8_17
                    
                    if ((x10 & 0xff) == 0)
                        x8_17 = x11_1
                    else
                        x8_17 = x9_1
                    
                    if (x8_17 == 3)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, &data_745dc1)
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_18 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_18.d & 1
                        x11_1 = x8_18 u>> 1
                    
                    uint64_t x8_19
                    
                    if ((x10 & 0xff) == 0)
                        x8_19 = x11_1
                    else
                        x8_19 = x9_1
                    
                    if (x8_19 == 7)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "SM2_Sig")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_20 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_20.d & 1
                        x11_1 = x8_20 u>> 1
                    
                    uint64_t x8_21
                    
                    if ((x10 & 0xff) == 0)
                        x8_21 = x11_1
                    else
                        x8_21 = x9_1
                    
                    if (x8_21 == 7)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "SM2_Enc")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_22 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_22.d & 1
                        x11_1 = x8_22 u>> 1
                    
                    uint64_t x8_23
                    
                    if ((x10 & 0xff) == 0)
                        x8_23 = x11_1
                    else
                        x8_23 = x9_1
                    
                    if (x8_23 == 0xa)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "GOST-34.10")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_24 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_24.d & 1
                        x11_1 = x8_24 u>> 1
                    
                    uint64_t x8_25
                    
                    if ((x10 & 0xff) == 0)
                        x8_25 = x11_1
                    else
                        x8_25 = x9_1
                    
                    if (x8_25 == 0x13)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "GOST-34.10-2012-256")
                        
                        if (arg1.d == 0)
                            goto label_df5550
                        
                        uint64_t x8_26 = zx.q(*x22)
                        x9_1 = *(x22 + 8)
                        x10 = x8_26.d & 1
                        x11_1 = x8_26 u>> 1
                    
                    uint64_t x8_27
                    
                    if ((x10 & 0xff) == 0)
                        x8_27 = x11_1
                    else
                        x8_27 = x9_1
                    
                    if (x8_27 == 0x13)
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, "GOST-34.10-2012-512")
                        
                        if (arg1.d != 0)
                            goto label_df5ce0
                        
                        goto label_df5550
                    
                label_df5ce0:
                    uint64_t x10_25 = zx.q(*x22)
                    uint64_t x8_57 = *(x22 + 8)
                    int32_t x9_13 = x10_25.d & 1
                    uint64_t x10_26 = x10_25 u>> 1
                    uint64_t x11_18
                    
                    x11_18 = x9_13 == 0 ? x10_26 : x8_57
                    
                    if (x11_18 != 2)
                        goto label_df5d30
                    
                    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        x22, 0, -ffffffffffffffff, &data_72d952)
                    
                    if (arg1.d == 0)
                    label_df5d9c:
                        uint64_t x8_59 = zx.q(*x22)
                        char const* const x23_3 = "modp/ietf/2048"
                        uint64_t x8_60
                        
                        if ((x8_59.d & 1) == 0)
                            x8_60 = x8_59 u>> 1
                        else
                            x8_60 = *(x22 + 8)
                        
                        if (x8_60 == 3)
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    x22, 0, -ffffffffffffffff, &data_72065f) == 0)
                                x23_3 = "dsa/botan/2048"
                            else
                                x23_3 = "modp/ietf/2048"
                        
                        int64_t x9_15 = *(x23_3 + 6)
                        int64_t x10_30 = *x23_3
                        var_c7:0xe.b = 0
                        var_c8 = 0x1c
                        var_c7:6.q = x9_15
                        var_c7.q = x10_30
                        
                        if ((zx.d(*arg3) & 1) != 0)
                            *(arg3 + 8)
                        
                        Botan::DL_Group::DL_Group(&var_e0)
                        uint64_t x10_32 = zx.q(*x22)
                        uint64_t x8_63 = *(x22 + 8)
                        int32_t x9_17 = x10_32.d & 1
                        uint64_t x10_33 = x10_32 u>> 1
                        uint64_t x11_20
                        
                        x11_20 = x9_17 == 0 ? x10_33 : x8_63
                        
                        if (x11_20 != 2)
                            goto label_df5e80
                        
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x22, 0, -ffffffffffffffff, &data_72d952)
                        char var_d8
                        int64_t x9_33
                        int64_t* x19_3
                        
                        if (arg1.d == 0)
                            Botan::RandomNumberGenerator* x0_93 = operator new(0x80)
                            __builtin_memset(&var_b0, 0, 0x18)
                            int64_t var_98_7 = -1
                            var_90 = 1
                            Botan::DH_PrivateKey::DH_PrivateKey(x0_93, arg2, &var_e0)
                            arg1 = var_b0
                            *entry_x8 = x0_93 + 8
                            
                            if (arg1 != 0)
                                var_a8.q = arg1
                                int64_t var_a0_7
                                Botan::deallocate_memory(arg1, (var_a0_7 - arg1) s>> 2, 4)
                            
                            x19_3 = var_d8.q
                            
                            if (x19_3 == 0)
                                goto label_df59c0
                            
                            int32_t i_7
                            
                            do
                                x9_33 = __ldaxr(&x19_3[1])
                                i_7 = __stlxr(x9_33 - 1, &x19_3[1])
                            while (i_7 != 0)
                        label_df6664:
                            
                            if (x9_33 != 0)
                                goto label_df59c0
                            
                            (*(*x19_3 + 0x10))(x19_3)
                            std::__ndk1::__shared_weak_count::__release_weak()
                        label_df59c0:
                            
                            if ((zx.d(var_c8) & 1) != 0)
                                operator delete(var_c7:0xf.q)
                        else
                            uint64_t x10_34 = zx.q(*x22)
                            x8_63 = *(x22 + 8)
                            x9_17 = x10_34.d & 1
                            x10_33 = x10_34 u>> 1
                        label_df5e80:
                            uint64_t x11_21
                            
                            if ((x9_17 & 0xff) == 0)
                                x11_21 = x10_33
                            else
                                x11_21 = x8_63
                            
                            if (x11_21 != 3)
                                goto label_df5ec0
                            
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x22, 0, -ffffffffffffffff, &data_72065f)
                            
                            if (arg1.d == 0)
                                Botan::RandomNumberGenerator* x0_94 = operator new(0x78)
                                __builtin_memset(&var_b0, 0, 0x18)
                                int64_t var_98_8 = -1
                                var_90 = 1
                                Botan::DSA_PrivateKey::DSA_PrivateKey(x0_94, arg2, &var_e0)
                                arg1 = var_b0
                                *entry_x8 = x0_94 + 0x48
                                
                                if (arg1 != 0)
                                    var_a8.q = arg1
                                    int64_t var_a0_8
                                    Botan::deallocate_memory(arg1, (var_a0_8 - arg1) s>> 2, 4)
                                
                                x19_3 = var_d8.q
                                
                                if (x19_3 == 0)
                                    goto label_df59c0
                                
                                int32_t i_8
                                
                                do
                                    x9_33 = __ldaxr(&x19_3[1])
                                    i_8 = __stlxr(x9_33 - 1, &x19_3[1])
                                while (i_8 != 0)
                                goto label_df6664
                            
                            uint64_t x10_35 = zx.q(*x22)
                            x8_63 = *(x22 + 8)
                            x9_17 = x10_35.d & 1
                            x10_33 = x10_35 u>> 1
                        label_df5ec0:
                            uint64_t x8_64
                            
                            if ((x9_17 & 0xff) == 0)
                                x8_64 = x10_33
                            else
                                x8_64 = x8_63
                            
                            if (x8_64 == 7)
                                arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    x22, 0, -ffffffffffffffff, "ElGamal")
                            
                            if (x8_64 == 7 && arg1.d == 0)
                                Botan::RandomNumberGenerator* x0_95 = operator new(0x78)
                                __builtin_memset(&var_b0, 0, 0x18)
                                int64_t var_98_9 = -1
                                var_90 = 1
                                Botan::ElGamal_PrivateKey::ElGamal_PrivateKey(x0_95, arg2, &var_e0)
                                arg1 = var_b0
                                *entry_x8 = x0_95 + 0x48
                                
                                if (arg1 != 0)
                                    var_a8.q = arg1
                                    int64_t var_a0_9
                                    Botan::deallocate_memory(arg1, (var_a0_9 - arg1) s>> 2, 4)
                                
                                x19_3 = var_d8.q
                                
                                if (x19_3 == 0)
                                    goto label_df59c0
                                
                                int32_t i_9
                                
                                do
                                    x9_33 = __ldaxr(&x19_3[1])
                                    i_9 = __stlxr(x9_33 - 1, &x19_3[1])
                                while (i_9 != 0)
                                goto label_df6664
                            
                            int64_t* x20_2 = var_d8.q
                            
                            if (x20_2 != 0)
                                int64_t x9_18
                                int32_t i_10
                                
                                do
                                    x9_18 = __ldaxr(&x20_2[1])
                                    i_10 = __stlxr(x9_18 - 1, &x20_2[1])
                                while (i_10 != 0)
                                
                                if (x9_18 == 0)
                                    (*(*x20_2 + 0x10))(x20_2)
                                    std::__ndk1::__shared_weak_count::__release_weak()
                            
                            if ((zx.d(var_c8) & 1) != 0)
                                operator delete(var_c7:0xf.q)
                            
                            *entry_x8 = nullptr
                    else
                        uint64_t x10_27 = zx.q(*x22)
                        x8_57 = *(x22 + 8)
                        x9_13 = x10_27.d & 1
                        x10_26 = x10_27 u>> 1
                    label_df5d30:
                        uint64_t x11_19
                        
                        if ((x9_13 & 0xff) == 0)
                            x11_19 = x10_26
                        else
                            x11_19 = x8_57
                        
                        if (x11_19 == 3)
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x22, 0, -ffffffffffffffff, &data_72065f)
                            
                            if (arg1.d == 0)
                                goto label_df5d9c
                            
                            uint64_t x10_28 = zx.q(*x22)
                            x8_57 = *(x22 + 8)
                            x9_13 = x10_28.d & 1
                            x10_26 = x10_28 u>> 1
                        
                        uint64_t x8_58
                        
                        if ((x9_13 & 0xff) == 0)
                            x8_58 = x10_26
                        else
                            x8_58 = x8_57
                        
                        if (x8_58 != 7)
                            *entry_x8 = nullptr
                        else
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x22, 0, -ffffffffffffffff, "ElGamal")
                            
                            if (arg1.d == 0)
                                goto label_df5d9c
                            
                            *entry_x8 = nullptr

if (*(x24 + 0x28) == x9)
    return 

__stack_chk_fail()
noreturn
