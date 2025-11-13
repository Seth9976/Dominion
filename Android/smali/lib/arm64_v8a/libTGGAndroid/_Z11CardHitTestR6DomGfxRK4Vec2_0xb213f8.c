// 函数: _Z11CardHitTestR6DomGfxRK4Vec2
// 地址: 0xb213f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_50 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int128_t entry_v8
int64_t var_28 = entry_v8.q
int64_t result

if (*(arg1 + 0x2148) == 0)
labelid_1:
    result = 0
else if (*(arg1 + 0x2c) == 0)
    if ((zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb)) & 0x44444444) == 0)
        goto label_b21434
    
    if (*(arg1 + 0x1f78) == 0)
        if (*(arg1 + 0x3b0) == 1 && *(arg1 + 0x3b8) == 0x21)
            goto label_b21434
    else if ((*(arg1 + 0x308) == 1 && *(arg1 + 0x310) == 0x21)
            || (*(arg1 + 0x478) == 1 && *(arg1 + 0x480) == 0x21))
        goto label_b21434
    
    if (*(arg1 + 0x2c) == 3 || *(arg1 + 0xa4) == 0x3f1)
        result = UI2GetHandle(zx.q(*(arg1 + 0x2148)), "btn_icon")
        
        if (result.d != 0)
            goto label_b21444
    else
    labelid_1:
        result = 0
