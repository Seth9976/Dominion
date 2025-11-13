// 函数: _ZNK5Botan11X509_Object16verify_signatureERKNS_10Public_KeyE
// 地址: 0xeb87a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
Botan::OID::to_formatted_string()
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_130 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_128 = 0x2f
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_110 = &var_130
char var_160
Botan::split_on_pred(&var_160, &var_130)

if (&var_130 == var_110)
    (*var_110)->vFunc_4()
else if (var_110 != 0)
    (*var_110)->j_operator delete()

void* var_150

if ((zx.d(var_160) & 1) != 0)
    operator delete(var_150)

int32_t x22 = 0x138d
char* var_148
char* var_140

if (var_140 != var_148 && ((var_140 - var_148) s>> 3) * -0x5555555555555555 u<= 2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        entry_x1
    (*(*entry_x1 + 0x10))(entry_x1)
    uint64_t x9_2 = zx.q(*var_148)
    uint64_t x21_1 = zx.q(var_130.b)
    uint64_t i_1 = x9_2 u>> 1
    uint64_t i_2
    
    if ((x9_2.d & 1) == 0)
        i_2 = i_1
    else
        i_2 = *(var_148 + 8)
    
    uint64_t x10_2
    
    if ((x21_1.d & 1) == 0)
        x10_2 = x21_1 u>> 1
    else
        x10_2 = var_128.q
    
    char* var_120
    int32_t x22_1
    
    if (i_2 != x10_2)
        x22_1 = 1
        
        if ((x21_1.d & 1) != 0)
            operator delete(var_120)
    else
        char* x1_1
        
        if ((x21_1.d & 1) == 0)
            x1_1 = &var_130 | 1
        else
            x1_1 = var_120
        
        if ((x9_2.d & 1) == 0)
            if (i_2 == 0)
                goto label_eb8af8
            
            void* x9_4 = &var_148[1]
            uint32_t x10_3
            uint32_t x11_3
            uint64_t i
            
            do
                x10_3 = zx.d(*x9_4)
                x11_3 = zx.d(*x1_1)
                
                if (x10_3 != x11_3)
                    break
                
                i = i_1
                i_1 -= 1
                x9_4 += 1
                x1_1 = &x1_1[1]
            while (i != 1)
            x22_1 = x10_3 != x11_3 ? 1 : 0
            
            if ((x21_1.d & 1) != 0)
                operator delete(var_120)
        else if (i_2 == 0)
        label_eb8af8:
            x22_1 = 0
            
            if ((x21_1.d & 1) != 0)
                operator delete(var_120)
        else
            x22_1 = memcmp() != 0 ? 1 : 0
            
            if ((x21_1.d & 1) != 0)
                operator delete(var_120)
    
    if ((x22_1 & 1) == 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_160)
        int64_t var_178
        __builtin_memset(&var_178, 0, 0x18)
        uint64_t var_158
        
        if (var_140 - var_148 != 0x30)
            uint64_t x10_4 = zx.q(var_160)
            uint64_t x8_11 = var_158
            int32_t x9_7 = x10_4.d & 1
            uint64_t x10_5 = x10_4 u>> 1
            uint64_t x11_4
            
            x11_4 = x9_7 == 0 ? x10_5 : x8_11
            
            if (x11_4 == 7)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_160, 0, -ffffffffffffffff, "Ed25519") == 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                        &var_178)
                    goto label_eb8a08
                
                uint64_t x10_6 = zx.q(var_160)
                x8_11 = var_158
                x9_7 = x10_6.d & 1
                x10_5 = x10_6 u>> 1
            
            uint64_t x8_12
            
            if ((x9_7 & 0xff) == 0)
                x8_12 = x10_5
            else
                x8_12 = x8_11
            
            if (x8_12 != 4)
                x22 = 0x138d
            else
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_160, 0, -ffffffffffffffff, "XMSS") == 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                        &var_178)
                    goto label_eb8a08
                
                x22 = 0x138d
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                &var_178)
        label_eb8a08:
            int32_t x0_15 = (*(*entry_x1 + 0x58))(entry_x1)
            uint64_t x8_15 = zx.q(var_178.b)
            uint64_t x8_16
            uint64_t var_170
            
            if ((x8_15.d & 1) == 0)
                x8_16 = x8_15 u>> 1
            else
                x8_16 = var_170
            int32_t x0_17
            
            if (x8_16 == 5)
                x0_17 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_178, 0, -ffffffffffffffff, "EMSA4")
            
            char var_190
            uint64_t var_188
            void* var_180
            
            if (x8_16 != 5 || x0_17 != 0)
                uint64_t x10_8 = zx.q(var_160)
                uint64_t x8_17 = var_158
                int32_t x9_9 = x10_8.d & 1
                uint64_t x10_9 = x10_8 u>> 1
                uint64_t x11_5
                
                x11_5 = x9_9 == 0 ? x10_9 : x8_17
                
                if (x11_5 != 7)
                    goto label_eb8a9c
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_160, 0, -ffffffffffffffff, "Ed25519") == 0)
                label_eb8b08:
                    
                    if (*(arg1 + 0x30) != *(arg1 + 0x38))
                        x22 = 0x138d
                    else
                    label_eb8f7c:
                        var_190.w = 0
                        Botan::PK_Verifier::PK_Verifier(&var_130, entry_x1, &var_178, zx.q(x0_15))
                        
                        if ((zx.d(var_190) & 1) != 0)
                            operator delete(var_180)
                        
                        uint8_t* x0_58 = *(arg1 + 0x48)
                        Botan::ASN1::put_in_sequence(x0_58, *(arg1 + 0x50) - x0_58)
                        struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                            * const x20_1 = var_130
                        int64_t x1_16 = var_190.q
                        uint64_t x21_3 = *(arg1 + 0x60)
                        *(arg1 + 0x68)
                        (*x20_1->vFunc_0)(x20_1, x1_16, var_188 - x1_16)
                        int32_t x0_61 = Botan::PK_Verifier::check_signature(&var_130, x21_3)
                        void* x0_62 = var_190.q
                        
                        if (x0_62 != 0)
                            void* var_188_1 = x0_62
                            operator delete(x0_62)
                        
                        if ((x0_61 & 1) != 0)
                            x22 = 0
                        else
                            x22 = 0x138a
                        
                        (*(x20_1->vFunc_0 + 0x18))(x20_1)
                else
                    uint64_t x10_10 = zx.q(var_160)
                    x8_17 = var_158
                    x9_9 = x10_10.d & 1
                    x10_9 = x10_10 u>> 1
                label_eb8a9c:
                    uint64_t x8_18
                    
                    if ((x9_9 & 0xff) == 0)
                        x8_18 = x10_9
                    else
                        x8_18 = x8_17
                    
                    int32_t x0_21
                    
                    if (x8_18 == 4)
                        x0_21 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_160, 0, -ffffffffffffffff, "XMSS")
                    
                    if (x8_18 == 4 && x0_21 == 0)
                        goto label_eb8b08
                    
                    char* x8_19 = *(arg1 + 0x30)
                    int64_t x9_10 = *(arg1 + 0x38)
                    
                    if (x8_19 == x9_10
                            || (x9_10 - x8_19 == 2 && zx.d(*x8_19) == 5 && zx.d(x8_19[1]) == 0))
                        goto label_eb8f7c
                    
                    x22 = 0x138d
            else if (*(arg1 + 0x30) == *(arg1 + 0x38))
                x22 = 0x138d
            else
                sub_eb81cc(&var_130)
                Botan::OID::to_formatted_string()
                uint64_t x10_11 = zx.q(var_190)
                uint64_t x8_23 = var_188
                int32_t x9_15 = x10_11.d & 1
                uint64_t x10_12 = x10_11 u>> 1
                uint64_t x11_6
                
                x11_6 = x9_15 == 0 ? x10_12 : x8_23
                
                if (x11_6 != 7)
                    goto label_eb8b90
                
                void* var_a0
                int32_t x24_1
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_190, 0, -ffffffffffffffff, "SHA-160") == 0)
                label_eb8c9c:
                    Botan::OID::to_formatted_string()
                    char var_1a8
                    uint64_t x8_25 = zx.q(var_1a8)
                    uint64_t x8_26
                    uint64_t var_1a0
                    
                    if ((x8_25.d & 1) == 0)
                        x8_26 = x8_25 u>> 1
                    else
                        x8_26 = var_1a0
                    uint64_t var_198
                    
                    if (x8_26 != 4)
                    labelid_95:
                        x24_1 = 1
                    else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_1a8, 0, -ffffffffffffffff, "MGF1") != 0)
                    label_eb8eb0:
                        x24_1 = 1
                    else
                        void* x9_17 = var_a0
                        char* x10_18 = var_120
                        int64_t var_118
                        int64_t var_98
                        
                        if (var_98 - x9_17 != var_118 - x10_18)
                        label_eb8eb0_1:
                            x24_1 = 1
                        else
                            if (x9_17 != var_98)
                                do
                                    if (*x9_17 != *x10_18)
                                        goto label_eb8eb0_2
                                    
                                    x9_17 += 4
                                    x10_18 = &x10_18[4]
                                while (var_98 != x9_17)
                            
                            int64_t var_68
                            
                            if (var_68 != 1)
                            label_eb8eb0_2:
                                x24_1 = 1
                            else
                                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                    "(", &var_190)
                                char var_258[0x10]
                                int128_t* x0_36
                                int128_t v0_1
                                x0_36, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_258)
                                void* x8_29 = x0_36[1].q
                                int128_t var_240 = *x0_36
                                __builtin_memset(x0_36, 0, 0x18)
                                uint64_t x1_9
                                
                                if ((zx.d(var_1a8) & 1) == 0)
                                    x1_9 = &var_1a8 | 1
                                else
                                    x1_9 = var_198
                                
                                int128_t* x0_38
                                int128_t v0_2
                                x0_38, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_240, x1_9)
                                void* x8_31 = x0_38[1].q
                                int128_t var_220 = *x0_38
                                __builtin_memset(x0_38, 0, 0x18)
                                int128_t* x0_40
                                int128_t v0_3
                                x0_40, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_220)
                                void* x8_32 = x0_40[1].q
                                int128_t var_200 = *x0_40
                                __builtin_memset(x0_40, 0, 0x18)
                                uint64_t var_70
                                std::__ndk1::to_string(var_70)
                                char var_270
                                uint64_t var_260
                                uint64_t x1_11
                                
                                if ((zx.d(var_270) & 1) == 0)
                                    x1_11 = &var_270 | 1
                                else
                                    x1_11 = var_260
                                
                                int128_t* x0_43
                                int128_t v0_4
                                x0_43, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_200, x1_11)
                                void* x8_34 = x0_43[1].q
                                int128_t var_1e0 = *x0_43
                                __builtin_memset(x0_43, 0, 0x18)
                                int128_t* x0_45
                                int128_t v0_5
                                x0_45, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_1e0)
                                uint64_t x8_35 = x0_45[1].q
                                int128_t var_1c0 = *x0_45
                                __builtin_memset(x0_45, 0, 0x18)
                                uint64_t x1_13
                                
                                if ((zx.d(var_1c0.b) & 1) == 0)
                                    x1_13 = &var_1c0 | 1
                                else
                                    x1_13 = x8_35
                                
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_178, x1_13)
                                
                                if ((zx.d(var_1c0.b) & 1) == 0)
                                    if ((zx.d(var_1e0.b) & 1) != 0)
                                        goto label_eb90cc
                                    
                                    goto label_eb8e7c
                                
                                operator delete(x8_35)
                                
                                if ((zx.d(var_1e0.b) & 1) != 0)
                                label_eb90cc:
                                    operator delete(x8_34)
                                    
                                    if ((zx.d(var_270) & 1) == 0)
                                        goto label_eb8e84
                                    
                                    goto label_eb90dc
                                
                            label_eb8e7c:
                                
                                if ((zx.d(var_270) & 1) == 0)
                                label_eb8e84:
                                    
                                    if ((zx.d(var_200.b) & 1) != 0)
                                        goto label_eb90ec
                                    
                                    goto label_eb8e8c
                                
                            label_eb90dc:
                                operator delete(var_260)
                                
                                if ((zx.d(var_200.b) & 1) != 0)
                                label_eb90ec:
                                    operator delete(x8_32)
                                    
                                    if ((zx.d(var_220.b) & 1) == 0)
                                        goto label_eb8e94
                                    
                                    goto label_eb90fc
                                
                            label_eb8e8c:
                                
                                if ((zx.d(var_220.b) & 1) == 0)
                                label_eb8e94:
                                    
                                    if ((zx.d(var_240.b) & 1) != 0)
                                        goto label_eb910c
                                    
                                    goto label_eb8e9c
                                
                            label_eb90fc:
                                operator delete(x8_31)
                                void* var_248
                                
                                if ((zx.d(var_240.b) & 1) == 0)
                                label_eb8e9c:
                                    
                                    if ((zx.d(var_258[0]) & 1) != 0)
                                        operator delete(var_248)
                                else
                                label_eb910c:
                                    operator delete(x8_29)
                                    
                                    if ((zx.d(var_258[0]) & 1) != 0)
                                        operator delete(var_248)
                                x24_1 = 0
                    
                    if ((zx.d(var_1a8) & 1) != 0)
                        operator delete(var_198)
                    
                    x22 = 0x138d
                else
                    uint64_t x10_13 = zx.q(var_190)
                    x8_23 = var_188
                    x9_15 = x10_13.d & 1
                    x10_12 = x10_13 u>> 1
                label_eb8b90:
                    uint64_t x11_7
                    
                    if ((x9_15 & 0xff) == 0)
                        x11_7 = x10_12
                    else
                        x11_7 = x8_23
                    
                    if (x11_7 == 7)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_190, 0, -ffffffffffffffff, "SHA-224") == 0)
                            goto label_eb8c9c
                        
                        uint64_t x10_14 = zx.q(var_190)
                        x8_23 = var_188
                        x9_15 = x10_14.d & 1
                        x10_12 = x10_14 u>> 1
                    
                    uint64_t x11_8
                    
                    if ((x9_15 & 0xff) == 0)
                        x11_8 = x10_12
                    else
                        x11_8 = x8_23
                    
                    if (x11_8 == 7)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_190, 0, -ffffffffffffffff, "SHA-256") == 0)
                            goto label_eb8c9c
                        
                        uint64_t x10_15 = zx.q(var_190)
                        x8_23 = var_188
                        x9_15 = x10_15.d & 1
                        x10_12 = x10_15 u>> 1
                    
                    uint64_t x11_9
                    
                    if ((x9_15 & 0xff) == 0)
                        x11_9 = x10_12
                    else
                        x11_9 = x8_23
                    
                    if (x11_9 != 7)
                        goto label_eb8c50
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_190, 0, -ffffffffffffffff, "SHA-384") == 0)
                        goto label_eb8c9c
                    
                    uint64_t x10_16 = zx.q(var_190)
                    x8_23 = var_188
                    x9_15 = x10_16.d & 1
                    x10_12 = x10_16 u>> 1
                label_eb8c50:
                    uint64_t x8_24
                    
                    if ((x9_15 & 0xff) == 0)
                        x8_24 = x10_12
                    else
                        x8_24 = x8_23
                    
                    int32_t x0_32
                    
                    if (x8_24 == 7)
                        x0_32 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_190, 0, -ffffffffffffffff, "SHA-512")
                    
                    if (x8_24 == 7 && x0_32 == 0)
                        goto label_eb8c9c
                    
                    x22 = 0x3e9
                    x24_1 = 1
                
                if ((zx.d(var_190) & 1) != 0)
                    operator delete(var_180)
                
                void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_b0_1 =
                    _vtable_for_Botan::AlgorithmIdentifier + 0x10
                void* var_88
                
                if (var_88 != 0)
                    void* var_80_1 = var_88
                    operator delete(var_88)
                
                void* __offset(vtable_for_Botan::OID, 0x10) var_a8_1 = _vtable_for_Botan::OID + 0x10
                
                if (var_a0 != 0)
                    void* var_98_1 = var_a0
                    operator delete(var_a0)
                
                void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_f0_1 =
                    _vtable_for_Botan::AlgorithmIdentifier + 0x10
                void* var_c8
                
                if (var_c8 != 0)
                    void* var_c0_1 = var_c8
                    operator delete(var_c8)
                
                void* __offset(vtable_for_Botan::OID, 0x10) var_e8_1 = _vtable_for_Botan::OID + 0x10
                void* var_e0
                
                if (var_e0 != 0)
                    void* var_d8_1 = var_e0
                    operator delete(var_e0)
                
                var_130 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                void* var_108
                
                if (var_108 != 0)
                    void* var_100_1 = var_108
                    operator delete(var_108)
                
                var_128.q = _vtable_for_Botan::OID + 0x10
                
                if (var_120 != 0)
                    char* var_118_1 = var_120
                    operator delete(var_120)
                
                if (x24_1 == 0)
                    goto label_eb8f7c
        void* var_168
        
        if ((zx.d(var_178.b) & 1) != 0)
            operator delete(var_168)
        
        if ((zx.d(var_160) & 1) != 0)
            operator delete(var_150)
    else
        x22 = 0x138d

if (var_148 != 0)
    char* x8_60 = var_140
    char* x0_67
    
    if (x8_60 == var_148)
        x0_67 = var_148
    else
        char* x20_2 = x8_60
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_60 - 8))
            
            x8_60 = x20_2
        while (var_148 != x20_2)
        
        x0_67 = var_148
    
    char* var_140_1 = var_148
    operator delete(x0_67)

if (*(x23 + 0x28) == x8)
    return zx.q(x22)

__stack_chk_fail()
noreturn
