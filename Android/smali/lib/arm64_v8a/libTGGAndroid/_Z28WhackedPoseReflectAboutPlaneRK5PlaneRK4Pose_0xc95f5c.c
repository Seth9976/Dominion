// 函数: _Z28WhackedPoseReflectAboutPlaneRK5PlaneRK4Pose
// 地址: 0xc95f5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 8)
int128_t v0
v0.q = *arg1
int128_t v3
v3.q = *(arg2 + 0x10)
float v4 = *(arg2 + 0x18)
float v1 = fneg(*(arg1 + 0xc))
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
int32_t* entry_x8
*(entry_x8 + 0x10) = vadd_f32(v5, vsub_f32(v3_1, v0))
entry_x8[6] = v1 + v4 - v2 f* v6.d
int64_t result
int32_t v0_3
int32_t v1_1
int32_t v2_1
int32_t v3_2
result, v0_3, v1_1, v2_1, v3_2 = WhackedQuatReflectAboutPlane(arg1, arg2)
*entry_x8 = v0_3
entry_x8[1] = v1_1
entry_x8[2] = v2_1
entry_x8[3] = v3_2
return result
