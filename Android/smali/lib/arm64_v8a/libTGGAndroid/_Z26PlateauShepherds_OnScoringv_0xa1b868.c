// 函数: _Z26PlateauShepherds_OnScoringv
// 地址: 0xa1b868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsOwnedScoring()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<PlateauShepherds_OnScoring()::$_63, std::__ndk1::allocator<PlateauShepherds_OnScoring()::$_63>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<PlateauShepherds_OnScoring()::$_63, std::__ndk1::allocator<PlateauShepherds_OnScoring()::$_63>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<PlateauShepherds_OnScoring()::$_63, std::__ndk1::allocator<PlateauShepherds_OnScoring()::$_63>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

void* x0_2 = DomGetContext()
int32_t var_28
int32_t x0_5

if (var_28 s>= CountTokensPlayer(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), 0x1000))
    void* x0_6 = DomGetContext()
    x0_5 = CountTokensPlayer(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), 0x1000)
else
    x0_5 = var_28

return zx.q(x0_5 << 1)
