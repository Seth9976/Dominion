// 函数: _ZN5Botan7get_emeERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xdebae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::HashFunction* entry_result
Botan::HashFunction* entry_result_1 = entry_result
uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 3)
    goto label_debb50

Botan::HashFunction* entry_result_2

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, 0x75cb1e) == 0)
    entry_result_2 = operator new(8)
    entry_result = entry_result_2
    *entry_result_2 = _vtable_for_Botan::EME_Raw + 0x10
else
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_debb50:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8
    
    if (x11_1 != 8)
        goto label_debb90
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "PKCS1v15") == 0)
    label_debd34:
        entry_result_2 = operator new(8)
        entry_result = entry_result_2
        *entry_result_2 = _vtable_for_Botan::EME_PKCS1v15 + 0x10
    else
        uint64_t x10_3 = zx.q(*arg1)
        x8 = *(arg1 + 8)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_debb90:
        uint64_t x8_1
        
        if ((x9 & 0xff) == 0)
            x8_1 = x10_1
        else
            x8_1 = x8
        
        int32_t x0_5
        
        if (x8_1 == 0xe)
            x0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "EME-PKCS1-v1_5")
        
        if (x8_1 == 0xe && x0_5 == 0)
            goto label_debd34
        
        char var_b8
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_b8)
        char var_a0
        Botan::SCAN_Name::SCAN_Name(&var_a0)
        void* var_a8
        
        if ((zx.d(var_b8) & 1) != 0)
            operator delete(var_a8)
        char var_88
        uint64_t x10_4 = zx.q(var_88)
        uint64_t var_80
        uint64_t x8_3 = var_80
        int32_t x9_1 = x10_4.d & 1
        uint64_t x10_5 = x10_4 u>> 1
        uint64_t x12_1
        
        x12_1 = x9_1 == 0 ? x10_5 : x8_3
        
        if (x12_1 != 4)
            goto label_debc3c
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_88, 0, -ffffffffffffffff, "OAEP") != 0)
            uint64_t x10_6 = zx.q(var_88)
            x8_3 = var_80
            x9_1 = x10_6.d & 1
            x10_5 = x10_6 u>> 1
        label_debc3c:
            uint64_t x11_2
            
            if ((x9_1 & 0xff) == 0)
                x11_2 = x10_5
            else
                x11_2 = x8_3
            
            if (x11_2 == 8)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_88, 0, -ffffffffffffffff, "EME-OAEP") == 0)
                    goto label_debcbc
                
                uint64_t x10_7 = zx.q(var_88)
                x8_3 = var_80
                x9_1 = x10_7.d & 1
                x10_5 = x10_7 u>> 1
            
            uint64_t x8_4
            
            if ((x9_1 & 0xff) == 0)
                x8_4 = x10_5
            else
                x8_4 = x8_3
            
            if (x8_4 != 4)
                goto label_dec1b8
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_88, 0, -ffffffffffffffff, "EME1") != 0)
                goto label_dec1b8
            
            goto label_debcbc
        
    label_debcbc:
        void* var_70
        char* var_68
        int64_t x8_8 = ((var_68 - var_70) s>> 3) * -0x5555555555555555
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * var_108
        int16_t var_e8
        void* var_d8
        char var_d0
        void* var_c0
        
        if (x8_8 - 2 u>= 2)
            if (x8_8 != 1)
                goto label_debde4
            
        label_debd94:
            Botan::SCAN_Name::arg(&var_a0)
            var_e8 = 0
            Botan::HashFunction::create(&var_d0, &var_e8)
            
            if ((zx.d(var_e8.b) & 1) == 0)
                if ((zx.d(var_d0) & 1) != 0)
                    goto label_debf38
                
                goto label_debdbc
            
            operator delete(var_d8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x20_2
            
            if ((zx.d(var_d0) & 1) == 0)
            label_debdbc:
                x20_2 = var_108
                
                if (x20_2 == 0)
                    goto label_dec1b8
            else
            label_debf38:
                operator delete(var_c0)
                x20_2 = var_108
                
                if (x20_2 == 0)
                    goto label_dec1b8
            
            entry_result = operator new(0x28)
            var_108 = nullptr
            var_e8 = 0
            
            if (((var_68 - var_70) s>> 3) * -0x5555555555555555 u<= 2)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_d0)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_d0)
            
            Botan::OAEP::OAEP(entry_result, x20_2)
            
            if ((zx.d(var_d0) & 1) == 0)
                if ((zx.d(var_e8.b) & 1) != 0)
                    goto label_debfec
                
                goto label_debfc8
            
            operator delete(var_c0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_42
            
            if ((zx.d(var_e8.b) & 1) == 0)
            label_debfc8:
                x0_42 = var_108
                var_108 = nullptr
                
                if (x0_42 != 0)
                    (*(*x0_42 + 0x10))()
            else
            label_debfec:
                operator delete(var_d8)
                x0_42 = var_108
                var_108 = nullptr
                
                if (x0_42 != 0)
                    (*(*x0_42 + 0x10))()
        else
            Botan::SCAN_Name::arg(&var_a0)
            uint64_t x9_4 = zx.q(var_d0)
            int32_t x8_9 = x9_4.d & 1
            uint64_t var_c8
            uint64_t x9_6
            
            if (x8_9 == 0)
                x9_6 = x9_4 u>> 1
            else
                x9_6 = var_c8
            
            int32_t x20_1
            
            if (x9_6 != 4)
                x20_1 = 0
                
                if ((x8_9 & 0xff) != 0)
                    operator delete(var_c0)
            else
                x20_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_d0, 0, -ffffffffffffffff, "MGF1") == 0 ? 1 : 0
                
                if ((zx.d(var_d0) & 1) != 0)
                    operator delete(var_c0)
            
            if ((x20_1 & 1) != 0)
                goto label_debd94
            
            x8_8 = ((var_68 - var_70) s>> 3) * -0x5555555555555555
        label_debde4:
            
            if ((x8_8 & 0xfffffffffffffffe) != 2)
            label_dec1b8:
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    * x0_58 = __cxa_allocate_exception(0x20)
                Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_58)
                __cxa_throw(x0_58, _typeinfo_for_Botan::Algorithm_Not_Found, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::SCAN_Name::arg(&var_a0)
            Botan::parse_algorithm_name(&var_e8)
            
            if ((zx.d(var_e8.b) & 1) != 0)
                operator delete(var_d8)
            
            char* x20_3 = var_d0.q
            uint64_t x24_1 = var_c8
            int32_t x22_2
            
            if (x24_1 - x20_3 != 0x30)
                if (x20_3 == 0)
                    goto label_dec1b8
                
                x22_2 = 1
                
                if (x24_1 != x20_3)
                label_dec098:
                    uint64_t x23_2 = x24_1
                    
                    do
                        x23_2 -= 0x18
                        
                        if ((zx.d(*x23_2) & 1) != 0)
                            operator delete(*(x24_1 - 8))
                        
                        x24_1 = x23_2
                    while (x20_3 != x23_2)
            else
                uint64_t x8_22 = zx.q(*x20_3)
                uint64_t x8_23
                
                if ((x8_22.d & 1) == 0)
                    x8_23 = x8_22 u>> 1
                else
                    x8_23 = *(x20_3 + 8)
                
                if (x8_23 != 4)
                label_dec08c:
                    x22_2 = 1
                    
                    if (x24_1 != x20_3)
                        goto label_dec098
                else
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            x20_3, 0, -ffffffffffffffff, "MGF1") != 0)
                        goto label_dec08c
                    
                    Botan::SCAN_Name::arg(&var_a0)
                    var_108.w = 0
                    Botan::HashFunction::create(&var_e8, &var_108)
                    void* var_f8
                    
                    if ((zx.d(var_108.b) & 1) != 0)
                        operator delete(var_f8)
                    
                    if ((zx.d(var_e8.b) & 1) != 0)
                        operator delete(var_d8)
                    
                    var_e8 = 0
                    Botan::HashFunction::create(&x20_3[0x18], &var_e8)
                    
                    if ((zx.d(var_e8.b) & 1) != 0)
                        operator delete(var_d8)
                    
                    Botan::HashFunction* var_f0
                    Botan::HashFunction* x23_1 = var_f0
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * var_110
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * x22_1
                    
                    if (x23_1 != 0)
                        x22_1 = var_110
                    
                    int32_t x22_3
                    
                    if (x23_1 == 0 || x22_1 == 0)
                        x22_3 = 1
                    else
                        entry_result = operator new(0x28)
                        var_f0 = nullptr
                        var_110 = nullptr
                        var_108.w = 0
                        
                        if (((var_68 - var_70) s>> 3) * -0x5555555555555555 u<= 2)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_e8)
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_e8)
                        
                        Botan::OAEP::OAEP(entry_result, x23_1, x22_1)
                        
                        if ((zx.d(var_e8.b) & 1) != 0)
                            operator delete(var_d8)
                        
                        if ((zx.d(var_108.b) & 1) != 0)
                            operator delete(var_f8)
                        
                        x22_3 = 0
                    
                    int64_t var_110_1 = 0
                    
                    if (var_110 != 0)
                        (*(*var_110 + 0x10))()
                    
                    int64_t var_f0_1 = 0
                    
                    if (var_f0 != 0)
                        (*(*var_f0 + 0x10))()
                    
                    if ((x22_3 & 1) != 0)
                        goto label_dec08c
                    
                    x22_2 = 0
                    
                    if (x24_1 != x20_3)
                        goto label_dec098
            
            operator delete(x20_3)
            
            if ((x22_2 & 1) != 0)
                goto label_dec1b8
        void* var_58
        
        if (var_58 != 0)
            char* var_50
            char* x8_42 = var_50
            void* x0_52
            
            if (x8_42 == var_58)
                x0_52 = var_58
            else
                char* x20_4 = x8_42
                
                do
                    x20_4 = &x20_4[-0x18]
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(x8_42 - 8))
                    
                    x8_42 = x20_4
                while (var_58 != x20_4)
                
                x0_52 = var_58
            
            void* var_50_1 = var_58
            operator delete(x0_52)
        
        if (var_70 != 0)
            char* x8_43 = var_68
            void* x0_54
            
            if (x8_43 == var_70)
                x0_54 = var_70
            else
                char* x20_5 = x8_43
                
                do
                    x20_5 = &x20_5[-0x18]
                    
                    if ((zx.d(*x20_5) & 1) != 0)
                        operator delete(*(x8_43 - 8))
                    
                    x8_43 = x20_5
                while (var_70 != x20_5)
                
                x0_54 = var_70
            
            void* var_68_1 = var_70
            operator delete(x0_54)
        
        void* var_78
        
        if ((zx.d(var_88) & 1) != 0)
            operator delete(var_78)
        void* var_90
        
        if ((zx.d(var_a0) & 1) != 0)
            operator delete(var_90)
return entry_result
