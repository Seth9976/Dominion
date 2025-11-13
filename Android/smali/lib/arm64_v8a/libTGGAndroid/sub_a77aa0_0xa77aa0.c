// 函数: sub_a77aa0
// 地址: 0xa77aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14 = Trigger_GainCard()
CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_14
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<CharmGainExtra()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t x0_4 = Cost(zx.q(var_14))
int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
int128_t var_d10
var_d10:0xc.d = x0_4
var_d20.d = 0x98
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
MayGainOneOf(&var_ca8, &var_d20, 0x476)
