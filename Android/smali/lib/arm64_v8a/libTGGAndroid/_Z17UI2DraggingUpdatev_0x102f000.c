// 函数: _Z17UI2DraggingUpdatev
// 地址: 0x102f000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_a0 = entry_v15.q
int128_t entry_v14
int64_t var_98 = entry_v14.q
int128_t entry_v13
int64_t var_90 = entry_v13.q
int128_t entry_v12
int64_t var_88 = entry_v12.q
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q

if (zx.d(*(gUI2Editor + 0x88068)) != 0)
    if ((InputIsButtonDown(0) & 1) == 0)
        if (*(gUI2Editor + 0x8806c) != 1 && zx.d(*(gUI2Editor + 0x88088)) != 0)
            UI2CreateUndoCheckpoint(true)
        
        XTrace("dragginf false")
        *(gUI2Editor + 0x88068) = 0
    else
        if (zx.d(*(gUI2Editor + 0x88088)) != 0)
            goto label_102f0e0
        
        double var_b0
        int64_t x0
        int128_t v0_1
        int128_t v1_1
        x0, v0_1, v1_1 = GetCursorPosition(&var_b0)
        v0_1.q = var_b0
        v1_1.q = *(gUI2Editor + 0x88070)
        int128_t v0_2 = vsub_f32(v1_1, v0_1)
        double v0_3 = vmul_f32(v0_2, v0_2, 0)
        v0_3.d = v0_3.d f+ v0_3:4.d
        v1_1.d = float.s(0x42480000)
        
        if (not(v0_3.d f< v1_1.d))
            *(gUI2Editor + 0x88088) = 1
        label_102f0e0:
            int32_t x0_3
            int128_t v1_2
            int128_t v2_1
            
            if ((zx.d(*(gUI2Editor + 0x7055)) | zx.d(*(gUI2Editor + 0x7054))
                    | zx.d(*(gUI2Editor + 0x7056))) != 0 && *(gUI2Editor + 0x88084) != 0xffffffff)
                x0_3, v1_2, v2_1 = AppIsKeyDown(0x20)
            
            int128_t v4_1
            int128_t var_130
            int128_t var_120
            int128_t var_110
            int128_t var_e0
            int128_t var_d0
            int128_t v0_21
            
            if ((zx.d(*(gUI2Editor + 0x7055)) | zx.d(*(gUI2Editor + 0x7054))
                    | zx.d(*(gUI2Editor + 0x7056))) != 0 && *(gUI2Editor + 0x88084) != 0xffffffff
                    && (x0_3 & 1) == 0)
                v1_2.q = *(gUI2Editor + 0x8808c)
                v2_1.q = *(gUI2Editor + 0x88094)
                
                if (zx.d(*(gUI2Editor + 0x7056)) != 0)
                    var_e0 = v2_1
                    var_d0 = v1_2
                    int32_t x0_5
                    x0_5, v1_2, v2_1 = AppIsKeyDown(0)
                    v2_1 = var_e0
                    v1_2 = var_d0
                    
                    if ((x0_5 & 1) != 0)
                        v1_2.q = *(gUI2Editor + 0x8809c)
                        v2_1.q = *(gUI2Editor + 0x880a4)
                
                uint64_t x8_12 = zx.q(*(gUI2Editor + 0x88084))
                
                if (x8_12.d u> 7)
                    goto label_102f54c
                
                entry_v8.q = 0x3f800000bf800000
                int128_t v0_8
                v0_8:4.d = v1_2:4.d
                uint64_t* const x8_13
                
                switch (x8_12)
                    case 0
                        x8_13 = V21
                    label_102f39c:
                        v0_8.q = *x8_13
                        entry_v8 = vneg_f32(v0_8)
                        v0_8 = v2_1
                    case 1
                        x8_13 = V2X
                        goto label_102f39c
                    case 3
                        x8_13 = V2Y
                        goto label_102f39c
                    case 4
                        entry_v8.q = *V2Y
                        v0_8 = v1_2
                    case 5
                        entry_v8.q = -0x407fffffc0800000
                        v0_8:4.d = v2_1:4.d
                    case 6
                        entry_v8.q = *V2X
                        v0_8 = v1_2
                    case 7
                        entry_v8.q = *V21
                        v0_8 = v1_2
                
                int32_t x0_8
                int128_t v0_9
                int128_t v1_4
                x0_8, v0_9, v1_4 = AppIsKeyDown(0)
                int32_t x8_18
                
                if ((x0_8 & 1) != 0)
                    x8_18 = -1
                else
                    x8_18 = 0
                
                entry_v9.d = x8_18
                entry_v9:4.d = x8_18
                v1_4.d = 0x3f000000
                v1_4:4.d = 0x3f000000
                var_120 = vbsl_s8(entry_v9, vmul_f32(vadd_f32(v1_2, v2_1), v1_4, 0), v0_8)
                GetCursorPosition(&var_b0)
                int128_t v0_13
                v0_13.q = var_b0
                var_110 = v0_13
                int32_t x0_10
                int128_t v0_14
                int128_t v1_5
                int128_t v2_3
                int128_t v3_2
                int128_t v4_2
                int128_t v5_2
                x0_10, v0_14, v1_5, v2_3, v3_2, v4_2, v5_2 = AppIsKeyDown(0)
                int32_t x8_19
                
                if ((x0_10 & 1) != 0)
                    x8_19 = *(gUI2Editor + 0x88084)
                
                int128_t v0_17
                
                if ((x0_10 & 1) == 0 || x8_19 u> 7 || (1 << x8_19 & 0xa5) == 0)
                    v2_3.q = *(gUI2Editor + 0x88070)
                    v3_2.d = *(gUI2Editor + 0x603c)
                    v1_5.q = *(gUI2Editor + 0x6040)
                    int128_t v0_19 = vbsl_s8(entry_v9, vadd_f32(entry_v8, entry_v8), entry_v8)
                    int128_t v4_3
                    v4_3.d = vsub_f32(v1_2, v1_5).d f* v3_2.d
                    v4_3:4.d = v4_3:4.d f* v3_2.d
                    int128_t v1_6
                    v1_6.d = vsub_f32(v2_1, v1_5).d f* v3_2.d
                    v1_6:4.d = v1_6:4.d f* v3_2.d
                    v3_2.q = *V21
                    v0_17 = vadd_f32(v3_2, 
                        vmul_f32(v0_19, vdiv_f32(vsub_f32(var_110, v2_3), vsub_f32(v1_6, v4_3)), 0))
                else
                    v1_5.d = *(gUI2Editor + 0x603c)
                    v2_3.q = *(gUI2Editor + 0x88070)
                    v0_14.q = *(gUI2Editor + 0x6040)
                    int128_t v0_15
                    v0_15.d = vsub_f32(var_120, v0_14).d f* v1_5.d
                    v0_15:4.d = v0_15:4.d f* v1_5.d
                    int128_t v2_4 = vsub_f32(v2_3, v0_15)
                    v1_5.q = *V21
                    int128_t v0_16 = vsub_f32(var_110, v0_15)
                    v0_17 = vmul_f32(v0_16, v0_16, 0)
                    double v2_5 = vmul_f32(v2_4, v2_4, 0)
                    v0_17.d = v0_17.d f+ v0_17:4.d
                    v2_5.d = v2_5.d f+ v2_5:4.d
                    v0_17.d = sqrt(v0_17.d)
                    v2_5.d = sqrt(v2_5.d)
                    v0_17.d = v0_17.d f/ v2_5.d
                    v0_17.d = v1_5.d f* v0_17.d
                    v0_17:4.d = v1_5:4.d f* v0_17.d
                
                var_130 = v0_17
                x0, v0_21, v4_1 = GameGetTimeSimulation()
                v4_1 = var_110
                int32_t x8_21 = *(gUI2Editor + 0x8806c)
                entry_v9.d = v4_1:4.d
                
                if (x8_21 == 0)
                    goto label_102f55c
                
                if (x8_21 == 2)
                    goto label_102f54c
            else
                GetCursorPosition(&var_b0)
                int128_t v0_4
                v0_4.q = var_b0
                var_110 = v0_4
                int128_t v0_5
                int128_t v2_2
                int128_t v5_1
                x0, v0_5, v2_2, v4_1, v5_1 = AppIsKeyDown(0)
                float v1_3
                
                if ((x0.d & 1) == 0)
                    *(gUI2Editor + 0x88080) = 0
                    v0_5.q = *(gUI2Editor + 0x88078)
                    v4_1 = var_110
                    int32_t x8_9 = *(gUI2Editor + 0x8806c)
                    int128_t v0_6 = vsub_f32(v4_1, v0_5)
                    
                    if (x8_9 == 0)
                        v2_2.d = fconvert.s(1f)
                        v1_3 = v2_2.d f/ *(gUI2Editor + 0x603c)
                        v0_6.d = v0_6.d f* v1_3
                        v0_6:4.d = v0_6:4.d f* v1_3
                        var_b0 = v0_6.q
                        x0, v4_1 = UI2OffsetActiveSet(&var_b0)
                        v4_1 = var_110
                        entry_v9.d = v4_1:4.d
                    else if (x8_9 == 2)
                    label_102f54c:
                        pthread_kill(pthread_self(), 6)
                        x0, v0_21, v4_1 = XNoReturn()
                    label_102f55c:
                        entry_v8 = v0_21
                        int32_t var_134_1
                        
                        if (zx.d(*(gUI2Editor + 0x7056)) == 0)
                        label_102f718:
                            
                            if (*(gUI2Editor + 0x704c) s>= 1)
                                var_134_1 = entry_v9.d
                                entry_v9.d = var_120:4.d
                                int64_t x23_1 = 0
                                v10.d = var_130:4.d
                                entry_v11.d = 0x3f000000
                                entry_v11:4.d = 0x3f000000
                                entry_v13.d = 0xbf000000
                                entry_v13:4.d = 0xbf000000
                                entry_v14.d = fconvert.s(1f)
                                entry_v14:4.d = fconvert.s(1f)
                                
                                while (true)
                                    UI2* x0_25 =
                                        UI2GetIndex(zx.q(*(gUI2Editor + (x23_1 << 2) + 0x604c)))
                                    var_d0.q = UI2PropDynamic<float>::Eval(entry_v8.d)
                                    var_e0.q = UI2PropDynamic<float>::Eval(entry_v8.d)
                                    UI2PropDynamic<float>::Eval(entry_v8.d)
                                    int128_t v0_41
                                    int128_t v1_15
                                    int128_t v3_8
                                    v0_41, v1_15, v3_8 = UI2PropDynamic<float>::Eval(entry_v8.d)
                                    v0_41.d = *(gUI2Editor + (x23_1 << 4) + 0x880ac)
                                    v1_15.d = *(gUI2Editor + (x23_1 << 4) + 0x880b0)
                                    v3_8.d = *(gUI2Editor + (x23_1 << 4) + 0x880b8)
                                    float v5_5 = var_130.d
                                    float v4_8 = var_120.d
                                    int32_t x8_36 = *(x0_25 + 0x167c)
                                    v1_15.d = v1_15.d f- entry_v9.d
                                    v3_8.d = v3_8.d f- entry_v9.d
                                    v0_41.d = v0_41.d f- v4_8
                                    v0_41.d = v5_5 f* v0_41.d
                                    v1_15.d = v10.d f* v1_15.d
                                    v3_8.d = v10.d f* v3_8.d
                                    v0_41.d = v4_8 f+ v0_41.d
                                    float v2_14 = v4_8
                                        + v5_5 * (*(gUI2Editor + (x23_1 << 4) + 0x880b4) - v4_8)
                                    v1_15.d = entry_v9.d f+ v1_15.d
                                    v3_8.d = entry_v9.d f+ v3_8.d
                                    v0_41.d f- v2_14
                                    
                                    if (v0_41.d f< v2_14)
                                        v4_8 = v2_14
                                    else
                                        v4_8 = v0_41.d
                                    
                                    if (v0_41.d f< v2_14)
                                        v0_41.d = v0_41.d
                                    else
                                        v0_41.d = v2_14
                                    
                                    v1_15.d f- v3_8.d
                                    
                                    if (v1_15.d f< v3_8.d)
                                        v2_14 = v1_15.d
                                    else
                                        v2_14 = v3_8.d
                                    
                                    if (v1_15.d f< v3_8.d)
                                        v1_15.d = v3_8.d
                                    else
                                        v1_15.d = v1_15.d
                                    
                                    v3_8.d = v4_8 f- v0_41.d
                                    v1_15.d = v1_15.d f- v2_14
                                    v3_8:4.d = v2_14
                                    v0_41:4.d = v1_15.d
                                    v1_15.q = vcltz_f32(v3_8, 0)
                                    int128_t v2_16 = vcltz_f32(v0_41, 0)
                                    int128_t v1_16 = vbsl_s8(v1_15, entry_v13, entry_v11)
                                    int128_t v2_11 = vbsl_s8(v2_16, entry_v13, entry_v11)
                                    int128_t v1_17 = vadd_f32(v3_8, v1_16)
                                    int128_t v0_42 = vadd_f32(v0_41, v2_11)
                                    int128_t v1_18 = vcvt_s32_f32(v1_17)
                                    int128_t v0_43 = vcvt_s32_f32(v0_42)
                                    int128_t v1_11 = vcvt_f32_s32(v1_18)
                                    entry_v12 = vadd_f32(vcvt_f32_s32(v0_43), v1_11)
                                    int128_t v0_31
                                    v0_31:4.d = v1_11:4.d
                                    entry_v15 = vsub_f32(entry_v12, v0_31)
                                    int128_t var_100_1 = v0_31
                                    
                                    if (x8_36 != 6)
                                        v0_31.d = *(x0_25 + 0x674)
                                        v2_11.d = *(x0_25 + 0x664)
                                        v3_8.d = *(x0_25 + 0x660)
                                        v1_11.d = entry_v8.d f- v0_31.d
                                        v0_31.d = v2_11.d f+ v3_8.d
                                        
                                        if (v1_11.d f< v0_31.d || *(x0_25 + 0x654) s> 1)
                                            v0_31.d = *(x0_25 + 0x670)
                                            v0_31.d = entry_v8.d f- v0_31.d
                                            int32_t v3_5
                                            v0_31, v1_11, v2_11, v3_5 = PropEval<RectF>(
                                                x0_25 + 0x558, x0_25 + 0x5dc, x0_25 + 0x660, 
                                                v0_31.d, v1_11.d, v1_11.d)
                                            v2_11:4.d = v3_5
                                            v0_31:4.d = v1_11.d
                                        else
                                            v0_31.q = *(x0_25 + 0x5dc)
                                            v2_11.q = *(x0_25 + 0x5e4)
                                        
                                        int128_t v3_6 = vmul_f32(entry_v12, v0_31, 0)
                                        int128_t v4_7 =
                                            vmul_f32(v2_11, vsub_f32(entry_v14, v0_31), 0)
                                        int128_t v1_13 =
                                            vsub_f32(vmul_f32(v2_11, var_100_1, 0), v3_6)
                                        int128_t v3_7 = vsub_f32(entry_v14, v2_11)
                                        int128_t v2_12 = vsub_f32(v2_11, v0_31)
                                        int128_t v0_33 = vsub_f32(v4_7, vmul_f32(v0_31, v3_7, 0))
                                        int128_t v2_13 = vdiv_f32(entry_v15, v2_12)
                                        int128_t v0_34 = vdiv_f32(v1_13, v0_33)
                                        double v1_14 = vadd_f32(v2_13, v0_34)
                                        var_b0 = v0_34.q
                                        double var_a8_1 = v1_14
                                        *(x0_25 + 0x1370) = 0
                                        *(x0_25 + 0x1694) = 0
                                        AttribMap* x0_21 = GetEdittedMap(x0_25, 0x76)
                                        AttribMapSetDef(*gUI2AttribTable, x0_21, 0x76, &var_b0)
                                        x0, v4_1 = AttribMapGetDef(*gUI2AttribTable, x0_21, 
                                            *macro_ptr_RectF, 0x76)
                                        x23_1 += 1
                                        
                                        if (x23_1 s>= sx.q(*(gUI2Editor + 0x704c)))
                                            break
                                    else
                                        int32_t x25_1 = *(x0_25 + 0x1970)
                                        
                                        if (x25_1 != 0)
                                            uint64_t fp_1 = 0
                                            v1_11:4.d = var_e0.d
                                            entry_v11 = vsub_f32(var_100_1, v1_11)
                                            bool cond:20_1
                                            
                                            do
                                                UI2* x20_1 = *gUI2 + zx.q(
                                                    *(x0_25 + (fp_1 << 0x20 s>> 0x1e) + 0x1870))
                                                    * 0x19a8
                                                var_d0.q = UI2PropDynamic<float>::Eval(entry_v8.d)
                                                var_e0.q = UI2PropDynamic<float>::Eval(entry_v8.d)
                                                int128_t var_f0
                                                var_f0.q = UI2PropDynamic<float>::Eval(entry_v8.d)
                                                int32_t v0_51
                                                int128_t v1_19
                                                int128_t v4_9
                                                v0_51, v1_19, v4_9 =
                                                    UI2PropDynamic<float>::Eval(entry_v8.d)
                                                v4_9:4.d = var_e0.d
                                                v1_19:4.d = v0_51
                                                int128_t v0_52 = vadd_f32(v4_9, v1_19)
                                                int128_t v1_20 = vsub_f32(v4_9, entry_v11)
                                                int128_t v2_17 = vsub_f32(v0_52, v4_9)
                                                int128_t v3_9 = vsub_f32(v1_20, v4_9)
                                                int128_t v1_22 =
                                                    vsub_f32(vadd_f32(v1_20, v2_17), v0_52)
                                                double v2_18 = vadd_f32(v4_9, v3_9)
                                                double v0_53 = vadd_f32(v0_52, v1_22)
                                                var_b0 = v2_18
                                                double var_a8_2 = v0_53
                                                *(x20_1 + 0x1370) = 0
                                                *(x20_1 + 0x1694) = 0
                                                AttribMap* x0_35 = GetEdittedMap(x20_1, 0x76)
                                                AttribMapSetDef(*gUI2AttribTable, x0_35, 0x76, 
                                                    &var_b0)
                                                v0_31, v1_11, v2_11, v3_8 = AttribMapGetDef(
                                                    *gUI2AttribTable, x0_35, *macro_ptr_RectF, 0x76)
                                                cond:20_1 = x25_1 != fp_1.d + 1
                                                fp_1 = zx.q(fp_1.d + 1)
                                            while (cond:20_1)
                                        
                                        v0_31.d = *(x0_25 + 0x674)
                                        v2_11.d = *(x0_25 + 0x664)
                                        v3_8.d = *(x0_25 + 0x660)
                                        v1_11.d = entry_v8.d f- v0_31.d
                                        v0_31.d = v2_11.d f+ v3_8.d
                                        
                                        if (v1_11.d f< v0_31.d || *(x0_25 + 0x654) s> 1)
                                            v0_31.d = *(x0_25 + 0x670)
                                            v0_31.d = entry_v8.d f- v0_31.d
                                            int32_t v3_10
                                            v0_31, v1_11, v2_11, v3_10 = PropEval<RectF>(
                                                x0_25 + 0x558, x0_25 + 0x5dc, x0_25 + 0x660, 
                                                v0_31.d, v1_11.d, v1_11.d)
                                            v2_11:4.d = v3_10
                                            v0_31:4.d = v1_11.d
                                        else
                                            v0_31.q = *(x0_25 + 0x5dc)
                                            v2_11.q = *(x0_25 + 0x5e4)
                                        
                                        int128_t v3_11 = vmul_f32(entry_v12, v0_31, 0)
                                        int128_t v4_11 =
                                            vmul_f32(v2_11, vsub_f32(entry_v14, v0_31), 0)
                                        int128_t v1_24 =
                                            vsub_f32(vmul_f32(v2_11, var_100_1, 0), v3_11)
                                        int128_t v3_12 = vsub_f32(entry_v14, v2_11)
                                        int128_t v2_20 = vsub_f32(v2_11, v0_31)
                                        int128_t v0_55 = vsub_f32(v4_11, vmul_f32(v0_31, v3_12, 0))
                                        int128_t v2_21 = vdiv_f32(entry_v15, v2_20)
                                        int128_t v0_56 = vdiv_f32(v1_24, v0_55)
                                        double v1_25 = vadd_f32(v2_21, v0_56)
                                        var_b0 = v0_56.q
                                        double var_a8_3 = v1_25
                                        *(x0_25 + 0x1370) = 0
                                        *(x0_25 + 0x1694) = 0
                                        AttribMap* x0_40 = GetEdittedMap(x0_25, 0x76)
                                        AttribMapSetDef(*gUI2AttribTable, x0_40, 0x76, &var_b0)
                                        x0, v4_1 = AttribMapGetDef(*gUI2AttribTable, x0_40, 
                                            *macro_ptr_RectF, 0x76)
                                        entry_v11.d = 0x3f000000
                                        entry_v11:4.d = 0x3f000000
                                        x23_1 += 1
                                        
                                        if (x23_1 s>= sx.q(*(gUI2Editor + 0x704c)))
                                            break
                                
                                v4_1 = var_110
                                entry_v9.d = var_134_1
                        else
                            x0, v0_21, v4_1 = AppIsKeyDown(0)
                            int64_t var_a8
                            float* x3_4
                            AttribMap* x19_6
                            
                            if ((x0.d & 1) != 0)
                                v4_1 = var_110
                                
                                if (zx.d(*(gUI2Editor + 0x7056)) == 0)
                                    goto label_102f718
                                
                                x0, v0_21, v4_1 = AppIsKeyDown(0)
                                v4_1 = var_110
                                
                                if ((x0.d & 1) == 0)
                                    goto label_102f718
                                
                                var_134_1 = entry_v9.d
                                UI2* x0_13 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
                                int64_t v6_2 = var_130.q
                                int64_t v7_2 = var_120.q
                                float v1_9 = fconvert.s(0.5f)
                                float v0_22 = v7_2:4.d
                                float v2_7 = v7_2.d f+ (*(gUI2Editor + 0x8809c) f- v7_2.d) f* v6_2.d
                                float v3_3 = v7_2.d f+ (*(gUI2Editor + 0x880a4) f- v7_2.d) f* v6_2.d
                                float v4_4 = v0_22 + (*(gUI2Editor + 0x880a0) - v0_22) f* v6_2:4.d
                                v0_22 = v0_22 + (*(gUI2Editor + 0x880a8) - v0_22) f* v6_2:4.d
                                v2_7 - v3_3
                                float v5_3
                                
                                v5_3 = v2_7 < v3_3 ? v3_3 : v2_7
                                
                                if (not(v2_7 < v3_3))
                                    v2_7 = v3_3
                                
                                v4_4 - v0_22
                                v6_2.d = fconvert.s(-0.5f)
                                
                                v3_3 = v4_4 < v0_22 ? v4_4 : v0_22
                                
                                if (not(v4_4 < v0_22))
                                    v0_22 = v4_4
                                
                                v4_4 = v5_3 - v2_7
                                
                                v5_3 = v2_7 < 0f ? v6_2.d : v1_9
                                
                                v0_22 = v0_22 - v3_3
                                v2_7 = v2_7 + v5_3
                                
                                v5_3 = v3_3 < 0f ? v6_2.d : v1_9
                                
                                uint32_t temp0_1 = vcvts_s32_f32(v2_7)
                                v2_7 = v3_3 + v5_3
                                
                                v3_3 = v4_4 < 0f ? v6_2.d : v1_9
                                
                                entry_v12.d = float.s(temp0_1)
                                uint32_t temp0_2 = vcvts_s32_f32(v2_7)
                                
                                if (v0_22 < 0f)
                                    v1_9 = v6_2.d
                                
                                entry_v13.d = float.s(temp0_2)
                                entry_v15.d =
                                    entry_v12.d f+ float.s(sx.d(vcvts_s32_f32(v4_4 + v3_3)))
                                entry_v14.d =
                                    entry_v13.d f+ float.s(sx.d(vcvts_s32_f32(v0_22 + v1_9)))
                                var_b0.d = entry_v12.d
                                var_b0:4.d = entry_v13.d
                                var_a8.d = entry_v15.d
                                var_a8:4.d = entry_v14.d
                                int128_t v0_24 = UI2PropDynamic<float>::Eval(entry_v8.d)
                                int64_t v0_26 = UI2PropDynamic<float>::Eval(entry_v8.d)
                                int128_t v0_28 = UI2PropDynamic<float>::Eval(entry_v8.d)
                                float v0_30 = UI2PropDynamic<float>::Eval(entry_v8.d)
                                entry_v11.d = v0_24.d f+ v0_28.d
                                float v1_10 = entry_v8.d f- *(x0_13 + 0x674)
                                var_d0.d = v0_26.d f+ v0_30
                                float v2_8
                                float v3_4
                                
                                if (v1_10 < *(x0_13 + 0x664) + *(x0_13 + 0x660)
                                        || *(x0_13 + 0x654) s> 1)
                                    v0_30, v1_10, v2_8, v3_4 = PropEval<RectF>(x0_13 + 0x558, 
                                        x0_13 + 0x5dc, x0_13 + 0x660, 
                                        entry_v8.d f- *(x0_13 + 0x670), v1_10, v1_10)
                                    entry_v12.d = var_b0.d
                                    entry_v13.d = var_b0:4.d
                                    entry_v15.d = var_a8.d
                                    entry_v14.d = var_a8:4.d
                                else
                                    v0_30 = *(x0_13 + 0x5dc)
                                    v1_10 = *(x0_13 + 0x5e0)
                                    v2_8 = *(x0_13 + 0x5e4)
                                    v3_4 = *(x0_13 + 0x5e8)
                                
                                float v4_5 = entry_v11.d f- v0_24.d
                                float v5_4 = var_d0.d f- v0_26.d
                                entry_v8.d = v0_24.d f+ v4_5 * v0_30
                                entry_v11.d = v0_24.d f+ v4_5 * v2_8
                                entry_v9.d = v0_26.d f+ v5_4 * v1_10
                                
                                if (entry_v12.d f< entry_v8.d)
                                    v0_30 = entry_v12.d
                                else
                                    v0_30 = entry_v8.d
                                
                                v10.d = v0_26.d f+ v5_4 * v3_4
                                
                                if (entry_v15.d f> entry_v11.d)
                                    v2_8 = entry_v15.d
                                else
                                    v2_8 = entry_v11.d
                                
                                if (entry_v13.d f< entry_v9.d)
                                    v1_10 = entry_v13.d
                                else
                                    v1_10 = entry_v9.d
                                
                                if (entry_v14.d f> v10.d)
                                    v3_4 = entry_v14.d
                                else
                                    v3_4 = v10.d
                                
                                if (not(v3_4 f!= entry_v14.d) && not(v2_8 f!= entry_v15.d)
                                        && not(v0_30 f!= entry_v12.d)
                                        && not(v1_10 f!= entry_v13.d))
                                    *(x0_13 + 0x1370) = 0
                                    *(x0_13 + 0x1694) = 0
                                    AttribMap* x0_52 = GetEdittedMap(x0_13, 0x76)
                                    AttribMapSetDef(*gUI2AttribTable, x0_52, 0x76, &var_b0)
                                    AttribMapGetDef(*gUI2AttribTable, x0_52, *macro_ptr_RectF, 0x76)
                                    entry_v12.d = var_b0.d
                                    entry_v13.d = var_b0:4.d
                                    entry_v15.d = var_a8.d
                                    entry_v14.d = var_a8:4.d
                                
                                v1_10 = entry_v15.d f- entry_v12.d
                                v4_5 = entry_v14.d f- entry_v13.d
                                float var_c0 = (entry_v8.d f- entry_v12.d) / v1_10
                                float var_bc_1 = (entry_v9.d f- entry_v13.d) / v4_5
                                float var_b8_1 = (entry_v11.d f- entry_v12.d) / v1_10
                                float var_b4_1 = (v10.d f- entry_v13.d) / v4_5
                                *(x0_13 + 0x1370) = 0
                                *(x0_13 + 0x1694) = 0
                                x19_6 = GetEdittedMap(x0_13, 0x80)
                                x3_4 = &var_c0
                                goto label_102fe40
                            
                            var_134_1 = entry_v9.d
                            UI2* x0_44 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
                            int64_t v6_3 = var_130.q
                            int64_t v7_3 = var_120.q
                            float v1_26 = fconvert.s(0.5f)
                            float v0_57 = v7_3:4.d
                            float v2_22 = v7_3.d f+ (*(gUI2Editor + 0x880ac) f- v7_3.d) f* v6_3.d
                            float v3_13 = v7_3.d f+ (*(gUI2Editor + 0x880b4) f- v7_3.d) f* v6_3.d
                            float v4_12 = v0_57 + (*(gUI2Editor + 0x880b0) - v0_57) f* v6_3:4.d
                            v0_57 = v0_57 + (*(gUI2Editor + 0x880b8) - v0_57) f* v6_3:4.d
                            v2_22 - v3_13
                            float v5_6
                            
                            v5_6 = v2_22 < v3_13 ? v3_13 : v2_22
                            
                            if (not(v2_22 < v3_13))
                                v2_22 = v3_13
                            
                            v4_12 - v0_57
                            v6_3.d = fconvert.s(-0.5f)
                            
                            v3_13 = v4_12 < v0_57 ? v4_12 : v0_57
                            
                            if (not(v4_12 < v0_57))
                                v0_57 = v4_12
                            
                            v4_12 = v5_6 - v2_22
                            
                            v5_6 = v2_22 < 0f ? v6_3.d : v1_26
                            
                            v0_57 = v0_57 - v3_13
                            v2_22 = v2_22 + v5_6
                            
                            v5_6 = v3_13 < 0f ? v6_3.d : v1_26
                            
                            uint32_t temp0_5 = vcvts_s32_f32(v2_22)
                            v2_22 = v3_13 + v5_6
                            
                            v3_13 = v4_12 < 0f ? v6_3.d : v1_26
                            
                            entry_v12.d = float.s(temp0_5)
                            uint32_t temp0_6 = vcvts_s32_f32(v2_22)
                            
                            if (v0_57 < 0f)
                                v1_26 = v6_3.d
                            
                            entry_v13.d = float.s(temp0_6)
                            v0_57 = v0_57 + v1_26
                            v1_26 = float.s(sx.d(vcvts_s32_f32(v4_12 + v3_13)))
                            entry_v15.d = entry_v13.d f+ float.s(sx.d(vcvts_s32_f32(v0_57)))
                            entry_v14.d = entry_v12.d f+ v1_26
                            int128_t v0_59 = UI2PropDynamic<float>::Eval(entry_v8.d)
                            int64_t v0_61 = UI2PropDynamic<float>::Eval(entry_v8.d)
                            float v1_27 =
                                v0_59.d f+ UI2PropDynamic<float>::Eval(entry_v8.d).d f- v0_59.d
                            float v0_65 =
                                v0_61.d f+ UI2PropDynamic<float>::Eval(entry_v8.d) f- v0_61.d
                            float v6_4 = *RECT1
                            float v7_4 = *(RECT1 + 4)
                            float v2_23 = (entry_v12.d f- v0_59.d) / v1_27
                            v1_27 = (entry_v14.d f- v0_59.d) / v1_27
                            float v3_14 = (entry_v13.d f- v0_61.d) / v0_65
                            float v4_13 = (entry_v15.d f- v0_61.d) / v0_65
                            float v5_7 = *(RECT1 + 8)
                            float v16_1 = *(RECT1 + 0xc)
                            
                            v0_65 = v2_23 > v6_4 ? v2_23 : v6_4
                            
                            if (not(v1_27 < v5_7))
                                v1_27 = v5_7
                            
                            v2_23 = v3_14 > v7_4 ? v3_14 : v7_4
                            
                            v3_14 = v4_13 < v16_1 ? v4_13 : v16_1
                            
                            if (v0_65 > v1_27 || not(v2_23 <= v3_14))
                                v0_65 = *RECT0
                                v2_23 = *(RECT0 + 4)
                                v1_27 = *(RECT0 + 8)
                                v3_14 = *(RECT0 + 0xc)
                            
                            var_b0.d = v0_65
                            var_b0:4.d = v2_23
                            var_a8.d = v1_27
                            var_a8:4.d = v3_14
                            *(x0_44 + 0x1370) = 0
                            *(x0_44 + 0x1694) = 0
                            x19_6 = GetEdittedMap(x0_44, 0x80)
                            x3_4 = &var_b0
                        label_102fe40:
                            AttribMapSetDef(*gUI2AttribTable, x19_6, 0x80, x3_4)
                            x0, v4_1 =
                                AttribMapGetDef(*gUI2AttribTable, x19_6, *macro_ptr_RectF, 0x80)
                            v4_1 = var_110
                            entry_v9.d = var_134_1
                    else
                        v2_2.q = *(gUI2Editor + 0x6040)
                        v1_3 = fconvert.s(1f) / *(gUI2Editor + 0x603c)
                        v0_6.d = v0_6.d f* v1_3
                        v0_6:4.d = v0_6:4.d f* v1_3
                        *(gUI2Editor + 0x6040) = vsub_f32(v2_2, v0_6)
                        entry_v9.d = v4_1:4.d
                else
                    int32_t x8_6 = *(gUI2Editor + 0x88080)
                    v0_5.d = *(gUI2Editor + 0x88070)
                    v1_3 = *(gUI2Editor + 0x88074)
                    v2_2.d = *(gUI2Editor + 0x88078)
                    v4_1.d = var_110:4.d
                    entry_v8.d = v4_1.d f- v1_3
                    v2_2.d = v0_5.d f- v2_2.d
                    float v3_1 = v1_3 - *(gUI2Editor + 0x8807c)
                    
                    if (x8_6 == 2)
                        entry_v9.d = 0f
                    else
                        entry_v9.d = var_110.d f- v0_5.d
                        
                        if (x8_6 == 1)
                            entry_v8.d = 0f
                        else if (x8_6 == 0)
                            v4_1.d = fabs(entry_v9.d)
                            v5_1.d = fabs(entry_v8.d)
                            
                            if (v4_1.d f>= v5_1.d)
                                *(gUI2Editor + 0x88080) = 1
                                entry_v8.d = 0f
                            else
                                *(gUI2Editor + 0x88080) = 2
                                entry_v9.d = 0f
                    
                    int32_t x8_14 = *(gUI2Editor + 0x8806c)
                    v4_1.d = v2_2.d f+ entry_v9.d
                    v2_2.d = v3_1 f+ entry_v8.d
                    
                    if (x8_14 == 0)
                        v0_5.d = *(gUI2Editor + 0x603c)
                        v0_5.d = fconvert.s(1f) f/ v0_5.d
                        v1_3 = v4_1.d f* v0_5.d
                        v0_5.d = v2_2.d f* v0_5.d
                        var_b0.d = v1_3
                        var_b0:4.d = v0_5.d
                        x0, v0_5, v4_1 = UI2OffsetActiveSet(&var_b0)
                        v0_5.d = *(gUI2Editor + 0x88070)
                        v4_1.d = entry_v9.d f+ v0_5.d
                        entry_v9.d = entry_v8.d f+ *(gUI2Editor + 0x88074)
                    else
                        if (x8_14 == 2)
                            goto label_102f54c
                        
                        v5_1.d = *(gUI2Editor + 0x603c)
                        v3_1 = fconvert.s(1f) f/ v5_1.d
                        v4_1.d = v4_1.d f* v3_1
                        v2_2.d = v2_2.d f* v3_1
                        v2_2.d = *(gUI2Editor + 0x6044) f- v2_2.d
                        *(gUI2Editor + 0x6040) = *(gUI2Editor + 0x6040) f- v4_1.d
                        *(gUI2Editor + 0x6044) = v2_2.d
                        v4_1.d = entry_v9.d f+ v0_5.d
                        entry_v9.d = entry_v8.d f+ v1_3
            uint64_t x9_5 = zx.q(*(gUI2 + 8))
            *(gUI2Editor + 0x88078) = v4_1.d
            *(gUI2Editor + 0x8807c) = entry_v9.d
            *(gUI2Editor + 0x88069) = 1
            
            if (x9_5.d != 0)
                void* i = *gUI2
                int64_t x9_6 = i + x9_5 * 0x19a8
                
                do
                    if (zx.d(*(i + 0x19a2)) != 0)
                        while (i != 0xffffffff)
                            *(i + 0x1378) = 2
                            i += 0x19a8
                            
                            if (x9_6 u<= i)
                                break
                            
                            while (zx.d(*(i + 0x19a2)) == 0)
                                i += 0x19a8
                                
                                if (i u>= x9_6)
                                    goto label_102ff14
                        
                        break
                    
                    i += 0x19a8
                while (i u< x9_6)

label_102ff14:
entry_v9.q = var_70
entry_v8.q = var_68
entry_v11.q = var_80
entry_v13.q = var_90
entry_v12.q = var_88
entry_v15.q = var_a0
entry_v14.q = var_98
