// 函数: _Z17WanderingMinstrelv
// 地址: 0xa62bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
RevealDeck(3, 0x3ee, 0x7e2790)
PauseUI(true)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<WanderingMinstrel()::$_9, std::__ndk1::allocator<WanderingMinstrel()::$_9>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<WanderingMinstrel()::$_9, std::__ndk1::allocator<WanderingMinstrel()::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<WanderingMinstrel()::$_9, std::__ndk1::allocator<WanderingMinstrel()::$_9>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

MoveCardsTo(&var_1930, 0x3ee, 0x452, 0, 0, 1, 0xb)
ReturnToDeckAnyOrder(&var_ca8, 0x3ee, 0x18)
return DiscardCards(&var_1930, 0x452, 0xb, 7, 0)
