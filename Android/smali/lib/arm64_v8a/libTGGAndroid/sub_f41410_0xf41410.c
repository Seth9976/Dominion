// 函数: sub_f41410
// 地址: 0xf41410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char* x21_1

if (*(arg1 + 8) != 0)
    x21_1 = *(arg1 + 0x10)

if (*(arg1 + 8) == 0 || x21_1 == 0 || *(arg1 + 0x18) == 0)
    if (*(x25 + 0x28) == x8)
        return 0xffffffe1
else
    struct Botan::RandomNumberGenerator::botan_rng_init_custom::$_187::operator()() const::Custom_RNG::VTable
        ** x0 = operator new(0xc0)
    size_t x0_2 = strlen(x21_1)
    
    if (x0_2 u>= -0x10)
        int64_t* x0_17 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        (*x0)->vFunc_1(x0)
        sub_1101e04(x0_17)
        noreturn
    
    int64_t var_98
    void* var_88
    void* x23_1
    
    if (x0_2 u>= 0x17)
        uint64_t x24_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
        void* x0_5 = operator new(x24_1)
        x23_1 = x0_5
        size_t var_90_1 = x0_2
        var_88 = x0_5
        var_98 = x24_1 | 1
        memcpy(x23_1, x21_1, x0_2)
    else
        x23_1 = &var_98 | 1
        var_98.b = (x0_2.d << 1).b
        
        if (x0_2 != 0)
            memcpy(x23_1, x21_1, x0_2)
    
    *(x23_1 + x0_2) = 0
    int64_t x23_2 = *(arg1 + 0x18)
    int64_t x24_2 = *(arg1 + 0x20)
    int64_t x22_2 = *(arg1 + 0x28)
    int64_t x21_2 = *(arg1 + 0x30)
    *x0 = &_vtable_for_botan_rng_init_custom::$_187::operator()() const::Custom_RNG{for `Botan::RandomNumberGenerator'}
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    x0[0xa] = 0
    x0[0x10] = 0
    x0[0x16] = 0
    x0[4] = x24_2
    int64_t* var_60_1 = nullptr
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<int32_t (*)(void*, uint8_t*, uint64_t), std::__ndk1::allocator<int32_t (*)(void*, uint8_t*, uint64_t)>, int32_t (void*, uint8_t*, uint64_t)>, 
        0x10) var_80
    
    if (x23_2 != 0)
        var_60_1 = &var_80
        var_80 = _vtable_for_std::__ndk1::__function::__func<int32_t (*)(void*, uint8_t*, uint64_t), std::__ndk1::allocator<int32_t (*)(void*, uint8_t*, uint64_t)>, int32_t (void*, uint8_t*, uint64_t)>
            + 0x10
        int64_t var_78_1 = x23_2
    
    sub_f41c08(&var_80, &x0[6])
    
    if (&var_80 == var_60_1)
        (*(*var_60_1 + 0x20))()
    else if (var_60_1 != 0)
        (*(*var_60_1 + 0x28))()
    
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<int32_t (*)(void*, uint8_t*, uint64_t), std::__ndk1::allocator<int32_t (*)(void*, uint8_t*, uint64_t)>, int32_t (void*, uint8_t*, uint64_t)>, 
        0x10)* var_60_2 = nullptr
    
    if (x22_2 != 0)
        var_60_2 = &var_80
        var_80 = _vtable_for_std::__ndk1::__function::__func<int32_t (*)(void*, uint8_t const*, uint64_t), std::__ndk1::allocator<int32_t (*)(void*, uint8_t const*, uint64_t)>, int32_t (void*, uint8_t const*, uint64_t)>
            + 0x10
        int64_t var_78_2 = x22_2
    
    sub_f41e14(&var_80, &x0[0xc])
    
    if (&var_80 == var_60_2)
        (*(*var_60_2 + 0x20))()
    else if (var_60_2 != 0)
        (*(*var_60_2 + 0x28))()
    
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<int32_t (*)(void*, uint8_t*, uint64_t), std::__ndk1::allocator<int32_t (*)(void*, uint8_t*, uint64_t)>, int32_t (void*, uint8_t*, uint64_t)>, 
        0x10)* var_60_3 = nullptr
    
    if (x21_2 != 0)
        var_60_3 = &var_80
        var_80 = _vtable_for_std::__ndk1::__function::__func<void (*)(void*), std::__ndk1::allocator<void (*)(void*)>, void (void*)>
            + 0x10
        int64_t var_78_3 = x21_2
    
    sub_f42018(&var_80, &x0[0x12])
    
    if (&var_80 == var_60_3)
        (*(*var_60_3 + 0x20))()
    else if (var_60_3 != 0)
        (*(*var_60_3 + 0x28))()
    
    if ((zx.d(var_98.b) & 1) != 0)
        operator delete(var_88)
    
    int64_t* x0_16 = operator new(0x18)
    x0_16[2] = x0
    x0_16[1].d = 0x4901f9c1
    *x0_16 = _vtable_for_botan_rng_struct + 0x10
    **(arg1 + 8) = x0_16
    
    if (*(x25 + 0x28) == x8)
        return 0

__stack_chk_fail()
noreturn
