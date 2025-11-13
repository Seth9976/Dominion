// 函数: _Z29Changeling_Always_OnGain_Test6CardID
// 地址: 0xa95a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((CardIs(arg1, 0xd06) & 1) == 0 && (CanExchange(zx.q(x19), 0xd06) & 1) != 0
        && (CostAtLeast(zx.q(CostAtGainMoment(zx.q(x19))), 3) & 1) != 0)
    int64_t x0_8 = CardWhereEx(zx.q(x19))
    int64_t x0_10 = CardGainedToWhereEx(zx.q(x19))
    
    if (x0_8.d == x0_10.d)
        return zx.q((x0_8 u>> 0x20).d == (x0_10 u>> 0x20).d ? 1 : 0)

return 0
