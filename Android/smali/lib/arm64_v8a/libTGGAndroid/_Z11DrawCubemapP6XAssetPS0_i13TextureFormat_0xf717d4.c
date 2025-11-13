// 函数: _Z11DrawCubemapP6XAssetPS0_i13TextureFormat
// 地址: 0xf717d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float var_c8 = tanf(*PI * fconvert.s(0.25f)).d
char var_98 = 0
int64_t v0_1 = *(gDraw3DData + 0x4c)
int64_t v10
v10.d = *V0
int64_t v11
v11.d = *(V0 + 4)
int64_t v12
v12.d = *(V0 + 8)
int64_t i = 0
int64_t v8
v8.d = fconvert.s(1f)
int64_t v9
v9.d = fconvert.s(0.5f)
float var_c4 = 1f
int32_t var_94 = 0x3f800000
int64_t result

do
    float var_e8
    float var_d8
    FaceToDirs(i.d, &var_d8, &var_e8)
    float v0_2 = v10.d f+ var_d8 f- v10.d
    float var_d4
    float v1_1 = v11.d f+ var_d4 f- v11.d
    float var_d0
    float v2_1 = v12.d f+ var_d0 f- v12.d
    float v6_1 = var_e8
    float v4_1 = v8.d f/ sqrt(v0_2 * v0_2 + v1_1 * v1_1 + v2_1 * v2_1)
    v0_2 = v0_2 * v4_1
    v1_1 = v1_1 * v4_1
    v4_1 = v2_1 * v4_1
    float var_148 = v0_2
    float var_144_1 = v1_1
    float v7_1 = v1_1 * v6_1
    float var_e4
    float var_e0
    v2_1 = v1_1 * var_e0 - v4_1 * var_e4
    v1_1 = v4_1 * v6_1 - v0_2 * var_e0
    v0_2 = v0_2 * var_e4 - v7_1
    int32_t var_b8 = 0x3f800000
    float v3_1 = sqrt(v0_2 * v0_2 + v2_1 * v2_1 + v1_1 * v1_1)
    int32_t var_a4_1 = v10.d
    int32_t var_a0_1 = v11.d
    int32_t var_9c_1 = v12.d
    float var_140_1 = v4_1
    
    if (v3_1 >= float.s(0x3727c5ac))
        v3_1 = v8.d f/ (v3_1 + float.s(0x3727c5ac))
        v2_1 = v2_1 * v3_1
        v1_1 = v1_1 * v3_1
        v3_1 = v0_2 * v3_1
        v4_1 = v8.d f/ sqrt(v3_1 * v3_1 + v2_1 * v2_1 + v1_1 * v1_1)
        v0_2 = v2_1 * v4_1
        v1_1 = v1_1 * v4_1
        v2_1 = v3_1 * v4_1
    else
        v0_2 = *V0
        v1_1 = *(V0 + 4)
        v2_1 = *(V0 + 8)
    
    float var_300 = v0_2
    float var_2fc_1 = v1_1
    float var_2f8_1 = v2_1
    int32_t v0_3
    int32_t v1_2
    int32_t v2_2
    int32_t v3_2
    v0_3, v1_2, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_148, &var_300)
    int32_t var_b4_1 = v0_3
    int32_t var_b0_1 = v1_2
    int32_t var_ac_1 = v2_2
    int32_t var_a8_1 = v3_2
    XAsset* x0_3 = TextureCreateForRendering(arg3, arg3, zx.q(arg4), 3, nullptr)
    arg2[i] = x0_3
    RendererPushRT(x0_3, nullptr)
    Draw3DSetRTInversion(false)
    int64_t* x0_4 = *gGraphicsInterface
    int64_t var_88
    int64_t x1_3 = (var_88 & 0xffffffff00000000) | zx.q(*gRgbaIRed)
    var_88 = x1_3
    (*(*x0_4 + 0x120))(x0_4, x1_3, 0)
    PoseFromTransform(&var_b8)
    void var_108
    Mat4View(&var_108)
    Draw3DSetView(&var_148)
    float v1_3 = var_c8 / var_c4
    float v2_3 = *V20
    float v3_3 = *(V20 + 4)
    float v0_4 = (var_c8 + var_c8) f* v9.d
    v1_3 = (v1_3 + v1_3) f* v9.d
    float var_160 = v2_3 - v1_3
    float var_15c_1 = v3_3 - v0_4
    float var_158_1 = v2_3 + v1_3
    float var_154_1 = v0_4 + v3_3
    int64_t var_150_1 = v0_1
    int128_t v0_5
    int128_t v1_4
    int128_t v2_4
    v0_5, v1_4, v2_4 = Draw3DSetCameraFrustum(&var_160)
    v1_4 = *M4I
    v2_4 = *(M4I + 0x10)
    *(gDraw3DData + 0x4bc) = *gRgbaWhite
    *(gDraw3DData + 0xc8) = v1_4
    v0_5 = *(M4I + 0x20)
    v1_4 = *(M4I + 0x30)
    *(gDraw3DData + 0xd8) = v2_4
    *(gDraw3DData + 0xe8) = v0_5
    *(gDraw3DData + 0xf8) = v1_4
    v0_5 = *(gDraw3DData + 0x2e4)
    *(gDraw3DData + 0x188) = *(gDraw3DData + 0x2d4)
    *(gDraw3DData + 0x198) = v0_5
    v0_5 = *(gDraw3DData + 0x304)
    *(gDraw3DData + 0x1a8) = *(gDraw3DData + 0x2f4)
    *(gDraw3DData + 0x1b8) = v0_5
    int128_t v0_6
    int128_t v1_5
    int128_t v2_5
    int128_t v3_4
    v0_6, v1_5, v2_5, v3_4 = Mat4Multiply(gDraw3DData + 0x188, gDraw3DData + 0xc8)
    *(gDraw3DData + 0x108) = var_300.o
    int128_t var_2f0
    *(gDraw3DData + 0x118) = var_2f0
    int128_t var_2e0
    *(gDraw3DData + 0x128) = var_2e0
    int128_t var_2d0
    *(gDraw3DData + 0x138) = var_2d0
    int128_t v0_7
    int128_t v1_6
    int128_t v2_6
    int128_t v3_5
    v0_7, v1_6, v2_6, v3_5 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x188)
    *(gDraw3DData + 0x1c8) = var_300.o
    *(gDraw3DData + 0x1d8) = var_2f0
    *(gDraw3DData + 0x1e8) = var_2e0
    *(gDraw3DData + 0x1f8) = var_2d0
    int128_t v0_8
    int128_t v1_7
    int128_t v2_7
    int128_t v3_6
    v0_8, v1_7, v2_7, v3_6 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x108)
    *(gDraw3DData + 0x148) = var_300.o
    *(gDraw3DData + 0x158) = var_2f0
    *(gDraw3DData + 0x168) = var_2e0
    *(gDraw3DData + 0x178) = var_2d0
    
    if ((zx.d(data_241e050) & 1) == 0 && __cxa_guard_acquire(&data_241e050) != 0)
        data_241e048 = AssetPtrFromPath("sys/editor/video_sphere.structure", 2)
        __cxa_guard_release(&data_241e050)
    
    if ((zx.d(data_241e060) & 1) == 0 && __cxa_guard_acquire(&data_241e060) != 0)
        data_241e058 = AssetPtrFromPath("sys/skybox_equi.material", 5)
        __cxa_guard_release(&data_241e060)
    
    int64_t* x0_13 = StructureDefGet(data_241e048)
    int128_t v0_9
    int128_t v1_8
    int128_t v2_8
    int128_t v3_7
    int128_t v4_3
    v0_9, v1_8, v2_8, v3_7, v4_3 = DrawModeSet(2)
    int32_t x9_2 = *(gDraw3DData + &data_7a4604)
    v0_9.q = 0
    v0_9:8.q = 0
    *(gDraw3DData + &data_7a4604) = 2
    
    if (**x0_13 s>= 1)
        int64_t x8_10 = data_241e058
        __builtin_memset(&var_300, 0, 0x1a0)
        int128_t var_2b0_1
        var_2b0_1.q = x8_10
        var_2f8_1.q = *(*x0_13 + 8)
        var_2d0 = *(M4I + 0x20)
        int128_t var_2c0_1 = *(M4I + 0x30)
        var_2f0 = *M4I
        var_2e0 = *(M4I + 0x10)
        var_2b0_1:8.q = arg1
        int128_t var_180_1
        var_180_1:4.d = 0x3f800000
        int128_t var_260_1 = *gRgbaWhite
        RenderStateSetMaterial(&var_300)
        int128_t v0_10
        int128_t v1_9
        int128_t v2_9
        int128_t v3_8
        int128_t v4_4
        v0_10, v1_9, v2_9, v3_8, v4_4 = RenderSubMesh(&var_300)
        v0_10.q = 0
        v0_10:8.q = 0
        
        if (**x0_13 s>= 2)
            int64_t x26_2 = 0x150
            int64_t j = 1
            
            do
                int64_t x8_15 = data_241e058
                __builtin_memset(&var_300, 0, 0x1a0)
                int128_t var_2b0_2
                var_2b0_2.q = x8_15
                var_2f8_1.q = *(*x0_13 + 8) + x26_2
                var_2d0 = *(M4I + 0x20)
                int128_t var_2c0_2 = *(M4I + 0x30)
                var_2f0 = *M4I
                var_2e0 = *(M4I + 0x10)
                var_2b0_2:8.q = arg1
                int128_t var_180_2
                var_180_2:4.d = 0x3f800000
                int128_t var_260_2 = *gRgbaWhite
                v0_10, v1_9, v2_9, v3_8, v4_4 = RenderSubMesh(&var_300)
                j += 1
                v0_10.q = 0
                v0_10:8.q = 0
                x26_2 += 0x150
            while (j s< sx.q(**x0_13))
    
    *(gDraw3DData + &data_7a4604) = x9_2
    DrawModeSet(0)
    result = RendererPopRT()
    i += 1
while (i != 6)

return result
