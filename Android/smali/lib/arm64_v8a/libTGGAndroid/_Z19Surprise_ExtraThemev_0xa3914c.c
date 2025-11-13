// 函数: _Z19Surprise_ExtraThemev
// 地址: 0xa3914c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
int64_t x9 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x20 = *(gCampaignSetup + 0x19b4)
*(gCampaignSetup + 0x19b4) = 2
*(x8 + (x9 << 0xb) + 0x540) = 0x384
RollThemeCategory()
int64_t result = ApplyMissionTheme(2, 2)
*(gCampaignSetup + 0x19b4) = x20
return result
