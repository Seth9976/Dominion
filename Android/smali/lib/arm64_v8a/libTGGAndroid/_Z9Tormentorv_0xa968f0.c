// 函数: _Z9Tormentorv
// 地址: 0xa968f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(2, 0, false)
CardsWhere(0x3e9)
int32_t var_cd8 = ThisCard(false, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Tormentor()::$_18, std::__ndk1::allocator<Tormentor()::$_18>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Tormentor()::$_18, std::__ndk1::allocator<Tormentor()::$_18>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Tormentor()::$_18, std::__ndk1::allocator<Tormentor()::$_18>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28

if (var_28 == 0)
    return GainCard(0xd2b, 0x476, 0, 0, 4)

int32_t x0_3 = RevealHex(true)
int32_t var_d08 = x0_3
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tormentor()::$_19, std::__ndk1::allocator<Tormentor()::$_19>, void ()>::VTable
    * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<Tormentor()::$_19, std::__ndk1::allocator<Tormentor()::$_19>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tormentor()::$_19, std::__ndk1::allocator<Tormentor()::$_19>, void ()>::VTable
    * const* var_cf0 = &var_d10
OtherPlayers(&var_d10)

if (&var_d10 == var_cf0)
    (*var_cf0)->vFunc_4()
else if (var_cf0 != 0)
    (*var_cf0)->j_operator delete()

return DiscardHex(zx.q(x0_3))
