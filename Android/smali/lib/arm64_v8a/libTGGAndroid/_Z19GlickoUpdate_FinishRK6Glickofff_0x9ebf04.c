// 函数: _Z19GlickoUpdate_FinishRK6Glickofff
// 地址: 0x9ebf04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v12
int64_t var_48 = v12
float v10 = arg2
arg2 = *(arg1 + 8)
int64_t v13 = arg4.q
int64_t v9
v9.d = arg3 * arg3
float x = logf(arg2 * arg2)
float v0 = *(arg1 + 4)
v0 = v0 * v0
int64_t v14
v14.d = v0 + v10
float var_68 = v0
int64_t v11
v11.d = v9.d f- v0 - v10
float var_18 = v10
float var_14 = v14.d

if (v9.d f<= v14.d)
    v9.d = v13.d f* v13.d
    v15.d = fconvert.s(1f)
    
    while (true)
        v12.d = x - v15.d f* v13.d
        v0 = expf(v12.d)
        float v2_3 = v14.d f+ v0
        v10 = v12.d f- x
        v14.d = v0 * (v11.d f- v0) / (v2_3 * (v2_3 + v2_3)) - v10 f/ v9.d
        
        if (v14.d f>= 0f)
            break
        
        v14.d = var_14
        v15.d = v15.d f+ fconvert.s(1f)
else
    int64_t v0_2 = logf(v11.d)
    v12 = v0_2
    v9.d = v13.d f* v13.d
    float v0_3 = expf(v0_2.d)
    float v2 = v14.d f+ v0_3
    v10 = v12.d f- x
    v14.d = v0_3 * (v11.d f- v0_3) / (v2 * (v2 + v2)) - v10 f/ v9.d

int64_t v0_5 = expf(x)
float x_1

if (fabs(v10) <= float.s(0x3727c5ac))
    x_1 = x
else
    float v1_1 = v0_5.d f+ var_14
    v0_5.d = v0_5.d f* (v11.d f- v0_5.d)
    v0_5.d = v0_5.d f/ (v1_1 * (v1_1 + v1_1))
    v15.d = v0_5.d f- (x - x) f/ v9.d
    x_1 = x
    
    do
        v0_5.d = x_1 f- v12.d
        v0_5.d = v15.d f* v0_5.d
        v0_5.d = v0_5.d f/ (v14.d f- v15.d)
        v13.d = x_1 f+ v0_5.d
        v0_5 = expf(v13.d)
        float v2_2 = var_14 f+ v0_5.d
        v0_5.d = v0_5.d f* (v11.d f- v0_5.d)
        v0_5.d = v0_5.d f/ (v2_2 * (v2_2 + v2_2))
        v0_5.d = v0_5.d f- (v13.d f- x) f/ v9.d
        v1_1 = v14.d f* v0_5.d
        v1_1 - 0f
        
        if (not(v1_1 > 0f))
            x_1 = v12.d
        
        if (v1_1 > 0f)
            v15.d = v15.d f* fconvert.s(0.5f)
        else
            v15.d = v14.d
        
        v12 = v13
        v14 = v0_5
    while (fabs(v13.d f- x_1) > float.s(0x3727c5ac))

v0_5.d = fconvert.s(0.5f)
v0_5.d = x_1 f* v0_5.d
int64_t result
int128_t v0_8
v0_8, result = expf(v0_5.d)
v0_8.d = v0_8.d f* v0_8.d
float v1_3 = fconvert.s(1f)
v0_8.d = var_68 f+ v0_8.d
v0_8.d = v1_3 f/ v0_8.d
v0_8.d = v1_3 / var_18 f+ v0_8.d
v0_8.d = sqrt(v0_8.d)
v1_3 = v1_3 f/ v0_8.d
v0_8.d = *arg1
v0_8.d = v1_3 * v1_3 * arg3 / var_18 f+ v0_8.d
return result
