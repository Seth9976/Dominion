// 函数: _Z21MissionPiece_ExpCombov
// 地址: 0xa3df0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = &data_1135278 + sx.q(*(*(gCampaignSetup + 0x19a0) + 4)) * 0xa8
int32_t x19 = *(x20 - 0x1bc)
char* entry_x1
char* x1 = CampaignKingdomAdd(zx.q(x19), entry_x1, 2, 0)
int32_t x20_1 = *(x20 - 0x1b8)
CampaignKingdomAdd(zx.q(x20_1), x1, 2, 0)
RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x19))
return RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x20_1)) __tailcall
