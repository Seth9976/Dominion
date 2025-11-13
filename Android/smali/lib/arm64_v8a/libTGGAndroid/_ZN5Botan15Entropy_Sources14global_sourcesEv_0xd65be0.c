// 函数: _ZN5Botan15Entropy_Sources14global_sourcesEv
// 地址: 0xd65be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_23ec9c8) & 1) == 0 && __cxa_guard_acquire(&data_23ec9c8) != 0)
    char var_118_1 = 0xc
    int32_t var_117
    __builtin_strncpy(&var_117, "rdseed", 7)
    char var_100
    __builtin_strcpy(&var_100, "\nhwrng")
    char var_e8_1 = 0xe
    int32_t var_e7
    __builtin_strncpy(&var_e7, "p9_darn", 8)
    char var_d0_1 = 0x14
    char var_b8_1 = 0x14
    char var_a0_1 = 0x14
    int64_t var_b7
    __builtin_strncpy(&var_b7, "dev_random", 0xb)
    int64_t var_cf
    __builtin_strncpy(&var_cf, "getentropy", 0xb)
    char var_88_1 = 0x12
    int64_t var_50_1 = 0
    int64_t var_9f
    __builtin_strncpy(&var_9f, "system_rng", 0xb)
    int64_t var_87
    __builtin_strcpy(&var_87, "proc_walk")
    char var_70_1 = 0x18
    int64_t var_6f
    __builtin_strncpy(&var_6f, "system_stats", 0xd)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3 = operator new(0xc0)
    void* x20_1 = x0_3
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_58_1 = x0_3
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0xc0) var_48_1 = x0_3 + 0xc0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x0_3)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x18)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x30)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x48)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x78)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0x90)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x20_1 + 0xa8)
    void* var_50_2 = x20_1 + 0xc0
    Botan::Entropy_Sources::Entropy_Sources(&data_23ecbe8)
    
    if ((zx.d(*(x20_1 + 0xa8)) & 1) == 0)
        if ((zx.d(*(x20_1 + 0x90)) & 1) != 0)
            goto label_d65ed8
        
        goto label_d65e18
    
    operator delete(*(x20_1 + 0xb8))
    
    if ((zx.d(*(x20_1 + 0x90)) & 1) != 0)
    label_d65ed8:
        operator delete(*(x20_1 + 0xa0))
        
        if ((zx.d(*(x20_1 + 0x78)) & 1) == 0)
            goto label_d65e20
        
        goto label_d65ee8
    
label_d65e18:
    
    if ((zx.d(*(x20_1 + 0x78)) & 1) == 0)
    label_d65e20:
        
        if ((zx.d(*(x20_1 + 0x60)) & 1) != 0)
            goto label_d65ef8
        
        goto label_d65e28
    
label_d65ee8:
    operator delete(*(x20_1 + 0x88))
    
    if ((zx.d(*(x20_1 + 0x60)) & 1) != 0)
    label_d65ef8:
        operator delete(*(x20_1 + 0x70))
        
        if ((zx.d(*(x20_1 + 0x48)) & 1) == 0)
            goto label_d65e30
        
        goto label_d65f08
    
label_d65e28:
    
    if ((zx.d(*(x20_1 + 0x48)) & 1) == 0)
    label_d65e30:
        
        if ((zx.d(*(x20_1 + 0x30)) & 1) != 0)
            goto label_d65f18
        
        goto label_d65e38
    
label_d65f08:
    operator delete(*(x20_1 + 0x58))
    
    if ((zx.d(*(x20_1 + 0x30)) & 1) != 0)
    label_d65f18:
        operator delete(*(x20_1 + 0x40))
        
        if ((zx.d(*(x20_1 + 0x18)) & 1) == 0)
            goto label_d65e40
        
        goto label_d65f28
    
label_d65e38:
    
    if ((zx.d(*(x20_1 + 0x18)) & 1) != 0)
    label_d65f28:
        operator delete(*(x20_1 + 0x28))
        
        if ((zx.d(*x20_1) & 1) != 0)
            operator delete(*(x20_1 + 0x10))
    else
    label_d65e40:
        
        if ((zx.d(*x20_1) & 1) != 0)
            operator delete(*(x20_1 + 0x10))
    
    void* var_50_3 = x20_1
    operator delete(x20_1)
    __cxa_atexit(Botan::Entropy_Sources::~Entropy_Sources, &data_23ecbe8, &data_1122730)
    __cxa_guard_release(&data_23ec9c8)

return &data_23ecbe8
