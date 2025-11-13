// 函数: sub_fdc7c4
// 地址: 0xfdc7c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = (arg4 == 2 ? 1 : 0) | (arg4 == 4 ? 1 : 0)
int32_t x9_1 = arg4 - x23
int32_t x8

x8 = x9_1 s< 2 ? 3 : 2

if (((arg3.d | arg2.d) & 0x80000000) != 0)
    return 0

int32_t x24_1 = arg3.d
uint64_t x27_1 = zx.q(arg2.d)

if (*stbi_write_tga_with_rle == 0)
    int32_t var_118_2 = x8
    int32_t x10_4
    
    x10_4 = x23 != 0 ? 8 : 0
    
    int32_t var_e0_1 = x24_1
    int32_t var_e8_1 = x27_1.d
    int32_t var_f0_1 = 0
    int32_t var_f8_1 = 0
    int32_t var_100_1 = 0
    int32_t var_108_1 = 0
    int32_t var_110_1 = 0
    int32_t var_120_2 = 0
    int32_t var_128_2 = 0
    int32_t var_d0_1 = x10_4
    int32_t var_d8_1 = (x9_1 + x23) << 3
    return sub_fe92b4(arg1, arg2, arg3, x27_1.d, x24_1, arg4, 0, arg5, arg6, arg7, arg8, arg9, 
        arg10, arg11, arg12, arg13, x23, 0, "111 221 2222 11")

int32_t x9_2

x9_2 = x23 != 0 ? 8 : 0

int32_t var_128_1 = x24_1
int64_t var_130
var_130.d = x27_1.d
int32_t var_138_1 = 0
int32_t var_140_1 = 0
int32_t var_118_1 = x9_2
int32_t var_120_1 = (x9_1 + x23) << 3
sub_fe9740(arg1, arg2, 0, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13)
uint32_t x9_3 = *stbi__flip_vertically_on_write
int32_t x8_4

if (x9_3 == 0)
    x8_4 = x24_1 - 1
else
    x8_4 = 0

int32_t x10_3

x10_3 = x9_3 != 0 ? x24_1 : -1

if (x8_4 != x10_3)
    int32_t x11_1 = x27_1.d - 1
    int32_t x10_5 = arg4 * x27_1.d
    int64_t x9_6
    
    x9_6 = x9_3 == 0 ? 0xffffffff : 1
    
    int64_t x24_2 = sx.q(arg4)
    int64_t x28_1 = sx.q(x27_1.d)
    int32_t x8_6 = x8_4 * arg4 * x27_1.d
    uint64_t var_90_1 = zx.q(x8_4)
    uint64_t var_88_1 = x27_1
    
    while (true)
        int64_t x8_10 = sx.q(x8_6)
        
        if (x27_1.d s>= 1)
            int32_t x8_11 = 0
            void* x9_12 = arg5 + x8_10
            void* x9_15 = arg5 + sx.q(x10_5 * var_90_1.d)
            
            while (true)
                int64_t x19_1 = sx.q(x8_11)
                int64_t x26_1 = x19_1 * x24_2
                int32_t i_2
                
                if (x8_11 s>= x11_1)
                    i_2 = 1
                label_fdcb30:
                    char var_64 = i_2.b - 1
                    (*arg1)(arg1[1], &var_64, 1)
                    
                    if (i_2 s>= 1)
                        uint64_t i_1 = zx.q(i_2)
                        char* x25_3 = x9_12 + x26_1
                        uint64_t i
                        
                        do
                            sub_fe9598(arg1, arg4, x23, 0, x25_3)
                            i = i_1
                            i_1 -= 1
                            x25_3 = &x25_3[x24_2]
                        while (i != 1)
                else
                    char* x25_1 = x9_15 + x26_1
                    
                    if (memcmp(x25_1, x9_15 + (x19_1 + 1) * x24_2, x24_2) != 0)
                        if (x19_1.d + 2 s>= x27_1.d)
                            i_2 = 2
                        else
                            void* x21_1 = x9_12
                            int64_t x8_16 = sx.q(x19_1.d + 2)
                            int64_t x27_2 = 0
                            
                            while (true)
                                if (memcmp(x21_1 + x26_1, x21_1 + x24_2 * x8_16, x24_2) == 0)
                                    i_2 = x27_2.d + 1
                                    x27_1 = var_88_1
                                    break
                                
                                int64_t x8_18 = x27_2 + 1
                                
                                if (x8_16 + 1 + x27_2 s< x28_1)
                                    bool cond:14_1 = x27_2.d + 2 u< 0x7f
                                    x21_1 += x24_2
                                    x27_2 = x8_18
                                    
                                    if (cond:14_1)
                                        continue
                                
                                x27_1 = var_88_1
                                i_2 = x8_18.d + 2
                                break
                        
                        goto label_fdcb30
                    
                    if (x19_1.d + 2 s>= x27_1.d)
                        i_2 = 2
                    else
                        int64_t x27_3 = sx.q(x19_1.d + 2)
                        int64_t x21_2 = 1
                        int64_t x26_2 = x9_12 + x24_2 * x27_3
                        
                        while (true)
                            if (memcmp(x25_1, x26_2, x24_2) != 0)
                                i_2 = x21_2.d + 1
                                break
                            
                            int64_t x8_21 = x21_2 + 1
                            
                            if (x27_3 + x21_2 s< x28_1)
                                x26_2 += x24_2
                                x21_2 = x8_21
                                
                                if (x8_21.d u< 0x7f)
                                    continue
                            
                            i_2 = x8_21.d + 1
                            break
                        
                        x27_1 = var_88_1
                    
                    char var_68 = i_2.b + 0x7f
                    (*arg1)(arg1[1], &var_68, 1)
                    sub_fe9598(arg1, arg4, x23, 0, x25_1)
                
                x8_11 = i_2 + x19_1.d
                
                if (x8_11 s>= x27_1.d)
                    break
        
        uint64_t x9_9 = var_90_1 + x9_6
        var_90_1 = x9_9
        x8_6 = x8_10.d + x10_5 * x9_6.d
        
        if (x10_3 == x9_9.d)
            break

return 1
