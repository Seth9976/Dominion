// 函数: _Z27LandMod_Trait_Affects2Pilesv
// 地址: 0xa324ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gCampaignSetup + 0x5c50))
int32_t x12 = *(gCampaignSetup + 0x19ac)
*(gCampaignSetup + 0x5c50) = x10.d + 1
void* x10_1 = gCampaignSetup + x10 * 0x18
*(x10_1 + 0x5950) = sub_a569a8
*(x10_1 + 0x5958) = 4
*(x10_1 + 0x595c) = *(gCampaignSetup + 0x19b4)
*(x10_1 + 0x5960) = 0
*(x10_1 + 0x5964) = x12
