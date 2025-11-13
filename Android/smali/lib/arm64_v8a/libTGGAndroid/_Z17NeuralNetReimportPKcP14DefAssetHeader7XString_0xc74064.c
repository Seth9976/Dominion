// 函数: _Z17NeuralNetReimportPKcP14DefAssetHeader7XString
// 地址: 0xc74064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x24 = *arg2
FILE* result = fopen(XString::operator char const*(), "r")

if (result == 0)
    return result

int32_t var_a4

if (fscanf(result, "%d %d %d\n", &var_a4, &x24[1], &x24[2]) == 3)
    int32_t x8_3 = (x24[1] + 1) * x24[2]
    x24[0xa] = x8_3
    *(x24 + 0x20) = XMalloc(x8_3 << 3)
    int32_t var_a8
    
    if (fscanf(result, "%d %d\n", &x24[0xb], &var_a8) == 2)
        void var_ac
        fscanf(result, "%d\n", &var_ac)
        
        if (var_a4 s>= 1)
            int32_t x25_1 = 0
            
            do
                int32_t var_b4
                int32_t var_b0
                fscanf(result, "%d %d\t", &var_b0, &var_b4)
                char buf[0x50]
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                v0_1, v1_1, v2_1 = fgets(&buf, 0x50, result)
                uint64_t x8_6 = zx.q(var_b0)
                
                if ((x8_6.d & 0x80000000) != 0)
                    int32_t x9_4 = x24[0xc]
                    v2_1.d = 1
                    v2_1:4.d = 1
                    v2_1:8.d = 1
                    v2_1:0xc.d = 1
                    
                    if (x9_4 s<= var_b4)
                        uint64_t x8_14 = zx.q(var_a8)
                        *x24 += 1
                        
                        if (x8_14.d s>= 1)
                            x24[0xc] = x9_4 + 1
                            
                            if (x8_14.d != 1)
                                int64_t x9_6
                                
                                if (x8_14 - 1 u>= 8)
                                    int64_t i_4 = (x8_14 - 1) & 0xfffffffffffffff8
                                    x9_6 = i_4 | 1
                                    int64_t i_3 = i_4
                                    void* x13_1 = &x24[0x11]
                                    int64_t i
                                    
                                    do
                                        i = i_3
                                        i_3 -= 8
                                        v1_1 = *x13_1 + v2_1
                                        *(x13_1 - 0x10) += v2_1
                                        *x13_1 = v1_1
                                        x13_1 += 0x20
                                    while (i != 8)
                                    
                                    if (x8_14 - 1 != i_4)
                                        goto label_c74244
                                else
                                    x9_6 = 1
                                label_c74244:
                                    int64_t i_2 = x8_14 - x9_6
                                    void* x9_7 = &x24[0xc + x9_6]
                                    int64_t i_1
                                    
                                    do
                                        i_1 = i_2
                                        i_2 -= 1
                                        *x9_7 += 1
                                        x9_7 += 4
                                    while (i_1 != 1)
                        
                        goto label_c741a8
                else
                    int32_t x9_2 = x24[x8_6 + 0xc]
                    
                    if (x9_2 s<= var_b4)
                        *x24 += 1
                        x24[x8_6 + 0xc] = x9_2 + 1
                    label_c741a8:
                        
                        if (x25_1 == var_a4 - 1)
                            x24[0xc] += 1
                
                x25_1 += 1
            while (x25_1 s< var_a4)
        
        int32_t x8_16 = x24[0xb] * x24[0xc]
        x24[6] = x8_16
        int64_t x0_11 = XMalloc(x8_16 << 3)
        int32_t x9_9 = x24[0xc]
        *(x24 + 0x10) = x0_11
        
        if (x9_9 s>= 1)
            int32_t x8_17 = x24[0xb]
            int32_t x25_2 = 0
            
            do
                if (x8_17 s>= 1)
                    int32_t x26_2 = 0
                    
                    do
                        if (fscanf(result, "%lf\n", 
                                *(x24 + 0x10) + (sx.q(x26_2 + x25_2 * x8_17) << 3)) != 1)
                            return nullptr
                        
                        x8_17 = x24[0xb]
                        x26_2 += 1
                    while (x26_2 s< x8_17)
                    
                    x9_9 = x24[0xc]
                
                x25_2 += 1
            while (x25_2 s< x9_9)
        
        int32_t x8_19 = x24[2]
        
        if (x8_19 s>= 1)
            int32_t x9_11 = x24[1]
            int32_t x23_1 = 0
            
            do
                if ((x9_11 & 0x80000000) == 0)
                    if (fscanf(result, "%lf\n", *(x24 + 0x20) + (zx.q(x23_1) << 3)) != 1)
                        return nullptr
                    
                    int32_t x25_3 = 1
                    
                    while (true)
                        x9_11 = x24[1]
                        
                        if (x25_3 - 1 s>= x9_11)
                            break
                        
                        bool cond:2_1 = fscanf(result, "%lf\n", 
                            *(x24 + 0x20) + (sx.q(x23_1 + x24[2] * x25_3) << 3)) == 1
                        x25_3 += 1
                        
                        if (not(cond:2_1))
                            return nullptr
                    
                    x8_19 = x24[2]
                
                x23_1 += 1
            while (x23_1 s< x8_19)
        
        fclose(result)
        return 1

return nullptr
