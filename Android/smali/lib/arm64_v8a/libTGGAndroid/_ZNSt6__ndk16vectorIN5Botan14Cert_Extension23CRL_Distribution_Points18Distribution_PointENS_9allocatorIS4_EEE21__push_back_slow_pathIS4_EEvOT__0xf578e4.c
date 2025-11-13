// 函数: _ZNSt6__ndk16vectorIN5Botan14Cert_Extension23CRL_Distribution_Points18Distribution_PointENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_
// 地址: 0xf578e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x22 = (*(arg1 + 8) - x8) s>> 6

if ((x22 + 1) u>> 0x3a != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x8_1 = *(arg1 + 0x10) - x8
    int64_t x10_2 = x8_1 s>> 5
    int64_t x9_3
    
    if (x10_2 u< x22 + 1)
        x9_3 = x22 + 1
    else
        x9_3 = x10_2
    
    int64_t x21_1
    
    if (0x1ffffffffffffff u> x8_1 s>> 6)
        x21_1 = x9_3
    else
        x21_1 = 0x3ffffffffffffff
    
    void* result
    
    if (x21_1 == 0)
        result = nullptr
    label_f57960:
        void** x10_3 = result + (x22 << 6)
        *x10_3 =
            _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point + 0x10
        x10_3[1] = _vtable_for_Botan::AlternativeName + 0x10
        void* entry_x1
        x10_3[2] = *(entry_x1 + 0x10)
        void* x11_2 = *(entry_x1 + 0x18)
        int64_t x13 = *(entry_x1 + 0x20)
        x10_3[3] = x11_2
        x10_3[4] = x13
        
        if (x13 == 0)
            x10_3[2] = &x10_3[3]
        else
            *(x11_2 + 0x10) = &x10_3[3]
            *(entry_x1 + 0x18) = 0
            *(entry_x1 + 0x10) = entry_x1 + 0x18
            *(entry_x1 + 0x20) = 0
        
        void* x11_4 = result + (x22 << 6)
        *(x11_4 + 0x28) = *(entry_x1 + 0x28)
        void* x13_4 = *(entry_x1 + 0x30)
        int64_t x14 = *(entry_x1 + 0x38)
        *(x11_4 + 0x30) = x13_4
        *(x11_4 + 0x38) = x14
        
        if (x14 == 0)
            *(x11_4 + 0x28) = x11_4 + 0x30
        else
            *(x13_4 + 0x10) = x11_4 + 0x30
            *(entry_x1 + 0x30) = 0
            *(entry_x1 + 0x28) = entry_x1 + 0x30
            *(entry_x1 + 0x38) = 0
        
        void* x20_3 = *arg1
        void* x13_5 = *(arg1 + 8)
        void* x11_6 = result + (x21_1 << 6)
        
        if (x13_5 == x20_3)
            *arg1 = x10_3
            *(arg1 + 8) = &x10_3[8]
            *(arg1 + 0x10) = x11_6
            
            if (x20_3 == 0)
                return result
        else
            int64_t x14_1 = 0
            void* x15_1 = x20_3 - x13_5
            
            while (true)
                void* x0_1 = x10_3 + x14_1
                *(x0_1 - 0x40) =
                    _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point
                    + 0x10
                *(x0_1 - 0x38) = _vtable_for_Botan::AlternativeName + 0x10
                void* x1_1 = x13_5 + x14_1
                *(x0_1 - 0x30) = *(x1_1 - 0x30)
                void* x2_2 = *(x1_1 - 0x28)
                *(x0_1 - 0x28) = x2_2
                int64_t x3_2 = *(x1_1 - 0x20)
                *(x0_1 - 0x20) = x3_2
                
                if (x3_2 == 0)
                    *(x0_1 - 0x30) = x0_1 - 0x28
                else
                    *(x2_2 + 0x10) = x0_1 - 0x28
                    *(x1_1 - 0x28) = 0
                    *(x1_1 - 0x20) = 0
                    *(x1_1 - 0x30) = x1_1 - 0x28
                
                result = x13_5 + x14_1
                void* x1_3 = x10_3 + x14_1
                *(x1_3 - 0x18) = *(result - 0x18)
                void* x2_4 = *(result - 0x10)
                *(x1_3 - 0x10) = x2_4
                int64_t x3_4 = *(result - 8)
                *(x1_3 - 8) = x3_4
                
                if (x3_4 != 0)
                    *(x2_4 + 0x10) = x1_3 - 0x10
                    *(result - 0x10) = 0
                    *(result - 8) = 0
                    *(result - 0x18) = result - 0x10
                    x14_1 -= 0x40
                    
                    if (x15_1 == x14_1)
                        break
                else
                    result = x1_3 - 0x10
                    *(x1_3 - 0x18) = result
                    x14_1 -= 0x40
                    
                    if (x15_1 == x14_1)
                        break
            
            x20_3 = *arg1
            void** x21_2 = *(arg1 + 8)
            *arg1 = x10_3 + x14_1
            *(arg1 + 8) = &x10_3[8]
            *(arg1 + 0x10) = x11_6
            
            if (x21_2 != x20_3)
                do
                    x21_2 = &x21_2[-8]
                    *x21_2 = _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point
                        + 0x10
                    x21_2[6]
                    x21_2[1] = _vtable_for_Botan::AlternativeName + 0x10
                    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
                        &x21_2[5])
                    x21_2[3]
                    result = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
                        &x21_2[2])
                while (x20_3 != x21_2)
            
            if (x20_3 == 0)
                return result
        
        return operator delete(x20_3) __tailcall
    
    if (x21_1 u>> 0x3a == 0)
        result = operator new(x21_1 << 6)
        goto label_f57960

sub_ef2a0c()
noreturn
