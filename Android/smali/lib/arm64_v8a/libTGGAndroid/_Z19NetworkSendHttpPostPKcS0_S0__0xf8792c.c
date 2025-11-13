// 函数: _Z19NetworkSendHttpPostPKcS0_S0_
// 地址: 0xf8792c
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
NetLoc* x22 = x10_1 + x9 * 0x90
__builtin_memset(x22, 0, 0x88)
*(x22 + 0x88) = x9.d | x8[3].d << 0x10
int32_t x9_2 = x8[3].d
int32_t x9_3

if (x9_2 == 0xffff)
    x9_3 = 1
else
    x9_3 = x9_2 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_3
*(x22 + 0x20) = 0xffffffff
*x22 = 0

if ((NetworkAddressSet(x22, arg1, 0x50) & 1) == 0)
    NetLocFree(x22)
    return 0

NetworkSendHttpPostFromLoc(x22, arg1, arg2, arg3)
return zx.q(*(x22 + 0x88))
