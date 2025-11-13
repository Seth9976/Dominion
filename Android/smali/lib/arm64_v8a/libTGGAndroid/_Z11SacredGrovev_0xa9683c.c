// 函数: _Z11SacredGrovev
// 地址: 0xa9683c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
MoneyPlus(3, 0, false)
int64_t result = RevealBoon(0x3e9)
int32_t var_14 = result.d

if (result.d == 0)
    return result

PlayBoon(result, 1, 0)

if ((BoonGivesPlusOneMoney(zx.q(result.d)) & 1) == 0)
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<SacredGrove()::$_17, std::__ndk1::allocator<SacredGrove()::$_17>, void ()>::VTable
        * const var_50 = &_vtable_for_std::__ndk1::__function::__func<SacredGrove()::$_17, std::__ndk1::allocator<SacredGrove()::$_17>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    int32_t* var_48_1 = &var_14
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<SacredGrove()::$_17, std::__ndk1::allocator<SacredGrove()::$_17>, void ()>::VTable
        * const* var_30_1 = &var_50
    OtherPlayers(&var_50)
    
    if (&var_50 == var_30_1)
        (*var_30_1)->vFunc_4()
    else if (var_30_1 != 0)
        (*var_30_1)->j_operator delete()

return DiscardBoon(zx.q(var_14), 0x3e9, 8)
