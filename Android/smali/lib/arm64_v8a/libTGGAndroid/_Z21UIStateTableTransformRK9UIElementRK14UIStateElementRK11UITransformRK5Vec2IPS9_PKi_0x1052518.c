// 函数: _Z21UIStateTableTransformRK9UIElementRK14UIStateElementRK11UITransformRK5Vec2IPS9_PKi
// 地址: 0x1052518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int128_t entry_v13
int64_t var_80 = entry_v13.q
int128_t entry_v12
int64_t var_78 = entry_v12.q
int128_t entry_v11
int64_t var_70 = entry_v11.q
int128_t entry_v10
int64_t var_68 = entry_v10.q
int128_t entry_v9
int64_t var_60 = entry_v9.q
int128_t entry_v8
int64_t var_58 = entry_v8.q
int64_t* x26 = *(arg1 + 0xc8)
int32_t* entry_x8
int128_t v0

if (x26 == 0)
    v0 = *(arg3 + 0x10)
    *entry_x8 = *arg3
    *(entry_x8 + 0x10) = v0
    v0 = *(arg3 + 0x50)
    int128_t v3 = *(arg3 + 0x20)
    int128_t v2 = *(arg3 + 0x30)
    *(entry_x8 + 0x40) = *(arg3 + 0x40)
    *(entry_x8 + 0x50) = v0
    *(entry_x8 + 0x20) = v3
    *(entry_x8 + 0x30) = v2
