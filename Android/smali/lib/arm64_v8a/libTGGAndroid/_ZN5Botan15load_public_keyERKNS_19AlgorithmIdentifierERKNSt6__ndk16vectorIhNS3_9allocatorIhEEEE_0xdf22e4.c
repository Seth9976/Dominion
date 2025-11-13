// 函数: _ZN5Botan15load_public_keyERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS3_9allocatorIhEEEE
// 地址: 0xdf22e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
Botan::OID::to_formatted_string()
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_68 = 0x2f
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_50 = &var_70
char var_88
Botan::split_on_pred(&var_88, &var_70)

if (&var_70 == var_50)
    (*var_50)->vFunc_4()
else if (var_50 != 0)
    (*var_50)->j_operator delete()

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_70)
uint64_t x10 = zx.q(var_70.b)
uint64_t x8_4 = var_68.q
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8_4

if (x11 != 3)
    goto label_df23c8

uint64_t result
void* x22_3

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_70, 0, -ffffffffffffffff, &data_76da56) == 0)
    int64_t* x0_41
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x1_3
    x0_41, x1_3 = operator new(0x18)
    result = Botan::RSA_PublicKey::RSA_PublicKey(x0_41, x1_3)
    x22_3 = x0_41 + *(*x0_41 - 0x88)
