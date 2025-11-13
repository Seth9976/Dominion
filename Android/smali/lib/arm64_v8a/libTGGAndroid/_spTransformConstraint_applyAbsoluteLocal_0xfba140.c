// 函数: _spTransformConstraint_applyAbsoluteLocal
// 地址: 0xfba140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_70 = v12
int64_t var_68 = arg2.q
void* x20 = arg1[3]
int64_t v8
v8.d = arg1[4].d
uint128_t result
result.d = *(arg1 + 0x24)
int64_t v9
v9.d = arg1[5].d
int64_t v10
v10.d = *(arg1 + 0x2c)
uint128_t result_1 = result

if (*(x20 + 0x60) == 0)
    int128_t v1
    int128_t v3
    double v5
    double v7
    result, v1, v3, v5, v7 = spBone_updateAppliedTransform(x20)
    
    if (arg1[1].d s>= 1)
    label_fba1b4:
        int64_t i = 0
        arg2 = vdup_laneq_s32(result_1, 0)
        
        do
            void* x21_1 = *(arg1[2] + (i << 3))
            float v2
            
            if (*(x21_1 + 0x60) == 0)
                result, v1, v3, v5, v7 = spBone_updateAppliedTransform(x21_1)
                v2 = *(x21_1 + 0x4c)
                
                if (v8.d f!= 0f)
                label_fba210:
                    result.d = *(x20 + 0x4c)
                    v3.q = float.d(0x40d0001fffffffff)
                    v1.d = *(*arg1 + 0x38)
                    result.d = result.d f- v2
                    result.d = result.d f+ v1.d
                    v1.d = float.s(0xc3b40000)
                    v1.d = result.d f/ v1.d
                    v1.q = fconvert.d(v1.d)
                    v1.q = v1.q f+ v3.q
                    v1.d = float.s((0x4000 - vcvtd_s32_f64(v1.q)) * 0x168)
                    result.d = result.d f- v1.d
                    result.d = v8.d f* result.d
                    v2 = v2 f+ result.d
            else
                v2 = *(x21_1 + 0x4c)
                
                if (not(v8.d f== 0f))
                    goto label_fba210
            
            result.q = *(x21_1 + 0x44)
            
            if (not(result_1.d f== 0f))
                v1.q = *(x20 + 0x44)
                v3.q = *(*arg1 + 0x3c)
                result = vadd_f32(result, vmul_f32(arg2, vadd_f32(vsub_f32(v1, result), v3), 0))
            
            v3.d = *(x21_1 + 0x50)
            float v4 = *(x21_1 + 0x54)
            
            if (not(v9.d f== 0f))
                v1.q = fconvert.d(v3.d)
                
                if (not(v1.q f<= 1.0000000000000001e-05))
                    v1.d = *(x20 + 0x50)
                    v5.d = *(*arg1 + 0x44)
                    v1.d = v1.d f- v3.d
                    v1.d = v1.d f+ v5.d
                    v1.d = v9.d f* v1.d
                    v1.d = v3.d f+ v1.d
                    v3.d = v1.d f/ v3.d
                
                v1.q = fconvert.d(v4)
                
                if (not(v1.q f<= 1.0000000000000001e-05))
                    v1.d = *(x20 + 0x54)
                    v5.d = *(*arg1 + 0x48)
                    v1.d = v1.d f- v4
                    v1.d = v1.d f+ v5.d
                    v1.d = v9.d f* v1.d
                    v1.d = v4 f+ v1.d
                    v4 = v1.d f/ v4
            
            int32_t v6 = *(x21_1 + 0x5c)
            
            if (not(v10.d f== 0f))
                v1.d = *(x20 + 0x5c)
                v7.d = float.s(0xc3b40000)
                v5.d = *(*arg1 + 0x4c)
                v1.d = v1.d f- v6
                v1.d = v1.d f+ v5.d
                v7.d = v1.d f/ v7.d
                int32_t x8_16 =
                    (0x4000 - vcvtd_s32_f64(fconvert.d(v7.d) + float.d(0x40d0001fffffffff))) * 0x168
                v5.d = *(x21_1 + 0x40)
                v7.d = float.s(x8_16)
                v1.d = v1.d f- v7.d
                v1.d = v10.d f* v1.d
                v1.d = v5.d f+ v1.d
                *(x21_1 + 0x40) = v1.d
            
            v5.d = *(x21_1 + 0x58)
            v1.d = result:4.d
            result, v1, v3, v5, v7 =
                spBone_updateWorldTransformWith(x21_1, result, v1, v2, v3, v4, v5, v6)
            i += 1
        while (i s< sx.q(arg1[1].d))
else if (arg1[1].d s>= 1)
    goto label_fba1b4

arg2.q = var_68
return result
