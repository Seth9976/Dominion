// 函数: _Z6ElemOfRK7CardIDs6CardID
// 地址: 0xbe8dcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0xc80))

if (x8.d s< 1)
    return 0

if (*arg1 == arg2)
    return 1

int64_t x10 = 1
int64_t x9_1

do
    x9_1 = x10
    
    if (x8 == x10)
        break
    
    x10 = x9_1 + 1
while (*(arg1 + (x9_1 << 2)) != arg2)

return zx.q(x9_1 u< x8 ? 1 : 0)
