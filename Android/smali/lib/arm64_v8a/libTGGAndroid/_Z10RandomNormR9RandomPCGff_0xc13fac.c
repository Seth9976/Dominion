// 函数: _Z10RandomNormR9RandomPCGff
// 地址: 0xc13fac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float x_1 = RandomUnit(arg1)
int64_t x0_1
int64_t x1
int32_t n
float v0
x0_1, x1, n, v0 = RandomUnit(arg1)
float x

if (x_1 == 0f)
    x = float.s(0x3727c5ac)
else
    x = x_1

cosf(x0_1, x1, n, v0 * *TWO_PI)
int64_t result
float v0_3
v0_3, result = logf(x)
return result
