// 函数: _ZN5Botan8get_emsaERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xdec63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_98
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_98)
char var_80
Botan::SCAN_Name::SCAN_Name(&var_80)
void* var_88

if ((zx.d(var_98) & 1) != 0)
    operator delete(var_88)
char var_68
uint64_t x8_1 = zx.q(var_68)
uint64_t var_60
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = var_60

void* var_50
char* var_48
void** result
int16_t var_d0
void* var_c0
char var_b8
void* var_a8
int64_t* var_a0

if (x8_2 != 5)
label_dec744:
    uint64_t x10_1 = zx.q(var_68)
    uint64_t x8_9 = var_60
    int32_t x9_2 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_2 == 0 ? x10_2 : x8_9
    
    if (x11_1 != 0xa)
        goto label_dec794
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_68, 0, -ffffffffffffffff, "EMSA_PKCS1") != 0)
        uint64_t x10_3 = zx.q(var_68)
        x8_9 = var_60
        x9_2 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_dec794:
        uint64_t x11_2
        
        if ((x9_2 & 0xff) == 0)
            x11_2 = x10_2
        else
            x11_2 = x8_9
        
        if (x11_2 == 8)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_68, 0, -ffffffffffffffff, "PKCS1v15") == 0)
                goto label_dec840
            
            uint64_t x10_4 = zx.q(var_68)
            x8_9 = var_60
            x9_2 = x10_4.d & 1
            x10_2 = x10_4 u>> 1
        
        uint64_t x11_3
        
        if ((x9_2 & 0xff) == 0)
            x11_3 = x10_2
        else
            x11_3 = x8_9
        
        if (x11_3 == 0xf)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_68, 0, -ffffffffffffffff, "EMSA-PKCS1-v1_5") == 0)
                goto label_dec840
            
            uint64_t x10_5 = zx.q(var_68)
            x8_9 = var_60
            x9_2 = x10_5.d & 1
            x10_2 = x10_5 u>> 1
        
        uint64_t x8_10
        
        if ((x9_2 & 0xff) == 0)
            x8_10 = x10_2
        else
            x8_10 = x8_9
        
        if (x8_10 != 5)
            goto label_deca28
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_68, 0, -ffffffffffffffff, "EMSA3") != 0)
            goto label_deca28
        
        goto label_dec840
    
