// 函数: _Z12NobleBrigandv
// 地址: 0xa7cc0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(1, 0, false)
void var_ca8
memset(&var_ca8, 0, 0xc84)
int32_t var_cac = CurrentWho()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7, std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7>, void ()>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7, std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_cd8 = &var_cac
void* var_cd0 = &var_ca8
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7, std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7>, void ()>::VTable
    * const* var_cc0 = &var_ce0
OtherPlayers(&var_ce0)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

return GainCards(&var_ca8, 0x476, 2)
