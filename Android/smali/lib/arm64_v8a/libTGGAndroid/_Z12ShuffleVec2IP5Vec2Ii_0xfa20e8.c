// 函数: _Z12ShuffleVec2IP5Vec2Ii
// 地址: 0xfa20e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

Vec2I* x19_1 = arg1
int64_t x21_1 = 0
uint64_t i_1 = zx.q(arg2)
Vec2I* x23_1 = arg1
uint64_t i

do
    int64_t x8_4 = zx.q(RandomNext(gRNG).d u% i_1.d + x21_1.d) << 0x20 s>> 0x1d
    int64_t x10_1 = *x23_1
    i = i_1
    i_1 -= 1
    x21_1 += 1
    *x23_1 = *(x19_1 + x8_4)
    x23_1 += 8
    *(x19_1 + x8_4) = x10_1
while (i != 1)
