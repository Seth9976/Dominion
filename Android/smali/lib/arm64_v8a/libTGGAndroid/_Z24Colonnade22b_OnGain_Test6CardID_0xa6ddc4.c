// 函数: _Z24Colonnade22b_OnGain_Test6CardID
// 地址: 0xa6ddc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsYourBuyPhaseWhenGained() & 1) != 0)
    int32_t x0_2 = CardWhat(zx.q(arg1))
    
    if ((SnapshotIsType(4) & 1) != 0)
        return zx.q(CountWhereWhat(0x3e9, zx.q(x0_2), 0xffffffff) s> 0 ? 1 : 0)

return 0
