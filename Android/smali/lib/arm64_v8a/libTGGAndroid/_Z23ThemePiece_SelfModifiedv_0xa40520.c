// 函数: _Z23ThemePiece_SelfModifiedv
// 地址: 0xa40520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
int32_t* x8_3

if (x10.d == 2)
    x8_3 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_3 = x8 + (x10 << 3) + 0x5010

int32_t x9_3 = *x8_3

if (x9_3 == 0x5dc)
    int32_t x19_2 = x8_3[1]
    char* x1_4 = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x19_2))
    int64_t x3_2
    
    if (*(gCampaignSetup + 0x19b4) == 0)
        x3_2 = 3
    else
        x3_2 = 5
    
    CampaignKingdomAdd(zx.q(x19_2), x1_4, 4, x3_2)
    return LandscapeMod(zx.q(x19_2)) __tailcall

if (x9_3 == 0x3e8)
    int32_t x19_1 = x8_3[1]
    RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x19_1))
    int32_t x20_1
    
    if (*(gCampaignSetup + 0x19b4) == 0)
        x20_1 = 3
    else
        x20_1 = 5
    
    char* x1_2 = IsLandscape(zx.q(x19_1))
    int64_t x8_5 = *(gCampaignSetup + 0x19a0)
    int64_t x9_4 = sx.q(*(gCampaignSetup + 0x19a8))
    void* x10_1 = x8_5 + (x9_4 << 0xb)
    
    if (*(x10_1 + 0xc) != x19_1 && *(x10_1 + 0x10) != x19_1)
        void* x10_3 = x8_5 + (x9_4 << 0xb)
        
        if (*(x10_3 + 0x14) != x19_1 && *(x10_3 + 0x18) != x19_1)
            void* x10_5 = x8_5 + (x9_4 << 0xb)
            
            if (*(x10_5 + 0x1c) != x19_1 && *(x10_5 + 0x20) != x19_1)
                void* x10_7 = x8_5 + (x9_4 << 0xb)
                
                if (*(x10_7 + 0x24) != x19_1 && *(x10_7 + 0x28) != x19_1)
                    void* x8_6 = x8_5 + (x9_4 << 0xb)
                    
                    if (*(x8_6 + 0x2c) != x19_1 && *(x8_6 + 0x30) != x19_1)
                        CampaignKingdomAdd(zx.q(x19_1), x1_2, 0, zx.q(x20_1))
    
    int32_t x8_8 = *(gCampaignSetup + 0x19ac)
    *(gCampaignSetup + 0x19ac) = x19_1
    *(gCampaignSetup + 0x19b0) = x8_8
    int64_t* x8_10 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0xffa) << 3)
    int32_t* x9_7
    
    do
        x9_7 = *x8_10
        x8_10 = &x9_7[4]
    while (*x9_7 != 0xfa0)
    
    void* x8_12 = *(x9_7 + 8)
    int64_t x9_9
    
    if (*(x8_12 + 0x18) != 5)
        if (*(x8_12 + 0x288) == 5)
            x9_9 = 1
            goto label_a40714
        
        if (*(x8_12 + 0x4f8) == 5)
            x9_9 = 2
            goto label_a40714
        
        if (*(x8_12 + 0x768) == 5)
            x9_9 = 3
            goto label_a40714
    else
        x9_9 = 0
    label_a40714:
        void* x8_15 = x8_12 + x9_9 * 0x270
        int32_t i = RollTable(gCampaignSetup, x8_15 + 0x20, *(x8_15 + 0x280))
        int64_t* x8_18 =
            *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
        int32_t* x9_15
        
        do
            x9_15 = *x8_18
            x8_18 = &x9_15[4]
        while (*x9_15 != i)
        
        void* x8_20 = *(x9_15 + 8)
        int64_t x9_17
        
        if (*(x8_20 + 0x18) == 1)
            x9_17 = 0
        label_a407b4:
            int64_t result = (*(x8_20 + x9_17 * 0x270 + 0x20))()
            int32_t x8_23 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            *(gCampaignSetup + 0x19ac) = x8_23
            return result
        
        if (*(x8_20 + 0x288) == 1)
            x9_17 = 1
            goto label_a407b4
        
        if (*(x8_20 + 0x4f8) == 1)
            x9_17 = 2
            goto label_a407b4
        
        if (*(x8_20 + 0x768) == 1)
            x9_17 = 3
            goto label_a407b4

pthread_kill(pthread_self(), 6)
XNoReturn()
return ThemePiece_CardCombo() __tailcall
