// 函数: _Z13CampaignDeferPFvvE18CampaignDeferPhasei
// 地址: 0xa32274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gCampaignSetup + 0x5c50))
*(gCampaignSetup + 0x5c50) = x10.d + 1
void* x9 = gCampaignSetup + x10 * 0x18
*(x9 + 0x5950) = arg1
*(x9 + 0x5958) = arg2
*(x9 + 0x595c) = *(gCampaignSetup + 0x19b4)
*(x9 + 0x5960) = 0
*(x9 + 0x5964) = arg3
