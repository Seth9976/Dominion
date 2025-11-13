// 函数: _Z12DrawImageNewP6XAssetS0_RK4Vec2S3_11TilingStyleRK5RectF13ImageRotationRK11ClipRegion2RK4Mat4PK11SpriteColorbS7_S0_
// 地址: 0xfd06bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
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
int32_t var_264 = arg7
int32_t var_2b4 = arg5
XAsset* x28 = arg13
XAsset* x27 = arg1
int64_t result
uint64_t v0
int64_t v1
int128_t v3
int128_t v4
int64_t v5
result, v0, v1, v3, v4, v5 = Mat4Multiply(*gpRenderAppData + 0x124, arg9)
XAsset* var_250 = x27

if (x28 == 0)
    x28 = *(*gpRenderAppData + 0x3b8)
    
    if (x28 == 0)
        if ((zx.d(data_24226f0) & 1) == 0)
            result, v0, v1, v3, v4, v5 = __cxa_guard_acquire(&data_24226f0)
            
            if (result.d != 0)
                data_24226e8 = AssetPtrFromPath("sys/sprite_3d.material", 5)
                result, v0, v1, v3, v4, v5 = __cxa_guard_release(&data_24226f0)
                x27 = var_250
        
        x28 = data_24226e8

uint32_t x23 = zx.d(arg11)
SpriteColor* x24 = arg10
uint64_t var_210
int64_t var_1c0
int64_t var_1b0
float var_1a0
int64_t var_140
float var_120
float var_110
float var_10c
float var_104
float var_100
float var_fc
float var_f4
float var_f0
float var_ec
float var_e4
float var_d0
float v2

