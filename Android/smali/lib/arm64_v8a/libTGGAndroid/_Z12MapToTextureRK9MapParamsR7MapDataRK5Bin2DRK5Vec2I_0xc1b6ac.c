// 函数: _Z12MapToTextureRK9MapParamsR7MapDataRK5Bin2DRK5Vec2I
// 地址: 0xc1b6ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
Vec2I const& x20 = arg4
XAsset* result = TextureCreateForRendering(*arg4, *(arg4 + 4), 1, 3, nullptr)
XAsset* x0_2 = TextureCreateForRendering(*x20, *(x20 + 4), 0x50, 4, nullptr)
XAsset* result_3 = TextureCreateForRendering(*x20, *(x20 + 4), 0x3ea, 3, nullptr)
XAsset* result_2
int128_t v2
result_2, v2 = TextureCreateForRendering(*x20, *(x20 + 4), 0x3ea, 3, nullptr)
int64_t v11
v11.d = *TWO_PI
uint32_t var_118
int32_t* var_140 = &var_118
Vec2I const& var_178 = x20
v2 = data_71ad00
int32_t i = 0
int64_t v10
v10.d = fconvert.s(1f)
int64_t v8
v8.d = *PI f/ fconvert.s(12f)
int128_t v13
v13.d = 0x44800000
v13:4.d = 0x44800000
XAsset* result_4 = result_3

