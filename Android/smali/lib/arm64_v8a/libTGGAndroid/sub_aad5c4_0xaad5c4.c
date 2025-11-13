// 函数: sub_aad5c4
// 地址: 0xaad5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0 = SnapshotOwner()
CurrentWho()

if (x0 == CardOwner(ThisCard(true, nullptr)) && (CardIs(zx.q(x19), 2) & 1) != 0)
    return IsFirstCardPlayed(zx.q(x19)) __tailcall

return 0
