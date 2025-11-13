// 函数: _Z29Draw3DSetReflectionCameraPoseRK4PoseRK5Plane
// 地址: 0xc96050
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg2 + 8)
int128_t v0
v0.q = *arg2
int128_t v3
v3.q = *(arg1 + 0x10)
float v4 = *(arg1 + 0x18)
float v1 = fneg(*(arg2 + 0xc))
int128_t v5
v5.d = v0.d f* v1
v5:4.d = v0:4.d f* v1
v1 = v2 * v1
int128_t v3_1 = vsub_f32(v3, v5)
v4 = v4 - v1
double v6 = vmul_f32(v0, v3_1, 0)
v6.d = v6.d f+ v6:4.d
v6.d = v6.d f+ v2 * v4
v6.d = v6.d f+ v6.d
v0.d = v0.d f* v6.d
v0:4.d = v0:4.d f* v6.d
double v8 = vadd_f32(v5, vsub_f32(v3_1, v0))
int64_t v9
v9.d = v1 + v4 - v2 f* v6.d
int64_t result
int32_t v0_2
int32_t v1_1
int32_t v2_1
int32_t v3_2
result, v0_2, v1_1, v2_1, v3_2 = WhackedQuatReflectAboutPlane(arg2, arg1)
*(gDraw3DData + 0x90) = v1_1
*(gDraw3DData + 0x94) = v2_1
*(gDraw3DData + 0x98) = v3_2
*(gDraw3DData + 0x9c) = v8
*(gDraw3DData + 0x54) = v0_2
*(gDraw3DData + 0x58) = v1_1
*(gDraw3DData + 0x5c) = v2_1
*(gDraw3DData + 0x60) = v3_2
*(gDraw3DData + 0x64) = v8
*(gDraw3DData + 0x6c) = v9.d
*(gDraw3DData + 0x70) = v0_2
*(gDraw3DData + 0x74) = v1_1
*(gDraw3DData + 0x78) = v2_1
*(gDraw3DData + 0x7c) = v3_2
*(gDraw3DData + 0x80) = v8
*(gDraw3DData + 0x88) = v9.d
*(gDraw3DData + 0x8c) = v0_2
*(gDraw3DData + 0xa4) = v9.d
*(gDraw3DData + 0xa8) = v0_2
*(gDraw3DData + 0xac) = v1_1
*(gDraw3DData + 0xb0) = v2_1
*(gDraw3DData + 0xb4) = v3_2
*(gDraw3DData + 0xb8) = v8
*(gDraw3DData + 0xc0) = v9.d
return result
