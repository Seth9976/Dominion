// 函数: _Z9CheckSameRK7CardIDs
// 地址: 0xad4f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) == 0)
    return 0

int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(*arg1))

if (*(arg1 + 0xc80) s< 2)
    return zx.q(*arg1)

int64_t x22_1 = 1

while (true)
    if (CardWhat(*(DomGetContext() + 8), zx.q(*(arg1 + (x22_1 << 2)))) != x0_2)
        return 0
    
    x22_1 += 1
    
    if (x22_1 s>= sx.q(*(arg1 + 0xc80)))
        return zx.q(*arg1)
