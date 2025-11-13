// 函数: _Z9GraphEvalIiET_RK9PropGraphIS0_Ef
// 地址: 0x1046b48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_30 = v11
int64_t v10
int64_t var_28 = v10
int64_t v9
int64_t var_20 = v9
int32_t x8 = *(arg1 + 0x30)
int32_t x8_2
float v0
int64_t v8

if (x8 == 2)
    v8.d = *(arg1 + 0xc)
    int64_t x0_1
    int64_t x1_1
    int32_t n
    v0, x0_1, x1_1, n = fmodf(arg2, v8.d)
    float v1_1 = 0f
    
    if (v8.d f== 0f)
        v0 = v1_1
    
    if (not(v0 <= 0f))
        v1_1 = fconvert.s(1f)
        
        if (not(v0 >= v1_1))
            v1_1 = (fconvert.s(1f) - cosf(x0_1, x1_1, n, v0 * *CIRCLE_FULL)) * fconvert.s(0.5f) + 0f
    
    x8_2 = *arg1
    v1_1 = v1_1 * float.s(*(arg1 + 0x10) - x8_2)
    
    if (v1_1 < 0f)
        v0 = fconvert.s(-0.5f)
    else
        v0 = fconvert.s(0.5f)
    
    v0 = v1_1 + v0
else
    if (x8 != 1)
        if (x8 == 0)
            return *arg1
        
        pthread_kill(pthread_self(), 6)
        UI2State* x0_6
        UI2State* x1_2
        std::__ndk1::__less<UI2State, UI2State>* x2_1
        x0_6, x1_2, x2_1 = XNoReturn()
        return std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(x0_6, x1_2, 
            x2_1) __tailcall
    
    v8.d = *(arg1 + 0xc)
    v0 = fmodf(arg2, v8.d)
    v10.d = 0f
    
    if (v8.d f== 0f)
        v8.d = v10.d
    else
        v8.d = v0
    
    float v1_3 = 0f
    v0 = 0f
    
    if (not(v8.d f<= 0f))
        v1_3 = 0f
        v0 = 0f
        
        if (not(v8.d f>= fconvert.s(1f)))
            v11.d = 0f
            int64_t v0_2 = XCurveEvalNormal(zx.q(*(arg1 + 8)), v8.d, 0f, fconvert.s(1f))
            v0 = XCurveEvalNormal(zx.q(*(arg1 + 8)), v8.d, 0f, fconvert.s(1f)) f* v11.d
            v1_3 = v0_2.d f* v11.d
    
    float v2_2 = fconvert.s(0.5f)
    float v3_1 = fconvert.s(-0.5f)
    int32_t x9_2 = *(arg1 + 4)
    float v4_1
    
    v4_1 = v1_3 < 0f ? v3_1 : v2_2
    
    v1_3 = v1_3 + v4_1
    
    v4_1 = v0 < 0f ? v3_1 : v2_2
    
    x8_2 = *arg1 + vcvts_s32_f32(v1_3)
    v0 = float.s(x9_2 + vcvts_s32_f32(v0 + v4_1) - x8_2) f* v10.d
    
    v1_3 = v0 < 0f ? v3_1 : v2_2
    
    v0 = v0 + v1_3
return x8_2 + vcvts_s32_f32(v0)
