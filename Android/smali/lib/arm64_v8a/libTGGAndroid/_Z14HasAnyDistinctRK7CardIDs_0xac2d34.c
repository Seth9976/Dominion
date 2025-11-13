// 函数: _Z14HasAnyDistinctRK7CardIDs
// 地址: 0xac2d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0xc80))

if (x8.d s< 2)
    return 0

int64_t x11 = 1
int64_t x10_1

do
    x10_1 = x11
    
    if (x8 == x11)
        break
    
    x11 = x10_1 + 1
while (*(arg1 + (x10_1 << 2)) == *arg1)

return zx.q(x10_1 u< x8 ? 1 : 0)