do
    if (*(GetLocalSettings() + 0x3c) s< 2)
        XAsset* result_1
        XAsset* x1_5
        
        if (i u<= 0xc)
            x1_5 = nullptr
            
            if ((i & 1) == 0)
                result_1 = result_3
            else
                result_1 = result_2
            
            goto label_c1b8b4
        
    label_c1b8a8:
        
        x1_5 = i == 0x12 ? nullptr : x0_2
        
        if (i != 0x12)
            result_1 = result
            goto label_c1b8b4
        
        result_1 = result_3
    label_c1b8b4:
        RendererPushRT(result_1, x1_5)
        Draw3DRenderItemSubmissionBegin()
        int128_t v0_2
        int128_t v1_1
        int128_t v2_1
        v0_2, v1_1, v2_1 = tanf(v8.d)
        data_18c75b0 = v0_2.d
        data_18c75b8 = 0x404000003dcccccd
        data_18c75e0 = 0
        data_18c75e4 = 0x40400000
        v1_1 = *(TI + 0xc)
        v2_1.q = *VZ
        float v3_1 = *(VZ + 8)
        int32_t v16_1 = *x20
        int32_t v7_1 = *(x20 + 4)
        data_18c75c0 = *TI
        double v0_3 = vneg_f32(v2_1)
        float v5_1 = *(VY + 4)
        float v4_1 = *(VY + 8)
        float v6_1 = *VY
        data_18c75c0:0xc.o = v1_1
        double var_d0 = v0_3
        v1_1.d = v3_1 * v5_1
        v0_3.d = v4_1 f* v2_1:4.d
        v0_3.d = v1_1.d f- v0_3.d
        v1_1.d = v4_1 f* v2_1.d
        v4_1 = v5_1 f* v2_1.d
        v5_1 = v6_1 f* v2_1:4.d
        v2_1.d = v3_1 * v6_1
        v2_1.d = v1_1.d f- v2_1.d
        v1_1.d = v5_1 - v4_1
        v4_1 = fneg(v3_1)
        data_18c75b4 = float.s(v7_1) / float.s(v16_1)
        data_18c75dc = 0x40400000
        v3_1 = sqrt(v1_1.d f* v1_1.d + v0_3.d f* v0_3.d + v2_1.d f* v2_1.d)
        float var_c8_1 = v4_1
        
        if (v3_1 >= float.s(0x3727c5ac))
            v3_1 = v10.d f/ (v3_1 + float.s(0x3727c5ac))
            v0_3.d = v0_3.d f* v3_1
            v2_1.d = v2_1.d f* v3_1
            v3_1 = v1_1.d f* v3_1
            v1_1.d = v0_3.d f* v0_3.d
            v1_1.d = v1_1.d f+ v2_1.d f* v2_1.d
            v1_1.d = v3_1 * v3_1 f+ v1_1.d
            v1_1.d = sqrt(v1_1.d)
            v4_1 = v10.d f/ v1_1.d
            v0_3.d = v0_3.d f* v4_1
            v1_1.d = v2_1.d f* v4_1
            v2_1.d = v3_1 * v4_1
        else
            v0_3.d = *V0
            v1_1.d = *(V0 + 4)
            v2_1.d = *(V0 + 8)
        
        float var_b0 = v0_3.d
        int32_t var_ac_1 = v1_1.d
        float var_a8_1 = v2_1.d
        int32_t v0_4
        int32_t v1_2
        int32_t v2_2
        int32_t v3_2
        v0_4, v1_2, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_d0, &var_b0)
        data_18c75c0:4.d = v0_4
        data_18c75c0:8.d = v1_2
        data_18c75c0:0xc.d = v2_2
        data_18c75d0 = v3_2
        Draw3DSetCamera(&data_18c75b0)
        var_b0.o = v2
        Draw3DOverlayColor(&var_b0)
        Draw3DSetSortOverride(4)
        Draw3DLayer(0x7d0)
        int64_t var_128
        int64_t x0_11 = var_128 & 0xffffffff00000000
        var_128 = x0_11
        Draw3DSetRenderTargetClearColor(x0_11)
        int128_t v0_6
        v0_6.q = *x20
        var_b0.q = vcvt_f32_s32(v0_6)
        UIProjectRTTransform(&var_b0)
        void var_110
        UIProjectInto3DTransformVR(&var_110)
        
        if ((zx.d(data_18c75a8) & 1) == 0 && __cxa_guard_acquire(&data_18c75a8) != 0)
            data_18c75a0 = AssetPtrFromPath("sys/SpineTintRT.material", 5)
            __cxa_guard_release(&data_18c75a8)
        
        int64_t x0_15
        ColorRgbaI* x3_1
        XAsset* x4_1
        int128_t v0_8
        int128_t v1_3
        int128_t v2_3
        int128_t v3_3
        int128_t v4_2
        int128_t v5_2
        x0_15, x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 =
            SpriteSetDefault3dMaterial(data_18c75a0)
        int64_t var_f0
        int32_t var_e8
        int32_t var_c0
        int32_t var_b8
        int32_t var_a0
        int64_t var_9c
        
        if (i != 0)
        label_c1bc84:
            
            if (i - 1 u<= 0xb)
                XAsset* result_5
                
                if ((i & 1) == 0)
                    result_5 = result_2
                else
                    result_5 = result_3
                
                v0_8.d = *V20
                v1_3.d = *(V20 + 4)
                var_a8_1 = 2048f
                v2_3.q = 0x4500000044800000
                var_b0 = v0_8.d
                v3_3.d = *RECT1
                v4_2.d = *(RECT1 + 4)
                int32_t var_ac_3 = v1_3.d
                int32_t var_a4_2 = v1_3.d
                var_a0 = v0_8.d
                v0_8.d = *(RECT1 + 8)
                v1_3.d = *(RECT1 + 0xc)
                var_9c = 0x4500000044800000
                var_d0.d = v3_3.d
                var_d0:4.d = v4_2.d
                int32_t var_c8_2 = v0_8.d
                int32_t var_c4_2 = v4_2.d
                int32_t var_94_2 = 0x44800000
                var_c0 = v3_3.d
                int32_t var_bc_2 = v1_3.d
                var_b8 = v0_8.d
                int32_t var_b4_2 = v1_3.d
                
                if (i != 0xc)
                    v0_8.d = float.s(i - 1)
                    v1_3.d = 0f
                    v2_3.d = 0f
                    v3_3.d = 0f
                    Draw3DGame1(x0_15)
                    x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 = DrawQuadParams(result_5, 
                        &var_b0, &var_d0, gSpriteWhite, *MATERIAL_EFFECTS_CHART_CHARTSDFSTEP)
                else
                    int64_t* x0_18 = *gGraphicsInterface
                    int64_t var_188
                    int64_t x1_11 = var_188 & 0xffffffff00000000
                    var_188 = x1_11
                    (*(*x0_18 + 0x120))(x0_18, x1_11, 0)
                    var_f0 = SpriteColorSet(0, 0xff, 0x7f, 0xff)
                    DrawQuadParams(result_5, &var_b0, &var_d0, &var_f0, 
                        *MATERIAL_EFFECTS_CHART_MAPRANGE)
                    int64_t x0_21 = SpriteColorSet(0, 0xff, 0x7f, 0)
                    XAsset* x3_4 = *MATERIAL_EFFECTS_CHART_MAPRANGE
                    var_f0 = x0_21
                    x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 =
                        DrawOcean(arg2 + 0x10, &var_f0, result_5, x3_4)
                
                goto label_c1bfac
            
            if (i != 0xd)
                goto label_c1bfb0
            
            int64_t* x0_23 = *gGraphicsInterface
            int64_t var_190
            int64_t x1_15 = var_190 & 0xffffffff00000000
            var_190 = x1_15
            x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 = (*(*x0_23 + 0x120))(x0_23, x1_15, 0)
            int32_t x8_20 = *(arg2 + 0xeffcc)
            
            if (x8_20 s>= 1)
                void* __offset(MapData, 0x8ffe8) x20_1 = arg2 + 0x8ffe8
                int64_t j = 0
                
                do
                    v2_3.d = float.s(0x3a800000)
                    v3_3.d = float.s(0x3f79999a)
                    v0_8.q = *(arg2 + 0x10 + sx.q(*(x20_1 - 4)) * 0xc)
                    v0_8 = vmul_f32(v0_8, v13, 0)
                    v1_3.d = v2_3.d f* v0_8:4.d
                    
                    if (not(v1_3.d f> v3_3.d))
                        v2_3.d = v2_3.d f* v0_8.d
                        v3_3.d = float.s(0x3ccccccd)
                        
                        if (not(v2_3.d f< v3_3.d))
                            v3_3.d = float.s(0x3ffccccd)
                            
                            if (not(v2_3.d f> v3_3.d))
                                v2_3.d = float.s(0x3ccccccd)
                                
                                if (not(v1_3.d f< v2_3.d))
                                    v3_3.d = float.s(0x3a800000)
                                    v4_2.d = float.s(0x3f79999a)
                                    v1_3.q = *(arg2 + 0x10 + sx.q(*x20_1) * 0xc)
                                    v1_3 = vmul_f32(v1_3, v13, 0)
                                    v2_3.d = v3_3.d f* v1_3:4.d
                                    
                                    if (not(v2_3.d f> v4_2.d))
                                        v3_3.d = v3_3.d f* v1_3.d
                                        v4_2.d = float.s(0x3ccccccd)
                                        
                                        if (not(v3_3.d f< v4_2.d))
                                            v4_2.d = float.s(0x3ffccccd)
                                            
                                            if (not(v3_3.d f> v4_2.d))
                                                v3_3.d = float.s(0x3ccccccd)
                                                
                                                if (not(v2_3.d f< v3_3.d))
                                                    v4_2.d = float.s(0x3a800000)
                                                    v5_2.d = float.s(0x3f79999a)
                                                    v2_3.q =
                                                        *(arg2 + 0x10 + sx.q(*(x20_1 + 4)) * 0xc)
                                                    v2_3 = vmul_f32(v2_3, v13, 0)
                                                    v3_3.d = v4_2.d f* v2_3:4.d
                                                    
                                                    if (not(v3_3.d f> v5_2.d))
                                                        v4_2.d = v4_2.d f* v2_3.d
                                                        v5_2.d = float.s(0x3ccccccd)
                                                        
                                                        if (not(v4_2.d f< v5_2.d))
                                                            v5_2.d = float.s(0x3ffccccd)
                                                            
                                                            if (not(v4_2.d f> v5_2.d))
                                                                v4_2.d = float.s(0x3ccccccd)
                                                                
                                                                if (not(v3_3.d f< v4_2.d))
                                                                    v3_3.d = v0_8:4.d
                                                                    v4_2.d = v1_3:4.d
                                                                    v5_2.d = v2_3:4.d
                                                                    uint64_t x10_14 =
                                                                        zx.q(v2_3.d) | zx.q(v5_2.d) << 0x20
                                                                    var_b0.q =
                                                                        zx.q(v0_8.d) | zx.q(v3_3.d) << 0x20
                                                                    var_a8_1.q =
                                                                        zx.q(v1_3.d) | zx.q(v4_2.d) << 0x20
                                                                    var_a0.q = x10_14
                                                                    var_9c = x10_14
                                                                    XAsset* x5_2 =
                                                                        *MATERIAL_EFFECTS_CHART_CHARTOCEAN
                                                                    v3_3.q = data_18c7560
                                                                    int128_t v2_4 = vmul_f32(v3_3, v2_3, 0)
                                                                    double v0_9 = vmul_f32(v3_3, v0_8, 0)
                                                                    double v1_4 = vmul_f32(v3_3, v1_3, 0)
                                                                    v2_4:8.q = v2_4.q
                                                                    var_d0 = v0_9
                                                                    var_c8_1.q = v1_4
                                                                    var_c0.o = v2_4
                                                                    x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, 
                                                                        v4_2, v5_2 = DrawQuadParams(result_4, 
                                                                        &var_b0, &var_d0, gSpriteWhite, false, 
                                                                        x5_2)
                                                                    x8_20 = *(arg2 + 0xeffcc)
                    
                    j += 1
                    x20_1 += 0xc
                while (j s< sx.q(x8_20))
                
                x20 = var_178
            label_c1bfac:
                result_3 = result_4
            label_c1bfb0:
                uint64_t x8_23 = zx.q(i - 0xe)
                uint32_t var_120
                
                if (x8_23.d u<= 8)
                    switch (x8_23)
                        case 0
                            DrawOceanLines(arg2, result_3)
                        case 1
                            DrawLand(arg1, arg2)
                        case 2
                            v0_8.d = *V20
                            v1_3.d = *(V20 + 4)
                            int32_t var_a8_2 = 0x45000000
                            var_b0 = v0_8.d
                            int32_t var_ac_4 = v1_3.d
                            int32_t var_a4_3 = v1_3.d
                            var_a0 = v0_8.d
                            var_9c = 0x4500000044800000
                            int32_t var_94_3 = 0x44800000
                            __builtin_memcpy(&var_d0, 
                                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x"
                            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x40\x00\x00\x80\x3f", 
                                0x20)
                            int32_t v0_10 = RandomUnit(arg2)
                            v9.d = v0_10 f+ v0_10
                            int32_t v0_11 = RandomUnit(arg2)
                            var_120 = v9.d
                            int32_t var_11c_1 = v0_11
                            v9.d = RandomUnit(arg2) f* v11.d
                            Transform2FromPosRotScale(&var_120, v9.d, 
                                RandomRange(arg2, float.s(0x3f4ccccd), float.s(0x3f99999a)))
                            int32_t v0_15
                            int32_t v1_7
                            v0_15, v1_7 = TransformPoint2(&var_f0, &var_d0)
                            var_d0.d = v0_15
                            var_d0:4.d = v1_7
                            int32_t v0_16
                            int32_t v1_8
                            v0_16, v1_8 = TransformPoint2(&var_f0, &var_d0 | 8)
                            int32_t var_c8_3 = v0_16
                            int32_t var_c4_3 = v1_8
                            int32_t v0_17
                            int32_t v1_9
                            v0_17, v1_9 = TransformPoint2(&var_f0, &var_c0)
                            var_c0 = v0_17
                            int32_t var_bc_3 = v1_9
                            int32_t v0_18
                            int32_t v1_10
                            v0_18, v1_10 = TransformPoint2(&var_f0, &var_b8)
                            XAsset* x0_37 = *TEXTURE_EFFECTS_CHART_PARCHMENT_GRUNGE
                            var_b8 = v0_18
                            int32_t var_b4_3 = v1_10
                            DrawQuadParams(x0_37, &var_b0, &var_d0, gSpriteWhite, 
                                *MATERIAL_EFFECTS_CHART_TIELDADDITIVE)
                        case 3
                            int64_t* x0_38 = *gGraphicsInterface
                            int64_t var_1b0
                            int64_t x1_26 = var_1b0 & 0xffffffff00000000
                            var_1b0 = x1_26
                            (*(*x0_38 + 0x120))(x0_38, x1_26, 1)
                            DrawCities(arg1, arg2)
                        case 4
                            if (*(arg1 + 0xc) u<= 1)
                                var_b0.o = data_71d140
                                v0_8, v1_3, v3_3, v4_2, v5_2 = DrawRectSolid(&var_b0, gRgbaIWhite)
                            
                            int32_t x8_30 = *(arg2 + 0xeffcc)
                            
                            if (x8_30 s>= 1)
                                void* __offset(MapData, 0x8ffe8) x24_1 = arg2 + 0x8ffe8
                                int64_t j_1 = 0
                                
                                do
                                    v4_2.d = float.s(0x3a800000)
                                    v0_8.q = *(arg2 + 0x10 + *(x24_1 - 4) * 0xc)
                                    v1_3.q = *(arg2 + 0x10 + *x24_1 * 0xc)
                                    v5_2.q = *(arg2 + 0x10 + sx.q(*(x24_1 + 4)) * 0xc)
                                    int128_t v2_5 = vmul_f32(v0_8, v13, 0)
                                    v3_3.d = v4_2.d f* v2_5:4.d
                                    v0_8.d = float.s(0x3f79999a)
                                    v1_3 = vmul_f32(v1_3, v13, 0)
                                    bool cond:7_1 = v3_3.d f> v0_8.d
                                    v0_8 = vmul_f32(v5_2, v13, 0)
                                    
                                    if (cond:7_1)
                                    label_c1c1a8:
                                        var_b0.q = v2_5.q
                                        var_a8_1.q = v1_3.q
                                        uint32_t x8_28 = *gRgbaIBlack
                                        v0_8:8.q = v0_8.q
                                        var_a0.o = v0_8
                                        var_120 = x8_28
                                        uint32_t var_11c_2 = x8_28
                                        var_118 = x8_28
                                        __builtin_memcpy(&var_d0, 
                                            "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x"
                                        "00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00"
                                        "00\x00\x3f", 
                                            0x20)
                                        var_f0 = SpriteColorSet(&var_120, gRgbaINone)
                                        var_e8.q = SpriteColorSet(&var_120 | 4, gRgbaINone)
                                        SpriteColorSet(var_140, gRgbaINone)
                                        int64_t var_e0_1 = SpriteColorSet(var_140, gRgbaINone)
                                        v0_8, v1_3, v3_3, v4_2, v5_2 = DrawQuadParams(
                                            *TEXTURE_SYS_WHITE_PIXEL, &var_b0, &var_d0, &var_f0, 
                                            true, nullptr)
                                        x8_30 = *(arg2 + 0xeffcc)
                                    else
                                        v4_2.d = v4_2.d f* v2_5.d
                                        v5_2.d = float.s(0x3ccccccd)
                                        
                                        if (v4_2.d f< v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v5_2.d = float.s(0x3ffccccd)
                                        
                                        if (v4_2.d f> v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = float.s(0x3ccccccd)
                                        
                                        if (v3_3.d f< v4_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = float.s(0x3a800000)
                                        v3_3.d = v4_2.d f* v1_3:4.d
                                        v5_2.d = float.s(0x3f79999a)
                                        
                                        if (v3_3.d f> v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = v4_2.d f* v1_3.d
                                        v5_2.d = float.s(0x3ccccccd)
                                        
                                        if (v4_2.d f< v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v5_2.d = float.s(0x3ffccccd)
                                        
                                        if (v4_2.d f> v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = float.s(0x3ccccccd)
                                        
                                        if (v3_3.d f< v4_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = float.s(0x3a800000)
                                        v3_3.d = v4_2.d f* v0_8:4.d
                                        v5_2.d = float.s(0x3f79999a)
                                        
                                        if (v3_3.d f> v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = v4_2.d f* v0_8.d
                                        v5_2.d = float.s(0x3ccccccd)
                                        
                                        if (v4_2.d f< v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v5_2.d = float.s(0x3ffccccd)
                                        
                                        if (v4_2.d f> v5_2.d)
                                            goto label_c1c1a8
                                        
                                        v4_2.d = float.s(0x3ccccccd)
                                        
                                        if (not(v3_3.d f>= v4_2.d))
                                            goto label_c1c1a8
                                    
                                    j_1 += 1
                                    x24_1 += 0xc
                                while (j_1 s< sx.q(x8_30))
                            
                            var_b0.o = data_71d140
                            v0_8.d = fconvert.s(20f)
                            x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 =
                                DrawRectFrame(&var_b0, gRgbaIBlack, v0_8.d)
                            uint64_t x8_31 = zx.q(i - 0x13)
                            
                            if (x8_31.d u> 3)
                                x20 = var_178
                                result_3 = result_4
                            else
                                x20 = var_178
                                result_3 = result_4
                                
                                switch (x8_31)
                                    case 0
                                        DrawTerrain(arg2, result_3)
                                    case 1
                                        goto label_c1c3ac
                                    case 2
                                        DrawSlopes(arg2, arg3)
                                    case 3
                                        goto label_c1b834
                        case 5
                            DrawTerrain(arg2, result_3)
                        case 6
                        label_c1c3ac:
                            
                            if (*(arg1 + 0xc) != 0)
                                int32_t x8_35 = *(arg2 + 0x215fd4)
                                
                                if (x8_35 s>= 1)
                                    void* __offset(MapData, 0x195fe4) x24_2 = arg2 + 0x195fe4
                                    int64_t j_2 = 0
                                    
                                    do
                                        v0_8.d = *(arg2 + 0x10 + sx.q(*(x24_2 - 4)) * 0xc + 8)
                                        v1_3.d = *(arg2 + 0x10 + sx.q(*(x24_2 + 0xc)) * 0xc + 8)
                                        v0_8.d f- 0f
                                        int32_t x10_19
                                        
                                        x10_19 = v0_8.d f< 0f ? 2 : 1
                                        
                                        int32_t x9_22
                                        
                                        if (v1_3.d f< 0f)
                                            x9_22 = x10_19
                                        else
                                            x9_22 = v0_8.d f< 0f ? 1 : 0
                                        
                                        if (x9_22 != 2)
                                            v0_8.d = *(x24_2 - 0x10)
                                            v1_3.d = *(x24_2 - 0xc)
                                            v2_3.d = *(x24_2 - 8)
                                            v3_3.d = *x24_2
                                            v4_2.d = *(x24_2 + 4)
                                            v5_2.d = *(x24_2 + 8)
                                            x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 =
                                                CapsuleDraw(COLOR_COAST, COLOR_COAST, 
                                                *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE, x3_1, 
                                                x4_1, v0_8.d, v1_3.d)
                                            x8_35 = *(arg2 + 0x215fd4)
                                        
                                        j_2 += 1
                                        x24_2 += 0x20
                                    while (j_2 s< sx.q(x8_35))
                                    
                                    x20 = var_178
                                    result_3 = result_4
                                    
                                    if (i == 0x16)
                                        goto label_c1b834
                                    
                                    if (i == 0x15)
                                        DrawSlopes(arg2, arg3)
                        case 7
                            DrawSlopes(arg2, arg3)
                        case 8
                        label_c1b834:
                            int64_t var_1a8
                            int64_t x1_4 = (var_1a8 & 0xffffffff00000000) | zx.q(*COLOR_COAST)
                            var_1a8 = x1_4
                            DrawCoast(arg2 + 0x10, x1_4)
        else
            int64_t* x0_16 = *gGraphicsInterface
            int64_t var_170
            int64_t x1_8 = var_170 & 0xffffffff00000000
            var_170 = x1_8
            x0_15, x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 =
                (*(*x0_16 + 0x120))(x0_16, x1_8, 0)
            int32_t x8_14 = *(arg2 + 0xeffcc)
            
            if (x8_14 s>= 1)
                void* __offset(MapData, 0x8ffe8) x24 = arg2 + 0x8ffe8
                int64_t j_3 = 0
                
                do
                    int64_t x9_4 = sx.q(*(x24 - 4))
                    v0_8.d = *(arg2 + x9_4 * 0xc + 0x18)
                    int32_t x9_6
                    
                    if (v0_8.d f<= 0f)
                        x9_6 = 0
                    else
                        v0_8.q = *(arg2 + x9_4 * 0xc + 0x10)
                        x9_6 = 1
                        var_f0 = vmul_f32(v0_8, v13, 0).q
                    
                    int64_t x10_2 = sx.q(*x24)
                    v0_8.d = *(arg2 + x10_2 * 0xc + 0x18)
                    
                    if (not(v0_8.d f<= 0f))
                        v0_8.q = *(arg2 + x10_2 * 0xc + 0x10)
                        (&var_f0)[zx.q(x9_6)] = vmul_f32(v0_8, v13, 0).q
                        x9_6 += 1
                    
                    int64_t x10_5 = sx.q(*(x24 + 4))
                    v0_8.d = *(arg2 + x10_5 * 0xc + 0x18)
                    
                    if (v0_8.d f> 0f)
                        v0_8.q = *(arg2 + x10_5 * 0xc + 0x10)
                        (&var_f0)[zx.q(x9_6)] = vmul_f32(v0_8, v13, 0).q
                        
                        if (x9_6 == 1)
                        label_c1bb88:
                            v0_8.d = var_f0.d
                            v1_3.d = var_f0:4.d
                            v2_3.d = var_e8
                            int32_t var_e4
                            v3_3.d = var_e4
                            v4_2.d = v2_3.d f- v0_8.d
                            v5_2.d = v3_3.d f- v1_3.d
                            float v6_2 = sqrt(v4_2.d f* v4_2.d + v5_2.d f* v5_2.d)
                            v4_2.d = fneg(v4_2.d)
                            v6_2 = v10.d f/ v6_2
                            v5_2.d = v5_2.d f* v6_2
                            v4_2.d = v6_2 f* v4_2.d
                            v6_2 = v0_8.d f+ v5_2.d
                            float v7_2 = v1_3.d f+ v4_2.d
                            float v16_2 = v2_3.d f+ v5_2.d
                            float v17_1 = v3_3.d f+ v4_2.d
                            v0_8.d = v0_8.d f- v5_2.d
                            v1_3.d = v1_3.d f- v4_2.d
                            v2_3.d = v2_3.d f- v5_2.d
                            v3_3.d = v3_3.d f- v4_2.d
                            v4_2.d = data_18c7560.d
                            v5_2.d = data_18c7560:4.d
                            var_b0 = v6_2
                            float var_ac_2 = v7_2
                            var_a8_1 = v16_2
                            float var_a4_1 = v17_1
                            var_a0 = v0_8.d
                            var_9c.d = v1_3.d
                            var_9c:4.d = v2_3.d
                            int32_t var_94_1 = v3_3.d
                            v0_8.d = v4_2.d f* v0_8.d
                            v1_3.d = v5_2.d f* v1_3.d
                            v2_3.d = v4_2.d f* v2_3.d
                            v3_3.d = v5_2.d f* v3_3.d
                            var_d0.d = v6_2 f* v4_2.d
                            var_d0:4.d = v7_2 f* v5_2.d
                            var_c8_1 = v4_2.d f* v16_2
                            float var_c4_1 = v5_2.d f* v17_1
                            var_c0 = v0_8.d
                            int32_t var_bc_1 = v1_3.d
                            var_b8 = v2_3.d
                            int32_t var_b4_1 = v3_3.d
                            x0_15, x3_1, x4_1, v0_8, v1_3, v2_3, v3_3, v4_2, v5_2 = DrawQuadParams(
                                result_2, &var_b0, &var_d0, gSpriteWhite, false, 
                                *MATERIAL_EFFECTS_CHART_CHARTSDFINIT)
                            x8_14 = *(arg2 + 0xeffcc)
                    else if (x9_6 == 2)
                        goto label_c1bb88
                    
                    j_3 += 1
                    x24 += 0xc
                while (j_3 s< sx.q(x8_14))
                
                x20 = var_178
                result_3 = result_4
                goto label_c1bc84
        UIProjectScreenRestore()
        Draw3DRenderItemSubmissionEnd()
        RenderUseSubmittedCamera()
        RenderItemListSort()
        RenderItemListDraw(2)
        RenderClearRenderItems()
        RendererPopRT()
    else if (i == 0x16)
        goto label_c1b8a8
    
    i += 1
while (i != 0x17)

if (result_3 != 0)
    AssetCatalogPurgeAsset(result_3)

if (result_2 != 0)
    AssetCatalogPurgeAsset(result_2)

if (x0_2 != 0)
    AssetCatalogPurgeAsset(x0_2)

return result
