// 函数: _Z12CountWhoWhat9PlayerWho11DomCardEnum
// 地址: 0xadaa50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_18 = arg2
CardID var_cd8
int32_t x0_2 = CardsOwned(*(DomGetContext() + 8), zx.q(arg1), &var_cd8)
int32_t var_58 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhat(PlayerWho, DomCardEnum)::$_29, std::__ndk1::allocator<CountWhoWhat(PlayerWho, DomCardEnum)::$_29>, bool (CardID)>::VTable
    * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<CountWhoWhat(PlayerWho, DomCardEnum)::$_29, std::__ndk1::allocator<CountWhoWhat(PlayerWho, DomCardEnum)::$_29>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_d08 = &var_18
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhat(PlayerWho, DomCardEnum)::$_29, std::__ndk1::allocator<CountWhoWhat(PlayerWho, DomCardEnum)::$_29>, bool (CardID)>::VTable
    * const* var_cf0 = &var_d10
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountWhoWhat(PlayerWho, DomCardEnum)::$_29, std::__ndk1::allocator<CountWhoWhat(PlayerWho, DomCardEnum)::$_29>, bool (CardID)>::VTable
    * const var_50
int64_t* var_30 = &var_50
var_50 = &_vtable_for_std::__ndk1::__function::__func<CountWhoWhat(PlayerWho, DomCardEnum)::$_29, std::__ndk1::allocator<CountWhoWhat(PlayerWho, DomCardEnum)::$_29>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_48 = &var_18
int32_t var_14
int32_t x0_4 = FilterCardsInt(&var_50, &var_cd8, x0_2, nullptr, &var_14)

if (&var_50 == var_30)
    (*(*var_30 + 0x20))()
else if (var_30 != 0)
    (*(*var_30 + 0x28))()

if (&var_d10 == var_cf0)
    (*var_cf0)->vFunc_4()
else if (var_cf0 != 0)
    (*var_cf0)->j_operator delete()

return zx.q(x0_4)
