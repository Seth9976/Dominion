// 函数: sub_f36010
// 地址: 0xf36010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = **(arg1 + 0x10)
int64_t x9 = x8[3]

if (x9 != -1)
    return zx.q(x9 == 0 ? 1 : 0)

int64_t x10 = *x8
int64_t x12 = x8[1]
int64_t x11 = x12 - x10

if (x12 == x10)
    x8[3] = 0
    return 1

int64_t x13

x13 = x11 s>= 0 ? x11 : -1

int64_t x12_1 = x10 - x12
int64_t x13_1

x13_1 = x13 s< 1 ? x13 : 1

int64_t x9_1 = x11 s>> 2
int64_t x11_1

x11_1 = x12_1 s> x11 ? x12_1 : x11

int64_t i_1 = x13_1 * (x11_1 u>> 2)
uint64_t x12_2 = 1
int64_t i

do
    int32_t x13_2 = *(x10 - 4 + (i_1 << 2))
    i = i_1
    i_1 -= 1
    x12_2 = zx.q(x12_2.d) & zx.q(((x13_2 - 1) & not.d(x13_2)) s>> 0x1f)
    x9_1 -= x12_2
while (i != 1)
x8[3] = x9_1
return zx.q(x9_1 == 0 ? 1 : 0)
