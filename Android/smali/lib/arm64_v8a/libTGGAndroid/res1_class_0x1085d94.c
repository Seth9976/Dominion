// 函数: res1_class
// 地址: 0x1085d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 s>= 1)
    int32_t i_12 = 0
    uint64_t i_5 = zx.q(arg5)
    int64_t* x9_1 = arg3
    uint64_t i
    
    do
        if (*arg4 != 0)
            arg3[sx.q(i_12)] = *x9_1
            i_12 += 1
        
        x9_1 = &x9_1[1]
        i = i_5
        i_5 -= 1
        arg4 = &arg4[1]
    while (i != 1)
    
    if (i_12 != 0)
        int32_t* x25_1 = *arg2
        int64_t i_10 = sx.q(i_12)
        int64_t x26_1 = x25_1[4]
        int64_t x28_1 = x25_1[5]
        int32_t x21_1 = (x25_1[2] - *x25_1) s/ x26_1.d
        int64_t* result
        uint128_t v1_1
        int128_t v2_1
        uint128_t v3_1
        uint128_t v4_1
        uint128_t v5_1
        uint128_t v6_1
        result, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 =
            _vorbis_block_alloc(arg1, zx.q(i_12) << 0x20 s>> 0x1d)
        int64_t x8_3 = sx.q(x21_1)
        
        if (i_12 s>= 1)
            int64_t* result_1 = result
            int64_t i_8 = i_10
            int64_t x23_1 = x8_3 << 3
            int64_t i_1
            
            do
                int64_t x0_1 = _vorbis_block_alloc(arg1, x23_1)
                *result_1 = x0_1
                result_1 = &result_1[1]
                v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 = memset(x0_1, 0, x23_1)
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        
        if (x8_3.d s>= 1)
            v1_1.q = float.d(sx.q(x26_1.d))
            int64_t x8_5 = 0
            int64_t x9_3 = 0
            double v0_1
            v0_1.d = fconvert.s(100.0 f/ v1_1.q)
            int64_t i_9 = x26_1 & 0xfffffffffffffff8
            
            do
                if (i_12 s>= 1)
                    int64_t x12_1 = 0
                    int64_t x13_3 = sx.q(*x25_1 + x8_5.d)
                    
                    do
                        int32_t x14_1
                        int32_t x16_1
                        
                        if (x26_1.d s< 1)
                            x14_1 = 0
                            x16_1 = 0
                        else
                            int64_t x15_1 = arg3[x12_1]
                            int64_t i_11
                            
                            if (x26_1.d u>= 8)
                                v1_1.q = 0
                                v1_1:8.q = 0
                                int64_t i_6 = i_9
                                v2_1.q = 0
                                v2_1:8.q = 0
                                v3_1.q = 0
                                v3_1:8.q = 0
                                void* x16_3 = x15_1 + (x13_3 << 2) + 0x10
                                v4_1.q = 0
                                v4_1:8.q = 0
                                int64_t i_2
                                
                                do
                                    v5_1 = *(x16_3 - 0x10)
                                    v6_1 = *x16_3
                                    i_2 = i_6
                                    i_6 -= 8
                                    x16_3 += 0x20
                                    v5_1 = vabsq_s32(v5_1)
                                    v6_1 = vabsq_s32(v6_1)
                                    v3_1 = vmaxq_s32(v5_1, v3_1)
                                    v4_1 = vmaxq_s32(v6_1, v4_1)
                                    v1_1 += v5_1
                                    v2_1 += v6_1
                                while (i_2 != 8)
                                v1_1 += v2_1
                                v2_1.d = vmaxv_s8(vmaxq_s32(v3_1, v4_1))
                                v1_1.d = vaddvq_u32(v1_1)
                                x14_1 = v2_1.d
                                x16_1 = v1_1.d
                                i_11 = i_9
                                
                                if (i_9 != x26_1)
                                    goto label_1085f50
                            else
                                x16_1 = 0
                                x14_1 = 0
                                i_11 = 0
                            label_1085f50:
                                int32_t* x15_2 = x15_1 + ((x13_3 + i_11) << 2)
                                int64_t i_7 = x26_1 - i_11
                                int64_t i_3
                                
                                do
                                    int32_t x18_2 = *x15_2
                                    x15_2 = &x15_2[1]
                                    int32_t x18_3
                                    
                                    if (x18_2 s< 0)
                                        x18_3 = neg.d(x18_2)
                                    else
                                        x18_3 = x18_2
                                    
                                    if (x18_3 s> x14_1)
                                        x14_1 = x18_3
                                    
                                    i_3 = i_7
                                    i_7 -= 1
                                    x16_1 += x18_3
                                while (i_3 != 1)
                        
                        int64_t i_4 = 0
                        
                        if (x28_1.d s> 1)
                            v1_1.d = float.s(x16_1)
                            v1_1.d = v1_1.d f* v0_1.d
                            i_4 = 0
                            uint32_t temp0_3 = vcvts_s32_f32(v1_1.d)
                            
                            do
                                void* x17_1 = &x25_1[i_4]
                                
                                if (x14_1 s<= *(x17_1 + 0x920))
                                    int32_t x17_2 = *(x17_1 + 0xa20)
                                    
                                    if ((x17_2 & 0x80000000) != 0)
                                        break
                                    
                                    if (x17_2 s> temp0_3)
                                        break
                                
                                i_4 += 1
                            while (i_4 s< x28_1 - 1)
                        
                        int64_t x14_2 = result[x12_1]
                        x12_1 += 1
                        *(x14_2 + (x9_3 << 3)) = i_4
                    while (x12_1 != i_10)
                
                x9_3 += 1
                x8_5 += x26_1
            while (x9_3 != x8_3)
        
        arg2[9] += 1
        return result

return nullptr
