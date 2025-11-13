// 函数: _Z9ElementOfPK6CardIDiS_
// 地址: 0xb0a1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

if (*arg1 == arg3)
    return 1

uint64_t x8_1 = zx.q(arg2)
int64_t x10 = 1
int64_t x9_1

do
    x9_1 = x10
    
    if (x8_1 == x10)
        break
    
    x10 = x9_1 + 1
while (*(arg1 + (x9_1 << 2)) != arg3)

return zx.q(x9_1 u< x8_1 ? 1 : 0)
