// 函数: _Z18NeuralNet2ReimportPKcP14DefAssetHeader7XString
// 地址: 0xc73e28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* x0_2 = fopen(XString::operator char const*(), "r")
int32_t x23_1

if (x0_2 == 0)
    x23_1 = 0
else
    int64_t* x25_1 = *arg2
    
    if (feof(x0_2) == 0)
        while (true)
            char s[0x100]
            s[0] = 0
            
            if (fscanf(x0_2, "%s", &s) != 0)
                if (feof(x0_2) != 0)
                    goto label_c73e70
                
                int32_t x8_2 = x25_1[1].d + 1
                x25_1[1].d = x8_2
                int64_t x0_9 = realloc(*x25_1, sx.q(x8_2 * 0x28))
                int64_t x8_5 = sx.q(x25_1[1].d)
                *x25_1 = x0_9
                int128_t* x20_1 = x0_9 + (x8_5 - 1) * 0x28
                *x20_1 = zx.o(0)
                x20_1[2].q = 0
                x20_1[1] = zx.o(0)
                *x20_1 = strdup(&s)
                
                if (fscanf(x0_2, "%d", &x20_1[1]) != 0)
                    int32_t x8_6 = x20_1[1].d
                    int32_t x28_1
                    
                    if (x8_6 == 0)
                        *(x0_9 + (x8_5 - 1) * 0x28 + 8) = 0
                        x28_1 = 1
                    else
                        int32_t* x0_15 = XMalloc(x8_6 << 2)
                        *(x0_9 + (x8_5 - 1) * 0x28 + 8) = x0_15
                        
                        if (x20_1[1].d s< 1)
                            x28_1 = 1
                        else
                            int64_t fp_1 = 0
                            int64_t i = 0
                            x28_1 = 1
                            
                            do
                                if (fscanf(x0_2, "%d", x0_15 + fp_1) == 0)
                                    goto label_c74034
                                
                                x0_15 = *(x0_9 + (x8_5 - 1) * 0x28 + 8)
                                i += 1
                                int32_t x9_1 = *(x0_15 + fp_1)
                                fp_1 += 4
                                x28_1 *= x9_1
                            while (i s< sx.q(x20_1[1].d))
                    
                    void* x23_3 = x0_9 + (x8_5 - 1) * 0x28
                    *(x23_3 + 0x20) = x28_1
                    int64_t x0_19 = XMalloc(x28_1 << 2)
                    *(x23_3 + 0x18) = x0_19
                    
                    if (*(x23_3 + 0x20) s< 1)
                    label_c74024:
                        x23_1 = 1
                        
                        if (feof(x0_2) != 0)
                            break
                        
                        continue
                    else if (fscanf(x0_2, "%f", x0_19) != 0)
                        int64_t x20_2 = 0
                        int64_t x8_13 = 4
                        
                        while (true)
                            x20_2 += 1
                            
                            if (x20_2 s>= sx.q(*(x23_3 + 0x20)))
                                break
                            
                            int32_t x0_23 = fscanf(x0_2, "%f", *(x23_3 + 0x18) + x8_13)
                            x8_13 += 4
                            
                            if (x0_23 == 0)
                                goto label_c74034
                        
                        goto label_c74024
            
        label_c74034:
            x23_1 = 0
            break
    else
    label_c73e70:
        x23_1 = 1
    
    fclose(x0_2)

return zx.q(x23_1)
