// 函数: _Z31CampaignPieceDefGetListCategoryRK16CampaignPieceDefRPK15DomCardCategory
// 地址: 0xa2f44c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (*(arg1 + 0x18) == 4)
    x8 = 0
else if (*(arg1 + 0x288) == 4)
    x8 = 1
else if (*(arg1 + 0x4f8) != 4)
    if (*(arg1 + 0x768) != 4)
        return 0
    
    x8 = 3
else
    x8 = 2

void* x8_4 = arg1 + x8 * 0x270
*arg2 = x8_4 + 0x20
return zx.q(*(x8_4 + 0x280))
