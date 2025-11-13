// 函数: _Z11NetLocAllocv
// 地址: 0xf836b4
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
int32_t* result = x10_1 + x9 * 0x90
__builtin_memset(result, 0, 0x88)
result[0x22] = x9.d | x8[3].d << 0x10
int32_t x9_2 = x8[3].d
int32_t x9_3

if (x9_2 == 0xffff)
    x9_3 = 1
else
    x9_3 = x9_2 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_3
result[8] = 0xffffffff
*result = 0
return result
