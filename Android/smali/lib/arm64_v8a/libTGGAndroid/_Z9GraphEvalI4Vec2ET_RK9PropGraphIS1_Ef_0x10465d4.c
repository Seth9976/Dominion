// 函数: _Z9GraphEvalI4Vec2ET_RK9PropGraphIS1_Ef
// 地址: 0x10465d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8
int32_t x8 = *(arg1 + 0x48)
PropGraph<Vec2> const& x19 = arg1
int128_t v1

if (x8 == 2)
    v8.d = *(x19 + 0x14)
    int64_t x1_1
    int32_t n
    int128_t v0
    int128_t v2_1
    v0, arg1, x1_1, n, v1, v2_1 = fmodf(arg2, v8.d)
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
            v0, arg1, v1, v2_1 = cosf(arg1, x1_1, n, v0.d)
            v1.d = fconvert.s(1f)
            v2_1.d = fconvert.s(0.5f)
            v0.d = v1.d f- v0.d
            v0.d = v0.d f* v2_1.d
            v1.d = 0f
            v1.d = v0.d f+ v1.d
    
    v0.q = *(x19 + 0x18)
    v2_1.q = *x19
    int128_t v0_1
    v0_1.d = vsub_f32(v0, v2_1).d f* v1.d
    v0_1:4.d = v0_1:4.d f* v1.d
    arg2 = vadd_f32(v2_1, v0_1)
else if (x8 == 1)
    v8.d = *(x19 + 0x14)
    int128_t v0_2
    int128_t v2_2
    v0_2, arg1, v2_2 = fmodf(arg2, v8.d)
    int128_t v1_3 = v0_2
    v0_2.d = 0f
    
    if (v8.d f== 0f)
        v8.d = v0_2.d
    else
        v8.d = v1_3.d
    
    float v5_1
    
    if (v8.d f<= 0f)
        v5_1 = 0f
    else
        arg1 = zx.q(*(x19 + 0x10))
        v5_1 = fconvert.s(1f)
        
        if (v8.d f>= v5_1)
            if (arg1.d - 0xa u<= 9)
                v5_1 = *(&data_8692dc + (sx.q(arg1.d - 0xa) << 2))
            
            if (arg1.d - 0xa u>= 6 && arg1.d != 0x13)
                v0_2.d = fconvert.s(1f)
        else
            v1_3.d = 0f
            v2_2.d = fconvert.s(1f)
            float v0_4 = XCurveEvalNormal(arg1, v8.d, v1_3.d, v2_2.d)
            arg1, v0_2, v1_3, v2_2 = XCurveEvalNormal(zx.q(*(x19 + 0x10)), v8.d, 0f, fconvert.s(1f))
            v5_1 = v0_4
    
    v1_3.q = *x19
    v2_2.q = *(x19 + 8)
    int128_t v3_1 = vsub_f32(v1_3, v1_3)
    double v4_1 = vsub_f32(v2_2, v2_2)
    v3_1.d = v3_1.d f* v5_1
    v3_1:4.d = v3_1:4.d f* v5_1
    v0_2.d = v4_1.d f* v0_2.d
    v0_2:4.d = v4_1:4.d f* v0_2.d
    v1 = vadd_f32(v1_3, v3_1)
    int128_t v0_7 = vsub_f32(vadd_f32(v2_2, v0_2), v1)
    v2_2.q = 0
    arg2 = vadd_f32(v1, vmul_f32(v0_7, v2_2, 0))
else
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        PropGraph<ColorRgbaI>* x0_2
        PropGraph<ColorRgbaI>* x1_2
        BlendDef* x2_1
        float v0_9
        float v1_5
        float v2_4
        x0_2, x1_2, x2_1, v0_9, v1_5, v2_4 = XNoReturn()
        return PropEval<ColorRgbaI>(x0_2, v0_9, x1_2, v1_5, x2_1, v2_4) __tailcall
    
    arg2 = (*x19).d

v1.d = arg2
return arg1
