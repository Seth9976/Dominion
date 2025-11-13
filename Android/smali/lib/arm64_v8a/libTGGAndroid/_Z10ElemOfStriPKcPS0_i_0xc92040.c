// 函数: _Z10ElemOfStriPKcPS0_i
// 地址: 0xc92040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 0

if (strcasecmp(arg1, *arg2) == 0)
    return 1

uint64_t x21_1 = zx.q(arg3)
int64_t x8 = 1
int64_t x22_1
int32_t i

do
    x22_1 = x8
    
    if (x21_1 == x8)
        break
    
    i = strcasecmp(arg1, arg2[x22_1])
    x8 = x22_1 + 1
while (i != 0)
return zx.q(x22_1 u< x21_1 ? 1 : 0)
