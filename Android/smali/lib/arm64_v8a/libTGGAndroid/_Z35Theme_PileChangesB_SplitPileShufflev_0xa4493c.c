// 函数: _Z35Theme_PileChangesB_SplitPileShufflev
// 地址: 0xa4493c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_SplitPileShuffle()::$_130, std::__ndk1::allocator<Theme_PileChangesB_SplitPileShuffle()::$_130>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Theme_PileChangesB_SplitPileShuffle()::$_130, std::__ndk1::allocator<Theme_PileChangesB_SplitPileShuffle()::$_130>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChangesB_SplitPileShuffle()::$_130, std::__ndk1::allocator<Theme_PileChangesB_SplitPileShuffle()::$_130>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    x1_1 = (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    x1_1 = (*var_30)->j_operator delete(var_30)

int64_t x3

if (*(gCampaignSetup + 0x19b4) == 0)
    x3 = 3
else
    x3 = 5

CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, x3)
return CampaignAddExtra(0xdc1, zx.q(x0_1), 0xffffffff, 0, 0)
