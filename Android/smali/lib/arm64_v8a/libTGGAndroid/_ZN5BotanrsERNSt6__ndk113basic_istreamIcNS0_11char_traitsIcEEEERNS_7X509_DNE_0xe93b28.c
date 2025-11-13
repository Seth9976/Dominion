// 函数: _ZN5BotanrsERNSt6__ndk113basic_istreamIcNS0_11char_traitsIcEEEERNS_7X509_DNE
// 地址: 0xe93b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = arg1 + *(*arg1 - 0x18)
*(x8_2 + 8) &= 0xffffefff

while (true)
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x30)
    int64_t var_78
    uint64_t var_70
    char var_34
    
    while (*(arg1 + 0x20 + *(*arg1 - 0x18)) == 0)
        std::__ndk1::operator>><char, std::__ndk1::char_traits<char> >(arg1, &var_34)
        uint32_t x1_1 = zx.d(var_34)
        
        if (x1_1 != 0x20 && x1_1 - 9 u> 4)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_78)
            break
        
        uint64_t x8_6 = zx.q(var_78.b)
        uint64_t x8_7
        
        if ((x8_6.d & 1) == 0)
            x8_7 = x8_6 u>> 1
        else
            x8_7 = var_70
        
        if (x8_7 != 0)
            break
    
    char var_60
    
    while (*(arg1 + 0x20 + *(*arg1 - 0x18)) == 0)
        std::__ndk1::operator>><char, std::__ndk1::char_traits<char> >(arg1, &var_34)
        uint32_t x1_3 = zx.d(var_34)
        
        if (x1_3 != 0x20 && x1_3 - 9 u>= 5)
            if (x1_3 == 0x3d)
                break
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_78)
            continue
        
        if (x1_3 == 0x3d)
            break
        
        void** x0_19 = __cxa_allocate_exception(0x20, x1_3)
        __builtin_strncpy(&var_60, "&Ill-formed X.509 DN", 0x15)
        *x0_19 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_19[1])
        *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    uint64_t var_88
    
    if (*(arg1 + 0x20 + *(*arg1 - 0x18)) == 0)
        int32_t x24_1 = 0
        
        do
            std::__ndk1::operator>><char, std::__ndk1::char_traits<char> >(arg1, &var_34)
            uint32_t x1_6 = zx.d(var_34)
            
            if (x1_6 == 0x20 || x1_6 - 9 u<= 4)
                if ((x24_1 & 1) == 0)
                    uint64_t x8_29 = zx.q(var_90.b)
                    uint64_t x8_30
                    
                    if ((x8_29.d & 1) == 0)
                        x8_30 = x8_29 u>> 1
                    else
                        x8_30 = var_88
                    
                    if (x8_30 != 0)
                        break
                    
                    x24_1 = 0
                else
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        &var_90)
                    x24_1 = 1
            else if (x1_6 == 0x5c)
                if (*(arg1 + 0x20 + *(*arg1 - 0x18)) == 0)
                    std::__ndk1::operator>><char, std::__ndk1::char_traits<char> >(arg1, &var_34)
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_90)
            else if (x1_6 == 0x2c)
                if ((x24_1 & 1) == 0)
                    break
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_90)
            else if (x1_6 != 0x22)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_90)
            else
                x24_1 ^= 1
        while (*(arg1 + 0x20 + *(*arg1 - 0x18)) == 0)
    
    uint64_t x10_2 = zx.q(var_78.b)
    uint64_t x9_3 = zx.q(var_90.b)
    int32_t x8_19 = x10_2.d & 1
    uint64_t x10_4
    
    if (x8_19 == 0)
        x10_4 = x10_2 u>> 1
    else
        x10_4 = var_70
    
    void* var_80
    void* var_68
    
    if (x10_4 != 0)
        uint64_t x10_6
        
        if ((x9_3.d & 1) == 0)
            x10_6 = x9_3 u>> 1
        else
            x10_6 = var_88
        
        if (x10_6 != 0)
            Botan::X509_DN::deref_info_field(&var_78)
            char var_a8
            Botan::OID::from_string(&var_a8)
            Botan::X509_DN::add_attribute(arg2, &var_60)
            int120_t var_5f
            void* x0_7 = var_5f:7.q
            var_60.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_7 != 0)
                int32_t var_50
                var_50.q = x0_7
                operator delete(x0_7)
            
            if ((zx.d(var_a8) & 1) == 0)
                if ((zx.d(var_90.b) & 1) != 0)
                    goto label_e93ce4
                
                goto label_e93cc8
            
            void* var_98
            operator delete(var_98)
            
            if ((zx.d(var_90.b) & 1) == 0)
            label_e93cc8:
                
                if ((zx.d(var_78.b) & 1) != 0)
                    operator delete(var_68)
            else
            label_e93ce4:
                operator delete(var_80)
                
                if ((zx.d(var_78.b) & 1) != 0)
                    operator delete(var_68)
            
            if (*(arg1 + 0x20 + *(*arg1 - 0x18)) != 0)
                break
            
            continue
    
    if ((x9_3.d & 1) != 0)
        operator delete(var_80)
        x8_19 = zx.d(var_78.b) & 1
    
    if ((x8_19 & 0xff) == 0)
        break
    
    operator delete(var_68)
    break

return arg1
