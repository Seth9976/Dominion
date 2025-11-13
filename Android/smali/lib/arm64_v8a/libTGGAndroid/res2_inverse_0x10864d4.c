// 函数: res2_inverse
// 地址: 0x10864d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x26 = *arg2
int64_t x9 = x26[1]
int32_t x8_2 = (*(arg1 + 0x48) * arg5.d) s>> 1
int32_t x8_3

if (x9 s< sx.q(x8_2))
    x8_3 = x9.d
else
    x8_3 = x8_2

int32_t x8_4 = x8_3 - *x26

if (x8_4 s>= 1)
    int64_t x22_1 = sx.q(x26[2].d)
    int32_t x8_5 = x8_4 s/ x22_1.d
    int64_t x19_1 = *arg2[3]
    int64_t x0_1 = _vorbis_block_alloc(arg1, zx.q((x19_1.d + x8_5 - 1) s/ x19_1.d) << 0x20 s>> 0x1d)
    int32_t x8_9 = arg5.d
    int64_t x9_3 = 0
    int64_t x8_10 = sx.q(x8_9)
    
    if (x8_9 s>= 1)
        while (*(arg4 + (x9_3 << 2)) == 0)
            x9_3 += 1
            
            if (x9_3 s>= x8_10)
                break
    
    if (x9_3 != x8_10)
        int32_t x8_12 = *(arg2 + 0xc)
        
        if (x8_12 s>= 1)
            int64_t var_70_1 = 0
            int64_t x28_1 = sx.q(x8_5)
            bool cond:2_1
            
            do
                if (x8_5 s>= 1)
                    int64_t x21_1 = 0
                    int64_t x24_1 = 0
                    
                    do
                        if (var_70_1 == 0)
                            int32_t x0_3 = vorbis_book_decode(arg2[3], arg1 + 8)
                            
                            if (x0_3 == 0xffffffff)
                                return 0
                            
                            if (x26[3].d s<= x0_3)
                                return 0
                            
                            int64_t x8_20 = *(arg2[6] + (zx.q(x0_3) << 0x20 s>> 0x1d))
                            *(x0_1 + (x24_1 << 3)) = x8_20
                            
                            if (x8_20 == 0)
                                return 0
                        
                        if (x19_1 << 0x20 s>= 1 && x21_1 s< x28_1)
                            int64_t x25_1 = 0
                            int64_t x20_1 = x22_1 * x21_1
                            int64_t x8_26
                            bool cond:4_1
                            
                            do
                                int64_t x8_23 = sx.q(*(*(x0_1 + (x24_1 << 3)) + (x25_1 << 2)))
                                
                                if ((*(x26 + (x8_23 << 2) + 0x20) & 1 << var_70_1.d) != 0)
                                    int64_t x0_4 = *(*(arg2[4] + (x8_23 << 3)) + (var_70_1 << 3))
                                    
                                    if (x0_4 != 0 && vorbis_book_decodevv_add(x0_4, arg3, 
                                            x20_1 + *x26, arg5, arg1 + 8, zx.q(x22_1.d)) == -1)
                                        return 0
                                
                                x8_26 = x25_1 + 1
                                
                                if (x8_26 s>= sx.q(x19_1.d))
                                    break
                                
                                cond:4_1 = x21_1 + x25_1 + 1 s< x28_1
                                x20_1 += x22_1
                                x25_1 = x8_26
                            while (cond:4_1)
                            x21_1 += x8_26
                        
                        x24_1 += 1
                    while (x21_1 s< x28_1)
                    
                    x8_12 = *(arg2 + 0xc)
                
                cond:2_1 = var_70_1 + 1 s< sx.q(x8_12)
                var_70_1 += 1
            while (cond:2_1)

return 0
