// 函数: _Z23NetworkConnectToAddressRK14NetworkAddress
// 地址: 0xf8723c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *gNetwork
uint64_t x10 = zx.q(x9[2].d)
int64_t x8_1
int32_t x11

if (x10.d != x9[1].d)
    x8_1 = *x9
    x11 = *(x8_1 + x10 * 0x90 + 0x88)
else
    x8_1 = *x9
    x11 = x10.d + 1
    x9[1].d = x11

x9[2].d = x11
int128_t v0
v0.q = 0
v0:8.q = 0
int128_t* result = x8_1 + x10 * 0x90
__builtin_memset(result, 0, 0x88)
*(result + 0x88) = x10.d | x9[3].d << 0x10
int32_t x10_2 = x9[3].d
int32_t x10_3

if (x10_2 == 0xffff)
    x10_3 = 1
else
    x10_3 = x10_2 + 1

*(x9 + 0x14) += 1
x9[3].d = x10_3
result[2].d = 0xffffffff
*result = 0
v0 = *arg1
int128_t v1 = *(arg1 + 0x10)
*(result + 0x24) = 1
*result = v0
result[1] = v1
*(result + 0x3c) = 0x200000001
return result
