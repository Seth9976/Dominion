// 函数: sub_a571bc
// 地址: 0xa571bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_2 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0xbbb) << 3)
int32_t* x9_1

do
    x9_1 = *x8_2
    x8_2 = &x9_1[4]
while (*x9_1 != 0xbb8)

void* x8_4 = *(x9_1 + 8)
int64_t x9_3

if (*(x8_4 + 0x18) != 5)
    if (*(x8_4 + 0x288) == 5)
        x9_3 = 1
        goto label_a57244
    
    if (*(x8_4 + 0x4f8) == 5)
        x9_3 = 2
        goto label_a57244
    
    if (*(x8_4 + 0x768) == 5)
        x9_3 = 3
        goto label_a57244
else
    x9_3 = 0
label_a57244:
    void* x8_5 = x8_4 + x9_3 * 0x270
    int32_t i = RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280))
    int64_t* x8_8 = *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
    int32_t* x9_8
    
    do
        x9_8 = *x8_8
        x8_8 = &x9_8[4]
    while (*x9_8 != i)
    
    void* x8_10 = *(x9_8 + 8)
    
    if (*(x8_10 + 0x18) == 1)
        jump(*(x8_10 + 0x20))
    
    if (*(x8_10 + 0x288) == 1)
        jump(*(x8_10 + 0x290))
    
    if (*(x8_10 + 0x4f8) == 1)
        jump(*(x8_10 + 2 * 0x270 + 0x20))
    
    if (*(x8_10 + 0x768) == 1)
        jump(*(x8_10 + 3 * 0x270 + 0x20))
pthread_kill(pthread_self(), 6)
int64_t var_20 = XNoReturn()
int64_t (* const var_18)() = gCampaignData
int64_t* x8_14 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x9dc) << 3)
int32_t* x9_15

do
    x9_15 = *x8_14
    x8_14 = &x9_15[4]
while (*x9_15 != 0x9c4)

void* x8_16 = *(x9_15 + 8)
int64_t x9_17

if (*(x8_16 + 0x18) != 5)
    if (*(x8_16 + 0x288) == 5)
        x9_17 = 1
        goto label_a57380
    
    if (*(x8_16 + 0x4f8) == 5)
        x9_17 = 2
        goto label_a57380
    
    if (*(x8_16 + 0x768) == 5)
        x9_17 = 3
        goto label_a57380
else
    x9_17 = 0
label_a57380:
    void* x8_17 = x8_16 + x9_17 * 0x270
    int32_t i_1 = RollTable(gCampaignSetup, x8_17 + 0x20, *(x8_17 + 0x280))
    int64_t* x8_20 =
        *gCampaignData + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
    int32_t* x9_22
    
    do
        x9_22 = *x8_20
        x8_20 = &x9_22[4]
    while (*x9_22 != i_1)
    
    void* x8_22 = *(x9_22 + 8)
    
    if (*(x8_22 + 0x18) == 1)
        jump(*(x8_22 + 0x20))
    
    if (*(x8_22 + 0x288) == 1)
        jump(*(x8_22 + 0x290))
    
    if (*(x8_22 + 0x4f8) == 1)
        jump(*(x8_22 + 2 * 0x270 + 0x20))
    
    if (*(x8_22 + 0x768) == 1)
        jump(*(x8_22 + 3 * 0x270 + 0x20))
pthread_kill(pthread_self(), 6)
int64_t result
int64_t lr_2
result, lr_2 = XNoReturn()
int64_t var_60 = lr_2
int64_t (* const var_28)() = gCampaignData
void* x22 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)

if (*(x22 + 0xc) == 0)
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum)>, bool (DomCardEnum)>::VTable
        * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum)>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda'(DomCardEnum)>, bool (DomCardEnum)>::VTable
        * const* var_70_1 = &var_90
    int32_t x0_8
    char* x1_4
    x0_8, x1_4 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    
    if (&var_90 == var_70_1)
        x1_4 = (*var_70_1)->vFunc_4(var_70_1)
    else if (var_70_1 != 0)
        x1_4 = (*var_70_1)->j_operator delete(var_70_1)
    
    result = CampaignKingdomAdd(zx.q(x0_8), x1_4, 0, 0)

int32_t x23 = 0
bool cond:1_1

do
    int32_t x20_1 = *(x22 + (sx.q(x23) << 2) + 0xc)
    
    if (x20_1 == 0)
        if (*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) != 0)
            break
        
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum)>, bool (DomCardEnum)>::VTable
            * const var_c0 = &_vtable_for_std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum)>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum), std::__ndk1::allocator<Surprise_Combo()::$_45::operator()() const::'lambda0'(DomCardEnum)>, bool (DomCardEnum)>::VTable
            * const* var_a0_1 = &var_c0
        int32_t x0_12
        char* x1_6
        x0_12, x1_6 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
        x20_1 = x0_12
        
        if (&var_c0 == var_a0_1)
            x1_6 = (*var_a0_1)->vFunc_4(var_a0_1)
        else if (var_a0_1 != 0)
            x1_6 = (*var_a0_1)->j_operator delete(var_a0_1)
        
        result = CampaignKingdomAdd(zx.q(x20_1), x1_6, 0, 0)
    
    if (*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) != 0)
        break
    
    char* x1_7
    result, x1_7 = CampaignDrawRandomCombo(zx.q(x20_1))
    
    if (result.d != 0)
        result = CampaignKingdomAdd(result, x1_7, 2, 0)
        x23 -= not.d(result.d) & 1
    
    cond:1_1 = x23 s>= 9
    x23 += 1
while (not(cond:1_1))
return result
