// 函数: _Z26ThemePiece_CategoryVillagev
// 地址: 0xa40094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = KingdomHasAtLeastOne(0x11)

if ((result.d & 1) != 0)
    return result

int64_t x8_1 = *(gCampaignSetup + 0x19a0)
uint64_t x10_1 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_4

if (x10_1.d == 2)
    x8_4 = x8_1 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_4 = x8_1 + (x10_1 << 3) + 0x5010

int32_t x8_5 = *(x8_4 + 4)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<ThemePiece_CategoryVillage()::$_115, std::__ndk1::allocator<ThemePiece_CategoryVillage()::$_115>, bool (DomCardEnum)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<ThemePiece_CategoryVillage()::$_115, std::__ndk1::allocator<ThemePiece_CategoryVillage()::$_115>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<ThemePiece_CategoryVillage()::$_115, std::__ndk1::allocator<ThemePiece_CategoryVillage()::$_115>, bool (DomCardEnum)>::VTable
    * const* var_60_1 = &var_80
int32_t var_78_1 = x8_5
int32_t x0_1
char* x1_2
x0_1, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_80, 0)
int32_t x19_1 = x0_1

if (&var_80 == var_60_1)
    x1_2 = (*var_60_1)->vFunc_4(var_60_1)
else if (var_60_1 != 0)
    x1_2 = (*var_60_1)->j_operator delete(var_60_1)

if (x19_1 == 0)
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
        * const var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int32_t var_48_1 = 0x11
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
        * const* var_30_1 = &var_50
    int32_t x0_4
    x0_4, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)
    x19_1 = x0_4
    
    if (&var_50 == var_30_1)
        x1_2 = (*var_30_1)->vFunc_4(var_30_1)
    else if (var_30_1 != 0)
        x1_2 = (*var_30_1)->j_operator delete(var_30_1)
    
    if (x19_1 == 0)
        return XTrace("out of category cards!")

return CampaignKingdomAdd(zx.q(x19_1), x1_2, 2, 0)
