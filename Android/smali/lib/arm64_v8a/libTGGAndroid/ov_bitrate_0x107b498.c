// 函数: ov_bitrate
// 地址: 0x107b498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_20 = v8

if (*(arg1 + 0x80) s>= 2)
    uint64_t x8_1 = zx.q(*(arg1 + 0x40))
    
    if (x8_1.d s> arg2)
        int32_t x9_1 = *(arg1 + 8)
        int64_t result
        void* x8_2
        
        if (arg2 == 0 || x9_1 != 0)
            if ((arg2 & 0x80000000) == 0)
                if (x9_1 == 0)
                    int64_t x8_8 = *(arg1 + 0x68)
                    result = *(x8_8 + muls.dp.d(arg2, 0x38) + 0x18)
                    
                    if (result s> 0)
                        return result
                    
                    int64_t x9_8 = sx.q(arg2)
                    result = *(x8_8 + x9_8 * 0x38 + 0x10)
                    
                    if (result s< 1)
                        return -1
                    
                    x8_2 = x8_8 + x9_8 * 0x38
                label_107b620:
                    int64_t x8_9 = *(x8_2 + 0x20)
                    
                    if (x8_9 s< 1)
                        return result
                    
                    int64_t x8_10 = x8_9 + result
                    int64_t x8_11
                    
                    if (x8_10 s< 0)
                        x8_11 = x8_10 + 1
                    else
                        x8_11 = x8_10
                    
                    return x8_11 s>> 1
                
                int64_t x10_1 = zx.q(arg2) << 0x20 s>> 0x1d
                return vcvtd_s64_f64(vrndx_f64(
                    float.d((*(*(arg1 + 0x48) + x10_1 + 8) - *(*(arg1 + 0x50) + x10_1)) << 3)
                    / ov_time_total()))
            
            if (x8_1.d s< 1)
                v8 = 0.0
            else
                void* x9_4 = *(arg1 + 0x48)
                void* x11_1 = *(arg1 + 0x50)
                int64_t i_4 = 0
                uint64_t x12_1 = 0
                
                if (x8_1.d u>= 4)
                    i_4 = x8_1 & 0xfffffffc
                    void* x12_2 = x9_4 + 0x18
                    int128_t* x13_1 = x11_1 + 0x10
                    arg3.q = 0
                    arg3:8.q = 0
                    int64_t i_3 = i_4
                    arg4.q = 0
                    arg4:8.q = 0
                    int64_t i
                    
                    do
                        arg5 = *(x12_2 - 0x10)
                        arg6 = *x12_2
                        arg7 = x13_1[-1]
                        arg8 = *x13_1
                        x12_2 += 0x20
                        i = i_3
                        i_3 -= 4
                        x13_1 = &x13_1[2]
                        arg5.q = (arg5 - arg7).q << 3
                        arg5:8.q <<= 3
                        arg6.q = (arg6 - arg8).q << 3
                        arg6:8.q <<= 3
                        arg3 += arg5
                        arg4 += arg6
                    while (i != 4)
                    arg3.q = vpaddd_s64(arg4 + arg3)
                    x12_1 = arg3.q
                
                if (x8_1.d u< 4 || i_4 != x8_1)
                    int64_t x13_2 = i_4 << 3
                    int64_t i_2 = x8_1 - i_4
                    void* x10_2 = x11_1 + x13_2
                    int64_t* x9_6 = x9_4 + x13_2 + 8
                    int64_t i_1
                    
                    do
                        int64_t x11_2 = *x9_6
                        x9_6 = &x9_6[1]
                        int64_t x13_3 = *x10_2
                        x10_2 += 8
                        i_1 = i_2
                        i_2 -= 1
                        x12_1 += (x11_2 - x13_3) << 3
                    while (i_1 != 1)
                
                v8 = float.d(x12_1)
            
            double v0_1
            v0_1.d =
                fconvert.s(v8 / ov_time_total(arg1, 0xffffffff, arg3, arg4, arg5, arg6, arg7, arg8))
            v0_1.d = vrndx_f32(v0_1.d)
            return vcvts_s64_f32(v0_1.d)
        
        if (x8_1.d s>= 1)
            x8_2 = *(arg1 + 0x68)
            result = *(x8_2 + 0x18)
            
            if (result s> 0)
                return result
            
            result = *(x8_2 + 0x10)
            
            if (result s>= 1)
                goto label_107b620
            
            return -1

return -0x83
