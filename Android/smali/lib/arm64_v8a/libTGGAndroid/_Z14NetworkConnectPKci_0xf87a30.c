// 函数: _Z14NetworkConnectPKci
// 地址: 0xf87a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork
uint64_t x20 = zx.q(x8[2].d)
int32_t x9_1
int64_t x21

if (x20.d != x8[1].d)
    x21 = *x8
    x9_1 = *(x21 + x20 * 0x90 + 0x88)
else
    x21 = *x8
    x9_1 = x20.d + 1
    x8[1].d = x9_1

x8[2].d = x9_1
NetworkAddress* x19 = x21 + x20 * 0x90
__builtin_memset(x19, 0, 0x88)
*(x19 + 0x88) = x20.d | x8[3].d << 0x10
int32_t x9_5 = x8[3].d
int32_t x9_6

if (x9_5 == 0xffff)
    x9_6 = 1
else
    x9_6 = x9_5 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_6
*(x19 + 0x20) = 0xffffffff
*x19 = 0

if ((NetworkAddressSet(x19, arg1, arg2) & 1) == 0)
    NetLocFree(x19)
    return 0

void* x8_1 = x21 + x20 * 0x90
*(x8_1 + 0x24) = 1
*(x8_1 + 0x3c) = 0x200000001
return zx.q(*(x19 + 0x88))