label_dec840:
    void* x9_6 = var_50
    char* x8_14 = var_48
    
    if (x8_14 - x9_6 != 0x30)
        goto label_dec900
    
    Botan::SCAN_Name::arg(&var_80)
    uint64_t x9_3 = zx.q(var_b8)
    int32_t x8_11 = x9_3.d & 1
    uint64_t var_b0
    uint64_t x9_5
    
    if (x8_11 == 0)
        x9_5 = x9_3 u>> 1
    else
        x9_5 = var_b0
    
    int32_t x21_2
    
    if (x9_5 != 3)
        x21_2 = 0
        
        if ((x8_11 & 0xff) != 0)
            operator delete(var_a8)
    else
        x21_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_b8, 0, -ffffffffffffffff, 0x75cb1e) == 0 ? 1 : 0
        
        if ((zx.d(var_b8) & 1) != 0)
            operator delete(var_a8)
    
    if ((x21_2 & 1) == 0)
        x9_6 = var_50
        x8_14 = var_48
    label_dec900:
        int64_t* var_a0_1
        int64_t* x0_83
        
        if (x8_14 - x9_6 != 0x18)
        label_deca28:
            uint64_t x10_9 = zx.q(var_68)
            uint64_t x8_23 = var_60
            int32_t x9_10 = x10_9.d & 1
            uint64_t x10_10 = x10_9 u>> 1
            uint64_t x11_4
            
            x11_4 = x9_10 == 0 ? x10_10 : x8_23
            
            if (x11_4 != 7)
                goto label_deca78
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_68, 0, -ffffffffffffffff, "PSS_Raw") != 0)
                uint64_t x10_11 = zx.q(var_68)
                x8_23 = var_60
                x9_10 = x10_11.d & 1
                x10_10 = x10_11 u>> 1
            label_deca78:
                uint64_t x8_24
                
                if ((x9_10 & 0xff) == 0)
                    x8_24 = x10_10
                else
                    x8_24 = x8_23
                
                if (x8_24 != 8)
                    goto label_decc30
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_68, 0, -ffffffffffffffff, "PSSR_Raw") != 0 || var_48 == var_50)
                    goto label_decc30
                
                goto label_decabc
            
            if (var_48 == var_50)
            label_decc30:
                uint64_t x10_14 = zx.q(var_68)
                uint64_t x8_35 = var_60
                int32_t x9_21 = x10_14.d & 1
                uint64_t x10_15 = x10_14 u>> 1
                uint64_t x11_5
                
                x11_5 = x9_21 == 0 ? x10_15 : x8_35
                
                if (x11_5 != 3)
                    goto label_decc80
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_68, 0, -ffffffffffffffff, 0x779044) != 0)
                    uint64_t x10_16 = zx.q(var_68)
                    x8_35 = var_60
                    x9_21 = x10_16.d & 1
                    x10_15 = x10_16 u>> 1
                label_decc80:
                    uint64_t x11_6
                    
                    if ((x9_21 & 0xff) == 0)
                        x11_6 = x10_15
                    else
                        x11_6 = x8_35
                    
                    if (x11_6 == 4)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_68, 0, -ffffffffffffffff, "PSSR") == 0)
                            goto label_decd70
                        
                        uint64_t x10_17 = zx.q(var_68)
                        x8_35 = var_60
                        x9_21 = x10_17.d & 1
                        x10_15 = x10_17 u>> 1
                    
                    uint64_t x11_7
                    
                    if ((x9_21 & 0xff) == 0)
                        x11_7 = x10_15
                    else
                        x11_7 = x8_35
                    
                    if (x11_7 != 8)
                        goto label_decd00
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_68, 0, -ffffffffffffffff, "EMSA-PSS") != 0)
                        uint64_t x10_18 = zx.q(var_68)
                        x8_35 = var_60
                        x9_21 = x10_18.d & 1
                        x10_15 = x10_18 u>> 1
                    label_decd00:
                        uint64_t x11_8
                        
                        if ((x9_21 & 0xff) == 0)
                            x11_8 = x10_15
                        else
                            x11_8 = x8_35
                        
                        if (x11_8 != 8)
                            goto label_decd40
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_68, 0, -ffffffffffffffff, "PSS-MGF1") != 0)
                            uint64_t x10_19 = zx.q(var_68)
                            x8_35 = var_60
                            x9_21 = x10_19.d & 1
                            x10_15 = x10_19 u>> 1
                        label_decd40:
                            uint64_t x8_36
                            
                            if ((x9_21 & 0xff) == 0)
                                x8_36 = x10_15
                            else
                                x8_36 = x8_35
                            
                            if (x8_36 != 5)
                                goto label_decef4
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_68, 0, -ffffffffffffffff, "EMSA4") != 0 || var_48 == var_50)
                                goto label_decef4
                            
                            goto label_decd84
                
            label_decd70:
                
                if (var_48 == var_50)
                label_decef4:
                    uint64_t x8_47 = zx.q(var_68)
                    uint64_t x8_48
                    
                    if ((x8_47.d & 1) == 0)
                        x8_48 = x8_47 u>> 1
                    else
                        x8_48 = var_60
                    
                    if (x8_48 != 0xc)
                    label_decf30:
                        uint64_t x8_49 = zx.q(var_68)
                        uint64_t x8_50
                        
                        if ((x8_49.d & 1) == 0)
                            x8_50 = x8_49 u>> 1
                        else
                            x8_50 = var_60
                        
                        if (x8_50 != 0xc)
                        label_decf6c:
                            uint64_t x10_24 = zx.q(var_68)
                            uint64_t x8_51 = var_60
                            int32_t x9_34 = x10_24.d & 1
                            uint64_t x10_25 = x10_24 u>> 1
                            uint64_t x11_9
                            
                            x11_9 = x9_34 == 0 ? x10_25 : x8_51
                            
                            if (x11_9 != 9)
                                goto label_decfbc
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_68, 0, -ffffffffffffffff, "EMSA_X931") == 0)
                            label_ded030:
                                
                                if (var_48 - var_50 == 0x18)
                                label_ded044:
                                    Botan::SCAN_Name::arg(&var_80)
                                    var_d0 = 0
                                    Botan::HashFunction::create(&var_b8, &var_d0)
                                    
                                    if ((zx.d(var_d0.b) & 1) == 0)
                                        if ((zx.d(var_b8) & 1) != 0)
                                            goto label_ded184
                                        
                                        goto label_ded070
                                    
                                    operator delete(var_c0)
                                    
                                    if ((zx.d(var_b8) & 1) == 0)
                                    label_ded070:
                                        
                                        if (var_a0 != 0)
                                        label_ded078:
                                            void** result_6 = operator new(0x30)
                                            result = result_6
                                            var_a0_1 = nullptr
                                            Botan::EMSA_X931::EMSA_X931(result_6)
                                            goto label_ded08c
                                    else
                                    label_ded184:
                                        operator delete(var_a8)
                                        
                                        if (var_a0 != 0)
                                            goto label_ded078
                            else
                                uint64_t x10_26 = zx.q(var_68)
                                x8_51 = var_60
                                x9_34 = x10_26.d & 1
                                x10_25 = x10_26 u>> 1
                            label_decfbc:
                                uint64_t x11_10
                                
                                if ((x9_34 & 0xff) == 0)
                                    x11_10 = x10_25
                                else
                                    x11_10 = x8_51
                                
                                if (x11_10 == 5)
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            &var_68, 0, -ffffffffffffffff, "EMSA2") == 0)
                                        goto label_ded030
                                    
                                    uint64_t x10_27 = zx.q(var_68)
                                    x8_51 = var_60
                                    x9_34 = x10_27.d & 1
                                    x10_25 = x10_27 u>> 1
                                
                                uint64_t x8_52
                                
                                if ((x9_34 & 0xff) == 0)
                                    x8_52 = x10_25
                                else
                                    x8_52 = x8_51
                                
                                if (x8_52 == 5 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_68, 0, -ffffffffffffffff, "X9.31") == 0
                                        && var_48 - var_50 == 0x18)
                                    goto label_ded044
                            
                            uint64_t x8_73 = zx.q(var_68)
                            uint64_t x8_74
                            
                            if ((x8_73.d & 1) == 0)
                                x8_74 = x8_73 u>> 1
                            else
                                x8_74 = var_60
                            
                            if (x8_74 != 3)
                            label_ded388:
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                    * x0_107 = __cxa_allocate_exception(0x20)
                                Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_107)
                                __cxa_throw(x0_107, _typeinfo_for_Botan::Algorithm_Not_Found, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_68, 0, -ffffffffffffffff, 0x75cb1e) != 0)
                                goto label_ded388
                            
                            if (var_48 == var_50)
                                void** result_7 = operator new(0x28)
                                result = result_7
                                *(result_7 + 8) = zx.o(0)
                                *result_7 = _vtable_for_Botan::EMSA_Raw + 0x10
                                *(result_7 + 0x18) = zx.o(0)
                            else
                                Botan::SCAN_Name::arg(&var_80)
                                var_d0 = 0
                                Botan::HashFunction::create(&var_b8, &var_d0)
                                
                                if ((zx.d(var_d0.b) & 1) == 0)
                                    if ((zx.d(var_b8) & 1) != 0)
                                        goto label_ded378
                                    
                                    goto label_ded20c
                                
                                operator delete(var_c0)
                                int64_t* x21_10
                                
                                if ((zx.d(var_b8) & 1) == 0)
                                label_ded20c:
                                    x21_10 = var_a0
                                    
                                    if (x21_10 == 0)
                                        goto label_ded388
                                else
                                label_ded378:
                                    operator delete(var_a8)
                                    x21_10 = var_a0
                                    
                                    if (x21_10 == 0)
                                        goto label_ded388
                                
                                result = operator new(0x28)
                                int64_t x0_96 = (**x21_10)(x21_10)
                                __builtin_memset(&result[2], 0, 0x18)
                                *result = _vtable_for_Botan::EMSA_Raw + 0x10
                                result[1] = x0_96
                                int64_t var_a0_3 = 0
                                
                                if (var_a0 != 0)
                                    (*(*var_a0 + 0x10))(var_a0)
                        else
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_68, 0, -ffffffffffffffff, "ISO_9796_DS3") != 0 || var_48 == var_50
                                    || ((var_48 - var_50) s>> 3) * -0x5555555555555555 u> 2)
                                goto label_decf6c
                            
                            Botan::SCAN_Name::arg(&var_80)
                            var_d0 = 0
                            Botan::HashFunction::create(&var_b8, &var_d0)
                            
                            if ((zx.d(var_d0.b) & 1) == 0)
                                if ((zx.d(var_b8) & 1) != 0)
                                    goto label_ded47c
                                
                                goto label_ded168
                            
                            operator delete(var_c0)
                            
                            if ((zx.d(var_b8) & 1) == 0)
                            label_ded168:
                                
                                if (var_a0 == 0)
                                    goto label_decf6c
                            else
                            label_ded47c:
                                operator delete(var_a8)
                                
                                if (var_a0 == 0)
                                    goto label_decf6c
                            
                            var_d0.b = 6
                            var_d0:1.d = 0x707865
                            
                            if (((var_48 - var_50) s>> 3) * -0x5555555555555555 u<= 1)
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_b8)
                            else
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_b8)
                            
                            uint64_t x9_60 = zx.q(var_b8)
                            int32_t x8_106 = x9_60.d & 1
                            uint64_t x9_62
                            
                            if (x8_106 == 0)
                                x9_62 = x9_60 u>> 1
                            else
                                x9_62 = var_b0
                            
                            char x19_8
                            
                            if (x9_62 != 3)
                                x19_8 = 0
                            else
                                x19_8 = (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    &var_b8, 0, -ffffffffffffffff, &data_7267e9) == 0 ? 1 : 0).b
                                x8_106 = zx.d(var_b8) & 1
                            
                            if ((x8_106 & 0xff) != 0)
                                operator delete(var_a8)
                            
                            if ((zx.d(var_d0.b) & 1) != 0)
                                operator delete(var_c0)
                            
                            void** result_11 = operator new(0x30)
                            result = result_11
                            result_11[2].b = x19_8
                            result_11[4] = 0
                            result_11[5] = 0
                            *result_11 = _vtable_for_Botan::ISO_9796_DS3 + 0x10
                            result_11[1] = var_a0
                            result_11[3] = 0
                    else
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_68, 0, -ffffffffffffffff, "ISO_9796_DS2") != 0 || var_48 == var_50
                                || ((var_48 - var_50) s>> 3) * -0x5555555555555555 u> 3)
                            goto label_decf30
                        
                        Botan::SCAN_Name::arg(&var_80)
                        var_d0 = 0
                        Botan::HashFunction::create(&var_b8, &var_d0)
                        
                        if ((zx.d(var_d0.b) & 1) == 0)
                            if ((zx.d(var_b8) & 1) != 0)
                                goto label_ded408
                            
                            goto label_ded100
                        
                        operator delete(var_c0)
                        int64_t* x0_113
                        
                        if ((zx.d(var_b8) & 1) == 0)
                        label_ded100:
                            x0_113 = var_a0
                            
                            if (x0_113 == 0)
                                goto label_decf30
                        else
                        label_ded408:
                            operator delete(var_a8)
                            x0_113 = var_a0
                            
                            if (x0_113 == 0)
                                goto label_decf30
                        
                        uint64_t x0_114 = (**x0_113)()
                        int64_t x9_48 = ((var_48 - var_50) s>> 3) * -0x5555555555555555
                        uint64_t x19_5
                        
                        if (x9_48 u< 3)
                            x19_5 = x0_114
                        else
                            x19_5 = zx.q(Botan::to_u32bit(var_50 + 0x30))
                            x9_48 = ((var_48 - var_50) s>> 3) * -0x5555555555555555
                        
                        var_d0.b = 6
                        var_d0:1.d = 0x707865
                        
                        if (x9_48 u<= 1)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_b8)
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_b8)
                        
                        uint64_t x9_56 = zx.q(var_b8)
                        int32_t x8_102 = x9_56.d & 1
                        uint64_t x9_58
                        
                        if (x8_102 == 0)
                            x9_58 = x9_56 u>> 1
                        else
                            x9_58 = var_b0
                        
                        char x21_13
                        
                        if (x9_58 != 3)
                            x21_13 = 0
                        else
                            x21_13 = (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_b8, 0, -ffffffffffffffff, &data_7267e9) == 0 ? 1 : 0).b
                            x8_102 = zx.d(var_b8) & 1
                        
                        if ((x8_102 & 0xff) != 0)
                            operator delete(var_a8)
                        
                        if ((zx.d(var_d0.b) & 1) != 0)
                            operator delete(var_c0)
                        
                        void** result_10 = operator new(0x38)
                        result = result_10
                        result_10[2].b = x21_13
                        result_10[3] = x19_5
                        result_10[4] = 0
                        *result_10 = _vtable_for_Botan::ISO_9796_DS2 + 0x10
                        result_10[1] = var_a0
                        result_10[5] = 0
                        result_10[6] = 0
                else
                label_decd84:
                    int64_t x9_25 = ((var_48 - var_50) s>> 3) * -0x5555555555555555
                    
                    if (x9_25 u> 3)
                        goto label_decef4
                    
                    var_d0.b = 8
                    __builtin_strncpy(&var_d0:1, "MGF1", 5)
                    
                    if (x9_25 u<= 1)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_b8)
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_b8)
                    
                    uint64_t x9_26 = zx.q(var_b8)
                    int32_t x8_38 = x9_26.d & 1
                    uint64_t x9_28
                    
                    if (x8_38 == 0)
                        x9_28 = x9_26 u>> 1
                    else
                        x9_28 = var_b0
                    
                    int32_t x21_7
                    
                    if (x9_28 != 4)
                        x21_7 = 0
                        
                        if ((x8_38 & 0xff) != 0)
                            operator delete(var_a8)
                    else
                        x21_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_b8, 0, -ffffffffffffffff, "MGF1") == 0 ? 1 : 0
                        
                        if ((zx.d(var_b8) & 1) != 0)
                            operator delete(var_a8)
                    
                    if ((zx.d(var_d0.b) & 1) != 0)
                        operator delete(var_c0)
                    
                    if (x21_7 == 0)
                        goto label_decef4
                    
                    Botan::SCAN_Name::arg(&var_80)
                    var_d0 = 0
                    Botan::HashFunction::create(&var_b8, &var_d0)
                    
                    if ((zx.d(var_d0.b) & 1) == 0)
                        if ((zx.d(var_b8) & 1) != 0)
                            goto label_decee8
                        
                        goto label_dece7c
                    
                    operator delete(var_c0)
                    int64_t* x21_8
                    
                    if ((zx.d(var_b8) & 1) != 0)
                    label_decee8:
                        operator delete(var_a8)
                        x21_8 = var_a0
                        
                        if (x21_8 != 0)
                            goto label_dece8c
                        
                        goto label_decef4
                    
                label_dece7c:
                    x21_8 = var_a0
                    
                    if (x21_8 == 0)
                        goto label_decef4
                    
                label_dece8c:
                    
                    if (var_48 - var_50 != 0x48)
                        void** result_8 = operator new(0x20)
                        int64_t* var_a0_4 = nullptr
                        result = result_8
                        *result_8 = _vtable_for_Botan::PSSR + 0x10
                        result_8[1] = x21_8
                        x0_83 = var_a0_4
                        result[2] = (**x21_8)(x21_8)
                        result[3].b = 0
                        goto label_ded090
                    
                    int32_t x0_68 = Botan::to_u32bit(var_50 + 0x30)
                    void** result_5 = operator new(0x20)
                    result = result_5
                    result_5[1] = var_a0
                    result_5[2] = zx.q(x0_68)
                    *result_5 = _vtable_for_Botan::PSSR + 0x10
                    result_5[3].b = 1
            else
            label_decabc:
                int64_t x9_14 = ((var_48 - var_50) s>> 3) * -0x5555555555555555
                
                if (x9_14 u> 3)
                    goto label_decc30
                
                var_d0.b = 8
                __builtin_strncpy(&var_d0:1, "MGF1", 5)
                
                if (x9_14 u<= 1)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_b8)
                else
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_b8)
                
                uint64_t x9_15 = zx.q(var_b8)
                int32_t x8_26 = x9_15.d & 1
                uint64_t x9_17
                
                if (x8_26 == 0)
                    x9_17 = x9_15 u>> 1
                else
                    x9_17 = var_b0
                
                int32_t x21_5
                
                if (x9_17 != 4)
                    x21_5 = 0
                    
                    if ((x8_26 & 0xff) != 0)
                        operator delete(var_a8)
                else
                    x21_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_b8, 0, -ffffffffffffffff, "MGF1") == 0 ? 1 : 0
                    
                    if ((zx.d(var_b8) & 1) != 0)
                        operator delete(var_a8)
                
                if ((zx.d(var_d0.b) & 1) != 0)
                    operator delete(var_c0)
                
                if (x21_5 == 0)
                    goto label_decc30
                
                Botan::SCAN_Name::arg(&var_80)
                var_d0 = 0
                Botan::HashFunction::create(&var_b8, &var_d0)
                
                if ((zx.d(var_d0.b) & 1) == 0)
                    if ((zx.d(var_b8) & 1) != 0)
                        goto label_decc24
                    
                    goto label_decbb4
                
                operator delete(var_c0)
                int64_t* x21_6
                
                if ((zx.d(var_b8) & 1) != 0)
                label_decc24:
                    operator delete(var_a8)
                    x21_6 = var_a0
                    
                    if (x21_6 != 0)
                        goto label_decbc4
                    
                    goto label_decc30
                
            label_decbb4:
                x21_6 = var_a0
                
                if (x21_6 == 0)
                    goto label_decc30
                
            label_decbc4:
                
                if (var_48 - var_50 != 0x48)
                    void** result_9 = operator new(0x38)
                    int64_t* var_a0_5 = nullptr
                    result_9[3] = 0
                    result_9[4] = 0
                    result = result_9
                    *result_9 = _vtable_for_Botan::PSSR_Raw + 0x10
                    result_9[1] = x21_6
                    result_9[2] = 0
                    x0_83 = var_a0_5
                    result[5] = (**x21_6)(x21_6)
                    result[6].b = 0
                    goto label_ded090
                
                int32_t x0_46 = Botan::to_u32bit(var_50 + 0x30)
                void** result_4 = operator new(0x38)
                result = result_4
                __builtin_memset(&result_4[2], 0, 0x18)
                result_4[5] = zx.q(x0_46)
                *result_4 = _vtable_for_Botan::PSSR_Raw + 0x10
                result_4[1] = var_a0
                result_4[6].b = 1
        else
            Botan::SCAN_Name::arg(&var_80)
            uint64_t x9_7 = zx.q(var_b8)
            int32_t x8_16 = x9_7.d & 1
            uint64_t x9_9
            
            if (x8_16 == 0)
                x9_9 = x9_7 u>> 1
            else
                x9_9 = var_b0
            
            int32_t x21_3
            
            if (x9_9 != 3)
                x21_3 = 0
                
                if ((x8_16 & 0xff) != 0)
                    operator delete(var_a8)
            else
                x21_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_b8, 0, -ffffffffffffffff, 0x75cb1e) == 0 ? 1 : 0
                
                if ((zx.d(var_b8) & 1) != 0)
                    operator delete(var_a8)
            
            if (x21_3 != 0)
                void** result_2 = operator new(0x58)
                result = result_2
                var_b8.w = 0
                Botan::EMSA_PKCS1v15_Raw::EMSA_PKCS1v15_Raw(result_2)
                goto label_dec9a0
            
            Botan::SCAN_Name::arg(&var_80)
            var_d0 = 0
            Botan::HashFunction::create(&var_b8, &var_d0)
            
            if ((zx.d(var_d0.b) & 1) == 0)
                if ((zx.d(var_b8) & 1) != 0)
                    goto label_deca1c
                
                goto label_dec9e8
            
            operator delete(var_c0)
            
            if ((zx.d(var_b8) & 1) != 0)
            label_deca1c:
                operator delete(var_a8)
                
                if (var_a0 != 0)
                    goto label_dec9f0
                
                goto label_deca28
            
        label_dec9e8:
            
            if (var_a0 == 0)
                goto label_deca28
            
        label_dec9f0:
            void** result_3 = operator new(0x28)
            result = result_3
            var_a0_1 = nullptr
            Botan::EMSA_PKCS1v15::EMSA_PKCS1v15(result_3)
        label_ded08c:
            x0_83 = var_a0_1
        label_ded090:
            int64_t var_a0_2 = 0
            
            if (x0_83 != 0)
                (*(*x0_83 + 0x10))()
    else
        result = operator new(0x58)
        Botan::SCAN_Name::arg(&var_80)
        Botan::EMSA_PKCS1v15_Raw::EMSA_PKCS1v15_Raw(result)
    label_dec9a0:
        
        if ((zx.d(var_b8) & 1) != 0)
            operator delete(var_a8)
