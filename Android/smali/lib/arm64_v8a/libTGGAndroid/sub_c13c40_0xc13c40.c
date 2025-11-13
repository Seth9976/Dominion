// 函数: sub_c13c40
// 地址: 0xc13c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t x0_1
int128_t result
int128_t v1
int128_t v2
x0_1, result, v1, v2 = (*(arg1 + 0x74))(arg1 + 0x6c)

if (x0_1 != 0)
    v1.q = *(arg2 + 0x18)
    v2.q = *(arg2 + 0x20)
    int64_t x28_1 = 0
    result.q = **(arg2 + 8)
    int32_t x8_2 = 1
    v9.d = fconvert.s(0.5f)
    uint128_t v0_2 = vmul_f32(vsub_f32(v1, result), vrev64_s32(vsub_f32(v2, result)), 0)
    result = vsub_f32(v0_2, vdup_laneq_s32(v0_2, 1))
    result.d f- 0f
    uint64_t x23_1 = zx.q(result.d f> 0f ? 1 : 0)
    uint64_t x24_1 = zx.q(result.d f<= 0f ? 1 : 0)
    int32_t x26_1
    
    do
        int64_t* x0_3 = *(arg1 + 0x4c)
        x26_1 = x8_2
        int128_t v1_2
        
        if (x0_3 == 0 || *x0_3 u<= 0x33)
            x0_3, result, v1_2, v2 = (*(arg1 + 0xa4))(*(arg1 + 0x9c), 0x10000)
            *x0_3 = 0xffe8
            x0_3[1] = *(arg1 + 0x4c)
            x0_3[2] = &x0_3[3]
            *(arg1 + 0x4c) = x0_3
        
        int64_t x8_6 = x0_3[2]
        int64_t x28_2 = x28_1 << 3
        int64_t x11_1 = x28_2 ^ 8
        int64_t* x27_1 = (x8_6 + 7) & 0xfffffffffffffff8
        x0_3[2] = x27_1 + 0x2c
        void** x9_5 = *(arg1 + 0x4c)
        *x9_5 = *x9_5 + x8_6 - x27_1 - 0x2c
        *x27_1 = 0
        x27_1[1] = arg2
        x27_1[2] = *(arg2 + 8 + x11_1)
        x27_1[3 + x24_1] = *(arg2 + 0x18 + x28_2)
        x27_1[3 + x23_1] = *(arg2 + 0x18 + x11_1)
        v2.d = *(x27_1 + 0x1c)
        result.d = x27_1[4].d
        v1_2.d = x27_1[3].d
        int32_t* x8_13 = (arg2 + 8)[x28_1]
        result.d = v1_2.d f+ result.d
        v1_2.d = *x8_13
        v2.d = v2.d f+ *(x27_1 + 0x24)
        v2.d = v2.d f* v9.d
        result.d = result.d f* v9.d
        v8.d = v2.d f- x8_13[1]
        v1_2.d = result.d f- v1_2.d
        result, v1_2, v2 = atan2f(v8.d, v1_2.d, v2.d)
        v1_2.d = float.s(0x40c90fdb)
        v1_2.d = result.d f+ v1_2.d
        
        if (v8.d f< 0f)
            result.d = v1_2.d
        else
            result.d = result.d
        
        x27_1[5].d = result.d
        void* x8_14 = (arg2 + 8)[x28_1]
        int64_t** x9_7 = *(x8_14 + 0xc)
        
        if (x9_7 != 0)
            v1_2.d = x9_7[5].d
        
        if (x9_7 == 0 || v1_2.d f>= result.d)
            *x27_1 = x9_7
            *(x8_14 + 0xc) = x27_1
        label_c13eb0:
            int64_t* x8_16 = *x27_1
            
            if (x8_16 != 0)
                result.d = x27_1[5].d
                v1_2.d = x8_16[5].d
                result.d = result.d f- v1_2.d
                v1_2.d = fneg(result.d)
                
                if (result.d f< 0f)
                    result.d = v1_2.d
                else
                    result.d = result.d
                
                v1_2.d = float.s(0x34000000)
                
                if (not(result.d f>= v1_2.d))
                    result.d = *(x27_1 + 0x1c)
                    v1_2.d = *(x8_16 + 0x1c)
                    result.d = result.d f- v1_2.d
                    v1_2.d = fneg(result.d)
                    
                    if (result.d f< 0f)
                        result.d = v1_2.d
                    else
                        result.d = result.d
                    
                    v1_2.d = float.s(0x34000000)
                    
                    if (not(result.d f>= v1_2.d))
                        result.d = x27_1[3].d
                        v1_2.d = x8_16[3].d
                        result.d = result.d f- v1_2.d
                        v1_2.d = fneg(result.d)
                        
                        if (result.d f< 0f)
                            result.d = v1_2.d
                        else
                            result.d = result.d
                        
                        v1_2.d = float.s(0x34000000)
                        
                        if (not(result.d f>= v1_2.d))
                            result.d = *(x27_1 + 0x24)
                            v1_2.d = *(x8_16 + 0x24)
                            result.d = result.d f- v1_2.d
                            v1_2.d = fneg(result.d)
                            
                            if (result.d f< 0f)
                                result.d = v1_2.d
                            else
                                result.d = result.d
                            
                            v1_2.d = float.s(0x34000000)
                            
                            if (not(result.d f>= v1_2.d))
                                result.d = x27_1[4].d
                                v1_2.d = x8_16[4].d
                                result.d = result.d f- v1_2.d
                                v1_2.d = fneg(result.d)
                                
                                if (result.d f< 0f)
                                    result.d = v1_2.d
                                else
                                    result.d = result.d
                                
                                v1_2.d = float.s(0x34000000)
                                
                                if (not(result.d f>= v1_2.d))
                                    *x27_1 = *x8_16
        else
            int64_t** x8_15
            
            do
                x8_15 = x9_7
                x9_7 = *x9_7
                
                if (x9_7 == 0)
                    break
                
                v1_2.d = x9_7[5].d
            while (v1_2.d f< result.d)
            
            *x27_1 = x9_7
            *x8_15 = x27_1
            result.d = x8_15[5].d
            v1_2.d = x27_1[5].d
            result.d = result.d f- v1_2.d
            v1_2.d = fneg(result.d)
            
            if (result.d f< 0f)
                result.d = v1_2.d
            else
                result.d = result.d
            
            v1_2.d = float.s(0x34000000)
            
            if (result.d f>= v1_2.d)
                goto label_c13eb0
            
            result.d = *(x8_15 + 0x1c)
            v1_2.d = *(x27_1 + 0x1c)
            result.d = result.d f- v1_2.d
            v1_2.d = fneg(result.d)
            
            if (result.d f< 0f)
                result.d = v1_2.d
            else
                result.d = result.d
            
            v1_2.d = float.s(0x34000000)
            
            if (result.d f>= v1_2.d)
                goto label_c13eb0
            
            result.d = x8_15[3].d
            v1_2.d = x27_1[3].d
            result.d = result.d f- v1_2.d
            v1_2.d = fneg(result.d)
            
            if (result.d f< 0f)
                result.d = v1_2.d
            else
                result.d = result.d
            
            v1_2.d = float.s(0x34000000)
            
            if (result.d f>= v1_2.d)
                goto label_c13eb0
            
            result.d = *(x8_15 + 0x24)
            v1_2.d = *(x27_1 + 0x24)
            result.d = result.d f- v1_2.d
            v1_2.d = fneg(result.d)
            
            if (result.d f< 0f)
                result.d = v1_2.d
            else
                result.d = result.d
            
            v1_2.d = float.s(0x34000000)
            
            if (result.d f>= v1_2.d)
                goto label_c13eb0
            
            result.d = x8_15[4].d
            v1_2.d = x27_1[4].d
            result.d = result.d f- v1_2.d
            v1_2.d = fneg(result.d)
            
            if (result.d f< 0f)
                result.d = v1_2.d
            else
                result.d = result.d
            
            v1_2.d = float.s(0x34000000)
            
            if (not(result.d f< v1_2.d))
                goto label_c13eb0
            
            *x8_15 = *x27_1
        
        x8_2 = 0
        x28_1 = 1
    while ((x26_1 & 1) != 0)

return result
