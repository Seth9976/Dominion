// 函数: _Z17CountWhoWhereWhat9PlayerWho8DomWhere11DomCardEnum
// 地址: 0xadade8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_64 = arg3
CardID var_ce8
int32_t x0_2 = CardsWhere(*(DomGetContext() + 8), zx.q(arg1), zx.q(arg2), &var_ce8)
int32_t var_68 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33, std::__ndk1::allocator<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33>, bool (CardID)>::VTable
    * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33, std::__ndk1::allocator<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_d18 = &var_64
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33, std::__ndk1::allocator<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33>, bool (CardID)>::VTable
    * const* var_d00 = &var_d20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33, std::__ndk1::allocator<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33>, bool (CardID)>::VTable
    * const var_60
int64_t* var_40 = &var_60
var_60 = &_vtable_for_std::__ndk1::__function::__func<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33, std::__ndk1::allocator<CountWhoWhereWhat(PlayerWho, DomWhere, DomCardEnum)::$_33>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_58 = &var_64
int32_t var_24
int32_t x0_4 = FilterCardsInt(&var_60, &var_ce8, x0_2, nullptr, &var_24)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

if (&var_d20 == var_d00)
    (*var_d00)->vFunc_4()
else if (var_d00 != 0)
    (*var_d00)->j_operator delete()

return zx.q(x0_4)
