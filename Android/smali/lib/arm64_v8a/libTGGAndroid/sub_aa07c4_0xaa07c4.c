// 函数: sub_aa07c4
// 地址: 0xaa07c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CardsHand()
int32_t var_28

if (var_28 s< 5)
    return result

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Raider()::$_23::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Raider()::$_23::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Raider()::$_23::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Raider()::$_23::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t var_cd8_1 = arg1 + 8
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Raider()::$_23::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Raider()::$_23::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

if (var_28 == 0)
    return RevealHandTemp()

return DiscardOneOf(&var_ca8, 0x3ea, 0xab, 0, 5)
