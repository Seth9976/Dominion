// 函数: _Z27Theme_PileChangesB_CopyCardv
// 地址: 0xa4456c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_38 = 0x45
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    x1_1 = (*var_20)->j_operator delete(var_20)

if (x0_1 == 0)
    return XTrace("out of category cards!")

int64_t result = CampaignKingdomAdd(zx.q(x0_1), x1_1, 2, 0)

if ((result.d & 1) == 0)
    return result

IsLandscape(zx.q(x0_1))
return CampaignAddExtra(0xdb8, zx.q(x0_1), 0xffffffff, 0, 0)
