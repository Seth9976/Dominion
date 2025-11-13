// 函数: _Z28Ironworks_Achievement_OnGainPK6CardIDi
// 地址: 0xa84ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 0

int32_t x0_1 = CardIs(zx.q(*arg1), 4)
int32_t x0_3 = CardIs(zx.q(*arg1), 2)
int32_t x9 = x0_1 & 1
int32_t x10

x10 = x9 != 0 ? 2 : 1

int32_t x19_1

if ((x0_3 & 1) != 0)
    x19_1 = x10
else
    x19_1 = x9

return zx.q(x19_1 + (CardIs(zx.q(*arg1), 8) & 1) u> 1 ? 1 : 0)
