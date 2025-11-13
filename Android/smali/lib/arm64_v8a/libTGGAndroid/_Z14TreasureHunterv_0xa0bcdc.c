// 函数: _Z14TreasureHunterv
// 地址: 0xa0bcdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
MoneyPlus(1, 0, false)
int64_t result = CountCardsGainedLastTurn(PlayerRight())

if (result.d s>= 1)
    int32_t i_1 = result.d
    int32_t i
    
    do
        result = GainCard(0x105, 0x476, 0, 0, 4)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
