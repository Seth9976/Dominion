// 函数: _ZNK14UI2PropDynamicIiE4EvalEf
// 地址: 0x1022c70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

PropGraph<int32_t>* entry_x0
int64_t v8
v8.d = arg1 - *(entry_x0 + 0x8c)

if (not(v8.d f< *(entry_x0 + 0x7c) + *(entry_x0 + 0x78)) && *(entry_x0 + 0x6c) s<= 1)
    return zx.q(*(entry_x0 + 0x3c))

int32_t x0_1 = GraphEval<int32_t>(entry_x0, arg1 - *(entry_x0 + 0x88))
int32_t x0_3 = GraphEval<int32_t>(entry_x0 + 0x3c, v8.d)
float v1_1 = *(entry_x0 + 0x78)
float v2_1 = v8.d f- *(entry_x0 + 0x7c)
float v0_1

if (v1_1 != 0f)
    v0_1 = 0f
    
    if (not(v2_1 < 0f))
        v0_1 = fconvert.s(1f)
        
        if (not(v2_1 >= v1_1))
            float v3_1 = v2_1 / v1_1
            v0_1 = 0f
            
            if (not(v3_1 <= 0f))
                uint64_t x0_4 = zx.q(*(entry_x0 + 0x80))
                v0_1 = fconvert.s(1f)
                
                if (not(v3_1 >= v0_1))
                    v0_1 = XCurveEvalNormal(x0_4, v3_1, 0f, fconvert.s(1f))
                else if (x0_4.d - 0xa u< 0xa)
                    v0_1 = *(&data_8692dc + (sx.q(x0_4.d - 0xa) << 2))
else if (v2_1 < 0f)
    v0_1 = 0f
else
    v0_1 = fconvert.s(1f)

v0_1 = v0_1 * float.s(x0_3 - x0_1)

if (v0_1 < 0f)
    v1_1 = fconvert.s(-0.5f)
else
    v1_1 = fconvert.s(0.5f)

return zx.q(x0_1 + vcvts_s32_f32(v0_1 + v1_1))