else
    int64_t* x8 = *x26
    UIElement const& x20_1 = arg1
    int128_t v1
    
    if (x8 == 0)
        if (x26[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v0, v1 = AssetCatalogLoadAsset(x26, false, true)
        x8 = *x26
    
    void* x8_2 = *x8
    v1 = *(x20_1 + 0x30)
    entry_v8.q = *(x8_2 + 0xc)
    entry_v13.q = *(x8_2 + 0x14)
    int128_t var_b0 = *(x20_1 + 0x20)
    int128_t var_a0_1 = v1
    int64_t x0_4
    int64_t x1_2
    int64_t x2_1
    int64_t x3_1
    int64_t x4_1
    int128_t v0_1
    int128_t v1_1
    int64_t v2_1
    int32_t v3_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    x0_4, x1_2, x2_1, x3_1, x4_1, v0_1, v1_1, v2_1, v3_1, v5_1, v6_1, v7_1 =
        UIRectAligned(x20_1 + 0x10, &var_b0, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
    entry_v11.d = *(arg3 + 0xc)
    v5_1.q = *arg3
    v7_1.q = *(arg3 + 0x10)
    entry_v12.q = *(arg3 + 0x18)
    v0_1:4.d = v1_1.d
    v2_1:4.d = v3_1
    v1_1.d = vmax_f32(entry_v11.d, 0f)
    v0_1.d = v0_1.d f* v1_1.d
    v0_1:4.d = v0_1:4.d f* v1_1.d
    v1_1.d = v2_1.d f* v1_1.d
    v1_1:4.d = v2_1:4.d f* v1_1.d
    v6_1.d = fconvert.s(1f)
    v6_1:4.d = fconvert.s(1f)
    int128_t v0_2 = vadd_f32(v5_1, v0_1)
    int128_t v1_2 = vadd_f32(v5_1, v1_1)
    int128_t v3_2 = vadd_f32(v7_1, v6_1)
    int128_t v0_3 = vsub_f32(v0_2, entry_v12)
    int128_t v1_3 = vsub_f32(v1_2, entry_v12)
    int128_t v0_4 = vmul_f32(v3_2, v0_3, 0)
    int128_t v1_4 = vmul_f32(v3_2, v1_3, 0)
    int128_t v2_2 = vadd_f32(entry_v12, v0_4)
    int128_t v1_5 = vadd_f32(entry_v12, v1_4)
    int64_t var_c0 = v2_2.q
    int64_t var_b8_1 = v1_5.q
    int32_t x12_1 = *(arg2 + 0x98)
    Vec2I const* x8_4
    
    if (arg5 == 0)
        x8_4 = x20_1 + 0xb0
    else
        x8_4 = arg5
    
    void* __offset(UIElement, 0xac) x9_2
    
    if (arg5 == 0)
        x9_2 = x20_1 + 0xac
    else
        x9_2 = arg5 + 4
    
    int128_t var_120_1 = v1_5
    int64_t v2_3 = v1_5.q
    v3_2.d = *x9_2
    v1_5.d = *x8_4
    void* __offset(UIElement, 0xb8) x9_4
    
    if (x12_1 == 0)
        x9_4 = x20_1 + 0xb8
    else
        x9_4 = arg2 + 0x9c
    
    void* __offset(UIElement, 0xb4) x8_6
    
    if (x12_1 == 0)
        x8_6 = x20_1 + 0xb4
    else
        x8_6 = arg2 + 0xa0
    
    entry_v9.d = *x8_6
    entry_v10.d = *x9_4
    v15.d = *(x20_1 + 0xbc)
    v14.d = *(x20_1 + 0xc0)
    int128_t v4_2 = vsub_f32(entry_v13, entry_v8)
    v5_1.d = float.s(v3_2.d)
    v6_1.d = float.s(v1_5.d)
    entry_v8.d = v4_2:4.d
    v1_5.d = v2_2.q:4.d
    v3_2.d = v2_3:4.d
    int32_t var_188_1 = v6_1.d
    int32_t var_184_1 = v5_1.d
    int32_t var_190_1 = v14.d
    int32_t var_18c_1 = v15.d
    int128_t v0_6
    int128_t v1_6
    int128_t v2_4
    int128_t v4_3
    int128_t v5_3
    int128_t v6_3
    int128_t v7_3
    int128_t v16_1
    int128_t v18_1
    arg1, v0_6, v1_6, v2_4, v4_3, v5_3, v6_3, v7_3, v16_1, v18_1 =
        CalcSpacing(x0_4, x1_2, x2_1, x3_1, x4_1)
    v4_3 = *(arg3 + 0x20)
    v5_3 = *(arg3 + 0x2c)
    entry_v13 = vsub_f32(var_120_1, v2_2)
    v2_4.d = *V21
    float v3_3 = *(V21 + 4)
    uint32_t x8_7 = zx.d(*(x20_1 + 0xd9))
    v7_3.d = *(arg3 + 8)
    var_b0 = v5_3
    var_b0 = v4_3
    int128_t v4_4
    v4_4:4.d = v5_1.d
    int128_t v5_4
    v5_4:4.d = v5_1.d f- v3_3
    v2_4.d = v6_1.d f- v2_4.d
    v16_1:4.d = v1_6.d
    int128_t v3_4
    v3_4.d = v2_4.d
    int128_t v2_6 = vadd_f32(vmul_f32(v5_4, v16_1, 0), vmul_f32(v4_4, v3_4, 0))
    int128_t v4_5 = vdiv_f32(entry_v13, v2_6)
    int32_t x23_1 = *(arg3 + 0x5c)
    int128_t v5_5
    v5_5.d = v4_5:4.d
    
    if (v4_5.d f< v5_5.d)
        v3_4.d = v4_5.d
    else
        v3_4.d = v5_5.d
    
    if (x8_7 == 0)
        v16_1.d = v3_4.d
    else
        v16_1.d = entry_v11.d
    
    int64_t var_d0
    int64_t* x8_8
    int128_t v1_8
    int128_t v2_9
    int64_t* x20_2
    
    if (zx.d(*(x20_1 + 0xd8)) == 0)
        int128_t var_130_2 = v0_6
        v0_6.d = v2_6.d f* v16_1.d
        v0_6:4.d = v2_6:4.d f* v16_1.d
        var_d0 = v0_6.q
        v0_6.d = v4_2.d f* v16_1.d
        var_120_1.d = v7_3.d
        float var_144_1 = v0_6.d
        int128_t var_110_2 = v16_1
        entry_v11.d = entry_v8.d f* v16_1.d
        int64_t x1_4
        int64_t x2_3
        int64_t x3_2
        int64_t x4_2
        int128_t v4_6
        arg1, x1_4, x2_3, x3_2, x4_2, v0_6, v1_8, v2_9, v3_4, v4_6, v6_3, v7_3, v16_1 =
            RectAlignedWithinRect(&var_c0, &var_d0, zx.q(*(x20_1 + 0xd0)))
        int64_t v5_6 = v1_8.q
        v1_8.d = *(arg4 + 4)
        v1_8.d = float.s(v1_8.d)
        
        if (arg6 != 0)
            v2_9.d = fconvert.s(-1f)
            v2_9.d = v5_1.d f+ v2_9.d
        
        if (arg6 == 0 || v2_9.d f!= v1_8.d)
            v16_1 = var_110_2
            v6_3.d = var_144_1
            v4_6.d = *arg4
            v7_3.d = var_120_1.d
            v2_9.d = var_130_2.d f* v16_1.d
            v3_4.d = v1_6.d f* v16_1.d
            v2_9.d = v6_3.d f+ v2_9.d
            v3_4.d = entry_v11.d f+ v3_4.d
            v6_3 = v7_1
            v1_8.d = v3_4.d f* v1_8.d
            entry_v8.d = v5_6.d f+ v1_8.d
            v1_8.d = float.s(v4_6.d)
            v1_8.d = v2_9.d f* v1_8.d
            v2_9.d = v0_6.d f+ v1_8.d
            entry_v9.d = v6_3:4.d
            x20_2 = *(x20_1 + 0xc8)
            x8_8 = *x20_2
            
            if (x8_8 == 0)
                goto label_1052964
        else
            v4_6.d = *arg6
            v0_6.d = var_c0.d
            v1_8.d = var_c0:4.d
            v2_9.d = var_b8_1.d
            v3_4.d = var_b8_1:4.d
            v4_6:4.d = *(x20_1 + 0xac)
            int128_t var_f0_1
            var_f0_1.d = entry_v11.d
            int32_t var_190_2 = v14.d
            int32_t var_18c_2 = v15.d
            entry_v11 = vcvt_f32_s32(v4_6)
            var_188_1.q = entry_v11.q
            int128_t v0_7
            int128_t v1_9
            int128_t v3_5
            v0_7, v1_9, v3_5 = CalcSpacing(arg1, x1_4, x2_3, x3_2, x4_2)
            v3_5.q = *V21
            int128_t v2_10
            v2_10:4.d = v1_9.d
            int128_t v0_9 = vmul_f32(v2_10, vsub_f32(entry_v11, v3_5), 0)
            int128_t v0_10 = vadd_f32(vmul_f32(v4_2, entry_v11, 0), v0_9)
            int128_t v1_11 = vdiv_f32(entry_v13, v0_10)
            v2_10.d = v1_11:4.d
            
            if (v1_11.d f< v2_10.d)
                v1_11.d = v1_11.d
            else
                v1_11.d = v2_10.d
            
            v0_10.d = v0_10.d f* v1_11.d
            v0_10:4.d = v0_10:4.d f* v1_11.d
            var_d0 = v0_10.q
            entry_v9.d = v4_2.d f* v1_11.d
            entry_v8.d = entry_v8.d f* v1_11.d
            int128_t v17_2
            arg1, v0_6, v1_8, v2_9, v3_4, v6_3, v7_3, v17_2 =
                RectAlignedWithinRect(&var_c0, &var_d0, zx.q(*(x20_1 + 0xd0)))
            v1_8.d = var_130_2.d f* var_110_2.d
            v1_8.d = var_144_1 f+ v1_8.d
            v2_9.d = v1_6.d f* var_110_2.d
            v3_4.d = 0f
            v6_3.d = v0_7.d f* v1_11.d
            v1_8.d = v1_8.d f* v3_4.d
            v7_3.d = v1_9.d f* v1_11.d
            v2_9.d = var_f0_1.d f+ v2_9.d
            v6_3.d = entry_v9.d f+ v6_3.d
            v0_6.d = v1_8.d f+ v0_6.d
            v1_8.d = float.s(*(arg4 + 4))
            v7_3.d = entry_v8.d f+ v7_3.d
            v1_8.d = v2_9.d f* v1_8.d
            v2_9.d = v6_3.d f* float.s(*arg4)
            v6_3 = v7_1
            v3_4.d = v7_3.d f* v3_4.d
            v7_3.d = var_120_1.d
            v1_8.d = v5_6.d f+ v1_8.d
            v2_9.d = v0_6.d f+ v2_9.d
            entry_v8.d = v3_4.d f+ v1_8.d
            entry_v9.d = v6_3:4.d
            v16_1 = v1_11
            x20_2 = *(x20_1 + 0xc8)
            x8_8 = *x20_2
            
            if (x8_8 == 0)
                goto label_1052964
    else
        v3_4.q = *arg4
        v0_6:4.d = v1_6.d
        int128_t v2_7 = vmul_f32(v4_2, v4_5, 0)
        v1_6.d = v4_5.d f/ v16_1.d
        v4_5.d = fconvert.s(-1f)
        float v17_1 = v5_5.d f/ v16_1.d
        v5_5.d = v0_6.d f* v16_1.d
        v5_5:4.d = v0_6:4.d f* v16_1.d
        v6_3.d = v1_6.d f+ v4_5.d
        v2_9 = vadd_f32(v2_2, vmul_f32(vadd_f32(v2_7, v5_5), vcvt_f32_s32(v3_4), 0))
        entry_v9.d = v17_1 f+ v4_5.d
        entry_v8.d = v2_9:4.d
        entry_v12 = v2_9
        x20_2 = *(x20_1 + 0xc8)
        x8_8 = *x20_2
        
        if (x8_8 == 0)
        label_1052964:
            int128_t var_e0_2 = v2_9
            int128_t var_110_3 = v16_1
            int128_t var_100_2 = v6_3
            
            if (x20_2[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            arg1, v0_6, v1_8, v2_9, v3_4, v6_3, v16_1 = AssetCatalogLoadAsset(x20_2, false, true)
            x8_8 = *x20_2
            v16_1 = var_110_3
            v6_3 = var_100_2
            v2_9 = var_e0_2
    void* x8_11 = *x8_8
    var_d0.o = *(x8_11 + 0xc)
    v0_6 = *(x8_11 + 0xc)
    v1_8 = *RECT0
    *entry_x8 = v2_9.d
    entry_x8[1] = entry_v8.d
    v2_9 = var_d0.o
    var_b0 = v0_6
    v0_6 = var_b0
    v3_4 = var_b0
    entry_x8[2] = v7_3.d
    entry_x8[3] = v16_1.d
    entry_x8[4] = v6_3.d
    entry_x8[5] = entry_v9.d
    *(entry_x8 + 0x18) = entry_v12.q
    *(entry_x8 + 0x3c) = v1_8
    *(entry_x8 + 0x4c) = v2_9
    *(entry_x8 + 0x2c) = v0_6
    *(entry_x8 + 0x20) = v3_4
    entry_x8[0x17] = x23_1
entry_v9.q = var_60
entry_v8.q = var_58
entry_v11.q = var_70
entry_v10.q = var_68
entry_v13.q = var_80
entry_v12.q = var_78
