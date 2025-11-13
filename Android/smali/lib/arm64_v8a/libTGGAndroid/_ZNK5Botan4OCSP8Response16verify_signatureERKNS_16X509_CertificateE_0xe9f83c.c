// 函数: _ZNK5Botan4OCSP8Response16verify_signatureERKNS_16X509_CertificateE
// 地址: 0xe9f83c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x20_1

if (*(arg1 + 0x120) == *(arg1 + 0x128))
    x20_1 = *(arg1 + 0x138)
    
    if (*(x23 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    Botan::X509_Certificate::load_subject_public_key()
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const var_80
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x19_1 = var_80
    Botan::OID::to_formatted_string()
    var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
    char var_78_1 = 0x2f
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const* var_60_1 = &var_80
    char var_b0
    Botan::split_on_pred(&var_b0, &var_80)
    
    if (&var_80 == var_60_1)
        (*var_60_1)->vFunc_4()
    else if (var_60_1 != 0)
        (*var_60_1)->j_operator delete()
    
    void* var_a0
    
    if ((zx.d(var_b0) & 1) != 0)
        operator delete(var_a0)
    
    char* var_98
    char* x21_1 = var_98
    char* var_90
    
    if (var_90 - x21_1 != 0x30)
        x20_1 = 0x1198
        
        if (x21_1 != 0)
        label_e9fad8:
            char* x8_19 = var_90
            char* x0_21
            
            if (x8_19 == x21_1)
                x0_21 = x21_1
            else
                char* x22_3 = x8_19
                
                do
                    x22_3 = &x22_3[-0x18]
                    
                    if ((zx.d(*x22_3) & 1) != 0)
                        operator delete(*(x8_19 - 8))
                    
                    x8_19 = x22_3
                while (x21_1 != x22_3)
                
                x0_21 = var_98
            
            char* var_90_1 = x21_1
            operator delete(x0_21)
    else
        (*(*x19_1 + 0x10))(x19_1)
        uint64_t x9_3 = zx.q(*x21_1)
        uint64_t x22_1 = zx.q(var_80.b)
        uint64_t i_1 = x9_3 u>> 1
        uint64_t i_2
        
        if ((x9_3.d & 1) == 0)
            i_2 = i_1
        else
            i_2 = *(x21_1 + 8)
        
        uint64_t x10_2
        
        if ((x22_1.d & 1) == 0)
            x10_2 = x22_1 u>> 1
        else
            x10_2 = var_78_1.q
        
        int32_t x21_2
        char* var_70
        
        if (i_2 != x10_2)
            x21_2 = 1
            
            if ((x22_1.d & 1) != 0)
                operator delete(var_70)
        else
            char* x1_2
            
            if ((x22_1.d & 1) == 0)
                x1_2 = &var_80 | 1
            else
                x1_2 = var_70
            
            if ((x9_3.d & 1) == 0)
                if (i_2 == 0)
                    goto label_e9f9e4
                
                void* x9_5 = &x21_1[1]
                uint32_t x10_3
                uint32_t x11_3
                uint64_t i
                
                do
                    x10_3 = zx.d(*x9_5)
                    x11_3 = zx.d(*x1_2)
                    
                    if (x10_3 != x11_3)
                        break
                    
                    i = i_1
                    i_1 -= 1
                    x9_5 += 1
                    x1_2 = &x1_2[1]
                while (i != 1)
                x21_2 = x10_3 != x11_3 ? 1 : 0
                
                if ((x22_1.d & 1) != 0)
                    operator delete(var_70)
            else if (i_2 == 0)
            label_e9f9e4:
                x21_2 = 0
                
                if ((x22_1.d & 1) != 0)
                    operator delete(var_70)
            else
                x21_2 = memcmp() != 0 ? 1 : 0
                
                if ((x22_1.d & 1) != 0)
                    operator delete(var_70)
        
        if ((x21_2 & 1) == 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_b0)
            int16_t var_c8_1 = 0
            Botan::PK_Verifier::PK_Verifier(&var_80, x19_1, &var_b0, 
                zx.q((*(*x19_1 + 0x58))(x19_1)))
            uint8_t* x0_13 = *(arg1 + 0x98)
            Botan::ASN1::put_in_sequence(x0_13, *(arg1 + 0xa0) - x0_13)
            struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
                * const x22_2 = var_80
            int64_t x1_6 = var_c8_1.q
            uint64_t x21_3 = *(arg1 + 0xf0)
            *(arg1 + 0xf8)
            int64_t var_c0
            (*x22_2->vFunc_0)(x22_2, x1_6, var_c0 - x1_6)
            int32_t x0_16 = Botan::PK_Verifier::check_signature(&var_80, x21_3)
            void* x0_17 = var_c8_1.q
            
            if (x0_17 != 0)
                void* var_c0_1 = x0_17
                operator delete(x0_17)
            
            if ((x0_16 & 1) != 0)
                x20_1 = 2
            else
                x20_1 = 0x1195
            
            (*(x22_2->vFunc_0 + 0x18))(x22_2)
            
            if ((zx.d(var_b0) & 1) != 0)
                operator delete(var_a0)
        else
            x20_1 = 0x1198
        
        x21_1 = var_98
        
        if (x21_1 != 0)
            goto label_e9fad8
    
    if (x19_1 != 0)
        (*(*x19_1 + 8))(x19_1)
    
    if (*(x23 + 0x28) != x8)
        __stack_chk_fail()
        noreturn

return zx.q(x20_1)
