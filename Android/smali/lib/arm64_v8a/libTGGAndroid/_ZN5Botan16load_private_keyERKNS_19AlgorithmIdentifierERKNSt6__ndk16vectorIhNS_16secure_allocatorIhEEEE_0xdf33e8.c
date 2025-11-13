// 函数: _ZN5Botan16load_private_keyERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xdf33e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OID::to_formatted_string()
char var_48
uint64_t x10 = zx.q(var_48)
uint64_t var_40
uint64_t x8 = var_40
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 3)
    goto label_df3460

int64_t result
void* var_38
void** entry_x8
void* x22

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_48, 0, -ffffffffffffffff, &data_76da56) == 0)
    void* x0_38
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x1_1
    x0_38, x1_1 = operator new(0x30)
    x22 = x0_38
    result = Botan::RSA_PrivateKey::RSA_PrivateKey(x0_38, x1_1)
label_df3d10:
    uint32_t x8_13 = zx.d(var_48)
    *entry_x8 = x22
    
    if ((x8_13 & 1) != 0)
        return operator delete(var_38)
else
    uint64_t x10_2 = zx.q(var_48)
    x8 = var_40
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_df3460:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8
    
    if (x11_1 != 0xa)
        goto label_df34a0
    
    Botan::AlgorithmIdentifier* x21_1
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "Curve25519") == 0)
        Botan::AlgorithmIdentifier* x0_39
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x1_2
        x0_39, x1_2 = operator new(0x40)
        x21_1 = x0_39
        result = Botan::Curve25519_PrivateKey::Curve25519_PrivateKey(x0_39, x1_2)
    label_df38d4:
        uint32_t x8_2 = zx.d(var_48)
        *entry_x8 = x21_1 + 0x38
        
        if ((x8_2 & 1) != 0)
            return operator delete(var_38)
    else
        uint64_t x10_3 = zx.q(var_48)
        x8 = var_40
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_df34a0:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8
        
        if (x11_2 != 5)
            goto label_df34e0
        
        struct vtable_for_Botan::ECKCDSA_PrivateKey* const x8_4
        void* __offset(vtable_for_Botan::GOST_3410_PrivateKey, 0x1f0) x8_10
        void* __offset(vtable_for_Botan::GOST_3410_PrivateKey, 0x328) x9_8
        void* __offset(vtable_for_Botan::GOST_3410_PrivateKey, 0x98) x10_20
        int64_t* x23_1
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_48, 0, -ffffffffffffffff, "ECDSA") == 0)
            int64_t* x0_40 = operator new(0xe0)
            __builtin_memset(&x0_40[0xe], 0, 0x20)
            *(x0_40 + 0xa0) = zx.o(0)
            __builtin_memset(&x0_40[0x18], 0, 0x20)
            x0_40[0xf] = -1
            x0_40[0x14] = -1
            x0_40[0x19] = -1
            x0_40[0x10].d = 1
            x0_40[0x15].d = 1
            x0_40[0x1a].d = 1
            x23_1 = x0_40
            *(x0_40 + 0x90) = zx.o(0)
            *(x0_40 + 0xb0) = zx.o(0)
            __builtin_memset(&x0_40[8], 0, 0x30)
            __builtin_memset(&x0_40[0x11], 0, 0x18)
            __builtin_memset(&x0_40[0x16], 0, 0x18)
            x22 = &x0_40[1]
            *x22 = construction_vtable_for_Botan::Private_Key-in-Botan::ECDSA_PrivateKey + 0xc0
            x0_40[7] =
                construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey + 0x190
            *x0_40 =
                construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey + 0x90
            result = Botan::EC_PrivateKey::EC_PrivateKey(x22, 
                _VTT_for_Botan::ECDSA_PrivateKey + 0x20, arg1.b)
            x8_4 = _vtable_for_Botan::ECDSA_PrivateKey
        label_df3cfc:
            x9_8 = x8_4 + 0x320
            x10_20 = x8_4 + 0x98
            x8_10 = x8_4 + 0x1e8
        label_df3d08:
            x23_1[7] = x9_8
            *x23_1 = x10_20
            x23_1[1] = x8_10
            goto label_df3d10
        
        uint64_t x10_4 = zx.q(var_48)
        x8 = var_40
        x9 = x10_4.d & 1
        x10_1 = x10_4 u>> 1
    label_df34e0:
        uint64_t x11_3
        
        if ((x9 & 0xff) == 0)
            x11_3 = x10_1
        else
            x11_3 = x8
        
        if (x11_3 != 4)
            goto label_df3520
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_48, 0, -ffffffffffffffff, "ECDH") == 0)
            int64_t* x0_42 = operator new(0xe8)
            *(x0_42 + 0x78) = zx.o(0)
            *(x0_42 + 0xa8) = zx.o(0)
            __builtin_memset(&x0_42[0x19], 0, 0x20)
            x0_42[0x10] = -1
            x0_42[0x15] = -1
            x0_42[0x19] = 0
            x0_42[0x1a] = -1
            *(x0_42 + 0x88) = zx.o(0)
            x0_42[0x11].d = 1
            x0_42[0x16].d = 1
            x0_42[0x1b].d = 1
            *(x0_42 + 0x98) = zx.o(0)
            *(x0_42 + 0xb8) = zx.o(0)
            __builtin_memset(&x0_42[9], 0, 0x30)
            __builtin_memset(&x0_42[0x12], 0, 0x18)
            x0_42[0x17] = 0
            x0_42[0x18] = 0
            x0_42[1] = construction_vtable_for_Botan::Private_Key-in-Botan::ECDH_PrivateKey + 0xc0
            x0_42[8] =
                construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey + 0x190
            *x0_42 = construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey + 0x90
            result = Botan::EC_PrivateKey::EC_PrivateKey(&x0_42[1], 
                _VTT_for_Botan::ECDH_PrivateKey + 0x20, arg1.b)
            *x0_42 = _vtable_for_Botan::ECDH_PrivateKey + 0x98
            x0_42[1] = _vtable_for_Botan::ECDH_PrivateKey + 0x1f0
            x0_42[7] = _vtable_for_Botan::ECDH_PrivateKey + 0x368
            x0_42[8] = _vtable_for_Botan::ECDH_PrivateKey + 0x4a8
            uint32_t x8_7 = zx.d(var_48)
            *entry_x8 = &x0_42[1]
            
            if ((x8_7 & 1) != 0)
                return operator delete(var_38)
        else
            uint64_t x10_5 = zx.q(var_48)
            x8 = var_40
            x9 = x10_5.d & 1
            x10_1 = x10_5 u>> 1
        label_df3520:
            uint64_t x11_4
            
            if ((x9 & 0xff) == 0)
                x11_4 = x10_1
            else
                x11_4 = x8
            
            if (x11_4 != 2)
                goto label_df3560
            
            Botan::AlgorithmIdentifier* x22_5
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_48, 0, -ffffffffffffffff, &data_72d952) == 0)
                Botan::AlgorithmIdentifier* x0_44 = operator new(0x80)
                x22_5 = x0_44
                result = Botan::DH_PrivateKey::DH_PrivateKey(x0_44, arg1)
            label_df3d54:
                uint32_t x8_14 = zx.d(var_48)
                *entry_x8 = x22_5 + 8
                
                if ((x8_14 & 1) != 0)
                    return operator delete(var_38)
            else
                uint64_t x10_6 = zx.q(var_48)
                x8 = var_40
                x9 = x10_6.d & 1
                x10_1 = x10_6 u>> 1
            label_df3560:
                uint64_t x11_5
                
                if ((x9 & 0xff) == 0)
                    x11_5 = x10_1
                else
                    x11_5 = x8
                
                if (x11_5 != 3)
                    goto label_df35a0
                
                Botan::AlgorithmIdentifier* x22_6
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_48, 0, -ffffffffffffffff, &data_72065f) != 0)
                    uint64_t x10_7 = zx.q(var_48)
                    x8 = var_40
                    x9 = x10_7.d & 1
                    x10_1 = x10_7 u>> 1
                label_df35a0:
                    uint64_t x11_6
                    
                    if ((x9 & 0xff) == 0)
                        x11_6 = x10_1
                    else
                        x11_6 = x8
                    
                    if (x11_6 == 8)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_48, 0, -ffffffffffffffff, "McEliece") == 0)
                            void* x0_48 = operator new(0xa8)
                            x22 = x0_48
                            result = Botan::McEliece_PrivateKey::McEliece_PrivateKey(x0_48)
                            goto label_df3d10
                        
                        uint64_t x10_8 = zx.q(var_48)
                        x8 = var_40
                        x9 = x10_8.d & 1
                        x10_1 = x10_8 u>> 1
                    
                    uint64_t x11_7
                    
                    if ((x9 & 0xff) == 0)
                        x11_7 = x10_1
                    else
                        x11_7 = x8
                    
                    if (x11_7 == 6)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_48, 0, -ffffffffffffffff, "ECGDSA") == 0)
                            int64_t* x0_49 = operator new(0xe0)
                            __builtin_memset(&x0_49[0xe], 0, 0x20)
                            *(x0_49 + 0xa0) = zx.o(0)
                            __builtin_memset(&x0_49[0x18], 0, 0x20)
                            x0_49[0xf] = -1
                            x0_49[0x14] = -1
                            x0_49[0x19] = -1
                            x0_49[0x10].d = 1
                            x0_49[0x15].d = 1
                            x0_49[0x1a].d = 1
                            x23_1 = x0_49
                            *(x0_49 + 0x90) = zx.o(0)
                            *(x0_49 + 0xb0) = zx.o(0)
                            __builtin_memset(&x0_49[8], 0, 0x30)
                            __builtin_memset(&x0_49[0x11], 0, 0x18)
                            __builtin_memset(&x0_49[0x16], 0, 0x18)
                            x22 = &x0_49[1]
                            *x22 = construction_vtable_for_Botan::Private_Key-in-Botan::ECGDSA_PrivateKey
                                + 0xc0
                            x0_49[7] = construction_vtable_for_Botan::ECGDSA_PublicKey-in-Botan::ECGDSA_PrivateKey
                                + 0x190
                            *x0_49 = construction_vtable_for_Botan::ECGDSA_PublicKey-in-Botan::ECGDSA_PrivateKey
                                + 0x90
                            result = Botan::EC_PrivateKey::EC_PrivateKey(x22, 
                                _VTT_for_Botan::ECGDSA_PrivateKey + 0x20, arg1.b)
                            x8_4 = _vtable_for_Botan::ECGDSA_PrivateKey
                            goto label_df3cfc
                        
                        uint64_t x10_9 = zx.q(var_48)
                        x8 = var_40
                        x9 = x10_9.d & 1
                        x10_1 = x10_9 u>> 1
                    
                    uint64_t x11_8
                    
                    if ((x9 & 0xff) == 0)
                        x11_8 = x10_1
                    else
                        x11_8 = x8
                    
                    if (x11_8 == 7)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_48, 0, -ffffffffffffffff, "ECKCDSA") == 0)
                            int64_t* x0_51 = operator new(0xe0)
                            __builtin_memset(&x0_51[0xe], 0, 0x20)
                            *(x0_51 + 0xa0) = zx.o(0)
                            __builtin_memset(&x0_51[0x18], 0, 0x20)
                            x0_51[0xf] = -1
                            x0_51[0x14] = -1
                            x0_51[0x19] = -1
                            x0_51[0x10].d = 1
                            x0_51[0x15].d = 1
                            x0_51[0x1a].d = 1
                            x23_1 = x0_51
                            *(x0_51 + 0x90) = zx.o(0)
                            *(x0_51 + 0xb0) = zx.o(0)
                            __builtin_memset(&x0_51[8], 0, 0x30)
                            __builtin_memset(&x0_51[0x11], 0, 0x18)
                            __builtin_memset(&x0_51[0x16], 0, 0x18)
                            x22 = &x0_51[1]
                            *x22 = construction_vtable_for_Botan::Private_Key-in-Botan::ECKCDSA_PrivateKey
                                + 0xc0
                            x0_51[7] = construction_vtable_for_Botan::ECKCDSA_PublicKey-in-Botan::ECKCDSA_PrivateKey
                                + 0x190
                            *x0_51 = construction_vtable_for_Botan::ECKCDSA_PublicKey-in-Botan::ECKCDSA_PrivateKey
                                + 0x90
                            result = Botan::EC_PrivateKey::EC_PrivateKey(x22, 
                                _VTT_for_Botan::ECKCDSA_PrivateKey + 0x20, arg1.b)
                            x8_4 = _vtable_for_Botan::ECKCDSA_PrivateKey
                            goto label_df3cfc
                        
                        uint64_t x10_10 = zx.q(var_48)
                        x8 = var_40
                        x9 = x10_10.d & 1
                        x10_1 = x10_10 u>> 1
                    
                    uint64_t x11_9
                    
                    if ((x9 & 0xff) == 0)
                        x11_9 = x10_1
                    else
                        x11_9 = x8
                    
                    if (x11_9 == 7)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_48, 0, -ffffffffffffffff, "Ed25519") == 0)
                            Botan::AlgorithmIdentifier* x0_55
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x1_12
                            x0_55, x1_12 = operator new(0x40)
                            x21_1 = x0_55
                            result = Botan::Ed25519_PrivateKey::Ed25519_PrivateKey(x0_55, x1_12)
                            goto label_df38d4
                        
                        uint64_t x10_11 = zx.q(var_48)
                        x8 = var_40
                        x9 = x10_11.d & 1
                        x10_1 = x10_11 u>> 1
                    
                    uint64_t x11_10
                    
                    if ((x9 & 0xff) == 0)
                        x11_10 = x10_1
                    else
                        x11_10 = x8
                    
                    if (x11_10 != 0xa)
                        goto label_df36e0
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_48, 0, -ffffffffffffffff, "GOST-34.10") != 0)
                        uint64_t x10_12 = zx.q(var_48)
                        x8 = var_40
                        x9 = x10_12.d & 1
                        x10_1 = x10_12 u>> 1
                    label_df36e0:
                        uint64_t x11_11
                        
                        if ((x9 & 0xff) == 0)
                            x11_11 = x10_1
                        else
                            x11_11 = x8
                        
                        if (x11_11 != 0x13)
                            goto label_df3720
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_48, 0, -ffffffffffffffff, "GOST-34.10-2012-256") != 0)
                            uint64_t x10_13 = zx.q(var_48)
                            x8 = var_40
                            x9 = x10_13.d & 1
                            x10_1 = x10_13 u>> 1
                        label_df3720:
                            uint64_t x11_12
                            
                            if ((x9 & 0xff) == 0)
                                x11_12 = x10_1
                            else
                                x11_12 = x8
                            
                            if (x11_12 != 0x13)
                                goto label_df3760
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_48, 0, -ffffffffffffffff, "GOST-34.10-2012-512") != 0)
                                uint64_t x10_14 = zx.q(var_48)
                                x8 = var_40
                                x9 = x10_14.d & 1
                                x10_1 = x10_14 u>> 1
                            label_df3760:
                                uint64_t x11_13
                                
                                if ((x9 & 0xff) == 0)
                                    x11_13 = x10_1
                                else
                                    x11_13 = x8
                                
                                if (x11_13 != 3)
                                    goto label_df37a0
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_48, 0, -ffffffffffffffff, &data_745dc1) != 0)
                                    uint64_t x10_15 = zx.q(var_48)
                                    x8 = var_40
                                    x9 = x10_15.d & 1
                                    x10_1 = x10_15 u>> 1
                                label_df37a0:
                                    uint64_t x11_14
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_14 = x10_1
                                    else
                                        x11_14 = x8
                                    
                                    if (x11_14 != 7)
                                        goto label_df37e0
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_48, 0, -ffffffffffffffff, "SM2_Sig") != 0)
                                        uint64_t x10_16 = zx.q(var_48)
                                        x8 = var_40
                                        x9 = x10_16.d & 1
                                        x10_1 = x10_16 u>> 1
                                    label_df37e0:
                                        uint64_t x11_15
                                        
                                        if ((x9 & 0xff) == 0)
                                            x11_15 = x10_1
                                        else
                                            x11_15 = x8
                                        
                                        if (x11_15 != 7)
                                            goto label_df3820
                                        
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_48, 0, -ffffffffffffffff, "SM2_Enc") != 0)
                                            uint64_t x10_17 = zx.q(var_48)
                                            x8 = var_40
                                            x9 = x10_17.d & 1
                                            x10_1 = x10_17 u>> 1
                                        label_df3820:
                                            uint64_t x11_16
                                            
                                            if ((x9 & 0xff) == 0)
                                                x11_16 = x10_1
                                            else
                                                x11_16 = x8
                                            
                                            if (x11_16 == 7)
                                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                        &var_48, 0, -ffffffffffffffff, "ElGamal") == 0)
                                                    Botan::AlgorithmIdentifier* x0_56 =
                                                        operator new(0x78)
                                                    x22_6 = x0_56
                                                    result = Botan::ElGamal_PrivateKey::ElGamal_PrivateKey(
                                                        x0_56, arg1)
                                                    goto label_df3ab0
                                                
                                                uint64_t x10_18 = zx.q(var_48)
                                                x8 = var_40
                                                x9 = x10_18.d & 1
                                                x10_1 = x10_18 u>> 1
                                            
                                            uint64_t x8_1
                                            
                                            if ((x9 & 0xff) == 0)
                                                x8_1 = x10_1
                                            else
                                                x8_1 = x8
                                            
                                            int32_t x0_36
                                            
                                            if (x8_1 == 4)
                                                x0_36 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                    &var_48, 0, -ffffffffffffffff, "XMSS")
                                            
                                            if (x8_1 == 4 && x0_36 == 0)
                                                void* x0_37 = operator new(0x2a0)
                                                x22 = x0_37
                                                result =
                                                    Botan::XMSS_PrivateKey::XMSS_PrivateKey(x0_37)
                                                goto label_df3d10
                                            
                                            void** x0_57 = __cxa_allocate_exception(0x20)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "Unknown or unavailable public key algorithm ", 
                                                &var_48)
                                            *x0_57 = _vtable_for_Botan::Exception + 0x10
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &x0_57[1])
                                            *x0_57 = _vtable_for_Botan::Decoding_Error + 0x10
                                            __cxa_throw(x0_57, _typeinfo_for_Botan::Decoding_Error, 
                                                Botan::Exception::~Exception)
                                            noreturn
                                
                                Botan::AlgorithmIdentifier* x0_54 = operator new(0x108)
                                x22_5 = x0_54
                                result = Botan::SM2_PrivateKey::SM2_PrivateKey(x0_54, arg1)
                                goto label_df3d54
                    
                    int64_t* x0_46 = operator new(0xe0)
                    __builtin_memset(&x0_46[0xe], 0, 0x20)
                    *(x0_46 + 0xa0) = zx.o(0)
                    __builtin_memset(&x0_46[0x18], 0, 0x20)
                    x0_46[0xf] = -1
                    x0_46[0x14] = -1
                    x0_46[0x19] = -1
                    x0_46[0x10].d = 1
                    x0_46[0x15].d = 1
                    x0_46[0x1a].d = 1
                    x23_1 = x0_46
                    *(x0_46 + 0x90) = zx.o(0)
                    *(x0_46 + 0xb0) = zx.o(0)
                    __builtin_memset(&x0_46[8], 0, 0x30)
                    __builtin_memset(&x0_46[0x11], 0, 0x18)
                    __builtin_memset(&x0_46[0x16], 0, 0x18)
                    x22 = &x0_46[1]
                    *x22 = construction_vtable_for_Botan::Private_Key-in-Botan::GOST_3410_PrivateKey
                        + 0xc0
                    x0_46[7] = construction_vtable_for_Botan::GOST_3410_PublicKey-in-Botan::GOST_3410_PrivateKey
                        + 0x190
                    *x0_46 = construction_vtable_for_Botan::GOST_3410_PublicKey-in-Botan::GOST_3410_PrivateKey
                        + 0x90
                    result = Botan::EC_PrivateKey::EC_PrivateKey(x22, 
                        _VTT_for_Botan::GOST_3410_PrivateKey + 0x20, arg1.b)
                    x9_8 = _vtable_for_Botan::GOST_3410_PrivateKey + 0x328
                    x10_20 = _vtable_for_Botan::GOST_3410_PrivateKey + 0x98
                    x8_10 = _vtable_for_Botan::GOST_3410_PrivateKey + 0x1f0
                    goto label_df3d08
                
                Botan::AlgorithmIdentifier* x0_45 = operator new(0x78)
                x22_6 = x0_45
                result = Botan::DSA_PrivateKey::DSA_PrivateKey(x0_45, arg1)
            label_df3ab0:
                uint32_t x8_8 = zx.d(var_48)
                *entry_x8 = x22_6 + 0x48
                
                if ((x8_8 & 1) != 0)
                    return operator delete(var_38)
return result