else
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_68, 0, -ffffffffffffffff, "EMSA1") != 0 || var_48 - var_50 != 0x18)
        goto label_dec744
    
    Botan::SCAN_Name::arg(&var_80)
    var_d0 = 0
    Botan::HashFunction::create(&var_b8, &var_d0)
    
    if ((zx.d(var_d0.b) & 1) == 0)
        if ((zx.d(var_b8) & 1) != 0)
            goto label_dec738
        
        goto label_dec6fc
    
    operator delete(var_c0)
    int64_t* x21_1
    
    if ((zx.d(var_b8) & 1) != 0)
    label_dec738:
        operator delete(var_a8)
        x21_1 = var_a0
        
        if (x21_1 != 0)
            goto label_dec708
        
        goto label_dec744
    
label_dec6fc:
    x21_1 = var_a0
    
    if (x21_1 == 0)
        goto label_dec744
    
label_dec708:
    void** result_1 = operator new(0x10)
    result = result_1
    *result_1 = _vtable_for_Botan::EMSA1 + 0x10
    result_1[1] = x21_1
void* var_38

if (var_38 != 0)
    char* var_30
    char* x8_82 = var_30
    void* x0_99
    
    if (x8_82 == var_38)
        x0_99 = var_38
    else
        char* x21_11 = x8_82
        
        do
            x21_11 = &x21_11[-0x18]
            
            if ((zx.d(*x21_11) & 1) != 0)
                operator delete(*(x8_82 - 8))
            
            x8_82 = x21_11
        while (var_38 != x21_11)
        
        x0_99 = var_38
    
    void* var_30_1 = var_38
    operator delete(x0_99)

if (var_50 != 0)
    char* x8_83 = var_48
    void* x0_101
    
    if (x8_83 == var_50)
        x0_101 = var_50
    else
        char* x21_12 = x8_83
        
        do
            x21_12 = &x21_12[-0x18]
            
            if ((zx.d(*x21_12) & 1) != 0)
                operator delete(*(x8_83 - 8))
            
            x8_83 = x21_12
        while (var_50 != x21_12)
        
        x0_101 = var_50
    
    void* var_48_1 = var_50
    operator delete(x0_101)

void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)
return result
