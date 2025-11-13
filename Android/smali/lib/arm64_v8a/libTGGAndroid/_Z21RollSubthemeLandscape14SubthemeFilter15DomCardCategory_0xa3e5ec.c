// 函数: _Z21RollSubthemeLandscape14SubthemeFilter15DomCardCategory
// 地址: 0xa3e5ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14 = arg1
int64_t x11 = *(gCampaignSetup + 0x19a0)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109, std::__ndk1::allocator<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109, std::__ndk1::allocator<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t* var_48 = &var_14
int64_t var_40 = x11
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109, std::__ndk1::allocator<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    (*var_30)->j_operator delete(var_30)

return zx.q(x0_1)
