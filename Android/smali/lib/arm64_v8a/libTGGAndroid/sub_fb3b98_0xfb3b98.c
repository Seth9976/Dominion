// 函数: sub_fb3b98
// 地址: 0xfb3b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x7c) != 0)
    return 

int64_t x1 = *(arg2 + 0x10)

if (x1 != 0)
    sub_fb3b98(arg1, x1)

*(arg2 + 0x7c) = 1
int32_t x8_1 = *(arg1 + 0x98)
int64_t x0_1

if (x8_1 != *(arg1 + 0x9c))
    x0_1 = *(arg1 + 0xa0)
else
    int64_t oldmem = *(arg1 + 0xa0)
    int64_t x8_2 = sx.q(x8_1)
    *(arg1 + 0x9c) = x8_2.d << 1
    x0_1 = realloc(oldmem, x8_2 << 5)
    x8_1 = *(arg1 + 0x98)
    *(arg1 + 0xa0) = x0_1

int32_t* x8_3 = x0_1 + (sx.q(x8_1) << 4)
*x8_3 = 0
*(x8_3 + 8) = arg2
*(arg1 + 0x98) += 1
