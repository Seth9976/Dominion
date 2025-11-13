// 函数: _Z24DrawParentedStringFancy4RK7XStringRK4Mat4RK5RectFPK15FancyStringData10ColorRgbaISA_
// 地址: 0xf6f380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_70 = v13
int128_t entry_v12
int64_t var_68 = entry_v12.q
FancyStringData const* x20

x20 = arg6 == 0 ? arg4 : arg6

int32_t x25 = *(x20 + 0x1c)

if (x25 == 0)
    x25 = *(arg6 + 0x1c)

int128_t v8
v8.d = *arg3
int128_t v9
v9.d = *(arg3 + 4)
int128_t v10
v10.d = *(arg3 + 8)
int128_t v11
v11.d = *(arg3 + 0xc)
int64_t result
float v0
float v1
float v2
float v3
result, v0, v1, v2, v3 = RectScreen()
float v5 = *(arg2 + 4)

if (v5 == 0f)
    float v6_1 = *arg2
    float v7_1 = *(arg2 + 0xc)
    float v4_1 = 0f
    float v16_1 = *(arg2 + 8) * v4_1
    
    if (not(v2 < v7_1 + v9.d f* v5 + v8.d f* v6_1 + v16_1)
            && not(v0 > v7_1 + v16_1 + v11.d f* v5 + v10.d f* v6_1))
        v2 = *(arg2 + 0x14)
        v5 = *(arg2 + 0x10)
        v0 = *(arg2 + 0x1c)
        v4_1 = *(arg2 + 0x18) * v4_1
        
        if (not(v1 > v0 + v4_1 + v10.d f* v5 + v11.d f* v2)
                && v3 >= v0 + v8.d f* v5 + v9.d f* v2 + v4_1)
            goto label_f6f3f8
else
label_f6f3f8:
    
    if (x25 u<= 0xa && (1 << x25 & 0x470) != 0)
        entry_v12.d = *(arg3 + 8) - *arg3
        
        if (not(entry_v12.d f< float.s(0x3727c5ac)))
            v13.d = *(arg3 + 0xc) - *(arg3 + 4)
            
            if (not(v13.d f< float.s(0x3727c5ac)))
                float var_74
                v0 = WrapperDrawFancy(arg1, M4I, arg4, nullptr, zx.q(*gRgbaIWhite), x20, &var_74, 
                    nullptr)
                v1 = fconvert.s(0.5f)
                bool cond:0_1 = v0 f< v13.d
                v0 = v9.d f+ vrndm_f32((v13.d f- v0) * v1)
                
                if (cond:0_1)
                    v9.d = v0
                else
                    v9.d = v9.d
                
                if (x25 == 0xa)
                    v0 = (entry_v12.d f- var_74) * v1
                    v8.d = v8.d f+ v0
                    v10.d = v10.d f- v0
                
                v8.d = v8.d f+ float.s(0xba83126f)
                v10.d = v10.d f+ float.s(0x3a83126f)
    
    if (x25 - 7 u<= 2 && not(*(arg3 + 8) - *arg3 < float.s(0x3727c5ac)))
        entry_v12.d = *(arg3 + 0xc) - *(arg3 + 4)
        
        if (not(entry_v12.d f< float.s(0x3727c5ac)))
            float v0_1 = WrapperDrawFancy(arg1, M4I, arg4, nullptr, zx.q(*gRgbaIWhite), x20, 
                nullptr, nullptr)
            
            if (not(v0_1 f>= entry_v12.d))
                v9.d = v9.d f+ entry_v12.d f- v0_1
    
    result = WrapperDrawFancy(arg1, arg2, arg4, 1, zx.q(arg5), x20, nullptr, nullptr)

entry_v12.q = var_68
return result
