// 函数: _Z15JackOfAllTradesv
// 地址: 0xa7caa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GainCard(0x105, 0x476, 0, 0, 4)
int64_t x0 = LookAtOne()

if ((MayDiscard(x0, 0x3ee) & 1) == 0)
    UnrevealCard(zx.q(x0.d), 0x3eb)

DrawUpTo(5)
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<JackOfAllTrades()::$_6, std::__ndk1::allocator<JackOfAllTrades()::$_6>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<JackOfAllTrades()::$_6, std::__ndk1::allocator<JackOfAllTrades()::$_6>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<JackOfAllTrades()::$_6, std::__ndk1::allocator<JackOfAllTrades()::$_6>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

return TrashUpTo(&var_ca8, 1, 0x3ea, 0x64, 0, nullptr)
