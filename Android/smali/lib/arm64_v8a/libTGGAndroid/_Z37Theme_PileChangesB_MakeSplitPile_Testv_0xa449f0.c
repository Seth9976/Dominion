// 函数: _Z37Theme_PileChangesB_MakeSplitPile_Testv
// 地址: 0xa449f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CampaignHasExpansion(0xc) & 1) == 0 && (CampaignHasExpansion(0x10) & 1) == 0)
    return 0

return zx.q(*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) == 0
    ? 1 : 0)
