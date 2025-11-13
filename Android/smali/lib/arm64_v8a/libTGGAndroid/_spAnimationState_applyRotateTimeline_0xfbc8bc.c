// 函数: _spAnimationState_applyRotateTimeline
// 地址: 0xfbc8bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_60 = v12
int64_t v11
int64_t var_58 = v11
int64_t v10
int64_t var_50 = v10
int32_t v8 = arg9.d
int128_t v9 = arg8

if (arg7 != 0)
    *(arg5 + (sx.q(arg6) << 2)) = 0

arg8.d = fconvert.s(1f)
double v2

if (not(v8 f!= arg8.d))
    arg8.d = 0f
    v2.d = fconvert.s(1f)
    return spTimeline_apply(arg2, arg3, 0, 0, arg4, 0, arg8, v9, v2) __tailcall

int64_t* x24 = *(*(arg3 + 0x10) + (sx.q(*(arg2 + 0x28)) << 3))

if (x24[0x10].d == 0)
    return 

int32_t* x23_1 = *(arg2 + 0x20)
arg8.d = *x23_1
double v3
double v4

if (arg8.d f<= v9.d)
    void* x8_4
    
    if (arg4 == 0)
        x8_4 = *x24 + 0x24
    else
        x8_4 = &x24[6]
    
    int32_t x1_2 = *(arg2 + 0x18)
    v10.d = *x8_4
    arg8.d = x23_1[sx.q(x1_2 - 2)]
    
    if (arg8.d f<= v9.d)
        arg9.d = x23_1[sx.q(x1_2 - 1)]
        arg8.d = *(*x24 + 0x24)
        arg8.d = arg8.d f+ arg9.d
    else
        int32_t x0_3 = _spCurveTimeline_binarySearch(x23_1, x1_2, 2, v9)
        void* x23_2 = &x23_1[sx.q(x0_3)]
        v11.d = *(x23_2 - 4)
        float v0_2 = *x23_2
        arg1, arg8, arg9, v2, v4 = spCurveTimeline_getCurvePercent(arg2, zx.q((x0_3 s>> 1) - 1), 
            fconvert.s(1f) - (v9.d f- v0_2) / (*(x23_2 - 8) - v0_2))
        arg9.d = *(x23_2 + 4)
        v2.d = float.s(0x43b40000)
        arg9.d = arg9.d f- v11.d
        v4.d = arg9.d f/ v2.d
        v3 = float.d(0x40d0001fffffffff)
        void* x8_7 = *x24
        v4.d = float.s((0x4000 - vcvtd_s32_f64(v3 - fconvert.d(v4.d))) * 0x168)
        arg9.d = arg9.d f- v4.d
        arg8.d = arg8.d f* arg9.d
        arg8.d = v11.d f+ arg8.d
        arg8.d = *(x8_7 + 0x24) f+ arg8.d
        arg9.d = arg8.d f/ v2.d
        arg9.d = float.s((0x4000 - vcvtd_s32_f64(v3 - fconvert.d(arg9.d))) * 0x168)
        arg8.d = arg8.d f- arg9.d
    
    goto label_fbca94

if (arg4 == 1)
    v10.d = x24[6].d
    arg8.d = *(*x24 + 0x24)
label_fbca94:
    arg8.d = arg8.d f- v10.d
    arg9.d = float.s(0xc3b40000)
    arg9.d = arg8.d f/ arg9.d
    arg9.d =
        float.s((0x4000 - vcvtd_s32_f64(fconvert.d(arg9.d) + float.d(0x40d0001fffffffff))) * 0x168)
    v11.d = arg8.d f- arg9.d
    int32_t* x22_1 = arg5 + (sx.q(arg6) << 2)
    
    if (v11.d f!= 0f)
        arg9.d = 0f
        v9.d = 0f
        float x = v11.d
        
        if (arg7 == 0)
            v9.d = *x22_1
            x = x22_1[1]
        
        x - 0f
        v2.d = fconvert.s(1f)
        v3.d = fconvert.s(-1f)
        
        if (x > 0f)
            v4.d = v2.d
        else
            v4.d = arg9.d
        
        if (x < 0f)
            v4.d = v3.d
        else
            v4.d = v4.d
        
        v11.d f- 0f
        
        if (v11.d f> 0f)
            arg9.d = v2.d
        else
            arg9.d = arg9.d
        
        if (v11.d f< 0f)
            arg9.d = v3.d
        else
            arg9.d = arg9.d
        
        if (v4.d f== arg9.d)
        label_fbcb4c:
            arg9.d = float.s(0x43b40000)
            v12.d = v11.d f+ v9.d
            arg8, arg1, arg9, v2 = fmodf(v9.d, arg9.d)
            arg8.d = v12.d f- arg8.d
            
            if ((((v11.d f> 0f ? 1 : 0) ^ (v9.d f< 0f ? 1 : 0)) & 1) == 0)
                v9.d f- 0f
                arg9.d = 0f
                v2.d = float.s(0x43b40000)
                
                if (v9.d f> 0f)
                    arg9.d = v2.d
                else
                    arg9.d = arg9.d
                
                v2.d = float.s(0xc3b40000)
                
                if (v9.d f< 0f)
                    arg9.d = v2.d
                else
                    arg9.d = arg9.d
                
                arg8.d = arg8.d f+ arg9.d
        else
            arg9.d = fneg(x)
            
            if (x < 0f)
                x = arg9.d
            
            arg9.d = float.s(0x42b40000)
            
            if (not(x f<= arg9.d))
                goto label_fbcb4c
            
            v9.d f- 0f
            arg9.d = float.s(0x43b40000)
            v2.d = 0f
            v3.d = float.s(0xc3b40000)
            
            if (v9.d f> 0f)
                v2.d = arg9.d
            else
                v2.d = v2.d
            
            if (v9.d f< 0f)
                x = fneg(v9.d)
            else
                x = v9.d
            
            if (v9.d f< 0f)
                v2.d = v3.d
            else
                v2.d = v2.d
            
            v3.d = float.s(0x43340000)
            v2.d = v9.d f+ v2.d
            
            if (x f> v3.d)
                x = v2.d
            else
                x = v9.d
            
            v9.d = v11.d f+ x
            arg8, arg1, arg9 = fmodf(x, arg9.d)
            arg8.d = v9.d f- arg8.d
        
        *(arg5 + (sx.q(arg6) << 2)) = arg8.d
    else
        arg8.d = *(arg5 + (sx.q(arg6) << 2))
    
    arg8.d = arg8.d f* v8
    arg9.d = float.s(0xc3b40000)
    arg8.d = v10.d f+ arg8.d
    arg9.d = arg8.d f/ arg9.d
    arg9.d =
        float.s((0x4000 - vcvtd_s32_f64(fconvert.d(arg9.d) + float.d(0x40d0001fffffffff))) * 0x168)
    arg8.d = arg8.d f- arg9.d
    x22_1[1] = v11.d
    x24[6].d = arg8.d
else if (arg4 == 0)
    arg8.d = *(*x24 + 0x24)
    x24[6].d = arg8.d
