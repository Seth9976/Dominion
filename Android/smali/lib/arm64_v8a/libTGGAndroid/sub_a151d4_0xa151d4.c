// 函数: sub_a151d4
// 地址: 0xa151d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = RevealDeckOne(0x3ee, 0x7ac73c)

if (x0.d != 0)
    int32_t x19_1 = x0.d
    
    if ((CostBetween(x0, 3, 6) & 1) != 0)
        return TrashDisplay(zx.q(x19_1), 0x3ee, 0) __tailcall
    
    DiscardCard(zx.q(x19_1), 0x3ee, 0xb, 7, 0)

return GainCurse() __tailcall
