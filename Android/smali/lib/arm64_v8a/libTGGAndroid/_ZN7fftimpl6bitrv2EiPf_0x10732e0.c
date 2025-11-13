// 函数: _ZN7fftimpl6bitrv2EiPf
// 地址: 0x10732e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = 4
int32_t x9 = arg1
int32_t x8_1
int32_t x11_1
bool cond:0_1

do
    x11_1 = x9 s>> 2
    x8_1 = x10
    cond:0_1 = x9 s> 0x23
    x10 <<= 1
    x9 = x11_1
while (cond:0_1)
int32_t x9_1 = arg1 s>> 1
int32_t v0
int32_t v1
int32_t v2
int32_t v3

if (x11_1 != 8)
    if (x8_1 s>= 1)
        int32_t i_2 = 0
        int32_t x11_2 = 0
        int32_t x12_2 = arg1 s>> 2
        uint64_t x13_2 = zx.q(x8_1)
        int64_t x15_3 = sx.q(x8_1)
        int64_t x16_4 = sx.q(x8_1)
        int64_t x17_4 = sx.q(x9_1)
        
        do
            int32_t x2_3 = i_2 + x11_2
            
            if (x11_2 != 0)
                int64_t i = sx.q(i_2)
                int32_t x5_1 = x11_2
                
                do
                    void* x20_6 = &arg2[i]
                    void* x6_11 = &arg2[sx.q(x5_1)]
                    v0 = *x20_6
                    v1 = *(x20_6 + 4)
                    v3 = *(x6_11 + 4)
                    int64_t x19_8 = i + x13_2
                    int64_t x22_7 = x16_4 + sx.q(x5_1)
                    void* x21_12 = &arg2[x19_8]
                    void* x7_9 = &arg2[x22_7]
                    *x20_6 = *x6_11
                    *(x20_6 + 4) = v3
                    *x6_11 = v0
                    *(x6_11 + 4) = v1
                    v1 = *(x7_9 + 4)
                    v2 = *x21_12
                    v3 = *(x21_12 + 4)
                    int64_t x19_9 = x19_8 + sx.q(x9_1)
                    void* x6_12 = &arg2[x19_9]
                    *x21_12 = *x7_9
                    *(x21_12 + 4) = v1
                    *x7_9 = v2
                    *(x7_9 + 4) = v3
                    v1 = *(x7_9 + 0xc)
                    v2 = *x6_12
                    v3 = *(x6_12 + 4)
                    int32_t x22_8 = x22_7.d + x9_1
                    *x6_12 = arg2[x22_7 + 2]
                    *(x6_12 + 4) = v1
                    arg2[x22_7 + 2] = v2
                    int64_t x21_15 = sx.q((x22_7 + 2).d) - x16_4
                    void* x6_14 = &arg2[x19_9 - x13_2]
                    *(x7_9 + 0xc) = v3
                    void* x7_10 = &arg2[x21_15]
                    v1 = *(x7_10 + 4)
                    v2 = *x6_14
                    v3 = *(x6_14 + 4)
                    void* x21_17 = &arg2[x17_4 + sx.q(x21_15.d)]
                    *x6_14 = *x7_10
                    *(x6_14 + 4) = v1
                    *x7_10 = v2
                    *(x7_10 + 4) = v3
                    v1 = *(x21_17 + 4)
                    v2 = *(x6_14 + 8)
                    v3 = *(x6_14 + 0xc)
                    *(x6_14 + 8) = *x21_17
                    *(x6_14 + 0xc) = v1
                    *x21_17 = v2
                    *(x21_17 + 4) = v3
                    int64_t x7_12 = zx.q(x19_9.d + 2) << 0x20 s>> 0x1e
                    int64_t x19_11 = (0x300000000 + (x19_9 << 0x20)) s>> 0x1e
                    void* x20_9 = &arg2[sx.q((x22_7 + 2).d + x9_1)]
                    v3 = *(x20_9 + 4)
                    v1 = *(arg2 + x7_12)
                    v2 = *(arg2 + x19_11)
                    int64_t x21_19 = sx.q(x19_9.d + 2) - x17_4
                    void* x22_9 = &arg2[sx.q(x22_8)]
                    *(arg2 + x7_12) = *x20_9
                    void* x7_13 = &arg2[x21_19]
                    *(arg2 + x19_11) = v3
                    *x20_9 = v1
                    *(x20_9 + 4) = v2
                    v1 = *(x22_9 + 4)
                    v2 = *x7_13
                    v3 = *(x7_13 + 4)
                    void* x6_17 = &arg2[sx.q(x22_8) - x16_4]
                    void* x21_22 = &arg2[sx.q(x21_19.d) - x16_4]
                    *x7_13 = *x22_9
                    *(x7_13 + 4) = v1
                    *x22_9 = v2
                    *(x22_9 + 4) = v3
                    v1 = *(x6_17 + 4)
                    v2 = *x21_22
                    v3 = *(x21_22 + 4)
                    *x21_22 = *x6_17
                    *(x21_22 + 4) = v1
                    *x6_17 = v2
                    *(x6_17 + 4) = v3
                    int32_t x6_18 = x12_2
                    bool cond:3_1
                    
                    do
                        x5_1 ^= x6_18
                        cond:3_1 = x6_18 s> x5_1
                        x6_18 s>>= 1
                    while (cond:3_1)
                    i += 4
                while (i s< sx.q(x2_3))
            
            int64_t x3_3 = sx.q(x2_3)
            int64_t x3_4 = x3_3 + sx.q(x9_1)
            void* x2_4 = &arg2[sx.q(x2_3)]
            void* x6_19 = &arg2[x3_4]
            v0 = *(x2_4 + 0xc)
            v1 = arg2[x3_3 + 2]
            v3 = *(x6_19 + 4)
            void* x4_5 = &arg2[x15_3 + sx.q((x3_3 + 2).d)]
            void* x3_6 = &arg2[x15_3 + sx.q(x3_4.d)]
            arg2[x3_3 + 2] = *x6_19
            *(x2_4 + 0xc) = v3
            *x6_19 = v1
            *(x6_19 + 4) = v0
            v1 = *(x3_6 + 4)
            v2 = *x4_5
            v3 = *(x4_5 + 4)
            int32_t x2_5 = x12_2
            *x4_5 = *x3_6
            *(x4_5 + 4) = v1
            *x3_6 = v2
            *(x3_6 + 4) = v3
            bool cond:2_1
            
            do
                i_2 ^= x2_5
                cond:2_1 = x2_5 s> i_2
                x2_5 s>>= 1
            while (cond:2_1)
            x11_2 += 4
        while (x11_2 s< x8_1)
