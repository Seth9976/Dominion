// 函数: _Z30CampaignMissionCountLandscapesv
// 地址: 0xa3feb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
int64_t x9 = sx.q(*(gCampaignSetup + 0x19a8))
void* x10 = x8 + (x9 << 0xb)

if (*(x10 + 0x34) == 0)
    return 0

if (*(x10 + 0x70) == 0)
    return 1

void* x8_1 = x8 + (x9 << 0xb)

if (*(x8_1 + 0xac) == 0)
    return 2

if (*(x8_1 + 0xe8) != 0)
    return 4

return 3
