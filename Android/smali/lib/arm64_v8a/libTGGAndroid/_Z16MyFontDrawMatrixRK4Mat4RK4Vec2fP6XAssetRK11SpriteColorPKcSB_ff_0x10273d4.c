// 函数: _Z16MyFontDrawMatrixRK4Mat4RK4Vec2fP6XAssetRK11SpriteColorPKcSB_ff
// 地址: 0x10273d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
char const* x19 = arg6
XAsset* result_1 = arg4
int64_t v10 = arg3.q
XAsset* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = FontCheckAtlas(arg4)
int64_t* x8

if (result_1 == 0)
    result, v0, v1, v2, v3 = AssetPtrGetNull(0x12)
    result_1 = result
    x8 = *result_1
    
    if (x8 == 0)
        result, v0, v1, v2, v3 = AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1
else
    x8 = *result_1
    
    if (x8 == 0)
        result, v0, v1, v2, v3 = AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1

*(result_1 + 0x24) += 1
DefFont* x24 = *x8
int64_t* x25 = *(x24 + 0x20)
int64_t* x8_1 = x25[1]
int64_t* x26

if (x8_1 == 0)
    x26 = *x25
else
    x26 = x8_1

int64_t* x8_2 = *x26
XAsset* x27 = *(*gpRenderAppData + 0x3b8)
int64_t* x8_4

