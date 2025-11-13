// 函数: _Z22CardMod_CardTrait_Testv
// 地址: 0xa41090
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CampaignHasExpansion(0x11)

if ((x0 & 1) != 0)
    void* x8_2 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
    
    if (*(x8_2 + 0x34) != 0)
        return zx.q(*(x8_2 + 0x70) == 0 ? 1 : 0)

return zx.q(x0) & 1
