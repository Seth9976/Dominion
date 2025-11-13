// 函数: _Z4Seerv
// 地址: 0xabac48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
RevealDeck(3, 0x3ee, 0x7ea4f8)
PauseUI(true)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Seer()::$_15, std::__ndk1::allocator<Seer()::$_15>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Seer()::$_15, std::__ndk1::allocator<Seer()::$_15>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Seer()::$_15, std::__ndk1::allocator<Seer()::$_15>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

MoveToHand(&var_ca8, 0x3ee)
int32_t var_28
NotifyResult(zx.q(var_28 s> 0 ? 1 : 0))
return ReturnToDeckAnyOrder(&var_1930, 0x3ee, 0x18)
