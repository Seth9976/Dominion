// 函数: _Z10Specialistv
// 地址: 0xa19620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_29, std::__ndk1::allocator<Specialist()::$_29>, void ()>::VTable
    * const* result = MayPlayActionOrTreasureFromHand(1, 0xdf)

if (result.d != 0)
    int32_t x19_1 = result.d
    int128_t var_e0
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_29, std::__ndk1::allocator<Specialist()::$_29>, void ()>::VTable
        * const var_a0
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_30, std::__ndk1::allocator<Specialist()::$_30>, void ()>::VTable
        * const var_60
    
    if ((CanGainCopy(result) & 1) == 0)
        var_a0 = &_vtable_for_std::__ndk1::__function::__func<Specialist()::$_31, std::__ndk1::allocator<Specialist()::$_31>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        __builtin_memset(&var_e0, 0, 0x30)
        var_60 = &_vtable_for_std::__ndk1::__function::__func<Specialist()::$_32, std::__ndk1::allocator<Specialist()::$_32>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        int64_t var_70_2 = 0xa6
        int32_t var_98_2 = x19_1
        int32_t var_58_2 = x19_1
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_29, std::__ndk1::allocator<Specialist()::$_29>, void ()>::VTable
            ** result_2 = &var_a0
        var_e0.d = 0xe1
        int128_t var_d0_1
        var_d0_1:0xc.d = x19_1
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_30, std::__ndk1::allocator<Specialist()::$_30>, void ()>::VTable
            * const* var_40_2 = &var_60
        int64_t var_30_2 = 0xa8
        int128_t var_c0_1
        var_c0_1:8.q = 0
        int64_t var_b0_2 = 0
        ChooseOne(&var_a0, 2, &var_e0)
        
        if (&var_60 == var_40_2)
            (*var_40_2)->vFunc_4()
        else if (var_40_2 != 0)
            (*var_40_2)->j_operator delete()
        
        result = result_2
        
        if (&var_a0 == result)
            return (*result)->vFunc_4(result)
        
        if (result != 0)
            return (*result)->j_operator delete(result)
    else
        var_a0 = &_vtable_for_std::__ndk1::__function::__func<Specialist()::$_29, std::__ndk1::allocator<Specialist()::$_29>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        __builtin_memset(&var_e0, 0, 0x30)
        var_60 = &_vtable_for_std::__ndk1::__function::__func<Specialist()::$_30, std::__ndk1::allocator<Specialist()::$_30>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        int64_t var_70_1 = 0xa6
        int32_t var_98_1 = x19_1
        int32_t var_58_1 = x19_1
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_29, std::__ndk1::allocator<Specialist()::$_29>, void ()>::VTable
            * const* result_1 = &var_a0
        var_e0.d = 0xe0
        int128_t var_d0
        var_d0:0xc.d = x19_1
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Specialist()::$_30, std::__ndk1::allocator<Specialist()::$_30>, void ()>::VTable
            * const* var_40_1 = &var_60
        int64_t var_30_1 = 0xa7
        int128_t var_c0
        var_c0:8.q = 0
        int64_t var_b0_1 = 0
        ChooseOne(&var_a0, 2, &var_e0)
        
        if (&var_60 == var_40_1)
            (*var_40_1)->vFunc_4()
        else if (var_40_1 != 0)
            (*var_40_1)->j_operator delete()
        
        result = result_1
        
        if (&var_a0 == result)
            return (*result)->vFunc_4(result)
        
        if (result != 0)
            return (*result)->j_operator delete(result)

return result
