// 函数: _Z25Draw3DUseReflectionCameraRK4PoseR6CameraRK5Plane5VREye
// 地址: 0xc96120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(*(*gAppInterface + 0x3c))
float var_d0
int128_t var_90
float var_50
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x21 == 0)
    v0.d = *arg2
    v1.d = *(arg2 + 4)
    v2.d = fconvert.s(0.5f)
    v1.d = v0.d f/ v1.d
    v3.d = *V20
    float v4 = *(V20 + 4)
    v0.d = v0.d f+ v0.d
    v1.d = v1.d f+ v1.d
    v0.d = v0.d f* v2.d
    v1.d = v1.d f* v2.d
    v2.d = v4 f- v0.d
    v0.d = v0.d f+ v4
    v4 = v3.d f- v1.d
    v1.d = v3.d f+ v1.d
    var_50 = v4
    int32_t var_4c_1 = v2.d
    int32_t var_48_1 = v1.d
    int32_t var_44_1 = v0.d
    v0.q = *(arg2 + 8)
    int64_t var_40 = v0.q
    *(*gpRenderAppData + 0x166) = 1
else
    int64_t (* x0)()
    
    if (arg4 == 0x3e8)
        x0 = &var_d0
        v0.q = *(gVR + 0xd0)
        v1.q = *(gVR + 0xd8)
        v2.q = *(gVR + 0xe0)
        v3.q = *(gVR + 0xe8)
        int128_t v4_1 = vcgt_f32(v2, v0)
        int128_t v5_1 = vcgt_f32(v1, v3)
        v0 = vbsl_s8(v4_1, v0, v2)
        v1 = vbsl_s8(v5_1, v1, v3)
        var_d0.q = v0.q
        int32_t var_c8
        var_c8.q = v1.q
        v0.d = *(arg2 + 8)
        v1.d = *(arg2 + 0xc)
    else if (arg4 == 1)
        v0.d = *(arg2 + 8)
        v1.d = *(arg2 + 0xc)
        x0 = gVR + 0xe0
    else
        if (arg4 != 0)
            pthread_kill(pthread_self(), 6)
            XAsset* x0_6
            XAsset* x1_3
            float v0_5
            x0_6, x1_3, v0_5 = XNoReturn()
            return CanGroupQuads(x0_6, x1_3, v0_5) __tailcall
        
        v0.d = *(arg2 + 8)
        v1.d = *(arg2 + 0xc)
        x0 = gVR + 0xd0
    
    FrustumSet(x0, v0.d, v1.d)
    var_50.o = var_90
    int64_t var_80
    int64_t var_40_1 = var_80
