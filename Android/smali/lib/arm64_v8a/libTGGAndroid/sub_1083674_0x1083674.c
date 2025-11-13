// 函数: sub_1083674
// 地址: 0x1083674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x23 = *(arg2 + 0x510)
int64_t x8_3 = *(*(*(*(arg1 + 0x68) + 8) + 0x30) + 0x1328)
int32_t* result = nullptr

if (oggpack_read(arg1 + 8, 1) == 1)
    result = _vorbis_block_alloc(arg1, sx.q(*(arg2 + 0x504)) << 2)
    *result = oggpack_read(arg1 + 8, zx.q(ov_ilog(zx.q(*(arg2 + 0x50c) - 1))))
    result[1] = oggpack_read(arg1 + 8, zx.q(ov_ilog(zx.q(*(arg2 + 0x50c) - 1))))
    
    if (*x23 s>= 1)
        int64_t i = 0
        int32_t var_6c_1 = 2
        
        do
            int64_t x28_1 = sx.q(x23[i + 1])
            void* x8_9 = &x23[x28_1]
            int32_t x19_1 = *(x8_9 + 0xc0)
            int64_t x27_1 = sx.q(*(x8_9 + 0x80))
            int32_t x22_1
            
            if (x19_1 == 0)
                x22_1 = 0
            else
                x22_1 = vorbis_book_decode(x8_3 + sx.q(*(x8_9 + 0x100)) * 0x60, arg1 + 8)
                
                if (x22_1 == 0xffffffff)
                    return nullptr
            
            if (x27_1.d s>= 1)
                int64_t x26_1 = 0
                void* x25_1 = &result[sx.q(var_6c_1)]
                
                do
                    int64_t x8_15 = sx.q(x23[x28_1 * 8 + sx.q(x22_1 & ((1 << x19_1) - 1)) + 0x50])
                    
                    if ((x8_15.d & 0x80000000) != 0)
                        *(x25_1 + (x26_1 << 2)) = 0
                    else
                        int32_t x0_15 = vorbis_book_decode(x8_3 + x8_15 * 0x60, arg1 + 8)
                        *(x25_1 + (x26_1 << 2)) = x0_15
                        
                        if (x0_15 == 0xffffffff)
                            return nullptr
                    
                    x26_1 += 1
                    x22_1 s>>= x19_1
                while (x26_1 s< x27_1)
            
            i += 1
            var_6c_1 += x27_1.d
        while (i s< sx.q(*x23))
    
    if (*(arg2 + 0x504) s>= 3)
        int64_t x9_4 = 0
        int64_t i_1
        
        do
            void* x10_1 = arg2 + (x9_4 << 2)
            *(x10_1 + 0x408)
            *(x10_1 + 0x30c)
            int32_t x15_1 = x23[0xd1 + sx.q(*(x10_1 + 0x408))]
            void* x11_2 = &result[x9_4]
            int32_t x12_4 = result[sx.q(*(x10_1 + 0x408))] & 0x7fff
            int32_t x13_5 = (result[sx.q(*(x10_1 + 0x30c))] & 0x7fff) - x12_4
            int32_t x16_2
            
            if (x13_5 s< 0)
                x16_2 = neg.d(x13_5)
            else
                x16_2 = x13_5
            
            int32_t x13_6 = *(x11_2 + 8)
            int32_t x14_4 =
                x16_2 * (x23[0xd3 + x9_4] - x15_1) s/ (x23[0xd1 + sx.q(*(x10_1 + 0x30c))] - x15_1)
            int32_t x14_5
            
            if (x13_5 s< 0)
                x14_5 = neg.d(x14_4)
            else
                x14_5 = x14_4
            
            int32_t x12_5 = x14_5 + x12_4
            
            if (x13_6 == 0)
                *(x11_2 + 8) = x12_5 | 0x8000
            else
                int32_t x14_7 = *(arg2 + 0x50c) - x12_5
                int32_t x15_4
                
                x15_4 = x14_7 s< x12_5 ? x14_7 : x12_5
                
                int32_t x13_7
                
                if (x13_6 s>= x15_4 << 1)
                    if (x14_7 s<= x12_5)
                        x13_7 = not.d(x13_6 - x14_7)
                    else
                        x13_7 = x13_6 - x12_5
                else if ((x13_6 & 1) != 0)
                    x13_7 = neg.d((x13_6 + 1) s>> 1)
                else
                    x13_7 = x13_6 s>> 1
                
                *(x11_2 + 8) = (x13_7 + x12_5) & 0x7fff
                *(x10_1 + 0x408)
                result[sx.q(*(x10_1 + 0x408))] &= 0x7fff
                *(x10_1 + 0x30c)
                result[sx.q(*(x10_1 + 0x30c))] &= 0x7fff
            
            i_1 = x9_4 + 3
            x9_4 += 1
        while (i_1 s< sx.q(*(arg2 + 0x504)))

return result
