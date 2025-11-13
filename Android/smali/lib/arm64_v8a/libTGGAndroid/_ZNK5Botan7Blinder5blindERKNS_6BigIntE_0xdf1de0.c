// 函数: _ZNK5Botan7Blinder5blindERKNS_6BigIntE
// 地址: 0xdf1de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_60

if (*(arg1 + 0x50) == 0)
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0_4
    x0_13, v0_4 = operator new(0x30)
    v0_4 = data_71b5a0
    int64_t var_50_2 = x0_13
    __builtin_strncpy(x0_13, "Blinder not initialized, cannot blind", 0x26)
    var_60 = v0_4
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x8_1 = *(arg1 + 0x118) + 1
*(arg1 + 0x118) = x8_1

if (x8_1 u< 0x41)
    Botan::Modular_Reducer::square(arg1)
    int64_t var_50
    int64_t var_48
    int32_t var_40
    void* x0_4
    
    if (arg1 + 0xc8 == &var_60)
        x0_4 = var_60.q
        
        if (x0_4 != 0)
            var_60:8.q = x0_4
            Botan::deallocate_memory(x0_4, (var_50 - x0_4) s>> 2, 4)
    else
        x0_4 = *(arg1 + 0xc8)
        var_60.q = x0_4
        *(arg1 + 0xc8) = var_60
        int64_t x11_2 = *(arg1 + 0xd8)
        int64_t x9_4 = *(arg1 + 0xe0)
        *(arg1 + 0xd8) = var_50
        *(arg1 + 0xe0) = var_48
        var_50 = x11_2
        var_48 = x9_4
        int32_t x9_5 = *(arg1 + 0xe8)
        *(arg1 + 0xe8) = var_40
        var_40 = x9_5
        
        if (x0_4 != 0)
            var_60:8.q = x0_4
            Botan::deallocate_memory(x0_4, (var_50 - x0_4) s>> 2, 4)
    Botan::Modular_Reducer::square(arg1)
    void* x0_6
    
    if (arg1 + 0xf0 == &var_60)
        x0_6 = var_60.q
        
        if (x0_6 != 0)
            var_60:8.q = x0_6
            Botan::deallocate_memory(x0_6, (var_50 - x0_6) s>> 2, 4)
    else
        x0_6 = *(arg1 + 0xf0)
        var_60.q = x0_6
        *(arg1 + 0xf0) = var_60
        int64_t x12_1 = *(arg1 + 0x100)
        int64_t x10_3 = *(arg1 + 0x108)
        *(arg1 + 0x100) = var_50
        *(arg1 + 0x108) = var_48
        int64_t var_48_2 = x10_3
        int32_t x10_4 = *(arg1 + 0x110)
        *(arg1 + 0x110) = var_40
        int32_t var_40_2 = x10_4
        
        if (x0_6 != 0)
            var_60:8.q = x0_6
            Botan::deallocate_memory(x0_6, (x12_1 - x0_6) s>> 2, 4)
else
    uint64_t x1 = *(arg1 + 0x58)
    char x8_2 = (*(arg1 + 0xc0)).b
    __builtin_memset(&var_60, 0, 0x18)
    int64_t var_48_1 = -1
    int32_t var_40_1 = 1
    Botan::BigInt::randomize(&var_60, x1, x8_2 - 1)
    int64_t* x0_1 = *(arg1 + 0x80)
    
    if (x0_1 == 0)
        sub_a58ab4()
        noreturn
    
    (*(*x0_1 + 0x30))(x0_1, &var_60)
    void* var_90
    int64_t var_80
    int64_t var_78
    int32_t var_70
    void* var_88_1
    void* x0_2
    
    if (arg1 + 0xc8 == &var_90)
        x0_2 = var_90
        
        if (x0_2 != 0)
            var_88_1 = x0_2
            Botan::deallocate_memory(x0_2, (var_80 - x0_2) s>> 2, 4)
    else
        x0_2 = *(arg1 + 0xc8)
        int128_t v0 = var_90.o
        var_90 = x0_2
        *(arg1 + 0xc8) = v0
        int64_t x11_1 = *(arg1 + 0xd8)
        int64_t x9_2 = *(arg1 + 0xe0)
        *(arg1 + 0xd8) = var_80
        *(arg1 + 0xe0) = var_78
        var_80 = x11_1
        var_78 = x9_2
        int32_t x9_3 = *(arg1 + 0xe8)
        *(arg1 + 0xe8) = var_70
        var_70 = x9_3
        
        if (x0_2 != 0)
            var_88_1 = x0_2
            Botan::deallocate_memory(x0_2, (var_80 - x0_2) s>> 2, 4)
    int64_t* x0_7 = *(arg1 + 0xb0)
    
    if (x0_7 == 0)
        sub_a58ab4()
        noreturn
    
    (*(*x0_7 + 0x30))(x0_7, &var_60)
    void* var_88_2
    void* x0_8
    
    if (arg1 + 0xf0 == &var_90)
        x0_8 = var_90
        
        if (x0_8 != 0)
            var_88_2 = x0_8
            Botan::deallocate_memory(x0_8, (var_80 - x0_8) s>> 2, 4)
    else
        x0_8 = *(arg1 + 0xf0)
        int128_t v0_3 = var_90.o
        var_90 = x0_8
        *(arg1 + 0xf0) = v0_3
        int64_t x12_2 = *(arg1 + 0x100)
        int64_t x10_5 = *(arg1 + 0x108)
        *(arg1 + 0x100) = var_80
        *(arg1 + 0x108) = var_78
        int64_t var_78_1 = x10_5
        int32_t x10_6 = *(arg1 + 0x110)
        *(arg1 + 0x110) = var_70
        int32_t var_70_1 = x10_6
        
        if (x0_8 != 0)
            var_88_2 = x0_8
            Botan::deallocate_memory(x0_8, (x12_2 - x0_8) s>> 2, 4)
    *(arg1 + 0x118) = 0
    void* x0_9 = var_60.q
    
    if (x0_9 != 0)
        var_60:8.q = x0_9
        int64_t var_50_1
        Botan::deallocate_memory(x0_9, (var_50_1 - x0_9) s>> 2, 4)

Botan::BigInt* entry_x1
return Botan::Modular_Reducer::multiply(arg1, entry_x1)