else
label_b21434:
    result = UI2GetHandle(zx.q(*(arg1 + 0x2148)), "itemCard")
    
    if (result.d != 0)
    label_b21444:
        UI2GetTransform(result)
        int128_t v0_1
        int128_t v1_1
        int128_t v3_1
        int128_t v4_1
        int128_t v27_1
        v0_1, v1_1, v3_1, v4_1, v27_1 = UI2GetSize(zx.q(result.d))
        int32_t x8_2 = *(arg1 + 0x2c)
        int128_t v2_1
        v2_1:4.d = v1_1.d
        v27_1.q = *V20
        entry_v8.d = v27_1:4.d
        int128_t var_90
        int128_t var_80
        float var_70
        int32_t var_6c
        int32_t var_68
        float var_64
        float var_60
        float var_5c
        float var_58
        float v6_1
        float v17_1
        float v18_1
        float v19_1
        float v20_1
        float v21_1
        float v22_1
        float v23_1
        float v24_1
        
        if (x8_2 != 3)
        label_b21658:
            v0_1 = v2_1
            v1_1.d = v2_1:4.d
            
            if (x8_2 != 0)
                goto label_b2166c
            
            int32_t x8_15 = *(arg1 + 0xa0)
            int32_t i_1 = *(gDomClient + 0x38)
            int32_t i
            
            i = i_1 == 0xffffffff ? 0 : i_1
            
            if (x8_15 == i && *(arg1 + 0x1f78) == 0 && *(arg1 + 0x3b0) == 1
                    && (*(arg1 + 0x3b8) & 0xfffffffe) == 6)
                v2_1.d = float.s(0x461c4000)
                v2_1.d = v1_1.d f+ v2_1.d
                
                if (*(arg1 + 0x3bc) == 0x3ea)
                    v1_1.d = v2_1.d
                else
                    v1_1.d = v1_1.d
            
            int32_t x10_6 = *(arg1 + 0xa4)
            
            if (x10_6 == 0x3ea)
                if (*(arg1 + 0x1f78) != 0 && *(arg1 + 0x520) != 3)
                    goto label_b2166c
                
            label_b218e0:
                
                if (x8_15 != i)
                labelid_1:
                    result = 0
                else
                    v2_1.d = var_70
                    v3_1.d = var_6c
                    v4_1.d = var_68
                    v1_1.d = 0f
                    v20_1 = v3_1.d f* v3_1.d
                    v19_1 = var_60 * var_60
                    v17_1 = v27_1.d f* v2_1.d
                    v18_1 = entry_v8.d f* v2_1.d
                    v1_1.d = v2_1.d f* v1_1.d
                    v21_1 = v4_1.d f* v4_1.d
                    v23_1 = v3_1.d f* v4_1.d
                    v24_1 = var_60 * var_64
                    float v25_1 = var_60 f* v4_1.d
                    float v26_1 = v3_1.d f* var_64
                    v4_1.d = v4_1.d f* var_64
                    v3_1.d = var_60 f* v3_1.d
                    v0_1.d = v0_1.d f* v2_1.d
                    v2_1.d = v19_1 + v20_1
                    v22_1 = var_64 * var_64
                    v6_1 = v23_1 - v24_1
                    v1_1.d = v1_1.d f+ v1_1.d
                    v23_1 = v23_1 + v24_1
                    v3_1.d = v4_1.d f- v3_1.d
                    v4_1.d = v0_1.d f+ v0_1.d
                    v2_1.d = v2_1.d f- v21_1
                    float v5_1 = (v18_1 + v18_1) * v6_1
                    v6_1 = v1_1.d f* (v25_1 + v26_1)
                    v1_1.d = v1_1.d f* v3_1.d
                    v3_1.d = v4_1.d f* v23_1
                    v2_1.d = v2_1.d f- v22_1
                    v4_1.d = v19_1 - v20_1 + v21_1 - v22_1
                    v4_1.d = v18_1 f* v4_1.d
                    v0_1.d = v0_1.d f* v2_1.d
                    v2_1.d = v17_1 f* v2_1.d + v5_1
                    v0_1.d = v0_1.d f+ v5_1
                    v3_1.d = v3_1.d f+ v4_1.d
                    v2_1.d = v6_1 f+ v2_1.d
                    v4_1.d = v1_1.d f+ (v17_1 + v17_1) * v23_1 f+ v4_1.d
                    v0_1.d = v6_1 f+ v0_1.d
                    v1_1.d = v1_1.d f+ v3_1.d
                    v9.d = var_5c f+ v2_1.d
                    v11.d = var_58 f+ v4_1.d
                    v10.d = var_5c f+ v0_1.d
                    v12.d = var_58 f+ v1_1.d
                    int32_t x0_12 = NextCard(zx.q(*(arg1 + 0x21d0)), 1)
                    float v0_8
                    float v1_2
                    float v2_5
                    float v3_5
                    float v4_2
                    
                    if (x0_12 != 0)
                        int64_t x8_16 = *(gDomClient + 0x205e0)
                        uint64_t x9_1 = zx.q(x0_12) & 0xffff
                        void* x10_9 = x8_16 + mulu.dp.d(x9_1.d, 0x21d8)
                        
                        if (*(x10_9 + 0x1f78) == 0 || *(x10_9 + 0x520) == 3)
                            uint64_t x0_13 = zx.q(*(x8_16 + x9_1 * 0x21d8 + 0x2148))
                            
                            if (x0_13.d != 0)
                                UI2GetTransform(x0_13, "itemCard", 0)
                                v1_2 = var_90.d
                                v2_5 = var_90:4.d
                                float v5_2 = var_80.d
                                v3_5 = var_90:8.d
                                v4_2 = var_90:0xc.d
                                float v17_2 = entry_v8.d f* v1_2
                                float v16_2 = v27_1.d * v1_2
                                v0_8 = v1_2 * 0f
                                v1_2 = v5_2 * v5_2
                                float v18_2 = v2_5 * v2_5
                                float v19_2 = v3_5 * v3_5
                                float v20_2 = v4_2 * v4_2
                                float v21_2 = v2_5 * v3_5
                                float v22_2 = v5_2 * v4_2
                                float v23_2 = v5_2 * v3_5
                                v3_5 = v3_5 * v4_2
                                v0_8 = v0_8 + v0_8
                                v4_2 = v0_8 * (v23_2 + v2_5 * v4_2)
                                v0_8 = v0_8 * (v3_5 - v5_2 * v2_5)
                                    + (v16_2 + v16_2) * (v21_2 + v22_2)
                                    + v17_2 * (v1_2 - v18_2 + v19_2 - v20_2)
                                v1_2 = var_80:4.d + v4_2 + v16_2 * (v1_2 + v18_2 - v19_2 - v20_2)
                                    + (v17_2 + v17_2) * (v21_2 - v22_2)
                                v9.d f- v1_2
                                
                                if (v9.d f< v1_2)
                                    v10.d = v1_2
                                else
                                    v10.d = v10.d
                                
                                if (v9.d f< v1_2)
                                    v12.d = var_80:8.d + v0_8
                                else
                                    v12.d = v12.d
                    
                    v0_8 = *arg2
                    
                    if (v12.d f< v11.d)
                        v1_2 = v12.d
                    else
                        v1_2 = v11.d
                    
                    if (v9.d f< v10.d)
                        v2_5 = v9.d
                    else
                        v2_5 = v10.d
                    
                    if (v2_5 > v0_8)
                    labelid_1:
                        result = 0
                    else
                        v2_5 = *(arg2 + 4)
                        v3_5 = v11.d f+ float.s(0x461c4000)
                        v1_2 - v3_5
                        
                        v4_2 = v1_2 < v3_5 ? v3_5 : v1_2
                        
                        if (not(v1_2 < v3_5))
                            v1_2 = v3_5
                        
                        if (v9.d f< v10.d)
                            v3_5 = v10.d
                        else
                            v3_5 = v9.d
                        
                        if (v4_2 < v2_5 || v3_5 < v0_8 || not(v1_2 <= v2_5))
                        labelid_1:
                            result = 0
                        else
                            result = 1
            else if (x10_6 == 0x474)
            labelid_1:
                result = 0
            else
                if (x10_6 != 0x3eb)
                    goto label_b2166c
                
                uint64_t x12_1 = zx.q(*(gDomClient + 0x205e8))
                
                if (x12_1.d == 0)
                labelid_1:
                    result = 0
                else
                    void* x11_2 = *(gDomClient + 0x205e0)
                    int64_t x12_2 = x11_2 + x12_1 * 0x21d8
                    void* x13_1 = x11_2
                    
                    while (zx.d(*(x13_1 + 0x21d2)) == 0)
                        x13_1 += 0x21d8
                        result = 0
                        
                        if (x13_1 u>= x12_2)
                            goto label_b216f8
                    
                    if (x13_1 == 0xffffffff)
                    labelid_1:
                        result = 0
                    else
                        while (*(x13_1 + 0x2c) != 3 || *(x13_1 + 0x58) != i
                                || *(x13_1 + 0x5c) != 0x3eb || *(x13_1 + 0x60) != 0)
                            if (x13_1 == 0)
                                x13_1 = x11_2
                            else
                                x13_1 += 0x21d8
                            
                            if (x13_1 u>= x12_2)
                                goto label_b216ec_1
                            
                            while (zx.d(*(x13_1 + 0x21d2)) == 0)
                                x13_1 += 0x21d8
                                result = 0
                                
                                if (x13_1 u>= x12_2)
                                    goto label_b216f8
                            
                            result = 0
                            
                            if (x13_1 == 0xffffffff)
                                goto label_b216f8
                        
                        if (x13_1 != 0 && *(x13_1 + 0x21d0) == *(gDomClient + 0x1f8e4))
                            if (x10_6 != 0x3ea || (*(arg1 + 0x1f78) != 0 && *(arg1 + 0x520) != 3))
                                goto label_b2166c
                            
                            goto label_b218e0
                        
                    labelid_1:
                        result = 0
        else
            if (*(arg1 + 0x70) != 0 && *(arg1 + 0x38) != 0)
                uint64_t x0_2 = zx.q(*(arg1 + 0x214c))
                
                if (x0_2.d != 0)
                    int128_t var_b0_1 = v2_1
                    int128_t var_a0_1 = v27_1
                    int64_t x0_3
                    x0_3, v1_1, v2_1, v3_1, v4_1, v27_1 = UI2GetHandle(x0_2, "itemCard")
                    
                    if (x0_3.d == 0)
                        v2_1 = var_b0_1
                        v27_1 = var_a0_1
                    else
                        entry_v8.q = var_5c.q
                        int128_t v0_2
                        int128_t v3_2
                        v0_2, v1_1, v3_2, v4_1, v27_1 = UI2GetTransform(x0_3)
                        v27_1.q = *V20
                        var_70.o = var_90
                        var_60.o = var_80
                        v0_2.q = var_5c.q
                        v1_1.d = var_70
                        v3_1 = vsub_f32(var_b0_1, var_a0_1)
                        v1_1.d = fconvert.s(1f) f/ v1_1.d
                        int128_t v0_3
                        v0_3.d = vsub_f32(entry_v8, v0_2).d f* v1_1.d
                        v0_3:4.d = v0_3:4.d f* v1_1.d
                        v2_1 = vadd_f32(v3_1, v0_3)
                    
                    uint64_t x0_7 = zx.q(*(arg1 + 0x2150))
                    
                    if (x0_7.d != 0)
                        int128_t var_b0_2 = v2_1
                        int128_t var_a0_2 = v27_1
                        int64_t x0_8
                        x0_8, v1_1, v2_1, v3_1, v4_1, v27_1 = UI2GetHandle(x0_7, "itemCard")
                        
                        if (x0_8.d == 0)
                            v2_1 = var_b0_2
                            v27_1 = var_a0_2
                        else
                            entry_v8.q = var_5c.q
                            int128_t v0_4
                            int128_t v3_3
                            v0_4, v1_1, v3_3, v4_1, v27_1 = UI2GetTransform(x0_8)
                            v27_1.q = *V20
                            var_70.o = var_90
                            var_60.o = var_80
                            v0_4.q = var_5c.q
                            v1_1.d = var_70
                            v3_1 = vsub_f32(var_b0_2, var_a0_2)
                            v1_1.d = fconvert.s(1f) f/ v1_1.d
                            int128_t v0_5
                            v0_5.d = vsub_f32(entry_v8, v0_4).d f* v1_1.d
                            v0_5:4.d = v0_5:4.d f* v1_1.d
                            v2_1 = vadd_f32(v3_1, v0_5)
                        
                        uint64_t x0_9 = zx.q(*(arg1 + 0x2154))
                        
                        if (x0_9.d != 0)
                            int128_t var_b0_3 = v2_1
                            int128_t var_a0_3 = v27_1
                            int64_t x0_10
                            x0_10, v1_1, v2_1, v3_1, v4_1, v27_1 = UI2GetHandle(x0_9, "itemCard")
                            
                            if (x0_10.d == 0)
                                v2_1 = var_b0_3
                                v27_1 = var_a0_3
                            else
                                entry_v8.q = var_5c.q
                                int128_t v0_6
                                int128_t v3_4
                                v0_6, v1_1, v3_4, v4_1, v27_1 = UI2GetTransform(x0_10)
                                v27_1.q = *V20
                                var_70.o = var_90
                                var_60.o = var_80
                                v0_6.q = var_5c.q
                                v1_1.d = var_70
                                v3_1 = vsub_f32(var_b0_3, var_a0_3)
                                v1_1.d = fconvert.s(1f) f/ v1_1.d
                                int128_t v0_7
                                v0_7.d = vsub_f32(entry_v8, v0_6).d f* v1_1.d
                                v0_7:4.d = v0_7:4.d f* v1_1.d
                                v2_1 = vadd_f32(v3_1, v0_7)
                
                x8_2 = *(arg1 + 0x2c)
                entry_v8.d = v27_1:4.d
                goto label_b21658
            
        label_b2166c:
            v2_1.d = var_60
            v3_1.d = var_68
            v4_1.d = var_6c
            v17_1 = *arg2 - var_5c
            v6_1 = *(arg2 + 4) - var_58
            v22_1 = v4_1.d f* v3_1.d
            v24_1 = v2_1.d f* var_64
            float var_54
            v21_1 = 0f - var_54
            v18_1 = v2_1.d f* v2_1.d
            v19_1 = v4_1.d f* v4_1.d
            float v16_1 = v3_1.d f* v3_1.d
            float v7_1 = var_64 * var_64
            v21_1 = v21_1 + v21_1
            v23_1 = fconvert.s(1f) / var_70
            v20_1 = v23_1 * (v21_1 * (v4_1.d f* var_64 - v2_1.d f* v3_1.d)
                + v17_1 * (v18_1 + v19_1 - v16_1 - v7_1) + (v6_1 + v6_1) * (v22_1 + v24_1))
            
            if (v27_1.d f<= v20_1)
                v3_1.d = v3_1.d f* var_64
                v2_1.d = v2_1.d f* v4_1.d
                v2_1.d = v2_1.d f+ v3_1.d
                v3_1.d = v18_1 - v19_1 + v16_1 - v7_1
                v4_1.d = (v17_1 + v17_1) * (v22_1 - v24_1)
                v3_1.d = v6_1 f* v3_1.d
                v3_1.d = v4_1.d f+ v3_1.d
                v2_1.d = v21_1 f* v2_1.d
                v2_1.d = v2_1.d f+ v3_1.d
                v2_1.d = v23_1 f* v2_1.d
                
                if (v1_1.d f< v2_1.d || v0_1.d f< v20_1 || entry_v8.d f> v2_1.d)
                label_b216ec:
                    result = 0
                else
                    result = 1
            else
            label_b216ec_1:
                result = 0

label_b216f8:
entry_v8.q = var_28
return result
