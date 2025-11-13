// 函数: _ZNK5Botan11GeneralName7matchesERKNS_16X509_CertificateE
// 地址: 0xe9b584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
Botan::X509_Certificate const& var_e0
__builtin_memset(&var_e0, 0, 0x18)
int64_t* var_60 = nullptr
void* x0_1 = Botan::X509_Certificate::data()
void* x0_3 = Botan::X509_Certificate::data()
uint64_t x10 = zx.q(*(arg1 + 8))
uint64_t x8_1 = *(arg1 + 0x10)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8_1

if (x11 != 3)
    goto label_e9b628

Botan::X509_Certificate* var_d8
int32_t x19_1
Botan::X509_Certificate const& var_c0
int64_t var_b0_3
void var_80
int64_t* x0_10
Botan::X509_Certificate const& x0_36
Botan::X509_Certificate* x20_4

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1 + 8, 0, -ffffffffffffffff, &data_76182a) == 0)
    var_c0 = _vtable_for_std::__ndk1::__function::__func<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const>, std::__ndk1::allocator<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const> >, bool (Botan::GeneralName const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)>
        + 0x10
    int64_t (* const var_b8_1)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
         const&) = Botan::GeneralName::matches_dns
    int64_t var_b0_1 = 0
    Botan::X509_Certificate const&* var_a0_1 = &var_c0
    sub_f5448c(&var_c0, &var_80)
    
    if (&var_c0 == var_a0_1)
        (*(*var_a0_1 + 0x20))()
    else if (var_a0_1 != 0)
        (*(*var_a0_1 + 0x28))()
    
    char var_f8_1 = 6
    int32_t var_f7_1 = 0x534e44
    Botan::AlternativeName::get_attribute(x0_3 + 0x358)
    Botan::X509_Certificate* x20_2 = var_e0
    
    if (x20_2 != 0)
        Botan::X509_Certificate* x8_15 = var_d8
        Botan::X509_Certificate* x0_19
        
        if (x8_15 == x20_2)
            x0_19 = x20_2
        else
            Botan::X509_Certificate* x22_2 = x8_15
            
            do
                x22_2 -= 0x18
                
                if ((zx.d(*x22_2) & 1) != 0)
                    operator delete(*(x8_15 - 8))
                
                x8_15 = x22_2
            while (x20_2 != x22_2)
            
            x0_19 = var_e0
        
        var_d8 = x20_2
        operator delete(x0_19)
    
    Botan::X509_Certificate const& x8_26 = var_c0
    int128_t v0_1 = var_b8_1.o
    var_e0 = x8_26
    var_d8.o = v0_1
    __builtin_memset(&var_c0, 0, 0x18)
    
    if (x8_26 != v0_1.q)
        goto label_e9bae0
    
    char var_f8_3 = 4
    var_f7_1.w = 0x4e43
    var_f7_1:2.b = 0
    Botan::X509_DN::get_attribute(x0_1 + 0x90)
    x20_4 = var_e0
    
    if (x20_4 == 0)
        goto label_e9babc
    
    Botan::X509_Certificate* x8_28 = var_d8
    
    if (x8_28 != x20_4)
        Botan::X509_Certificate* x21_4 = x8_28
        
        do
            x21_4 -= 0x18
            
            if ((zx.d(*x21_4) & 1) != 0)
                operator delete(*(x8_28 - 8))
            
            x8_28 = x21_4
        while (x20_4 != x21_4)
        
        x0_36 = var_e0
        goto label_e9baa4
    
label_e9baa0:
    x0_36 = x20_4
label_e9baa4:
    var_d8 = x20_4
    operator delete(x0_36)
label_e9babc:
    var_e0.o = var_c0.o
    int64_t var_d0_1 = var_b0_3
    __builtin_memset(&var_c0, 0, 0x18)
label_e9bae0:
    Botan::X509_Certificate const& x20_5 = var_e0
    
    if (x20_5 == var_d8)
        x19_1 = 3
        x0_10 = var_60
        
        if (&var_80 != x0_10)
            goto label_e9b6a8
        
        (*(*x0_10 + 0x20))(x0_10)
    else
        int32_t x22_4 = 0
        int32_t x24_2 = 1
        
        do
            var_c0 = arg1
            
            if (var_60 == 0)
                sub_a58ab4()
                noreturn
            
            int32_t x0_38 = (*(*var_60 + 0x30))(var_60, &var_c0, x20_5)
            x20_5 += 0x18
            x22_4 |= x0_38
            x24_2 &= x0_38
        while (var_d8 != x20_5)
        
        int32_t x8_32
        
        if ((x22_4 & 1) == 0)
            x8_32 = 2
        else
            x8_32 = 1
        
        if ((x24_2 & 1) != 0)
            x19_1 = 0
        else
            x19_1 = x8_32
        
        x0_10 = var_60
        
        if (&var_80 != x0_10)
            goto label_e9b6a8
        
        (*(*x0_10 + 0x20))(x0_10)
