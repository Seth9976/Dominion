// 函数: _Z18Friendly_OnCleanupv
// 地址: 0xaa422c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Friendly_OnCleanup()::$_76, std::__ndk1::allocator<Friendly_OnCleanup()::$_76>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Friendly_OnCleanup()::$_76, std::__ndk1::allocator<Friendly_OnCleanup()::$_76>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Friendly_OnCleanup()::$_76, std::__ndk1::allocator<Friendly_OnCleanup()::$_76>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int64_t result
int64_t x2
result, x2 = DiscardOneOf(&var_ca8, 0x3ea, 0xe, 4, 5)

if (result.d == 0)
    return result

return GainCardTrait(0x114c, 0x11f, x2)
