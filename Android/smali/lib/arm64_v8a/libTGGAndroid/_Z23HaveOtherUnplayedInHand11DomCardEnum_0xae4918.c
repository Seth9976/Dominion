// 函数: _Z23HaveOtherUnplayedInHand11DomCardEnum
// 地址: 0xae4918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GetPlayableFromHand(4, 0)
int32_t var_d18 = x19
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<HaveOtherUnplayedInHand(DomCardEnum)::$_44, std::__ndk1::allocator<HaveOtherUnplayedInHand(DomCardEnum)::$_44>, bool (CardID)>::VTable
    * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<HaveOtherUnplayedInHand(DomCardEnum)::$_44, std::__ndk1::allocator<HaveOtherUnplayedInHand(DomCardEnum)::$_44>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<HaveOtherUnplayedInHand(DomCardEnum)::$_44, std::__ndk1::allocator<HaveOtherUnplayedInHand(DomCardEnum)::$_44>, bool (CardID)>::VTable
    * const* var_d00 = &var_d20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<HaveOtherUnplayedInHand(DomCardEnum)::$_44, std::__ndk1::allocator<HaveOtherUnplayedInHand(DomCardEnum)::$_44>, bool (CardID)>::VTable
    * const var_60
int64_t* var_40 = &var_60
var_60 = &_vtable_for_std::__ndk1::__function::__func<HaveOtherUnplayedInHand(DomCardEnum)::$_44, std::__ndk1::allocator<HaveOtherUnplayedInHand(DomCardEnum)::$_44>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t var_58 = x19
CardID var_ce8
int32_t var_68
int32_t var_24
int32_t x0_1 = FilterCardsInt(&var_60, &var_ce8, var_68, nullptr, &var_24)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

if (&var_d20 == var_d00)
    (*var_d00)->vFunc_4()
else if (var_d00 != 0)
    (*var_d00)->j_operator delete()

return zx.q(x0_1 s> 0 ? 1 : 0)