else
    uint64_t x10_2 = zx.q(*(arg1 + 8))
    x8_1 = *(arg1 + 0x10)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_e9b628:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_1
    
    if (x11_1 != 2)
        goto label_e9b668
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1 + 8, 0, -ffffffffffffffff, &data_746477) == 0)
        var_c0 = _vtable_for_std::__ndk1::__function::__func<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const>, std::__ndk1::allocator<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const> >, bool (Botan::GeneralName const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)>
            + 0x10
        void* var_b8_2 = Botan::GeneralName::matches_dn
        void* var_b0_2 = nullptr
        Botan::X509_Certificate const&* var_a0_2 = &var_c0
        sub_f5448c(&var_c0, &var_80)
        
        if (&var_c0 == var_a0_2)
            (*(*var_a0_2 + 0x20))()
        else if (var_a0_2 != 0)
            (*(*var_a0_2 + 0x28))()
        
        Botan::X509_DN::to_string()
        int64_t var_d0
        
        if (var_d8 u>= var_d0)
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                &var_e0)
            
            if ((zx.d(var_c0.b) & 1) != 0)
                operator delete(var_b0_2)
        else
            int128_t v0_2 = var_c0.o
            *(var_d8 + 0x10) = var_b0_2
            *var_d8 = v0_2
            var_d8 += 0x18
        
        Botan::AlternativeName::dn()
        
        if (var_b8_2 != var_b0_2)
            Botan::X509_DN::to_string()
            char var_f8
            void* var_e8
            
            if (var_d8 u>= var_d0)
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                    &var_e0)
                
                if ((zx.d(var_f8) & 1) != 0)
                    operator delete(var_e8)
            else
                *(var_d8 + 0x10) = var_e8
                *var_d8 = var_f8.o
                var_d8 += 0x18
        
        var_c0 = _vtable_for_Botan::X509_DN + 0x10
        
        if (var_a0_2 != 0)
            Botan::X509_Certificate const&* var_98_1 = var_a0_2
            operator delete(var_a0_2)
        
        if (var_b8_2 != 0)
            void* x24_1 = var_b0_2
            void* x0_30
            
            if (x24_1 == var_b8_2)
                x0_30 = var_b8_2
                void* var_b0_5 = var_b8_2
            else
                bool cond:7_1
                
                do
                    uint32_t x8_23 = zx.d(*(x24_1 - 0x20))
                    *(x24_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                    
                    if ((x8_23 & 1) != 0)
                        operator delete(*(x24_1 - 0x10))
                    
                    void* x0_28 = *(x24_1 - 0x38)
                    
                    if (x0_28 != 0)
                        *(x24_1 - 0x30) = x0_28
                        operator delete(x0_28)
                    
                    void* x0_29 = *(x24_1 - 0x58)
                    *(x24_1 - 0x60) = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_29 != 0)
                        *(x24_1 - 0x50) = x0_29
                        operator delete(x0_29)
                    
                    cond:7_1 = var_b8_2 == x24_1 - 0x60
                    x24_1 -= 0x60
                while (not(cond:7_1))
                x0_30 = var_b8_2
                void* var_b0_4 = var_b8_2
            
            operator delete(x0_30)
        
        goto label_e9bae0
    
    uint64_t x10_3 = zx.q(*(arg1 + 8))
    x8_1 = *(arg1 + 0x10)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1
label_e9b668:
    uint64_t x8_2
    
    if ((x9 & 0xff) == 0)
        x8_2 = x10_1
    else
        x8_2 = x8_1
    
    int32_t x0_9
    
    if (x8_2 == 2)
        x0_9 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1 + 8, 0, -ffffffffffffffff, &data_735823)
    
    if (x8_2 == 2 && x0_9 == 0)
        var_c0 = _vtable_for_std::__ndk1::__function::__func<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const>, std::__ndk1::allocator<std::__ndk1::__mem_fn<bool(Botan::GeneralName::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const> >, bool (Botan::GeneralName const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)>
            + 0x10
        int64_t (* const var_b8_3)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
             const&) = Botan::GeneralName::matches_ip
        var_b0_3 = 0
        Botan::X509_Certificate const&* var_a0_3 = &var_c0
        sub_f5448c(&var_c0, &var_80)
        
        if (&var_c0 == var_a0_3)
            (*(*var_a0_3 + 0x20))()
        else if (var_a0_3 != 0)
            (*(*var_a0_3 + 0x28))()
        
        char var_f8_2 = 4
        int32_t var_f7
        var_f7.w = 0x5049
        var_f7:2.b = 0
        Botan::AlternativeName::get_attribute(x0_3 + 0x358)
        x20_4 = var_e0
        
        if (x20_4 == 0)
            goto label_e9babc
        
        Botan::X509_Certificate* x8_25 = var_d8
        
        if (x8_25 == x20_4)
            goto label_e9baa0
        
        Botan::X509_Certificate* x21_3 = x8_25
        
        do
            x21_3 -= 0x18
            
            if ((zx.d(*x21_3) & 1) != 0)
                operator delete(*(x8_25 - 8))
            
            x8_25 = x21_3
        while (x20_4 != x21_3)
        
        x0_36 = var_e0
        goto label_e9baa4
    
    x19_1 = 4
    x0_10 = var_60
    
    if (&var_80 == x0_10)
        (*(*x0_10 + 0x20))(x0_10)
    else
    label_e9b6a8:
        
        if (x0_10 != 0)
            (*(*x0_10 + 0x28))(x0_10)
Botan::X509_Certificate* x20_6 = var_e0

if (x20_6 != 0)
    Botan::X509_Certificate* x8_34 = var_d8
    Botan::X509_Certificate const& x0_40
    
    if (x8_34 == x20_6)
        x0_40 = x20_6
    else
        Botan::X509_Certificate* x21_6 = x8_34
        
        do
            x21_6 -= 0x18
            
            if ((zx.d(*x21_6) & 1) != 0)
                operator delete(*(x8_34 - 8))
            
            x8_34 = x21_6
        while (x20_6 != x21_6)
        
        x0_40 = var_e0
    
    Botan::X509_Certificate* var_d8_1 = x20_6
    operator delete(x0_40)

if (*(x23 + 0x28) == x8)
    return zx.q(x19_1)

__stack_chk_fail()
noreturn
