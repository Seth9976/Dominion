// 函数: _Z16DrawTextImageNewP6XAsset4Vec2RKS1_RK11ClipRegion2RK4Mat4RK11SpriteColor
// 地址: 0x1027ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.q = *arg2
int32_t v3 = *RECT1
int32_t v4 = *(RECT1 + 4)
int32_t v5 = *(RECT1 + 8)
int32_t v6 = *(RECT1 + 0xc)
int64_t x22 = *(*gpRenderAppData + 0x3b8)
int32_t var_70 = v3
int32_t var_6c = v4
int32_t var_68 = v5
int32_t var_64 = v4
int32_t entry_v1
int128_t v4_1
v4_1:4.d = entry_v1
int128_t entry_v0
int32_t var_50 = entry_v0.d
int32_t var_4c = entry_v1
int32_t var_60 = v3
int32_t var_5c = v6
double var_48 = vadd_f32(v4_1, v2)
int32_t var_58 = v5
int32_t var_54 = v6
Vec2 var_a0
uint64_t var_80
int64_t result = GetClippedRectUVs(&var_50, &var_70, arg3, &var_80, &var_a0)

if ((result.d & 1) == 0)
    return result

Mat4Multiply(*gpRenderAppData + 0x124, arg4)
uint64_t var_120 = var_80
Mat4 var_e0
int32_t v0_2
int32_t v1
int32_t v2_1
int128_t v3_1
v0_2, v1, v2_1, v3_1 = Mat4TransformPoint2(&var_e0, &var_120)
v3_1.q = var_80
int32_t var_110 = v0_2
int32_t var_10c_1 = v1
var_120 = vrev64_s32(v3_1)
int32_t v0_4
int32_t v1_1
int32_t v2_2
v0_4, v1_1, v2_2 = Mat4TransformPoint2(&var_e0, &var_120)
int32_t var_104_1 = v0_4
int32_t var_100_1 = v1_1
int32_t var_fc_1 = v2_2
var_120.d = var_80.d
int32_t var_74
var_120:4.d = var_74
int32_t v0_5
int32_t v1_2
int32_t v2_3
v0_5, v1_2, v2_3 = Mat4TransformPoint2(&var_e0, &var_120)
int32_t var_f8_1 = v0_5
int32_t var_f4_1 = v1_2
int32_t var_f0_1 = v2_3
uint64_t var_78
var_120 = var_78
int32_t v0_6
int32_t v1_3
int32_t v2_4
v0_6, v1_3, v2_4 = Mat4TransformPoint2(&var_e0, &var_120)
int32_t var_ec_1 = v0_6
int32_t var_e8_1 = v1_3
int32_t var_e4_1 = v2_4
int64_t x11_1 = *VZ
int32_t x10_1 = *(VZ + 8)
var_120 = var_110.q
int32_t var_118_1 = v2_1
int64_t var_138_1 = 0
int64_t var_130 = x11_1
int32_t var_128_1 = x10_1
int64_t var_140_1 = x22
return Draw3DQuadFull(&var_110, &var_a0, arg5, 0, &var_120, &var_130, arg1, nullptr)
