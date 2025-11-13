// 函数: vorbis_book_init_decode
// 地址: 0x10844e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
memset(arg1, 0, 0x60)
int64_t x1 = arg2[1]
int32_t n_1

if (x1 s< 1)
    n_1 = 0
else
    void* x8_1 = arg2[2]
    int64_t i_16
    
    if (x1 != 1)
        i_16 = x1 & 0xfffffffffffffffe
        int32_t x10 = 0
        int32_t x11_1 = 0
        void* x12_1 = x8_1 + 1
        int64_t i_13 = i_16
        int64_t i
        
        do
            int32_t x14_1 = sx.d(*(x12_1 - 1))
            int32_t x15_1 = sx.d(*x12_1)
            x12_1 += 2
            
            if (x14_1 s> 0)
                x10 += 1
            
            if (x15_1 s> 0)
                x11_1 += 1
            
            i = i_13
            i_13 -= 2
        while (i != 2)
        n_1 = x11_1 + x10
        
        if (x1 != i_16)
            goto label_10845a8
    else
        i_16 = 0
        n_1 = 0
    label_10845a8:
        
        do
            int32_t x11_2 = sx.d(*(x8_1 + i_16))
            i_16 += 1
            
            if (x11_2 s> 0)
                n_1 += 1
        while (x1 s> i_16)

uint64_t n = zx.q(n_1)
arg1[1] = x1
arg1[2] = n
*arg1 = *arg2
int32_t x8_6

if (n_1 == 0)
    x8_6 = 0
