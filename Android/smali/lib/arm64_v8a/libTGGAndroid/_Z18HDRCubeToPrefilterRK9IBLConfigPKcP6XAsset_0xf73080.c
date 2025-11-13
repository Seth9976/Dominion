// 函数: _Z18HDRCubeToPrefilterRK9IBLConfigPKcP6XAsset
// 地址: 0xf73080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
float var_c8 = tanf(*PI * fconvert.s(0.25f)).d
char var_98 = 0
float var_c4 = 1f
int64_t v0_1 = *(gDraw3DData + 0x4c)
int32_t var_94 = 0x3f800000
float var_6c0
XAsset* var_488[0x78]

if (*(arg1 + 0x18) s>= 1)
    int32_t i = 0
    v8.d = fconvert.s(1f)
    uint32_t var_6d0_1 = *(arg1 + 0x10)
    v10.d = *V0
    v11.d = *(V0 + 4)
    v12.d = *(V0 + 8)
    v9.d = fconvert.s(0.5f)
    
    do
        int32_t j = 0
        v13.d = float.s(i)
        int32_t i_1 = i
        
        do
            float var_4a8
            float var_498
            FaceToDirs(j, &var_498, &var_4a8)
            float v0_2 = v10.d f+ var_498 f- v10.d
            float var_494
            float v1_1 = v11.d f+ var_494 f- v11.d
            float var_490
            float v2_1 = v12.d f+ var_490 f- v12.d
            float v6_1 = var_4a8
            float v4_1 = v8.d f/ sqrt(v0_2 * v0_2 + v1_1 * v1_1 + v2_1 * v2_1)
            v0_2 = v0_2 * v4_1
            v1_1 = v1_1 * v4_1
            v4_1 = v2_1 * v4_1
            float var_508 = v0_2
            float var_504_1 = v1_1
            float v7_1 = v1_1 * v6_1
            float var_4a4
            float var_4a0
            v2_1 = v1_1 * var_4a0 - v4_1 * var_4a4
            v1_1 = v4_1 * v6_1 - v0_2 * var_4a0
            v0_2 = v0_2 * var_4a4 - v7_1
            float v3_1 = sqrt(v0_2 * v0_2 + v2_1 * v2_1 + v1_1 * v1_1)
            int32_t var_b8 = 0x3f800000
            int32_t var_a4_1 = v10.d
            int32_t var_a0_1 = v11.d
            int32_t var_9c_1 = v12.d
            float var_500_1 = v4_1
            
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
            
            var_6c0 = v0_2
            float var_6bc_1 = v1_1
            float var_6b8_1 = v2_1
            int32_t v0_3
            int32_t v1_2
            int32_t v2_2
            int32_t v3_2
            v0_3, v1_2, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_508, &var_6c0)
            int32_t var_b4_1 = v0_3
            int32_t var_b0_1 = v1_2
            int32_t var_ac_1 = v2_2
            int32_t var_a8_1 = v3_2
            int32_t x20_1 = i + *(arg1 + 0x18) * j
            XAsset* x0_3 =
                TextureCreateForRendering(var_6d0_1, var_6d0_1, zx.q(*(arg1 + 0x14)), 3, nullptr)
            var_488[sx.q(x20_1)] = x0_3
            RendererPushRT(x0_3, nullptr)
            Draw3DSetRTInversion(false)
            int64_t* x0_4 = *gGraphicsInterface
            int64_t var_6c8
            int64_t x1_3 = (var_6c8 & 0xffffffff00000000) | zx.q(*(gDraw3DData + 0x38))
            var_6c8 = x1_3
            (*(*x0_4 + 0x120))(x0_4, x1_3, 0)
            PoseFromTransform(&var_b8)
            void var_4c8
            Mat4View(&var_4c8)
            Draw3DSetView(&var_508)
            float v1_3 = var_c8 / var_c4
            float v2_3 = *V20
            float v3_3 = *(V20 + 4)
            float v0_4 = (var_c8 + var_c8) f* v9.d
            v1_3 = (v1_3 + v1_3) f* v9.d
            float var_520 = v2_3 - v1_3
            float var_51c_1 = v3_3 - v0_4
            float var_518_1 = v2_3 + v1_3
            float var_514_1 = v0_4 + v3_3
            int64_t var_510_1 = v0_1
            int128_t v0_5
            int128_t v1_4
            int128_t v2_4
            v0_5, v1_4, v2_4 = Draw3DSetCameraFrustum(&var_520)
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
            *(gDraw3DData + 0x108) = var_6c0.o
            int128_t var_6b0
            *(gDraw3DData + 0x118) = var_6b0
            int128_t var_6a0
            *(gDraw3DData + 0x128) = var_6a0
            int128_t var_690
            *(gDraw3DData + 0x138) = var_690
            int128_t v0_7
            int128_t v1_6
            int128_t v2_6
            int128_t v3_5
            v0_7, v1_6, v2_6, v3_5 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x188)
            *(gDraw3DData + 0x1c8) = var_6c0.o
            *(gDraw3DData + 0x1d8) = var_6b0
            *(gDraw3DData + 0x1e8) = var_6a0
            *(gDraw3DData + 0x1f8) = var_690
            int128_t v0_8
            int128_t v1_7
            int128_t v2_7
            int128_t v3_6
            v0_8, v1_7, v2_7, v3_6 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x108)
            *(gDraw3DData + 0x148) = var_6c0.o
            *(gDraw3DData + 0x158) = var_6b0
            *(gDraw3DData + 0x168) = var_6a0
            *(gDraw3DData + 0x178) = var_690
            v0_8.d = float.s(*(arg1 + 0x18) - 1)
            v0_8.d = v13.d f/ v0_8.d
            Draw3DSetShaderConstant(0x82, v0_8.d)
            
            if ((zx.d(data_241e0c8) & 1) == 0 && __cxa_guard_acquire(&data_241e0c8) != 0)
                data_241e0c0 = AssetPtrFromPath("sys/skybox.structure", 2)
                __cxa_guard_release(&data_241e0c8)
            
            if ((zx.d(data_241e0d8) & 1) == 0 && __cxa_guard_acquire(&data_241e0d8) != 0)
                data_241e0d0 = AssetPtrFromPath("sys/pbr/ibl_prefilter.material", 5)
                __cxa_guard_release(&data_241e0d8)
            
            int64_t* x0_13 = StructureDefGet(data_241e0c0)
            int128_t v0_9
            int128_t v1_8
            int128_t v2_8
            int128_t v3_7
            int128_t v4_3
            v0_9, v1_8, v2_8, v3_7, v4_3 = DrawModeSet(2)
            int32_t x9_4 = *(gDraw3DData + &data_7a4604)
            v0_9.q = 0
            v0_9:8.q = 0
            *(gDraw3DData + &data_7a4604) = 2
            
            if (**x0_13 s>= 1)
                int64_t x8_17 = data_241e0d0
                __builtin_memset(&var_6c0, 0, 0x1a0)
                int128_t var_670_1
                var_670_1.q = x8_17
                var_6b8_1.q = *(*x0_13 + 8)
                var_690 = *(M4I + 0x20)
                int128_t var_680_1 = *(M4I + 0x30)
                var_6b0 = *M4I
                var_6a0 = *(M4I + 0x10)
                var_670_1:8.q = arg3
                int128_t var_540_1
                var_540_1:4.d = 0x3f800000
                int128_t var_620_1 = *gRgbaWhite
                RenderStateSetMaterial(&var_6c0)
                int128_t v0_10
                int128_t v1_9
                int128_t v2_9
                int128_t v3_8
                int128_t v4_4
                v0_10, v1_9, v2_9, v3_8, v4_4 = RenderSubMesh(&var_6c0)
                v0_10.q = 0
                v0_10:8.q = 0
                
                if (**x0_13 s>= 2)
                    int64_t x24_2 = 0x150
                    int64_t k = 1
                    
                    do
                        int64_t x8_22 = data_241e0d0
                        __builtin_memset(&var_6c0, 0, 0x1a0)
                        int128_t var_670_2
                        var_670_2.q = x8_22
                        var_6b8_1.q = *(*x0_13 + 8) + x24_2
                        var_690 = *(M4I + 0x20)
                        int128_t var_680_2 = *(M4I + 0x30)
                        var_6b0 = *M4I
                        var_6a0 = *(M4I + 0x10)
                        var_670_2:8.q = arg3
                        int128_t var_540_2
                        var_540_2:4.d = 0x3f800000
                        int128_t var_620_2 = *gRgbaWhite
                        v0_10, v1_9, v2_9, v3_8, v4_4 = RenderSubMesh(&var_6c0)
                        k += 1
                        v0_10.q = 0
                        v0_10:8.q = 0
                        x24_2 += 0x150
                    while (k s< sx.q(**x0_13))
            
            *(gDraw3DData + &data_7a4604) = x9_4
            DrawModeSet(0)
            RendererPopRT()
            i = i_1
            j += 1
        while (j != 6)
        
        i += 1
        uint32_t x9_2
        
        if (var_6d0_1 s< 0)
            x9_2 = var_6d0_1 + 1
        else
            x9_2 = var_6d0_1
        
        var_6d0_1 = x9_2 s>> 1
    while (i s< *(arg1 + 0x18))

XString::XString(&var_6c0)
XString::operator+=(&var_6c0)
XAsset* result = TextureMakeCubeMap(&var_6c0, &var_488, *(arg1 + 0x18))
AssetCatalogSave(result)
AssetCatalogPurgeAsset(result)
XString::~XString()
return result
