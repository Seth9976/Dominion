// 函数: _Z14NetworkUDPBindt
// 地址: 0xf87b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetworkInterface
int32_t x0_1 = (*(*x8 + 0x10))(x8, zx.q(arg1.d), 0)

if (x0_1 == 0xffffffff)
    return 0

int64_t* x8_1 = *gNetwork
uint64_t x9_2 = zx.q(x8_1[2].d)
int64_t x10_1
int32_t x11

if (x9_2.d != x8_1[1].d)
    x10_1 = *x8_1
    x11 = *(x10_1 + x9_2 * 0x90 + 0x88)
else
    x10_1 = *x8_1
    x11 = x9_2.d + 1
    x8_1[1].d = x11

x8_1[2].d = x11
int32_t* x10_2 = x10_1 + x9_2 * 0x90
__builtin_memset(x10_2, 0, 0x88)
x10_2[0x22] = x9_2.d | x8_1[3].d << 0x10
int32_t x9_4 = x8_1[3].d
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(x8_1 + 0x14) += 1
x8_1[3].d = x9_5
int32_t x8_2 = x10_2[0x22]
*x10_2 = 0
x10_2[8] = x0_1
x10_2[9] = 0
*(x10_2 + 0x3c) = 0x400000004
return zx.q(x8_2)
