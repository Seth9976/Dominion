// 函数: sub_a783bc
// 地址: 0xa783bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24 = CardWhat(zx.q(**(arg1 + 8)))
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Gladiator()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Gladiator()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Gladiator()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Gladiator()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_24
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Gladiator()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Gladiator()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t x8_5 = **(arg1 + 8)
int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x94
int128_t var_d10
var_d10:0xc.d = x8_5
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
**(arg1 + 0x10) = MayChooseCard(&var_ca8, 0x20, &var_d20, 0x11)
uint64_t result = zx.q(**(arg1 + 0x10))

if (result.d == 0)
    return result

return RevealCard(result, 0x3f0, 0)
