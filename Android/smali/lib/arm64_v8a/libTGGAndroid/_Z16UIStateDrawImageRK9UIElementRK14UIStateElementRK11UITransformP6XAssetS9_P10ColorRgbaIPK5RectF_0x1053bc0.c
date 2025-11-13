// 函数: _Z16UIStateDrawImageRK9UIElementRK14UIStateElementRK11UITransformP6XAssetS9_P10ColorRgbaIPK5RectF
// 地址: 0x1053bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v9
int64_t var_50 = entry_v9.q
int128_t entry_v8
int64_t var_48 = entry_v8.q
XAsset* x20 = arg5
UIElement const& x21 = arg1

if (arg5 == 0)
    if (*(arg2 + 0x48) s<= *arg2)
        x20 = nullptr
        
        if (arg4 != 0)
            goto label_1053bf8
        
        goto label_1053c54
    
    x20 = *(arg2 + 0x50)
    
    if (arg4 != 0)
        goto label_1053bf8
    
    goto label_1053c54

XAsset* x19

if (arg4 == 0)
label_1053c54:
    
    if (*(arg2 + 0xb0) s<= *arg2)
        if (x20 == 0)
            x19 = *(x21 + 0x88)
        else
            x19 = nullptr
        
        if ((x20 | x19) != 0)
            goto label_1053c04
    else
        if (x20 == 0)
            x19 = *(arg2 + 0xb8)
        else
            x19 = nullptr
        
        if ((x20 | x19) != 0)
            goto label_1053c04
