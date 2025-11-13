// 函数: _Z5Crownv
// 地址: 0xa6cb20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CurrentPhase() == 1)
    MayPlayActionFromHand(2, 0x22, 0, false)

int64_t result = IsBuyPhase()

if ((result.d & 1) == 0)
    return result

return MayPlayTreasureFromHand(2, 0x9a) __tailcall
