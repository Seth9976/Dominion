// 函数: _Z16Inspiring_OnPlayv
// 地址: 0xaa4450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(4, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Inspiring_OnPlay()::$_80, std::__ndk1::allocator<Inspiring_OnPlay()::$_80>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Inspiring_OnPlay()::$_80, std::__ndk1::allocator<Inspiring_OnPlay()::$_80>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Inspiring_OnPlay()::$_80, std::__ndk1::allocator<Inspiring_OnPlay()::$_80>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

return MayPlayOneOf(&var_ca8, 0x122, 0xb)
