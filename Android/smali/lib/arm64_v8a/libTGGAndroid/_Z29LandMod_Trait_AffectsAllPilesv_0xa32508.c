// 函数: _Z29LandMod_Trait_AffectsAllPilesv
// 地址: 0xa32508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_1 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
*(x9_1 + 0x550) |= 1
int64_t x9_2 = sx.q(*(gCampaignSetup + 0x5c50))
int32_t x12 = *(gCampaignSetup + 0x19ac)
*(gCampaignSetup + 0x5c50) = x9_2.d + 1
void* x9_3 = gCampaignSetup + x9_2 * 0x18
*(x9_3 + 0x5950) = &data_a56b64
*(x9_3 + 0x5958) = 4
*(x9_3 + 0x595c) = *(gCampaignSetup + 0x19b4)
*(x9_3 + 0x5960) = 0
*(x9_3 + 0x5964) = x12
