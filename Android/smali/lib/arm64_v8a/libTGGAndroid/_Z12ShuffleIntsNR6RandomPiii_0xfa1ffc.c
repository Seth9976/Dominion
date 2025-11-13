// 函数: _Z12ShuffleIntsNR6RandomPiii
// 地址: 0xfa1ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

int32_t x19_1 = arg3
int64_t x22_1 = 0
uint64_t i = zx.q(arg4)
int32_t* x24_1 = arg2

do
    int64_t x8_4 = zx.q(RandomNext(arg1).d u% x19_1 + x22_1.d) << 0x20 s>> 0x1e
    int32_t x10_1 = *x24_1
    i -= 1
    x22_1 += 1
    *x24_1 = *(arg2 + x8_4)
    x24_1 = &x24_1[1]
    x19_1 -= 1
    *(arg2 + x8_4) = x10_1
while (i != 0)
