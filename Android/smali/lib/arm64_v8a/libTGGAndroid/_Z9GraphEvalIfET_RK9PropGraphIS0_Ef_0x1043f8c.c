// 函数: _Z9GraphEvalIfET_RK9PropGraphIS0_Ef
// 地址: 0x1043f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x30)
int64_t v8

if (x8 == 2)
    v8.d = *(arg1 + 0xc)
    int64_t x0
    int64_t x1
    int32_t n
    float v0
    v0, x0, x1, n = fmodf(arg2, v8.d)
    float v1_1 = 0f
    
    if (v8.d f== 0f)
        v0 = v1_1
    
    if (not(v0 <= 0f))
        v1_1 = fconvert.s(1f)
        
        if (not(v0 >= v1_1))
            v1_1 = (fconvert.s(1f) - cosf(x0, x1, n, v0 * *CIRCLE_FULL)) * fconvert.s(0.5f) + 0f
    
    v0 = *arg1
    return v0 + v1_1 * (*(arg1 + 0x10) - v0)

if (x8 != 1)
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return UI2::UI2() __tailcall
    
    return *arg1

v8.d = *(arg1 + 0xc)
float v0_1 = fmodf(arg2, v8.d)
int64_t v10
v10.d = 0f
int64_t v9

if (v8.d f== 0f)
    v9.d = v10.d
else
    v9.d = v0_1

v8.d = 0f
v0_1 = 0f

if (not(v9.d f<= 0f))
    uint64_t x0_1 = zx.q(*(arg1 + 8))
    v8.d = fconvert.s(1f)
    
    if (v9.d f>= v8.d)
        if (x0_1.d - 0xa u<= 9)
            v8.d = *(&data_8692dc + (sx.q(x0_1.d - 0xa) << 2))
        
        if (x0_1.d - 0xa u>= 6 && x0_1.d != 0x13)
            v0_1 = fconvert.s(1f)
        else
            v0_1 = 0f
    else
        v8 = XCurveEvalNormal(x0_1, v9.d, 0f, fconvert.s(1f))
        v0_1 = XCurveEvalNormal(zx.q(*(arg1 + 8)), v9.d, 0f, fconvert.s(1f))

float v1_3 = *arg1
float v2_2 = *(arg1 + 4)
v1_3 = v1_3 + v8.d f* (v1_3 - v1_3)
return v1_3 + (v2_2 + v0_1 * (v2_2 - v2_2) - v1_3) f* v10.d
