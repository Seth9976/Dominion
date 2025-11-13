// 函数: _ZNK14UI2PropDynamicIfE4EvalEf
// 地址: 0x101e01c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_28 = v9
int64_t v8
int64_t var_20 = v8
uint64_t entry_x0
PropGraph<float>* x19 = entry_x0
int64_t v10
v10.d = arg1 - *(entry_x0 + 0x8c)

if (not(v10.d f< *(entry_x0 + 0x7c) + *(entry_x0 + 0x78)) && *(x19 + 0x6c) s<= 1)
    *(x19 + 0x3c)
    return 

int64_t v0 = GraphEval<float>(x19, arg1 - *(x19 + 0x88))
int64_t v0_2
v0_2, entry_x0 = GraphEval<float>(x19 + 0x3c, v10.d)
v9 = v0_2
float v1_1 = *(x19 + 0x78)
v0_2.d = *(x19 + 0x7c)
float v2_1 = v10.d f- v0_2.d

if (v1_1 != 0f)
    v0_2.d = 0f
    
    if (not(v2_1 < 0f))
        v0_2.d = fconvert.s(1f)
        
        if (not(v2_1 >= v1_1))
            float v3_1 = v2_1 / v1_1
            v0_2.d = 0f
            
            if (not(v3_1 <= 0f))
                entry_x0 = zx.q(*(x19 + 0x80))
                v0_2.d = fconvert.s(1f)
                
                if (not(v3_1 f>= v0_2.d))
                    entry_x0, v0_2 = XCurveEvalNormal(entry_x0, v3_1, 0f, fconvert.s(1f))
                else if (entry_x0.d - 0xa u< 0xa)
                    v0_2.d = *(&data_8692dc + (sx.q(entry_x0.d - 0xa) << 2))
else
    v0_2.d = fconvert.s(1f)
    
    if (v2_1 < 0f)
        v0_2.d = 0f
    else
        v0_2.d = v0_2.d

v0_2.d = (v9.d f- v0.d) f* v0_2.d
v0_2.d = v0.d f+ v0_2.d
