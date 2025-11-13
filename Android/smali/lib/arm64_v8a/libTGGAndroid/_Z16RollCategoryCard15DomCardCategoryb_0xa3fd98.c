// 函数: _Z16RollCategoryCard15DomCardCategoryb
// 地址: 0xa3fd98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollCategoryCard(DomCardCategory, bool)::$_113, std::__ndk1::allocator<RollCategoryCard(DomCardCategory, bool)::$_113>, bool (DomCardEnum)>::VTable
    * const var_40
int64_t* var_20 = &var_40
var_40 = &_vtable_for_std::__ndk1::__function::__func<RollCategoryCard(DomCardCategory, bool)::$_113, std::__ndk1::allocator<RollCategoryCard(DomCardCategory, bool)::$_113>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
uint64_t var_38 = (zx.q(arg2.d) & 1) | zx.q(arg1) << 0x20
int32_t x0_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    (*(*var_20 + 0x20))(var_20)
else if (var_20 != 0)
    (*(*var_20 + 0x28))(var_20)

return zx.q(x0_1)
