// 函数: sub_a5831c
// 地址: 0xa5831c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0 = Trigger_AssociatedInt()

if (PileSource(*(DomGetContext() + 8), zx.q(x19)) == x0 && (IsCleanupPhase() & 1) == 0
        && CardWhere(zx.q(x19)) == 2)
    return (LimitPlayableCards(zx.q(x19)) ^ 1) & 1

return 0
