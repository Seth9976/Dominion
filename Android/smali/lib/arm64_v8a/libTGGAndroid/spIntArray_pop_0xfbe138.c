// 函数: spIntArray_pop
// 地址: 0xfbe138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 8)
int64_t x8 = sx.q(*arg1) - 1
*arg1 = x8.d
return zx.q(*(x9 + (x8 << 2)))
