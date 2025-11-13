// 函数: _Z14CityState_Test6CardID
// 地址: 0xa1ace0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((CardIs(arg1, 4) & 1) != 0 && CurrentWho() == CurrentTurnWho())
    int64_t x0_4 = CardGainedToWhereEx(zx.q(x19))
    int64_t x0_6 = CardWhereEx(zx.q(x19))
    
    if (x0_4.d == x0_6.d)
        return zx.q((x0_4 u>> 0x20).d == (x0_6 u>> 0x20).d ? 1 : 0)

return 0
