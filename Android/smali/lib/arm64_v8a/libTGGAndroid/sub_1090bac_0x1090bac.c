// 函数: sub_1090bac
// 地址: 0x1090bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_50 = v8
void* x20 = *(arg2 + 0x18)
int32_t x0_1 = oggpack_read(arg1 + 8, zx.q(*(x20 + 0x18)))

if (x0_1 s>= 1)
    int32_t x25_1 = *(x20 + 0x18)
    v8.d = *(x20 + 0x1c)
    int64_t x0_5 = oggpack_read(arg1 + 8, zx.q(ov_ilog(zx.q(*(x20 + 0x20)))))
    
    if (x0_5.d != 0xffffffff)
        if (*(x20 + 0x20) s<= x0_5.d)
            return 0
        
        int64_t* x20_1 = *(*(*(*(arg1 + 0x68) + 8) + 0x30) + 0x1328)
            + sx.q(*(x20 + (x0_5 << 0x20 s>> 0x1e) + 0x24)) * 0x60
        int64_t result = _vorbis_block_alloc(arg1, ((*x20_1 + sx.q(*(arg2 + 4))) << 2) + 4)
        
        if (vorbis_book_decodev_set(x20_1, result, arg1 + 8, zx.q(*(arg2 + 4))) != -1)
            int64_t x8_9 = sx.q(*(arg2 + 4))
            
            if (x8_9.d s>= 1)
                int32_t i = 0
                float v1_1 = 0f
                
                do
                    if (i s< x8_9.d)
                        int64_t x11_1 = *x20_1
                        int64_t x10_1 = 0
                        float* x13_1 = result + (sx.q(i) << 2)
                        
                        while (x11_1 s> x10_1)
                            x10_1 += 1
                            x13_1[x10_1] = x13_1[x10_1] + v1_1
                            
                            if (sx.q(i) + x10_1 s>= x8_9)
                                break
                        
                        i += x10_1.d
                    
                    v1_1 = *(result + (sx.q(i - 1) << 2))
                while (i s< x8_9.d)
            
            *(result + (x8_9 << 2)) = float.s(x0_1) / float.s((1 << x25_1) - 1) * float.s(v8.d)
            return result

return 0
