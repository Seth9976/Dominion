// 函数: ogg_stream_pagein
// 地址: 0x1096b84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int64_t x0 = *arg1
    
    if (x0 != 0)
        void* x27_1 = *arg2
        int64_t x21_1 = arg2[2]
        size_t x20_1 = arg2[3]
        int64_t x8_1 = arg1[3]
        int64_t x26_1 = arg1[9]
        char x9_1 = *(x27_1 + 0xd)
        uint32_t x22_1 = zx.d(*(x27_1 + 4))
        uint32_t x24_1 = zx.d(*(x27_1 + 5))
        int32_t x25_1 = *(x27_1 + 0xe)
        char x9_2 = *(x27_1 + 0xc)
        int64_t x23_1 = sx.q(*(x27_1 + 0x12))
        uint64_t x28_1 = zx.q(*(x27_1 + 0x1a))
        uint64_t x9_3 = zx.q(*(x27_1 + 0xb))
        uint64_t x9_4 = zx.q(*(x27_1 + 0xa))
        char x9_5 = *(x27_1 + 9)
        char x9_6 = *(x27_1 + 8)
        char x9_7 = *(x27_1 + 7)
        char x9_8 = *(x27_1 + 6)
        
        if (x8_1 != 0)
            int64_t x9_9 = arg1[2]
            size_t x2_1 = x9_9 - x8_1
            arg1[2] = x2_1
            
            if (x9_9 != x8_1)
                memmove(x0, x0 + x8_1, x2_1)
            
            arg1[3] = 0
        
        if (x26_1 != 0)
            int64_t x8_2 = arg1[7]
            int64_t x8_3 = x8_2 - x26_1
            
            if (x8_2 != x26_1)
                int64_t x0_1 = arg1[4]
                memmove(x0_1, x0_1 + (x26_1 << 2), x8_3 << 2)
                int64_t x0_2 = arg1[5]
                memmove(x0_2, x0_2 + (x26_1 << 3), (arg1[7] - x26_1) << 3)
                x8_3 = arg1[7] - x26_1
            
            int64_t x9_10 = arg1[8]
            arg1[7] = x8_3
            arg1[8] = x9_10 - x26_1
            arg1[9] = 0
        
        if (x22_1 != 0 || arg1[0x2f] != sx.q(x25_1))
            return 0xffffffff
        
        int32_t x0_4
        uint128_t v0_1
        uint128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        x0_4, v0_1, v1_1, v2_1, v3_1, v4_1 = sub_10961e8(arg1, x28_1 + 1)
        
        if (x0_4 == 0)
            int64_t x8_9 = arg1[0x30]
            int32_t x25_2 = x24_1 & 2
            
            if (x8_9 != x23_1)
                int64_t x10_1 = arg1[7]
                int64_t x9_12 = arg1[8]
                
                if (x10_1 s> sx.q(x9_12.d))
                    void* x11_1 = arg1[4]
                    uint64_t x13_1 = arg1[2]
                    int64_t x12_1 = sx.q(x9_12.d)
                    int64_t x14_1 = x10_1 - x12_1
                    int64_t i_6
                    
                    if (x14_1 u>= 4)
                        i_6 = x14_1 & 0xfffffffffffffffc
                        v1_1.q = 0
                        v1_1:8.q = 0
                        v0_1.q = 0
                        v0_1:8.q = 0
                        x12_1 += i_6
                        v1_1.q = x13_1
                        void* x13_2 = x11_1 + (sx.q(x9_12.d) << 2) + 8
                        v2_1.q = 0xff000000ff
                        int64_t i_5 = i_6
                        int64_t i
                        
                        do
                            v3_1.q = *(x13_2 - 8)
                            v4_1.q = *x13_2
                            i = i_5
                            i_5 -= 4
                            x13_2 += 0x10
                            v1_1 = vsubw_u32(v1_1, v3_1 & v2_1)
                            v0_1 = vsubw_u32(v0_1, v4_1 & v2_1)
                        while (i != 4)
                        uint128_t v0_2
                        v0_2.q = vpaddd_s64(v0_1 + v1_1)
                        x13_1 = v0_2.q
                    
                    if (x14_1 u< 4 || x14_1 != i_6)
                        do
                            uint64_t x14_3 = zx.q(*(x11_1 + (x12_1 << 2)))
                            x12_1 += 1
                            x13_1 -= x14_3
                        while (x10_1 s> x12_1)
                    
                    arg1[2] = x13_1
                
                arg1[7] = x9_12
                
                if (x8_9 != -1)
                    int64_t x8_10 = arg1[4]
                    arg1[7] = x9_12 + 1
                    *(x8_10 + (x9_12 << 2)) = 0x400
                    arg1[8] = x9_12 + 1
            
            int64_t x8_11
            int32_t x8_13
            
            if ((x24_1 & 1) != 0)
                x8_11 = arg1[7]
                
                if (x8_11 s>= 1)
                    x8_13 = *(arg1[4] + (x8_11 << 2) - 4)
            
            int32_t i_1
            
            if ((x24_1 & 1) == 0 || (x8_11 s>= 1 && x8_13 != 0x400 && (x8_13 & 0xff) == 0xff))
                i_1 = 0
                
                if (x20_1 == 0)
                    goto label_1096e9c
            else if (x28_1.d == 0)
                x25_2 = 0
                i_1 = 0
                
                if (x20_1 == 0)
                    goto label_1096e9c
            else
                i_1 = 0
                
                do
                    uint64_t x8_16 = zx.q(*(x27_1 + sx.q(i_1) + 0x1b))
                    x21_1 += x8_16
                    x20_1 -= x8_16
                    
                    if (x8_16 != 0xff)
                        i_1 += 1
                    
                    if (x8_16 != 0xff)
                        break
                    
                    i_1 += 1
                while (i_1 s< x28_1.d)
                
                x25_2 = 0
                
                if (x20_1 == 0)
                    goto label_1096e9c
            
            int64_t x9_14 = arg1[1]
            int64_t x8_18 = arg1[2]
            int64_t x0_6
            
            if (x9_14 - x20_1 s> x8_18)
                x0_6 = *arg1
            label_1096e88:
                memcpy(x0_6 + x8_18, x21_1, x20_1)
                arg1[2] += x20_1
            label_1096e9c:
                
                if (i_1 s< x28_1.d)
                    int64_t i_3 = sx.q(i_1)
                    int32_t* x9_16 = arg1[4]
                    uint32_t x11_2 = zx.d(*(x27_1 + i_3 + 0x1b))
                    int64_t x8_22 = arg1[7]
                    x9_16[x8_22] = x11_2
                    int64_t x10_4 = arg1[5]
                    *(x10_4 + (x8_22 << 3)) = -1
                    uint64_t x8_23 = arg1[7]
                    
                    if (x25_2 != 0)
                        x9_16[x8_23] |= 0x100
                    
                    int64_t x11_3
                    
                    if (x11_2 == 0xff)
                        x11_3 = x8_23 + 1
                        x8_23 = 0xffffffff
                        arg1[7] = x11_3
                    else
                        x11_3 = x8_23 + 1
                        arg1[7] = x11_3
                        arg1[8] = x11_3
                    
                    if (i_3 + 1 != x28_1)
                        void* x13_6 = x27_1 + i_3 + 0x1c
                        int64_t i_4 = x28_1 - 1 - i_3
                        int64_t i_2
                        
                        do
                            uint32_t x16_2 = zx.d(*x13_6)
                            x9_16[x11_3] = x16_2
                            *(x10_4 + (x11_3 << 3)) = -1
                            int64_t x15_1 = arg1[7]
                            
                            if (x16_2 == 0xff)
                                x11_3 = x15_1 + 1
                                arg1[7] = x11_3
                            else
                                x11_3 = x15_1 + 1
                                x8_23 = zx.q(x15_1.d)
                                arg1[7] = x11_3
                                arg1[8] = x11_3
                            
                            i_2 = i_4
                            i_4 -= 1
                            x13_6 += 1
                        while (i_2 != 1)
                    
                    if (x8_23.d != 0xffffffff)
                        int64_t x11_5 = zx.q(x9_6) | (0xffffffffffffff & (zx.q(x9_5) | (
                            0xffffffffffffff & ((-0xffffff01 & x9_4) | (0xffffff
                            & ((-0xffff01 & x9_3) | (zx.q(x9_2) | zx.q((zx.q(x9_1) << 8).w)) << 8))
                            << 8)) << 8)) << 8
                        *(arg1[5] + (sx.q(x8_23.d) << 3)) = zx.q(x9_8)
                            | (0xffffffffffffff & (zx.q(x9_7) | (0xffffffffffffff & x11_5) << 8))
                            << 8
                
                if ((x24_1 & 4) != 0)
                    int64_t x8_24 = arg1[7]
                    arg1[0x2e].d = 1
                    
                    if (x8_24 s>= 1)
                        void* x8_25 = arg1[4] + (x8_24 << 2)
                        *(x8_25 - 4) |= 0x200
                
                arg1[0x30] = x23_1 + 1
                return 0
            
            size_t bytes
            
            if (x9_14 s<= 0x7fffffffffffffff - x20_1)
                size_t bytes_1 = x9_14 + x20_1
                
                if (bytes_1 s< 0x7ffffffffffffbff)
                    bytes = bytes_1 + 0x400
                else
                    bytes = bytes_1
                
                x0_6 = realloc(*arg1, bytes)
            
            if (x9_14 s<= 0x7fffffffffffffff - x20_1 && x0_6 != 0)
                x8_18 = arg1[2]
                *arg1 = x0_6
                arg1[1] = bytes
                goto label_1096e88
            
            int64_t x0_9 = *arg1
            
            if (x0_9 != 0)
                free(x0_9)
            
            int64_t x0_10 = arg1[4]
            
            if (x0_10 != 0)
                free(x0_10)
            
            int64_t x0_11 = arg1[5]
            
            if (x0_11 != 0)
                free(x0_11)
            
            memset(arg1, 0, 0x198)

return 0xffffffff
