// 函数: _Z18UI2TransformCorner4Vec2
// 地址: 0x102ff2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v11
int64_t var_50 = v11
int64_t v10
int64_t var_48 = v10
int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8

if (*(gUI2Editor + 0x704c) != 0)
    int64_t v0
    int64_t v1
    int64_t v2_1
    int64_t v3_1
    float v4_1
    float v5_1
    float v6_1
    float v7_1
    float v16_1
    float v17_1
    float v18_1
    float v19_1
    float v20_1
    float v21_1
    
    if (zx.d(*(gUI2Editor + 0x7056)) == 0)
    label_10300b0:
        v0, v1, v2_1, v3_1 = UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + 0x604c))))
        v10 = v0
        v11 = v1
        v12 = v2_1
        v13 = v3_1
        
        if (*(gUI2Editor + 0x704c) s>= 2)
            int64_t x21_1 = 0
            int64_t i
            
            do
                v0, v1, v2_1, v3_1 =
                    UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + (x21_1 << 2) + 0x6050))))
                
                if (v10.d f< v0.d)
                    v10.d = v10.d
                else
                    v10.d = v0.d
                
                if (v12.d f> v2_1.d)
                    v12.d = v12.d
                else
                    v12.d = v2_1.d
                
                i = x21_1 + 2
                
                if (v11.d f< v1.d)
                    v11.d = v11.d
                else
                    v11.d = v1.d
                
                x21_1 += 1
                
                if (v13.d f> v3_1.d)
                    v13.d = v13.d
                else
                    v13.d = v3_1.d
            while (i s< sx.q(*(gUI2Editor + 0x704c)))
    else if ((AppIsKeyDown(0) & 1) == 0)
        v0, v1, v2_1, v3_1 = UI2WorldRectCropped(UI2GetIndex(zx.q(*(gUI2Editor + 0x604c))))
        v10 = v0
        v11 = v1
        v12 = v2_1
        v13 = v3_1
    else
        if (zx.d(*(gUI2Editor + 0x7056)) == 0)
            goto label_10300b0
        
        if ((AppIsKeyDown(0) & 1) == 0)
            goto label_10300b0
        
        void* x0_3
        x0_3, v0, v1, v2_1, v3_1 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        v4_1 = *(x0_3 + 0x16c0)
        v5_1 = *(x0_3 + 0x16b4)
        v6_1 = *(x0_3 + 0x16b8)
        v7_1 = *(x0_3 + 0x16bc)
        v0.d = *(x0_3 + 0x175c)
        v1.d = *(x0_3 + 0x1760)
        v2_1.d = *(x0_3 + 0x16b0)
        v20_1 = v4_1 * v4_1
        v21_1 = v5_1 * v5_1
        v3_1.d = 0f
        float v22_1 = v6_1 * v6_1
        float v23_1 = v7_1 * v7_1
        float v24_1 = v5_1 * v6_1
        float v25_1 = v4_1 * v7_1
        float v26_1 = v4_1 * v6_1
        float v27_1 = v5_1 * v7_1
        v6_1 = v6_1 * v7_1
        v3_1.d = v2_1.d f* v3_1.d
        v4_1 = v4_1 * v5_1
        v0.d = v0.d f* v2_1.d
        v1.d = v1.d f* v2_1.d
        v5_1 = *V20 f* v2_1.d
        v2_1.d = *(V20 + 4) f* v2_1.d
        v16_1 = *(x0_3 + 0x16c4)
        v17_1 = *(x0_3 + 0x16c8)
        v18_1 = v24_1 - v25_1
        v3_1.d = v3_1.d f+ v3_1.d
        v24_1 = v24_1 + v25_1
        v7_1 = v20_1 + v21_1 - v22_1 - v23_1
        v20_1 = v20_1 - v21_1 + v22_1 - v23_1
        v19_1 = v3_1.d f* (v26_1 + v27_1)
        v3_1.d = v3_1.d f* (v6_1 - v4_1)
        v4_1 = (v1.d f+ v1.d) * v18_1
        v6_1 = (v0.d f+ v0.d) * v24_1
        v18_1 = (v2_1.d f+ v2_1.d) * v18_1
        v2_1.d = v2_1.d f* v20_1
        v0.d = v0.d f* v7_1
        v1.d = v1.d f* v20_1
        v2_1.d = (v5_1 + v5_1) * v24_1 f+ v2_1.d
        v0.d = v0.d f+ v4_1
        v1.d = v6_1 f+ v1.d
        v2_1.d = v3_1.d f+ v2_1.d
        v0.d = v19_1 f+ v0.d
        v1.d = v3_1.d f+ v1.d
        v10.d = v16_1 + v19_1 + v5_1 * v7_1 + v18_1
        v11.d = v17_1 f+ v2_1.d
        v12.d = v16_1 f+ v0.d
        v13.d = v17_1 f+ v1.d
    
    v3_1.d = v12.d f- v10.d
    v0.d = 0f
    v1.d = v3_1.d f* v0.d
    v5_1 = v13.d f- v11.d
    v1.d = v10.d f+ v1.d
    v4_1 = fconvert.s(-8f)
    v2_1.d = v5_1 f* v0.d
    v0.d = v1.d f+ v4_1
    v2_1.d = v11.d f+ v2_1.d
    int64_t entry_v0
    int64_t entry_v1
    
    if (v0.d f<= entry_v0.d)
        v6_1 = fconvert.s(8f)
        v7_1 = v1.d f+ v6_1
        
        if (not(v2_1.d f+ v6_1 f< entry_v1.d) && not(v7_1 f< entry_v0.d)
                && not(v2_1.d f+ v4_1 f> entry_v1.d))
            return 0
        
        v4_1 = v11.d f+ v5_1 * fconvert.s(0.5f)
        bool cond:6_1 = v4_1 + v6_1 f< entry_v1.d
        v6_1 = fconvert.s(-8f)
        
        if (not(cond:6_1) && not(v7_1 f< entry_v0.d) && not(v4_1 + v6_1 f> entry_v1.d))
            return 1
        
        v5_1 = v11.d f+ v5_1
        v7_1 = fconvert.s(8f)
        
        if (not(v5_1 + v7_1 f< entry_v1.d) && not(v1.d f+ v7_1 f< entry_v0.d)
                && not(v5_1 + v6_1 f> entry_v1.d))
            return 2
    else
        v4_1 = v11.d f+ v5_1 * fconvert.s(0.5f)
        v5_1 = v11.d f+ v5_1
    
    v6_1 = v10.d f+ v3_1.d f* fconvert.s(0.5f)
    v7_1 = fconvert.s(-8f)
    
    if (v6_1 + v7_1 f<= entry_v0.d)
        v16_1 = fconvert.s(8f)
        v6_1 = v6_1 + v16_1
        
        if (not(v2_1.d f+ v16_1 f< entry_v1.d) && not(v6_1 f< entry_v0.d)
                && not(v2_1.d f+ v7_1 f> entry_v1.d))
            return 3
        
        if (not(v5_1 + v16_1 f< entry_v1.d) && not(v6_1 f< entry_v0.d)
                && not(v5_1 + fconvert.s(-8f) f> entry_v1.d))
            return 4
    
    v6_1 = v10.d f+ v3_1.d
    v3_1.d = v6_1 + v7_1
    
    if (v3_1.d f<= entry_v0.d)
        v17_1 = fconvert.s(8f)
        v16_1 = v6_1 + v17_1
        v7_1 = fconvert.s(-8f)
        
        if (not(v2_1.d f+ v17_1 f< entry_v1.d) && not(v16_1 f< entry_v0.d)
                && not(v2_1.d f+ v7_1 f> entry_v1.d))
            return 5
        
        if (not(v4_1 + v17_1 f< entry_v1.d) && not(v16_1 f< entry_v0.d)
                && not(v4_1 + v7_1 f> entry_v1.d))
            return 6
        
        v16_1 = fconvert.s(8f)
        v7_1 = v5_1 + v16_1
        v4_1 = v5_1 + fconvert.s(-8f)
        
        if (not(v7_1 f< entry_v1.d) && not(v6_1 + v16_1 f< entry_v0.d) && not(v4_1 f> entry_v1.d))
            return 7
    else
        v4_1 = v5_1 + fconvert.s(-8f)
        v7_1 = v5_1 + fconvert.s(8f)
    
    v18_1 = fconvert.s(8f)
    v16_1 = v2_1.d f+ fconvert.s(-8f)
    v17_1 = v2_1.d f+ v18_1
    
    if (v16_1 < v4_1)
        v2_1.d = v16_1
    else
        v2_1.d = v4_1
    
    v5_1 = v17_1 > v7_1 ? v17_1 : v7_1
    
    if (v0.d f< v10.d)
        v19_1 = v0.d
    else
        v19_1 = v12.d
    
    bool cond:10_1 = v19_1 f<= entry_v0.d
    v19_1 = v1.d f+ v18_1
    
    if (cond:10_1)
        if (v5_1 f> v13.d)
            v21_1 = v5_1
        else
            v21_1 = v11.d
        
        if (v19_1 f> v12.d)
            v20_1 = v19_1
        else
            v20_1 = v10.d
        
        if (v2_1.d f< v11.d)
            v1.d = v2_1.d
        else
            v1.d = v13.d
    
    if (cond:10_1 && not(v21_1 f< entry_v1.d) && not(v20_1 f< entry_v0.d)
            && not(v1.d f> entry_v1.d))
        return zx.q(*(0 + 0x869238))
    
    v1.d = v6_1 + v18_1
    
    if (v0.d f< v3_1.d)
        v6_1 = v0.d
    else
        v6_1 = v3_1.d
    
    if (v19_1 f> v1.d)
        v0.d = v19_1
    else
        v0.d = v1.d
    
    if (not(v6_1 f< v10.d))
        v6_1 = v12.d
    
    if (v6_1 f<= entry_v0.d)
        if (v17_1 f> v13.d)
            v18_1 = v17_1
        else
            v18_1 = v11.d
        
        if (v0.d f> v12.d)
            v17_1 = v0.d
        else
            v17_1 = v10.d
        
        if (v16_1 f< v11.d)
            v6_1 = v16_1
        else
            v6_1 = v13.d
        
        if (not(v18_1 f< entry_v1.d) && not(v17_1 f< entry_v0.d) && not(v6_1 f> entry_v1.d))
            return zx.q(*(0xc + 0x869238))
        
        if (not(v7_1 f> v13.d))
            v7_1 = v11.d
        
        if (v0.d f> v12.d)
            v6_1 = v0.d
        else
            v6_1 = v10.d
        
        if (v4_1 f< v11.d)
            v0.d = v4_1
        else
            v0.d = v13.d
        
        if (not(v7_1 f< entry_v1.d) && not(v6_1 f< entry_v0.d) && not(v0.d f> entry_v1.d))
            return zx.q(*(2 * 0xc + 0x869238))
    
    if (v3_1.d f< v10.d)
        v0.d = v3_1.d
    else
        v0.d = v12.d
    
    if (v0.d f<= entry_v0.d)
        if (v5_1 f> v13.d)
            v3_1.d = v5_1
        else
            v3_1.d = v11.d
        
        if (v1.d f> v12.d)
            v1.d = v1.d
        else
            v1.d = v10.d
        
        if (v2_1.d f< v11.d)
            v0.d = v2_1.d
        else
            v0.d = v13.d
        
        if (v3_1.d f< entry_v1.d || v1.d f< entry_v0.d || v0.d f> entry_v1.d)
            return 0xffffffff
        
        return zx.q(*(3 * 0xc + 0x869238))

return 0xffffffff
