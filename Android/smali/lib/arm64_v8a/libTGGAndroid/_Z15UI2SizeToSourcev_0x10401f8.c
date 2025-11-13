// 函数: _Z15UI2SizeToSourcev
// 地址: 0x10401f8
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
int128_t entry_v9
int64_t var_70 = entry_v9.q
int64_t v8
int64_t var_68 = v8
int64_t v0 = GameGetTimeSimulation()

if (*(gUI2Editor + 0x704c) s>= 1)
    int64_t x27_1 = 0
    int32_t x26_1 = 0
    v13.d = fconvert.s(0.5f)
    v14.d = fconvert.s(-0.5f)
    int64_t var_b0
    double var_a8
    int64_t x8_1
    
    do
        UI2* x0_2
        int128_t v0_1
        x0_2, v0_1 = UI2GetIndex(zx.q(*(gUI2Editor + (x27_1 << 2) + 0x604c)))
        uint64_t x8_4 = zx.q(*(x0_2 + 0x167c) - 1)
        uint32_t x8_11
        int64_t v0_9
        float v1_1
        float v3_1
        float v4_1
        
        if (x8_4.d u<= 7)
            switch (x8_4)
                case 0, 3, 4
                    XAsset* x0_3 = *(x0_2 + 0x1460)
                    
                    if (x0_3 != 0)
                        AssetCatalogPurgeAsset(x0_3)
                        int128_t v0_3 = UI2PropDynamic<float>::Eval(v0.d)
                        int64_t v0_5 = UI2PropDynamic<float>::Eval(v0.d)
                        int64_t v0_7 = UI2PropDynamic<float>::Eval(v0.d)
                        v0_9 = UI2PropDynamic<float>::Eval(v0.d)
                        XAsset* x21_1 = *(x0_2 + 0x1460)
                        v12 = v0_9
                        float*** x8_5 = *x21_1
                        
                        if (x8_5 == 0)
                            if (*(x21_1 + 8) == 0x15)
                                XString::GetString()
                                XTrace("Unpreloaded sound %s")
                            
                            AssetCatalogLoadAsset(x21_1, false, true)
                            x8_5 = *x21_1
                        
                        v0_9.d = v0_3.d f+ v0_7.d
                        v0_9.d = v0_3.d f+ v0_9.d
                        float* x8_8 = **x8_5
                        v0_9.d = v0_9.d f* v13.d
                        v1_1 = (v0_5.d f+ v0_5.d f+ v12.d) f* v13.d
                        v4_1 = x8_8[3] * x8_8[2]
                        float v2_1 = v4_1 * float.s(*x8_8) f* v13.d
                        v3_1 = v4_1 * float.s(x8_8[1]) f* v13.d
                        v4_1 = v0_9.d f- v2_1
                        float v5_1 = v1_1 - v3_1
                        v0_9.d = v0_9.d f+ v2_1
                        v0_9.d = v0_9.d f- v4_1
                        
                        if (v4_1 < 0f)
                            v2_1 = v14.d
                        else
                            v2_1 = v13.d
                        
                        v1_1 = v1_1 + v3_1 - v5_1
                        
                        if (v5_1 < 0f)
                            v3_1 = v14.d
                        else
                            v3_1 = v13.d
                        
                        uint32_t temp0_1 = vcvts_s32_f32(v4_1 + v2_1)
                        v2_1 = v5_1 + v3_1
                        
                        if (v0_9.d f< 0f)
                            v3_1 = v14.d
                        else
                            v3_1 = v13.d
                        
                        v4_1 = float.s(temp0_1)
                        uint32_t temp0_2 = vcvts_s32_f32(v2_1)
                        v0_9.d = v0_9.d f+ v3_1
                        
                        if (v1_1 < 0f)
                            v2_1 = v14.d
                        else
                            v2_1 = v13.d
                        
                        v3_1 = float.s(temp0_2)
                        x8_11 = vcvts_s32_f32(v0_9.d)
                        v0_9.d = v1_1 + v2_1
                    label_10405d0:
                        v0_9.d = float.s(sx.d(vcvts_s32_f32(v0_9.d)))
                        v0_9.d = v3_1 f+ v0_9.d
                        var_b0.d = v4_1
                        var_b0:4.d = v3_1
                        var_a8.d = v4_1 + float.s(x8_11)
                        var_a8:4.d = v0_9.d
                        goto label_10405ec
                case 1
                    XAsset* x0_11 = *(x0_2 + 0x1520)
                    
                    if (x0_11 == 0)
                        uint64_t x10_2 = zx.q(*(x0_2 + 0x1970))
                        
                        if (x10_2.d s>= 1)
                            uint64_t i = zx.q(*(x0_2 + 0x1870))
                            int64_t x8_16 = *gUI2
                            v0_1.q = *(x0_2 + 0x14fc)
                            
                            if (*(x8_16 + i * 0x19a8 + 0x1658) != 0
                                    && *(x8_16 + mulu.dp.d(i.d, 0x19a8) + 0x1658) != 0)
                                i = x10_2 - 1
                                void* x10_3 = x0_2 + 0x1874
                                
                                while (i != 0)
                                    uint64_t x11_5 = zx.q(*x10_3)
                                    x10_3 += 4
                                    i -= 1
                                    
                                    if (*(x8_16 + x11_5 * 0x19a8 + 0x1658) == 0)
                                        break
                            
                            int128_t v9 = vcvt_f32_s32(v0_1)
                            int64_t var_d0_2 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t v0_39 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t var_f0_2 = UI2PropDynamic<float>::Eval(v0.d)
                            int128_t v0_43
                            int128_t v1_14
                            int128_t v2_10
                            int128_t v3_5
                            v0_43, v1_14, v2_10, v3_5 = UI2PropDynamic<float>::Eval(v0.d)
                            v3_5:4.d = v0_39.o.d
                            v2_10:4.d = v0_43.d
                            v0_43.q = *V21
                            v1_14.q = *(x0_2 + 0x150c)
                            int128_t v2_12 = vsub_f32(vadd_f32(v3_5, v2_10), v3_5)
                            int128_t v0_44 = vsub_f32(v9, v0_43)
                            entry_v9 = vadd_f32(vmul_f32(v2_12, v9, 0), vmul_f32(v0_44, v1_14, 0))
                            int64_t var_d0_3 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t v0_49 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t var_f0_3 = UI2PropDynamic<float>::Eval(v0.d)
                            int32_t v0_53
                            int128_t v1_15
                            int128_t v2_14
                            int128_t v4_4
                            int128_t v5_4
                            v0_53, v1_15, v2_14, v4_4, v5_4 = UI2PropDynamic<float>::Eval(v0.d)
                            v4_4.d = 0x3f000000
                            v4_4:4.d = 0x3f000000
                            v5_4.d = 0xbf000000
                            v5_4:4.d = 0xbf000000
                            v2_14:4.d = v0_49.o.d
                            v1_15:4.d = v0_53
                            int128_t v1_17 = vadd_f32(v2_14, vadd_f32(v2_14, v1_15))
                            int128_t v0_54 = vmul_f32(entry_v9, v4_4, 0)
                            int128_t v1_18 = vmul_f32(v1_17, v4_4, 0)
                            int128_t v2_15 = vsub_f32(v1_18, v0_54)
                            int128_t v0_55 = vadd_f32(v0_54, v1_18)
                            int128_t v1_19 = vcltz_f32(v2_15, 0)
                            int128_t v0_56 = vsub_f32(v0_55, v2_15)
                            int128_t v1_20 = vbsl_s8(v1_19, v5_4, v4_4)
                            uint64_t v3_6 = vcltz_f32(v0_56, 0)
                            int128_t v1_21 = vadd_f32(v2_15, v1_20)
                            v2_15.q = v3_6
                            int128_t v0_57 = vadd_f32(v0_56, vbsl_s8(v2_15, v5_4, v4_4))
                            int128_t v1_22 = vcvt_s32_f32(v1_21)
                            int128_t v0_58 = vcvt_s32_f32(v0_57)
                            int128_t v1_23 = vcvt_f32_s32(v1_22)
                            double v0_60 = vadd_f32(v1_23, vcvt_f32_s32(v0_58))
                            var_b0 = v1_23.q
                            var_a8 = v0_60
                            *(x0_2 + 0x1370) = 0
                            *(x0_2 + 0x1694) = 0
                            AttribMap* x0_34 = GetEdittedMap(x0_2, 0x76)
                            AttribMapSetDef(*gUI2AttribTable, x0_34, 0x76, &var_b0)
                            AttribMapGetDef(*gUI2AttribTable, x0_34, *macro_ptr_RectF, 0x76)
                    else
                        int128_t v0_10
                        int128_t v1_2
                        int128_t v2_2
                        int128_t v3_2
                        int128_t v4_2
                        v0_10, v1_2, v2_2, v3_2, v4_2 = UI2SubBoundary(x0_11)
                        v4_2.q = *(x0_2 + 0x14fc)
                        v2_2:4.d = v3_2.d
                        v0_10:4.d = v1_2.d
                        v3_2.q = *V21
                        v1_2.q = *(x0_2 + 0x150c)
                        int128_t v0_11 = vsub_f32(v2_2, v0_10)
                        int128_t v2_3 = vcvt_f32_s32(v4_2)
                        entry_v9 = vadd_f32(vmul_f32(v0_11, v2_3, 0), 
                            vmul_f32(vsub_f32(v2_3, v3_2), v1_2, 0))
                        int64_t var_d0_1 = UI2PropDynamic<float>::Eval(v0.d)
                        int64_t v0_16 = UI2PropDynamic<float>::Eval(v0.d)
                        int64_t var_f0_1 = UI2PropDynamic<float>::Eval(v0.d)
                        int32_t v0_20
                        int128_t v1_4
                        int128_t v2_5
                        int128_t v4_3
                        int128_t v5_2
                        v0_20, v1_4, v2_5, v4_3, v5_2 = UI2PropDynamic<float>::Eval(v0.d)
                        v4_3.d = 0x3f000000
                        v4_3:4.d = 0x3f000000
                        v5_2.d = 0xbf000000
                        v5_2:4.d = 0xbf000000
                        v2_5:4.d = v0_16.o.d
                        v1_4:4.d = v0_20
                        int128_t v1_6 = vadd_f32(v2_5, vadd_f32(v2_5, v1_4))
                        int128_t v0_21 = vmul_f32(entry_v9, v4_3, 0)
                        int128_t v1_7 = vmul_f32(v1_6, v4_3, 0)
                        int128_t v2_6 = vsub_f32(v1_7, v0_21)
                        int128_t v0_22 = vadd_f32(v0_21, v1_7)
                        int128_t v1_8 = vcltz_f32(v2_6, 0)
                        int128_t v0_23 = vsub_f32(v0_22, v2_6)
                        int128_t v1_9 = vbsl_s8(v1_8, v5_2, v4_3)
                        uint64_t v3_3 = vcltz_f32(v0_23, 0)
                        int128_t v1_10 = vadd_f32(v2_6, v1_9)
                        v2_6.q = v3_3
                        int128_t v0_24 = vadd_f32(v0_23, vbsl_s8(v2_6, v5_2, v4_3))
                        int128_t v1_11 = vcvt_s32_f32(v1_10)
                        int128_t v0_25 = vcvt_s32_f32(v0_24)
                        int128_t v1_12 = vcvt_f32_s32(v1_11)
                        double v0_27 = vadd_f32(v1_12, vcvt_f32_s32(v0_25))
                        var_b0 = v1_12.q
                        var_a8 = v0_27
                    label_10405ec:
                        *(x0_2 + 0x1370) = 0
                        *(x0_2 + 0x1694) = 0
                        AttribMap* x0_22 = GetEdittedMap(x0_2, 0x76)
                        AttribMapSetDef(*gUI2AttribTable, x0_22, 0x76, &var_b0)
                        AttribMapGetDef(*gUI2AttribTable, x0_22, *macro_ptr_RectF, 0x76)
                case 5
                    x26_1 = 1
                case 7
                    int128_t v0_28
                    int64_t v1_13
                    int64_t v2_8
                    int64_t v3_4
                    v0_28, v1_13, v2_8, v3_4 = FlanimGetExtents(*(x0_2 + 0x14d0))
                    int64_t v0_30 = UI2PropDynamic<float>::Eval(v0.d)
                    int64_t v0_32 = UI2PropDynamic<float>::Eval(v0.d)
                    int64_t v0_34 = UI2PropDynamic<float>::Eval(v0.d)
                    v0_9.d = v0_32.d f+ UI2PropDynamic<float>::Eval(v0.d).d
                    v13.d = fconvert.s(0.5f)
                    v0_9.d = v0_32.d f+ v0_9.d
                    float v2_9 = (v2_8.d f- v0_28.d) f* v13.d
                    v1_1 = (v0_30.d f+ v0_30.d f+ v0_34.d) f* v13.d
                    v3_1 = (v3_4.d f- v1_13.d) f* v13.d
                    v0_9.d = v0_9.d f* v13.d
                    v4_1 = v1_1 - v2_9
                    v14.d = fconvert.s(-0.5f)
                    float v5_3 = v0_9.d f- v3_1
                    v0_9.d = v3_1 f+ v0_9.d
                    v1_1 = v2_9 + v1_1 - v4_1
                    
                    if (v4_1 < 0f)
                        v2_9 = v14.d
                    else
                        v2_9 = v13.d
                    
                    v0_9.d = v0_9.d f- v5_3
                    
                    if (v5_3 < 0f)
                        v3_1 = v14.d
                    else
                        v3_1 = v13.d
                    
                    uint32_t temp0_4 = vcvts_s32_f32(v4_1 + v2_9)
                    v2_9 = v5_3 + v3_1
                    
                    if (v1_1 < 0f)
                        v3_1 = v14.d
                    else
                        v3_1 = v13.d
                    
                    v4_1 = float.s(temp0_4)
                    uint32_t temp0_5 = vcvts_s32_f32(v2_9)
                    v1_1 = v1_1 + v3_1
                    
                    if (v0_9.d f< 0f)
                        v2_9 = v14.d
                    else
                        v2_9 = v13.d
                    
                    v3_1 = float.s(temp0_5)
                    x8_11 = vcvts_s32_f32(v1_1)
                    v0_9.d = v0_9.d f+ v2_9
                    goto label_10405d0
        x8_1 = sx.q(*(gUI2Editor + 0x704c))
        x27_1 += 1
    while (x27_1 s< x8_1)
    
    if ((((x8_1.d s< 1 ? 1 : 0) | not.d(x26_1)) & 1) == 0)
        int64_t i_1 = 0
        
        do
            UI2* x0_42 = UI2GetIndex(zx.q(*(gUI2Editor + (i_1 << 2) + 0x604c)))
            
            if (*(x0_42 + 0x167c) == 6)
                uint64_t x10_4 = zx.q(*(x0_42 + 0x1970))
                
                if (x10_4.d s>= 1)
                    uint64_t j = zx.q(*(x0_42 + 0x1870))
                    int64_t x8_24 = *gUI2
                    
                    if (*(x8_24 + j * 0x19a8 + 0x1658) != 0
                            && *(x8_24 + mulu.dp.d(j.d, 0x19a8) + 0x1658) != 0)
                        j = x10_4 - 1
                        void* x10_5 = x0_42 + 0x1874
                        
                        while (j != 0)
                            uint64_t x11_10 = zx.q(*x10_5)
                            x10_5 += 4
                            j -= 1
                            
                            if (*(x8_24 + x11_10 * 0x19a8 + 0x1658) == 0)
                                break
                    
                    entry_v9 = UI2PropDynamic<float>::Eval(v0.d)
                    v10 = UI2PropDynamic<float>::Eval(v0.d)
                    float v0_66 = UI2PropDynamic<float>::Eval(v0.d)
                    float v0_68 = v10.d f+ UI2PropDynamic<float>::Eval(v0.d)
                    var_b0.d = entry_v9.d
                    var_b0:4.d = v10.d
                    var_a8.d = entry_v9.d f+ v0_66
                    var_a8:4.d = v0_68
                    int32_t x20_5 = *(x0_42 + 0x1970)
                    
                    if (x20_5 u>= 2)
                        uint64_t x26_3 = 1
                        int32_t x8_28
                        
                        do
                            *gUI2 + zx.q(*(x0_42 + (x26_3 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8
                            int128_t v0_70 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t v0_72 = UI2PropDynamic<float>::Eval(v0.d)
                            float v0_74 = UI2PropDynamic<float>::Eval(v0.d)
                            float v0_76 = UI2PropDynamic<float>::Eval(v0.d)
                            float v1_25 = var_b0.d
                            int32_t v3_7 = var_b0:4.d
                            float v2_17 = v0_70.d f+ v0_74
                            v0_76 = v0_72.d f+ v0_76
                            x8_28 = x26_3.d + 1
                            
                            if (v1_25 f< v0_70.d)
                                entry_v9.d = v1_25
                            else
                                entry_v9.d = v0_70.d
                            
                            float v4_5 = var_a8.d
                            v1_25 = var_a8:4.d
                            x26_3 = zx.q(x8_28)
                            
                            if (v4_5 > v2_17)
                                v2_17 = v4_5
                            
                            if (v3_7 f< v0_72.d)
                                v10.d = v3_7
                            else
                                v10.d = v0_72.d
                            
                            if (v1_25 > v0_76)
                                v0_76 = v1_25
                            
                            var_b0.d = entry_v9.d
                            var_b0:4.d = v10.d
                            var_a8.d = v2_17
                            var_a8:4.d = v0_76
                        while (x20_5 != x8_28)
                    
                    int64_t v0_78 = UI2PropDynamic<float>::Eval(v0.d)
                    int64_t v0_80 = UI2PropDynamic<float>::Eval(v0.d)
                    UI2PropDynamic<float>::Eval(v0.d)
                    UI2PropDynamic<float>::Eval(v0.d)
                    int32_t x28_2 = *(x0_42 + 0x1970)
                    
                    if (x28_2 != 0)
                        uint64_t x26_4 = 0
                        v13.d = entry_v9.d f- v0_78.d
                        v12.d = v10.d f- v0_80.d
                        bool cond:9_1
                        
                        do
                            UI2* x20_6 =
                                *gUI2 + zx.q(*(x0_42 + (x26_4 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8
                            int128_t v0_84 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t v0_86 = UI2PropDynamic<float>::Eval(v0.d)
                            int64_t v0_88 = UI2PropDynamic<float>::Eval(v0.d)
                            float v0_90 = v0_86.d f+ UI2PropDynamic<float>::Eval(v0.d) f- v12.d
                            float var_c0 = v0_84.d f- v13.d
                            float var_bc_1 = v0_86.d f- v12.d
                            float var_b8_1 = v0_84.d f+ v0_88.d f- v13.d
                            float var_b4_1 = v0_90
                            *(x20_6 + 0x1370) = 0
                            *(x20_6 + 0x1694) = 0
                            AttribMap* x0_60 = GetEdittedMap(x20_6, 0x76)
                            AttribMapSetDef(*gUI2AttribTable, x0_60, 0x76, &var_c0)
                            AttribMapGetDef(*gUI2AttribTable, x0_60, *macro_ptr_RectF, 0x76)
                            cond:9_1 = x28_2 != x26_4.d + 1
                            x26_4 = zx.q(x26_4.d + 1)
                        while (cond:9_1)
                    
                    *(x0_42 + 0x1370) = 0
                    *(x0_42 + 0x1694) = 0
                    AttribMap* x0_38 = GetEdittedMap(x0_42, 0x76)
                    AttribMapSetDef(*gUI2AttribTable, x0_38, 0x76, &var_b0)
                    AttribMapGetDef(*gUI2AttribTable, x0_38, *macro_ptr_RectF, 0x76)
            
            i_1 += 1
        while (i_1 s< sx.q(*(gUI2Editor + 0x704c)))

entry_v9.q = var_70
return UI2CreateUndoCheckpoint(true)
