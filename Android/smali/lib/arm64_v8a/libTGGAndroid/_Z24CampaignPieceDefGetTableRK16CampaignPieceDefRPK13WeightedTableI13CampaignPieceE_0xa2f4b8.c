// 函数: _Z24CampaignPieceDefGetTableRK16CampaignPieceDefRPK13WeightedTableI13CampaignPieceE
// 地址: 0xa2f4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x18) == 5)
    x8_1 = 0
else if (*(arg1 + 0x288) == 5)
    x8_1 = 1
else if (*(arg1 + 0x4f8) != 5)
    if (*(arg1 + 0x768) != 5)
        pthread_kill(pthread_self(), 6)
        uint64_t x0_2
        int64_t x1
        x0_2, x1 = XNoReturn()
        return CampaignPieceExists(x0_2, x1) __tailcall
    
    x8_1 = 3
else
    x8_1 = 2

void* x8_5 = arg1 + x8_1 * 0x270
*arg2 = x8_5 + 0x20
return zx.q(*(x8_5 + 0x280))
