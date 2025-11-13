// 函数: _Z20RollMissionBlueprint10ThemeIndex11ThemeLetter
// 地址: 0xa38918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
int32_t* x21

if (x8.d == 2)
    x21 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x21 = x9 + (x8 << 3) + 0x5010

int32_t i_1 = *x21

if (i_1 != 0)
    goto label_a38acc

int32_t x0 = CampaignNumExpansions()
uint64_t x8_1 = zx.q(*(gCampaignData + 8))
void* x8_5

if (x0 s<= 2)
    int64_t* x8_3 = *gCampaignData + ((x8_1 & 0x333) << 3)
    int32_t* x9_4
    
    do
        x9_4 = *x8_3
        x8_3 = &x9_4[4]
    while (*x9_4 != 0x321)
    
    x8_5 = *(x9_4 + 8)
    
    if (*(x8_5 + 0x18) != 5)
        goto label_a389e8
    
    goto label_a389a8

void* x8_7 = *gCampaignData + ((zx.q(x8_1.d) & 0x332) << 3)
int32_t* x9_7

do
    x9_7 = *x8_7
    x8_7 = &x9_7[4]
while (*x9_7 != 0x322)

x8_5 = *(x9_7 + 8)
int64_t x9_10

if (*(x8_5 + 0x18) == 5)
label_a389a8:
    x9_10 = 0
label_a38a20:
    void* x8_9 = x8_5 + x9_10 * 0x270
    int32_t i = RollTable(gCampaignSetup, x8_9 + 0x20, *(x8_9 + 0x280))
    *x21 = i
    int64_t* x8_13 =
        *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(i) | zx.q(i s>> 4))) << 3)
    int32_t* x9_14
    
    do
        x9_14 = *x8_13
        x8_13 = &x9_14[4]
    while (*x9_14 != i)
    
    void* x8_15 = *(x9_14 + 8)
    int64_t x9_16
    
    if (*(x8_15 + 0x18) != 1)
        if (*(x8_15 + 0x288) == 1)
            x9_16 = 1
            goto label_a38ac4
        
        if (*(x8_15 + 0x4f8) == 1)
            x9_16 = 2
            goto label_a38ac4
        
        if (*(x8_15 + 0x768) == 1)
            x9_16 = 3
            goto label_a38ac4
    else
        x9_16 = 0
    label_a38ac4:
        (*(x8_15 + x9_16 * 0x270 + 0x20))()
        i_1 = *x21
    label_a38acc:
        uint64_t x8_18 = zx.q(*(gCampaignData + 8))
        int64_t x9_20 = *gCampaignData
        int64_t* x11_3 = x9_20 + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & x8_18) << 3)
        int32_t* x12_1
        
        do
            x12_1 = *x11_3
            x11_3 = &x12_1[4]
        while (*x12_1 != i_1)
        
        void* x10_7 = *(x12_1 + 8)
        int64_t x11_6
        
        if (*(x10_7 + 0x18) == 3)
            x11_6 = 0
        else if (*(x10_7 + 0x288) == 3)
            x11_6 = 1
        else if (*(x10_7 + 0x4f8) != 3)
            x11_6 = 3
        else
            x11_6 = 2
        
        uint64_t result = zx.q(*(x10_7 + x11_6 * 0x270 + (zx.q(arg2) << 2) + 0x20))
        int64_t* x8_20 = x9_20 + (((zx.q(result.d) | zx.q(result.d s>> 4)) & x8_18) << 3)
        int64_t* x9_21 = x8_20
        int32_t* x10_11
        
        do
            x10_11 = *x9_21
            x9_21 = &x10_11[4]
        while (*x10_11 != result.d)
        
        if ((*(*(x10_11 + 8) + 0x10) & 0xfffffffe) == 0x324)
            return result
        
        int32_t* x9_26
        
        do
            x9_26 = *x8_20
            x8_20 = &x9_26[4]
        while (*x9_26 != result.d)
        
        void* x8_22 = *(x9_26 + 8)
        
        if (*(x8_22 + 0x18) == 5)
            return RollTable(gCampaignSetup, x8_22 + 0x20, *(x8_22 + 0x280)) __tailcall
        
        void* x8_23
        
        if (*(x8_22 + 0x288) == 5)
            x8_23 = x8_22 + 0x270
            return RollTable(gCampaignSetup, x8_23 + 0x20, *(x8_23 + 0x280)) __tailcall
        
        if (*(x8_22 + 0x4f8) == 5)
            x8_23 = x8_22 + 2 * 0x270
            return RollTable(gCampaignSetup, x8_23 + 0x20, *(x8_23 + 0x280)) __tailcall
        
        if (*(x8_22 + 0x768) == 5)
            x8_23 = x8_22 + 3 * 0x270
            return RollTable(gCampaignSetup, x8_23 + 0x20, *(x8_23 + 0x280)) __tailcall
else
label_a389e8:
    
    if (*(x8_5 + 0x288) == 5)
        x9_10 = 1
        goto label_a38a20
    
    if (*(x8_5 + 0x4f8) == 5)
        x9_10 = 2
        goto label_a38a20
    
    if (*(x8_5 + 0x768) == 5)
        x9_10 = 3
        goto label_a38a20
pthread_kill(pthread_self(), 6)
int64_t x0_5
int64_t x1_3
x0_5, x1_3 = XNoReturn()
return ApplyMissionTheme(x0_5, x1_3) __tailcall
