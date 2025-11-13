// 函数: _Z13UI2EditorDrawv
// 地址: 0x10383d0
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
uint64_t v10
uint64_t var_78 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
Draw3DSetSortOverride(1)
float128 v0
int32_t v1
int32_t v2
int32_t v3
float128 v6
v0, v1, v2, v3, v6 = RectEditor(zx.q(*(gUI2Editor + 0x8c3e0)))
v6.q = *(gUI2Editor + 0x6040)
int32_t v4 = *(gUI2Editor + 0x603c)
v0:4.d = v1
v0:8.d = v2
v0:0xc.d = v3
v6:8.q = v6.q
float128 v0_1
v0_1.d = vsubq_f32(v0, v6).d f* v4
v0_1:4.d = v0_1:4.d f* v4
v0_1:8.d = v0_1:8.d f* v4
v0_1:0xc.d = v0_1:0xc.d f* v4
float128 var_b0 = v0_1
int32_t var_b4 = 0x7fffffff
float128 v0_2
float128 v2_1
v0_2, v2_1 = DrawRectSolid(&var_b0, &var_b4)
v0_2.q = *(gUI2Editor + 0x6040)
int32_t v1_1 = *(gUI2Editor + 0x603c)
v0_2:8.q = v0_2.q
float128 v0_3
v0_3.d = vsubq_f32(v0, v0_2).d f* v1_1
v0_3:4.d = v0_3:4.d f* v1_1
v0_3:8.d = v0_3:8.d f* v1_1
v0_3:0xc.d = v0_3:0xc.d f* v1_1
var_b0 = v0_3
v0_3.d = fconvert.s(1f)
DrawRectFrame(&var_b0, gRgbaIBlack, v0_3.d)
int32_t x8 = *(gUI2Editor + 0x6010)

if (x8 != 0)
    UI2DrawInt(*gUI2 + zx.q(x8.w) * 0x19a8)

int32_t x0_4 = Draw3DLayer(0x75300000)
int32_t x8_2 = *(gUI2Editor + 0x6000)

