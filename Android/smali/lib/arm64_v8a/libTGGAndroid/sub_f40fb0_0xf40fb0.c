// 函数: sub_f40fb0
// 地址: 0xf40fb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21_1

if (*(arg1 + 8) == 0)
    x21_1 = -0x1f
else
    char* x8_1 = *(arg1 + 0x10)
    char* x21
    
    if (x8_1 == 0)
        x21 = "system"
    else
        x21 = x8_1
    
    size_t x0_1 = strlen(x21)
    
    if (x0_1 u>= -0x10)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
        noreturn
    
    int64_t var_48
    size_t var_40
    void* var_38
    void* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        var_40 = x0_1
        var_38 = x0_3
        var_48 = x23_1 | 1
        memcpy(x22_1, x21, x0_1)
    else
        x22_1 = &var_48 | 1
        var_48.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, x21, x0_1)
    
    *(x22_1 + x0_1) = 0
    uint64_t x10_1 = zx.q(var_48.b)
    size_t x8_5 = var_40
    int32_t x9_1 = x10_1.d & 1
    size_t x10_2 = x10_1 u>> 1
    size_t x11_1
    
    x11_1 = x9_1 == 0 ? x10_2 : x8_5
    
    if (x11_1 != 6)
        goto label_f410a0
    
    void** x0_15
    struct vtable_for_Botan::Null_RNG* const x8_8
    void** x20_2
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "system") == 0)
        x0_15 = operator new(8)
        x8_8 = _vtable_for_Botan::System_RNG
    label_f411a8:
        x20_2 = x0_15
        *x20_2 = x8_8 + 0x10
    label_f411b8:
        int64_t* x0_16 = operator new(0x18)
        x0_16[2] = x20_2
        x0_16[1].d = 0x4901f9c1
        *x0_16 = _vtable_for_botan_rng_struct + 0x10
        x21_1 = 0
        **(arg1 + 8) = x0_16
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
    else
        uint64_t x10_3 = zx.q(var_48.b)
        x8_5 = var_40
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_f410a0:
        size_t x11_2
        
        if ((x9_1 & 0xff) == 0)
            x11_2 = x10_2
        else
            x11_2 = x8_5
        
        if (x11_2 != 4)
            goto label_f410e0
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "user") == 0)
        label_f41164:
            x20_2 = operator new(0x10)
            Botan::system_rng()
            Botan::AutoSeeded_RNG::AutoSeeded_RNG(x20_2, &data_23ecbc0)
            goto label_f411b8
        
        uint64_t x10_4 = zx.q(var_48.b)
        x8_5 = var_40
        x9_1 = x10_4.d & 1
        x10_2 = x10_4 u>> 1
    label_f410e0:
        size_t x11_3
        
        if ((x9_1 & 0xff) == 0)
            x11_3 = x10_2
        else
            x11_3 = x8_5
        
        if (x11_3 != 0xf)
            goto label_f41120
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_48, 0, -ffffffffffffffff, "user-threadsafe") == 0)
            goto label_f41164
        
        uint64_t x10_5 = zx.q(var_48.b)
        x8_5 = var_40
        x9_1 = x10_5.d & 1
        x10_2 = x10_5 u>> 1
    label_f41120:
        size_t x8_6
        
        if ((x9_1 & 0xff) == 0)
            x8_6 = x10_2
        else
            x8_6 = x8_5
        
        int32_t x0_12
        
        if (x8_6 == 4)
            x0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_48, 0, -ffffffffffffffff, "null")
        
        if (x8_6 == 4 && x0_12 == 0)
            x0_15 = operator new(8)
            x8_8 = _vtable_for_Botan::Null_RNG
            goto label_f411a8
        
        x21_1 = -0x28
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)

return zx.q(x21_1)
