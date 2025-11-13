// 函数: _Z11MayGainCopy6CardIDRK11DomChoiceUI
// 地址: 0xad4ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(arg1))
void* x0_3 = DomGetContext()
CardID var_ce8
int32_t x0_5 = CardsSupplyTops(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), &var_ce8, 4)
int32_t var_68 = x0_5
int32_t var_d18 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainCopy(CardID, DomChoiceUI const&)::$_8, std::__ndk1::allocator<MayGainCopy(CardID, DomChoiceUI const&)::$_8>, bool (CardID)>::VTable
    * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<MayGainCopy(CardID, DomChoiceUI const&)::$_8, std::__ndk1::allocator<MayGainCopy(CardID, DomChoiceUI const&)::$_8>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainCopy(CardID, DomChoiceUI const&)::$_8, std::__ndk1::allocator<MayGainCopy(CardID, DomChoiceUI const&)::$_8>, bool (CardID)>::VTable
    * const* var_d00 = &var_d20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainCopy(CardID, DomChoiceUI const&)::$_8, std::__ndk1::allocator<MayGainCopy(CardID, DomChoiceUI const&)::$_8>, bool (CardID)>::VTable
    * const var_60
int64_t* var_40 = &var_60
var_60 = &_vtable_for_std::__ndk1::__function::__func<MayGainCopy(CardID, DomChoiceUI const&)::$_8, std::__ndk1::allocator<MayGainCopy(CardID, DomChoiceUI const&)::$_8>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t var_58 = x0_2
int32_t var_24
int32_t x0_7 = FilterCardsInt(&var_60, &var_ce8, x0_5, nullptr, &var_24)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

if (&var_d20 == var_d00)
    (*var_d00)->vFunc_4()
else if (var_d00 != 0)
    (*var_d00)->j_operator delete()

if (x0_7 == 0)
    return 0

return MayGainOneOf(&var_ce8, arg2, 0x476)
