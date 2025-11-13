// 函数: _Z10Prince_Oldv
// 地址: 0xab16b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Prince_Old()::$_13, std::__ndk1::allocator<Prince_Old()::$_13>, void ()>::VTable
    * const* result = CheckStopMoving(ThisCard(false, nullptr), 0x3e9)

if ((result.d & 1) == 0)
    CardsHand()
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prince_Old()::$_12, std::__ndk1::allocator<Prince_Old()::$_12>, bool (CardID)>::VTable
        * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Prince_Old()::$_12, std::__ndk1::allocator<Prince_Old()::$_12>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prince_Old()::$_12, std::__ndk1::allocator<Prince_Old()::$_12>, bool (CardID)>::VTable
        * const* var_cc0_1 = &var_ce0
    CardIDs var_ca8
    FilterCards(&var_ce0, &var_ca8, nullptr)
    
    if (&var_ce0 == var_cc0_1)
        (*var_cc0_1)->vFunc_4()
    else if (var_cc0_1 != 0)
        (*var_cc0_1)->j_operator delete()
    
    int32_t var_28
    int128_t var_19a0
    
    if (var_28 == 0)
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Prince_Old()::$_13, std::__ndk1::allocator<Prince_Old()::$_13>, void ()>::VTable
            * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<Prince_Old()::$_13, std::__ndk1::allocator<Prince_Old()::$_13>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Prince_Old()::$_13, std::__ndk1::allocator<Prince_Old()::$_13>, void ()>::VTable
            * const* result_1 = &var_d10
        __builtin_memset(&var_19a0, 0, 0x38)
        May(&var_d10, 0x8b, &var_19a0)
        result = result_1
        
        if (&var_d10 == result)
            return (*result)->vFunc_4()
        
        if (result != 0)
            return (*result)->j_operator delete()
    else
        __builtin_memset(&var_19a0, 0, 0x30)
        var_19a0.d = 0x103
        int128_t var_1990
        var_1990:0xc.d = 0
        int128_t var_1980
        var_1980:8.q = 0
        int64_t var_1970_1 = 0
        result = MayChooseCard(&var_ca8, 1, &var_19a0, 0x19)
        
        if (result.d != 0)
            int32_t x19_1 = result.d
            result = MoveCardTo(ThisCard(false, nullptr), 0x3e9, 0x45d, 0, 0, 0xb, 0)
            
            if ((result.d & 1) != 0)
                SetCardFlag(zx.q(x19_1), 0x10, true)
                MoveCardTo(zx.q(x19_1), 0x3ea, 0x45d, 0, 0, 0xb, 0)
                FromSingle(zx.q(x19_1))
                return StartOfNextTurn(Prince_StartOfTurn, nullptr, &var_19a0, 0xf, 2)

return result
