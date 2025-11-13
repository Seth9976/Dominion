// 函数: _Z7MapLakeR9RandomPCG
// 地址: 0xc181bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
*(entry_x8 + 8) = zx.o(0)
__builtin_memset(&entry_x8[3], 0, 0xf0)
__builtin_memset(&entry_x8[0x21], 0, 0xc8)
*(entry_x8 + 0x1c4) = 1
*entry_x8 = 0x100000002
int64_t v0 = RandomUnit(arg1)
v0.d = v0.d f+ v0.d
int64_t var_40 = v0
int64_t v0_1 = RandomUnit(arg1)
int64_t result
int128_t v0_2
int128_t v1
result, v0_2, v1 = RandomUnit(arg1)
int64_t v2
v2:4.d = v0_1.o.d
v1.d = fconvert.s(0.25f)
v1:4.d = fconvert.s(0.25f)
v0_2.d = v2.d f* v0_2.d
v0_2:4.d = v2:4.d f* v0_2.d
*(entry_x8 + 0xc) = vmul_f32(v0_2, v1, 0)
entry_x8[1].d = 0x40000000
int64_t x8 = sx.q(*(entry_x8 + 0x1c4))
v1 = data_71cec0
int64_t* x8_1 = entry_x8 + 4 + x8 * 0x1c
*(entry_x8 + 0x1c4) = x8.d + 1
*x8_1 = 0x1900000003
*(x8_1 + 8) = v1
int64_t x8_2 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_2.d + 1
*(entry_x8 + 4 + x8_2 * 0x1c) = 4
int64_t x8_4 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_4.d + 1
*(entry_x8 + 4 + x8_4 * 0x1c) = 0x3e4ccccd00000007
int64_t x8_6 = sx.q(*(entry_x8 + 0x1c4))
int32_t* x8_7 = entry_x8 + 4 + x8_6 * 0x1c
*(entry_x8 + 0x1c4) = x8_6.d + 1
*x8_7 = 2
*(x8_7 + 4) = 0x3f8000003e4ccccd
int64_t x8_8 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_8.d + 1
*(entry_x8 + 4 + x8_8 * 0x1c) = 8
int64_t x8_10 = sx.q(*(entry_x8 + 0x1c4))
int32_t* x8_11 = entry_x8 + 4 + x8_10 * 0x1c
*(entry_x8 + 0x1c4) = x8_10.d + 1
*x8_11 = 2
*(x8_11 + 4) = 0x3dcccccd3dcccccd
int64_t x8_12 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_12.d + 1
*(entry_x8 + 4 + x8_12 * 0x1c) = 0x3e4ccccd00000007
int64_t x8_14 = sx.q(*(entry_x8 + 0x1c4))
*(entry_x8 + 0x1c4) = x8_14.d + 1
*(entry_x8 + 4 + x8_14 * 0x1c) = 9
return result
