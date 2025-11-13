// 函数: _Z8PropEvalI5RectFET_RK9PropGraphIS1_EfS5_fRK8BlendDeff
// 地址: 0x1046310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = GraphEval<RectF>(arg1, arg2)
uint64_t result
float v0_2
float v1_1
float v2_1
int128_t v3_1
result, v0_2, v1_1, v2_1, v3_1 = GraphEval<RectF>(arg3, arg4)
float v13_1 = v1_1
v1_1 = *arg5
v2_1 = arg6 - *(arg5 + 4)
float v4_1

if (v1_1 != 0f)
    v0_2 = 0f
    
    if (not(v2_1 < 0f))
        v0_2 = fconvert.s(1f)
        
        if (not(v2_1 >= v1_1))
            v4_1 = v2_1 / v1_1
            v0_2 = 0f
            
            if (not(v4_1 <= 0f))
                result = zx.q(*(arg5 + 8))
                v0_2 = fconvert.s(1f)
                
                if (not(v4_1 >= v0_2))
                    result, v0_2 = XCurveEvalNormal(result, v4_1, 0f, fconvert.s(1f))
                else if (result.d - 0xa u< 0xa)
                    v0_2 = *(&data_8692dc + (sx.q(result.d - 0xa) << 2))
else if (v2_1 < 0f)
    v0_2 = 0f
else
    v0_2 = fconvert.s(1f)

v4_1 = v3_1.d f- v3
v3_1.d = (v13_1 - v1) * v0_2
v3_1.d = v3 + v4_1 * v0_2
return result
