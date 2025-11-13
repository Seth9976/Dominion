// 函数: _Z16Theme_ExpansionBv
// 地址: 0xa42ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = sx.q(*(gCampaignSetup + 0x19a8))
int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x9 = zx.q(*(gCampaignSetup + 0x19b4))
uint64_t x8_1 = zx.q(x19.d - 2)
void* x20

if (x9.d == 2)
    x20 = x8 + (x19 << 0xb) + 0x540
else
    x20 = x8 + (x9 << 3) + 0x5010

if (x8_1.d u<= 7)
    switch (x8_1)
        case 0, 6
            CampaignAddExpStamp(zx.q(*(x20 + 4)))
        case 2, 7
            CampaignAddTwist(zx.q(*(sx.q(*(x20 + 4)) * 0xa8 + 0x1135084)))
            
            if (x19.d == 8)
                CampaignAddExpStamp(zx.q(*(x20 + 4)))

int64_t x8_5 = *(gCampaignSetup + 0x19a0)
uint64_t x10_2 = zx.q(*(gCampaignSetup + 0x19b4))
void* x19_1 = x8_5 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
void* x23

if (x10_2.d == 2)
    x23 = x19_1 + 0x540
else
    x23 = x8_5 + (x10_2 << 3) + 0x5010

*(x19_1 + 0x548) = *(x23 + 4)
*(x19_1 + 0x54c) = RandomSubtheme(zx.q(*(x23 + 4)))
int32_t x10_3 = *(x23 + 4)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int32_t var_98
int32_t* var_88 = &var_98
var_98 = 1
int32_t var_94 = x10_3
int32_t* var_80 = &var_94
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const* var_70 = &var_90
int32_t x0_6
char* x1_1
x0_6, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)

if (&var_90 == var_70)
    x1_1 = (*var_70)->vFunc_4(var_70)
else if (var_70 != 0)
    x1_1 = (*var_70)->j_operator delete(var_70)

int32_t var_ac
int32_t* var_88_3
uint64_t x19_3

if (x0_6 == 0)
    x19_3 = 0
label_a4307c:
    bool cond:3_1
    
    do
        int32_t x8_13 = *(x23 + 4)
        var_98 = 2
        var_94 = x8_13
        var_90 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        var_88_3 = &var_98
        int32_t* var_80_4 = &var_94
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
            * const* var_70_4 = &var_90
        int32_t x0_22
        char* x1_9
        x0_22, x1_9 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
        
        if (&var_90 == var_70_4)
            x1_9 = (*var_70_4)->vFunc_4(var_70_4)
        else if (var_70_4 != 0)
            x1_9 = (*var_70_4)->j_operator delete(var_70_4)
        
        if (x0_22 == 0)
            break
        
        CampaignKingdomAdd(zx.q(x0_22), x1_9, 0, 0)
        cond:3_1 = x19_3 != 3
        (&var_ac)[x19_3] = x0_22
        x19_3 += 1
    while (cond:3_1)
else
    CampaignKingdomAdd(zx.q(x0_6), x1_1, 0, 0)
    var_ac = x0_6
    int32_t x12_1 = *(x23 + 4)
    var_98 = 1
    var_94 = x12_1
    var_90 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int32_t* var_88_1 = &var_98
    int32_t* var_80_1 = &var_94
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
        * const* var_70_1 = &var_90
    int32_t x0_10
    char* x1_3
    x0_10, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    
    if (&var_90 == var_70_1)
        x1_3 = (*var_70_1)->vFunc_4(var_70_1)
    else if (var_70_1 != 0)
        x1_3 = (*var_70_1)->j_operator delete(var_70_1)
    
    x19_3 = 1
    
    if (x0_10 == 0)
        goto label_a4307c
    
    CampaignKingdomAdd(zx.q(x0_10), x1_3, 0, 0)
    int32_t var_a8_1 = x0_10
    int32_t x11_2 = *(x23 + 4)
    var_98 = 1
    var_94 = x11_2
    var_90 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int32_t* var_88_2 = &var_98
    int32_t* var_80_2 = &var_94
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
        * const* var_70_2 = &var_90
    int32_t x0_14
    char* x1_5
    x0_14, x1_5 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    
    if (&var_90 == var_70_2)
        x1_5 = (*var_70_2)->vFunc_4(var_70_2)
    else if (var_70_2 != 0)
        x1_5 = (*var_70_2)->j_operator delete(var_70_2)
    
    if (x0_14 == 0)
        x19_3 = 2
        goto label_a4307c
    
    CampaignKingdomAdd(zx.q(x0_14), x1_5, 0, 0)
    int32_t var_a4_1 = x0_14
    int32_t x12_2 = *(x23 + 4)
    var_98 = 1
    var_94 = x12_2
    var_90 = &_vtable_for_std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    var_88_3 = &var_98
    int32_t* var_80_3 = &var_94
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
        * const* var_70_3 = &var_90
    int32_t x0_18
    char* x1_7
    x0_18, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    
    if (&var_90 == var_70_3)
        x1_7 = (*var_70_3)->vFunc_4(var_70_3)
    else if (var_70_3 != 0)
        x1_7 = (*var_70_3)->j_operator delete(var_70_3)
    
    if (x0_18 == 0)
        x19_3 = 3
        goto label_a4307c
    
    CampaignKingdomAdd(zx.q(x0_18), x1_7, 0, 0)
    int32_t var_a0_1 = x0_18
    x19_3 = 4

int32_t x8_16 = *(x23 + 4)
var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108, std::__ndk1::allocator<RollSubthemeCard(DomExpansion, SubthemeFilter, DomCardCategory)::$_108>, bool (DomCardEnum)>::VTable
    * const* var_70_5 = &var_90
var_88_3.d = x8_16
int32_t x0_26
char* x1_11
x0_26, x1_11 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)

if (&var_90 == var_70_5)
    x1_11 = (*var_70_5)->vFunc_4(var_70_5)
else if (var_70_5 != 0)
    x1_11 = (*var_70_5)->j_operator delete(var_70_5)

CampaignKingdomAdd(zx.q(x0_26), x1_11, 0, 1)

if (x0_26 != 0)
    (&var_ac)[zx.q(x19_3.d)] = x0_26
    x19_3 = zx.q(x19_3.d + 1)

int64_t x0_32
char* x1_13
x0_32, x1_13 = CampaignDrawRandomCombo(zx.q((&var_ac)[sx.q(RandomInt(gCampaignSetup, x19_3.d))]))
return CampaignKingdomAdd(x0_32, x1_13, 2, 0)
