// 函数: _Z16CampaignAddTwist13CampaignPiece
// 地址: 0xa30204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg1) | zx.q(arg1 s>> 4)
int32_t i = arg1
int64_t x8 = *gCampaignData
uint64_t x9_1 = zx.q(*(gCampaignData + 8)) & x21
int64_t* x10 = x8 + (x9_1 << 3)
int32_t* x11_1

do
    x11_1 = *x10
    x10 = &x11_1[4]
while (*x11_1 != i)

void* x10_2 = *(x11_1 + 8)
int64_t x10_4

if (*(x10_2 + 0x18) == 2)
    x10_4 = *(x10_2 + 0x20)
    
    if (x10_4 != 0)
    label_a302d8:
        
        if ((x10_4() & 1) == 0)
            return XTrace("Don't meet requirement for twist") __tailcall
        
        x8 = *gCampaignData
        x9_1 = zx.q(*(gCampaignData + 8)) & zx.q(x21.d)
else if (*(x10_2 + 0x288) == 2)
    x10_4 = *(x10_2 + 0x290)
    
    if (x10_4 != 0)
        goto label_a302d8
else if (*(x10_2 + 0x4f8) == 2)
    x10_4 = *(x10_2 + 0x500)
    
    if (x10_4 != 0)
        goto label_a302d8
else if (*(x10_2 + 0x768) == 2)
    x10_4 = *(x10_2 + 0x770)
    
    if (x10_4 != 0)
        goto label_a302d8
int64_t* x8_1 = x8 + (x9_1 << 3)
int32_t* x9_3

do
    x9_3 = *x8_1
    x8_1 = &x9_3[4]
while (*x9_3 != i)

void* x21_1 = *(x9_3 + 8)
void* var_60

if (i == 0x17d8)
    var_60 = &_vtable_for_std::__ndk1::__function::__func<Twist_RoomForMore_Setup()::$_60, std::__ndk1::allocator<Twist_RoomForMore_Setup()::$_60>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    void** var_40_1 = &var_60
    int32_t x0_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)
    
    if (&var_60 == var_40_1)
        (*(*var_40_1 + 0x20))(var_40_1)
    else if (var_40_1 != 0)
        (*(*var_40_1 + 0x28))(var_40_1)
    
    *(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x2cc) = x0_3
    RollKingdom_SetupPile(zx.q(x0_3), 0)
    
    if (*(x21_1 + 0x18) == 4)
        goto label_a30330
    
    goto label_a303e0

if (i == 0x17e3)
    Twist_Typhoon_Setup()

int32_t var_24
int64_t x8_10

if (*(x21_1 + 0x18) != 4)
label_a303e0:
    
    if (*(x21_1 + 0x288) == 4)
        x8_10 = 1
        goto label_a30418
    
    if (*(x21_1 + 0x4f8) == 4)
        x8_10 = 2
        goto label_a30418
    
    if (*(x21_1 + 0x768) == 4)
        x8_10 = 3
        goto label_a30418
    
    var_24 = 0
else
label_a30330:
    x8_10 = 0
label_a30418:
    void* x8_13 = x21_1 + x8_10 * 0x270
    var_60 = x8_13 + 0x20
    int32_t x8_14 = *(x8_13 + 0x280)
    var_24 = x8_14
    
    if (x8_14 != 0)
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddTwist(CampaignPiece)::$_8, std::__ndk1::allocator<CampaignAddTwist(CampaignPiece)::$_8>, bool (DomCardEnum)>::VTable
            * const var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddTwist(CampaignPiece)::$_8, std::__ndk1::allocator<CampaignAddTwist(CampaignPiece)::$_8>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        int32_t* var_88_1 = &var_24
        int64_t* var_80_1 = &var_60
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddTwist(CampaignPiece)::$_8, std::__ndk1::allocator<CampaignAddTwist(CampaignPiece)::$_8>, bool (DomCardEnum)>::VTable
            * const* var_70_1 = &var_90
        int32_t x0_7
        char* x1_4
        x0_7, x1_4 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
        
        if (&var_90 == var_70_1)
            x1_4 = (*var_70_1)->vFunc_4(var_70_1)
        else if (var_70_1 != 0)
            x1_4 = (*var_70_1)->j_operator delete(var_70_1)
        
        if (x0_7 == 0)
            XTrace("Couldn't add twist card")
        else
            CampaignKingdomAdd(zx.q(x0_7), x1_4, 4, 0)
return CampaignAddExtra(zx.q(i), 0, 0xffffffff, 0, 0)
