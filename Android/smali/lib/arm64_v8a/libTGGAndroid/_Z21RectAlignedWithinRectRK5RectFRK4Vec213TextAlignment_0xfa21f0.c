// 函数: _Z21RectAlignedWithinRectRK5RectFRK4Vec213TextAlignment
// 地址: 0xfa21f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
result, v0, v1, v2, v3, v4 = AlignmentGetOffsetPercent(zx.q(arg3))
v2.q = *arg1
v3.q = *(arg1 + 8)
v4.q = *arg2
v0:4.d = v1.d
v1.q = 0
int128_t v3_2 = vmul_f32(v0, vsub_f32(v3, v2), 0)
int128_t v0_2 = vadd_f32(vmul_f32(v0, v4, 0), v1)
int128_t v0_3 = vsub_f32(vadd_f32(v2, v3_2), v0_2)
int128_t v1_1
v1_1.d = v0_3:4.d
v3_2.d = vadd_f32(v4, v0_3):4.d
return result