else
    uint64_t x10_2 = zx.q(var_70.b)
    x8_4 = var_68.q
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_df23c8:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_4
    
    if (x11_1 != 0xa)
        goto label_df2408
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_70, 0, -ffffffffffffffff, "Curve25519") == 0)
        int64_t* x0_42 = operator new(0x20)
        x0_42[2] = 0
        x0_42[3] = 0
        *x0_42 = _vtable_for_Botan::Curve25519_PublicKey + 0x88
        x0_42[1] = 0
        int64_t x8_7
        int64_t x9_1
        
        if (&x0_42[1] == arg2)
            x8_7 = 0
            x9_1 = 0
        else
            *(arg2 + 8)
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
                &x0_42[1], *arg2)
            x8_7 = x0_42[1]
            x9_1 = x0_42[2]
        
        result = x9_1 - x8_7
        sub_d0a5c4(result)
        x22_3 = x0_42 + *(*x0_42 - 0x88)
    else
        uint64_t x10_3 = zx.q(var_70.b)
        x8_4 = var_68.q
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_df2408:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8_4
        
        if (x11_2 != 8)
            goto label_df2448
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_70, 0, -ffffffffffffffff, "McEliece") == 0)
            int64_t* x0_44 = operator new(0x30)
            result = Botan::McEliece_PublicKey::McEliece_PublicKey(x0_44)
            x22_3 = x0_44 + *(*x0_44 - 0x88)
        else
            uint64_t x10_4 = zx.q(var_70.b)
            x8_4 = var_68.q
            x9 = x10_4.d & 1
            x10_1 = x10_4 u>> 1
        label_df2448:
            uint64_t x11_3
            
            if ((x9 & 0xff) == 0)
                x11_3 = x10_1
            else
                x11_3 = x8_4
            
            if (x11_3 != 5)
                goto label_df2488
            
            struct vtable_for_Botan::SM2_PublicKey* const x8_9
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_70, 0, -ffffffffffffffff, "ECDSA") == 0)
                void* x0_45 = operator new(0xb0)
                x22_3 = x0_45
                *x0_45 = _vtable_for_Botan::Public_Key + 0x10
                result = Botan::EC_PublicKey::EC_PublicKey(x0_45 + 8, 
                    _VTT_for_Botan::ECDSA_PublicKey + 0x18)
                x8_9 = _vtable_for_Botan::ECDSA_PublicKey
            label_df2ae4:
                *x22_3 = x8_9 + 0x90
                *(x22_3 + 8) = x8_9 + 0x190
            else
                uint64_t x10_5 = zx.q(var_70.b)
                x8_4 = var_68.q
                x9 = x10_5.d & 1
                x10_1 = x10_5 u>> 1
            label_df2488:
                uint64_t x11_4
                
                if ((x9 & 0xff) == 0)
                    x11_4 = x10_1
                else
                    x11_4 = x8_4
                
                if (x11_4 == 4)
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_70, 0, -ffffffffffffffff, "ECDH") == 0)
                        void* x0_47 = operator new(0xb0)
                        x22_3 = x0_47
                        *x0_47 = _vtable_for_Botan::Public_Key + 0x10
                        result = Botan::EC_PublicKey::EC_PublicKey(x0_47 + 8, 
                            _VTT_for_Botan::ECDH_PublicKey + 0x18)
                        x8_9 = _vtable_for_Botan::ECDH_PublicKey
                        goto label_df2ae4
                    
                    uint64_t x10_6 = zx.q(var_70.b)
                    x8_4 = var_68.q
                    x9 = x10_6.d & 1
                    x10_1 = x10_6 u>> 1
                
                uint64_t x11_5
                
                if ((x9 & 0xff) == 0)
                    x11_5 = x10_1
                else
                    x11_5 = x8_4
                
                if (x11_5 != 2)
                    goto label_df2508
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_70, 0, -ffffffffffffffff, &data_72d952) == 0)
                    void* x0_49 = operator new(0x48)
                    x22_3 = x0_49
                    *x0_49 = _vtable_for_Botan::Public_Key + 0x10
                    result = Botan::DL_Scheme_PublicKey::DL_Scheme_PublicKey(x0_49 + 8, 
                        _VTT_for_Botan::DH_PublicKey + 0x18, arg1)
                    *x22_3 = _vtable_for_Botan::DH_PublicKey + 0x90
                    *(x22_3 + 8) = _vtable_for_Botan::DH_PublicKey + 0x1a0
                else
                    uint64_t x10_7 = zx.q(var_70.b)
                    x8_4 = var_68.q
                    x9 = x10_7.d & 1
                    x10_1 = x10_7 u>> 1
                label_df2508:
                    uint64_t x11_6
                    
                    if ((x9 & 0xff) == 0)
                        x11_6 = x10_1
                    else
                        x11_6 = x8_4
                    
                    if (x11_6 != 3)
                        goto label_df2548
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_70, 0, -ffffffffffffffff, &data_72065f) == 0)
                        void* x0_51 = operator new(0x48)
                        x22_3 = x0_51
                        *x0_51 = _vtable_for_Botan::Public_Key + 0x10
                        result = Botan::DL_Scheme_PublicKey::DL_Scheme_PublicKey(x0_51 + 8, 
                            _VTT_for_Botan::DSA_PublicKey + 0x18, arg1)
                        *x22_3 = _vtable_for_Botan::DSA_PublicKey + 0x90
                        *(x22_3 + 8) = _vtable_for_Botan::DSA_PublicKey + 0x1a0
                    else
                        uint64_t x10_8 = zx.q(var_70.b)
                        x8_4 = var_68.q
                        x9 = x10_8.d & 1
                        x10_1 = x10_8 u>> 1
                    label_df2548:
                        uint64_t x11_7
                        
                        if ((x9 & 0xff) == 0)
                            x11_7 = x10_1
                        else
                            x11_7 = x8_4
                        
                        if (x11_7 != 7)
                            goto label_df2588
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_70, 0, -ffffffffffffffff, "ElGamal") == 0)
                            void* x0_54 = operator new(0x48)
                            x22_3 = x0_54
                            *x0_54 = _vtable_for_Botan::Public_Key + 0x10
                            result = Botan::DL_Scheme_PublicKey::DL_Scheme_PublicKey(x0_54 + 8, 
                                _VTT_for_Botan::ElGamal_PublicKey + 0x18, arg1)
                            *x22_3 = _vtable_for_Botan::ElGamal_PublicKey + 0x90
                            *(x22_3 + 8) = _vtable_for_Botan::ElGamal_PublicKey + 0x1a0
                        else
                            uint64_t x10_9 = zx.q(var_70.b)
                            x8_4 = var_68.q
                            x9 = x10_9.d & 1
                            x10_1 = x10_9 u>> 1
                        label_df2588:
                            uint64_t x11_8
                            
                            if ((x9 & 0xff) == 0)
                                x11_8 = x10_1
                            else
                                x11_8 = x8_4
                            
                            if (x11_8 == 6)
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_70, 0, -ffffffffffffffff, "ECGDSA") == 0)
                                    void* x0_56 = operator new(0xb0)
                                    x22_3 = x0_56
                                    *x0_56 = _vtable_for_Botan::Public_Key + 0x10
                                    result = Botan::EC_PublicKey::EC_PublicKey(x0_56 + 8, 
                                        _VTT_for_Botan::ECGDSA_PublicKey + 0x18)
                                    x8_9 = _vtable_for_Botan::ECGDSA_PublicKey
                                    goto label_df2ae4
                                
                                uint64_t x10_10 = zx.q(var_70.b)
                                x8_4 = var_68.q
                                x9 = x10_10.d & 1
                                x10_1 = x10_10 u>> 1
                            
                            uint64_t x11_9
                            
                            if ((x9 & 0xff) == 0)
                                x11_9 = x10_1
                            else
                                x11_9 = x8_4
                            
                            if (x11_9 == 7)
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_70, 0, -ffffffffffffffff, "ECKCDSA") == 0)
                                    void* x0_58 = operator new(0xb0)
                                    x22_3 = x0_58
                                    *x0_58 = _vtable_for_Botan::Public_Key + 0x10
                                    result = Botan::EC_PublicKey::EC_PublicKey(x0_58 + 8, 
                                        _VTT_for_Botan::ECKCDSA_PublicKey + 0x18)
                                    x8_9 = _vtable_for_Botan::ECKCDSA_PublicKey
                                    goto label_df2ae4
                                
                                uint64_t x10_11 = zx.q(var_70.b)
                                x8_4 = var_68.q
                                x9 = x10_11.d & 1
                                x10_1 = x10_11 u>> 1
                            
                            uint64_t x11_10
                            
                            if ((x9 & 0xff) == 0)
                                x11_10 = x10_1
                            else
                                x11_10 = x8_4
                            
                            if (x11_10 != 7)
                                goto label_df2648
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_70, 0, -ffffffffffffffff, "Ed25519") == 0)
                                int64_t* x0_66
                                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* 
                                    x1_16
                                x0_66, x1_16 = operator new(0x20)
                                result = Botan::Ed25519_PublicKey::Ed25519_PublicKey(x0_66, x1_16)
                                x22_3 = x0_66 + *(*x0_66 - 0x88)
                            else
                                uint64_t x10_12 = zx.q(var_70.b)
                                x8_4 = var_68.q
                                x9 = x10_12.d & 1
                                x10_1 = x10_12 u>> 1
                            label_df2648:
                                uint64_t x11_11
                                
                                if ((x9 & 0xff) == 0)
                                    x11_11 = x10_1
                                else
                                    x11_11 = x8_4
                                
                                if (x11_11 != 0xa)
                                    goto label_df2688
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_70, 0, -ffffffffffffffff, "GOST-34.10") == 0)
                                label_df29bc:
                                    Botan::AlgorithmIdentifier* x0_53 = operator new(0xb0)
                                    result =
                                        Botan::GOST_3410_PublicKey::GOST_3410_PublicKey(x0_53, arg1)
                                    x22_3 = x0_53 + *(*x0_53 - 0x90)
                                else
                                    uint64_t x10_13 = zx.q(var_70.b)
                                    x8_4 = var_68.q
                                    x9 = x10_13.d & 1
                                    x10_1 = x10_13 u>> 1
                                label_df2688:
                                    uint64_t x11_12
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_12 = x10_1
                                    else
                                        x11_12 = x8_4
                                    
                                    if (x11_12 == 0x13)
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_70, 0, -ffffffffffffffff, 
                                                "GOST-34.10-2012-256") == 0)
                                            goto label_df29bc
                                        
                                        uint64_t x10_14 = zx.q(var_70.b)
                                        x8_4 = var_68.q
                                        x9 = x10_14.d & 1
                                        x10_1 = x10_14 u>> 1
                                    
                                    uint64_t x11_13
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_13 = x10_1
                                    else
                                        x11_13 = x8_4
                                    
                                    if (x11_13 == 0x13)
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_70, 0, -ffffffffffffffff, 
                                                "GOST-34.10-2012-512") == 0)
                                            goto label_df29bc
                                        
                                        uint64_t x10_15 = zx.q(var_70.b)
                                        x8_4 = var_68.q
                                        x9 = x10_15.d & 1
                                        x10_1 = x10_15 u>> 1
                                    
                                    uint64_t x11_14
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_14 = x10_1
                                    else
                                        x11_14 = x8_4
                                    
                                    if (x11_14 != 3)
                                        goto label_df2748
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_70, 0, -ffffffffffffffff, &data_745dc1) == 0)
                                    label_df2aac:
                                        void* x0_60 = operator new(0xb0)
                                        x22_3 = x0_60
                                        *x0_60 = _vtable_for_Botan::Public_Key + 0x10
                                        result = Botan::EC_PublicKey::EC_PublicKey(x0_60 + 8, 
                                            _VTT_for_Botan::SM2_PublicKey + 0x18)
                                        x8_9 = _vtable_for_Botan::SM2_PublicKey
                                        goto label_df2ae4
                                    
                                    uint64_t x10_16 = zx.q(var_70.b)
                                    x8_4 = var_68.q
                                    x9 = x10_16.d & 1
                                    x10_1 = x10_16 u>> 1
                                label_df2748:
                                    uint64_t x11_15
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_15 = x10_1
                                    else
                                        x11_15 = x8_4
                                    
                                    if (x11_15 != 7)
                                        goto label_df2788
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_70, 0, -ffffffffffffffff, "SM2_Sig") == 0)
                                        goto label_df2aac
                                    
                                    uint64_t x10_17 = zx.q(var_70.b)
                                    x8_4 = var_68.q
                                    x9 = x10_17.d & 1
                                    x10_1 = x10_17 u>> 1
                                label_df2788:
                                    uint64_t x11_16
                                    
                                    if ((x9 & 0xff) == 0)
                                        x11_16 = x10_1
                                    else
                                        x11_16 = x8_4
                                    
                                    if (x11_16 != 7)
                                        goto label_df27c8
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_70, 0, -ffffffffffffffff, "SM2_Enc") == 0)
                                        goto label_df2aac
                                    
                                    uint64_t x10_18 = zx.q(var_70.b)
                                    x8_4 = var_68.q
                                    x9 = x10_18.d & 1
                                    x10_1 = x10_18 u>> 1
                                label_df27c8:
                                    uint64_t x8_5
                                    
                                    if ((x9 & 0xff) == 0)
                                        x8_5 = x10_1
                                    else
                                        x8_5 = x8_4
                                    
                                    int32_t x0_39
                                    
                                    if (x8_5 == 4)
                                        x0_39 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_70, 0, -ffffffffffffffff, "XMSS")
                                    
                                    if (x8_5 != 4 || x0_39 != 0)
                                        void** x0_67 = __cxa_allocate_exception(0x20)
                                        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                            "Unknown or unavailable public key algorithm ", &var_70)
                                        *x0_67 = _vtable_for_Botan::Exception + 0x10
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            &x0_67[1])
                                        *x0_67 = _vtable_for_Botan::Decoding_Error + 0x10
                                        __cxa_throw(x0_67, _typeinfo_for_Botan::Decoding_Error, 
                                            Botan::Exception::~Exception)
                                        noreturn
                                    
                                    int64_t* x0_40 = operator new(0x120)
                                    result = Botan::XMSS_PublicKey::XMSS_PublicKey(x0_40)
                                    x22_3 = x0_40 + *(*x0_40 - 0x88)

uint32_t x8_22 = zx.d(var_70.b)
void** entry_x8
*entry_x8 = x22_3
void* var_60

if ((x8_22 & 1) != 0)
    result = operator delete(var_60)
void* var_a0

if (var_a0 != 0)
    char* var_98
    char* x8_23 = var_98
    void* x0_64
    
    if (x8_23 == var_a0)
        x0_64 = var_a0
    else
        char* x20_1 = x8_23
        
        do
            x20_1 = &x20_1[-0x18]
            
            if ((zx.d(*x20_1) & 1) != 0)
                operator delete(*(x8_23 - 8))
            
            x8_23 = x20_1
        while (var_a0 != x20_1)
        
        x0_64 = var_a0
    
    void* var_98_1 = var_a0
    result = operator delete(x0_64)

void* var_78

if ((zx.d(var_88) & 1) != 0)
    result = operator delete(var_78)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
