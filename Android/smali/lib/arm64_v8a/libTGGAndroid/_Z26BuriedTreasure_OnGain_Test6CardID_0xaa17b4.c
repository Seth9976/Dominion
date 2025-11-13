// 函数: _Z26BuriedTreasure_OnGain_Test6CardID
// 地址: 0xaa17b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if (ThisCard(false, nullptr) == x19 && (LimitPlayableCards(zx.q(x19)) & 1) == 0)
    return CardIsWhereGained(zx.q(x19)) __tailcall

return 0
