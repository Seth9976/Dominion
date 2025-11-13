// 函数: _Z26Chapel_Achievement_OnTrashPK6CardIDi
// 地址: 0xa2683c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

if ((CostAtLeast(zx.q(*arg1), 5) & 1) != 0)
    return 1

uint64_t x20_1 = zx.q(arg2)
int64_t x8 = 1
int64_t x21_1
int32_t x0_5

do
    x21_1 = x8
    
    if (x20_1 == x8)
        break
    
    x0_5 = CostAtLeast(zx.q(*(arg1 + (x21_1 << 2))), 5)
    x8 = x21_1 + 1
while ((x0_5 & 1) == 0)
return zx.q(x21_1 u< x20_1 ? 1 : 0)
