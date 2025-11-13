// 函数: _Z16IntersectBBoxTriRK4BBoxRK3Tri
// 地址: 0xf762fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_40 = v15
int64_t v10
int64_t var_18 = v10
int64_t v9
int64_t var_10 = v9
float v2 = *(arg1 + 0x10)
float v0 = *(arg1 + 0x14)
float v3 = *(arg1 + 4)
float v1 = *(arg1 + 8)
float v4 = *(arg2 + 4)
float v5 = *(arg2 + 8)
float v6 = *(arg2 + 0x10)
float v7 = *(arg2 + 0x14)
float v29 = fconvert.s(0.5f)
float v16 = *(arg2 + 0x1c)
float v17 = *(arg2 + 0x20)
float v18 = (v2 + v3) * v29
float v19 = (v0 + v1) * v29
float v30 = float.s(0x3f8020c5)
float v27 = (v2 - v3) * v29
float v28 = (v0 - v1) * v29
int64_t v8
v8.d = (v4 - v18) * v30
float v31 = (v5 - v19) * v30
float v23 = (v6 - v18) * v30
float v25 = (v7 - v19) * v30
int64_t v11
v11.d = v23 f- v8.d
int64_t v14
v14.d = v25 - v31
float v24 = (v16 - v18) * v30
float v26 = (v17 - v19) * v30
float v20 = v8.d f* v14.d - v31 f* v11.d
int64_t v12
v12.d = v27 * fabs(v23 f- v8.d)
v18 = v14.d f* v24 - v11.d f* v26
int64_t v13
v13.d = v28 * fabs(v25 - v31)
v20 - v18
float v21

v21 = v20 < v18 ? v20 : v18

v19 = v12.d f+ v13.d

if (not(v20 < v18))
    v18 = v20

uint64_t result = 0

