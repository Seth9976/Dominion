// 函数: _Z15Draw3DSetCameraR6Camera
// 地址: 0xc95b90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg1 + 0x20)
int64_t x8 = *(arg1 + 0x30)
int128_t v1 = *arg1
*(gDraw3DData + 0x10) = *(arg1 + 0x10)
*(gDraw3DData + 0x20) = v0
*(gDraw3DData + 0x30) = x8
v0 = *(gDraw3DData + 0x14)
int32_t var_18 = *(gDraw3DData + 0x2c)
int64_t var_20 = *(gDraw3DData + 0x24)
int128_t var_30 = v0
int128_t v2 = var_30
*gDraw3DData = v1
*(gDraw3DData + 0x8c) = v0
*(gDraw3DData + 0x98) = v2

if (zx.d(*(*gAppInterface + 0x3c)) == 0)
    v0 = var_30
    v1 = var_30
    *(gDraw3DData + 0x54) = v0
    *(gDraw3DData + 0x60) = v1
    *(gDraw3DData + 0x70) = v0
    *(gDraw3DData + 0x7c) = v1
else
    v0.d = fconvert.s(0.5f)
    int64_t x9_3 = *(gVR + 0xf8)
    int32_t x10_1 = *(gVR + 0x100)
    v2 = *(gVR + 0x120)
    int128_t v3 = *(gVR + 0x110)
    int32_t x9_4 = *(gVR + 0x10c)
    int64_t x8_3 = *(gVR + 0x104)
    int128_t var_50 = *(gVR + 0x110)
    int128_t var_70 = v2
    v1.d = x9_4
    v2.d = x10_1
    int128_t v4
    v4.q = x9_3
    int128_t v5
    v5.q = x8_3
    v1.d = v1.d f- v2.d
    v0.d = v1.d f* v0.d
    v1.d = 0x3f000000
    v1:4.d = 0x3f000000
    v0.d = v2.d f+ v0.d
    int32_t var_78_1 = v0.d
    double var_80_1 = vadd_f32(v4, vmul_f32(vsub_f32(v5, v4), v1, 0))
    int128_t var_90 = v3
    int128_t v0_1
    int128_t v1_3
    v0_1, v1_3 = PoseCompose(&var_50, &var_30)
    int128_t var_b0
    *(gDraw3DData + 0x54) = var_b0
    *(gDraw3DData + 0x60) = var_b0
    int128_t v0_2
    int128_t v1_4
    v0_2, v1_4 = PoseCompose(&var_70, &var_30)
    *(gDraw3DData + 0x70) = var_b0
    *(gDraw3DData + 0x7c) = var_b0
    arg1, v0, v1 = PoseCompose(&var_90, &var_30)
    v0 = var_b0
    v1 = var_b0

*(gDraw3DData + 0xa8) = v0
*(gDraw3DData + 0xb4) = v1
