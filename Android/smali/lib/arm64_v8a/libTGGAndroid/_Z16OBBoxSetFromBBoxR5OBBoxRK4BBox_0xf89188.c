// 函数: _Z16OBBoxSetFromBBoxR5OBBoxRK4BBox
// 地址: 0xf89188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xc) = *QI
int128_t v0
v0.q = *(arg2 + 0xc)
int128_t v1
v1.q = *arg2
float v2 = *(arg2 + 0x14)
float v3 = *(arg2 + 8)
int128_t v0_1 = vadd_f32(v0, v1)
v1.d = 0x3f000000
v1:4.d = 0x3f000000
int128_t v0_2 = vmul_f32(v0_1, v1, 0)
v1.d = (v2 + v3) * fconvert.s(0.5f)
*arg1 = v0_2.q
*(arg1 + 8) = v1.d
v0_2.q = *(arg2 + 0xc)
v1.q = *arg2
v2 = *(arg2 + 0x14)
v3 = *(arg2 + 8)
*(arg1 + 0x1c) = vsub_f32(v0_2, v1)
v1.d = v2 - v3
*(arg1 + 0x24) = v1.d
