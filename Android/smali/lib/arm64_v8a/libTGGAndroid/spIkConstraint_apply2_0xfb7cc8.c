// 函数: spIkConstraint_apply2
// 地址: 0xfb7cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(arg8.d f!= 0f))
    return spBone_updateWorldTransform(arg2) __tailcall

void* x24 = *(arg1 + 0x10)
int128_t v8 = arg8
int128_t v15 = arg7
int128_t v11 = arg6
int128_t v12 = arg5
double v17

if (*(arg1 + 0x60) == 0)
    arg5, arg6, arg7, arg8, v17 = spBone_updateAppliedTransform(arg1)
    
    if (arg2[0xc].d == 0)
        arg5, arg6, arg7, arg8, v17 = spBone_updateAppliedTransform(arg2)
else if (arg2[0xc].d == 0)
    arg5, arg6, arg7, arg8, v17 = spBone_updateAppliedTransform(arg2)

float v24 = *(arg1 + 0x50)
float v25 = *(arg1 + 0x54)
arg5.d = arg2[0xa].d
int128_t v9
v9.d = 0f
arg6.d = float.s(0x43340000)
arg7.d = fneg(v24)
v24 - 0f
arg8.d = fneg(v25)
int32_t x8_3

x8_3 = v24 < 0f ? -1 : 1

float v27

if (v24 < 0f)
    v27 = arg6.d
else
    v27 = v9.d

int64_t v14

if (v24 < 0f)
    v14.d = arg7.d
else
    v14.d = v24

v25 - 0f
int32_t x23

if (v25 < 0f)
    x23 = neg.d(x8_3)
else
    x23 = x8_3

float v28

v28 = v25 < 0f ? arg8.d : v25

arg5.d f- 0f
float v22 = *(arg1 + 0x44)
float v23 = *(arg1 + 0x48)
int128_t v13
v13.d = *(arg2 + 0x44)
float v26

if (arg5.d f< 0f)
    v26 = arg6.d
else
    v26 = v9.d

if (arg5.d f< 0f)
    arg6.d = fneg(arg5.d)
else
    arg6.d = arg5.d

arg5.d = v14.d f- v28
arg7.d = fneg(arg5.d)

if (arg5.d f< 0f)
    arg5.d = arg7.d
else
    arg5.d = arg5.d

arg7.d = float.s(0x38d1b717)
float v6

if (arg5.d f> arg7.d)
    arg7.d = *(arg1 + 0x64)
    arg8.d = *(arg1 + 0x78)
    arg7.d = v13.d f* arg7.d
    v6 = arg7.d f+ *(arg1 + 0x6c)
    arg7.d = v13.d f* *(arg1 + 0x70)
else
    v9.d = arg2[9].d
    arg8.d = *(arg1 + 0x64)
    arg7.d = *(arg1 + 0x78)
    arg8.d = v13.d f* arg8.d
    arg8.d = arg8.d f+ v9.d f* *(arg1 + 0x68)
    v6 = *(arg1 + 0x6c) f+ arg8.d
    arg8.d = v13.d f* *(arg1 + 0x70) + v9.d f* *(arg1 + 0x74)

v17.d = arg7.d f+ arg8.d
arg7.d = *(x24 + 0x64)
arg8.d = *(x24 + 0x68)
float v4 = *(x24 + 0x70)
float v5 = *(x24 + 0x74)
float v7 = *(x24 + 0x6c)
float v16 = *(x24 + 0x78)
float v21 = v6 - v7
v17.d = v17.d f- v16
v6 = fconvert.s(1f) / (arg7.d f* v5 - arg8.d f* v4)
float v18 = arg8.d f* v17.d
v17.d = arg7.d f* v17.d
v17.d = v17.d f- v4 * v21
v17.d = v6 f* v17.d
v18 = v6 * (v5 * v21 - v18) - v22
v17.d = v17.d f- v23
v17.d = v17.d f* v17.d
v17.d = v18 * v18 f+ v17.d
int64_t v10
v10.d = sqrt(v17.d)
int64_t* x0_3
float x_2
int128_t v1_2
float v2_2
int128_t v3_1
int128_t v4_2
float v5_2
int128_t v6_2