if (x8_2 == 0)
    if (x26[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result, v0, v1, v2, v3 = AssetCatalogLoadAsset(x26, false, true)
    x8_4 = ***x26
    
    if (x8_4 != 0)
        goto label_10274f8
    
    *(result_1 + 0x24) -= 1
else
    x8_4 = **x8_2
    
    if (x8_4 != 0)
    label_10274f8:
        entry_v11.q = *x8_4
        Mat4* x0_5 = *gpRenderAppData + 0x124
        v0 = *(x0_5 + 0x20)
        v1 = *(x0_5 + 0x30)
        v3 = *x0_5
        v2 = *(x0_5 + 0x10)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        result, v0_1, v1_1, v2_1, v3_1 = Mat4Multiply(x0_5, arg1)
        float128 var_110
        v2_1 = var_110
        int128_t* x8_9 = *gpRenderAppData + 0x124
        int128_t var_f0
        x8_9[2] = var_f0
        int128_t var_e0
        x8_9[3] = var_e0
        *x8_9 = v2_1
        int128_t var_100
        x8_9[1] = var_100
        
        if (x19 == arg7)
            x8_9[2] = v0
            x8_9[3] = v1
            *x8_9 = v3
            x8_9[1] = v2
            *(result_1 + 0x24) -= 1
        else
            v1_1.d = fconvert.s(1f)
            v1_1:4.d = fconvert.s(1f)
            int128_t v0_3 = vdiv_f32(v1_1, vcvt_f32_u32(entry_v11))
            entry_v11.d = v10.d f* arg8
            v0_3:8.q = v0_3.q
            v12.d = 0f
            
            while (true)
                int32_t x8_12 = sx.d(*x19)
                int32_t x28_1 = x8_12 & 0xff
                
                if ((x8_12 & 0x80000000) != 0)
                    if ((x28_1 & 0xe0) == 0xc0)
                        x28_1 = (zx.d(x19[1]) & 0x3f) | (0x1f & x28_1) << 6
                    else if ((x8_12 & 0xf0) == 0xe0)
                        x28_1 = (((0xfffff03f & (x28_1 & 0xf) << 0xc) | (0x3f & zx.d(x19[1])) << 6)
                            & 0xffffffc0) | (zx.d(x19[2]) & 0x3f)
                    else if ((x28_1 & 0xf8) == 0xf0)
                        x28_1 = (((0xfffff03f
                            & ((0xfffc0fff & (x28_1 & 7) << 0x12) | (0x3f & zx.d(x19[1])) << 0xc))
                            | (0x3f & zx.d(x19[2])) << 6) & 0xffffffc0) | (zx.d(x19[3]) & 0x3f)
                
                int32_t x8_21
                
                if (not(arg8 <= 0f))
                    x8_21 = (x28_1 != 0x20 ? 1 : 0) & (MyIsLower(x28_1) ^ 1)
                
                if (arg8 <= 0f || (x8_21 & 1) != 0)
                    v13 = v10
                else
                    x28_1 = MyToUpper(x28_1)
                    v13 = entry_v11.q
                
                float128 v0_4
                float128 v1_2
                int128_t v2_2
                int128_t v3_2
                result, v0_4, v1_2, v2_2, v3_2 = FontUnicodeToGlyph(x24, x25, x28_1)
                
                if (result == 0)
                    int32_t x9_4 = sx.d(*x19)
                    
                    if ((x9_4 & 0x80000000) != 0)
                        int32_t x8_10 = x9_4 & 0xff
                        
                        if ((x8_10 & 0xe0) == 0xc0)
                            x19 = &x19[2]
                            
                            if (x19 == arg7)
                                break
                        else if ((x9_4 & 0xf0) != 0xe0)
                            char const* x19_3
                            
                            if ((x8_10 & 0xf8) == 0xf0)
                                x19_3 = &x19[3]
                            else
                                x19_3 = x19
                            
                            x19 = &x19_3[1]
                            
                            if (x19 == arg7)
                                break
                        else
                            x19 = &x19[3]
                            
                            if (x19 == arg7)
                                break
                    else
                        x19 = &x19[1]
                        
                        if (x19 == arg7)
                            break
                else
                    v0_4 = *(result + 4)
                    var_110 = vmulq_f32(v0_3, v0_4, 0)
                    v2_2.d = *(result + 0x14)
                    v3_2.d = *(result + 0x18)
                    float128 v1_3
                    v1_3.d = *(x24 + 4)
                    v0_4.d = v0_4:0xc.d
                    v2_2.d = v13.d f* v2_2.d
                    v2_2.d = v12.d f+ v2_2.d
                    v1_3.d = float.s(v1_3.d)
                    v2_2.d = *arg2 f+ v2_2.d
                    v3_2.d = v1_3.d f- v3_2.d
                    v1_3.d = v1_3.d f* v10.d
                    v3_2.d = v13.d f* v3_2.d
                    v1_3.d = v1_3.d f- v3_2.d
                    v1_3.d = v1_3.d f+ *(arg2 + 4)
                    int32_t var_120 = v2_2.d
                    int32_t var_11c_1 = v1_3.d
                    v3_2.d = *(result + 0xc)
                    v3_2.d = v3_2.d f- *(result + 4)
                    v3_2.d = v13.d f* v3_2.d
                    v2_2.d = v2_2.d f+ v3_2.d
                    int32_t var_118_1 = v2_2.d
                    v2_2.d = *(result + 8)
                    v0_4.d = v0_4.d f- v2_2.d
                    v0_4.d = v13.d f* v0_4.d
                    v0_4.d = v1_3.d f+ v0_4.d
                    int32_t var_114_1 = v0_4.d
                    SpriteDrawRects(&var_120, &var_110, arg5, x26, x27)
                    int32_t x9_11 = sx.d(*x19)
                    int32_t x3_1
                    void* x23_1
                    int32_t x8_22
                    
                    if ((x9_11 & 0x80000000) != 0)
                        int32_t x8_26 = x9_11 & 0xff
                        
                        if ((x8_26 & 0xe0) == 0xc0)
                            x19 = &x19[1]
                            x23_1 = &x19[1]
                            x8_22 = sx.d(*x23_1)
                            x3_1 = x8_22 & 0xff
                            
                            if ((x8_22 & 0x80000000) != 0)
                                goto label_1027750
                        else if ((x9_11 & 0xf0) != 0xe0)
                            if ((x8_26 & 0xf8) == 0xf0)
                                x19 = &x19[3]
                            
                            x23_1 = &x19[1]
                            x8_22 = sx.d(*x23_1)
                            x3_1 = x8_22 & 0xff
                            
                            if ((x8_22 & 0x80000000) != 0)
                                goto label_1027750
                        else
                            x19 = &x19[2]
                            x23_1 = &x19[1]
                            x8_22 = sx.d(*x23_1)
                            x3_1 = x8_22 & 0xff
                            
                            if ((x8_22 & 0x80000000) != 0)
                                goto label_1027750
                    else
                        x23_1 = &x19[1]
                        x8_22 = sx.d(*x23_1)
                        x3_1 = x8_22 & 0xff
                        
                        if ((x8_22 & 0x80000000) != 0)
                        label_1027750:
                            
                            if ((x3_1 & 0xe0) == 0xc0)
                                x3_1 = (zx.d(x19[2]) & 0x3f) | (0x1f & x3_1) << 6
                            else if ((x8_22 & 0xf0) == 0xe0)
                                x3_1 = (((0xfffff03f & (x3_1 & 0xf) << 0xc)
                                    | (0x3f & zx.d(x19[2])) << 6) & 0xffffffc0) | (zx.d(x19[3]) & 0x3f)
                            else if ((x3_1 & 0xf8) == 0xf0)
                                x3_1 = (((0xfffff03f & ((0xfffc0fff & (x3_1 & 7) << 0x12)
                                    | (0x3f & zx.d(x19[2])) << 0xc)) | (0x3f & zx.d(x19[3])) << 6)
                                    & 0xffffffc0) | (zx.d(x19[4]) & 0x3f)
                    result, v0_4, v1_2, v2_2, v3_2 = FontGetLetterSpacing(result, x24, x28_1, x3_1)
                    v0_4.d = *(x24 + 0x10)
                    v1_2.d = float.s(result.d)
                    x19 = x23_1
                    v0_4.d = v0_4.d f+ v1_2.d
                    v0_4.d = v0_4.d f+ arg9
                    v0_4.d = v13.d f* v0_4.d
                    v12.d = v12.d f+ v0_4.d
                    
                    if (x19 == arg7)
                        break
            
            int128_t* x8_33 = *gpRenderAppData + 0x124
            x8_33[2] = v0
            x8_33[3] = v1
            *x8_33 = v3
            x8_33[1] = v2
            
            if (result_1 != 0)
                *(result_1 + 0x24) -= 1
    else
        *(result_1 + 0x24) -= 1
entry_v11.q = var_80
return result
