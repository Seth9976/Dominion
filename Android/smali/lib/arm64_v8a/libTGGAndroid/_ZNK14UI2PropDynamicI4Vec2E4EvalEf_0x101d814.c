// 函数: _ZNK14UI2PropDynamicI4Vec2E4EvalEf
// 地址: 0x101d814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_38 = v11
int64_t v10
int64_t var_30 = v10
int64_t v9
int64_t var_28 = v9
int64_t v8
int64_t var_20 = v8
uint64_t entry_x0
PropGraph<Vec2>* x19 = entry_x0
int64_t v12
v12.d = arg1 - *(entry_x0 + 0xbc)

if (not(v12.d f< *(entry_x0 + 0xac) + *(entry_x0 + 0xa8)) && *(x19 + 0x9c) s<= 1)
    *(x19 + 0x54)
    *(x19 + 0x58)
    return 

int64_t v0
int64_t v1_1
v0, v1_1 = GraphEval<Vec2>(x19, arg1 - *(x19 + 0xb8))
int64_t v0_2
int64_t v1_2
entry_x0, v0_2, v1_2 = GraphEval<Vec2>(x19 + 0x54, v12.d)
v11 = v0_2
v10 = v1_2
v1_2.d = *(x19 + 0xa8)
v0_2.d = *(x19 + 0xac)
float v2_1 = v12.d f- v0_2.d

if (v1_2.d f!= 0f)
    v0_2.d = 0f
    
    if (not(v2_1 < 0f))
        v0_2.d = fconvert.s(1f)
        
        if (not(v2_1 f>= v1_2.d))
            float v3_1 = v2_1 f/ v1_2.d
            v0_2.d = 0f
            
            if (not(v3_1 <= 0f))
                entry_x0 = zx.q(*(x19 + 0xb0))
                v0_2.d = fconvert.s(1f)
                
                if (not(v3_1 f>= v0_2.d))
                    v1_2.d = 0f
                    entry_x0, v0_2, v1_2 = XCurveEvalNormal(entry_x0, v3_1, v1_2.d, fconvert.s(1f))
                else if (entry_x0.d - 0xa u< 0xa)
                    v0_2.d = *(&data_8692dc + (sx.q(entry_x0.d - 0xa) << 2))
else
    v0_2.d = fconvert.s(1f)
    v1_2.d = 0f
    
    if (v2_1 < 0f)
        v0_2.d = v1_2.d
    else
        v0_2.d = v0_2.d

v1_2.d = v11.d f- v0.d
v1_2.d = v1_2.d f* v0_2.d
v2_1 = (v10.d f- v1_1.d) f* v0_2.d
v0_2.d = v0.d f+ v1_2.d
v1_2.d = v1_1.d f+ v2_1
