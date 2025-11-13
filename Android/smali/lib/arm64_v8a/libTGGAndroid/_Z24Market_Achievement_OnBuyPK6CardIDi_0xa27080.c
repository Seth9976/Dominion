// 函数: _Z24Market_Achievement_OnBuyPK6CardIDi
// 地址: 0xa27080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()
int32_t x0_2 = CardIs(zx.q(*arg1), 0x215)
int32_t x8_1 = *x0

if ((x0_2 & 1) != 0)
    x8_1 += 1
    *x0 = x8_1

if (x8_1 != 2)
    return 0

return zx.q(CountPlayedThisTurn(0x215) s> 0 ? 1 : 0)
