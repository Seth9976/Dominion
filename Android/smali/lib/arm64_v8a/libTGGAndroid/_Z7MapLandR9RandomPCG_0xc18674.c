// 函数: _Z7MapLandR9RandomPCG
// 地址: 0xc18674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
__builtin_memset(entry_x8, 0, 0x1c4)
*(entry_x8 + 4) = 0
*(entry_x8 + 0x1c8) = 0x4000000040000000
*(entry_x8 + 0x1c4) = 1
int64_t result
int128_t v0
result, v0 = RandomUnit(arg1)
uint32_t v1 = *TWO_PI
*(entry_x8 + 0x14) = 0x40000000
int64_t x11 = sx.q(*(entry_x8 + 0x1c4))
v0.d = v0.d f* v1
uint64_t x9 = *V20
*(entry_x8 + 8) = v0.d
v0 = data_71d370
int64_t* x11_1 = entry_x8 + 4 + x11 * 0x1c
*(entry_x8 + 0xc) = x9
*(entry_x8 + 0x1c4) = x11.d + 1
*x11_1 = 0x2800000003
*(x11_1 + 8) = v0
int64_t x9_1 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_1.d + 1
(entry_x8 + 4)[x9_1 * 7] = 6
int64_t x9_3 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_3.d + 1
(entry_x8 + 4)[x9_3 * 7] = 4
int64_t x9_5 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_5.d + 1
(entry_x8 + 4)[x9_5 * 7] = 5
int64_t x9_7 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_7.d + 1
*(entry_x8 + 4 + x9_7 * 0x1c) = -0x407ffffffffffff9
int64_t x9_9 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_9.d + 1
(entry_x8 + 4)[x9_9 * 7] = 8
int64_t x9_11 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_11.d + 1
*(entry_x8 + 4 + x9_11 * 0x1c) = -0x407ffffffffffff9
int64_t x9_13 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x9_13.d + 1
(entry_x8 + 4)[x9_13 * 7] = 9
return result
