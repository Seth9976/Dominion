// 函数: _Z33CampaignExpansionThemeAlreadyUsed12DomExpansion
// 地址: 0xa420b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(gCampaignSetup + 0x19a0)

if (*(x9 + 0x5010) == 0x834 && *(x9 + 0x5014) == arg1)
    return 1

if (*(x9 + 0x5018) == 0x834 && *(x9 + 0x501c) == arg1)
    return 1

void* x8_1 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)

if (*(x8_1 + 0x540) == 0x834 && *(x8_1 + 0x544) == arg1)
    return 1

return 0
