// 函数: _ZN5Botan16dl_exponent_sizeEm
// 地址: 0xd15aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double x = float.d(arg1) / 1.4426950408889634
double v0_2 = log(x)
uint64_t x8 = vcvtd_u64_f64(
    pow(v0_2 * x * v0_2, float.d(0x3fd5555555555555)) * 1.9199999999999999 * 1.4426950408889634
    + 0.0)
uint64_t x8_1

x8_1 = x8 u> 0x40 ? x8 : 0x40

return x8_1 << 1
