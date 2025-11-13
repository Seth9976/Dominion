// 函数: sub_ab5c6c
// 地址: 0xab5c6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Trash(ThisCard(false, nullptr), 0x3e9, 0)
RevealHandTemp()
int64_t var_18 = 2
void* x0_1 = DomGetContext()
CardID var_ca8
int32_t x0_3 = CardsWhere(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), 0x3ea, &var_ca8)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhereTypeUnique(DomWhere, DomCardType)::$_10, std::__ndk1::allocator<CountWhereTypeUnique(DomWhere, DomCardType)::$_10>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<CountWhereTypeUnique(DomWhere, DomCardType)::$_10, std::__ndk1::allocator<CountWhereTypeUnique(DomWhere, DomCardType)::$_10>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_cd8 = &var_18
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhereTypeUnique(DomWhere, DomCardType)::$_10, std::__ndk1::allocator<CountWhereTypeUnique(DomWhere, DomCardType)::$_10>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

FilterUnique(&var_ca8, nullptr)
return VPChit(x0_3, 0)
