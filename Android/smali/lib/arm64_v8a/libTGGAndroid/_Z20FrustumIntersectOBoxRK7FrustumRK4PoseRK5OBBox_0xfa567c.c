// 函数: _Z20FrustumIntersectOBoxRK7FrustumRK4PoseRK5OBBox
// 地址: 0xfa567c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40 = *(arg3 + 0xc)
int32_t var_28 = *(arg3 + 8)
int64_t var_30 = *arg3
PoseInverse(&var_40)
Pose var_d8
int128_t v0_1
int128_t v1
int128_t v4
v0_1, v1, v4 = operator*(arg2, &var_d8)
v0_1.q = *(arg3 + 0x1c)
int32_t v2 = *(arg3 + 0x24)
v1.d = 0x3f000000
v1:4.d = 0x3f000000
int128_t v0_2 = vmul_f32(v0_1, v1, 0)
v4.q = *V0
float v5 = *(V0 + 8)
v1.d = v2 f* fconvert.s(0.5f)
double v2_1 = vsub_f32(v4, v0_2)
float v3 = v5 f- v1.d
double v0_3 = vadd_f32(v0_2, v4)
v1.d = v1.d f+ v5
double var_78 = v2_1
float var_70 = v3
double var_6c = v0_3
int32_t var_64 = v1.d
Pose var_60
FrustumPerspectivePlanes(arg1, &var_60, &var_d8)
return zx.q(FrustumIntersectBox(&var_d8, &var_78)) & 1
