// 函数: sub_a581e8
// 地址: 0xa581e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((CardIsWhereGained(arg1) & 1) != 0)
    int32_t x0_1 = Trigger_AssociatedInt()
    
    if (PileSource(*(DomGetContext() + 8), zx.q(x19)) == x0_1 && (IsCleanupPhase() & 1) == 0
            && (CardIsWhereGained(zx.q(x19)) & 1) != 0)
        return (LimitPlayableCards(zx.q(x19)) ^ 1) & 1

return 0
