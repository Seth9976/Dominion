// 函数: _Z19HDRCubeToIrradianceRK9IBLConfigPKcP6XAsset
// 地址: 0xf72574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0_1
int128_t v1_1
int128_t v2
int128_t v5
v0_1, v1_1, v2, v5 = tanf(*PI * fconvert.s(0.25f))
float var_b8 = v0_1.d
char var_88 = 0
v0_1.q = *(gDraw3DData + 0x4c)
int128_t v10
v10.q = *V0
int64_t v11
v11.d = *(V0 + 8)
int64_t i = 0
int64_t v8
v8.d = fconvert.s(1f)
int64_t v9
v9.d = fconvert.s(0.5f)
float var_b4 = 1f
int32_t var_84 = 0x3f800000
int64_t var_b0 = v0_1.q
int32_t var_300
XAsset* var_e8[0x6]

do
    if (i.d u> 5)
        pthread_kill(pthread_self(), 6)
        int64_t* x0_26 = XNoReturn()
        __cxa_guard_abort(&data_241e080)
        sub_1101e04(x0_26)
        noreturn
    
    int64_t (* const x8_2)()
    int64_t (* const x8_3)()
    float v3_1
    
    switch (i & 0xffffffff)
        case 0
            x8_2 = VY
        label_f72740:
            v0_1.q = *x8_2
            v1_1.d = *(x8_2 + 8)
            x8_3 = VX
            goto label_f72750
        case 1
            v2.q = *VY
            v3_1 = *(VY + 8)
            v0_1.d = *VX
            v1_1.q = *(VX + 4)
            v0_1.d = fneg(v0_1.d)
            v1_1 = vneg_f32(v1_1)
        case 2
            v0_1.q = *VX
            v1_1.d = *(VX + 8)
            x8_3 = VZ
        label_f72750:
            int32_t v4_1 = *x8_3
            v5.q = *(x8_3 + 4)
            v2 = vneg_f32(v0_1)
            v3_1 = fneg(v1_1.d)
            v0_1.d = fneg(v4_1)
            v1_1 = vneg_f32(v5)
        case 3
            v2.q = *VX
            v3_1 = *(VX + 8)
            v0_1.d = *VZ
            v1_1.q = *(VZ + 4)
        case 4
            v2.q = *VZ
            v3_1 = *(VZ + 8)
            v0_1.d = *VX
            v1_1.q = *(VX + 4)
            v0_1.d = fneg(v0_1.d)
            v1_1 = vneg_f32(v1_1)
        case 5
            x8_2 = VZ
            goto label_f72740
    
    uint128_t v2_2 = vsub_f32(vadd_f32(v10, v2), v10)
    v3_1 = v11.d f+ v3_1 f- v11.d
    double v4_2 = vmul_f32(v2_2, v2_2, 0)
    v5.d = v3_1 * v3_1
    v4_2.d = v4_2.d f+ v4_2:4.d
    v4_2.d = v4_2.d f+ v5.d
    v4_2.d = sqrt(v4_2.d)
    v4_2.d = v8.d f/ v4_2.d
    v2_2.d = v2_2.d f* v4_2.d
    v2_2:4.d = v2_2:4.d f* v4_2.d
    int128_t v5_1 = vzip1_s32(v0_1, v1_1)
    v3_1 = v3_1 f* v4_2.d
    int64_t var_148 = v2_2.q
    v4_2.d = v2_2.d f* v1_1:4.d
    v4_2:4.d = v2_2:4.d f* v1_1:4.d
    int128_t v1_2 = vmul_f32(v1_1, v2_2, 0)
    vdupq_laneq_s32(v2_2, 1)
    uint128_t v2_3
    v2_3:4.d = v3_1
    v0_1.d = v0_1.d f* v3_1
    int128_t v1_3 = vsub_f32(v1_2, vmul_f32(v5_1, v2_3, 0))
    v0_1.d = v0_1.d f- v4_2.d
    double v4_3 = vmul_f32(v1_3, v1_3, 0)
    int128_t v2_4
    v2_4.d = v0_1.d f* v0_1.d
    v5_1.d = v4_3:4.d
    v2_4.d = v5_1.d f+ v2_4.d
    v2_4.d = v4_3.d f+ v2_4.d
    v2_4.d = sqrt(v2_4.d)
    v4_3.d = float.s(0x3727c5ac)
    int32_t var_a8 = 0x3f800000
    int64_t var_94_1 = v10.q
    int32_t var_8c_1 = v11.d
    float var_140_1 = v3_1
    
    if (v2_4.d f>= v4_3.d)
        v2_4.d = v2_4.d f+ float.s(0x3727c5ac)
        v2_4.d = v8.d f/ v2_4.d
        v3_1 = v0_1.d f* v2_4.d
        v2_4.d = v1_3.d f* v2_4.d
        v2_4:4.d = v1_3:4.d f* v2_4.d
        v1_3 = vmul_f32(v2_4, v2_4, 0)
        v0_1.d = v3_1 * v3_1
        v4_3.d = v1_3:4.d
        v0_1.d = v4_3.d f+ v0_1.d
        v0_1.d = v1_3.d f+ v0_1.d
        v0_1.d = sqrt(v0_1.d)
        v4_3.d = v8.d f/ v0_1.d
        v0_1.d = v4_3.d f* v2_4:4.d
        v1_3.d = v3_1 f* v4_3.d
        v2_4.d = v4_3.d f* v2_4.d
    else
        v0_1.d = *V0
        v1_3.d = *(V0 + 4)
        v2_4.d = *(V0 + 8)
    
    var_300 = v0_1.d
    int32_t var_2fc_1 = v1_3.d
    int32_t var_2f8_1 = v2_4.d
    int32_t v0_2
    int32_t v1_4
    int32_t v2_5
    int32_t v3_2
    v0_2, v1_4, v2_5, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_148, &var_300)
    int32_t var_a4_1 = v0_2
    int32_t var_a0_1 = v1_4
    int32_t var_9c_1 = v2_5
    int32_t var_98_1 = v3_2
    uint32_t x0_1 = *(arg1 + 8)
    XAsset* x0_2 = TextureCreateForRendering(x0_1, x0_1, zx.q(*(arg1 + 0xc)), 3, nullptr)
    var_e8[i] = x0_2
    RendererPushRT(x0_2, nullptr)
    Draw3DSetRTInversion(false)
    int64_t* x0_3 = *gGraphicsInterface
    int64_t var_308
    int64_t x1_2 = (var_308 & 0xffffffff00000000) | zx.q(*gRgbaIBlue)
    var_308 = x1_2
    (*(*x0_3 + 0x120))(x0_3, x1_2, 0)
    PoseFromTransform(&var_a8)
    void var_108
    Mat4View(&var_108)
    Draw3DSetView(&var_148)
    float v1_5 = var_b8 / var_b4
    float v2_6 = *V20
    float v3_3 = *(V20 + 4)
    float v0_3 = (var_b8 + var_b8) f* v9.d
    v1_5 = (v1_5 + v1_5) f* v9.d
    float var_160 = v2_6 - v1_5
    float var_15c_1 = v3_3 - v0_3
    float var_158_1 = v2_6 + v1_5
    float var_154_1 = v0_3 + v3_3
    int64_t var_150_1 = var_b0
    int128_t v0_4
    int128_t v1_6
    int128_t v2_7
    v0_4, v1_6, v2_7 = Draw3DSetCameraFrustum(&var_160)
    v1_6 = *M4I
    v2_7 = *(M4I + 0x10)
    *(gDraw3DData + 0x4bc) = *gRgbaWhite
    *(gDraw3DData + 0xc8) = v1_6
    v0_4 = *(M4I + 0x20)
    v1_6 = *(M4I + 0x30)
    *(gDraw3DData + 0xd8) = v2_7
    *(gDraw3DData + 0xe8) = v0_4
    *(gDraw3DData + 0xf8) = v1_6
    v0_4 = *(gDraw3DData + 0x2e4)
    *(gDraw3DData + 0x188) = *(gDraw3DData + 0x2d4)
    *(gDraw3DData + 0x198) = v0_4
    v0_4 = *(gDraw3DData + 0x304)
    *(gDraw3DData + 0x1a8) = *(gDraw3DData + 0x2f4)
    *(gDraw3DData + 0x1b8) = v0_4
    int128_t v0_5
    int128_t v1_7
    int128_t v2_8
    int128_t v3_4
    v0_5, v1_7, v2_8, v3_4 = Mat4Multiply(gDraw3DData + 0x188, gDraw3DData + 0xc8)
    *(gDraw3DData + 0x108) = var_300.o
    int128_t var_2f0
    *(gDraw3DData + 0x118) = var_2f0
    int128_t var_2e0
    *(gDraw3DData + 0x128) = var_2e0
    int128_t var_2d0
    *(gDraw3DData + 0x138) = var_2d0
    int128_t v0_6
    int128_t v1_8
    int128_t v2_9
    int128_t v3_5
    v0_6, v1_8, v2_9, v3_5 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x188)
    *(gDraw3DData + 0x1c8) = var_300.o
    *(gDraw3DData + 0x1d8) = var_2f0
    *(gDraw3DData + 0x1e8) = var_2e0
    *(gDraw3DData + 0x1f8) = var_2d0
    int128_t v0_7
    int128_t v1_9
    int128_t v2_10
    int128_t v3_6
    v0_7, v1_9, v2_10, v3_6 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x108)
    *(gDraw3DData + 0x148) = var_300.o
    *(gDraw3DData + 0x158) = var_2f0
    *(gDraw3DData + 0x168) = var_2e0
    *(gDraw3DData + 0x178) = var_2d0
    
    if ((zx.d(data_241e070) & 1) == 0 && __cxa_guard_acquire(&data_241e070) != 0)
        data_241e068 = AssetPtrFromPath("sys/skybox.structure", 2)
        __cxa_guard_release(&data_241e070)
    
    if ((zx.d(data_241e080) & 1) == 0 && __cxa_guard_acquire(&data_241e080) != 0)
        data_241e078 = AssetPtrFromPath("sys/pbr/ibl_irradiance.material", 5)
        __cxa_guard_release(&data_241e080)
    
    int64_t* x0_12 = StructureDefGet(data_241e068)
    int128_t v0_8
    int128_t v1_10
    int128_t v2_11
    int128_t v3_7
    int128_t v4_5
    v0_8, v1_10, v2_11, v3_7, v4_5 = DrawModeSet(2)
    int32_t x9_3 = *(gDraw3DData + &data_7a4604)
    v0_8.q = 0
    v0_8:8.q = 0
    *(gDraw3DData + &data_7a4604) = 2
    
    if (**x0_12 s>= 1)
        int64_t x8_13 = data_241e078
        __builtin_memset(&var_300, 0, 0x1a0)
        int128_t var_2b0_1
        var_2b0_1.q = x8_13
        var_2f8_1.q = *(*x0_12 + 8)
        var_2d0 = *(M4I + 0x20)
        int128_t var_2c0_1 = *(M4I + 0x30)
        var_2f0 = *M4I
        var_2e0 = *(M4I + 0x10)
        var_2b0_1:8.q = arg3
        int128_t var_180_1
        var_180_1:4.d = 0x3f800000
        int128_t var_260_1 = *gRgbaWhite
        RenderStateSetMaterial(&var_300)
        int128_t v0_9
        int128_t v1_11
        int128_t v2_12
        int128_t v3_8
        int128_t v4_6
        v0_9, v1_11, v2_12, v3_8, v4_6 = RenderSubMesh(&var_300)
        v0_9.q = 0
        v0_9:8.q = 0
        
        if (**x0_12 s>= 2)
            int64_t x22_3 = 0x150
            int64_t j = 1
            
            do
                int64_t x8_18 = data_241e078
                __builtin_memset(&var_300, 0, 0x1a0)
                int128_t var_2b0_2
                var_2b0_2.q = x8_18
                var_2f8_1.q = *(*x0_12 + 8) + x22_3
                var_2d0 = *(M4I + 0x20)
                int128_t var_2c0_2 = *(M4I + 0x30)
                var_2f0 = *M4I
                var_2e0 = *(M4I + 0x10)
                var_2b0_2:8.q = arg3
                int128_t var_180_2
                var_180_2:4.d = 0x3f800000
                int128_t var_260_2 = *gRgbaWhite
                v0_9, v1_11, v2_12, v3_8, v4_6 = RenderSubMesh(&var_300)
                j += 1
                v0_9.q = 0
                v0_9:8.q = 0
                x22_3 += 0x150
            while (j s< sx.q(**x0_12))
    
    *(gDraw3DData + &data_7a4604) = x9_3
    DrawModeSet(0)
    v0_1, v1_1, v2, v5 = RendererPopRT()
    i += 1
while (i != 6)

XString::XString(&var_300)
XString::operator+=(&var_300)
XAsset* result = TextureMakeCubeMap(&var_300, &var_e8, 1)
AssetCatalogSave(result)
AssetCatalogPurgeAsset(result)
XString::~XString()
return result
