// 函数: _Z12CardsetGetUIR7Cardseti
// 地址: 0x9a9990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x258) = 1
*(arg1 + 0x1560) = 1
int32_t x8 = *(arg1 + 0x1520)
int32_t x9

if (x8 s> arg2)
    x9 = x8
else
    x9 = arg2 + 1

*(arg1 + 0x1520) = x9
return arg1 + (sx.q(arg2) << 2)
