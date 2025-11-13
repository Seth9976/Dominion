// 函数: _ZNK5Botan3TLS15Handshake_State21protocol_specific_prfEv
// 地址: 0xe601f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint32_t x8 = zx.d(*(entry_x0 + 0x20))
char var_28
int64_t result

if (x8 - 0x301 u< 2 || x8 == 0xfeff)
    var_28 = 0xe
    int32_t var_27
    __builtin_strncpy(&var_27, "TLS-PRF", 8)
    result = Botan::get_kdf(&var_28)
else
    Botan::TLS::kdf_algo_to_string(zx.q(*(entry_x0 + 0x40)))
    uint64_t x10_1 = zx.q(var_28)
    char var_20
    uint64_t x8_2 = var_20.q
    int32_t x9_1 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_1 == 0 ? x10_2 : x8_2
    
    if (x11_1 != 3)
        goto label_e602c4
    
    char var_40
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_28, 0, -ffffffffffffffff, &data_765085) == 0)
    label_e60370:
        __builtin_strncpy(&var_40, "&TLS-12-PRF(SHA-256)", 0x15)
        result = Botan::get_kdf(&var_40)
        int32_t var_30_1
        
        if ((zx.d(var_40) & 1) != 0)
            operator delete(var_30_1.q)
    else
        uint64_t x10_3 = zx.q(var_28)
        x8_2 = var_20.q
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_e602c4:
        uint64_t x8_3
        
        if ((x9_1 & 0xff) == 0)
            x8_3 = x10_2
        else
            x8_3 = x8_2
        
        int32_t x0_8
        
        if (x8_3 == 5)
            x0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_28, 0, -ffffffffffffffff, "SHA-1")
        
        if (x8_3 == 5 && x0_8 == 0)
            goto label_e60370
        
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "TLS-12-PRF(", &var_28)
        char var_58[0x10]
        int128_t* x0_10
        int128_t v0_1
        x0_10, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_58)
        int32_t var_30
        var_30.q = x0_10[1].q
        var_40.o = *x0_10
        __builtin_memset(x0_10, 0, 0x18)
        result = Botan::get_kdf(&var_40)
        
        if ((zx.d(var_40) & 1) != 0)
            operator delete(var_30.q)
        
        void* var_48
        
        if ((zx.d(var_58[0]) & 1) != 0)
            operator delete(var_48)

void* var_18

if ((zx.d(var_28) & 1) != 0)
    operator delete(var_18)
return result
