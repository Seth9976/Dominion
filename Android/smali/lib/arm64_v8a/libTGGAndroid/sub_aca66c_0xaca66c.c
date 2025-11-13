// 函数: sub_aca66c
// 地址: 0xaca66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CurrentTurnWho() != CurrentWho())
    return 0

return (CountCardsGainedAnyBuyPhaseThisTurn() == 0 ? 1 : 0).b
