// 函数: _Z22Draw3DSetCameraFrustumRK7Frustum
// 地址: 0xc9583c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *arg1
uint32_t x9 = zx.d(*(gDraw3DData + 0x30))
*(gDraw3DData + 0x4c) = *(arg1 + 0x10)
*(gDraw3DData + 0x3c) = v0
int128_t v0_1
int128_t v2
int128_t v3
int128_t v1

if (x9 == 0)
    v0_1, v1, v2, v3 = Mat4Perspective(gDraw3DData + 0x3c)
else
    v0.d = *(gDraw3DData + 0x34)
    v0_1, v1, v2, v3 = Mat4Orthographic(gDraw3DData + 0x3c, v0.d)
int128_t var_a0
int128_t var_60 = var_a0
int128_t var_90
int128_t var_50 = var_90
int128_t var_80
int128_t var_40 = var_80
int128_t var_70
int128_t var_30 = var_70
int128_t var_e0
int128_t var_d0
int128_t var_c0
int128_t var_b0

if (*gGraphicsDriverType == 1 && zx.d(*(gDraw3DData + 0x430)) != 0)
    v0_1 = *(M4I + 0x10)
    v2 = *(M4I + 0x20)
    v3 = *(M4I + 0x30)
    var_a0 = *M4I
    var_90 = v0_1
    var_80 = v2
    int128_t var_70_1 = v3
    var_90:4.d = 0xbf800000
    int128_t v0_2
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_2, v1_1, v2_1, v3_1 = Mat4Multiply(&var_a0, &var_60)
    var_60 = var_e0
    var_50 = var_d0
    var_40 = var_c0
    var_30 = var_b0

int64_t result
int128_t v0_3
int128_t v1_2
int128_t v2_3
int128_t v3_3
result, v0_3, v1_2, v2_3, v3_3 = AppGetOrientation()

if (result.d == 2)
    v1_2.d = fconvert.s(0.5f)
    v0_3.d = *PI
    v0_3.d = v0_3.d f* v1_2.d
    float cosp
    float sinp
    sincosf(&sinp, &cosp, v0_3.d)
    float cosp_1 = cosp
    float sinp_1 = sinp
    float v5_1 = fconvert.s(1f)
    cosp_1 = cosp_1 + cosp_1
    float v2_2 = *VZ * sinp_1
    float v3_2 = sinp_1 * *(VZ + 4)
    sinp_1 = sinp_1 * *(VZ + 8)
    float v4_1 = v3_2 + v3_2
    float v19_1 = v2_2 + v2_2
    float v20_1 = cosp_1 * sinp_1
    float v21_1 = v3_2 * cosp_1
    cosp_1 = v2_2 * cosp_1
    float v22_1 = v3_2 * v4_1
    float v18_1 = sinp_1 * (sinp_1 + sinp_1)
    v3_2 = v3_2 * v19_1
    float v23_1 = sinp_1 * v19_1
    sinp_1 = v4_1 * sinp_1
    v2_2 = v5_1 - v2_2 * v19_1
    var_a0:8.d = v21_1 + v23_1
    var_a0:0xc.d = *V0
    var_90:8.d = sinp_1 - cosp_1
    var_90:0xc.d = *(V0 + 4)
    var_80.d = v23_1 - v21_1
    var_80:4.d = cosp_1 + sinp_1
    var_a0.d = v5_1 - v22_1 - v18_1
    var_a0:4.d = v3_2 - v20_1
    var_90.d = v3_2 + v20_1
    var_90:4.d = v2_2 - v18_1
    var_80:8.d = v2_2 - v22_1
    var_80:0xc.d = *(V0 + 8)
    int128_t var_70_2 = data_71cfa0
    result, v0_3, v1_2, v2_3, v3_3 = Mat4Multiply(&var_a0, &var_60)
    var_60 = var_e0
    var_50 = var_d0
    var_40 = var_c0
    var_30 = var_b0

*(gDraw3DData + 0x208) = var_60
*(gDraw3DData + 0x218) = var_50
*(gDraw3DData + 0x228) = var_40
*(gDraw3DData + 0x238) = var_30
return result