else
label_1053bf8:
    
    x19 = x20 == 0 ? arg4 : nullptr
    
    if ((x20 | x19) != 0)
    label_1053c04:
        int128_t v0
        int128_t v1
        
        if (arg6 != 0)
            arg1, v0, v1 = SpriteColorNormal(arg6)
        else if (*(arg2 + 0xa4) s<= *arg2)
            arg1, v0, v1 = SpriteColorNormal(x21 + 0xa8)
        else
            arg1 = *(arg2 + 0xa8)
        
        UIElement const& var_38 = arg1
        v0.d = *(arg3 + 8)
        v1.d = fconvert.s(0.5f)
        v0.d = v0.d f* float.s((arg1 u>> 0x18).d & 0xff)
        
        if (v0.d f< 0f)
            v1.d = fconvert.s(-0.5f)
        else
            v1.d = v1.d
        
        v0.d = v0.d f+ v1.d
        char temp0_1 = vcvts_s32_f32(v0.d)
        var_38:3.b = temp0_1
        
        if (zx.d(temp0_1) != 0)
            v1 = *(x21 + 0x20)
            int128_t var_60 = *(x21 + 0x10)
            v0 = *(x21 + 0x30)
            float128 var_a0 = v1
            int128_t var_90_1 = v0
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int64_t v6_1
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 =
                UIRectAligned(&var_60, &var_a0, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
            v4_1.d = *(arg3 + 0xc)
            v5_1.d = 0f
            v2_1:4.d = v3_1.d
            v3_1.d = vmax_f32(v4_1.d, v5_1.d)
            v4_1.q = *(arg3 + 0x10)
            v5_1.q = *(arg3 + 0x18)
            v2_1.d = v2_1.d f* v3_1.d
            v2_1:4.d = v2_1:4.d f* v3_1.d
            v0_1:4.d = v1_1.d
            v1_1.d = fconvert.s(1f)
            v1_1:4.d = fconvert.s(1f)
            uint64_t x8_9 = *gAppInterface
            int128_t v1_2 = vadd_f32(v4_1, v1_1)
            v4_1.q = *arg3
            v0_1.d = v0_1.d f* v3_1.d
            v0_1:4.d = v0_1:4.d f* v3_1.d
            uint32_t x9_4 = zx.d(*(x8_9 + 0x3c))
            int128_t v0_2 = vadd_f32(v4_1, v0_1)
            int128_t v2_2 = vadd_f32(v4_1, v2_1)
            int128_t v0_3 = vsub_f32(v0_2, v5_1)
            int128_t v2_3 = vsub_f32(v2_2, v5_1)
            int128_t v0_4 = vmul_f32(v1_2, v0_3, 0)
            int128_t v1_3 = vmul_f32(v1_2, v2_3, 0)
            int128_t v4_2 = vadd_f32(v5_1, v0_4)
            float128 v5_2 = vadd_f32(v5_1, v1_3)
            
            if (x9_4 != 0 || zx.d(*(x8_9 + 0x4d)) != 0)
            label_1053d94:
                int32_t x8_11 = *arg2
                v0_4.q = *(arg2 + 0x68)
                int32_t x9_6 = *(arg2 + 0x64) s> x8_11 ? 1 : 0
                int128_t v2_5 = vadd_f32(v4_2, v5_2)
                v1_3.q = *V21
                int128_t v4_3 = vsub_f32(v5_2, v4_2)
                v5_2.d = x9_6
                v5_2:4.d = x9_6
                v5_2.d <<= 0x1f
                v5_2:4.d <<= 0x1f
                v5_2.d s>>= 0x1f
                v5_2:4.d s>>= 0x1f
                v3_1.d = 0x3f000000
                v3_1:4.d = 0x3f000000
                int128_t v0_6 = vmul_f32(vbsl_s8(v5_2, v0_4, v1_3), v4_3, 0)
                int128_t v2_6 = vmul_f32(v2_5, v3_1, 0)
                float128 v3_2 = vmul_f32(v0_6, v3_1, 0)
                int128_t v0_7 = vsub_f32(v2_6, v3_2)
                int128_t v2_7 = vadd_f32(v2_6, v3_2)
                int64_t var_70 = v0_7.q
                int64_t var_68_1 = v2_7.q
                
                if (zx.d(*(x21 + 0x90)) == 0)
                    RectF const* x9_9
                    
                    if (arg7 == 0)
                        x9_9 = x21 + 0x98
                    else
                        x9_9 = arg7
                    
                    v3_2 = *x9_9
                    int128_t v2_9 = vsub_f32(v2_7, v0_7)
                    v5_2.d = 0xbf000000
                    v5_2:4.d = 0xbf000000
                    v5_2:8.d = 0xbf000000
                    v5_2:0xc.d = 0xbf000000
                    var_a0 = v3_2
                    v3_2.q = var_a0.q
                    v4_3.q = var_a0:8.q
                    int128_t v6_2 = vmul_f32(v2_9, v3_2, 0)
                    int128_t v2_10 = vmul_f32(v2_9, v4_3, 0)
                    entry_v8 = vadd_f32(v0_7, v6_2)
                    entry_v9 = vadd_f32(v0_7, v2_10)
                    var_70 = entry_v8.q
                    int64_t var_68_2 = entry_v9.q
                    int32_t x9_10 = *(arg2 + 0x58)
                    v3_2:8.q = v4_3.q
                    v2_10.q = *(arg2 + 0x5c)
                    float128 v0_8 = vaddq_f32(v3_2, v5_2)
                    int32_t x8_13 = x9_10 s> x8_11 ? 1 : 0
                    v3_2.d = x8_13
                    v3_2:4.d = x8_13
                    v3_2.d <<= 0x1f
                    v3_2:4.d <<= 0x1f
                    v3_2.d s>>= 0x1f
                    v3_2:4.d s>>= 0x1f
                    float128 v1_4
                    v1_4:8.q = vbsl_s8(v3_2, v2_10, v1_3).q
                    float128 v0_9 = vmulq_f32(v0_8, v1_4, 0)
                    v1_4.d = 0x3f000000
                    v1_4:4.d = 0x3f000000
                    v1_4:8.d = 0x3f000000
                    v1_4:0xc.d = 0x3f000000
                    var_a0 = vaddq_f32(v0_9, v1_4)
                    uint64_t x2_2 = zx.q(*(x21 + 0x94))
                    RectF* x1_4
                    
                    if (x2_2.d == 0)
                        x1_4 = &var_70
                    else
                        int64_t*** x8_14 = *x19
                        float128 v0_10
                        
                        if (x8_14 == 0)
                            if (*(x19 + 8) == 0x15)
                                XString::GetString()
                                XTrace("Unpreloaded sound %s")
                            
                            v0_10, v1_4, v2_10 = AssetCatalogLoadAsset(x19, false, true)
                            x8_14 = *x19
                            x2_2 = zx.q(*(x21 + 0x94))
                        
                        int64_t* x8_17 = **x8_14
                        v0_10.q = *x8_17
                        v2_10.d = x8_17[1].d
                        v1_4.d = *(x8_17 + 0xc)
                        v1_4.d = v1_4.d f* v2_10.d
                        int128_t v0_11
                        v0_11.d = vcvt_f32_u32(v0_10).d f* v1_4.d
                        v0_11:4.d = v0_11:4.d f* v1_4.d
                        double v1_6 = vdiv_f32(vsub_f32(entry_v9, entry_v8), v0_11)
                        v2_10.d = v1_6:4.d
                        
                        if (v1_6.d f< v2_10.d)
                            v1_6.d = v1_6.d
                        else
                            v1_6.d = v2_10.d
                        
                        v0_11.d = v0_11.d f* v1_6.d
                        v0_11:4.d = v0_11:4.d f* v1_6.d
                        int64_t var_a8 = v0_11.q
                        int32_t v0_12
                        int32_t v1_7
                        int32_t v2_11
                        int32_t v3_3
                        v0_12, v1_7, v2_11, v3_3 = RectAlignedWithinRect(&var_70, &var_a8, x2_2)
                        int32_t var_b8
                        x1_4 = &var_b8
                        var_b8 = v0_12
                        int32_t var_b4_1 = v1_7
                        int32_t var_b0_1 = v2_11
                        int32_t var_ac_1 = v3_3
                    
                    DrawImageParams(x19, x1_4, &var_a0, &var_38, x20)
                else
                    int128_t v2_8 = vsub_f32(v2_7, v0_7)
                    v4_3.d = v0_7:4.d
                    v1_3 = *(M3I + 0x10)
                    int32_t var_80_1 = *(M3I + 0x20)
                    var_a0 = *M3I
                    int128_t var_90_2 = v1_3
                    v3_2.d = *(arg3 + 0xc)
                    v1_3.q = var_a0.q
                    v5_2.q = var_a0:0xc.q
                    v0_7.d = v0_7.d f/ v3_2.d
                    v1_3.d = v1_3.d f* v3_2.d
                    v1_3:4.d = v1_3:4.d f* v3_2.d
                    var_a0.q = v1_3.q
                    v1_3.q = var_90_2:8.q
                    v5_2.d = v5_2.d f* v3_2.d
                    v5_2:4.d = v5_2:4.d f* v3_2.d
                    var_a0:0xc.q = v5_2.q
                    v5_2.d = v2_8:4.d
                    v6_1.d = v1_3.d f* v3_2.d
                    v6_1:4.d = v1_3:4.d f* v3_2.d
                    var_90_2:8.q = v6_1
                    v1_3.d = v4_3.d f/ v3_2.d
                    v2_8.d = v2_8.d f/ v3_2.d
                    v3_2.d = v5_2.d f/ v3_2.d
                    int64_t var_f0_1 = 0
                    DrawParented9SliceImage(x19, &var_a0, M3I, &var_38, 0, 0, 1, RECT1, v0_7, v1_3, 
                        v2_8, v3_2)
            else
                float128 var_e0_1 = v5_2
                int128_t var_d0_1 = v4_2
                int32_t v2_4
                arg1, v0_4, v1_3, v2_4, v3_1, v4_2, v5_2, v6_1 = RectScreen()
                v5_2 = var_e0_1
                v4_2 = var_d0_1
                
                if (not(v5_2.d f< v0_4.d) && not(v4_2.d f> v2_4))
                    v0_4.d = v5_2:4.d
                    
                    if (not(v0_4.d f< v1_3.d))
                        v0_4.d = v4_2:4.d
                        
                        if (not(v0_4.d f> v3_1.d))
                            goto label_1053d94
entry_v9.q = var_50
entry_v8.q = var_48
