// 函数: _Z17UI2TableTransformR3UI2iR5RectFS2_b
// 地址: 0x101cde8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_a0 = entry_v15.q
int64_t v14
int64_t var_98 = v14
int128_t entry_v13
int64_t var_90 = entry_v13.q
int64_t v12
int64_t var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
int32_t var_c0
XString::XString(&var_c0)
XString::operator==(arg1 + 0x1650)
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = XString::~XString()
int64_t* x24_1 = *(arg1 + 0x1520)
float* entry_x8
int64_t v2_1
int128_t v3_1

if (x24_1 == 0)
    int64_t* x24_2 = *(arg1 + 0x1688)
    int64_t* x8_2 = *x24_2
    
    if (x8_2 == 0)
        if (x24_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        result, v0, v1 = AssetCatalogLoadAsset(x24_2, false, true)
        x8_2 = *x24_2
    
    uint64_t x8_4 = sx.q(*(arg1 + 0x1690))
    
    if (*(**x8_2 + x8_4 * 0x18 + 0x10) != 0)
        int64_t* x24_3 = *(arg1 + 0x1688)
        int64_t* x9_6 = *x24_3
        
        if (x9_6 == 0)
            if (x24_3[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x24_3, false, true)
            x9_6 = *x24_3
            x8_4 = zx.q(*(arg1 + 0x1690))
        
        v0, v1, v2_1, v3_1 = UI2SubBoundaryItem(**x9_6 + muls.dp.d(x8_4.d, 0x18) + 0x18, 
            *(arg1 + 0x1768), *(arg1 + 0x1770))
        goto label_101cff8
    
    *arg3 = *RECT1
    *arg4 = *RECT1
    v0 = *(TI + 0x10)
    *entry_x8 = *TI
    *(entry_x8 + 0x10) = v0
else
    if ((arg5.d & 1) == 0)
        int32_t x25_1 = *(arg1 + 0x17a0)
        int32_t x26_1 = *(arg1 + 0x1770)
        
        if (x25_1 == 0)
            if (x26_1 == 0)
                goto label_101ce64
            
            AttribMap*** x8_9 = *x24_1
            UI2State* x25_2 = *(arg1 + 0x1768)
            
            if (x8_9 == 0)
                if (x24_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                v0, v1 = AssetCatalogLoadAsset(x24_1, false, true)
                x8_9 = *x24_1
            
            AttribMap** x8_11 = *x8_9
            
            if (x8_11[1].d == 0)
                goto label_101d0d8
            
            v0, v1, v2_1, v3_1 = UI2SubBoundaryItem(*x8_11, x25_2, x26_1)
            goto label_101cff8
        
        if (x26_1 == 0)
            AttribMap*** x8_12 = *x24_1
            UI2State* x26_2 = *(arg1 + 0x1798)
            
            if (x8_12 == 0)
                if (x24_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                v0, v1 = AssetCatalogLoadAsset(x24_1, false, true)
                x8_12 = *x24_1
            
            AttribMap** x8_14 = *x8_12
            
            if (x8_14[1].d == 0)
                goto label_101d0d8
            
            v0, v1, v2_1, v3_1 = UI2SubBoundaryItem(*x8_14, x26_2, x25_1)
            goto label_101cff8
        
        v0, v1, v2_1, v3_1 =
            UI2SubBoundaryIntMore(x24_1, *(arg1 + 0x1768), x26_1, *(arg1 + 0x1798), x25_1)
    label_101cff8:
        entry_v8 = v0
        v14 = v1.q
        v10 = v2_1
        entry_v13 = v3_1
    else
    label_101ce64:
        int64_t* x8 = *x24_1
        int64_t* x8_1
        
        if (x8 == 0)
            if (x24_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            v0, v1 = AssetCatalogLoadAsset(x24_1, false, true)
            x8_1 = **x24_1
            
            if (x8_1[1].d == 0)
                goto label_101d0d8
            
            goto label_101cfe8
        
        x8_1 = *x8
        
        if (x8_1[1].d != 0)
        label_101cfe8:
            v0, v1, v2_1, v3_1 = UI2SubBoundaryItem(*x8_1, nullptr, 0)
            goto label_101cff8
        
    label_101d0d8:
        entry_v8.d = *RECT1
        v14.d = *(RECT1 + 4)
        v10.d = *(RECT1 + 8)
        entry_v13.d = *(RECT1 + 0xc)
    
    *(arg1 + 0x13b0) = entry_v8.d
    *(arg1 + 0x13b4) = v14.d
    *(arg1 + 0x13b8) = v10.d
    *(arg1 + 0x13bc) = entry_v13.d
    *arg3 = entry_v8.d
    *(arg3 + 4) = v14.d
    *(arg3 + 8) = v10.d
    *(arg3 + 0xc) = entry_v13.d
    int32_t x8_15 = *(arg1 + 0x1504)
    v1.d = 1
    v1:4.d = 1
    int32_t var_a4 = x8_15
    v0.q = *(arg1 + 0x14fc)
    int32_t* x24_4
    
    x24_4 = x8_15 == 0 ? nullptr : &var_a4
    
    uint64_t var_b0 = vmax_s32(v0, v1)
    int64_t x0_20
    int64_t x1_9
    int64_t x2_3
    int64_t x3_2
    int64_t x4_2
    int64_t x5_1
    int128_t v3_2
    x0_20, x1_9, x2_3, x3_2, x4_2, x5_1, v3_2 =
        TableIndextToSlot(&var_b0, x24_4, zx.q(*(arg1 + 0x151c)), arg2, *(arg1 + 0x1540))
    int32_t v6_1 = *(arg1 + 0x150c)
    float v7_1 = *(arg1 + 0x1510)
    float v4_1 = *(arg1 + 0x1514)
    float v5_1 = *(arg1 + 0x1518)
    v3_2.d = *(arg1 + 0x175c)
    entry_v11.d = *(arg1 + 0x1760)
    int32_t x25_3 = *(arg1 + 0x143c)
    float v0_2 = *V20
    entry_v15.d = *(V20 + 4)
    float v2_2 = fconvert.s(1f)
    entry_v8.d = v10.d f- entry_v8.d
    float v1_1 = float.s(var_b0:4.d)
    entry_v13.d = entry_v13.d f- v14.d
    int32_t x23_1 = x0_20.d
    uint32_t x28_1 = (x0_20 u>> 0x20).d
    v10.d = vmaxnm_f32(float.s(var_b0.d), v2_2)
    v12.d = vmaxnm_f32(v1_1, v2_2)
    v14 = v3_2.q
    float var_130_1 = v4_1
    float var_12c_1 = v5_1
    entry_v9.d = fconvert.s(1f)
    int32_t var_128_1 = v10.d
    int32_t var_124_1 = v12.d
    float var_d4_1 = v7_1
    float v0_3
    float v1_3
    int128_t v2_4
    int128_t v5_3
    int128_t v6_2
    int128_t v17_1
    result, v0_3, v1_3, v2_4, v5_3, v6_2, v17_1 =
        UI2CalcSpacing(zx.q(x25_3), x1_9, x2_3, x3_2, x4_2, x5_1, v0_2)
    float v16_2 = v10.d
    float v7_2 = entry_v13.d f* v12.d
    v2_4.d = *(V21 + 4)
    v2_4.d = v12.d f- v2_4.d
    float v3_4 = v0_3 * (v10.d f- *V21)
    float v4_3 = v1_3 f* v2_4.d
    int128_t v18_1
    
    if (x25_3 == 0xd)
        v5_3.d = v14.d f/ entry_v8.d
        v6_2.d = entry_v11.d f/ entry_v13.d
        v17_1 = entry_v13
        v10 = entry_v8.q
        v18_1 = entry_v8
    label_101d204:
        
        if (v5_3.d f< v6_2.d)
            entry_v9.d = v5_3.d
            goto label_101d218
        
        entry_v9.d = v6_2.d
        goto label_101d218
    
    if (x25_3 u> 0xe)
    label_101d7f8:
        pthread_kill(pthread_self(), 6)
        int64_t* x0_26 = XNoReturn()
        XString::~XString()
        sub_1101e04(x0_26)
        noreturn
    
    v2_4.d = entry_v8.d f* v16_2
    v10.d = v2_4.d f+ v3_4
    v17_1.d = v7_2 + v4_3
    v5_3.d = v14.d f/ v10.d
    v18_1 = entry_v8
    v6_2.d = entry_v11.d f/ v17_1.d
    v2_4 = v5_3
    float var_110_1
    float var_10c_1
    int32_t var_108_1
    int32_t var_104_1
    float var_100_1
    float var_fc_1
    float var_f0_1
    float var_ec_1
    float var_e8_1
    float var_e4_1
    float var_e0_1
    float var_cc_2
    float v28_1
    float v29_1
    float v30_1
    float v31_1
    
    switch (x25_3)
        case 0, 9
            goto label_101d204
        case 1, 0xe
            goto label_101d218
        case 2, 3, 5, 6, 7, 8
            goto label_101d7f8
        case 4, 0xb
            entry_v9 = v6_2
        label_101d218:
            v31_1 = *(TI + 4)
            v30_1 = *(TI + 8)
            v29_1 = *(TI + 0xc)
            v28_1 = *(TI + 0x10)
            
            if (x25_3 != 4)
                entry_v8 = v17_1
                var_10c_1 = v7_2
                var_108_1 = v6_2.d
                var_104_1 = v5_3.d
                var_100_1 = v14.d
                var_fc_1 = v16_2
                var_110_1 = entry_v11.d
                var_f0_1 = v0_3
                var_ec_1 = v1_3
                var_e8_1 = v28_1
                var_e4_1 = v31_1
                var_e0_1 = v29_1
                var_cc_2 = v30_1
                goto label_101d328
            
            v6_2.d = v14.d f- v3_4
            v7_2 = (entry_v11.d f- v4_3) f/ v12.d
            v2_4.d = v0_3 f* entry_v9.d
            v5_3.d = float.s(x28_1)
            v6_2.d = v6_2.d f/ v16_2
            v0_3 = v6_2.d f+ v2_4.d
            v2_4.d = (v7_2 + v1_3 f* entry_v9.d) f* v5_3.d
            v1_3 = v0_2 + v0_3 * float.s(x23_1)
            v0_3 = entry_v15.d f+ v2_4.d
            v2_4.d = v6_2.d f+ v1_3
            v3_4 = v7_2 + v0_3
        case 0xa
            if (v5_3.d f> v6_2.d)
                v2_4.d = v5_3.d
            else
                v2_4.d = v6_2.d
            
            goto label_101d2e4
        case 0xc
        label_101d2e4:
            var_10c_1 = v7_2
            var_108_1 = v6_2.d
            var_104_1 = v5_3.d
            var_100_1 = v14.d
            var_fc_1 = v16_2
            var_110_1 = entry_v11.d
            var_f0_1 = v0_3
            var_ec_1 = v1_3
            entry_v8 = v17_1
            entry_v9 = v2_4
            var_cc_2 = *(TI + 8)
            var_e4_1 = *(TI + 4)
            var_e0_1 = *(TI + 0xc)
            var_e8_1 = *(TI + 0x10)
        label_101d328:
            entry_v11 = v18_1
            float var_f8_1 = v18_1.d f* entry_v9.d
            float var_f4_1 = entry_v13.d f* entry_v9.d
            int64_t x1_10
            int64_t x2_4
            int64_t x3_3
            int64_t x4_3
            int64_t x5_2
            result, x1_10, x2_4, x3_3, x4_3, x5_2, v0_3, v1_3, v2_4, v5_3, v6_2, v17_1, v18_1 =
                UI2PropDynamic<Vec2>::Eval(GameGetTimeSimulation())
            v14.d = *V20
            entry_v15.d = *(V20 + 4)
            v2_4.d = *(arg1 + 0x175c)
            v5_3.d = entry_v9.d f* v10.d
            v6_2.d = entry_v9.d f* entry_v8.d
            v3_4 = *(arg1 + 0x1760)
            v4_3 = 0f
            v5_3.d = v5_3.d f* v0_3
            v6_2.d = v6_2.d f* v1_3
            v5_3.d = v5_3.d f+ v4_3
            v6_2.d = v6_2.d f+ v4_3
            v17_1.d = float.s(x28_1)
            int32_t x8_17 = *(arg1 + 0x151c)
            v4_3 = entry_v15.d f+ v1_3 * (v3_4 f- entry_v15.d)
            v1_3 = v14.d f+ v0_3 * (v2_4.d f- v14.d) f- v5_3.d
            v0_3 = v4_3 f- v6_2.d
            
            if (v12.d f+ fconvert.s(-1f) f!= v17_1.d || x8_17 != 0)
                entry_v8.d = var_fc_1
                
                if (x28_1 == 0)
                    if (var_a4 != 0 && x8_17 == 1)
                        goto label_101d3d4
                    
                    if (x8_17 != 1 || zx.d(*(arg1 + 0x1508)) == 0)
                        goto label_101d564
                    
                    goto label_101d504
                
            label_101d564:
                int32_t x9_14 = *(arg1 + 0x1538)
                uint32_t temp0_5 = vcvts_s32_f32(entry_v8.d)
                
                if (x9_14 s/ temp0_5 * temp0_5 s> arg2 || zx.d(*(arg1 + 0x1508)) == 0)
                    v2_4.d = var_f0_1
                    v6_2.d = var_f8_1
                    v5_3.d = var_f4_1
                    v2_4.d = v2_4.d f* entry_v9.d
                    v2_4.d = v6_2.d f+ v2_4.d
                    v2_4.d = v2_4.d f* float.s(x23_1)
                    v1_3 = v2_4.d f+ v1_3
                    v0_3 = (v5_3.d f+ var_ec_1 f* entry_v9.d) f* v17_1.d + v0_3
                    v2_4.d = v6_2.d f+ v1_3
                    v3_4 = v5_3.d f+ v0_3
                else
                    v2_4.d = var_f0_1
                    v2_4.d = v2_4.d f* entry_v9.d
                    v5_3.d = float.s(x23_1)
                    v2_4.d = var_f8_1 f+ v2_4.d
                    v6_2.d = float.s(temp0_5 - x9_14 s% temp0_5)
                    v5_3.d = v2_4.d f* v5_3.d
                    v2_4.d = v2_4.d f* v6_2.d
                    v2_4.d = v2_4.d f* fconvert.s(0.5f)
                    v0_3 = (var_f4_1 + var_ec_1 f* entry_v9.d) f* v17_1.d + v0_3
                    v1_3 = v5_3.d f+ v1_3 f+ v2_4.d
                    v2_4.d = var_f8_1 + v1_3
                    v3_4 = var_f4_1 + v0_3
            else
                entry_v8.d = var_fc_1
                
                if (var_a4 != 0)
                label_101d3d4:
                    v6_2.d = v6_1
                    entry_v8.d = float.s(*x24_4)
                    int32_t var_128_2 = entry_v8.d
                    int32_t var_124_2 = v12.d
                    float var_130_2 = v4_1
                    float var_12c_2 = v5_1
                    v10 = entry_v11.q
                    int32_t var_d0_2 = v17_1.d
                    int64_t v0_6
                    int64_t v1_5
                    v0_6, v1_5 =
                        UI2CalcSpacing(zx.q(*(arg1 + 0x143c)), x1_10, x2_4, x3_3, x4_3, x5_2, v14.d)
                    float v3_5 = *V21
                    float v4_5 = *(V21 + 4)
                    var_c0 = v14.d
                    int32_t var_bc_1 = entry_v15.d
                    v14 = v1_5
                    v4_5 = v12.d f- v4_5
                    v12 = v0_6
                    v0_6.d = v10.d f* entry_v8.d + v0_6.d f* (entry_v8.d f- v3_5)
                    v1_5.d = var_10c_1 + v1_5.d f* v4_5
                    v3_5 = var_110_1 f/ v1_5.d
                    int32_t var_b8_1 = v2_4.d
                    float var_b4_1 = v3_4
                    float v2_5 = var_100_1 f/ v0_6.d
                    
                    if (v2_5 < v3_5)
                        entry_v8.d = v2_5
                    else
                        entry_v8.d = v3_5
                    
                    v0_6.d = v0_6.d f* entry_v8.d
                    v1_5.d = v1_5.d f* entry_v8.d
                    int32_t var_c8 = v0_6.d
                    int32_t var_c4_1 = v1_5.d
                    entry_v11 = entry_v9
                    entry_v9.d = v10.d f* entry_v8.d
                    v10.d = entry_v13.d f* entry_v8.d
                    result, v0_3, v1_3, v2_4, v5_3, v6_2, v17_1, v18_1 =
                        RectAlignedWithinRect(&var_c0, &var_c8, zx.q(*(arg1 + 0x1444)))
                    v5_3.d = var_104_1
                    v2_4.d = var_f0_1
                    v17_1.d = var_f8_1
                    v18_1.d = var_d0_2
                    v0_3 = v5_3.d f* v0_3
                    v5_3.d = var_108_1
                    v2_4.d = v2_4.d f* entry_v11.d
                    v4_3 = 0f
                    v6_2.d = v12.d f* entry_v8.d
                    v2_4.d = v17_1.d f+ v2_4.d
                    v1_3 = v5_3.d f* v1_3
                    v5_3.d = float.s(x23_1)
                    v6_2.d = entry_v9.d f+ v6_2.d
                    v2_4.d = v2_4.d f* v4_3
                    v5_3.d = v6_2.d f* v5_3.d
                    v0_3 = v2_4.d f+ v0_3
                    v2_4.d = (var_f4_1 + var_ec_1 f* entry_v11.d) f* v18_1.d + v1_3
                    v1_3 = v5_3.d f+ v0_3
                    v0_3 = (v10.d f+ v14.d f* entry_v8.d) * v4_3 f+ v2_4.d
                    v2_4.d = v17_1.d f+ v1_3
                    v3_4 = var_f4_1 + v0_3
                    entry_v9 = entry_v8
                else
                    if (zx.d(*(arg1 + 0x1508)) == 0)
                        goto label_101d564
                    
                label_101d504:
                    v2_4.d = var_f0_1
                    v6_2.d = var_f4_1
                    v2_4.d = v2_4.d f* entry_v9.d
                    v5_3.d = float.s(x23_1)
                    v2_4.d = var_f8_1 f+ v2_4.d
                    v0_3 = (v6_2.d f+ var_ec_1 f* entry_v9.d) f* v17_1.d + v0_3
                    v5_3.d = v2_4.d f* v5_3.d
                    v2_4.d = v2_4.d f* float.s(neg.d(*(arg1 + 0x1538))
                        + vcvts_s32_f32(v12.d) * vcvts_s32_f32(entry_v8.d))
                    v2_4.d = v2_4.d f* fconvert.s(0.5f)
                    v1_3 = v5_3.d f+ v1_3 f+ v2_4.d
                    v2_4.d = var_f8_1 + v1_3
                    v3_4 = v6_2.d f+ v0_3
            
            v30_1 = var_cc_2
            v31_1 = var_e4_1
            v29_1 = var_e0_1
            v28_1 = var_e8_1
    
    *arg4 = v1_3
    *(arg4 + 4) = v0_3
    *(arg4 + 8) = v2_4.d
    *(arg4 + 0xc) = v3_4
    v5_3.d = *(arg1 + 0x16c0)
    v2_4.d = *(arg1 + 0x16b4)
    v4_3 = *(arg1 + 0x16b8)
    v3_4 = *(arg1 + 0x16bc)
    v6_2.d = *(arg1 + 0x13a8)
    v17_1.d = v5_3.d f* v5_3.d
    v18_1.d = v2_4.d f* v2_4.d
    float v19_1 = v2_4.d f* v4_3
    float v20_1 = v5_3.d f* v3_4
    float v21_1 = v5_3.d f* v4_3
    float v22_1 = v2_4.d f* v3_4
    float v23_1 = v4_3 * v3_4
    float v24_1 = v5_3.d f* v2_4.d
    v7_2 = v19_1 - v20_1
    v19_1 = v19_1 + v20_1
    v20_1 = v17_1.d f+ v18_1.d
    v17_1.d = v17_1.d f- v18_1.d
    v18_1.d = v21_1 + v22_1
    v21_1 = v22_1 - v21_1
    v22_1 = v23_1 - v24_1
    v23_1 = v24_1 + v23_1
    float v25_1 = v28_1 f* v5_3.d - v31_1 f* v2_4.d
    v24_1 = v31_1 f* v5_3.d + v28_1 f* v2_4.d
    float v26_1 = v30_1 f* v5_3.d + v28_1 * v4_3
    float v27_1 = *(arg1 + 0x13ac)
    v5_3.d = v29_1 f* v5_3.d
    int32_t x8_25 = v6_2.d f!= *V20 ? 1 : 0
    bool cond:5_1 = v27_1 != *(V20 + 4)
    v16_2 = v1_3 + v1_3
    v5_3.d = v5_3.d f+ v28_1 * v3_4
    v28_1 = v0_3 + v0_3
    v19_1 = v16_2 * v19_1
    v16_2 = v16_2 * v21_1
    v21_1 = v4_3 * v4_3
    v20_1 = v20_1 - v21_1
    v7_2 = v28_1 * v7_2
    v23_1 = v28_1 * v23_1
    v28_1 = v17_1.d f+ v21_1
    v17_1.d = v17_1.d f- v21_1
    v21_1 = v25_1 - v30_1 * v4_3
    v24_1 = v24_1 + v29_1 * v4_3
    v25_1 = v31_1 * v3_4 + v26_1
    v26_1 = v30_1 f* v2_4.d
    v2_4.d = v29_1 f* v2_4.d
    v29_1 = v29_1 * v3_4
    v30_1 = v30_1 * v3_4
    v3_4 = v3_4 * v3_4
    v16_2 = v16_2 + v23_1
    v23_1 = *(arg1 + 0x16b0)
    v20_1 = v20_1 - v3_4
    v28_1 = v28_1 - v3_4
    v5_3.d = v26_1 f+ v5_3.d
    v26_1 = 0f
    v3_4 = v17_1.d f+ v3_4
    v17_1.d = *(arg1 + 0x16c4)
    v21_1 = v21_1 - v29_1
    v29_1 = *(arg1 + 0x16c8)
    v24_1 = v24_1 - v30_1
    v30_1 = *(arg1 + 0x16cc)
    v18_1.d = v18_1.d f* v26_1
    v2_4.d = v25_1 f- v2_4.d
    entry_x8[2] = v2_4.d
    entry_x8[3] = v5_3.d f- v31_1 * v4_3
    v2_4.d = v3_4 * v26_1 + v16_2
    v2_4.d = v23_1 f* v2_4.d
    int32_t x8_26 = x8_25 | (cond:5_1 ? 1 : 0)
    v2_4.d = v30_1 f+ v2_4.d
    v1_3 = v17_1.d f+ v23_1 * (v18_1.d f+ v1_3 * v20_1 + v7_2)
    v0_3 = v29_1 + v23_1 * (v22_1 * v26_1 + v19_1 + v0_3 * v28_1)
    v5_3.d = v27_1 + v0_3
    
    if (x8_26 != 0)
        v2_4.d = v2_4.d f+ v26_1
    else
        v2_4.d = v2_4.d
    
    if (x8_26 != 0)
        v0_3 = v5_3.d
    
    if (x8_26 != 0)
        v1_3 = v6_2.d f+ v1_3
    
    *entry_x8 = entry_v9.d f* v23_1
    entry_x8[1] = v24_1
    entry_x8[4] = v21_1
    entry_x8[5] = v1_3
    entry_x8[6] = v0_3
    entry_x8[7] = v2_4.d
entry_v9.q = var_70
entry_v8.q = var_68
entry_v11.q = var_80
entry_v13.q = var_90
entry_v15.q = var_a0
return result