else if (x8_1 s>= 1)
    int32_t i_3 = 0
    int32_t x12_1 = 0
    int32_t x13_1 = arg1 s>> 2
    uint64_t x14_1 = zx.q(x8_1)
    int64_t x16_2 = sx.q(x9_1)
    int64_t x17_2 = sx.q(x8_1)
    int64_t x2_2 = sx.q(x8_1)
    int64_t x3_2 = sx.q(x9_1)
    
    do
        int32_t x6_1 = i_3 + x12_1
        
        if (x12_1 != 0)
            int64_t i_1 = sx.q(i_3)
            int32_t x20_1 = x12_1
            
            do
                void* x21_1 = &arg2[i_1]
                void* x22_1 = &arg2[sx.q(x20_1)]
                v0 = *x21_1
                v1 = *(x21_1 + 4)
                v3 = *(x22_1 + 4)
                int64_t x23_1 = i_1 + x14_1
                int64_t x24_1 = x10 + sx.q(x20_1)
                void* x25_1 = &arg2[x23_1]
                void* x26_1 = &arg2[x24_1]
                *x21_1 = *x22_1
                *(x21_1 + 4) = v3
                *x22_1 = v0
                *(x22_1 + 4) = v1
                v1 = *(x26_1 + 4)
                v2 = *x25_1
                v3 = *(x25_1 + 4)
                int64_t x23_2 = x23_1 + x14_1
                int64_t x24_3 = sx.q(x24_1.d) - x2_2
                void* x27_1 = &arg2[x23_2]
                void* x28_1 = &arg2[x24_3]
                *x25_1 = *x26_1
                *(x25_1 + 4) = v1
                *x26_1 = v2
                *(x26_1 + 4) = v3
                v1 = *(x28_1 + 4)
                v2 = *x27_1
                v3 = *(x27_1 + 4)
                int64_t x23_3 = x23_2 + x14_1
                int64_t x24_4 = x10 + sx.q(x24_3.d)
                void* fp_1 = &arg2[x23_3]
                void* x25_2 = &arg2[x24_4]
                *x27_1 = *x28_1
                *(x27_1 + 4) = v1
                *x28_1 = v2
                *(x28_1 + 4) = v3
                v1 = *(x25_2 + 4)
                v2 = *fp_1
                v3 = *(fp_1 + 4)
                int64_t x21_2 = x23_3 + sx.q(x9_1)
                *fp_1 = *x25_2
                *(fp_1 + 4) = v1
                *x25_2 = v2
                *(x25_2 + 4) = v3
                void* x24_5 = &arg2[x21_2]
                v1 = *(x25_2 + 0xc)
                v2 = *x24_5
                v3 = *(x24_5 + 4)
                int64_t x22_2 = x21_2 - x14_1
                *x24_5 = arg2[x24_4 + 2]
                *(x24_5 + 4) = v1
                int64_t x24_6 = sx.q((x24_4 + 2).d) - x10
                void* x28_2 = &arg2[x22_2]
                arg2[x24_4 + 2] = v2
                *(x25_2 + 0xc) = v3
                void* x27_3 = &arg2[x24_6]
                v1 = *(x27_3 + 4)
                v2 = *x28_2
                v3 = *(x28_2 + 4)
                int64_t x24_7 = x2_2 + sx.q(x24_6.d)
                int64_t x23_5 = x22_2 - x14_1
                *x28_2 = *x27_3
                *(x28_2 + 4) = v1
                *x27_3 = v2
                *(x27_3 + 4) = v3
                void* x27_4 = &arg2[x24_7]
                v1 = *(x27_4 + 4)
                void* x26_3 = &arg2[x23_5]
                v2 = *x26_3
                v3 = *(x26_3 + 4)
                *x26_3 = *x27_4
                *(x26_3 + 4) = v1
                int64_t x26_5 = sx.q(x24_7.d) - x10
                void* x25_4 = &arg2[x23_5 - x14_1]
                *x27_4 = v2
                *(x27_4 + 4) = v3
                void* x27_5 = &arg2[x26_5]
                v1 = *(x27_5 + 4)
                v2 = *x25_4
                v3 = *(x25_4 + 4)
                void* x26_7 = &arg2[x3_2 + sx.q(x26_5.d)]
                *x25_4 = *x27_5
                *(x25_4 + 4) = v1
                *x27_5 = v2
                *(x27_5 + 4) = v3
                v1 = *(x26_7 + 4)
                v2 = *(x25_4 + 8)
                v3 = *(x25_4 + 0xc)
                int64_t x23_6 = x23_5 << 0x20
                int32_t x24_8 = x24_7.d + x9_1
                *(x25_4 + 8) = *x26_7
                *(x25_4 + 0xc) = v1
                *x26_7 = v2
                *(x26_7 + 4) = v3
                void* x26_8 = &arg2[sx.q(x24_8)]
                int64_t x25_6 = (x23_6 + 0x200000000) s>> 0x1e
                int64_t x23_8 = (x23_6 + 0x300000000) s>> 0x1e
                v3 = *(x26_8 + 4)
                v1 = *(arg2 + x25_6)
                v2 = *(arg2 + x23_8)
                int64_t x22_3 = x22_2 << 0x20
                *(arg2 + x25_6) = *x26_8
                *(arg2 + x23_8) = v3
                int64_t x24_10 = sx.q(x24_8) - x2_2
                int64_t x23_10 = (x22_3 + 0x200000000) s>> 0x1e
                int64_t x22_5 = (x22_3 + 0x300000000) s>> 0x1e
                *x26_8 = v1
                *(x26_8 + 4) = v2
                void* x26_9 = &arg2[x24_10]
                v3 = *(x26_9 + 4)
                v1 = *(arg2 + x23_10)
                v2 = *(arg2 + x22_5)
                int64_t x24_11 = x10 + sx.q(x24_10.d)
                int64_t x27_7 = zx.q(x21_2.d + 2) << 0x20 s>> 0x1e
                int64_t x21_4 = (0x300000000 + (x21_2 << 0x20)) s>> 0x1e
                *(arg2 + x23_10) = *x26_9
                *(arg2 + x22_5) = v3
                *x26_9 = v1
                *(x26_9 + 4) = v2
                void* x26_10 = &arg2[x24_11]
                v3 = *(x26_10 + 4)
                v1 = *(arg2 + x27_7)
                v2 = *(arg2 + x21_4)
                int64_t x25_8 = sx.q(x21_2.d + 2) - x3_2
                void* x23_11 = &arg2[x25_8]
                *(arg2 + x27_7) = *x26_10
                *(arg2 + x21_4) = v3
                *x26_10 = v1
                *(x26_10 + 4) = v2
                v1 = *(x26_10 - 4)
                v2 = *x23_11
                v3 = *(x23_11 + 4)
                int64_t x25_10 = sx.q(x25_8.d) - x2_2
                int64_t x24_14 = sx.q((x24_11 - 2).d) - x10
                void* x22_6 = &arg2[x25_10]
                *x23_11 = arg2[x24_11 - 2]
                *(x23_11 + 4) = v1
                void* x23_12 = &arg2[x24_14]
                arg2[x24_11 - 2] = v2
                *(x26_10 - 4) = v3
                v1 = *(x23_12 + 4)
                v2 = *x22_6
                v3 = *(x22_6 + 4)
                int64_t x25_12 = sx.q(x25_10.d) - x2_2
                int64_t x24_15 = x2_2 + sx.q(x24_14.d)
                void* x27_8 = &arg2[x25_12]
                void* x21_6 = &arg2[x24_15]
                *x22_6 = *x23_12
                *(x22_6 + 4) = v1
                *x23_12 = v2
                *(x23_12 + 4) = v3
                v1 = *(x21_6 + 4)
                v2 = *x27_8
                v3 = *(x27_8 + 4)
                void* x25_15 = &arg2[sx.q(x25_12.d) - x2_2]
                void* x24_18 = &arg2[sx.q(x24_15.d) - x10]
                *x27_8 = *x21_6
                *(x27_8 + 4) = v1
                *x21_6 = v2
                *(x21_6 + 4) = v3
                v1 = *(x24_18 + 4)
                v2 = *x25_15
                v3 = *(x25_15 + 4)
                int32_t x21_7 = x13_1
                *x25_15 = *x24_18
                *(x25_15 + 4) = v1
                *x24_18 = v2
                *(x24_18 + 4) = v3
                bool cond:5_1
                
                do
                    x20_1 ^= x21_7
                    cond:5_1 = x21_7 s> x20_1
                    x21_7 s>>= 1
                while (cond:5_1)
                i_1 += 4
            while (i_1 s< sx.q(x6_1))
        
        int64_t x7_1 = sx.q(x6_1)
        int64_t x7_2 = x7_1 + x16_2
        void* x6_2 = &arg2[sx.q(x6_1)]
        void* x21_8 = &arg2[x7_2]
        v0 = *(x6_2 + 0xc)
        v3 = *(x21_8 + 4)
        v2 = arg2[x7_1 + 2]
        int64_t x19_4 = x17_2 + sx.q((x7_1 + 2).d)
        int64_t x7_4 = sx.q(x7_2.d) + sx.q(x10)
        arg2[x7_1 + 2] = *x21_8
        void* x20_3 = &arg2[x19_4]
        *(x6_2 + 0xc) = v3
        void* x6_3 = &arg2[x7_4]
        *x21_8 = v2
        *(x21_8 + 4) = v0
        v1 = *(x6_3 + 4)
        v2 = *x20_3
        v3 = *(x20_3 + 4)
        int64_t x19_5 = x17_2 + sx.q(x19_4.d)
        int64_t x7_6 = sx.q(x7_4.d) - x17_2
        void* x21_9 = &arg2[x19_5]
        *x20_3 = *x6_3
        *(x20_3 + 4) = v1
        *x6_3 = v2
        *(x6_3 + 4) = v3
        void* x6_4 = &arg2[x7_6]
        v1 = *(x6_4 + 4)
        v2 = *x21_9
        v3 = *(x21_9 + 4)
        void* x20_5 = &arg2[sx.q(x19_5.d + x9_1)]
        *x21_9 = *x6_4
        *(x21_9 + 4) = v1
        *x6_4 = v2
        *(x6_4 + 4) = v3
        void* x6_7 = &arg2[sx.q(x7_6.d) - x16_2]
        v1 = *(x6_7 + 4)
        v2 = *(x21_9 - 8)
        v3 = *(x21_9 - 4)
        void* x19_7 = &arg2[sx.q(x19_5.d + x8_1)]
        *(x21_9 - 8) = *x6_7
        *(x21_9 - 4) = v1
        *x6_7 = v2
        *(x6_7 + 4) = v3
        int64_t x21_11 = zx.q(x7_6.d + 2) << 0x20 s>> 0x1e
        int64_t x6_9 = zx.q(x7_6.d + 3) << 0x20 s>> 0x1e
        v1 = *(arg2 + x6_9)
        v2 = *x20_5
        v3 = *(x20_5 + 4)
        void* x7_8 = &arg2[sx.q(x7_6.d + x10)]
        *x20_5 = *(arg2 + x21_11)
        *(x20_5 + 4) = v1
        *(arg2 + x21_11) = v2
        *(arg2 + x6_9) = v3
        v1 = *(x7_8 + 4)
        v2 = *x19_7
        v3 = *(x19_7 + 4)
        int32_t x6_10 = x13_1
        *x19_7 = *x7_8
        *(x19_7 + 4) = v1
        *x7_8 = v2
        *(x7_8 + 4) = v3
        bool cond:4_1
        
        do
            i_3 ^= x6_10
            cond:4_1 = x6_10 s> i_3
            x6_10 s>>= 1
        while (cond:4_1)
        x12_1 += 4
    while (x12_1 s< x8_1)
