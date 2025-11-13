// 函数: sub_a79cac
// 地址: 0xa79cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = CountHand()

if (result s< 5)
    return result

CardsHand()
int32_t x8_1 = *(arg1 + 8)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Taxman()::$_1::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Taxman()::$_1::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Taxman()::$_1::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Taxman()::$_1::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t var_cd8_1 = x8_1
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Taxman()::$_1::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Taxman()::$_1::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
int32_t var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int32_t var_28

if (var_28 s< 1)
    NotifyResult(0)
    return RevealHandTemp()

NotifyResult(1)
return DiscardCard(zx.q(var_ca8), 0x3ea, 0xb, 7, 0)
