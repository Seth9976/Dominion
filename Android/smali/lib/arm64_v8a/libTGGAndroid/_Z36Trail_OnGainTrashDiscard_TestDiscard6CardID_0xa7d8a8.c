// 函数: _Z36Trail_OnGainTrashDiscard_TestDiscard6CardID
// 地址: 0xa7d8a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((IsCleanupPhase() & 1) == 0 && ThisCard(false, nullptr) == x19)
    if (CardWhere(zx.q(x19)) != 0x3ec)
        return 0
    
    return (zx.q(LimitPlayableCards(zx.q(x19))) ^ 1) & 1

return 0
