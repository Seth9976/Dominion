// 函数: _Z15GainExactlyType7DomCost11DomCardType15DomChoiceUIType8DomWhere
// 地址: 0xad6950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = arg1
int64_t var_38 = arg2
void* x0 = DomGetContext()
CardID var_cc0
int32_t x0_2
int128_t v0
x0_2, v0 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cc0, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20, std::__ndk1::allocator<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20, std::__ndk1::allocator<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce0 = &var_28
int32_t var_40 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20, std::__ndk1::allocator<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20, std::__ndk1::allocator<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20>, bool (CardID)>::VTable
    * const var_d30
int64_t* var_d10 = &var_d30
var_d30 = &_vtable_for_std::__ndk1::__function::__func<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20, std::__ndk1::allocator<GainExactlyType(DomCost, DomCardType, DomChoiceUIType, DomWhere)::$_20>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int128_t var_d28 = (&var_38).o
int32_t var_24
int32_t x0_4 = FilterCardsInt(&var_d30, &var_cc0, x0_2, nullptr, &var_24)

if (&var_d30 == var_d10)
    (*(*var_d10 + 0x20))()
else if (var_d10 != 0)
    (*(*var_d10 + 0x28))()

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

if (x0_4 == 0)
    return 0

int32_t x8_8 = var_28
__builtin_memset(&var_d30, 0, 0x38)
var_d30.d = arg3
int32_t var_d14_1 = x8_8
uint64_t result = ChooseCard(&var_cc0, 7, &var_d30, 0xc, 0)

if (result.d == 0)
    return result

int32_t x20_1 = result.d
void* x0_8 = DomGetContext()
int32_t var_d40_1 = 4

if ((GainCard(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), zx.q(x20_1), zx.q(arg4), 0, 0x476, 0, 0) & 1) != 0)
    return zx.q(x20_1)

return 0