if (var_2b4 == 0)
    v1 = *arg4
    var_210 = *V20
    int64_t var_208_1 = v1
    v0.d = *arg12
    v1.d = *(arg12 + 4)
    var_d0 = v0.d
    int32_t var_cc_1 = v1.d
    v2 = *(arg12 + 8)
    int32_t var_c0_1 = v0.d
    int32_t var_c4_1 = v1.d
    float var_c8_1 = v2
    v0.d = *(arg12 + 0xc)
    float var_b8_1 = v2
    int32_t var_bc_1 = v0.d
    int32_t var_b4_1 = v0.d
    result = GetClippedRectUVs(&var_210, &var_d0, arg8, &var_120, &var_140)
    
    if ((result.d & 1) != 0)
        ImageRotationUVS(zx.q(var_264), &var_140)
        float v0_1 = var_120
        float v21_2 = v0_1 * var_110
        float var_11c
        float v22_2 = var_11c * var_10c
        float v23_2 = v0_1 * var_100
        float v24_2 = var_11c * var_fc
        v0_1 = v0_1 * var_f0
        float v1_1 = var_11c * var_ec
        float var_118
        float v2_1 = var_110 * var_118
        float v5_1 = var_100 * var_118
        float v16_2 = var_f0 * var_118
        float var_114
        float v3_1 = var_10c * var_114
        float v6_2 = var_fc * var_114
        float v17_2 = var_ec * var_114
        var_1a0 = var_104 + v21_2 + v22_2
        float var_19c_1 = var_f4 + v23_2 + v24_2
        float var_194_1 = var_104 + v22_2 + v2_1
        float var_190_1 = var_f4 + v24_2 + v5_1
        float var_18c_1 = var_e4 + v1_1 + v16_2
        float var_188_1 = var_104 + v21_2 + v3_1
        float var_184_1 = var_f4 + v23_2 + v6_2
        float var_180_1 = var_e4 + v0_1 + v17_2
        float var_17c_1 = var_104 + v2_1 + v3_1
        float var_178_1 = var_f4 + v5_1 + v6_2
        float var_174_1 = var_e4 + v16_2 + v17_2
        
        if (*x27 == 0)
            if (*(x27 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x27, false, true)
        
        int64_t x11_1 = *VZ
        int32_t x10_1 = *(VZ + 8)
        var_1b0 = var_1a0.q
        float var_1a8_1 = var_e4 + v0_1 + v1_1
        var_1c0 = x11_1
        int32_t var_1b8_1 = x10_1
        XAsset* var_2f0_1 = x28
        int64_t var_2e8_1 = 0
        return Draw3DQuadFull(&var_1a0, &var_140, x24, zx.q(x23) & 1, &var_1b0, &var_1c0, x27, arg2)
else
    int32_t x19_1 = var_2b4
    XAsset* var_258_1 = x28
    uint32_t var_244_1 = x23
    int64_t var_208
    int32_t var_138
    int32_t var_130
    int32_t var_128
    float v6_1
    float v7_1
    float v16_1
    float v17_1
    
    if (var_2b4 - 6 u> 2)
        int64_t* x8_11 = *x27
        
        if (x8_11 == 0)
            if (*(x27 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            result, v0, v1, v3, v4, v5 = AssetCatalogLoadAsset(x27, false, true)
            x8_11 = *x27
        
        int32_t* x8_14 = **x8_11
        v0.d = *x8_14
        v1.d = x8_14[1]
        v3.d = x8_14[2]
        v0.d = float.s(v0.d)
        v4.d = float.s(v1.d)
        v2 = x8_14[3] f* v3.d
        v1.d = v2 f* v0.d
        v0.d = v2 f* v4.d
        
        if (x19_1 - 3 u> 2)
            v4.d = *arg3
            v3.d = *(arg3 + 4)
            v2 = *arg4
        else
            v2 = *arg4
            v3.d = v2 f/ v1.d
            
            if (x19_1 == 5)
                v4.d = *V21
                v5.d = *(V21 + 4)
                v4.d = v3.d f* v4.d
                v3.d = v3.d f* v5.d
            else
                v4.d = *(arg4 + 4)
                v5.d = v4.d f/ v0.d
                
                if (x19_1 == 4)
                    v3.d = *V21
                    v4.d = v5.d f* v3.d
                    v3.d = v5.d f* *(V21 + 4)
                else if (x19_1 == 3)
                    if (v3.d f< v5.d)
                        v3.d = v3.d
                    else
                        v3.d = v5.d
                    
                    v4.d = *V21
                    v4.d = v3.d f* v4.d
                    v3.d = v3.d f* *(V21 + 4)
        
        v1.d = v1.d f* v4.d
        v3.d = v0.d f* v3.d
        v0.d = fconvert.s(0.5f)
        
        if (v2 f>= v1.d)
            v4.d = v1.d f* v0.d
            v5.d = v2 f- v4.d
            v1.d = fconvert.s(0.5f)
        else
            v4.d = v2 f* v0.d
            v0.d = v4.d f/ v1.d
            v1.d = fconvert.s(1f)
            v1.d = v1.d f- v0.d
            v5 = v4.q
        
        var_120 = 0f
        int32_t var_11c_1 = v4.d
        int32_t var_118_1 = v5.d
        float var_114_1 = v2
        v4.d = *(arg4 + 4)
        v2 = fconvert.s(0.5f)
        
        if (v4.d f>= v3.d)
            v5.d = v3.d f* v2
            v6_1 = v4.d f- v5.d
            v3.d = fconvert.s(0.5f)
        else
            v5.d = v4.d f* v2
            v2 = v5.d f/ v3.d
            v3.d = fconvert.s(1f)
            v3.d = v3.d f- v2
            v6_1 = v5.d
        
        var_1b0.d = 0
        var_1b0:4.d = v5.d
        float var_1a8_2 = v6_1
        int32_t var_1a4_1 = v4.d
        v5.d = *arg12
        v6_1 = *(arg12 + 4)
        v4.d = 0f
        v7_1 = *(arg12 + 8) f- v5.d
        v16_1 = *(arg12 + 0xc) - v6_1
        Vec2* var_2d0_1 = &var_128
        v17_1 = v7_1 f* v4.d
        v4.d = v16_1 f* v4.d
        v0.d = v7_1 f* v0.d
        v1.d = v7_1 f* v1.d
        v3.d = v16_1 f* v3.d
        v4.d = v6_1 f+ v4.d
        v0.d = v5.d f+ v0.d
        v1.d = v5.d f+ v1.d
        v3.d = v6_1 f+ v3.d
        int32_t* var_2c8_1 = &var_130
        int32_t* var_2c0_1 = &var_138
        var_1c0.d = v5.d f+ v17_1
        var_1c0:4.d = v0.d
        int32_t var_1d0 = v4.d
        float var_1cc_1 = v6_1 + v16_1 * v2
        int32_t var_1b8_2 = v1.d
        float var_1b4_1 = v5.d f+ v7_1
        int32_t var_1c8_1 = v3.d
        float var_1c4_1 = v6_1 + v16_1
        int64_t i = 0
        SpriteColor* var_2d8_1 = x24
        
        do
            int64_t j = 0
            int64_t x26_1 = i & 0x7ffffffd
            int32_t var_238
            var_238.q = i + 1
            int32_t var_260
            var_260.q = i
            int64_t var_2b0_1 = x26_1
            
            do
                if (x19_1 != 1 || j == 0 || x26_1 == 0 || j == 2)
                    int64_t x8_21 = j << 2
                    v0.d = (&var_120)[j]
                    j += 1
                    v1.d = *(&var_1b0 + (i << 2))
                    v2 = *(&var_1b0 + (var_238.q << 2))
                    v3.d = *(&var_1c0 + x8_21)
                    v4.d = (&var_1d0)[i]
                    v5.d = (&var_1d0)[var_238.q]
                    v6_1 = (&var_120)[j]
                    int32_t var_1e0 = v0.d
                    v0.d = *(&var_1c0 + (j << 2))
                    int32_t var_1dc_1 = v1.d
                    var_d0 = v3.d
                    int32_t var_cc_2 = v4.d
                    int32_t var_c0_2 = v3.d
                    int32_t var_bc_2 = v5.d
                    float var_1d8_1 = v6_1
                    float var_1d4_1 = v2
                    int32_t var_c8_2 = v0.d
                    int32_t var_c4_2 = v4.d
                    int32_t var_b8_2 = v0.d
                    int32_t var_b4_2 = v5.d
                    float var_1f0
                    result, v0, v1, v3, v4, v5 =
                        GetClippedRectUVs(&var_1e0, &var_d0, arg8, &var_1f0, &var_140)
                    
                    if ((result.d & 1) != 0)
                        ImageRotationUVS(zx.q(var_264), &var_140)
                        SpriteColor* x2_10
                        
                        if ((x23 & 1) != 0)
                            int64_t var_2a8
                            int64_t x24_1 = (var_2a8 & 0xffffffff00000000) | zx.q(*x24)
                            int64_t var_2a0
                            int64_t x19_2 = (var_2a0 & 0xffffffff00000000) | zx.q(*(x24 + 8))
                            int64_t var_290
                            int64_t x26_2 = (var_290 & 0xffffffff00000000) | zx.q(*(x24 + 0x10))
                            int64_t var_280
                            int64_t fp_1 = (var_280 & 0xffffffff00000000) | zx.q(*(x24 + 0x18))
                            int64_t var_298
                            int64_t x20_2 = (var_298 & 0xffffffff00000000) | zx.q(*(x24 + 4))
                            int64_t var_288
                            int64_t x25_2 = (var_288 & 0xffffffff00000000) | zx.q(*(x24 + 0xc))
                            int64_t var_278
                            int64_t x23_2 = (var_278 & 0xffffffff00000000) | zx.q(*(x24 + 0x14))
                            int32_t var_270
                            int64_t x28_2 = (var_270.q & 0xffffffff00000000) | zx.q(*(x24 + 0x1c))
                            var_210.d = Interp2D<ColorRgbaI>(x24_1, x19_2, x26_2, fp_1, &var_140)
                            var_210:4.d = Interp2D<ColorRgbaI>(x20_2, x25_2, x23_2, x28_2, &var_140)
                            var_208.d = Interp2D<ColorRgbaI>(x24_1, x19_2, x26_2, fp_1, var_2c0_1)
                            x27 = var_250
                            var_208:4.d =
                                Interp2D<ColorRgbaI>(x20_2, x25_2, x23_2, x28_2, var_2c0_1)
                            int32_t var_200_1 =
                                Interp2D<ColorRgbaI>(x24_1, x19_2, x26_2, fp_1, var_2c8_1)
                            int32_t var_1fc_1 =
                                Interp2D<ColorRgbaI>(x20_2, x25_2, x23_2, x28_2, var_2c8_1)
                            var_2a8 = x24_1
                            var_2a0 = x19_2
                            x24 = var_2d8_1
                            x19_1 = var_2b4
                            var_290 = x26_2
                            x26_1 = var_2b0_1
                            var_280 = fp_1
                            int32_t var_1f8_1 =
                                Interp2D<ColorRgbaI>(x24_1, x19_2, x26_2, fp_1, var_2d0_1)
                            var_298 = x20_2
                            var_288 = x25_2
                            var_278 = x23_2
                            var_270.q = x28_2
                            x23 = var_244_1
                            x28 = var_258_1
                            x2_10 = &var_210
                            int32_t var_1f4_1 =
                                Interp2D<ColorRgbaI>(x20_2, x25_2, x23_2, x28_2, var_2d0_1)
                        else
                            x2_10 = x24
                        
                        float v18_3 = var_1f0
                        int64_t x8_19 = *VZ
                        float v21_3 = var_110 * v18_3
                        float var_1ec
                        float v22_3 = var_10c * var_1ec
                        float v23_3 = v18_3 * var_100
                        float v24_3 = var_1ec * var_fc
                        v18_3 = v18_3 * var_f0
                        float v19_3 = var_1ec * var_ec
                        var_1a0 = var_104 + v21_3 + v22_3
                        float var_19c_2 = var_f4 + v23_3 + v24_3
                        int64_t x9_6 = var_1a0.q
                        int64_t var_230 = x8_19
                        int32_t x8_20 = *(VZ + 8)
                        float var_1e8
                        float v20_3 = var_110 * var_1e8
                        float v7_3 = var_1e8 * var_100
                        float v3_2 = var_1e8 * var_f0
                        float var_1e4
                        float v5_2 = var_10c * var_1e4
                        float v6_3 = var_1e4 * var_fc
                        float v2_2 = var_1e4 * var_ec
                        int64_t var_220 = x9_6
                        float var_218_1 = var_e4 + v18_3 + v19_3
                        float var_194_2 = var_104 + v20_3 + v22_3
                        float var_190_2 = var_f4 + v7_3 + v24_3
                        float var_18c_2 = var_e4 + v3_2 + v19_3
                        float var_188_2 = var_104 + v21_3 + v5_2
                        float var_184_2 = var_f4 + v23_3 + v6_3
                        float var_180_2 = var_e4 + v18_3 + v2_2
                        float var_17c_2 = var_104 + v20_3 + v5_2
                        float var_178_2 = var_f4 + v7_3 + v6_3
                        float var_174_2 = var_e4 + v3_2 + v2_2
                        int32_t var_228_1 = x8_20
                        XAsset* var_2f0_2 = x28
                        int64_t var_2e8_2 = 0
                        result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_1a0, &var_140, x2_10, 
                            zx.q(x23) & 1, &var_220, &var_230, x27, nullptr)
                        i = var_260.q
                else
                    j += 1
            while (j != 3)
            
            i = var_238.q
        while (i != 3)
    else
        int64_t* x8_4 = *x27
        
        if (x8_4 == 0)
            if (*(x27 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            result, v0, v1, v3, v4, v5 = AssetCatalogLoadAsset(x27, false, true)
            x8_4 = *x27
        
        int32_t* x8_7 = **x8_4
        v0.d = *x8_7
        v1.d = x8_7[1]
        v3.d = x8_7[2]
        v0.d = float.s(v0.d)
        v1.d = float.s(v1.d)
        v2 = x8_7[3] f* v3.d
        v8.d = v2 f* v0.d
        v15.d = v2 f* v1.d
        
        if (x19_1 != 6)
            v6_1 = *arg3
            v3.d = *(arg3 + 4)
            v4.d = *arg4
        else
            v4.d = *arg4
            v1.d = *(arg4 + 4)
            v0.d = *V21
            
            if (v4.d f<= v1.d)
                v1.d = *(V21 + 4)
                v2 = v4.d f/ v8.d
                v6_1 = v2 f* v0.d
                v3.d = v2 f* v1.d
            else
                v1.d = v1.d f/ v15.d
                v6_1 = v1.d f* v0.d
                v3.d = v1.d f* *(V21 + 4)
        
        v2 = *arg6
        v0.d = *(arg6 + 4)
        v1.d = *(arg6 + 8)
        v10.d = *(arg6 + 0xc)
        v14.d = v6_1 * v2
        v17_1 = v6_1 f* v1.d
        v5.d = v14.d f+ v17_1
        v11.d = v3.d f* v0.d
        float v18_1 = v3.d f* v10.d
        ClipRegion2 const& var_240
        float var_238_1
        
        if (v4.d f>= v5.d)
            v16_1 = v4.d f- v5.d
            float temp0_3 = vrndm_f32(v16_1 / (v8.d f* v6_1 f- v5.d) + float.s(0x3727c5ac))
            v4.d = fconvert.s(0.5f)
            
            if (temp0_3 < 0f)
                v4.d = fconvert.s(-0.5f)
            else
                v4.d = v4.d
            
            v4.d = temp0_3 f+ v4.d
            var_238_1 = v16_1
            var_240.d = vcvts_s32_f32(v4.d)
            v6_1 = *(arg4 + 4)
            v4.d = v11.d f+ v18_1
            
            if (v6_1 f>= v5.d)
                goto label_fd1020
            
            goto label_fd10b8
        
        v4.d = v4.d f/ v5.d
        v14.d = v14.d f* v4.d
        v17_1 = v17_1 f* v4.d
        v4.d = 0f
        var_240.d = 0
        v5.d = v14.d f+ v17_1
        var_238_1 = v4.d
        v6_1 = *(arg4 + 4)
        v4.d = v11.d f+ v18_1
        float var_270_1
        uint32_t x20_3
        
        if (v6_1 f< v5.d)
        label_fd10b8:
            v3.d = v6_1 f/ v4.d
            v11.d = v11.d f* v3.d
            v18_1 = v18_1 f* v3.d
            v3.d = 0f
            x20_3 = 0
            var_270_1 = v3.d
        else
        label_fd1020:
            v3.d = v15.d f* v3.d
            v6_1 = v6_1 f- v4.d
            v3.d = v3.d f- v4.d
            v4.d = float.s(0x3727c5ac)
            v3.d = v6_1 f/ v3.d
            v3.d = v3.d f+ v4.d
            v3.d = vrndm_f32(v3.d)
            v5.d = fconvert.s(0.5f)
            v4.d = fconvert.s(-0.5f)
            
            if (v3.d f< 0f)
                v4.d = v4.d
            else
                v4.d = v5.d
            
            v3.d = v3.d f+ v4.d
            x20_3 = vcvts_s32_f32(v3.d)
            var_270_1 = v6_1
        
        v9.d = v8.d f- v1.d
        v12.d = v2 f/ v8.d
        v13.d = v0.d f/ v15.d
        float var_264_1 = v18_1
        float var_260_1 = v17_1
        int32_t var_194
        int32_t var_18c
        float v19_1
        float v20_1
        float v21_1
        float v22_1
        float v23_1
        float v24_1
        float v25_1
        
        if (not(v2 == 0f) && not(v0.d f== 0f))
            int32_t var_198_3 = v12.d
            v4.d = var_110
            v3.d = var_10c
            v0.d = var_104
            v5.d = var_fc
            v1.d = var_f4
            v18_1 = *V20
            v19_1 = *(V20 + 4)
            var_1a0.q = 0
            var_194.q = 0
            int64_t x8_23 = *VZ
            int32_t x9_8 = *(VZ + 8)
            v7_1 = v14.d f+ v18_1
            v20_1 = v11.d f+ v19_1
            v21_1 = v18_1 f* v4.d
            v22_1 = v19_1 f* v3.d
            v23_1 = v18_1 * var_100
            v24_1 = v19_1 f* v5.d
            v18_1 = v18_1 * var_f0
            v19_1 = v19_1 * var_ec
            v4.d = v7_1 f* v4.d
            v6_1 = v7_1 * var_100
            v7_1 = v7_1 * var_f0
            v3.d = v20_1 f* v3.d
            v5.d = v20_1 f* v5.d
            v16_1 = v20_1 * var_ec
            v25_1 = var_e4 + v18_1 + v19_1
            var_d0 = v0.d f+ v21_1 + v22_1
            float var_cc_3 = v1.d f+ v23_1 + v24_1
            var_140 = x8_23
            var_138 = x9_8
            v22_1 = v4.d f+ v22_1
            v24_1 = v6_1 + v24_1
            v19_1 = v7_1 + v19_1
            v21_1 = v21_1 f+ v3.d
            v23_1 = v23_1 f+ v5.d
            v18_1 = v18_1 + v16_1
            v3.d = v4.d f+ v3.d
            v4.d = v6_1 f+ v5.d
            v5.d = v7_1 + v16_1
            v6_1 = v0.d f+ v22_1
            v7_1 = v1.d f+ v24_1
            v16_1 = var_e4 + v19_1
            v17_1 = v0.d f+ v21_1
            v19_1 = v1.d f+ v23_1
            v0.d = v0.d f+ v3.d
            v1.d = v1.d f+ v4.d
            var_18c = v13.d
            int32_t var_188_3 = v12.d
            int32_t var_184_3 = v13.d
            float var_c4_3 = v6_1
            float var_c0_3 = v7_1
            float var_bc_3 = v16_1
            float var_b8_3 = v17_1
            float var_b4_3 = v19_1
            float var_b0_1 = var_e4 + v18_1
            int32_t var_ac_1 = v0.d
            int32_t var_a8_1 = v1.d
            float var_a4_1 = var_e4 f+ v5.d
            var_210 = var_d0.q
            var_208.d = v25_1
            XAsset* var_2f0_3 = x28
            int64_t var_2e8_3 = 0
            result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_d0, &var_1a0, x24, zx.q(x23) & 1, 
                &var_210, &var_140, x27, nullptr)
            v0.d = *(arg6 + 4)
            v1.d = *(arg6 + 8)
        
        v10.d = v15.d f- v10.d
        v8.d = v9.d f/ v8.d
        int32_t var_190
        
        if (not(v1.d f== 0f) && not(v0.d f== 0f))
            v4.d = *arg4
            var_1a0 = v8.d
            v5.d = var_110
            v0.d = var_104
            v1.d = var_f4
            int32_t var_19c
            var_19c.q = 0x3f80000000000000
            v3.d = 0f
            v20_1 = v11.d f+ v3.d
            v19_1 = v4.d f- var_260_1
            int32_t var_188_4 = 0x3f800000
            int64_t x9_10 = *VZ
            int32_t x8_25 = *(VZ + 8)
            v4.d = v4.d f+ v3.d
            v21_1 = var_10c f* v3.d
            v22_1 = var_fc f* v3.d
            v3.d = var_ec f* v3.d
            v7_1 = v20_1 * var_10c
            v16_1 = v20_1 * var_fc
            v18_1 = v20_1 * var_ec
            v20_1 = v19_1 f* v5.d
            v23_1 = v19_1 * var_100
            v19_1 = v19_1 * var_f0
            v5.d = v4.d f* v5.d
            v6_1 = v4.d f* var_100
            v4.d = v4.d f* var_f0
            v17_1 = v20_1 + v21_1
            v21_1 = v5.d f+ v21_1
            v20_1 = v20_1 + v7_1
            v5.d = v5.d f+ v7_1
            v7_1 = v0.d f+ v17_1
            v17_1 = var_e4 + v19_1 f+ v3.d
            var_d0 = v7_1
            float var_cc_4 = v1.d f+ v23_1 + v22_1
            var_140 = x9_10
            var_138 = x8_25
            v3.d = v4.d f+ v3.d
            v19_1 = v19_1 + v18_1
            v4.d = v4.d f+ v18_1
            v18_1 = v0.d f+ v21_1
            v21_1 = v1.d f+ v6_1 + v22_1
            v3.d = var_e4 f+ v3.d
            v20_1 = v0.d f+ v20_1
            v22_1 = v1.d f+ v23_1 + v16_1
            v0.d = v0.d f+ v5.d
            v1.d = v1.d f+ v6_1 + v16_1
            var_194 = 0
            var_190 = v8.d
            var_18c = v13.d
            int32_t var_184_4 = v13.d
            float var_c4_4 = v18_1
            float var_c0_4 = v21_1
            int32_t var_bc_4 = v3.d
            float var_b8_4 = v20_1
            float var_b4_4 = v22_1
            float var_b0_2 = var_e4 + v19_1
            int32_t var_ac_2 = v0.d
            int32_t var_a8_2 = v1.d
            float var_a4_2 = var_e4 f+ v4.d
            var_210 = var_d0.q
            var_208.d = v17_1
            XAsset* var_2f0_4 = x28
            int64_t var_2e8_4 = 0
            result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_d0, &var_1a0, x24, zx.q(x23) & 1, 
                &var_210, &var_140, x27, nullptr)
        
        v1.d = *arg6
        v0.d = *(arg6 + 0xc)
        v11.d = v10.d f/ v15.d
        
        if (not(v1.d f== 0f) && not(v0.d f== 0f))
            v4.d = *(arg4 + 4)
            var_1a0 = 0f
            int32_t var_19c_3 = v11.d
            int32_t var_198_4 = v12.d
            var_194 = v11.d
            int32_t var_188_5 = v12.d
            v5.d = var_110
            v0.d = var_104
            v1.d = var_f4
            v3.d = 0f
            v20_1 = v14.d f+ v3.d
            v21_1 = v4.d f- var_264_1
            int32_t var_184_5 = 0x3f800000
            int64_t x9_12 = *VZ
            int32_t x8_27 = *(VZ + 8)
            v4.d = v4.d f+ v3.d
            v22_1 = v5.d f* v3.d
            v23_1 = var_100 f* v3.d
            v3.d = var_f0 f* v3.d
            v5.d = v20_1 f* v5.d
            v7_1 = v20_1 * var_100
            v17_1 = v20_1 * var_f0
            var_190.q = 0x3f80000000000000
            v19_1 = v21_1 * var_10c
            v20_1 = v21_1 * var_fc
            v21_1 = v21_1 * var_ec
            v6_1 = v4.d f* var_10c
            v16_1 = v4.d f* var_fc
            v4.d = v4.d f* var_ec
            v18_1 = v22_1 + v19_1
            v25_1 = v3.d f+ v21_1
            v19_1 = v5.d f+ v19_1
            v3.d = v3.d f+ v4.d
            v5.d = v5.d f+ v6_1
            v4.d = v17_1 f+ v4.d
            var_d0 = v0.d f+ v18_1
            float var_cc_5 = v1.d f+ v23_1 + v20_1
            var_140 = x9_12
            var_138 = x8_27
            v18_1 = v0.d f+ v19_1
            v19_1 = v1.d f+ v7_1 + v20_1
            v20_1 = var_e4 + v17_1 + v21_1
            v21_1 = v0.d f+ v22_1 + v6_1
            v22_1 = v1.d f+ v23_1 + v16_1
            v3.d = var_e4 f+ v3.d
            v0.d = v0.d f+ v5.d
            v1.d = v1.d f+ v7_1 + v16_1
            float var_c4_5 = v18_1
            float var_c0_5 = v19_1
            float var_bc_5 = v20_1
            float var_b8_5 = v21_1
            float var_b4_5 = v22_1
            int32_t var_b0_3 = v3.d
            int32_t var_ac_3 = v0.d
            int32_t var_a8_3 = v1.d
            float var_a4_3 = var_e4 f+ v4.d
            var_210 = var_d0.q
            var_208.d = var_e4 + v25_1
            XAsset* var_2f0_5 = x28
            int64_t var_2e8_5 = 0
            result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_d0, &var_1a0, x24, zx.q(x23) & 1, 
                &var_210, &var_140, x27, nullptr)
            v0.d = *(arg6 + 0xc)
        
        v1.d = *(arg6 + 8)
        v10.d = float.s(x20_3)
        v9.d = float.s(var_240.d)
        
        if (not(v1.d f== 0f) && not(v0.d f== 0f))
            v4.d = *arg4
            v3.d = *(arg4 + 4)
            var_1a0 = v8.d
            int32_t var_19c_4 = v11.d
            var_194 = v11.d
            int32_t var_190_3 = v8.d
            v5.d = fconvert.s(1f)
            v5:4.d = fconvert.s(1f)
            v0.d = var_104
            v1.d = var_f4
            int32_t var_198_5 = 0x3f800000
            var_18c.q = v5
            v5.d = var_260_1
            int32_t var_184_6 = 0x3f800000
            int64_t x8_30 = *VZ
            int32_t x9_14 = *(VZ + 8)
            v5.d = v4.d f- v5.d
            v20_1 = v3.d f- var_264_1
            v21_1 = v4.d f* var_110
            v22_1 = v4.d f* var_100
            v4.d = v4.d f* var_f0
            v23_1 = v3.d f* var_10c
            v24_1 = v3.d f* var_fc
            v6_1 = v5.d f* var_110
            v7_1 = v20_1 * var_10c
            v16_1 = v5.d f* var_100
            v17_1 = v20_1 * var_fc
            v5.d = v5.d f* var_f0
            v18_1 = v20_1 * var_ec
            v3.d = v3.d f* var_ec
            v19_1 = v21_1 + v23_1
            float v26_1 = v6_1 + v7_1
            v7_1 = v21_1 + v7_1
            v21_1 = v5.d f+ v18_1
            v25_1 = v4.d f+ v3.d
            v4.d = v4.d f+ v18_1
            v18_1 = v1.d f+ v22_1 + v24_1
            var_d0 = v0.d f+ v26_1
            float var_cc_6 = v1.d f+ v16_1 + v17_1
            var_140 = x8_30
            var_138 = x9_14
            v3.d = v5.d f+ v3.d
            v5.d = v0.d f+ v19_1
            v7_1 = v0.d f+ v7_1
            v17_1 = v1.d f+ v22_1 + v17_1
            v4.d = var_e4 f+ v4.d
            v0.d = v0.d f+ v6_1 + v23_1
            v1.d = v1.d f+ v16_1 + v24_1
            float var_a8_4 = v18_1
            float var_a4_4 = var_e4 + v25_1
            float var_c4_6 = v7_1
            float var_c0_6 = v17_1
            int32_t var_bc_6 = v4.d
            int32_t var_b8_6 = v0.d
            int32_t var_b4_6 = v1.d
            float var_b0_4 = var_e4 f+ v3.d
            int32_t var_ac_4 = v5.d
            var_210 = var_d0.q
            var_208.d = var_e4 + v21_1
            XAsset* var_2f0_6 = x28
            int64_t var_2e8_6 = 0
            result, v0, v1, v3, v4 = Draw3DQuadFull(&var_d0, &var_1a0, x24, zx.q(x23) & 1, 
                &var_210, &var_140, x27, nullptr)
            v1.d = *(arg6 + 8)
            v0.d = *(arg6 + 0xc)
        
        v3 = data_71ba10
        v9.d = var_238_1 f/ v9.d
        v4 = data_71c420
        v10.d = var_270_1 f/ v10.d
        var_140.d = v12.d
        var_140:4.d = v13.d
        var_138 = v8.d
        int32_t var_134_1 = v13.d
        var_130 = v12.d
        int32_t var_12c_1 = v11.d
        int32_t var_198_6 = var_240.d - 1
        var_1a0.q = 1
        var_194.o = v3
        int32_t var_184_7 = x20_3 - 1
        int32_t var_180_3 = var_240.d - 1
        int32_t var_17c_3 = x20_3 - 1
        int32_t var_178
        var_178.o = v4
        int32_t var_168_1 = 0
        int32_t var_164_1 = x20_3 - 1
        int64_t var_160_1 = 0x100000000
        int32_t var_158_1 = var_240.d - 1
        int32_t var_154_1 = 1
        int32_t var_150_1 = var_240.d - 1
        int32_t var_14c_1 = x20_3 - 1
        int64_t var_148_1 = 0x100000000
        var_128 = v8.d
        int32_t var_124_1 = v11.d
        float v27_1
        
        if (not(v1.d f== 0f) && not(v0.d f== 0f))
            float* i_1 = &var_1a0
            var_238_1.q = &var_140
            
            do
                float x8_34 = *i_1
                int32_t x9_18 = i_1[1]
                int32_t x10_8 = i_1[2]
                int32_t x11_6 = i_1[3]
                int32_t x25_3 = i_1[4]
                int32_t x26_3 = i_1[5]
                
                if (x10_8 != x8_34 || x11_6 != x9_18)
                    while (true)
                        float x19_3 = x8_34
                        int32_t fp_2 = x9_18
                        int32_t x9_19 = *(VZ + 8)
                        v3.d = var_10c
                        v5.d = var_100
                        v0.d = float.s(x19_3)
                        v1.d = float.s(fp_2)
                        v4.d = var_104
                        var_210 = *VZ
                        var_208.d = x9_19
                        int32_t x9_20 = *(V2I1 + 4)
                        v0.d = v9.d f* v0.d
                        v1.d = v10.d f* v1.d
                        v19_1 = v0.d f* var_110
                        v20_1 = v1.d f* v3.d
                        v21_1 = v0.d f* v5.d
                        v22_1 = v1.d f* var_fc
                        int32_t x8_37 = x19_3 i+ *V2I1
                        var_d0 = v4.d f+ v19_1 + v20_1
                        float var_cc_7 = var_f4 + v21_1 + v22_1
                        v0.d = v0.d f* var_f0
                        v1.d = v1.d f* var_ec
                        var_120.q = var_d0.q
                        v27_1 = var_e4 + v0.d f+ v1.d
                        v23_1 = v9.d f* float.s(x8_37)
                        v24_1 = v10.d f* float.s(fp_2 + x9_20)
                        v2 = var_110 * v23_1
                        v5.d = v23_1 f* v5.d
                        v16_1 = v23_1 * var_f0
                        v3.d = v3.d f* v24_1
                        v6_1 = v24_1 * var_fc
                        v17_1 = v24_1 * var_ec
                        v20_1 = v2 + v20_1
                        v22_1 = v5.d f+ v22_1
                        v1.d = v16_1 f+ v1.d
                        v19_1 = v19_1 f+ v3.d
                        v21_1 = v21_1 + v6_1
                        v0.d = v0.d f+ v17_1
                        v2 = v2 f+ v3.d
                        v3.d = v5.d f+ v6_1
                        v5.d = v16_1 + v17_1
                        v6_1 = v4.d f+ v20_1
                        v1.d = var_e4 f+ v1.d
                        v17_1 = v4.d f+ v19_1
                        v0.d = var_e4 f+ v0.d
                        v2 = v4.d f+ v2
                        v3.d = var_f4 f+ v3.d
                        v4.d = var_e4 f+ v5.d
                        float var_c4_7 = v6_1
                        float var_c0_7 = var_f4 + v22_1
                        int32_t var_bc_7 = v1.d
                        float var_b8_7 = v17_1
                        float var_b4_7 = var_f4 + v21_1
                        int32_t var_b0_5 = v0.d
                        float var_ac_5 = v2
                        int32_t var_a8_5 = v3.d
                        int32_t var_a4_5 = v4.d
                        float var_118_2 = v27_1
                        XAsset* var_2f0_7 = var_258_1
                        int64_t var_2e8_7 = 0
                        result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_d0, &var_140, x24, 
                            zx.q(var_244_1) & 1, &var_120, &var_210, var_250, nullptr)
                        x8_34 = x19_3 i+ x25_3
                        x9_18 = fp_2 + x26_3
                        
                        if (x10_8 - x25_3 == x19_3)
                            if (x11_6 - x26_3 == fp_2)
                                break
                
                i_1 = &i_1[6]
            while (i_1 != var_238_1.q)
        
        int32_t x28_4 = var_240.d
        
        if ((var_2b4 == 8 || var_2b4 == 6) && x28_4 s>= 1 && x20_3 s>= 1)
            int32_t x21_1 = 0
            
            do
                v0.d = float.s(x21_1)
                int32_t x19_4 = 0
                v8.d = v9.d f* v0.d
                
                do
                    int32_t x9_23 = *(VZ + 8)
                    v1.d = var_110
                    v4.d = var_100
                    v5.d = var_fc
                    v0.d = float.s(x19_4)
                    var_210 = *VZ
                    var_208.d = x9_23
                    v3.d = var_104
                    v0.d = v10.d f* v0.d
                    v18_1 = v8.d f* v1.d
                    v19_1 = v0.d f* var_10c
                    v20_1 = v8.d f* v4.d
                    v21_1 = v0.d f* v5.d
                    v22_1 = v8.d f* var_f0
                    v0.d = v0.d f* var_ec
                    v27_1 = var_e4 + v22_1 f+ v0.d
                    v23_1 = float.s(*V2I1 + x21_1)
                    v24_1 = float.s(x19_4 + *(V2I1 + 4))
                    var_d0 = v3.d f+ v18_1 + v19_1
                    float var_cc_8 = var_f4 + v20_1 + v21_1
                    v23_1 = v9.d f* v23_1
                    v24_1 = v10.d f* v24_1
                    v1.d = v1.d f* v23_1
                    v4.d = v23_1 f* v4.d
                    v7_1 = v23_1 * var_f0
                    v2 = var_10c * v24_1
                    v5.d = v24_1 f* v5.d
                    v16_1 = v24_1 * var_ec
                    v19_1 = v1.d f+ v19_1
                    v21_1 = v4.d f+ v21_1
                    v0.d = v7_1 f+ v0.d
                    v18_1 = v18_1 + v2
                    v20_1 = v20_1 f+ v5.d
                    v22_1 = v22_1 + v16_1
                    v1.d = v1.d f+ v2
                    v2 = v4.d f+ v5.d
                    v4.d = v7_1 + v16_1
                    v5.d = v3.d f+ v19_1
                    v0.d = var_e4 f+ v0.d
                    v16_1 = v3.d f+ v18_1
                    v1.d = v3.d f+ v1.d
                    v3.d = var_e4 f+ v4.d
                    int32_t var_c4_8 = v5.d
                    float var_c0_8 = var_f4 + v21_1
                    int32_t var_bc_8 = v0.d
                    float var_b8_8 = v16_1
                    float var_b4_8 = var_f4 + v20_1
                    float var_b0_6 = var_e4 + v22_1
                    int32_t var_ac_6 = v1.d
                    float var_a8_6 = var_f4 + v2
                    int32_t var_a4_6 = v3.d
                    var_120.q = var_d0.q
                    float var_118_3 = v27_1
                    XAsset* var_2f0_8 = var_258_1
                    int64_t var_2e8_8 = 0
                    result, v0, v1, v3, v4, v5 = Draw3DQuadFull(&var_d0, &var_140, x24, 
                        zx.q(var_244_1) & 1, &var_120, &var_210, var_250, nullptr)
                    x19_4 += 1
                while (x20_3 != x19_4)
                
                x21_1 += 1
            while (x21_1 != x28_4)
return result
