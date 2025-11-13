// 函数: _Z24ScreenCoordToCameraCoord4Vec2
// 地址: 0x101bb6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float entry_v0
float var_18 = entry_v0
float v1
float var_14 = v1
uint64_t x8 = *gAppInterface
int64_t var_50 = 0
float v2 = float.s(*(x8 + 0x28))
v1 = float.s(*(x8 + 0x2c))
float var_48 = v2
float var_44 = v1
int32_t v0
int32_t v1_1
int32_t v2_1
int32_t v3
v0, v1_1, v2_1, v3 = ViewRectFromFovAspect(*gDraw3DData, v2 / v1)
int32_t var_60 = v0
int32_t var_5c = v1_1
int32_t var_58 = v2_1
int32_t var_54 = v3
int128_t v0_1
int128_t v1_2
v0_1, v1_2 = PoseSet(gDraw3DData + 0x24, gDraw3DData + 0x14)
int128_t var_80
int128_t var_40 = var_80
var_40 = var_80
PickRay(&var_60, &var_18)
float v3_1 = *VZ
float v4 = *(VZ + 4)
float v5 = *(VZ + 8)
float v0_2 = fneg(*V0 * v3_1 + *(V0 + 4) * v4 + *(V0 + 8) * v5)
float var_90 = v3_1
float var_8c = v4
float var_88 = v5
float var_84 = v0_2
float var_94
int64_t result
int128_t v1_4
int128_t v3_2
result, v1_4, v3_2 = IntersectRayPlane(&var_80, &var_90, &var_94)
float v0_3 = var_94
v1_4.q = var_80:0xc.q
v3_2.q = var_80.q
v1_4.d = v1_4.d f* v0_3
v1_4:4.d = v1_4:4.d f* v0_3
v1_4.d = vadd_f32(v1_4, v3_2):4.d
return result
