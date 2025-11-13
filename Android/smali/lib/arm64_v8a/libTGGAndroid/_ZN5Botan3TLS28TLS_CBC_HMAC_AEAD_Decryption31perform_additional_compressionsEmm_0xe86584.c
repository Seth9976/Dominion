// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Decryption31perform_additional_compressionsEmm
// 地址: 0xe86584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 0x70)

if (x0 != 0)
    (*(*(x0 + 8) + 0x20))()
    char var_48
    uint64_t x9_2 = zx.q(var_48)
    int32_t x8_2 = x9_2.d & 1
    uint64_t x9_4
    uint64_t var_40
    
    if (x8_2 == 0)
        x9_4 = x9_2 u>> 1
    else
        x9_4 = var_40
    int32_t x22_1
    void* var_38
    
    if (x9_4 != 0xd)
        x22_1 = 0
        
        if ((x8_2 & 0xff) != 0)
            operator delete(var_38)
    else
        x22_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "HMAC(SHA-384)") == 0 ? 1 : 0
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
    int32_t x8_5
    
    x8_5 = x22_1 != 0 ? 0x6f : 0x37
    
    int16_t x9_5 = (*(arg1 + 0x50)).w
    int32_t x10_2
    
    x10_2 = x22_1 != 0 ? 0x80 : 0x40
    
    int32_t x13_2 = x10_2 + not.d(x8_5)
    int32_t x11_3 = (x13_2 + zx.d(arg2.w + 0xd - x9_5)) s/ x10_2
    int16_t entry_x2
    int32_t x9_8 = (x13_2 + zx.d(arg2.w + 0xd - entry_x2 - x9_5)) s/ x10_2
    int32_t x9_9 = x9_8 ^ x11_3
    uint64_t x21_2 =
        zx.q((x11_3.w - x9_8.w) * x10_2.w + ((((x9_9 - 1) & not.d(x9_9)) u>> 0xf).w & 1) * x8_5.w)
    int64_t* x0_7
    void* x20_2
    void* x22_2
    
    if (x21_2.d == 0)
        x20_2 = nullptr
        x22_2 = nullptr
        x0_7 = *(arg1 + 0x70)
        
        if (x0_7 != 0)
        label_e866c0:
            int64_t result = (*(*x0_7 + 0x18))(x0_7, x20_2, x22_2 - x20_2)
            
            if (x20_2 == 0)
                return result
            
            return operator delete(x20_2)
        
        Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
    else
        void* x0_6 = operator new(x21_2)
        x20_2 = x0_6
        x22_2 = x0_6 + x21_2
        memset(x0_6, 0, x21_2)
        x0_7 = *(arg1 + 0x70)
        
        if (x0_7 != 0)
            goto label_e866c0
        
        Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)

sub_c776cc(Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665))
noreturn
