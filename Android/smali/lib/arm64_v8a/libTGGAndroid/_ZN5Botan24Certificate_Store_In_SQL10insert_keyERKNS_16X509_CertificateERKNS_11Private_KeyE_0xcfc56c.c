// 函数: _ZN5Botan24Certificate_Store_In_SQL10insert_keyERKNS_16X509_CertificateERKNS_11Private_KeyE
// 地址: 0xcfc56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Certificate_Store_In_SQL::insert_cert(arg1)
Botan::Certificate_Store_In_SQL::find_key(arg1)
void* var_48
int64_t* var_40

if (var_40 == 0)
label_cfc5bc:
    
    if (var_48 == 0)
    label_cfc5c0:
        Botan::RandomNumberGenerator* x1_1 = *(arg1 + 8)
        int16_t var_60 = 0
        Botan::Private_Key* entry_x2
        Botan::PKCS8::BER_encode(entry_x2, x1_1, arg1 + 0x38, 0x12c, &var_60)
        void* var_50
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        
        char var_80 = 0xe
        int32_t var_7f
        __builtin_strncpy(&var_7f, "SHA-256", 8)
        Botan::Private_Key::fingerprint_private(entry_x2)
        void* var_70
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_70)
        int64_t* x22_1 = *(arg1 + 0x10)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "INSERT OR REPLACE INTO ", arg1 + 0x20)
        char var_a8
        int128_t* x0_6
        int128_t v0_1
        x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a8)
        void* x8_4 = x0_6[1].q
        var_80.o = *x0_6
        __builtin_memset(x0_6, 0, 0x18)
        (**x22_1)(x22_1, &var_80)
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(x8_4)
        
        void* var_98
        
        if ((zx.d(var_a8) & 1) != 0)
            operator delete(var_98)
        
        int64_t* var_90
        (**var_90)(var_90, 1, &var_60)
        (*(*var_90 + 0x20))(var_90, 2, var_48, var_40 - var_48)
        (*(*var_90 + 0x40))()
        int64_t* x20_1 = *(arg1 + 0x10)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "UPDATE ", arg1 + 0x20)
        int128_t* x0_14
        int128_t v0_2
        x0_14, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a8)
        void* x8_14 = x0_14[1].q
        var_80.o = *x0_14
        __builtin_memset(x0_14, 0, 0x18)
        (**x20_1)(x20_1, &var_80)
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(x8_14)
        
        if ((zx.d(var_a8) & 1) != 0)
            operator delete(var_98)
        
        int64_t* var_b8
        (**var_b8)(var_b8, 1, &var_60)
        var_a8 = 0xe
        int32_t var_a7
        __builtin_strncpy(&var_a7, "SHA-256", 8)
        Botan::X509_Certificate::fingerprint(arg2)
        (**var_b8)(var_b8, 2, &var_80)
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(x8_14)
        
        if ((zx.d(var_a8) & 1) != 0)
            operator delete(var_98)
        
        (*(*var_b8 + 0x40))()
        int64_t* var_b0
        
        if (var_b0 != 0)
            int64_t x9_5
            int32_t i
            
            do
                x9_5 = __ldaxr(&var_b0[1])
                i = __stlxr(x9_5 - 1, &var_b0[1])
            while (i != 0)
            
            if (x9_5 == 0)
                (*(*var_b0 + 0x10))(var_b0)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int64_t* var_88
        
        if (var_88 != 0)
            int64_t x9_6
            int32_t i_1
            
            do
                x9_6 = __ldaxr(&var_88[1])
                i_1 = __stlxr(x9_6 - 1, &var_88[1])
            while (i_1 != 0)
            
            if (x9_6 == 0)
                (*(*var_88 + 0x10))(var_88)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        
        if (var_48 != 0)
            void* var_40_1 = var_48
            operator delete(var_48)
else
    int64_t x9_1
    int32_t i_2
    
    do
        x9_1 = __ldaxr(&var_40[1])
        i_2 = __stlxr(x9_1 - 1, &var_40[1])
    while (i_2 != 0)
    
    if (x9_1 != 0)
        goto label_cfc5bc
    
    (*(*var_40 + 0x10))(var_40)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_48 == 0)
        goto label_cfc5c0

return zx.q(var_48 == 0 ? 1 : 0)
