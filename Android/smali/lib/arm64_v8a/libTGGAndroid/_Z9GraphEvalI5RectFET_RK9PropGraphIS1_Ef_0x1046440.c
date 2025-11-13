// 函数: _Z9GraphEvalI5RectFET_RK9PropGraphIS1_Ef
// 地址: 0x1046440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8
int32_t x8 = *(arg1 + 0x78)
PropGraph<RectF> const& x19 = arg1
float128 v1
float128 v2
float128 v3

if (x8 == 2)
    v8.d = *(x19 + 0x24)
    int64_t x1_1
    int32_t n
    float128 v0
    float128 v2_1
    v0, arg1, x1_1, n, v1, v2_1, v3 = fmodf(arg2, v8.d)
    v1.d = 0f
    
    if (v8.d f== 0f)
        v0.d = v1.d
    else
        v0.d = v0.d
    
    if (not(v0.d f<= 0f))
        v1.d = fconvert.s(1f)
        
        if (not(v0.d f>= v1.d))
            v1.d = *CIRCLE_FULL
            v0.d = v0.d f* v1.d
            v0, arg1, v1, v2_1, v3 = cosf(arg1, x1_1, n, v0.d)
            v1.d = fconvert.s(1f)
            v2_1.d = fconvert.s(0.5f)
            v0.d = v1.d f- v0.d
            v0.d = v0.d f* v2_1.d
            v1.d = 0f
            v1.d = v0.d f+ v1.d
    
    v0 = *x19
    v2 = vsubq_f32(*(x19 + 0x28), v0)
    v1.d = v2.d f* v1.d
    v1:4.d = v2:4.d f* v1.d
    v1:8.d = v2:8.d f* v1.d
    v1:0xc.d = v2:0xc.d f* v1.d
    arg2 = vaddq_f32(v0, v1)
else if (x8 == 1)
    v8.d = *(x19 + 0x24)
    float128 v0_1
    v0_1, arg1, v2 = fmodf(arg2, v8.d)
    float128 v1_3 = v0_1
    v0_1.d = 0f
    
    if (v8.d f== 0f)
        v8.d = v0_1.d
    else
        v8.d = v1_3.d
    
    float v5_1
    
    if (v8.d f<= 0f)
        v5_1 = 0f
    else
        arg1 = zx.q(*(x19 + 0x20))
        v5_1 = fconvert.s(1f)
        
        if (v8.d f>= v5_1)
            if (arg1.d - 0xa u<= 9)
                v5_1 = *(&data_8692dc + (sx.q(arg1.d - 0xa) << 2))
            
            if (arg1.d - 0xa u>= 6 && arg1.d != 0x13)
                v0_1.d = fconvert.s(1f)
        else
            v1_3.d = 0f
            v2.d = fconvert.s(1f)
            float v0_3 = XCurveEvalNormal(arg1, v8.d, v1_3.d, v2.d)
            arg1, v0_1, v1_3, v2 = XCurveEvalNormal(zx.q(*(x19 + 0x20)), v8.d, 0f, fconvert.s(1f))
            v5_1 = v0_3
    
    v1_3 = *x19
    v2 = *(x19 + 0x10)
    v3 = vsubq_f32(v1_3, v1_3)
    float128 v4_1 = vsubq_f32(v2, v2)
    v3.d = v3.d f* v5_1
    v3:4.d = v3:4.d f* v5_1
    v3:8.d = v3:8.d f* v5_1
    v3:0xc.d = v3:0xc.d f* v5_1
    v0_1.d = v4_1.d f* v0_1.d
    v0_1:4.d = v4_1:4.d f* v0_1.d
    v0_1:8.d = v4_1:8.d f* v0_1.d
    v0_1:0xc.d = v4_1:0xc.d f* v0_1.d
    v1 = vaddq_f32(v1_3, v3)
    float128 v0_6 = vsubq_f32(vaddq_f32(v2, v0_1), v1)
    v2.q = 0
    v2:8.q = 0
    arg2 = vaddq_f32(v1, vmulq_f32(v0_6, zx.o(0), 0))
else
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        PropGraph<Vec2>* x0_2
        float v0_8
        x0_2, v0_8 = XNoReturn()
        return GraphEval<Vec2>(x0_2, v0_8) __tailcall
    
    arg2 = (*x19).d

v1.d = arg2
v2.d = arg2
v3.d = arg2
return arg1
