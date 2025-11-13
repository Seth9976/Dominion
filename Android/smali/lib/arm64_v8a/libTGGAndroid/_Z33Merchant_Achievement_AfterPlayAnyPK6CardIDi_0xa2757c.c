// 函数: _Z33Merchant_Achievement_AfterPlayAnyPK6CardIDi
// 地址: 0xa2757c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(zx.q(*arg1), 0x105) & 1) == 0)
    return 0

int32_t* x0_2 = DomAchievementDataGet()

if (CountWhereWhat(0x3ea, 0x105, 0xffffffff) == 0)
    return zx.q(*x0_2 s> 4 ? 1 : 0)

*x0_2 = 0
return 0
