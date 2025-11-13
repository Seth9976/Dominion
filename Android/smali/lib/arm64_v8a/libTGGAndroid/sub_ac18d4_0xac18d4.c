// 函数: sub_ac18d4
// 地址: 0xac18d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = CountWhere(0x3ea)

if (result s< 5)
    return result

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Villain()::$_19::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Villain()::$_19::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Villain()::$_19::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Villain()::$_19::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Villain()::$_19::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Villain()::$_19::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xb9
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
int64_t x0_3 = ChooseCard(&var_ca8, 0x17, &var_d20, 5, 0)

if (x0_3.d == 0)
    return RevealHandTemp()

return DiscardCard(x0_3, 0x3ea, 0xb, 7, 0)
