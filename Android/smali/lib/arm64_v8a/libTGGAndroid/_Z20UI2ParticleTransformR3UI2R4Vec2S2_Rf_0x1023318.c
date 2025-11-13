// 函数: _Z20UI2ParticleTransformR3UI2R4Vec2S2_Rf
// 地址: 0x1023318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = fconvert.s(0.5f)
int128_t v0
v0.q = *V21
int128_t v1
v1.q = *V20
int128_t v2
v2.q = *(arg1 + 0x175c)
int128_t v5
v5.d = 0x42c80000
v5:4.d = 0x42c80000
*arg2 = vdiv_f32(v2, vsub_f32(vmul_f32(v0, v5, 0), v1))
double v0_3
v0_3.d = *(arg1 + 0x175c)
v1.d = *(arg1 + 0x1760)
v2.d = *(arg1 + 0x16b0)
v5.d = *(arg1 + 0x16c0)
float v6 = *(arg1 + 0x16b4)
float v7 = *(arg1 + 0x16b8)
float v16 = *(arg1 + 0x16bc)
v0_3.d = v0_3.d f* v3
v1.d = v1.d f* v3
v3 = v2.d f* 0f
float v4 = v5.d f* v5.d
float v19 = v6 * v6
float v20 = v7 * v7
v0_3.d = v0_3.d f* v2.d
v1.d = v2.d f* v1.d
v2.d = v4 + v19
float v21 = v6 * v7
float v22 = v5.d f* v16
float v23 = v5.d f* v7
v5.d = v5.d f* v6
v6 = v6 * v16
v7 = v7 * v16
v16 = v16 * v16
v2.d = v2.d f- v20
v3 = v3 + v3
v5.d = v7 f- v5.d
v2.d = v2.d f- v16
v6 = v3 * (v23 + v6)
v3 = v3 f* v5.d
v5.d = (v1.d f+ v1.d) * (v21 - v22)
v7 = (v0_3.d f+ v0_3.d) * (v21 + v22)
v0_3.d = v0_3.d f* v2.d
v1.d = v1.d f* (v4 - v19 + v20 - v16)
v0_3.d = v0_3.d f+ v5.d
v1.d = v7 f+ v1.d
v0_3.d = v6 f+ v0_3.d
v1.d = v3 f+ v1.d
v0_3.d = *(arg1 + 0x16c4) f+ v0_3.d
v1.d = *(arg1 + 0x16c8) f+ v1.d
*arg3 = v0_3.d
*(arg3 + 4) = v1.d
