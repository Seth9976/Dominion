// 函数: _Z33Trail_OnGainTrashDiscard_TestGain6CardID
// 地址: 0xa7d7ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((IsCleanupPhase() & 1) == 0 && ThisCard(false, nullptr) == x19)
    if (CardWhere(zx.q(x19)) != CardGainedToWhere(zx.q(x19)))
        return 0
    
    return (zx.q(LimitPlayableCards(zx.q(x19))) ^ 1) & 1

return 0
