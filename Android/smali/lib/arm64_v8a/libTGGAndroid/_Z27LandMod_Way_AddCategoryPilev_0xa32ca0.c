// 函数: _Z27LandMod_Way_AddCategoryPilev
// 地址: 0xa32ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_48 = 0x2d
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    x1_1 = (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    x1_1 = (*var_30)->j_operator delete(var_30)

if (x0_1 == 0)
    XTrace("out of category cards!")
else
    CampaignKingdomAdd(zx.q(x0_1), x1_1, 2, 0)

var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_48_1 = 0x45
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const* var_30_1 = &var_50
int32_t x0_5
char* x1_3
x0_5, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30_1)
    x1_3 = (*var_30_1)->vFunc_4(var_30_1)
else if (var_30_1 != 0)
    x1_3 = (*var_30_1)->j_operator delete(var_30_1)

if (x0_5 == 0)
    XTrace("out of category cards!")
else
    CampaignKingdomAdd(zx.q(x0_5), x1_3, 2, 0)

var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_48_2 = 0x13
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const* var_30_2 = &var_50
int32_t x0_9
char* x1_5
x0_9, x1_5 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30_2)
    x1_5 = (*var_30_2)->vFunc_4(var_30_2)
else if (var_30_2 != 0)
    x1_5 = (*var_30_2)->j_operator delete(var_30_2)

if (x0_9 == 0)
    XTrace("out of category cards!")
else
    CampaignKingdomAdd(zx.q(x0_9), x1_5, 2, 0)

var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_48_3 = 0x34
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
    * const* var_30_3 = &var_50
int32_t x0_13
char* x1_7
x0_13, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30_3)
    x1_7 = (*var_30_3)->vFunc_4(var_30_3)
else if (var_30_3 != 0)
    x1_7 = (*var_30_3)->j_operator delete(var_30_3)

if (x0_13 == 0)
    return XTrace("out of category cards!")

return CampaignKingdomAdd(zx.q(x0_13), x1_7, 2, 0)
