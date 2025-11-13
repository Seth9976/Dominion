// 函数: sub_accfe4
// 地址: 0xaccfe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((InSupplyTops(0x100, 0) & 1) == 0)
    return 0

if ((IsTurn() & 1) != 0)
    int64_t x0_3 = Trigger_AssociatedCardSingle()
    
    if (x0_3.d != 0 && (CardIsWhere(x0_3, 0x474) & 1) != 0
            && (CardIs(zx.q(arg1), zx.q(CardWhat(zx.q(x0_3.d)))) & 1) != 0)
        return 1

return 0
