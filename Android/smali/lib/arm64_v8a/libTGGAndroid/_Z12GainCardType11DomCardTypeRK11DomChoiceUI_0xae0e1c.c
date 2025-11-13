// 函数: _Z12GainCardType11DomCardTypeRK11DomChoiceUI
// 地址: 0xae0e1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg1
void* x0 = DomGetContext()
CardID var_d18
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_d18, 4)
int32_t var_98 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t var_88 = x20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const* var_70 = &var_90
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const var_60
int64_t* var_40 = &var_60
var_60 = &_vtable_for_std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t var_58 = x20
int32_t var_24
int32_t var_98_1 = FilterCardsInt(&var_60, &var_d18, x0_2, nullptr, &var_24)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

if (&var_90 == var_70)
    (*var_70)->vFunc_4()
else if (var_70 != 0)
    (*var_70)->j_operator delete()

int64_t result = ChooseCard(&var_d18, 7, arg2, 0xc, 0)

if (result.d == 0)
    return result

void* x0_8 = DomGetContext()
int32_t var_d20_1 = 4
return GainCard(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), zx.q(result.d), 0x476, 0, 0x476, 0, 0)
