// 函数: _Z12GainCardType11DomCardType15DomChoiceUIType8DomWhere
// 地址: 0xad473c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg1
void* x0 = DomGetContext()
CardID var_cf8
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cf8, 4)
int32_t var_78 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t var_68 = x21
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const* var_50 = &var_70
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>::VTable
    * const var_d30
int64_t* var_d10 = &var_d30
var_d30 = &_vtable_for_std::__ndk1::__function::__func<FilterType(CardIDs&, DomCardType)::$_0, std::__ndk1::allocator<FilterType(CardIDs&, DomCardType)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t var_d28 = x21
int32_t var_34
int32_t var_78_1 = FilterCardsInt(&var_d30, &var_cf8, x0_2, nullptr, &var_34)

if (&var_d30 == var_d10)
    (*(*var_d10 + 0x20))()
else if (var_d10 != 0)
    (*(*var_d10 + 0x28))()

if (&var_70 == var_50)
    (*var_50)->vFunc_4()
else if (var_50 != 0)
    (*var_50)->j_operator delete()

__builtin_memset(&var_d30, 0, 0x38)
var_d30.d = arg2
int32_t x0_8 = ChooseCard(&var_cf8, 7, &var_d30, 0xc, 0)

if (x0_8 != 0)
    void* x0_9 = DomGetContext()
    int32_t var_d40_1 = 4
    GainCard(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), zx.q(x0_8), zx.q(arg3), 0, 0x476, 0, 0)

return zx.q(x0_8)
