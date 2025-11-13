// 函数: _Z30NetworkSendHttpPostFromAddressRK14NetworkAddressPKcS3_S3_
// 地址: 0xf87868
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
int128_t* x19 = x10_1 + x9 * 0x90
__builtin_memset(x19, 0, 0x88)
*(x19 + 0x88) = x9.d | x8[3].d << 0x10
int32_t x9_2 = x8[3].d
int32_t x9_3

if (x9_2 == 0xffff)
    x9_3 = 1
else
    x9_3 = x9_2 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_3
x19[2].d = 0xffffffff
*x19 = 0
v0 = *arg1
int128_t v1 = *(arg1 + 0x10)
*(x19 + 0x24) = 1
*x19 = v0
x19[1] = v1
*(x19 + 0x3c) = 0x200000001
NetworkSendHttpPostFromLoc(x19, arg2, arg3, arg4)
return zx.q(*(x19 + 0x88))
