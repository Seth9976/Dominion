// 函数: _Z29Theme_DeckChangesB_2Heirloomsv
// 地址: 0xa43bfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Theme_DeckChangesB_RandomA()
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesB_2Heirlooms()::$_126, std::__ndk1::allocator<Theme_DeckChangesB_2Heirlooms()::$_126>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Theme_DeckChangesB_2Heirlooms()::$_126, std::__ndk1::allocator<Theme_DeckChangesB_2Heirlooms()::$_126>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesB_2Heirlooms()::$_126, std::__ndk1::allocator<Theme_DeckChangesB_2Heirlooms()::$_126>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    x1_1 = (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    x1_1 = (*var_30)->j_operator delete(var_30)

CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, 0)
var_50 = &_vtable_for_std::__ndk1::__function::__func<Theme_DeckChangesB_2Heirlooms()::$_126, std::__ndk1::allocator<Theme_DeckChangesB_2Heirlooms()::$_126>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesB_2Heirlooms()::$_126, std::__ndk1::allocator<Theme_DeckChangesB_2Heirlooms()::$_126>, bool (DomCardEnum)>::VTable
    * const* var_30_1 = &var_50
int32_t x0_5
char* x1_3
x0_5, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30_1)
    x1_3 = (*var_30_1)->vFunc_4(var_30_1)
else if (var_30_1 != 0)
    x1_3 = (*var_30_1)->j_operator delete(var_30_1)

return CampaignKingdomAdd(zx.q(x0_5), x1_3, 0, 0)
