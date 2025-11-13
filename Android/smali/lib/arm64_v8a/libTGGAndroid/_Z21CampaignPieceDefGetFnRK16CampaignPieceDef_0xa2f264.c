// 函数: _Z21CampaignPieceDefGetFnRK16CampaignPieceDef
// 地址: 0xa2f264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x18) == 1)
    x8_1 = 0
else if (*(arg1 + 0x288) == 1)
    x8_1 = 1
else if (*(arg1 + 0x4f8) != 1)
    if (*(arg1 + 0x768) != 1)
        pthread_kill(pthread_self(), 6)
        CampaignPieceDef* x0_2
        DomExpansion** x1
        x0_2, x1 = XNoReturn()
        return CampaignPieceDefGetExpansions(x0_2, x1) __tailcall
    
    x8_1 = 3
else
    x8_1 = 2

return *(arg1 + x8_1 * 0x270 + 0x20)