if (*(gUI2Editor + 0x704c) s>= 1 && x8_2 s>= 1)
    UI2* x0_6 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    int32_t v0_4 = *RECT0
    
    if (*(x0_6 + 0x15a0) f!= v0_4 || *(x0_6 + 0x15a4) f!= *(RECT0 + 4)
            || *(x0_6 + 0x15a8) f!= *(RECT0 + 8) || not(*(x0_6 + 0x15ac) f== *(RECT0 + 0xc)))
        float v0_5
        int32_t v1_3
        int32_t v2_3
        int32_t v3_1
        v0_5, v1_3, v2_3, v3_1 = UI2WorldRectPadded(x0_6)
        var_b0.d = v0_5
        var_b0:4.d = v1_3
        var_b0:8.d = v2_3
        var_b0:0xc.d = v3_1
        DrawRectFrame(&var_b0, gRgbaIGreen, fconvert.s(1f))
        v0_4 = *RECT0
    
    if (*(x0_6 + 0x15c8) f!= v0_4 || *(x0_6 + 0x15cc) f!= *(RECT0 + 4)
            || *(x0_6 + 0x15d0) f!= *(RECT0 + 8) || not(*(x0_6 + 0x15d4) f== *(RECT0 + 0xc)))
        float v0_6
        int32_t v1_4
        int32_t v2_4
        int32_t v3_2
        v0_6, v1_4, v2_4, v3_2 = UI2WorldRectInflate(x0_6)
        var_b0.d = v0_6
        var_b0:4.d = v1_4
        var_b0:8.d = v2_4
        var_b0:0xc.d = v3_2
        DrawRectFrame(&var_b0, gRgbaIYellow, fconvert.s(1f))
    
    if (*(gUI2Editor + 0x704c) s>= 2)
        int64_t x26_1 = 0
        int64_t i
        
        do
            UI2* x0_12 = UI2GetIndex(zx.q(*(gUI2Editor + (x26_1 << 2) + 0x6050)))
            float v0_7
            int32_t v1_5
            int32_t v2_5
            int32_t v3_3
            v0_7, v1_5, v2_5, v3_3 = UI2WorldRectCropped(x0_12)
            var_b0.d = v0_7
            var_b0:4.d = v1_5
            var_b0:8.d = v2_5
            var_b0:0xc.d = v3_3
            DrawRectFrame(&var_b0, gRgbaIYellow, fconvert.s(1f))
            int32_t v0_8 = *RECT0
            
            if (*(x0_12 + 0x15a0) f!= v0_8 || *(x0_12 + 0x15a4) f!= *(RECT0 + 4)
                    || *(x0_12 + 0x15a8) f!= *(RECT0 + 8)
                    || not(*(x0_12 + 0x15ac) f== *(RECT0 + 0xc)))
                float v0_9
                int32_t v1_7
                int32_t v2_7
                int32_t v3_4
                v0_9, v1_7, v2_7, v3_4 = UI2WorldRectPadded(x0_12)
                var_b0.d = v0_9
                var_b0:4.d = v1_7
                var_b0:8.d = v2_7
                var_b0:0xc.d = v3_4
                DrawRectFrame(&var_b0, gRgbaIGreen, fconvert.s(1f))
                v0_8 = *RECT0
            
            if (*(x0_12 + 0x15c8) f!= v0_8 || *(x0_12 + 0x15cc) f!= *(RECT0 + 4)
                    || *(x0_12 + 0x15d0) f!= *(RECT0 + 8)
                    || not(*(x0_12 + 0x15d4) f== *(RECT0 + 0xc)))
                float v0_10
                int32_t v1_8
                int32_t v2_8
                int32_t v3_5
                v0_10, v1_8, v2_8, v3_5 = UI2WorldRectInflate(x0_12)
                var_b0.d = v0_10
                var_b0:4.d = v1_8
                var_b0:8.d = v2_8
                var_b0:0xc.d = v3_5
                DrawRectFrame(&var_b0, gRgbaIYellow, fconvert.s(1f))
            
            i = x26_1 + 2
            x26_1 += 1
        while (i s< sx.q(*(gUI2Editor + 0x704c)))
    
    float v0_11
    int32_t v1_9
    int32_t v2_9
    int32_t v3_6
    v0_11, v1_9, v2_9, v3_6 = UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + 0x604c))))
    var_b0.d = v0_11
    var_b0:4.d = v1_9
    var_b0:8.d = v2_9
    var_b0:0xc.d = v3_6
    var_b4 = 0xff62cbf6
    DrawRectFrame(&var_b0, &var_b4, fconvert.s(1f))
    x8_2 = *(gUI2Editor + 0x6000)

