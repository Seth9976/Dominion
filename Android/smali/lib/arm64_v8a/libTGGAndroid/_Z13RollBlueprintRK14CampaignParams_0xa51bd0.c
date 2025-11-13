// 函数: _Z13RollBlueprintRK14CampaignParams
// 地址: 0xa51bd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 0)
    return 0x140

if (x8 == 1)
    int64_t* x8_2 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x13f) << 3)
    int32_t* x9_3
    
    do
        x9_3 = *x8_2
        x8_2 = &x9_3[4]
    while (*x9_3 != 0x12d)
    
    void* x8_4 = *(x9_3 + 8)
    
    if (*(x8_4 + 0x18) == 5)
        return RollTable(gCampaignSetup, x8_4 + 0x20, *(x8_4 + 0x280)) __tailcall
    
    void* x8_5
    
    if (*(x8_4 + 0x288) == 5)
        x8_5 = x8_4 + 0x270
        return RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280)) __tailcall
    
    if (*(x8_4 + 0x4f8) == 5)
        x8_5 = x8_4 + 2 * 0x270
        return RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280)) __tailcall
    
    if (*(x8_4 + 0x768) == 5)
        x8_5 = x8_4 + 3 * 0x270
        return RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280)) __tailcall

pthread_kill(pthread_self(), 6)
return CategoryKey(XNoReturn()) __tailcall
