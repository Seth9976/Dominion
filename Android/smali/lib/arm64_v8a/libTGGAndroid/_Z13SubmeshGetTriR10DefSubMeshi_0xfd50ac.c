// 函数: _Z13SubmeshGetTriR10DefSubMeshi
// 地址: 0xfd50ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = VertexFormatGetStride(zx.q(*(arg1 + 0x10)))
int64_t x8 = *(arg1 + 0x30)
int64_t x10_1 = sx.q(arg2) * 3
int64_t x9 = *(arg1 + 0x20)
int16_t* x11 = x8 + (sx.q(x10_1.d) << 1)
int64_t x13 = sx.q(result.d)
int64_t* x10_2 = x9 + x13 * zx.q(*x11)
int32_t x10_3 = x10_2[1].d
uint64_t x11_1 = zx.q(x11[2])
int64_t* x8_3 = x9 + x13 * zx.q(*(x8 + (x10_1 << 1) + 2))
int64_t* entry_x8
*entry_x8 = *x10_2
entry_x8[1].d = x10_3
int32_t x8_4 = x8_3[1].d
int64_t* x9_1 = x9 + x13 * x11_1
*(entry_x8 + 0xc) = *x8_3
*(entry_x8 + 0x14) = x8_4
int32_t x9_2 = x9_1[1].d
entry_x8[3] = *x9_1
entry_x8[4].d = x9_2
return result
