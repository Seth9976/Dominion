// 函数: _Z12StringSplit2PKciR10StringSpanS2_
// 地址: 0x9ee4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(arg2)
int64_t result = memchr(arg1, 0x2c, x21)
*arg3 = arg1
int64_t x8_3

if (result == 0)
    x8_3 = 0
    *(arg3 + 8) = x21
else
    *(arg3 + 8) = result - arg1
    *arg4 = result + 1
    x8_3 = not.q(*(arg3 + 8)) + x21

*(arg4 + 8) = x8_3
return result
