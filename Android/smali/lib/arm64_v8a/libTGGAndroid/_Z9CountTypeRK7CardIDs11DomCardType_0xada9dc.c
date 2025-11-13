// 函数: _Z9CountTypeRK7CardIDs11DomCardType
// 地址: 0xada9dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg1 + 0xc80) s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    
    do
        int32_t x0_2 = CardIs(*(DomGetContext() + 8), zx.q(*(arg1 + (i << 2))), arg2)
        i += 1
        x21 += x0_2 & 1
    while (i s< sx.q(*(arg1 + 0xc80)))

return zx.q(x21)
