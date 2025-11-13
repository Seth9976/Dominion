// 函数: _Z8Invasionv
// 地址: 0xaa3958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MayPlayTypeFromHand(0x20, 0x119)
GainCard(0x102, 0x476, 0, 0, 4)
GainCardType(4, 0x11a, 0x3eb)
int64_t result = GainLoot(0x476)

if (result.d != 0)
    int32_t x19_1 = result.d
    result = CardIsWhereGained(result)
    
    if ((result.d & 1) != 0)
        return PlayCard(zx.q(x19_1), 0x10) __tailcall

return result