if (not(v21 > v19) && not(v18 < fneg(v19)))
    v18 = *(arg1 + 0xc)
    v19 = *arg1
    v21 = *arg2
    float v22 = *(arg2 + 0xc)
    v10.d = *(arg2 + 0x18)
    v9.d = v18 - v19
    v20 = (v18 + v19) * v29
    v9.d = v9.d f* v29
    v29 = v21 - v20
    v15.d = v22 - v20
    float var_4c_1 = v10.d
    v20 = v10.d f- v20
    v10.d = v29 * v30
    v29 = v15.d f* v30
    v15.d = v29 f- v10.d
    float var_48_1 = v21
    float var_44_1 = v22
    v30 = v20 * v30
    v20 = v10.d f* v14.d
    v14.d = v14.d f* v30
    v20 = v31 f* v15.d - v20
    v22 = v15.d f* v26 f- v14.d
    v14.d = v9.d f* fabs(v15.d)
    v20 - v22
    
    v21 = v20 < v22 ? v20 : v22
    
    v13.d = v14.d f+ v13.d
    
    if (v20 < v22)
        v20 = v22
    
    result = 0
    
    if (not(v21 f> v13.d) && not(v20 < fneg(v13.d)))
        v20 = v10.d f* v11.d
        v22 = v11.d f* v30
        v11.d = v15.d f* v24
        v20 = v20 - v8.d f* v15.d
        v21 = v22 f- v11.d
        v20 - v21
        
        v22 = v20 < v21 ? v20 : v21
        
        if (v20 < v21)
            v11.d = v21
        else
            v11.d = v20
        
        v20 = v14.d f+ v12.d
        result = 0
        
        if (not(v22 > v20) && not(v11.d f< fneg(v20)))
            v11.d = v24 - v23
            v13.d = v26 - v25
            float var_50_1 = v18
            v12.d = v25 f* v11.d
            v14.d = v8.d f* v13.d
            v22 = v23 f* v13.d f- v12.d
            v18 = v14.d f- v31 f* v11.d
            v15.d = v28 * fabs(v26 - v25)
            v12.d = v27 * fabs(v24 - v23)
            v22 - v18
            
            v21 = v22 < v18 ? v22 : v18
            
            v14.d = v12.d f+ v15.d
            
            v20 = v22 < v18 ? v18 : v22
            
            result = 0
            
            if (not(v21 f> v14.d) && not(v20 < fneg(v14.d)))
                v14.d = v30 - v29
                v18 = v29 f* v13.d
                v20 = v10.d f* v13.d
                v13.d = v31 f* v14.d
                v18 = v25 f* v14.d - v18
                v20 = v13.d f- v20
                v13.d = v9.d f* fabs(v14.d)
                v18 - v20
                
                v21 = v18 < v20 ? v18 : v20
                
                v15.d = v13.d f+ v15.d
                
                if (not(v18 < v20))
                    v20 = v18
                
                result = 0
                
                if (not(v21 f> v15.d) && not(v20 < fneg(v15.d)))
                    v18 = v29 f* v11.d - v23 f* v14.d
                    v20 = v10.d f* v11.d - v8.d f* v14.d
                    v18 - v20
                    
                    v21 = v18 < v20 ? v18 : v20
                    
                    if (v18 < v20)
                        v11.d = v20
                    else
                        v11.d = v18
                    
                    v20 = v13.d f+ v12.d
                    result = 0
                    
                    if (not(v21 > v20) && not(v11.d f< fneg(v20)))
                        v11.d = v8.d f- v24
                        v12.d = v31 - v26
                        v18 = fabs(v8.d f- v24)
                        v8.d = v23 f* v12.d
                        v31 = v28 * fabs(v31 - v26)
                        v27 = v27 * v18
                        v18 = v24 f* v12.d - v11.d f* v26
                        v20 = v8.d f- v25 f* v11.d
                        v18 - v20
                        
                        v21 = v18 < v20 ? v18 : v20
                        
                        v28 = v27 + v31
                        
                        if (not(v18 < v20))
                            v20 = v18
                        
                        result = 0
                        
                        if (not(v21 > v28) && not(v20 < fneg(v28)))
                            v28 = v10.d f- v30
                            v18 = v28 * v26 - v30 f* v12.d
                            v20 = v25 * v28 - v29 f* v12.d
                            v25 = v9.d f* fabs(v28)
                            v18 - v20
                            
                            v21 = v18 < v20 ? v18 : v20
                            
                            v26 = v25 + v31
                            
                            if (not(v18 < v20))
                                v20 = v18
                            
                            result = 0
                            
                            if (not(v21 > v26) && not(v20 < fneg(v26)))
                                v18 = v30 f* v11.d - v28 * v24
                                v20 = v29 f* v11.d - v23 * v28
                                v18 - v20
                                
                                v21 = v18 < v20 ? v18 : v20
                                
                                v23 = v18 < v20 ? v20 : v18
                                
                                v20 = v25 + v27
                                result = 0
                                
                                if (not(v21 > v20) && not(v23 < fneg(v20)))
                                    v23 = var_44_1
                                    var_48_1 - v23
                                    bool cond:21_1 = var_48_1 >= v23
                                    float v24_1 = var_48_1
                                    
                                    if (not(var_48_1 > v23))
                                        v23 = var_48_1
                                        v24_1 = var_48_1
                                        
                                        if (not(cond:21_1))
                                            v24_1 = var_44_1
                                            v23 = var_48_1
                                    
                                    v4 - v6
                                    float v25_1 = v6
                                    float v27_1 = v4
                                    
                                    if (not(v4 > v6))
                                        v25_1 = v4
                                        v27_1 = v4
                                        
                                        if (not(v4 >= v6))
                                            v25_1 = v4
                                            v27_1 = v6
                                    
                                    v5 - v7
                                    float v26_1 = v7
                                    float v28_1 = v5
                                    
                                    if (not(v5 > v7))
                                        v26_1 = v5
                                        v28_1 = v5
                                        
                                        if (not(v5 >= v7))
                                            v26_1 = v5
                                            v28_1 = v7
                                    
                                    if (not(v23 <= var_4c_1))
                                        v23 = var_4c_1
                                    else if (not(v24_1 >= var_4c_1))
                                        v24_1 = var_4c_1
                                    
                                    if (not(v25_1 <= v16))
                                        v25_1 = v16
                                    else if (not(v27_1 >= v16))
                                        v27_1 = v16
                                    
                                    if (not(v26_1 <= v17))
                                        v26_1 = v17
                                    else if (not(v28_1 >= v17))
                                        v28_1 = v17
                                    
                                    result = 0
                                    
                                    if (not(v28_1 < v1) && not(v27_1 < v3) && not(v24_1 < v19)
                                            && not(v23 > var_50_1) && not(v25_1 > v2)
                                            && not(v26_1 > v0))
                                        v6 = v6 - v4
                                        v7 = v7 - v5
                                        v18 = var_44_1 - var_48_1
                                        v20 = var_4c_1 - var_48_1
                                        v16 = v16 - v4
                                        v17 = v17 - v5
                                        v22 = v6 * v17
                                        v17 = v18 * v17
                                        v18 = v18 * v16
                                        v16 = v22 - v7 * v16
                                        v7 = v7 * v20 - v17
                                        v6 = v18 - v6 * v20
                                        v17 = fconvert.s(1f) / sqrt(v6 * v6 + v16 * v16 + v7 * v7)
                                        v16 = v16 * v17
                                        v7 = v7 * v17
                                        v6 = v6 * v17
                                        v16 - 0f
                                        
                                        v17 = v16 > 0f ? v19 : var_50_1
                                        
                                        v18 = v16 > 0f ? var_50_1 : v19
                                        
                                        v7 - 0f
                                        v4 = v5 * v6 + var_48_1 * v16 + v4 * v7
                                        
                                        v5 = v7 > 0f ? v3 : v2
                                        
                                        if (not(v7 > 0f))
                                            v2 = v3
                                        
                                        v6 - 0f
                                        v3 = v16 * v17
                                        
                                        v17 = v6 > 0f ? v1 : v0
                                        
                                        if (not(v6 > 0f))
                                            v0 = v1
                                        
                                        return zx.q(v6 * v17 + v3 + v7 * v5 - v4 <= 0f ? 1 : 0) &
                                            zx.q(v6 * v0 + v16 * v18 + v7 * v2 - v4 >= 0f ? 1 : 0)

return result
