// 函数: sub_a5dbe0
// 地址: 0xa5dbe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = GetPileTop(0x100)

if (result == 0)
    return result

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<YoungWitch()::$_3::operator()() const::'lambda'(CardID), std::__ndk1::allocator<YoungWitch()::$_3::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<YoungWitch()::$_3::operator()() const::'lambda'(CardID), std::__ndk1::allocator<YoungWitch()::$_3::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<YoungWitch()::$_3::operator()() const::'lambda'(CardID), std::__ndk1::allocator<YoungWitch()::$_3::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x52
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
int32_t x0_3 = MayChooseCard(&var_ca8, 0x20, &var_d20, 0x11)

if (x0_3 == 0)
    return GainCurse()

NotifyResult(0)
return RevealTemp(zx.q(x0_3), 0x3ea, 0)
