// 函数: _Z20FlanimGetDrawExtentsP6XAssetPKciR5RectF
// 地址: 0xf68954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = *RECT0
DefFlanim* result = FlanimGetDef(arg1)
int32_t x26 = *(result + 0x28)

if (x26 s>= 1)
    DefFlanim* result_1 = result
    int32_t var_a8
    int32_t var_a4
    int32_t var_98
    int32_t var_94
    int32_t var_88
    int32_t var_84
    int32_t var_78
    int32_t var_74
    
    if (arg2 == 0)
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        int128_t v4_2
        int128_t v5_2
        result, v1_2, v2_2, v3_2, v4_2, v5_2 = FlanimGetTransformAtFrame(result_1, 0, arg3, &var_a8)
        v1_2.d = var_a8
        v2_2.d = var_a4
        v5_2.d = var_98
        v3_2.d = var_94
        v1_2.d f- v5_2.d
        int32_t v0_2
        bool cond:1_1
        
        if (v1_2.d f<= v5_2.d)
            if (not(v1_2.d f>= v5_2.d))
                v0_2 = v1_2.d
                v2_2.d f- v3_2.d
                cond:1_1 = v2_2.d f>= v3_2.d
                
                if (v2_2.d f> v3_2.d)
                    goto label_f68ba0
                
                goto label_f68b78
            
            v0_2 = v1_2.d
            v5_2 = v1_2
            v2_2.d f- v3_2.d
            cond:1_1 = v2_2.d f>= v3_2.d
            
            if (v2_2.d f<= v3_2.d)
                goto label_f68b78
            
            goto label_f68ba0
        
        v0_2 = v5_2.d
        v5_2 = v1_2
        v2_2.d f- v3_2.d
        cond:1_1 = v2_2.d f>= v3_2.d
        int32_t v1_3
        
        if (v2_2.d f<= v3_2.d)
        label_f68b78:
            
            if (cond:1_1)
                v1_3 = v2_2.d
                v3_2 = v2_2
                v4_2.d = var_88
                v2_2.d = var_84
                
                if (not(v0_2 f> v4_2.d))
                    goto label_f68bd0
                
                v0_2 = v4_2.d
                v4_2 = v5_2
            else
                v1_3 = v2_2.d
                v4_2.d = var_88
                v2_2.d = var_84
                
                if (not(v0_2 f> v4_2.d))
                    goto label_f68bd0
                
                v0_2 = v4_2.d
                v4_2 = v5_2
        else
        label_f68ba0:
            v1_3 = v3_2.d
            v3_2 = v2_2
            v4_2.d = var_88
            v2_2.d = var_84
            
            if (v0_2 f<= v4_2.d)
            label_f68bd0:
                
                if (not(v5_2.d f< v4_2.d))
                    v4_2 = v5_2
            else
                v0_2 = v4_2.d
                v4_2 = v5_2
        
        if (not(v1_3 f<= v2_2.d))
            v1_3 = v2_2.d
            v2_2 = v3_2
        else if (not(v3_2.d f< v2_2.d))
            v2_2 = v3_2
        
        v5_2.d = var_78
        v3_2.d = var_74
        
        if (not(v0_2 f<= v5_2.d))
            v0_2 = v5_2.d
            v5_2 = v4_2
        else if (not(v4_2.d f< v5_2.d))
            v5_2 = v4_2
        
        if (not(v1_3 f<= v3_2.d))
            v1_3 = v3_2.d
            v3_2 = v2_2
        else if (not(v2_2.d f< v3_2.d))
            v3_2 = v2_2
        
        *arg4 = v0_2
        *(arg4 + 4) = v1_3
        *(arg4 + 8) = v5_2.d
        *(arg4 + 0xc) = v3_2.d
        
        if (*(result_1 + 0x28) s>= 2)
            int32_t i = 1
            
            do
                int128_t v1_4
                int128_t v2_3
                int128_t v3_3
                int128_t v4_3
                int128_t v5_3
                result, v1_4, v2_3, v3_3, v4_3, v5_3 =
                    FlanimGetTransformAtFrame(result_1, i, arg3, &var_a8)
                v3_3.d = var_a8
                int32_t v0_3 = *arg4
                v1_4.d = *(arg4 + 8)
                
                if (not(v0_3 f<= v3_3.d))
                    v0_3 = v3_3.d
                    v3_3 = v1_4
                else if (not(v1_4.d f< v3_3.d))
                    v3_3 = v1_4
                
                v2_3.d = var_a4
                v1_4.d = *(arg4 + 4)
                v4_3.d = *(arg4 + 0xc)
                
                if (not(v1_4.d f<= v2_3.d))
                    v1_4 = v2_3
                else if (not(v4_3.d f>= v2_3.d))
                    v4_3 = v2_3
                
                v5_3.d = var_98
                v2_3.d = var_94
                
                if (not(v0_3 f<= v5_3.d))
                    v0_3 = v5_3.d
                    v5_3 = v3_3
                else if (not(v3_3.d f< v5_3.d))
                    v5_3 = v3_3
                
                if (not(v1_4.d f<= v2_3.d))
                    v1_4 = v2_3
                    v2_3 = v4_3
                else if (not(v4_3.d f< v2_3.d))
                    v2_3 = v4_3
                
                v4_3.d = var_88
                v3_3.d = var_84
                
                if (not(v0_3 f<= v4_3.d))
                    v0_3 = v4_3.d
                    v4_3 = v5_3
                else if (not(v5_3.d f< v4_3.d))
                    v4_3 = v5_3
                
                if (not(v1_4.d f<= v3_3.d))
                    v1_4 = v3_3
                    v3_3 = v2_3
                else if (not(v2_3.d f< v3_3.d))
                    v3_3 = v2_3
                
                v5_3.d = var_78
                v2_3.d = var_74
                
                if (not(v0_3 f<= v5_3.d))
                    v0_3 = v5_3.d
                    v5_3 = v4_3
                else if (not(v4_3.d f< v5_3.d))
                    v5_3 = v4_3
                
                if (v1_4.d f> v2_3.d)
                    v1_4 = v2_3
                    v2_3 = v3_3
                else if (v3_3.d f>= v2_3.d)
                    v2_3 = v3_3
                
                *arg4 = v0_3
                *(arg4 + 4) = v1_4.d
                *(arg4 + 8) = v5_3.d
                *(arg4 + 0xc) = v2_3.d
                i += 1
            while (i s< *(result_1 + 0x28))
    else
        int64_t x25_1 = 0
        int64_t i_1 = 0
        int32_t x27_1 = 0
        
        do
            if (zx.d(*arg2) != 0)
                result = strncmp(*(*(result_1 + 0x20) + x25_1), arg2, strlen(arg2))
            
            if (zx.d(*arg2) == 0 || result.d == 0)
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                int128_t v5_1
                result, v1_1, v2_1, v3_1, v4_1, v5_1 =
                    FlanimGetTransformAtFrame(result_1, i_1.d, arg3, &var_a8)
                int32_t x9_1 = var_a8
                int32_t v0_1
                
                if ((x27_1 & 1) == 0)
                    v2_1.d = float.s(x9_1)
                    v3_1.d = float.s(var_a4)
                    v1_1 = v3_1
                    v0_1 = v2_1.d
                else
                    v0_1 = *arg4
                    v1_1.d = *(arg4 + 8)
                    v2_1.d = float.s(x9_1)
                    
                    if (not(v0_1 f<= v2_1.d))
                        v0_1 = v2_1.d
                        v2_1 = v1_1
                    else if (not(v1_1.d f< v2_1.d))
                        v2_1 = v1_1
                    
                    v1_1.d = *(arg4 + 4)
                    v3_1.d = *(arg4 + 0xc)
                    v4_1.d = float.s(var_a4)
                    
                    if (not(v1_1.d f<= v4_1.d))
                        v1_1 = v4_1
                    else if (not(v3_1.d f>= v4_1.d))
                        v3_1 = v4_1
                
                v5_1.d = var_98
                v4_1.d = var_94
                
                if (not(v0_1 f<= v5_1.d))
                    v0_1 = v5_1.d
                    v5_1 = v2_1
                else if (not(v2_1.d f< v5_1.d))
                    v5_1 = v2_1
                
                if (not(v1_1.d f<= v4_1.d))
                    v1_1 = v4_1
                    v4_1 = v3_1
                else if (not(v3_1.d f< v4_1.d))
                    v4_1 = v3_1
                
                v3_1.d = var_88
                v2_1.d = var_84
                
                if (not(v0_1 f<= v3_1.d))
                    v0_1 = v3_1.d
                    v3_1 = v5_1
                else if (not(v5_1.d f< v3_1.d))
                    v3_1 = v5_1
                
                if (not(v1_1.d f<= v2_1.d))
                    v1_1 = v2_1
                    v2_1 = v4_1
                else if (not(v4_1.d f< v2_1.d))
                    v2_1 = v4_1
                
                v5_1.d = var_78
                v4_1.d = var_74
                
                if (not(v0_1 f<= v5_1.d))
                    v0_1 = v5_1.d
                    v5_1 = v3_1
                else if (not(v3_1.d f< v5_1.d))
                    v5_1 = v3_1
                
                if (v1_1.d f> v4_1.d)
                    v1_1 = v4_1
                    v4_1 = v2_1
                else if (v2_1.d f>= v4_1.d)
                    v4_1 = v2_1
                
                *arg4 = v0_1
                *(arg4 + 4) = v1_1.d
                *(arg4 + 8) = v5_1.d
                *(arg4 + 0xc) = v4_1.d
                x26 = *(result_1 + 0x28)
                x27_1 = 1
            
            i_1 += 1
            x25_1 += 0x18
        while (i_1 s< sx.q(x26))

return result
