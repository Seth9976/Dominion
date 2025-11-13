// 函数: _ZN8UIButton10DrawMatrixERK4Mat3
// 地址: 0x105e710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_40 = entry_v8.q

if (zx.d(*(arg1 + 0xa4)) == 0)
    uint32_t x8_1 = zx.d(*(arg1 + 0xaa))
    uint32_t x9_1 = zx.d(*(arg1 + 0xab))
    int32_t x9_2
    
    if (x8_1 == 0)
        if (x9_1 != 0 || zx.d(*(arg1 + 0xac)) != 0)
            x9_2 = 1
        else
            x9_2 = zx.d(*(arg1 + 0xad)) != 0 ? 1 : 0
    else if (x9_1 != 0)
        x8_1 = 1
        x9_2 = 1
    else if (zx.d(*(arg1 + 0xac)) == 0)
        x8_1 = zx.d(*(arg1 + 0xad)) != 0 ? 1 : 0
        
        if (zx.d(*(arg1 + 0xac)) != 0)
            x9_2 = 1
        else
            x9_2 = zx.d(*(arg1 + 0xad)) != 0 ? 1 : 0
    else
        x8_1 = 1
        
        if (zx.d(*(arg1 + 0xac)) != 0)
            x9_2 = 1
        else
            x9_2 = zx.d(*(arg1 + 0xad)) != 0 ? 1 : 0
    
    uint32_t x10_1 = zx.d(*(arg1 + 0xa8))
    int128_t v0
    v0.q = *(arg1 + 8)
    int128_t v1
    v1.q = *(arg1 + 0x20)
    int128_t v2
    v2.q = *(arg1 + 0x38)
    entry_v8 = vadd_f32(v1, v0)
    int32_t x22_1 = x9_2 & (x10_1 == 0 ? 1 : 0)
    int128_t var_60_1 = vadd_f32(v2, v0)
    Mat3* entry_x1
    int64_t x1
    int32_t x23_1
    int32_t x24_1
    int128_t v1_1
    
    if ((x8_1 & 1) != 0 || x10_1 != 0)
        v1_1.q = *(arg1 + 0x18)
        v2.q = *(arg1 + 0x28)
        x1 = *(arg1 + 0x60)
        v0 = vadd_f32(v1_1, v0)
        v1_1 = vadd_f32(v1_1, v2)
        entry_v8 = vadd_f32(entry_v8, v1_1)
        var_60_1 = vadd_f32(var_60_1, v1_1)
        
        if (x1 != 0)
            goto label_105e83c
        
    label_105e800:
        v1_1.d = v0:4.d
        UIButton::DrawButtonImageWithHighlight(arg1, *(arg1 + 0x58), *(arg1 + 0xd0), entry_x1)
        x24_1 = *(arg1 + 0x90)
        x23_1 = *(arg1 + 0x94)
        
        if (zx.d(*(arg1 + 0xa5)) != 0 && zx.d(*(arg1 + 0x9f)) != 0)
            goto label_105e860
        
        goto label_105e870
    
    if (zx.d(*(arg1 + 0xa5)) == 0)
        if (x22_1 != 0)
            goto label_105e800
        
        x1 = *(arg1 + 0x50)
        goto label_105e83c
    
    x1 = *(arg1 + 0x68)
label_105e83c:
    v1_1.d = v0:4.d
    UIButton::DrawButtonImage(arg1, x1, entry_x1)
    x24_1 = *(arg1 + 0x90)
    x23_1 = *(arg1 + 0x94)
    XAsset* x21_1
    
    if (zx.d(*(arg1 + 0xa5)) == 0 || zx.d(*(arg1 + 0x9f)) == 0)
    label_105e870:
        
        if ((x22_1 & 1) != 0)
            if (zx.d(*(arg1 + 0x9b)) != 0)
                x24_1 = *(arg1 + 0x98)
            
            x21_1 = *(arg1 + 0x70)
            goto label_105e884
        
        x21_1 = *(arg1 + 0x70)
        
        if (x21_1 != 0)
        label_105e8a4:
            int32_t x0_3
            int128_t v0_1
            x0_3, v0_1 = XString::IsEmpty()
            
            if ((x0_3 & 1) == 0)
                v0_1.q = *(arg1 + 0x10)
                double v0_2 = vadd_f32(entry_v8, v0_1)
                int64_t var_50 = entry_v8.q
                double var_48_1 = v0_2
                v0_2.d = *(arg1 + 0x30)
                DrawParentedStringScaleWrapped(arg1, entry_x1, &var_50, x21_1, zx.q(x24_1), 
                    zx.q(x23_1), zx.q(*gRgbaINone), zx.q(*(arg1 + 0x34)), v0_2.d, 0f, 0f)
    else
    label_105e860:
        x24_1 = *(arg1 + 0x9c)
        x23_1 = *(arg1 + 0xa0)
        x21_1 = *(arg1 + 0x70)
        
        if (x22_1 != 0)
        label_105e884:
            XAsset* x8_9 = *(arg1 + 0x78)
            
            if (x8_9 != 0)
                x21_1 = x8_9
            
            goto label_105e890
        
    label_105e890:
        
        if (x21_1 != 0)
            goto label_105e8a4
    arg1 = *(arg1 + 0x88)
    
    if (arg1 != 0)
        DrawParentedImage(arg1, entry_x1, gSpriteWhite, var_60_1.d, var_60_1:4.d)

entry_v8.q = var_40
