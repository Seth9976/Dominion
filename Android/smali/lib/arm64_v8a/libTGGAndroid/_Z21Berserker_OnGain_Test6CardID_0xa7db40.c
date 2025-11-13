// 函数: _Z21Berserker_OnGain_Test6CardID
// 地址: 0xa7db40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if (ThisCard(false, nullptr) != x19)
    return 0

if ((LimitPlayableCards(zx.q(x19)) & 1) == 0 && (CardIsWhereGained(zx.q(x19)) & 1) != 0)
    return zx.q(CountWhereType(0x3e9, 4) != 0 ? 1 : 0)

return 0