else
    void* x0_1
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    x0_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 = _make_words(arg2[2], x1, n)
    void var_80
    void* b = &var_80 - (((n << 3) + 0xf) & 0xffffffff0)
    
    if (x0_1 == 0)
        int64_t x0_9 = arg1[4]
        
        if (x0_9 != 0)
            free(x0_9)
        
        int64_t x0_10 = arg1[5]
        
        if (x0_10 != 0)
            free(x0_10)
        
        int64_t x0_11 = arg1[6]
        
        if (x0_11 != 0)
            free(x0_11)
        
        int64_t x0_12 = arg1[7]
        
        if (x0_12 != 0)
            free(x0_12)
        
        int64_t x0_13 = arg1[8]
        
        if (x0_13 != 0)
            free(x0_13)
        
        memset(arg1, 0, 0x60)
        x8_6 = -1
    else
        int64_t i_14 = 0
        
        if (n.d u>= 2)
            v0_1 = data_71a9c0
            i_14 = n & 0xfffffffe
            v1_1.q = x0_1
            v1_1:8.q = x0_1
            v2_1.q = 2
            v2_1:8.q = 2
            int64_t i_11 = i_14
            void* b_1 = b
            int64_t i_1
            
            do
                v3_1.q = v0_1.q << 2
                v3_1:8.q = v0_1:8.q << 2
                v3_1 += v1_1
                uint64_t x11_3 = v3_1.q
                v4_1.q = *x11_3
                v5_1.b = 0xf
                v5_1:1.b = 0xf
                v5_1:2.b = 0xf
                v5_1:3.b = 0xf
                v5_1:4.b = 0xf
                v5_1:5.b = 0xf
                v5_1:6.b = 0xf
                v5_1:7.b = 0xf
                i_1 = i_11
                i_11 -= 2
                v0_1 += v2_1
                int128_t v4_2 = vrev32_s8(v4_1)
                v6_1.d = v4_2.d u>> 4
                v6_1:4.d = v4_2:4.d u>> 4
                v4_2.d <<= 4
                v4_2:4.d <<= 4
                int128_t v5_2 = vbsl_s8(v5_1, v6_1, v4_2)
                v4_2.b = 0x33
                v4_2:1.b = 0x33
                v4_2:2.b = 0x33
                v4_2:3.b = 0x33
                v4_2:4.b = 0x33
                v4_2:5.b = 0x33
                v4_2:6.b = 0x33
                v4_2:7.b = 0x33
                v6_1.d = v5_2.d u>> 2
                v6_1:4.d = v5_2:4.d u>> 2
                v5_2.d <<= 2
                v5_2:4.d <<= 2
                v4_1 = vbsl_s8(v4_2, v6_1, v5_2)
                v5_2.b = 0x55
                v5_2:1.b = 0x55
                v5_2:2.b = 0x55
                v5_2:3.b = 0x55
                v5_2:4.b = 0x55
                v5_2:5.b = 0x55
                v5_2:6.b = 0x55
                v5_2:7.b = 0x55
                v6_1.d = v4_1.d u>> 1
                v6_1:4.d = v4_1:4.d u>> 1
                v4_1.d <<= 1
                v4_1:4.d <<= 1
                *x11_3 = vbsl_s8(v5_2, v6_1, v4_1).q
                *b_1 = v3_1
                b_1 += 0x10
            while (i_1 != 2)
        
        if (n.d u< 2 || i_14 != n)
            int32_t* x11_4 = x0_1 + (i_14 << 2)
            void* x9_4 = b + (i_14 << 3)
            int64_t i_9 = n - i_14
            int32_t* x10_1 = x11_4
            int64_t i_2
            
            do
                int32_t x12_2 = *x11_4
                i_2 = i_9
                i_9 -= 1
                *x9_4 = x11_4
                x9_4 += 8
                int32_t temp0_1 = _byteswap(x12_2)
                int32_t x12_5 = (0xf0f0f0f & temp0_1 u>> 4) | (0xf0f0f0f0 & temp0_1 << 4)
                int32_t x12_7 = (0x33333333 & x12_5 u>> 2) | (0xcccccccc & x12_5 << 2)
                *x10_1 = (0x55555555 & x12_7 u>> 1) | (0xaaaaaaaa & x12_7 << 1)
                x10_1 = &x10_1[1]
                x11_4 = x10_1
            while (i_2 != 1)
        
        qsort(b, n, 8, sub_1084ba4)
        uint64_t bytes = n << 2
        void* x23_1 = b - ((bytes + 0xf) & 0x7fffffff0)
        int64_t x0_3 = malloc(bytes)
        int64_t x8_4 = 0
        arg1[5] = x0_3
        
        if (n.d u>= 2)
            int64_t x9_7 = 0
            x8_4 = n & 0xfffffffe
            
            do
                void* x10_2 = b + (x9_7 << 3)
                int32_t x12_10 = x9_7.d + 1
                void* x10_4 = *(x10_2 + 8) - x0_1
                *(x23_1 + (sx.q(((*x10_2 - x0_1) u>> 2).d) << 2)) = x9_7.d
                x9_7 += 2
                *(x23_1 + (sx.q((x10_4 u>> 2).d) << 2)) = x12_10
            while (x8_4 != x9_7)
        
        if (n.d u< 2 || x8_4 != n)
            do
                *(x23_1 + (sx.q(((*(b + (x8_4 << 3)) - x0_1) u>> 2).d) << 2)) = x8_4.d
                x8_4 += 1
            while (n != x8_4)
        
        int64_t i_15 = 0
        
        if (n.d u>= 2)
            i_15 = n & 0xfffffffe
            int32_t* x9_11 = x0_1 + 4
            void* x10_6 = x23_1 + 4
            int64_t i_12 = i_15
            int64_t i_3
            
            do
                int32_t x12_11 = x9_11[-1]
                int32_t x13_4 = *x9_11
                int64_t x14_2 = *(x10_6 - 4)
                int64_t x15_2 = *x10_6
                x9_11 = &x9_11[2]
                i_3 = i_12
                i_12 -= 2
                x10_6 += 8
                *(x0_3 + (x14_2 << 2)) = x12_11
                *(x0_3 + (x15_2 << 2)) = x13_4
            while (i_3 != 2)
        
        if (n.d u< 2 || i_15 != n)
            int64_t x10_7 = i_15 << 2
            void* x9_12 = x23_1 + x10_7
            void* x10_8 = x0_1 + x10_7
            int64_t i_10 = n - i_15
            int64_t i_4
            
            do
                int32_t x11_8 = *x10_8
                x10_8 += 4
                int64_t x12_12 = sx.q(*x9_12)
                x9_12 += 4
                i_4 = i_10
                i_10 -= 1
                *(x0_3 + (x12_12 << 2)) = x11_8
            while (i_4 != 1)
        
        free(x0_1)
        arg1[4] = _book_unquantize(arg2, zx.q(n.d), x23_1)
        int64_t x0_8 = malloc(bytes)
        arg1[6] = x0_8
        int64_t x21 = arg2[1]
        int32_t x10_9
        
        if (x21 s< 1)
            x10_9 = 0
        else
            void* x9_13 = arg2[2]
            int64_t x8_5 = 0
            x10_9 = 0
            
            do
                if (sx.d(*(x9_13 + x8_5)) s>= 1)
                    int64_t x11_10 = sx.q(*(x23_1 + (sx.q(x10_9) << 2)))
                    x10_9 += 1
                    *(x0_8 + (x11_10 << 2)) = x8_5.d
                
                x8_5 += 1
            while (x21 s> x8_5)
        
        arg1[7] = malloc(sx.q(x10_9))
        *(arg1 + 0x4c) = 0
        int32_t x21_1
        
        if (x21 s< 1)
            x21_1 = 0
        label_1084964:
            uint32_t i_5 = arg1[2].d
            void* x22_2
            int32_t x23_2
            
            if (i_5 == 0)
                x22_2 = &arg1[9]
                x23_2 = 5
            else
                int32_t x8_7 = -4
                
                do
                    i_5 u>>= 1
                    x8_7 += 1
                while (i_5 != 0)
                
                x22_2 = &arg1[9]
                
                if (x8_7 + 4 u< 9)
                    x23_2 = 5
                else if (x8_7 s< 8)
                    x23_2 = x8_7
                else
                    x23_2 = 8
            
            int32_t x20_1 = 1 << x23_2
            arg1[9].d = x23_2
            int64_t x0_19 = calloc(sx.q(x20_1), 4)
            arg1[8] = x0_19
            int32_t x11_14
            
            if (x21_1 s< 1)
                x11_14 = x23_2
            label_1084a9c:
                int64_t x8_8 = 0
                int64_t x14_7 = 0
                int32_t x9_18 = 0
                int64_t x10_13 = sx.q(x21_1)
                
                do
                    int32_t i_6 = x9_18 << (0x20 - x11_14)
                    int32_t temp0_3 = _byteswap(i_6)
                    int32_t x15_6 = (0xf0f0f0f & temp0_3 u>> 4) | (0xf0f0f0f0 & temp0_3 << 4)
                    int32_t x15_8 = (0x33333333 & x15_6 u>> 2) | (0xcccccccc & x15_6 << 2)
                    uint64_t x15_10 =
                        (0x55555555 & zx.q(x15_8 u>> 1)) | (0xaaaaaaaa & zx.q(x15_8 << 1))
                    
                    if (*(x0_19 + (zx.q(x15_10.d) << 2)) == 0)
                        int64_t x17_5 = x14_7 + 1
                        int64_t x14_8
                        
                        do
                            x14_8 = x17_5
                            
                            if (x17_5 s>= x10_13)
                                break
                            
                            x17_5 = x14_8 + 1
                        while (*(arg1[5] + (x14_8 << 2)) u<= i_6)
                        
                        x14_7 = x14_8 - 1
                        
                        if (x8_8 s< x10_13)
                            while (i_6 u>= (*(arg1[5] + (x8_8 << 2))
                                    & (0xfffffffe << zx.q(0x1f - x11_14)).d))
                                x8_8 += 1
                                
                                if (x8_8 s>= x10_13)
                                    break
                        
                        int64_t x16_3 = x10_13 - x8_8
                        int32_t x16_4
                        
                        x16_4 = x16_3 u< 0x7fff ? x16_3.d : 0x7fff
                        
                        int32_t x17_9
                        
                        x17_9 = x14_7 u< 0x7fff ? x14_7.d : 0x7fff
                        
                        *(x0_19 + (x15_10 << 2)) = x16_4 | x17_9 << 0xf | 0x80000000
                    
                    x9_18 += 1
                while (x9_18 s< x20_1)
                
                x8_6 = 0
            else
                int64_t i_7 = 0
                x11_14 = x23_2
                
                do
                    void* x10_12 = arg1[7]
                    int32_t x12_14 = sx.d(*(x10_12 + i_7))
                    
                    if (x11_14 s>= x12_14 && x11_14 - x12_14 != 0x1f)
                        int32_t j = 0
                        int32_t temp0_2 = _byteswap(*(arg1[5] + (i_7 << 2)))
                        int32_t x11_19 = (0xf0f0f0f & temp0_2 u>> 4) | (0xf0f0f0f0 & temp0_2 << 4)
                        int32_t x11_21 = (0x33333333 & x11_19 u>> 2) | (0xcccccccc & x11_19 << 2)
                        
                        do
                            *(x0_19 + (((0x55555555 & zx.q(x11_21 u>> 1))
                                | (0xaaaaaaaa & zx.q(x11_21 << 1)) | zx.q(j << x12_14)) << 2)) =
                                i_7.d + 1
                            x11_14 = *x22_2
                            x12_14 = sx.d(*(x10_12 + i_7))
                            j += 1
                        while (j s< 1 << (x11_14 - x12_14))
                    
                    i_7 += 1
                while (i_7 != zx.q(x21_1))
                
                x8_6 = 0
                
                if (x23_2 != 0x1f)
                    goto label_1084a9c
        else
            void* x10_10 = arg2[2]
            int32_t x9_14 = 0
            int64_t i_8 = 0
            x21_1 = 0
            
            do
                int32_t x11_11 = sx.d(*(x10_10 + i_8))
                
                if (x11_11 s>= 1)
                    arg1[7][sx.q(*(x23_1 + (sx.q(x21_1) << 2)))] = x11_11.b
                    x10_10 = arg2[2]
                    x9_14 = *(arg1 + 0x4c)
                    int32_t x12_13 = sx.d(*(x10_10 + i_8))
                    
                    if (x9_14 s< x12_13)
                        x9_14 = x12_13
                        *(arg1 + 0x4c) = x12_13
                    
                    x21_1 += 1
                
                i_8 += 1
            while (arg2[1] s> i_8)
            
            if (x21_1 != 1)
                goto label_1084964
            
            x21_1 = 1
            
            if (x9_14 != 1)
                goto label_1084964
            
            arg1[9].d = 1
            int64_t* x0_17 = calloc(2, 4)
            x8_6 = 0
            arg1[8] = x0_17
            *x0_17 = 0x100000001

if (*(x23 + 0x28) == x8)
    return zx.q(x8_6)

__stack_chk_fail()
noreturn
