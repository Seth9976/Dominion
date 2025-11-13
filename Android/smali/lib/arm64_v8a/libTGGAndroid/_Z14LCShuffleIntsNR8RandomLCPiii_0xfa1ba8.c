// 函数: _Z14LCShuffleIntsNR8RandomLCPiii
// 地址: 0xfa1ba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

int64_t i = 0

do
    int32_t x12_2 = 0x3039 + *arg1 * 0x41c64e6d
    *arg1 = x12_2
    int32_t x15_1 = arg2[i]
    i += 1
    arg3 -= 1
    arg2[i] = arg2[i + zx.q((x12_2 u>> 6) u% arg3)]
    arg2[i + zx.q((x12_2 u>> 6) u% arg3)] = x15_1
while (zx.q(arg4) != i)
