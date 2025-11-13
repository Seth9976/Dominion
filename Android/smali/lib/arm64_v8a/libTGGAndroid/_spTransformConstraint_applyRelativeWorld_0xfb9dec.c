// 函数: _spTransformConstraint_applyRelativeWorld
// 地址: 0xfb9dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t var_68 = arg2.q
int64_t v9
int64_t var_60 = v9
void* x20 = arg1[3]
int128_t v8
v8.d = *(x20 + 0x70)
double result
result.d = *(x20 + 0x74)
int128_t v1
v1.d = *(x20 + 0x64)
double v2
v2.d = *(x20 + 0x68)
float var_b8 = v2.d
float var_b4 = result.d
float x = v1.d
result.d = v1.d f* result.d
v1.d = v2.d f* v8.d
result.d = result.d f- v1.d
v1.d = float.s(0xbc8efa35)
bool cond:0 = result.d f> 0f
result.d = float.s(0x3c8efa35)

if (cond:0)
    result.d = result.d
else
    result.d = v1.d

if (arg1[1].d s>= 1)
    v1.d = x
    void* x8_1 = *arg1
    v2.d = v8.d f* v8.d
    v1.d = v1.d f* v1.d
    v1.d = v1.d f+ v2.d
    int128_t v3
    v3.d = fconvert.s(-1f)
    v1.d = sqrt(v1.d)
    v2.d = var_b8 * var_b8 + var_b4 * var_b4
    float v5 = v1.d f+ v3.d
    v1.d = *(x8_1 + 0x38)
    v14.d = arg1[4].d
    v15.d = *(arg1 + 0x24)
    v9.d = arg1[5].d
    v11.d = *(arg1 + 0x2c)
    v2.d = sqrt(v2.d)
    int64_t i = 0
    v2.d = v2.d f+ v3.d
    v1.d = v1.d f* result.d
    result.d = *(x8_1 + 0x4c) f* result.d
    int32_t var_c0_1 = v2.d
    float var_bc_1 = v5
    float var_b0_1 = v1.d
    float var_c4_1 = result.d
    
    do
        void* x27_1 = *(arg1[2] + (i << 3))
        int32_t x8_4
        
        if (v14.d f== 0f)
            x8_4 = 0
            
            if (v15.d f!= 0f)
            label_fba010:
                void* x8_5 = *arg1
                result.d = *(x8_5 + 0x3c)
                v1.d = *(x8_5 + 0x40)
                int32_t var_98
                int32_t var_94
                result, v1, v2, v3 = spBone_localToWorld(x20, &var_94, &var_98, result, v1)
                result.d = var_94
                v1.d = *(x27_1 + 0x6c)
                x8_4 = 1
                result.d = v15.d f* result.d
                result.d = v1.d f+ result.d
                *(x27_1 + 0x6c) = result.d
                result.d = var_98
                v1.d = *(x27_1 + 0x78)
                result.d = v15.d f* result.d
                result.d = v1.d f+ result.d
                *(x27_1 + 0x78) = result.d
        else
            v1.d = x
            v12 = *(x27_1 + 0x64)
            v13 = *(x27_1 + 0x70)
            float v0_3 = var_b0_1 + atan2f(v8.d, v1.d, v2.d)
            
            if (not(v0_3 <= float.s(0x40490fdb)))
                v0_3 = v0_3 + float.s(0xc0c90fdb)
            else if (not(v0_3 >= float.s(0xc0490fdb)))
                v0_3 = v0_3 + float.s(0x40c90fdb)
            
            float cosp_1
            float sinp_1
            int128_t v0_4
            int128_t v2_2
            v0_4, v1, v2_2, v3 = sincosf(&sinp_1, &cosp_1, v14.d f* v0_3)
            v0_4.d = cosp_1
            v1.d = sinp_1
            x8_4 = 1
            v2_2.d = v12.d f* v0_4.d
            v2_2:4.d = v12:4.d f* v0_4.d
            v3.d = v13.d f* v1.d
            v3:4.d = v13:4.d f* v1.d
            v1.d = v12.d f* v1.d
            v1:4.d = v12:4.d f* v1.d
            v0_4.d = v13.d f* v0_4.d
            v0_4:4.d = v13:4.d f* v0_4.d
            v2 = vsub_f32(v2_2, v3)
            result = vadd_f32(v1, v0_4)
            *(x27_1 + 0x64) = v2
            *(x27_1 + 0x70) = result
            
            if (not(v15.d f== 0f))
                goto label_fba010
        
        if (not(v9.d f<= 0f))
            v1.d = *(x27_1 + 0x64)
            v2.d = *(x27_1 + 0x68)
            v3.d = *(x27_1 + 0x70)
            float v4 = *(x27_1 + 0x74)
            result.d = *(*arg1 + 0x44)
            result.d = var_bc_1 f+ result.d
            result.d = v9.d f* result.d
            v5 = fconvert.s(1f)
            result.d = result.d f+ v5
            v1.d = v1.d f* result.d
            result.d = v3.d f* result.d
            *(x27_1 + 0x64) = v1.d
            *(x27_1 + 0x70) = result.d
            v1.d = var_c0_1
            result.d = *(*arg1 + 0x48)
            result.d = v1.d f+ result.d
            result.d = v9.d f* result.d
            result.d = result.d f+ v5
            v1.d = v2.d f* result.d
            result.d = v4 f* result.d
            *(x27_1 + 0x68) = v1.d
            *(x27_1 + 0x74) = result.d
            
            if (not(v11.d f<= 0f))
                goto label_fba0cc
            
            *(x27_1 + 0x60) = 0
        else if (not(v11.d f<= 0f))
        label_fba0cc:
            v1.d = var_b8
            result.d = var_b4
            int64_t v0_5
            float y_1
            v0_5, y_1 = atan2f(result.d, v1.d, v2.d)
            arg2 = v8
            float v0
            float y_2
            v0, y_2 = atan2f(v8.d, x, y_1)
            v8.d = v0_5.d f- v0
            
            if (v8.d f> float.s(0x40490fdb))
                v8.d = v8.d f+ float.s(0xc0c90fdb)
            else if (not(v8.d f>= float.s(0xc0490fdb)))
                v8.d = v8.d f+ float.s(0x40c90fdb)
            
            v12.d = *(x27_1 + 0x68)
            v13.d = *(x27_1 + 0x74)
            float y = atan2f(v13.d, v12.d, y_2) + v11.d f* (var_c4_1 + v8.d f+ float.s(0xbfc90fdb))
            v8.d = sqrt(v12.d f* v12.d + v13.d f* v13.d)
            float cosp
            float sinp
            result, v1, v2, v3 = sincosf(&sinp, &cosp, y)
            result.d = cosp
            v1.d = sinp
            result.d = result.d f* v8.d
            v1.d = v1.d f* v8.d
            v8 = arg2
            *(x27_1 + 0x68) = result.d
            *(x27_1 + 0x74) = v1.d
            *(x27_1 + 0x60) = 0
        else if (x8_4 != 0)
            *(x27_1 + 0x60) = 0
        
        i += 1
    while (i s< sx.q(arg1[1].d))

arg2.q = var_68
return result