Mat4View(arg1)
float v2_1 = *arg3
float v3_1 = *(arg3 + 4)
float v4_2 = *(arg3 + 8)
int128_t v5_2
v5_2.d = *(arg3 + 0xc)
float v0_2 = fconvert.s(-2f)
float v6 = v2_1 * v0_2
float v7 = v3_1 * v0_2
v0_2 = v4_2 * v0_2
float v16 = v2_1 * v6
float v17 = v2_1 * v7
v2_1 = v2_1 * v0_2
float v18 = v6 f* v5_2.d
float v19 = v6 * v3_1
float v20 = v3_1 * v7
v3_1 = v3_1 * v0_2
float v21 = v7 f* v5_2.d
v6 = v6 * v4_2
v7 = v7 * v4_2
v4_2 = v4_2 * v0_2
v0_2 = v0_2 f* v5_2.d
v5_2 = data_71cfa0
float v1_1 = fconvert.s(1f)
float var_c8_1 = v2_1
float var_c4 = v18
float var_b8 = v3_1
float var_b4 = v21
float var_b0 = v6
float var_ac = v7
var_d0 = v16 + v1_1
float var_cc = v17
float var_c0 = v19
float var_bc = v20 + v1_1
float var_a8 = v4_2 + v1_1
float var_a4 = v0_2
int128_t var_a0 = v5_2
int128_t v0_3
int128_t v1_2
int128_t v2_2
int128_t v3_2
v0_3, v1_2, v2_2, v3_2 = Mat4Multiply(&var_90, &var_d0)
int128_t var_110
float v4_3 = var_110.d
float v5_3 = var_110:4.d
*(gDraw3DData + 0x2d4) = var_110
int128_t var_100
*(gDraw3DData + 0x2e4) = var_100
int128_t var_f0
*(gDraw3DData + 0x2f4) = var_f0
int128_t var_e0
*(gDraw3DData + 0x304) = var_e0
float v16_1 = var_100.d
float v17_1 = var_100:4.d
v0_3.d = *arg3
v1_2.d = *(arg3 + 4)
float v20_1 = var_f0.d
float v21_1 = var_f0:4.d
float v6_1 = var_110:8.d
float v18_1 = var_100:8.d
float v22 = v0_3.d f* v4_3 + v1_2.d f* v5_3
float v23 = v0_3.d f* v16_1 + v1_2.d f* v17_1
float v25 = v0_3.d f* v20_1 + v1_2.d f* v21_1
float v26 = *(arg3 + 8)
v2_2.d = var_f0:8.d
v3_2.d = var_f0:0xc.d
float v24 = fneg(*(arg3 + 0xc))
v0_3.d = v0_3.d f* v24
v1_2.d = v1_2.d f* v24
v4_3 = v0_3.d f* v4_3
v16_1 = v0_3.d f* v16_1
v5_3 = v1_2.d f* v5_3
v17_1 = v1_2.d f* v17_1
v24 = v26 * v24
v0_3.d = v0_3.d f* v20_1
v20_1 = v26 * v6_1
v1_2.d = v1_2.d f* v21_1
v21_1 = v26 * v18_1
v26 = v26 f* v2_2.d
v2_2.d = v24 f* v2_2.d
v0_3.d = v0_3.d f+ v1_2.d
v1_2.d = v4_3 + v5_3 + v24 * v6_1
v20_1 = v22 + v20_1
v21_1 = v23 + v21_1
v0_3.d = v0_3.d f+ v2_2.d
v1_2.d = var_110:0xc.d f+ v1_2.d
v2_2.d = var_100:0xc.d f+ v16_1 + v17_1 + v24 * v18_1
v22 = v25 + v26
v0_3.d = v3_2.d f+ v0_3.d
v1_2.d = v20_1 f* v1_2.d
v2_2.d = v21_1 f* v2_2.d
v0_3.d = v22 f* v0_3.d
v1_2.d = v1_2.d f+ v2_2.d
v0_3.d = v1_2.d f+ v0_3.d
v0_3.d = fneg(v0_3.d)
float var_120 = v20_1
float var_11c = v21_1
float var_118 = v22
int32_t var_114 = v0_3.d
int64_t result
int128_t v0_4
int128_t v1_3
int128_t v2_3
int128_t v3_3
result, v0_4, v1_3, v2_3, v3_3 = Mat4PerspectiveWithClipPlane(&var_50, &var_120)
int128_t var_160
int128_t var_150
int128_t var_140
int128_t var_130

if (x21 == 0 && *gGraphicsDriverType == 1 && zx.d(*(gDraw3DData + 0x430)) != 0)
    v0_4 = *(M4I + 0x10)
    v2_3 = *(M4I + 0x20)
    v3_3 = *(M4I + 0x30)
    int128_t var_1a0 = *M4I
    int128_t var_190_1 = v0_4
    int128_t var_180_1 = v2_3
    int128_t var_170_1 = v3_3
    var_190_1:4.d = 0xbf800000
    result, v0_4, v1_3, v2_3, v3_3 = Mat4Multiply(&var_1a0, &var_160)
    int128_t var_1e0
    var_160 = var_1e0
    int128_t var_1d0
    var_150 = var_1d0
    int128_t var_1c0
    var_140 = var_1c0
    int128_t var_1b0
    var_130 = var_1b0

*(gDraw3DData + 0x208) = var_160
*(gDraw3DData + 0x218) = var_150
*(gDraw3DData + 0x228) = var_140
*(gDraw3DData + 0x238) = var_130
return result
