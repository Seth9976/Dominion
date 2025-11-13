// 函数: _Z14PerimiterUVPosRK5RectFffffb
// 地址: 0xba4034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg6.d
int64_t v9
v9.d = fconvert.s(1f)
int64_t result
float v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t v16
int128_t v17
v0, result, v1, v2, v3, v4, v5, v6, v7, v16, v17 = fmodf(arg3 * arg4 + arg5, fconvert.s(1f))
v1.d = float.s(0x3727c5ac)

if (not(v0 f<= v1.d))
    v1.d = float.s(0x3f7fff58)
    
    if (v0 f>= v1.d)
        v1.d = fconvert.s(1f)
        
        if ((x19 & 1) != 0)
            v1.d = v1.d
        else
            v1.d = 0f
    else
        v2.q = *arg1
        v1.q = *(arg1 + 8)
        v3.d = fconvert.s(0.5f)
        int32_t var_58 = 0
        int32_t var_80 = 0
        v1 = vsub_f32(v1, v2)
        v4.d = v1.d f+ v1:4.d
        v2.d = v1:4.d
        v4.d = v4.d f+ v4.d
        v5.d = v1.d f/ v4.d
        v6.d = v2.d f/ v4.d
        v2.d = arg2 f/ v4.d
        float v18_1 = v2.d f* v3.d
        v3.d = v5.d f+ v5.d
        v16.d = v5.d f+ v6.d
        float v20_1 = v6.d f+ v3.d
        v3.d = v3.d f+ v6.d f+ v6.d
        v4.d = v5.d f- v2.d
        v1.d = v5.d f+ v2.d
        v17.d = v16.d f- v2.d
        v7.d = v2.d f+ v16.d
        float v21_1 = v5.d f+ v18_1
        float v22_1 = v16.d f- v18_1
        float v23_1 = v16.d f+ v18_1
        v16.d = v20_1 f- v2.d
        v6.d = v2.d f+ v20_1
        float var_7c_1 = v18_1
        float var_78_1 = v5.d f- v18_1
        v5.d = v3.d f- v2.d
        int32_t var_54_1 = v2.d
        int32_t var_50_1 = v4.d
        int32_t var_4c_1 = v1.d
        int32_t var_48_1 = v17.d
        int32_t var_38_1 = v5.d
        int32_t var_34_1 = v3.d
        float var_74_1 = v21_1
        float var_70_1 = v22_1
        int32_t var_44_1 = v7.d
        int32_t var_40_1 = v16.d
        int32_t var_3c_1 = v6.d
        float var_6c_1 = v23_1
        float var_68_1 = v20_1 - v18_1
        float var_64_1 = v18_1 + v20_1
        float var_60_1 = v3.d f- v18_1
        int32_t var_5c_1 = v3.d
        int32_t x8_1
        
        if (v2.d f>= v0)
            x8_1 = 1
        label_ba420c:
            v3.d = (&var_58)[zx.q(x8_1 - 1)]
            v1.d = (&var_80)[zx.q(x8_1 - 1)]
            v2.d = v2.d f- v3.d
            v0 = (v0 f- v3.d) f/ v2.d
            
            if (not(v0 <= 0f))
                v2.d = (&var_80)[zx.q(x8_1)]
                v3.d = fconvert.s(1f)
                
                if (not(v0 f>= v3.d))
                    v2.d = v2.d f- v1.d
                    v1.d = v1.d f+ v0 f* v2.d
        else
            if (v4.d f>= v0)
                x8_1 = 2
                v2 = v4
                goto label_ba420c
            
            if (v1.d f>= v0)
                x8_1 = 3
                v2 = v1
                goto label_ba420c
            
            if (v17.d f>= v0)
                x8_1 = 4
                v2 = v17
                goto label_ba420c
            
            if (v7.d f>= v0)
                x8_1 = 5
                v2 = v7
                goto label_ba420c
            
            if (v16.d f>= v0)
                x8_1 = 6
                v2 = v16
                goto label_ba420c
            
            if (v6.d f>= v0)
                x8_1 = 7
                v2 = v6
                goto label_ba420c
            
            if (v5.d f>= v0)
                x8_1 = 8
                v2 = v5
                goto label_ba420c
            
            v1.d = fconvert.s(1f)
            
            if (not(v3.d f< v0))
                x8_1 = 9
                v2 = v3
                goto label_ba420c
else if ((x19 & 1) != 0)
    v1.d = v9.d
else
    v1.d = 0f

return result
