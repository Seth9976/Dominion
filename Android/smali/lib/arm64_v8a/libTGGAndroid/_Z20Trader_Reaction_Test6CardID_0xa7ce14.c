// 函数: _Z20Trader_Reaction_Test6CardID
// 地址: 0xa7ce14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((CardIs(arg1, 0x105) & 1) == 0)
    int64_t x0_2 = CardWhereEx(zx.q(x19))
    int64_t x0_4 = CardGainedToWhereEx(zx.q(x19))
    
    if (x0_2.d == x0_4.d)
        return zx.q((x0_2 u>> 0x20).d == (x0_4 u>> 0x20).d ? 1 : 0)

return 0
