// 函数: _ZN9UITextBox4DrawEv
// 地址: 0x105d8b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_80 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int128_t entry_v9
int64_t var_60 = entry_v9.q
int128_t entry_v8
int64_t var_58 = entry_v8.q
void* entry_x0

if (zx.d(*(entry_x0 + 0x78)) == 0)
    XAsset* x0 = *(entry_x0 + 0x38)
    int128_t v0
    int128_t v1
    
    if (x0 != 0)
        v0.d = *(entry_x0 + 0x14)
        v1.d = *(entry_x0 + 0x18)
        v0, v1 =
            Draw9SliceImage(x0, gSpriteWhite, v0.d, v1.d, *(entry_x0 + 0x1c), *(entry_x0 + 0x20))
    
    v0.q = *(entry_x0 + 0x14)
    v1.q = *(entry_x0 + 0x1c)
    int32_t var_88_1 = 0xffffffff
    double v1_1 = vadd_f32(v0, v1)
    int64_t var_98 = v0.q
    double var_90_1 = v1_1
    int128_t v0_1
    int128_t v1_2
    int128_t v2_1
    v0_1, v1_2, v2_1 = SetClipRect(&var_98)
    v0_1.q = *(entry_x0 + 0x14)
    v1_2.q = *(entry_x0 + 0x24)
    v2_1.q = *(entry_x0 + 0x2c)
    int64_t x8_1 = *(entry_x0 + 0x48)
    int128_t v27_1 = vadd_f32(vadd_f32(v0_1, v1_2), v2_1)
    int64_t var_f0
    double var_e8
    XAsset* x0_15
    
    if (x8_1 != 0)
        int128_t v0_2
        v0_2.d = *(entry_x0 + 0x1c)
        float v3_1 = *(entry_x0 + 0x58)
        float v17_1 = *QI
        float v16_1 = *(QI + 4)
        float v18_1 = *(QI + 8)
        float v19_1 = *(QI + 0xc)
        float v4_1 = v3_1 * *V1
        float v5_1 = v3_1 * *(V1 + 4)
        v3_1 = v3_1 * *(V1 + 8)
        float v6_1 = v16_1 + v16_1
        float v23_1 = v17_1 + v17_1
        v19_1 = v19_1 + v19_1
        v1_2.d = fconvert.s(0.5f)
        float v7_1 = fconvert.s(1f)
        float v20_1 = v0_2.d f* *V2X
        v0_2.d = v0_2.d f* *(V2X + 4)
        float v21_1 = v16_1 * v6_1
        float v24_1 = v16_1 * v23_1
        float v26_1 = v18_1 * v23_1
        v16_1 = v16_1 * v19_1
        v23_1 = v17_1 * v23_1
        float v22_1 = v18_1 * (v18_1 + v18_1)
        float v25_1 = v18_1 * v19_1
        v6_1 = v6_1 * v18_1
        v17_1 = v17_1 * v19_1
        v18_1 = v20_1 f* v1_2.d
        v0_2.d = v0_2.d f* v1_2.d
        v1_2.d = v7_1 - v21_1
        v7_1 = v7_1 - v23_1
        v2_1.d = v27_1:4.d
        v1_2.d = v1_2.d f- v22_1
        v0_2.d = v2_1.d f+ v0_2.d
        v2_1.d = v5_1 * (v24_1 - v25_1)
        v1_2.d = v4_1 f* v1_2.d
        int64_t var_bc_1 = 0
        int64_t var_c4_1 = 0
        var_e8.d = v3_1 * (v26_1 + v16_1)
        var_e8:4.d = v27_1.d f+ v18_1
        float var_d8_1 = v3_1 * (v6_1 - v17_1)
        int32_t var_d4_1 = v0_2.d
        float var_d0_1 = v4_1 * (v26_1 - v16_1)
        float var_cc_1 = v5_1 * (v6_1 + v17_1)
        var_f0.d = v1_2.d
        var_f0:4.d = v2_1.d
        float var_e0_1 = v4_1 * (v24_1 + v25_1)
        float var_dc_1 = v5_1 * (v7_1 - v22_1)
        float var_c8_1 = v3_1 * (v7_1 - v21_1)
        int32_t var_b4_1 = 0x3f800000
        char* x0_3 = XString::operator char const*()
        v10.d = *V20
        entry_v9.d = *(V20 + 4)
        entry_v8.d = *(entry_x0 + 0x50)
        int64_t x21_1 = *(entry_x0 + 0x48)
        char* x0_5 = XString::operator char const*()
        XAsset* x8_2 = *(entry_x0 + 0x48)
        int64_t x5_1
        float v0_4
        
        if (x8_2 == 0)
            x5_1, v0_4 =
                FontStringWidth(*(entry_x0 + 0x40), x0_5, *(entry_x0 + 0x5c), *(entry_x0 + 0x60))
        else
            x5_1, v0_4 = TTFontStringWidth(x8_2, x0_5, *(entry_x0 + 0x50), *(entry_x0 + 0x5c), 
                *(entry_x0 + 0x60))
        
        ColorRgbaI* x4_1 = zx.q(*(entry_x0 + 0x7c))
        
        if (not(v0_4 * *(entry_x0 + 0x58) f<= *(entry_x0 + 0x1c)))
            if (x4_1.d == 2)
                x4_1 = 1
            else if (x4_1.d == 8)
                x4_1 = 7
            else if (x4_1.d == 5)
                x4_1 = 4
        
        TTFontDrawString(&var_f0, x0_3, x21_1, entry_x0 + 0x54, x4_1, x5_1, v10.d)
        x0_15 = *(entry_x0 + 0x48)
        
        if (x0_15 == 0)
            goto label_105dc1c
        
        goto label_105dbc8
    
    char* x0_8
    int128_t v0_5
    int128_t v1_5
    x0_8, v0_5, v1_5 = XString::operator char const*()
    v0_5.q = *(entry_x0 + 0x1c)
    XAsset* x21_2 = *(entry_x0 + 0x40)
    double v0_6 = vadd_f32(v27_1, v0_5)
    var_f0 = v27_1.q
    var_e8 = v0_6
    entry_v8.d = *(entry_x0 + 0x58)
    char* x0_10 = XString::operator char const*()
    XAsset* x8_3 = *(entry_x0 + 0x48)
    float v0_8
    
    if (x8_3 == 0)
        v0_8 = FontStringWidth(*(entry_x0 + 0x40), x0_10, *(entry_x0 + 0x5c), *(entry_x0 + 0x60))
    else
        v0_8 = TTFontStringWidth(x8_3, x0_10, *(entry_x0 + 0x50), *(entry_x0 + 0x5c), 
            *(entry_x0 + 0x60))
    
    uint64_t x6_1 = zx.q(*(entry_x0 + 0x7c))
    
    if (not(v0_8 * *(entry_x0 + 0x58) f<= *(entry_x0 + 0x1c)))
        if (x6_1.d == 2)
            x6_1 = 1
        else if (x6_1.d == 8)
            x6_1 = 7
        else if (x6_1.d == 5)
            x6_1 = 4
    
    DrawStringScaleAlignedOutline(x0_8, x21_2, &var_f0, entry_x0 + 0x54, entry_x0 + 0x64, 
        gRgbaINone, x6_1, entry_v8.d)
    x0_15 = *(entry_x0 + 0x48)
    float v0_13
    
    if (x0_15 != 0)
    label_105dbc8:
        entry_v9.d = TTFontAscent(x0_15, *(entry_x0 + 0x50)) f* *(entry_x0 + 0x58)
        v0_13 = TTFontGetHeight(*(entry_x0 + 0x48), *(entry_x0 + 0x50))
        v11.d = *(entry_x0 + 0x58)
        v10.d = v0_13 f* v11.d
    else
    label_105dc1c:
        float* x0_19 = FontGetDef(*(entry_x0 + 0x40))
        v11.d = *(entry_x0 + 0x58)
        entry_v9.d = v11.d f* float.s(*x0_19)
        v10.d = v11.d f* float.s(x0_19[1])
    
    int32_t x8_4 = *(entry_x0 + 8)
    int32_t x9_1 = *(entry_x0 + 0x10)
    int32_t x21_3
    
    x21_3 = x8_4 s< x9_1 ? x8_4 : x9_1
    
    if (x8_4 - x9_1 == 0)
        v11.d = v11.d f* fconvert.s(3f)
        v0_13 = *(entry_x0 + 0xc)
        
        if (v0_13 > fconvert.s(1f))
            v0_13 = v0_13 + fconvert.s(-1f)
            *(entry_x0 + 0xc) = v0_13
    else
        float v0_15 = UITextBox::GetCharacterX(entry_x0.d)
        float var_100 = v0_15
        v12.d = *(entry_x0 + 0x18) + *(entry_x0 + 0x30) f+ *(entry_x0 + 0x28)
        int32_t var_fc_1 = v12.d
        float var_f8_1 = UITextBox::GetCharacterX(entry_x0.d)
        float var_f4_1 = entry_v9.d f+ v12.d
        
        if (*(entry_x0 + 8) == x21_3)
            var_100 = v11.d f+ v0_15
        
        DrawRectSolid(&var_100, entry_x0 + 0x6c)
        int128_t v0_17 = UITextBox::GetCharacterX(entry_x0.d)
        XString::XString()
        char var_78
        XString::AppendLength(&var_78, XString::GetString() + x21_3)
        
        if (*(entry_x0 + 0x48) == 0)
            DrawStringScale(XString::operator char const*(), *(entry_x0 + 0x40), 
                zx.q(*(entry_x0 + 0x68)), 1, v0_17.d, v27_1.q:4.d, *(entry_x0 + 0x58))
        else
            float v0_18 = *(entry_x0 + 0x58)
            int64_t v1_13
            v1_13.d = *V1
            float v6_2 = *QI
            float v5_2 = *(QI + 4)
            float v7_2 = *(QI + 8)
            float v16_2 = *(QI + 0xc)
            v1_13.d = v0_18 f* v1_13.d
            float v2_9 = v0_18 * *(V1 + 4)
            v0_18 = v0_18 * *(V1 + 8)
            float v3_2 = v5_2 + v5_2
            float v4_2 = fconvert.s(1f)
            float v18_2 = v6_2 + v6_2
            v16_2 = v16_2 + v16_2
            float v19_2 = v5_2 * v3_2
            float v17_2 = v7_2 * (v7_2 + v7_2)
            float v20_2 = v5_2 * v18_2
            float v21_2 = v7_2 * v16_2
            float v22_2 = v7_2 * v18_2
            v5_2 = v5_2 * v16_2
            v18_2 = v6_2 * v18_2
            v3_2 = v3_2 * v7_2
            v6_2 = v6_2 * v16_2
            v7_2 = v4_2 - v19_2
            v16_2 = v20_2 - v21_2
            float v23_2 = v22_2 + v5_2
            v4_2 = v4_2 - v18_2
            v20_2 = v1_13.d f* (v20_2 + v21_2)
            v5_2 = v1_13.d f* (v22_2 - v5_2)
            v1_13.d = v1_13.d f* (v7_2 - v17_2)
            var_f0.d = v1_13.d
            var_f0:4.d = v2_9 * v16_2
            var_e8.d = v0_18 * v23_2
            var_e8:4.d = v0_17.d
            float var_dc_2 = v2_9 * (v4_2 - v17_2)
            float var_d8_2 = v0_18 * (v3_2 - v6_2)
            float var_e0_2 = v20_2
            int32_t var_d4_2 = v27_1.q:4.d
            float var_d0_2 = v5_2
            float var_cc_2 = v2_9 * (v3_2 + v6_2)
            float var_c8_2 = v0_18 * (v4_2 - v19_2)
            int64_t var_bc_2 = 0
            int64_t var_c4_2 = 0
            int32_t var_b4_2 = 0x3f800000
            char* x0_27
            int64_t x5_3
            int128_t v1_14
            int128_t v2_10
            x0_27, x5_3, v1_14, v2_10 = XString::operator char const*()
            v1_14.d = *(V20 + 4)
            v2_10.d = *(entry_x0 + 0x50)
            TTFontDrawString(&var_f0, x0_27, *(entry_x0 + 0x48), entry_x0 + 0x68, 1, x5_3, *V20)
        
        XString::~XString()
        v0_13 = *(entry_x0 + 0xc)
        
        if (not(v0_13 <= fconvert.s(1f)))
            v0_13 = v0_13 + fconvert.s(-1f)
            *(entry_x0 + 0xc) = v0_13
    
    if (zx.d(*(entry_x0 + 0x79)) != 0)
        entry_v8.d = fconvert.s(0.5f)
        
        if (not(v0_13 f>= entry_v8.d))
            *(entry_x0 + 8)
            float v0_22 = UITextBox::GetCharacterX(entry_x0.d)
            var_f0.d = v0_22
            float v4_3 = entry_v9.d f* float.s(0x3d99999a)
            float v1_16
            
            if (v4_3 < 0f)
                v1_16 = fconvert.s(-0.5f)
            else
                v1_16 = entry_v8.d
            
            v1_16 = *(entry_x0 + 0x18)
                + (*(entry_x0 + 0x30) + *(entry_x0 + 0x28)) * *(entry_x0 + 0x58)
                + float.s(vcvts_s32_f32(v4_3 + v1_16))
            var_f0:4.d = v1_16
            var_e8.d = v11.d f+ v0_22
            var_e8:4.d = v10.d f+ v1_16
            DrawRectSolid(&var_f0, entry_x0 + 0x54)
    
    void var_b0
    SetClipRect(&var_b0)

entry_v9.q = var_60
entry_v8.q = var_58
