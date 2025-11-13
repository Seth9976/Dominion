// 函数: _Z21CampaignApplyDeferFns18CampaignDeferPhase
// 地址: 0xa52c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gCampaignSetup + 0x5c50)

if (x8 s< 1)
    return 

int64_t i = 0
int64_t (* x24_1)() = gCampaignSetup + 0x5964

do
    if (*(x24_1 - 0xc) == arg1.d && zx.d(*(x24_1 - 4)) == 0)
        int32_t x26_1 = *(gCampaignSetup + 0x5c54)
        int32_t x27_1 = *(gCampaignSetup + 0x19b4)
        *(gCampaignSetup + 0x5c54) = *x24_1
        *(gCampaignSetup + 0x19b4) = *(x24_1 - 8)
        (*(x24_1 - 0x14))()
        *(gCampaignSetup + 0x5c54) = x26_1
        *(gCampaignSetup + 0x19b4) = x27_1
        *(x24_1 - 4) = 1
        x8 = *(gCampaignSetup + 0x5c50)
    
    i += 1
    x24_1 += 0x18
while (i s< sx.q(x8))