if (x8_2 != 0)
    int128_t v0_33
    int128_t v1_26
    uint64_t v2_20
    int64_t v3_12
    
    if (zx.d(*(gUI2Editor + 0x7056)) == 0)
    label_1038a20:
        
        if (zx.d(*(gUI2Editor + 0x7054)) != 0)
            v0_33, v1_26, v2_20, v3_12 =
                UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + 0x604c))))
            entry_v8 = v0_33
            entry_v9 = v1_26
            v10 = v2_20
            v11 = v3_12
            
            if (*(gUI2Editor + 0x704c) s>= 2)
                int64_t x22_2 = 0
                int64_t i_1
                
                do
                    v0_33, v1_26, v2_20, v3_12 = UI2WorldRectCropped(UI2GetIndex(zx.q(
                        *(gUI2Editor + (x22_2 << 2) + 0x6050))))
                    
                    if (entry_v8.d f< v0_33.d)
                        entry_v8.d = entry_v8.d
                    else
                        entry_v8.d = v0_33.d
                    
                    if (v10.d f> v2_20.d)
                        v10.d = v10.d
                    else
                        v10.d = v2_20.d
                    
                    i_1 = x22_2 + 2
                    
                    if (entry_v9.d f< v1_26.d)
                        entry_v9.d = entry_v9.d
                    else
                        entry_v9.d = v1_26.d
                    
                    x22_2 += 1
                    
                    if (v11.d f> v3_12.d)
                        v11.d = v11.d
                    else
                        v11.d = v3_12.d
                while (i_1 s< sx.q(*(gUI2Editor + 0x704c)))
            
            v10.d = v10.d f- entry_v8.d
            v15.d = v11.d f- entry_v9.d
            goto label_1038ad0
    else
        int64_t v0_32
        
        if ((AppIsKeyDown(0) & 1) == 0)
            v0_33, v1_26, v2_20, v3_12 =
                UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + 0x604c))))
            entry_v8 = v0_33
            entry_v9 = v1_26
            v10.d = v2_20.d f- v0_33.d
            v15.d = v3_12.d f- v1_26.d
        label_1038ad0:
            v0_33.d = 0f
            v1_26.d = v10.d f* v0_33.d
            v0_33.d = v15.d f* v0_33.d
            v2_20.d = fconvert.s(-4f)
            v3_12.d = fconvert.s(4f)
            v1_26.d = entry_v8.d f+ v1_26.d
            v0_33.d = entry_v9.d f+ v0_33.d
            v11.d = v1_26.d f+ v2_20.d
            v14.d = v0_33.d f+ v2_20.d
            v13.d = v1_26.d f+ v3_12.d
            v12.d = v0_33.d f+ v3_12.d
            var_b0.d = v11.d
            var_b0:4.d = v14.d
            var_b0:8.d = v13.d
            var_b0:0xc.d = v12.d
            v0_33.d = fconvert.s(2f)
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_33.d)
            float v0_34 = entry_v9.d f+ v15.d f* fconvert.s(0.5f)
            float v1_27 = v0_34 + fconvert.s(-4f)
            v0_34 = v0_34 + fconvert.s(4f)
            float128 var_d0
            var_d0.d = v0_34
            var_b0:8.d = v13.d
            var_b0:0xc.d = v0_34
            var_b0.d = v11.d
            var_b0:4.d = v1_27
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            float v0_35 = entry_v9.d f+ v15.d
            entry_v9.d = v0_35 + fconvert.s(-4f)
            v15.d = v0_35 + fconvert.s(4f)
            var_b0.d = v11.d
            var_b0:4.d = entry_v9.d
            var_b0:8.d = v13.d
            var_b0:0xc.d = v15.d
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            float v0_36 = entry_v8.d f+ v10.d f* fconvert.s(0.5f)
            v11.d = v0_36 + fconvert.s(-4f)
            v13.d = v0_36 + fconvert.s(4f)
            var_b0.d = v11.d
            var_b0:4.d = v14.d
            var_b0:8.d = v13.d
            var_b0:0xc.d = v12.d
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            var_b0.d = v11.d
            var_b0:4.d = entry_v9.d
            var_b0:8.d = v13.d
            var_b0:0xc.d = v15.d
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            float v0_38 = entry_v8.d f+ v10.d
            entry_v8.d = v0_38 + fconvert.s(-4f)
            v10.d = v0_38 + fconvert.s(4f)
            var_b0.d = entry_v8.d
            var_b0:4.d = v14.d
            var_b0:8.d = v10.d
            var_b0:0xc.d = v12.d
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            var_b0.d = entry_v8.d
            var_b0:4.d = v1_27
            var_b0:8.d = v10.d
            var_b0:0xc.d = var_d0.d
            DrawRectFrame(&var_b0, gRgbaIWhite, fconvert.s(2f))
            var_b0.d = entry_v8.d
            var_b0:4.d = entry_v9.d
            var_b0:8.d = v10.d
            var_b0:0xc.d = v15.d
            v0_32.d = fconvert.s(2f)
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_32.d)
        else
            if (zx.d(*(gUI2Editor + 0x7056)) == 0)
                goto label_1038a20
            
            if ((AppIsKeyDown(0) & 1) == 0)
                goto label_1038a20
            
            void* x0_24
            int128_t v0_12
            uint128_t v1_10
            int128_t v2_10
            int128_t v3_7
            int128_t v4_1
            int128_t v5_1
            uint128_t v6_1
            int128_t v7_1
            int128_t v16_1
            int128_t v17_1
            int128_t v18_1
            int128_t v19_1
            int128_t v20_1
            int128_t v21_1
            x0_24, v0_12, v1_10, v2_10, v3_7, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, 
                v20_1, v21_1 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
            v6_1.q = *(x0_24 + 0x16bc)
            v7_1.q = *(x0_24 + 0x16c4)
            v0_12.d = *(x0_24 + 0x16b0)
            v2_10.d = *(x0_24 + 0x16b4)
            v1_10.d = *(x0_24 + 0x16b8)
            v4_1.q = *V20
            v5_1.q = *(x0_24 + 0x175c)
            v3_7.d = 0f
            v20_1.d = v6_1:4.d
            v3_7.d = v0_12.d f* v3_7.d
            v18_1.d = v2_10.d f* v2_10.d
            v19_1.d = v2_10.d f* v1_10.d
            v4_1.d = v4_1.d f* v0_12.d
            v4_1:4.d = v4_1:4.d f* v0_12.d
            v0_12.d = v5_1.d f* v0_12.d
            v0_12:4.d = v5_1:4.d f* v0_12.d
            v5_1.d = v20_1.d f* v6_1:4.d
            v20_1.d = v20_1.d f* v6_1.d
            v21_1.d = v6_1.d f* v1_10.d
            v21_1:4.d = v6_1:4.d f* v1_10.d
            int128_t v22_1 = vadd_f32(v19_1, v20_1)
            uint128_t v19_2 = vsub_f32(v19_1, v20_1)
            int128_t v20_2 = vsub_f32(v5_1, v18_1)
            uint128_t v5_2 = vadd_f32(v5_1, v18_1)
            vdupq_laneq_s32(v6_1, 1)
            v1_10.d = v1_10.d f* v1_10.d
            uint128_t v18_2
            v18_2:4.d = v2_10.d
            int128_t v2_11 = vzip1_s32(v2_10, v6_1)
            vadd_f32(v20_2, v1_10)
            int128_t v1_11 = vdup_laneq_s32(v1_10, 0)
            float128 v5_3 = vdup_laneq_s32(v5_2, 0)
            int128_t v2_12 = vmul_f32(v18_2, v2_11, 0)
            double v1_12 = vsub_f32(v5_3, v1_11)
            uint128_t v6_2 = vmul_f32(v6_1, v6_1, 0)
            vsub_f32(v21_1, v2_12)
            double v2_13 = vadd_f32(v21_1, v2_12)
            vdup_laneq_s32(v19_2, 0)
            int128_t v6_3 = vdup_laneq_s32(v6_2, 0)
            int128_t v20_3
            v20_3:4.d = v1_12:4.d
            int128_t v19_3
            v19_3.d = v22_1.d
            double v18_3
            v18_3:4.d = v2_13:4.d
            int128_t v2_14 = vadd_f32(v4_1, v4_1)
            int128_t v4_2 = vrev64_s32(v4_1)
            int128_t v1_13 = vadd_f32(v0_12, v0_12)
            int128_t v0_13 = vrev64_s32(v0_12)
            int128_t v6_4 = vsub_f32(v20_3, v6_3)
            v3_7.d = v3_7.d f+ v3_7.d
            int128_t v2_15 = vmul_f32(v2_14, v19_3, 0)
            int128_t v1_14 = vmul_f32(v1_13, v19_3, 0)
            int128_t v4_3 = vmul_f32(v4_2, v6_4, 0)
            int128_t v0_14 = vmul_f32(v0_13, v6_4, 0)
            v22_1.q = 0x3f000000
            v3_7.d = v18_3.d f* v3_7.d
            v3_7:4.d = v18_3:4.d f* v3_7.d
            int128_t v2_16 = vadd_f32(v2_15, v4_3)
            int128_t v0_15 = vadd_f32(v1_14, v0_14)
            v21_1.q = 0x3f00000000000000
            int128_t v7_2 = vrev64_s32(v7_1)
            int128_t v1_15 = vadd_f32(v3_7, v2_16)
            int128_t v0_16 = vadd_f32(v3_7, v0_15)
            entry_v8 = vadd_f32(v7_2, v1_15)
            int128_t v0_17 = vadd_f32(v7_2, v0_16)
            v5_3 = data_71c440
            entry_v9 = vsub_f32(v0_17, entry_v8)
            int128_t v1_16 = vmul_f32(entry_v9, v22_1, 0)
            int128_t v0_18 = vmul_f32(entry_v9, v21_1, 0)
            uint128_t v1_17 = vadd_f32(entry_v8, v1_16)
            v16_1.d = fconvert.s(-4f)
            v16_1:4.d = fconvert.s(-4f)
            int128_t v0_19 = vadd_f32(entry_v8, v0_18)
            uint128_t v1_18 = vzip1q_s32(v1_17, v1_17)
            v17_1.d = fconvert.s(4f)
            v17_1:4.d = fconvert.s(4f)
            uint128_t v6_5 = vadd_f32(v0_19, v16_1)
            float128 v3_8 = vaddq_f32(v1_18, v5_3)
            uint128_t v4_4 = vadd_f32(v0_19, v17_1)
            uint128_t v1_19 = vuzp1q_s32(v3_8, v6_5)
            uint128_t v0_20 = vdupq_laneq_s32(v4_4, 0)
            vzip2q_s32(v3_8, v1_19)
            uint128_t v1_20
            v1_20:0xc.d = v0_20:0xc.d
            uint64_t var_110_1 = v4_4.q
            int32_t var_f0
            var_f0.q = v2_16.q
            var_b0 = v1_20
            v0_20.d = fconvert.s(2f)
            int32_t* x25_1 = &var_b0 | 8
            v10 = vrev64_s32(v4_4)
            int128_t v0_21
            uint128_t v1_21
            v0_21, v1_21 = DrawRectFrame(&var_b0, gRgbaIWhite, v0_20.d)
            v0_21.q = var_f0.q
            v1_21.q = v3_8.q
            v0_21:8.q = v2_16:8.q
            v1_21:8.q = v3_8:8.q
            uint128_t v0_22 = vextq_s8(v1_21, v1_21, 8)
            var_f0.q = v0_22.q
            int64_t var_e0_2 = v0_22:8.q
            int64_t var_d8_2 = v1_21:8.q
            var_b0.d = v0_22.d
            var_b0:4.d = v1_21.d
            var_b0:8.d = v0_22:4.d
            var_b0:0xc.d = v1_21:4.d
            v0_22.d = fconvert.s(2f)
            int128_t v0_23
            int128_t v3_9
            uint128_t v4_5
            v0_23, v3_9, v4_5 = DrawRectFrame(&var_b0, gRgbaIWhite, v0_22.d)
            v0_23.q = 0x40800000c0800000
            v3_9.q = var_f0.q
            v4_5.q = v1_21.q
            v3_9:8.q = var_e0_2
            v4_5:8.q = var_d8_2
            int128_t v5_4 = vadd_f32(entry_v8, entry_v9)
            uint128_t v0_24 = vadd_f32(v5_4, v0_23)
            entry_v8.d = v5_4.d f+ fconvert.s(4f)
            var_b0.q = vextq_s8(vuzp1q_s32(v4_5, v4_5), v0_24, 0xc)
            int64_t v0_25
            v0_25.d = fconvert.s(2f)
            *x25_1 = v4_5:0xc.d
            var_b0:0xc.d = entry_v8.d
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_25.d)
            var_b0.q = vrev64_s32(v6_5)
            var_b0:8.q = v10
            uint64_t v0_27
            v0_27.d = fconvert.s(2f)
            int128_t v0_28
            int128_t v1_23
            v0_28, v1_23 = DrawRectFrame(&var_b0, gRgbaIWhite, v0_27.d)
            var_b0.q = vext_s8(v6_5, v0_24, 4)
            *x25_1 = var_110_1:4.d
            uint64_t v0_29
            v0_29.d = fconvert.s(2f)
            var_b0:0xc.d = entry_v8.d
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_29.d)
            uint64_t v0_30
            v0_30.d = v5_4.q:4.d
            entry_v9.d = v0_30.d f+ fconvert.s(-4f)
            int64_t v2_18
            v2_18:4.d = v0_24.q:4.d
            var_b0:0xc.d = var_110_1.d
            v0_30.d = fconvert.s(2f)
            var_b0:4.q = v2_18
            var_b0.d = entry_v9.d
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_30.d)
            int128_t v2_19
            v2_19.q = var_f0.q
            v2_19:8.q = var_e0_2
            int64_t v0_31
            v0_31:4.d = v0_24.q:4.d
            var_b0:4.q = v0_31
            v0_31.d = fconvert.s(2f)
            var_b0.d = entry_v9.d
            *(&var_b0 | 0xc) = var_d8_2:4.d
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_31.d)
            var_b0.d = entry_v9.d
            var_b0:0xc.d = entry_v8.d
            var_b0:4.q = v0_24.q
            v0_32.d = fconvert.s(2f)
            DrawRectFrame(&var_b0, gRgbaIWhite, v0_32.d)

int64_t result = Draw3DLayer(zx.q(x0_4))
int32_t x8_13 = *(gUI2Editor + 0x6038)

if (x8_13 != 0)
    result = UI2DrawInt(*gUI2 + zx.q(x8_13.w) * 0x19a8)

entry_v9.q = var_70
entry_v8.q = var_68
return result
