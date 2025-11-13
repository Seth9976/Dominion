// 函数: _Z17TwistAlchemy_Testv
// 地址: 0xa3bbc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CampaignHasExpansion(5) & 1) == 0)
    return 0

return zx.q(*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) == 0
    ? 1 : 0)
