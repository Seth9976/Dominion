// 函数: _Z34Trail_OnGainTrashDiscard_TestTrash6CardID
// 地址: 0xa7d838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((IsCleanupPhase() & 1) == 0 && ThisCard(false, nullptr) == x19)
    if (CardWhere(zx.q(x19)) != 2)
        return 0
    
    return (zx.q(LimitPlayableCards(zx.q(x19))) ^ 1) & 1

return 0