if (fconvert.d(v10.d) >= 0.0001)
    v7 = v12.d f- v7
    v16 = v11.d f- v16
    arg8.d = arg8.d f* v16
    arg7.d = arg7.d f* v16
    arg8.d = v5 * v7 f- arg8.d
    arg7.d = arg7.d f- v4 * v7
    arg8.d = v6 f* arg8.d
    arg7.d = v6 f* arg7.d
    v11.d = arg8.d f- v22
    v12.d = arg7.d f- v23
    arg7.d = v11.d f* v11.d
    arg8.d = v12.d f* v12.d
    v7 = arg7.d f+ arg8.d
    arg7.d = arg6.d f* *(*arg2 + 0x18)
    float x = v13.d
    v13.d = v14.d f* arg7.d
    int32_t var_a0_1 = v9.d
    
    if (not(v15.d f== 0f))
        arg8.d = fconvert.s(1f)
        arg6.d = arg6.d f+ arg8.d
        v4 = sqrt(v7)
        arg6.d = v14.d f* arg6.d
        arg6.d = arg6.d f* fconvert.s(0.5f)
        arg6.d = arg6.d f* v15.d
        v5 = arg6.d f+ v4 f- v10.d f- v13.d
        
        if (not(v5 <= 0f))
            v6 = vmin_f32(v5 / (arg6.d f+ arg6.d), arg8.d) + fconvert.s(-1f)
            arg8.d = arg8.d f- v6 * v6
            arg6.d = arg6.d f* arg8.d
            arg6.d = v5 f- arg6.d
            arg6.d = arg6.d f/ v4
            arg8.d = v11.d f* arg6.d
            arg6.d = v12.d f* arg6.d
            v11.d = v11.d f- arg8.d
            v12.d = v12.d f- arg6.d
            arg6.d = v11.d f* v11.d
            arg8.d = v12.d f* v12.d
            v7 = arg6.d f+ arg8.d
    
    arg6.d = float.s(0x38d1b717)
    float var_88_1 = v24
    float y_2
    
    if (arg5.d f> arg6.d)
        arg5.d = v28 f* arg7.d
        int32_t var_a8_1 = v8.d
        v9.d = arg5.d f* arg5.d
        v15.d = v13.d f* v13.d
        v8.d = v10.d f* v10.d
        float v7_2 = v7
        float x_1 = v9.d f- v15.d
        float y = v9.d f* v8.d + v15.d f* v7_2 - v15.d f* v9.d
        float x_3 = v9.d f* fconvert.s(-2f) f* v10.d
        float v4_3 = x_3 * x_3 + x_1 * fconvert.s(-4f) * y
        v8 = atan2f(v12.d, v11.d, arg7.d)
        int128_t v0_3
        
        if (not(v4_3 < 0f))
            v0_3.d = sqrt(v4_3)
            
            if (x_3 < 0f)
                v0_3.d = fneg(v0_3.d)
            else
                v0_3.d = v0_3.d
            
            v0_3.d = x_3 f+ v0_3.d
            v0_3.d = v0_3.d f* fconvert.s(-0.5f)
            x_1 = v0_3.d f/ x_1
            v0_3.d = y f/ v0_3.d
            
            if (x_1 < 0f)
                y = fneg(x_1)
            else
                y = x_1
            
            if (v0_3.d f< 0f)
                x_3 = fneg(v0_3.d)
            else
                x_3 = v0_3.d
            
            if (y < x_3)
                v12.d = x_1
            else
                v12.d = v0_3.d
            
            v0_3.d = v12.d f* v12.d
        
        if (not(v4_3 < 0f) && v0_3.d f<= v7_2)
            v0_3.d = v7_2 f- v0_3.d
            v0_3.d = sqrt(v0_3.d)
            v15.d = v0_3.d f* float.s(arg3)
            float v0_12
            float y_3
            v0_12, y_3 = atan2f(v15.d, v12.d, y)
            v11.d = v8.d f- v0_12
            int128_t v0_13
            v0_13, y_2 = atan2f(v15.d f/ v28, (v12.d f- v10.d) f/ v14.d, y_3)
            v8.d = var_a8_1
            v13.d = var_a0_1
            v15 = v0_13
        else
            v0_3.d = fneg(v13.d)
            v0_3.d = v10.d f* v0_3.d
            v14.d = v10.d f- v13.d
            v11.d = v13.d f+ v10.d
            v0_3.d = v0_3.d f/ (v15.d f- v9.d)
            v9.d = v14.d f* v14.d
            v15.d = v11.d f* v11.d
            x_1 = 0f
            y = float.s(0x40490fdb)
            int64_t v0_5
            int128_t v4_4
            
            if (v0_3.d f< fconvert.s(-1f) || v0_3.d f> fconvert.s(1f))
                v13.d = var_a0_1
                v10 = v8.q
            label_fb8258:
                v12.d = 0f
                v0_5 = v11.q
                v4_4 = v15
                x_3 = 0f
            else
                int128_t v0_4 = acosf(v0_3.d)
                v12 = v0_4
                float cosp
                float sinp
                v0_5, v4_4 = sincosf(&sinp, &cosp, v0_4.d)
                v0_5.d = cosp
                v0_5.d = v13.d f* v0_5.d
                x_3 = arg5.d * sinp
                v0_5.d = v10.d f+ v0_5.d
                v4_4.d = x_3 * x_3 + v0_5.d f* v0_5.d
                
                if (v4_4.d f>= v9.d)
                    y = float.s(0x40490fdb)
                    x_1 = 0f
                else
                    y = v12.d
                    v14 = v0_5
                    v9 = v4_4
                    x_1 = x_3
                
                v7_2 = v7
                v13.d = var_a0_1
                v10 = v8.q
                
                if (not(v4_4.d f> v15.d))
                    goto label_fb8258
            
            v4_4.d = v9.d f+ v4_4.d
            v4_4.d = v4_4.d f* fconvert.s(0.5f)
            v7_2 f- v4_4.d
            v8.d = float.s(arg3)
            
            if (not(v7_2 f> v4_4.d))
                x_3 = x_1
            
            if (v7_2 f> v4_4.d)
                x_1 = v0_5.d
            else
                x_1 = v14.d
            
            v0_5.d = x_3 f* v8.d
            
            if (v7_2 f> v4_4.d)
                v9.d = v12.d
            else
                v9.d = y
            
            float v0_14
            v0_14, y_2 = atan2f(v0_5.d, x_1, y)
            v15.d = v9.d f* v8.d
            v8.d = var_a8_1
            v11.d = v10.d f- v0_14
    else
        arg5.d = v10.d f* v10.d
        arg6.d = v13.d f* v13.d
        arg7.d = v10.d f+ v10.d
        arg5.d = v7 f- arg5.d
        arg7.d = v13.d f* arg7.d
        arg5.d = arg5.d f- arg6.d
        arg5.d = arg5.d f/ arg7.d
        v15.d = fconvert.s(-1f)
        
        if (not(arg5.d f< v15.d))
            v15.d = fconvert.s(1f)
            
            if (arg5.d f<= v15.d)
                v15 = arg5
            else if (arg4 != 0)
                arg5.d = sqrt(v7)
                arg6.d = v13.d f+ v10.d
                arg7.d = fconvert.s(-1f)
                arg5.d = arg5.d f/ arg6.d
                arg5.d = arg5.d f+ arg7.d
                arg5.d = arg5.d f* v8.d
                v15.d = fconvert.s(1f)
                arg5.d = arg5.d f+ v15.d
                var_88_1 = v24 f* arg5.d
        
        float v2_3 = v13.d f* v15.d
        v15.d = acosf(v15.d) * float.s(arg3)
        v9.d = v10.d f+ v2_3
        float v0_9 = v13.d f* sinf(v15.d)
        float y_1 = v11.d f* v9.d
        int128_t v0_10
        v0_10, y_2 = atan2f(v12.d f* v9.d - v11.d f* v0_9, y_1 + v12.d f* v0_9, y_1)
        v13.d = var_a0_1
        v11 = v0_10
    
    float v0_16
    int128_t v3_3
    int128_t v4_6
    int128_t v6_4
    v0_16, v3_3, v4_6, v6_4 = atan2f(v13.d, x, y_2)
    v10.d = float.s(x23)
    v9.d = v0_16 f* v10.d
    float v2_4 = v27 + (v11.d f- v9.d) * float.s(0x42652ee0) - *(arg1 + 0x4c)
    float v1_9
    
    if (v2_4 <= float.s(0x43340000))
        v1_9 = v23
        v0_16 = v22
        v3_3.d = var_88_1
        v4_6.d = v25
        
        if (not(v2_4 >= float.s(0xc3340000)))
            v2_4 = v2_4 + float.s(0x43b40000)
    else
        v2_4 = v2_4 + float.s(0xc3b40000)
        v1_9 = v23
        v0_16 = v22
        v3_3.d = var_88_1
        v4_6.d = v25
    
    v6_4.d = 0f
    v3_1, v4_2, v6_2 = spBone_updateWorldTransformWith(arg1, v0_16, v1_9, 
        *(arg1 + 0x30) + v2_4 f* v8.d, v3_3, v4_6, 0f, v6_4)
    v5_2 = arg2[0xb].d
    x_2 = *(arg2 + 0x4c)
    float v1_10 = v26 + ((v15.d f+ v9.d) * float.s(0x42652ee0) - v5_2) f* v10.d - x_2
    
    if (not(v1_10 <= float.s(0x43340000)))
        v1_10 = v1_10 + float.s(-0x3c4c0000)
    else if (not(v1_10 >= float.s(0xc3340000)))
        v1_10 = v1_10 + float.s(0x43b40000)
    
    v3_1.d = arg2[0xa].d
    v4_2.d = *(arg2 + 0x54)
    v6_2.d = *(arg2 + 0x5c)
    v2_2 = x_2 + v1_10 f* v8.d
    x_2 = x
    x0_3 = arg2
    v1_2 = v13
else
    v3_1, v4_2, v6_2 = spIkConstraint_apply1(arg1, 0, zx.q(arg4), 0, v12, v11, v8)
    v3_1.d = arg2[0xa].d
    v4_2.d = *(arg2 + 0x54)
    v5_2 = arg2[0xb].d
    v6_2.d = *(arg2 + 0x5c)
    v2_2 = 0f
    x0_3 = arg2
    x_2 = v13.d
    v1_2 = v9

return spBone_updateWorldTransformWith(x0_3, x_2, v1_2, v2_2, v3_1, v4_2, v5_2, v6_2) __tailcall
