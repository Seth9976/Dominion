// 函数: _Z14DefIterGetNextPK6DefMapRi
// 地址: 0xc87c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*arg2)
int64_t x9 = *(arg1 + 8)
*arg2 = x8.d + 1
int32_t x10_1

if (x8.d + 1 s>= *(arg1 + 0x10))
    x10_1 = -1
else
    x10_1 = x8.d + 1

*arg2 = x10_1
return x9 + x8 * 0x68
