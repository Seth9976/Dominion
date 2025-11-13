// 函数: _Z24MissionPiece_ExpSubthemev
// 地址: 0xa3e674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *(gCampaignSetup + 0x19a0)
uint64_t x0 = zx.q(*(x21 + 4))
void* x23 = x21 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
*(x23 + 0x548) = x0.d
*(x23 + 0x54c) = RandomSubtheme(x0)
int32_t x10 = *(x21 + 4)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_38
int32_t* var_68 = &var_38
var_38 = 1
int32_t var_34 = x10
int32_t* var_60 = &var_34
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const* var_50 = &var_70
int32_t x0_3
char* x1_1
x0_3, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)

if (&var_70 == var_50)
    x1_1 = (*var_50)->vFunc_4(var_50)
else if (var_50 != 0)
    x1_1 = (*var_50)->j_operator delete(var_50)

if (x0_3 != 0)
    CampaignKingdomAdd(zx.q(x0_3), x1_1, 0, 0)
    int32_t x8_2 = *(x21 + 4)
    var_38 = 1
    var_34 = x8_2
    var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int32_t* var_68_1 = &var_38
    int32_t* var_60_1 = &var_34
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
        * const* var_50_1 = &var_70
    int32_t x0_7
    char* x1_3
    x0_7, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)
    
    if (&var_70 == var_50_1)
        x1_3 = (*var_50_1)->vFunc_4(var_50_1)
    else if (var_50_1 != 0)
        x1_3 = (*var_50_1)->j_operator delete(var_50_1)
    
    if (x0_7 != 0)
        CampaignKingdomAdd(zx.q(x0_7), x1_3, 0, 0)
        int32_t x8_4 = *(x21 + 4)
        var_38 = 1
        var_34 = x8_4
        var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        int32_t* var_68_2 = &var_38
        int32_t* var_60_2 = &var_34
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
            * const* var_50_2 = &var_70
        int32_t x0_11
        char* x1_5
        x0_11, x1_5 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)
        
        if (&var_70 == var_50_2)
            x1_5 = (*var_50_2)->vFunc_4(var_50_2)
        else if (var_50_2 != 0)
            x1_5 = (*var_50_2)->j_operator delete(var_50_2)
        
        if (x0_11 != 0)
            CampaignKingdomAdd(zx.q(x0_11), x1_5, 0, 0)
            int32_t x8_6 = *(x21 + 4)
            var_38 = 1
            var_34 = x8_6
            var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            int32_t* var_68_3 = &var_38
            int32_t* var_60_3 = &var_34
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
                * const* var_50_3 = &var_70
            int32_t x0_15
            char* x1_7
            x0_15, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)
            
            if (&var_70 == var_50_3)
                x1_7 = (*var_50_3)->vFunc_4(var_50_3)
            else if (var_50_3 != 0)
                x1_7 = (*var_50_3)->j_operator delete(var_50_3)
            
            if (x0_15 != 0)
                CampaignKingdomAdd(zx.q(x0_15), x1_7, 0, 0)

int32_t x8_8 = *(x21 + 4)
var_38 = 2
var_34 = x8_8
var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t* var_68_4 = &var_38
int32_t* var_60_4 = &var_34
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const* var_50_4 = &var_70
int32_t x0_19
char* x1_9
x0_19, x1_9 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)

if (&var_70 == var_50_4)
    x1_9 = (*var_50_4)->vFunc_4(var_50_4)
else if (var_50_4 != 0)
    x1_9 = (*var_50_4)->j_operator delete(var_50_4)

if (x0_19 != 0)
    CampaignKingdomAdd(zx.q(x0_19), x1_9, 0, 0)
    int32_t x8_10 = *(x21 + 4)
    var_38 = 2
    var_34 = x8_10
    var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int32_t* var_68_5 = &var_38
    int32_t* var_60_5 = &var_34
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
        * const* var_50_5 = &var_70
    int32_t x0_23
    char* x1_11
    x0_23, x1_11 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)
    
    if (&var_70 == var_50_5)
        x1_11 = (*var_50_5)->vFunc_4(var_50_5)
    else if (var_50_5 != 0)
        x1_11 = (*var_50_5)->j_operator delete(var_50_5)
    
    if (x0_23 != 0)
        CampaignKingdomAdd(zx.q(x0_23), x1_11, 0, 0)

CampaignCategoryComboAdd(zx.q(*(x23 + 0x54c)), false)
int64_t x9_19 = *(gCampaignSetup + 0x19a0)
var_34 = 1
var_70 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109, std::__ndk1::allocator<RollSubthemeLandscape(SubthemeFilter, DomCardCategory)::$_109>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t* var_68_6 = &var_34
int64_t var_60_6 = x9_19
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const* var_50_6 = &var_70
int64_t result
char* x1_13
result, x1_13 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_70, 0)
int32_t x19_6 = result.d

if (&var_70 == var_50_6)
    result, x1_13 = (*var_50_6)->vFunc_4(var_50_6)
else if (var_50_6 != 0)
    result, x1_13 = (*var_50_6)->j_operator delete(var_50_6)

if (x19_6 == 0)
    return result

return CampaignKingdomAdd(zx.q(x19_6), x1_13, 4, 1)
