// 函数: ov_time_seek_page
// 地址: 0x107cb9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v9
double var_50 = v9
double v8 = arg2

if (*(arg1 + 0x80) s>= 2)
    if (*(arg1 + 8) == 0)
        return 0xffffff76
    
    if (not(v8 < 0.0))
        int64_t x22_1 = sx.q(*(arg1 + 0x40))
        
        if (x22_1.d s< 1)
            if (0 != x22_1.d)
                return ov_pcm_seek_page(arg1, 
                    vcvtd_s64_f64(vfma_f64(0.0, v8 - 0.0, 
                        float.d(*(*(arg1 + 0x68) + mulu.dp.d(0.d, 0x38) + 8))))) __tailcall
        else
            int64_t x20_1 = 0
            int64_t x21_1 = 0
            v9 = 0.0
            int64_t x23_1 = 8
            
            while (true)
                arg2 = ov_time_total(arg1, zx.q(x20_1.d)) + v9
                
                if (arg2 > v8)
                    break
                
                x20_1 += 1
                v9 = arg2
                int64_t x8_3 = *(*(arg1 + 0x60) + x23_1)
                x23_1 += 0x10
                x21_1 += x8_3
                
                if (x20_1 s>= x22_1)
                    v9 = arg2
                    break
            
            if (x20_1.d != x22_1.d)
                return ov_pcm_seek_page(arg1, 
                    vcvtd_s64_f64(vfma_f64(float.d(x21_1), v8 - v9, 
                        float.d(*(*(arg1 + 0x68) + mulu.dp.d(x20_1.d, 0x38) + 8))))) __tailcall

return 0xffffff7d
