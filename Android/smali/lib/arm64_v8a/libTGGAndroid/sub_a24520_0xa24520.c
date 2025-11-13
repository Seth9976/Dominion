// 函数: sub_a24520
// 地址: 0xa24520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = TopDeckCard()

if (x0.d != 0)
    int32_t x19_1 = x0.d
    TrashDisplay(x0, 0x3eb, 0x20)
    PauseUI(false)
    
    if ((CostAtLeast(zx.q(x19_1), 3) & 1) != 0)
        return GainCheaperThatSharesType(zx.q(x19_1), 0) __tailcall

return GainCurse() __tailcall
