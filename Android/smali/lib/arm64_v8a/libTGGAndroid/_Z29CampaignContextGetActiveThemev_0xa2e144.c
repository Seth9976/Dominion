// 函数: _Z29CampaignContextGetActiveThemev
// 地址: 0xa2e144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))

if (x8.d == 2)
    return x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540

return x9 + (x8 << 3) + 0x5010
