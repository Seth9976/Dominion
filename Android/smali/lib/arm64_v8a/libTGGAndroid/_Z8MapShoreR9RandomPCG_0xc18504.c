// 函数: _Z8MapShoreR9RandomPCG
// 地址: 0xc18504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
__builtin_memset(entry_x8, 0, 0x1d0)
*(entry_x8 + 4) = 0
*(entry_x8 + 0x1c4) = 0x3fc0000000000001
int64_t result
float v0
int128_t v1
result, v0, v1 = RandomUnit(arg1)
int64_t x11 = sx.q(*(entry_x8 + 0x1c4))
v1.d = *TWO_PI
uint64_t x9 = *V20
*(entry_x8 + 0x14) = 0x3f800000
int64_t* x11_1 = entry_x8 + 4 + x11 * 0x1c
*(entry_x8 + 0x1c4) = x11.d + 1
*(entry_x8 + 0xc) = x9
*(entry_x8 + 8) = v0 f* v1.d
*x11_1 = -0x407fffffffffffff
x11_1[1] = x9
int64_t x8 = sx.q(*(entry_x8 + 0x1c4))
v1 = data_71cec0
int64_t* x8_1 = entry_x8 + 4 + x8 * 0x1c
*(entry_x8 + 0x1c4) = x8.d + 1
*x8_1 = 0x3200000003
*(x8_1 + 8) = v1
x8_1[3].d = 0
int64_t x8_2 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_2.d + 1
(entry_x8 + 4)[x8_2 * 7] = 6
int64_t x8_4 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_4.d + 1
(entry_x8 + 4)[x8_4 * 7] = 4
int64_t x8_6 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_6.d + 1
(entry_x8 + 4)[x8_6 * 7] = 5
int64_t x8_8 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_8.d + 1
*(entry_x8 + 4 + x8_8 * 0x1c) = 0x3f00000000000007
int64_t x8_10 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_10.d + 1
(entry_x8 + 4)[x8_10 * 7] = 8
int64_t x8_12 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_12.d + 1
(entry_x8 + 4)[x8_12 * 7] = 9
return result
