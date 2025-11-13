// 函数: _ZNK5Botan16X509_Certificate11fingerprintERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcfb478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x9 = zx.q(*entry_x1)
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(entry_x1 + 8)

if (x9_1 != 7)
label_cfb4cc:
    uint64_t x8 = zx.q(*entry_x1)
    uint64_t x8_1
    
    if ((x8.d & 1) == 0)
        x8_1 = x8 u>> 1
    else
        x8_1 = *(entry_x1 + 8)
    
    if (x8_1 != 5)
    label_cfb510:
        Botan::ASN1_Object::BER_encode()
        uint8_t* result
        int64_t var_30
        Botan::create_hex_fingerprint(result, var_30 - result, entry_x1)
        
        if (result == 0)
            return result
        
        uint8_t* result_1 = result
        return operator delete(result)
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x1, 0, -ffffffffffffffff, "SHA-1") != 0)
        goto label_cfb510
    
    void* x0_8 = Botan::X509_Certificate::data()
    uint64_t x8_6 = zx.q(*(x0_8 + 0x328))
    uint64_t x8_7
    
    if ((x8_6.d & 1) == 0)
        x8_7 = x8_6 u>> 1
    else
        x8_7 = *(x0_8 + 0x330)
    
    if (x8_7 == 0)
        goto label_cfb510
    
    Botan::X509_Certificate::data()
else
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x1, 0, -ffffffffffffffff, "SHA-256") != 0)
        goto label_cfb4cc
    
    void* x0_6 = Botan::X509_Certificate::data()
    uint64_t x8_4 = zx.q(*(x0_6 + 0x340))
    uint64_t x8_5
    
    if ((x8_4.d & 1) == 0)
        x8_5 = x8_4 u>> 1
    else
        x8_5 = *(x0_6 + 0x348)
    
    if (x8_5 == 0)
        goto label_cfb4cc
    
    Botan::X509_Certificate::data()

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    entry_x8) __tailcall
