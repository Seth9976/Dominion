// 函数: _Z9ScreenRayRK7FrustumRK4PoseRK4Vec2S7_
// 地址: 0xc9da90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = *V0
int128_t v0
v0.q = *V1
int32_t v2 = *(V1 + 8)
float v3 = *(V0 + 8)
int64_t x10 = *V0
int128_t v0_1 = vsub_f32(v0, v1)
int32_t x9 = *(V0 + 8)
v1.d = v2 f- v3
double v2_1 = vmul_f32(v0_1, v0_1, 0)
v2_1.d = v2_1.d f+ v2_1:4.d
v2_1.d = v2_1.d f+ v1.d f* v1.d
v2_1.d = sqrt(v2_1.d)
v2_1.d = fconvert.s(1f) f/ v2_1.d
v0_1.d = v0_1.d f* v2_1.d
v0_1:4.d = v0_1:4.d f* v2_1.d
v1.d = v1.d f* v2_1.d
int64_t* entry_x8
entry_x8[1].d = x9
*entry_x8 = x10
*(entry_x8 + 0xc) = v0_1.q
*(entry_x8 + 0x14) = v1.d
