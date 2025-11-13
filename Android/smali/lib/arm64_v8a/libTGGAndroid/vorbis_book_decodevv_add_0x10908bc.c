// 函数: vorbis_book_decodevv_add
// 地址: 0x10908bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[2] s< 1)
    return 0

int64_t x9_1 = sx.q(arg4)
int64_t x23_1 = arg3 s/ x9_1
int64_t x24_1 = sx.q(((arg3 + sx.q(arg6)) s/ x9_1).d)

if (x23_1 s>= x24_1)
    return 0

int32_t x25_1 = 0

while (true)
    uint64_t result = sub_10903f8(arg1, arg5)
    
    if (result == -1)
        return result
    
    int64_t x8_3 = *arg1
    
    if (x8_3 s>= 1 && x23_1 s< x24_1)
        int64_t x9_2 = 0
        int64_t x10_2 = arg1[4] + ((x8_3 * result) << 2)
        
        do
            int32_t* x11_2 = *(arg2 + (sx.q(x25_1) << 3))
            float v0_1 = *(x10_2 + (x9_2 << 2))
            x9_2 += 1
            bool cond:2_1 = x25_1 + 1 == arg4
            
            if (x25_1 + 1 == arg4)
                x25_1 = 0
            else
                x25_1 += 1
            
            if (cond:2_1)
                x23_1 += 1
            
            x11_2[x23_1] = x11_2[x23_1] f+ v0_1
            
            if (x9_2 s>= x8_3)
                break
        while (x23_1 s< x24_1)
    
    if (x23_1 s>= x24_1)
        return 0
