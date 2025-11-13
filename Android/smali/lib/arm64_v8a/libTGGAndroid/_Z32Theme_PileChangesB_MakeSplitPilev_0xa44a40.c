// 函数: _Z32Theme_PileChangesB_MakeSplitPilev
// 地址: 0xa44a40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_131, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_131>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_131, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_131>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_131, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_131>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    (*var_30)->j_operator delete(var_30)

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_132, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_132>, bool (DomCardEnum)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_132, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_132>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_MakeSplitPile()::$_132, std::__ndk1::allocator<Theme_PileChangesB_MakeSplitPile()::$_132>, bool (DomCardEnum)>::VTable
    * const* var_60 = &var_80
int32_t x0_4
char* x1_2
x0_4, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_80, 0)

if (&var_80 == var_60)
    x1_2 = (*var_60)->vFunc_4(var_60)
else if (var_60 != 0)
    x1_2 = (*var_60)->j_operator delete(var_60)

CampaignKingdomAdd(zx.q(x0_1), x1_2, 0, 0)
return CampaignAddExtra(0xdc6, zx.q(x0_1), 0xffffffff, 0, zx.q(x0_4))
