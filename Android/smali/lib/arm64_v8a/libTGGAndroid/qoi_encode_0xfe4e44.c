// 函数: qoi_encode
// 地址: 0xfe4e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const result = nullptr

if (arg2 != 0 && arg1 != 0 && arg3 != 0)
    int32_t x8_1 = *arg2
    
    if (x8_1 == 0)
        return nullptr
    
    int32_t x9_1 = arg2[1]
    
    if (x9_1 == 0)
        return nullptr
    
    uint32_t x10_1 = zx.d(arg2[2].b)
    
    if (x10_1 - 3 u> 1 || zx.d(*(arg2 + 9)) u> 1 || x9_1 u>= 0x17d78400 u/ x8_1)
        return nullptr
    
    result = XMalloc(x9_1 * x8_1 * (x10_1 + 1) + 0x16)
    
    if (result != 0)
        __builtin_strncpy(result, "qoif", 4)
        *(result + 4) = _byteswap(*arg2)
        *(result + 8) = _byteswap(arg2[1])
        *(result + 0xc) = arg2[2].b
        *(result + 0xd) = *(arg2 + 9)
        int128_t var_150
        __builtin_memset(&var_150, 0, 0x100)
        uint32_t x8_10 = zx.d(arg2[2].b)
        int32_t x12_1 = arg2[1] * *arg2 * x8_10
        int32_t x13_1
        
        if (x12_1 s< 1)
            x13_1 = 0xe
        else
            char x22_1 = -1
            int64_t i = 0
            int32_t x15_1 = 0
            uint32_t x6_1 = 0
            uint32_t x7_1 = 0
            uint32_t x21_2 = 0
            x13_1 = 0xe
            uint32_t x2 = 0xff
            
            do
                char* x5_1 = arg1 + i
                
                if (x8_10 == 4)
                    x2 = zx.d(x5_1[3])
                
                uint32_t x3_1 = zx.d(*x5_1)
                uint32_t x4_1 = zx.d(x5_1[1])
                uint32_t x5_2 = zx.d(x5_1[2])
                int32_t x24_5 = (0xffffff & ((0xff00ffff
                    & ((0xffff00ff & x3_1) | (0xff & x4_1) << 8)) | (0xff & x5_2) << 0x10))
                    | (0xff & x2) << 0x18
                uint64_t x23_1
                
                if (x24_5 != ((0xffffff & ((((0xffff00ff & (x21_2 & 0xff) << 0x10)
                        | (zx.d(x7_1.b) & 0xff) << 8) & 0xffffff00) | (x6_1 & 0xff)))
                        | zx.d(x22_1) << 0x18))
                    if (x15_1 s>= 1)
                        char x23_8 = (x15_1.b - 1) | 0xc0
                        x15_1 = 0
                        *(result + sx.q(x13_1)) = x23_8
                        x13_1 += 1
                    
                    x23_1 = zx.q(x4_1 * 5 + x3_1 * 3 + x5_2 * 7 + x2 * 0xb) & 0x3f
                    uint8_t* x25_4 = &var_150 + (x23_1 << 2)
                    int32_t x6_6
                    
                    if (*x25_4 == x24_5)
                        x6_6 = x13_1 + 1
                    else
                        *x25_4 = x3_1.b
                        x25_4[1] = x4_1.b
                        x25_4[2] = x5_2.b
                        x25_4[3] = x2.b
                        
                        if ((x2 & 0xff) != zx.d(x22_1))
                            void* x7_6 = result + sx.q(x13_1)
                            x6_6 = x13_1 + 5
                            x13_1 += 4
                            x23_1 = zx.q(x2)
                            *x7_6 = 0xff
                            *(x7_6 + 1) = x3_1.b
                            *(x7_6 + 2) = x4_1.b
                            *(x7_6 + 3) = x5_2.b
                        else
                            uint32_t x22_2 = x3_1 - x6_1
                            uint32_t x6_8 = x4_1 - x7_1
                            uint32_t x7_4 = x5_2 - x21_2
                            
                            if ((zx.d(x6_8.b + 2) | zx.d(x22_2.b + 2) | zx.d((x7_4 + 2).b)) u<= 3)
                                x23_1 = zx.q((x22_2 << 4) + 0x20) | zx.q((x6_8 << 2) + 8)
                                    | zx.q(x7_4 + 2) | 0x40
                                x6_6 = x13_1 + 1
                            else
                                uint32_t x22_3
                                
                                if (zx.d(x6_8.b + 0x20) u<= 0x3f)
                                    x22_3 = x22_2 - x6_8
                                
                                if (zx.d(x6_8.b + 0x20) u> 0x3f
                                        || (zx.d((x7_4 - x6_8 + 8).b) | zx.d(x22_3.b + 8)) u> 0xf)
                                    void* x7_7 = result + sx.q(x13_1)
                                    x6_6 = x13_1 + 4
                                    x13_1 += 3
                                    *x7_7 = 0xfe
                                    *(x7_7 + 1) = x3_1.b
                                    *(x7_7 + 2) = x4_1.b
                                    x23_1 = zx.q(x5_2)
                                else
                                    *(result + sx.q(x13_1)) = (x6_8.b + 0x20) | 0x80
                                    x6_6 = x13_1 + 2
                                    x13_1 += 1
                                    x23_1 = (zx.q(x22_3 << 4) ^ 0xffffff80) | zx.q(x7_4 - x6_8 + 8)
                    
                    *(result + sx.q(x13_1)) = (x23_1.d).b
                    x13_1 = x6_6
                else if (zx.q(x12_1 - x8_10) == i || x15_1 == 0x3d)
                    x23_1 = zx.q(x15_1) | 0xffffffc0
                    x15_1 = 0
                    *(result + sx.q(x13_1)) = (x23_1.d).b
                    x13_1 += 1
                else
                    x15_1 += 1
                i += zx.q(x8_10)
                x22_1 = x2.b
                x6_1 = x3_1
                x7_1 = x4_1
                x21_2 = x5_2
            while (i u< zx.q(x12_1))
        
        *(result + sx.q(x13_1)) = 0x100000000000000
        *arg3 = x13_1 + 8

return result
