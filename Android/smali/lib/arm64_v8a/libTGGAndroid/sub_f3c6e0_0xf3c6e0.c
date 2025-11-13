// 函数: sub_f3c6e0
// 地址: 0xf3c6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
int64_t* x20 = **(arg1 + 0x10)
void* x0_1 =
    __dynamic_cast(x20, _typeinfo_for_Botan::Private_Key, _typeinfo_for_Botan::RSA_PrivateKey, 0)
void* var_58
int64_t var_40
int32_t var_38
void* x19_4

if (x0_1 == 0)
    void* x0_16 = __dynamic_cast(x20, _typeinfo_for_Botan::Private_Key, 
        _typeinfo_for_Botan::DL_Scheme_PrivateKey, -1)
    
    if (x0_16 == 0)
        if (__dynamic_cast(x20, _typeinfo_for_Botan::Private_Key, 
                _typeinfo_for_Botan::EC_PrivateKey, -1) == 0)
            sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
        else
            uint64_t x8_9 = zx.q(x22[1].b)
            uint64_t x8_10
            
            if ((x8_9.d & 1) == 0)
                x8_10 = x8_9 u>> 1
            else
                x8_10 = x22[2]
            
            if (x8_10 != 1)
                sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
            else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &x22[1], 0, -ffffffffffffffff, &data_785330) == 0)
                x19_4 = Botan::EC_PrivateKey::private_value()
            label_f3caa4:
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
                var_40 = *(x19_4 + 0x18)
                var_38 = *(x19_4 + 0x20)
            else
                sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
    else
        uint64_t x8_5 = zx.q(x22[1].b)
        uint64_t x8_6
        
        if ((x8_5.d & 1) == 0)
            x8_6 = x8_5 u>> 1
        else
            x8_6 = x22[2]
        
        if (x8_6 != 1)
            sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
        else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &x22[1], 0, -ffffffffffffffff, &data_785330) != 0)
            sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
        else
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
            var_40 = *(x0_16 + 0x20)
            var_38 = *(x0_16 + 0x28)
else
    uint64_t x10_1 = zx.q(x22[1].b)
    uint64_t x8_1 = x22[2]
    int32_t x9_1 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_1 == 0 ? x10_2 : x8_1
    
    if (x11_1 != 1)
        goto label_f3c770
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &x22[1], 0, -ffffffffffffffff, &data_774d4b) == 0)
        void* x19_2 = *(x0_1 + 0x20)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
        var_40 = *(x19_2 + 0x40)
        var_38 = *(x19_2 + 0x48)
    else
        uint64_t x10_3 = zx.q(x22[1].b)
        x8_1 = x22[2]
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_f3c770:
        uint64_t x11_2
        
        if ((x9_1 & 0xff) == 0)
            x11_2 = x10_2
        else
            x11_2 = x8_1
        
        if (x11_2 != 1)
            goto label_f3c7b0
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &x22[1], 0, -ffffffffffffffff, &data_754d2f) == 0)
            void* x19_3 = *(x0_1 + 0x20)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
            var_40 = *(x19_3 + 0x68)
            var_38 = *(x19_3 + 0x70)
        else
            uint64_t x10_4 = zx.q(x22[1].b)
            x8_1 = x22[2]
            x9_1 = x10_4.d & 1
            x10_2 = x10_4 u>> 1
        label_f3c7b0:
            uint64_t x11_3
            
            if ((x9_1 & 0xff) == 0)
                x11_3 = x10_2
            else
                x11_3 = x8_1
            
            if (x11_3 == 1)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &x22[1], 0, -ffffffffffffffff, &data_78e9c1) == 0)
                    x19_4 = *(x0_1 + 0x20)
                    goto label_f3caa4
                
                uint64_t x10_5 = zx.q(x22[1].b)
                x8_1 = x22[2]
                x9_1 = x10_5.d & 1
                x10_2 = x10_5 u>> 1
            
            uint64_t x11_4
            
            if ((x9_1 & 0xff) == 0)
                x11_4 = x10_2
            else
                x11_4 = x8_1
            
            if (x11_4 != 1)
                goto label_f3c830
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &x22[1], 0, -ffffffffffffffff, &data_77c7b1) == 0)
                void* x19_5 = *(x0_1 + 0x20)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
                var_40 = *(x19_5 + 0xe0)
                var_38 = *(x19_5 + 0xe8)
            else
                uint64_t x10_6 = zx.q(x22[1].b)
                x8_1 = x22[2]
                x9_1 = x10_6.d & 1
                x10_2 = x10_6 u>> 1
            label_f3c830:
                uint64_t x11_5
                
                if ((x9_1 & 0xff) == 0)
                    x11_5 = x10_2
                else
                    x11_5 = x8_1
                
                if (x11_5 != 2)
                    goto label_f3c870
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &x22[1], 0, -ffffffffffffffff, 0x7a32f4) == 0)
                    void* x19_6 = *(x0_1 + 0x20)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &var_58)
                    var_40 = *(x19_6 + 0x90)
                    var_38 = *(x19_6 + 0x98)
                else
                    uint64_t x10_7 = zx.q(x22[1].b)
                    x8_1 = x22[2]
                    x9_1 = x10_7.d & 1
                    x10_2 = x10_7 u>> 1
                label_f3c870:
                    uint64_t x8_2
                    
                    if ((x9_1 & 0xff) == 0)
                        x8_2 = x10_2
                    else
                        x8_2 = x8_1
                    
                    if (x8_2 != 2)
                        sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
                    else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &x22[1], 0, -ffffffffffffffff, 0x781ac9) != 0)
                        sub_f3bdd4(&var_58, x20 + *(*x20 - 0x88), &x22[1])
                    else
                        void* x19_1 = *(x0_1 + 0x20)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                            &var_58)
                        var_40 = *(x19_1 + 0xb8)
                        var_38 = *(x19_1 + 0xc0)
int64_t* x0_26 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x22)
void* var_50_1
int64_t var_48
void* x0_27

if (x0_26 == &var_58)
    x0_27 = var_58
    
    if (x0_27 != 0)
        var_50_1 = x0_27
        Botan::deallocate_memory(x0_27, (var_48 - x0_27) s>> 2, 4)
else
    x0_27 = *x0_26
    *x0_26 = var_58
    var_58 = x0_27
    int64_t x11_6 = x0_26[2]
    int64_t x10_10 = x0_26[3]
    int64_t var_50
    x0_26[1] = var_50
    x0_26[2] = var_48
    x0_26[3] = var_40
    int64_t var_40_1 = x10_10
    x0_26[4].d = var_38
    int32_t var_38_1 = x0_26[4].d
    
    if (x0_27 != 0)
        var_50_1 = x0_27
        Botan::deallocate_memory(x0_27, (x11_6 - x0_27) s>> 2, 4)
return 0
