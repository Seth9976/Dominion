// 函数: _Z17Theme_PileChangesv
// 地址: 0xa38e4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChanges()::$_129, std::__ndk1::allocator<Theme_PileChanges()::$_129>, bool (DomCardEnum)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Theme_PileChanges()::$_129, std::__ndk1::allocator<Theme_PileChanges()::$_129>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_PileChanges()::$_129, std::__ndk1::allocator<Theme_PileChanges()::$_129>, bool (DomCardEnum)>::VTable
    * const* var_60 = &var_80
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_80, 0)

if (&var_80 == var_60)
    x1_1 = (*var_60)->vFunc_4(var_60)
else if (var_60 != 0)
    x1_1 = (*var_60)->j_operator delete(var_60)

int64_t result = CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, 0)

if ((result.d & 1) != 0)
    IsLandscape(zx.q(x0_1))
    result = CampaignAddExtra(0xdb8, zx.q(x0_1), 0xffffffff, 0, 0)

uint64_t x8_1 = zx.q(*(gCampaignSetup + 0x2638))

if (x8_1.d s>= 1)
    int64_t x11_1 = 0
    
    do
        uint64_t x12_2 = zx.q(*(gCampaignSetup + (x11_1 << 2) + 0x19b8))
        
        if (x12_2.d != 0x20c)
            for (int32_t* i = *(*(gCampaignData + 0x50)
                    + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x12_2.d s>> 4) | x12_2)) << 3)); i != 0; 
                    i = *(i + 0x18))
                if (*i == x12_2.d)
                    uint64_t x12_3 = zx.q(i[4])
                    
                    if (x12_3.d s>= 1)
                        int32_t* x14_2 = *(i + 8)
                        int64_t x13_5
                        
                        if (*x14_2 != 0x40)
                            x13_5 = 0
                            int32_t j
                            
                            do
                                if (x12_3 - 1 == x13_5)
                                    goto label_a38f10
                                
                                j = x14_2[1 + x13_5]
                                x13_5 += 1
                            while (j != 0x40)
                        
                        if (*x14_2 == 0x40 || x13_5 u< x12_3)
                            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
                                * const var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
                            int32_t var_48_1 = 0x40
                            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddCategoryCard(DomCardCategory)::$_30, std::__ndk1::allocator<CampaignAddCategoryCard(DomCardCategory)::$_30>, bool (DomCardEnum)>::VTable
                                * const* var_30_1 = &var_50
                            int32_t x0_6
                            char* x1_4
                            x0_6, x1_4 =
                                RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)
                            
                            if (&var_50 == var_30_1)
                                x1_4 = (*var_30_1)->vFunc_4(var_30_1)
                            else if (var_30_1 != 0)
                                x1_4 = (*var_30_1)->j_operator delete(var_30_1)
                            
                            if (x0_6 == 0)
                                return XTrace("out of category cards!")
                            
                            return CampaignKingdomAdd(zx.q(x0_6), x1_4, 2, 0)
                    
                    break
        
    label_a38f10:
        x11_1 += 1
    while (x11_1 != x8_1)

return result
