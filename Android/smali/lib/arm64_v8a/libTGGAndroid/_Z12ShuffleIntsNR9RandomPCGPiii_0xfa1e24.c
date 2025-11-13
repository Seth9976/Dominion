// 函数: _Z12ShuffleIntsNR9RandomPCGPiii
// 地址: 0xfa1e24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

int64_t x8_1 = 0
uint64_t i = zx.q(arg4)
int32_t* x11_1 = arg2

do
    int64_t x12_1 = *arg1
    i -= 1
    *arg1 = *(arg1 + 8) + x12_1 * 0x5851f42d4c957f2d
    int64_t x12_6 =
        zx.q(ror.d((x12_1 u>> 0x2d).d ^ (x12_1 u>> 0x1b).d, (x12_1 u>> 0x3b).d) u% arg3 + x8_1.d)
        << 0x20 s>> 0x1e
    int32_t x14_2 = *x11_1
    x8_1 += 1
    arg3 -= 1
    *x11_1 = *(arg2 + x12_6)
    x11_1 = &x11_1[1]
    *(arg2 + x12_6) = x14_2
while (i != 0)
