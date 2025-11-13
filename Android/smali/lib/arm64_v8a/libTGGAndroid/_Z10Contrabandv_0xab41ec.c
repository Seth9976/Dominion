// 函数: _Z10Contrabandv
// 地址: 0xab41ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyTreasure(3, 0)
Buy(1, 0)
int32_t x0 = CurrentWho()
int32_t var_18 = 0
int32_t var_14 = x0
int64_t x0_1 = PlayerLeft()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Contraband()::$_2, std::__ndk1::allocator<Contraband()::$_2>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Contraband()::$_2, std::__ndk1::allocator<Contraband()::$_2>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_18
int32_t* var_40 = &var_14
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Contraband()::$_2, std::__ndk1::allocator<Contraband()::$_2>, void ()>::VTable
    * const* result_1 = &var_50
OtherPlayer(x0_1, &var_50)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Contraband()::$_2, std::__ndk1::allocator<Contraband()::$_2>, void ()>::VTable
    * const* result = result_1

if (&var_50 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

if (var_18 == 0)
    return result

NotifyResult(1)
return AddOngoing(8, var_18, 1, false, 0, 0, 0, 0)
