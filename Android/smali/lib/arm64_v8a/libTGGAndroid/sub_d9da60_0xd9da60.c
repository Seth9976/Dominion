// 函数: sub_d9da60
// 地址: 0xd9da60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double x_1
double x_2 = x_1
int64_t i_2 = arg3
int64_t x23 = arg1
uint64_t x24 = arg2 u>> 1
double v9 = 0.0
double v10 = 0.0

if (arg4 != 0)
    v10 = 0.0
    uint64_t x25_1 = x24
    int64_t i = arg4
    
    do
        v10 = v10 + log(float.d(x25_1)) - log(float.d(i))
        i -= 1
        x25_1 -= 1
    while (i != 0)

int64_t x25_2 = x23 - arg2
int64_t i_1 = i_2 - (arg4 << 1)
int64_t x26_1 = x25_2 - arg5

if (i_2 != arg4 << 1)
    v9 = 0.0
    int64_t x28_1 = x26_1
    
    do
        v9 = v9 + log(float.d(x28_1)) - log(float.d(i_1))
        i_1 -= 1
        x28_1 -= 1
    while (i_1 != 0)

double v11 = 0.0

while (i_2 != 0)
    v11 = v11 + log(float.d(x23)) - log(float.d(i_2))
    i_2 -= 1
    x23 -= 1

x_1 = fconvert.d(1.0)
double v1

if (arg4 != 0)
    int64_t i_3 = arg4
    
    do
        v1 = float.d(i_3)
        i_3 -= 1
        x_1 = x_1 * float.d(x24) / v1
        x24 -= 1
    while (i_3 != 0)

v1 = v10 / 0.69314718055994529
uint64_t x21_1 = vcvtd_u64_f64(log(x_1) / 0.69314718055994529)
double x = ldexp(neg.d(arg5.d), x_1 * x_1) * float.d((arg4 * x26_1) << 1)
    + float.d(x25_2) * fconvert.d(0.5) * float.d(arg2) + x_1 * float.d((x21_1 + (arg5 << 1)) << 1)
return v11 / 0.69314718055994529 - (v1 + v1 + v9 / 0.69314718055994529)
    + log(x) / 0.69314718055994529
