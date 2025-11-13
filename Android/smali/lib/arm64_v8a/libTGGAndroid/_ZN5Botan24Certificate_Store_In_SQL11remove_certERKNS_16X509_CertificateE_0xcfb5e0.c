// 函数: _ZN5Botan24Certificate_Store_In_SQL11remove_certERKNS_16X509_CertificateE
// 地址: 0xcfb5e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg1 + 0x10))(arg1, Botan::X509_Certificate::data() + 0x90, 
    Botan::X509_Certificate::data() + 0x280)
int64_t var_60
int64_t x22 = var_60
int64_t* var_58

if (var_58 == 0)
label_cfb648:
    
    if (x22 != 0)
    label_cfb64c:
        int64_t* x21_2 = *(arg1 + 0x10)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "DELETE FROM ", arg1 + 0x20)
        char var_78
        int128_t* x0_6
        int128_t v0_1
        x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_78)
        void* x8_2 = x0_6[1].q
        var_60.o = *x0_6
        __builtin_memset(x0_6, 0, 0x18)
        (**x21_2)(x21_2, &var_60)
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(x8_2)
        
        void* var_68
        
        if ((zx.d(var_78) & 1) != 0)
            operator delete(var_68)
        
        var_78 = 0xe
        int32_t var_77
        __builtin_strncpy(&var_77, "SHA-256", 8)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * entry_x1
        Botan::X509_Certificate::fingerprint(entry_x1)
        int64_t* var_40
        (**var_40)(var_40, 1, &var_60)
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(x8_2)
        
        if ((zx.d(var_78) & 1) != 0)
            operator delete(var_68)
        
        (*(*var_40 + 0x40))()
        int64_t* var_38
        
        if (var_38 != 0)
            int64_t x9_3
            int32_t i
            
            do
                x9_3 = __ldaxr(&var_38[1])
                i = __stlxr(x9_3 - 1, &var_38[1])
            while (i != 0)
            
            if (x9_3 == 0)
                (*(*var_38 + 0x10))(var_38)
                std::__ndk1::__shared_weak_count::__release_weak()
else
    int64_t x9_1
    int32_t i_1
    
    do
        x9_1 = __ldaxr(&var_58[1])
        i_1 = __stlxr(x9_1 - 1, &var_58[1])
    while (i_1 != 0)
    
    if (x9_1 != 0)
        goto label_cfb648
    
    (*(*var_58 + 0x10))(var_58)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (x22 != 0)
        goto label_cfb64c

return zx.q(x22 != 0 ? 1 : 0)
