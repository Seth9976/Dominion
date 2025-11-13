// 函数: _spTransformConstraint_applyAbsoluteWorld
// 地址: 0xfb9a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
double v12
double var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
void* x20 = arg1[3]
int128_t v1
v1.d = *(x20 + 0x70)
double result
result.d = *(x20 + 0x74)
double v2
v2.d = *(x20 + 0x64)
int128_t v3
v3.d = *(x20 + 0x68)
float x = v3.d
int32_t var_e0 = result.d
float x_1 = v2.d
int32_t var_d4 = v1.d
result.d = v2.d f* result.d
v1.d = v3.d f* v1.d
result.d = result.d f- v1.d
v1.d = float.s(0xbc8efa35)
bool cond:0 = result.d f> 0f
result.d = float.s(0x3c8efa35)

if (cond:0)
    result.d = result.d
else
    result.d = v1.d

if (arg1[1].d s>= 1)
    v1.d = x_1
    v2.d = var_d4
    v3.d = x
    int64_t v4
    v4.d = var_e0
    void* x8_1 = *arg1
    v9.d = arg1[4].d
    v11.d = *(arg1 + 0x24)
    v1.d = v1.d f* v1.d
    v2.d = v2.d f* v2.d
    v3.d = v3.d f* v3.d
    v4.d = v4.d f* v4.d
    v1.d = v1.d f+ v2.d
    v2.d = v3.d f+ v4.d
    v3.d = *(x8_1 + 0x38)
    v4.d = *(x8_1 + 0x4c)
    v8.d = arg1[5].d
    v10.d = *(arg1 + 0x2c)
    float v5 = sqrt(v1.d)
    v1.d = sqrt(v2.d)
    int64_t i = 0
    int32_t var_f0_1 = v1.d
    v1.d = v3.d f* result.d
    result.d = v4.d f* result.d
    float var_dc_1 = v1.d
    float var_e8_1 = result.d
    
    do
        void* x27_1 = *(arg1[2] + (i << 3))
        int32_t x8_4
        
        if (v9.d f== 0f)
            x8_4 = 0
            
            if (v11.d f!= 0f)
            label_fb9c40:
                void* x8_5 = *arg1
                result.d = *(x8_5 + 0x3c)
                v1.d = *(x8_5 + 0x40)
                int32_t var_98
                int32_t var_94
                result, v1, v2, v3, v4 = spBone_localToWorld(x20, &var_94, &var_98, result, v1)
                result.d = var_94
                v1.d = *(x27_1 + 0x6c)
                v2.d = *(x27_1 + 0x78)
                x8_4 = 1
                result.d = result.d f- v1.d
                result.d = v11.d f* result.d
                result.d = v1.d f+ result.d
                *(x27_1 + 0x6c) = result.d
                result.d = var_98
                result.d = result.d f- v2.d
                result.d = v11.d f* result.d
                result.d = v2.d f+ result.d
                *(x27_1 + 0x78) = result.d
        else
            v1.q = *(x27_1 + 0x64)
            double var_d0_1 = *(x27_1 + 0x70)
            int64_t var_c0_1 = v1.q
            v1.d = x_1
            result.d = var_d4
            double v0_1
            float y
            v0_1, y = atan2f(result.d, v1.d, v2.d)
            float v0_2 = var_dc_1 + v0_1.d f- atan2f(var_d0_1.d, var_c0_1.d, y)
            
            if (not(v0_2 <= float.s(0x40490fdb)))
                v0_2 = v0_2 + float.s(0xc0c90fdb)
            else if (not(v0_2 >= float.s(0xc0490fdb)))
                v0_2 = v0_2 + float.s(0x40c90fdb)
            
            float cosp_1
            float sinp_1
            int128_t v0_3
            int128_t v2_2
            v0_3, v1, v2_2, v3 = sincosf(&sinp_1, &cosp_1, v9.d f* v0_2)
            v0_3.d = cosp_1
            v1.d = sinp_1
            x8_4 = 1
            v2_2.d = var_c0_1.d f* v0_3.d
            v2_2:4.d = var_c0_1:4.d f* v0_3.d
            v3.d = var_d0_1.d f* v1.d
            v3:4.d = var_d0_1:4.d f* v1.d
            v1.d = var_c0_1.d f* v1.d
            v1:4.d = var_c0_1:4.d f* v1.d
            v0_3.d = var_d0_1.d f* v0_3.d
            v0_3:4.d = var_d0_1:4.d f* v0_3.d
            v2 = vsub_f32(v2_2, v3)
            result = vadd_f32(v1, v0_3)
            *(x27_1 + 0x64) = v2
            *(x27_1 + 0x70) = result
            
            if (not(v11.d f== 0f))
                goto label_fb9c40
        
        if (not(v8.d f<= 0f))
            v2.d = *(x27_1 + 0x64)
            result.d = *(x27_1 + 0x70)
            v1.d = v2.d f* v2.d
            v3.d = result.d f* result.d
            v1.d = v1.d f+ v3.d
            v1.d = sqrt(v1.d)
            v3.d = float.s(0x3727c5ac)
            
            if (not(v1.d f<= v3.d))
                v4.d = v5
                v3.d = *(*arg1 + 0x44)
                v4.d = v4.d f- v1.d
                v3.d = v4.d f+ v3.d
                v3.d = v8.d f* v3.d
                v3.d = v1.d f+ v3.d
                v1.d = v3.d f/ v1.d
            
            v4.d = v2.d f* v1.d
            v2.d = *(x27_1 + 0x68)
            v3.d = *(x27_1 + 0x74)
            v1.d = result.d f* v1.d
            *(x27_1 + 0x64) = v4.d
            result.d = v2.d f* v2.d
            v4.d = v3.d f* v3.d
            result.d = result.d f+ v4.d
            result.d = sqrt(result.d)
            v4.d = float.s(0x3727c5ac)
            *(x27_1 + 0x70) = v1.d
            
            if (not(result.d f<= v4.d))
                v4.d = var_f0_1
                v1.d = *(*arg1 + 0x48)
                v4.d = v4.d f- result.d
                v1.d = v4.d f+ v1.d
                v1.d = v8.d f* v1.d
                v1.d = result.d f+ v1.d
                result.d = v1.d f/ result.d
            
            v1.d = v2.d f* result.d
            result.d = v3.d f* result.d
            *(x27_1 + 0x68) = v1.d
            *(x27_1 + 0x74) = result.d
            
            if (not(v10.d f<= 0f))
                goto label_fb9d50
            
            *(x27_1 + 0x60) = 0
        else if (not(v10.d f<= 0f))
        label_fb9d50:
            v12.d = *(x27_1 + 0x68)
            v13.d = *(x27_1 + 0x74)
            int64_t v0_5
            float y_1
            v0_5, y_1 = atan2f(v13.d, v12.d, v2.d)
            v14 = v0_5
            v0_5.d = var_e0
            int64_t v0_6
            float y_2
            v0_6, y_2 = atan2f(v0_5.d, x, y_1)
            v15 = v0_6
            v0_6.d = var_d4
            float v0_7 = atan2f(v0_6.d, x_1, y_2)
            float y_3 = *(x27_1 + 0x70)
            v15.d = v15.d f- v0_7
            float v0 = v15.d f- (v14.d f- atan2f(y_3, *(x27_1 + 0x64), y_3))
            
            if (v0 > float.s(0x40490fdb))
                v0 = v0 + float.s(0xc0c90fdb)
            else if (not(v0 >= float.s(0xc0490fdb)))
                v0 = v0 + float.s(0x40c90fdb)
            
            v12.d = sqrt(v12.d f* v12.d + v13.d f* v13.d)
            float cosp
            float sinp
            result, v1, v2, v3, v4 = sincosf(&sinp, &cosp, v14.d f+ v10.d f* (var_e8_1 + v0))
            result.d = cosp
            v1.d = sinp
            result.d = v12.d f* result.d
            v1.d = v12.d f* v1.d
            *(x27_1 + 0x68) = result.d
            *(x27_1 + 0x74) = v1.d
            *(x27_1 + 0x60) = 0
        else if (x8_4 != 0)
            *(x27_1 + 0x60) = 0
        
        i += 1
    while (i s< sx.q(arg1[1].d))

return result
