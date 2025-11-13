// 函数: _Z40Theme_PileChangesB_SplitPileShuffle_Testv
// 地址: 0xa448ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) != 0)
    return 0

if ((CampaignHasExpansion(0xc) & 1) == 0)
    return CampaignHasExpansion(0x10) __tailcall

return 1
