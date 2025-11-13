// 函数: _spTransformConstraint_applyRelativeLocal
// 地址: 0xfba37c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t var_48 = arg2.q
void* x20 = arg1[3]
int64_t v11
v11.d = arg1[4].d
uint128_t result
result.d = *(arg1 + 0x24)
int64_t v8
v8.d = arg1[5].d
int64_t v9
v9.d = *(arg1 + 0x2c)
uint128_t result_1 = result

if (*(x20 + 0x60) == 0)
    int128_t v1
    int128_t v3
    int128_t v4
    result, v1, v3, v4 = spBone_updateAppliedTransform(x20)
    
    if (arg1[1].d s>= 1)
    label_fba3e4:
        int64_t i = 0
        arg2 = vdup_laneq_s32(result_1, 0)
        float v2
        float v6
        
        if (v11.d f== 0f)
            v11.d = fconvert.s(-1f)
            v12.d = fconvert.s(1f)
            
            do
                void* x21_2 = *(arg1[2] + (i << 3))
                
                if (*(x21_2 + 0x60) == 0)
                    result, v1, v3, v4 = spBone_updateAppliedTransform(x21_2)
                
                v2 = *(x21_2 + 0x4c)
                result.q = *(x21_2 + 0x44)
                
                if (not(result_1.d f== 0f))
                    v1.q = *(x20 + 0x44)
                    v3.q = *(*arg1 + 0x3c)
                    result = vadd_f32(result, vmul_f32(arg2, vadd_f32(v1, v3), 0))
                
                v3.d = *(x21_2 + 0x50)
                v4.d = *(x21_2 + 0x54)
                
                if (not(v8.d f== 0f))
                    v1.d = float.s(0x3727c5ac)
                    
                    if (not(v3.d f<= v1.d))
                        v1.d = *(x20 + 0x50)
                        v1.d = v1.d f+ v11.d
                        v1.d = v1.d f+ *(*arg1 + 0x44)
                        v1.d = v8.d f* v1.d
                        v1.d = v1.d f+ v12.d
                        v3.d = v3.d f* v1.d
                    
                    v1.d = float.s(0x3727c5ac)
                    
                    if (not(v4.d f<= v1.d))
                        v1.d = *(x20 + 0x54)
                        v1.d = v1.d f+ v11.d
                        v1.d = v1.d f+ *(*arg1 + 0x48)
                        v1.d = v8.d f* v1.d
                        v1.d = v1.d f+ v12.d
                        v4.d = v4.d f* v1.d
                
                v6 = *(x21_2 + 0x5c)
                
                if (not(v9.d f== 0f))
                    v1.d = *(x20 + 0x5c)
                    v1.d = v1.d f+ *(*arg1 + 0x4c)
                    v1.d = v9.d f* v1.d
                    v6 = v6 f+ v1.d
                
                v1.d = result:4.d
                result, v1, v3, v4 = spBone_updateWorldTransformWith(x21_2, result, v1, v2, v3, v4, 
                    *(x21_2 + 0x58), v6)
                i += 1
            while (i s< sx.q(arg1[1].d))
        else
            v12.d = fconvert.s(-1f)
            v13.d = fconvert.s(1f)
            
            do
                void* x21_1 = *(arg1[2] + (i << 3))
                
                if (*(x21_1 + 0x60) == 0)
                    result, v1, v3, v4 = spBone_updateAppliedTransform(x21_1)
                
                void* x8_6 = *arg1
                v1.d = *(x21_1 + 0x4c)
                v2 = *(x20 + 0x4c)
                float v5 = *(x8_6 + 0x38)
                result.q = *(x21_1 + 0x44)
                
                if (not(result_1.d f== 0f))
                    v3.q = *(x20 + 0x44)
                    v4.q = *(x8_6 + 0x3c)
                    result = vadd_f32(result, vmul_f32(arg2, vadd_f32(v3, v4), 0))
                
                v3.d = *(x21_1 + 0x50)
                v4.d = *(x21_1 + 0x54)
                
                if (not(v8.d f== 0f))
                    if (not(v3.d f<= float.s(0x3727c5ac)))
                        v3.d = v3.d f* (v8.d f* (*(x20 + 0x50) f+ v12.d + *(x8_6 + 0x44)) f+ v13.d)
                    
                    if (not(v4.d f<= float.s(0x3727c5ac)))
                        v4.d = v4.d f* (v8.d f* (*(x20 + 0x54) f+ v12.d + *(x8_6 + 0x48)) f+ v13.d)
                
                v6 = *(x21_1 + 0x5c)
                
                if (not(v9.d f== 0f))
                    v6 = v6 + v9.d f* (*(x20 + 0x5c) + *(x8_6 + 0x4c))
                
                v2 = v1.d f+ v11.d f* (v2 + v5)
                v1.d = result:4.d
                result, v1, v3, v4 = spBone_updateWorldTransformWith(x21_1, result, v1, v2, v3, v4, 
                    *(x21_1 + 0x58), v6)
                i += 1
            while (i s< sx.q(arg1[1].d))
else if (arg1[1].d s>= 1)
    goto label_fba3e4

arg2.q = var_48
return result
