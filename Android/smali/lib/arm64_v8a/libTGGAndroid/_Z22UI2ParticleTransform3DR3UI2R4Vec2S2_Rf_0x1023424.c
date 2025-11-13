// 函数: _Z22UI2ParticleTransform3DR3UI2R4Vec2S2_Rf
// 地址: 0x1023424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = GameGetTimeSimulation()
float v8 = v0.d
v1.d = 0x42c80000
v1:4.d = 0x42c80000
v0.q = *V21
int128_t v10 = vmul_f32(v0, v1, 0)
int128_t v9
v9.q = *V20
int64_t var_50 = UI2PropDynamic<float>::Eval(v8)
float v0_4 = UI2PropDynamic<float>::Eval(v8)
int64_t var_70 = UI2PropDynamic<float>::Eval(v8)
int64_t x0_4
int32_t v0_8
int128_t v3
int128_t v4
x0_4, v0_8, v3, v4 = UI2PropDynamic<float>::Eval(v8)
v4:4.d = v0_4
v3:4.d = v0_8
int128_t v3_1 = vadd_f32(v4, v3)
int128_t v0_9 = vsub_f32(v10, v9)
*arg2 = vdiv_f32(vsub_f32(v3_1, v4), v0_9)
double v0_10
v0_10.d = *(arg1 + 0x175c)
int128_t v3_2
v3_2.d = *(arg1 + 0x1760)
float v5 = *(arg1 + 0x16c0)
float v6 = *(arg1 + 0x16b4)
v4.d = *(arg1 + 0x16b0)
float v7 = *(arg1 + 0x16b8)
float v16 = *(arg1 + 0x16bc)
float v1_1 = fconvert.s(0.5f)
v0_10.d = v0_10.d f* v1_1
v1_1 = v3_2.d f* v1_1
v3_2.d = v5 * v5
float v19 = v6 * v6
float v2 = v4.d f* 0f
float v20 = v7 * v7
v0_10.d = v0_10.d f* v4.d
v1_1 = v4.d f* v1_1
v4.d = v3_2.d f+ v19
v3_2.d = v3_2.d f- v19
float v21 = v6 * v7
float v22 = v5 * v16
v6 = v6 * v16
v16 = v16 * v16
v4.d = v4.d f- v20
v3_2.d = v3_2.d f+ v20
*(arg1 + 0x16c8)
v4.d = v4.d f- v16
v3_2.d = v3_2.d f- v16
v0_10.d = v0_10.d f* v4.d
v0_10.d = v0_10.d f+ (v1_1 + v1_1) * (v21 - v22)
v0_10.d = (v2 + v2) * (v5 * v7 + v6) f+ v0_10.d
v0_10.d = *(arg1 + 0x16c4) f+ v0_10.d
int64_t result
int128_t v0_11
int32_t v1_2
int128_t v3_3
result, v0_11, v1_2, v3_3 = ScreenCoordToCameraCoord(x0_4)
*arg3 = v0_11.d
*(arg3 + 4) = v1_2
v0_11.q = *arg2
v1_2 = *(arg1 + 0x16b0)
v3_3.d = 0x3d4ccccd
v3_3:4.d = 0x3d4ccccd
int32_t v2_1 = *(gDraw3DData + 0x2c)
double v0_12
v0_12.d = vmul_f32(v0_11, v3_3, 0).d f* v1_2
v0_12:4.d = v0_12:4.d f* v1_2
v0_12.d = v0_12.d f* v2_1
v0_12:4.d = v0_12:4.d f* v2_1
*arg2 = v0_12
return result
