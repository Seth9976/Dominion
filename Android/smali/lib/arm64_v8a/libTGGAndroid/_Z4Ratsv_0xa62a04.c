// 函数: _Z4Ratsv
// 地址: 0xa62a04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
GainCard(0x911, 0x476, 0, 0, 4)
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Rats()::$_7, std::__ndk1::allocator<Rats()::$_7>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Rats()::$_7, std::__ndk1::allocator<Rats()::$_7>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Rats()::$_7, std::__ndk1::allocator<Rats()::$_7>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28

if (var_28 == 0)
    return RevealHandTemp()

return TrashOneOf(&var_ca8, 0x3ea, 0x12, 7, 0)
