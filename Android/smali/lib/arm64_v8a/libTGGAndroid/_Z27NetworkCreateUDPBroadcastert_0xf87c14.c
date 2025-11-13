// 函数: _Z27NetworkCreateUDPBroadcastert
// 地址: 0xf87c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork
uint64_t x9 = zx.q(x8[2].d)
int64_t x10_1
int32_t x11

if (x9.d != x8[1].d)
    x10_1 = *x8
    x11 = *(x10_1 + x9 * 0x90 + 0x88)
else
    x10_1 = *x8
    x11 = x9.d + 1
    x8[1].d = x11

x8[2].d = x11
int128_t v0
v0.q = 0
v0:8.q = 0
int32_t* x19 = x10_1 + x9 * 0x90
__builtin_memset(x19, 0, 0x88)
x19[0x22] = x9.d | x8[3].d << 0x10
int32_t x9_2 = x8[3].d
int32_t x9_3

if (x9_2 == 0xffff)
    x9_3 = 1
else
    x9_3 = x9_2 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_3
uint16_t x10_6 = (_byteswap(arg1.d) u>> 0x10).w
x19[8] = 0xffffffff
*x19 = 1
x19[1].w = 2
x19[2] = 0xffffffff
*(x19 + 6) = x10_6
int64_t* x0 = *gNetworkInterface
int32_t x0_1 = (*(*x0 + 0x10))(x0, 0, 1, v0)
int32_t x8_3 = x19[0x22]
x19[8] = x0_1
x19[9] = 0
*(x19 + 0x3c) = 0x500000004
return zx.q(x8_3)
