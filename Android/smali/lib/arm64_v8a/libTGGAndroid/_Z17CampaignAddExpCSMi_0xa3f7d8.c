// 函数: _Z17CampaignAddExpCSMi
// 地址: 0xa3f7d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 =
    *(&data_1135278 + sx.q(*(*(gCampaignSetup + 0x19a0) + 4)) * 0xa8 + (sx.q(arg1) << 2) - 0x1d0)

if (x19 == 0)
    return XTrace("missing campaign csm") __tailcall

char* entry_x1
CampaignKingdomAdd(zx.q(x19), entry_x1, 4, 1)

if ((IsLandscape(zx.q(x19)) & 1) != 0)
    return LandscapeMod(zx.q(x19)) __tailcall

int32_t i_1

if ((CardMod_HasSpecific(zx.q(x19), &i_1) & 1) != 0)
    int32_t x9_3 = *(gCampaignSetup + 0x19ac)
    *(gCampaignSetup + 0x19ac) = x19
    int32_t i = i_1
    *(gCampaignSetup + 0x19b0) = x9_3
    int64_t* x9_6 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(i) | zx.q(i s>> 4))) << 3)
    int32_t* x10_4
    
    do
        x10_4 = *x9_6
        x9_6 = &x10_4[4]
    while (*x10_4 != i)
    
    void* x8_7 = *(x10_4 + 8)
    int64_t x9_9
    
    if (*(x8_7 + 0x18) == 1)
        x9_9 = 0
    label_a3f900:
        int64_t result = (*(x8_7 + x9_9 * 0x270 + 0x20))()
        int32_t x8_10 = *(gCampaignSetup + 0x19b0)
        *(gCampaignSetup + 0x19b0) = 0
        *(gCampaignSetup + 0x19ac) = x8_10
        return result
    
    if (*(x8_7 + 0x288) == 1)
        x9_9 = 1
        goto label_a3f900
    
    if (*(x8_7 + 0x4f8) == 1)
        x9_9 = 2
        goto label_a3f900
    
    if (*(x8_7 + 0x768) == 1)
        x9_9 = 3
        goto label_a3f900

pthread_kill(pthread_self(), 6)
XNoReturn()
return MissionPiece_ExpCSM1() __tailcall
