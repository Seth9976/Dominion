// 函数: _Z24CampaignPieceDefGetCardsRK16CampaignPieceDefRPK11DomCardEnum13CampaignLabel
// 地址: 0xa2f344
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x18) == 6 && *(arg1 + 0x284) == arg3)
    x8_1 = 0
else if (*(arg1 + 0x288) == 6 && *(arg1 + 0x4f4) == arg3)
    x8_1 = 1
else if (*(arg1 + 0x4f8) != 6 || *(arg1 + 0x764) != arg3)
    if (*(arg1 + 0x768) != 6 || *(arg1 + 0x9d4) != arg3)
        return 0
    
    x8_1 = 3
else
    x8_1 = 2

void* x8_8 = arg1 + x8_1 * 0x270
*arg2 = *(x8_8 + 0x20)
return zx.q(*(x8_8 + 0x280))
