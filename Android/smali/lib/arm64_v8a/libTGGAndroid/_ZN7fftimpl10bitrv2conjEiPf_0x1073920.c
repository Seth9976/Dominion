// 函数: _ZN7fftimpl10bitrv2conjEiPf
// 地址: 0x1073920
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
float v0
float v1
float v2
float v3

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
                    void* x19_8 = &arg2[i]
                    void* x20_10 = &arg2[sx.q(x5_1)]
                    v0 = *x19_8
                    int64_t x6_9 = x16_4 + sx.q(x5_1)
                    int64_t x7_7 = i + x13_2
                    v1 = fneg(*(x19_8 + 4))
                    v3 = fneg(*(x20_10 + 4))
                    void* x22_9 = &arg2[x6_9]
                    *x19_8 = *x20_10
                    *(x19_8 + 4) = v3
                    *x20_10 = v0
                    *(x20_10 + 4) = v1
                    void* x21_12 = &arg2[x7_7]
                    v2 = *x21_12
                    v3 = *(x21_12 + 4)
                    int64_t x7_8 = x7_7 + sx.q(x9_1)
                    v1 = fneg(*(x22_9 + 4))
                    *x21_12 = *x22_9
                    *(x21_12 + 4) = v1
                    void* x20_11 = &arg2[x7_8]
                    *x22_9 = v2
                    *(x22_9 + 4) = fneg(v3)
                    v2 = *x20_11
                    v3 = *(x20_11 + 4)
                    int32_t x6_10 = x6_9.d + x9_1
                    v0 = fneg(*(x22_9 + 0xc))
                    *x20_11 = arg2[x6_9 + 2]
                    *(x20_11 + 4) = v0
                    arg2[x6_9 + 2] = v2
                    int64_t x21_15 = sx.q((x6_9 + 2).d) - x16_4
                    void* x20_13 = &arg2[x7_8 - x13_2]
                    *(x22_9 + 0xc) = fneg(v3)
                    void* x22_10 = &arg2[x21_15]
                    v0 = *x20_13
                    void* x21_17 = &arg2[x17_4 + sx.q(x21_15.d)]
                    v1 = fneg(*(x20_13 + 4))
                    v2 = fneg(*(x22_10 + 4))
                    *x20_13 = *x22_10
                    *(x20_13 + 4) = v2
                    *x22_10 = v0
                    *(x22_10 + 4) = v1
                    v2 = *(x20_13 + 8)
                    v3 = *(x20_13 + 0xc)
                    v1 = fneg(*(x21_17 + 4))
                    *(x20_13 + 8) = *x21_17
                    *(x20_13 + 0xc) = v1
                    *x21_17 = v2
                    *(x21_17 + 4) = fneg(v3)
                    int64_t x7_10 = (0x300000000 + (x7_8 << 0x20)) s>> 0x1e
                    void* x19_11 = &arg2[sx.q((x6_9 + 2).d + x9_1)]
                    int64_t x22_12 = zx.q(x7_8.d + 2) << 0x20 s>> 0x1e
                    v3 = *(x19_11 + 4)
                    v2 = *(arg2 + x7_10)
                    v1 = *(arg2 + x22_12)
                    int64_t x21_19 = sx.q(x7_8.d + 2) - x17_4
                    *(arg2 + x22_12) = *x19_11
                    float* x6_11 = &arg2[sx.q(x6_10)]
                    void* x22_13 = &arg2[x21_19]
                    *(arg2 + x7_10) = fneg(v3)
                    *x19_11 = v1
                    *(x19_11 + 4) = fneg(v2)
                    v0 = *x22_13
                    v1 = fneg(*(x22_13 + 4))
                    v3 = fneg(x6_11[1])
                    float* x20_16 = &arg2[sx.q(x6_10) - x16_4]
                    void* x7_12 = &arg2[sx.q(x21_19.d) - x16_4]
                    *x22_13 = *x6_11
                    *(x22_13 + 4) = v3
                    *x6_11 = v0
                    x6_11[1] = v1
                    v3 = *x7_12
                    int32_t x6_12 = x12_2
                    v0 = fneg(*(x7_12 + 4))
                    v1 = fneg(x20_16[1])
                    *x7_12 = *x20_16
                    *(x7_12 + 4) = v1
                    *x20_16 = v3
                    x20_16[1] = v0
                    bool cond:3_1
                    
                    do
                        x5_1 ^= x6_12
                        cond:3_1 = x6_12 s> x5_1
                        x6_12 s>>= 1
                    while (cond:3_1)
                    i += 4
                while (i s< sx.q(x2_3))
            
            int64_t x3_3 = sx.q(x2_3)
            void* x2_4 = &arg2[sx.q(x2_3)]
            int64_t x3_4 = x3_3 + sx.q(x9_1)
            void* x6_13 = &arg2[x3_4]
            *(x2_4 + 4) = fneg(*(x2_4 + 4))
            v1 = *(x2_4 + 0xc)
            v3 = arg2[x3_3 + 2]
            v2 = fneg(*(x6_13 + 4))
            arg2[x3_3 + 2] = *x6_13
            *(x2_4 + 0xc) = v2
            void* x4_5 = &arg2[x15_3 + sx.q((x3_3 + 2).d)]
            v0 = fneg(*(x6_13 + 0xc))
            *x6_13 = v3
            *(x6_13 + 4) = fneg(v1)
            *(x6_13 + 0xc) = v0
            v2 = *x4_5
            void* x2_6 = &arg2[x15_3 + sx.q(x3_4.d)]
            v3 = *(x4_5 + 4)
            *(x4_5 - 4) = fneg(*(x4_5 - 4))
            v0 = fneg(*(x2_6 + 4))
            *x4_5 = *x2_6
            *(x4_5 + 4) = v0
            v0 = *(x2_6 + 0xc)
            *x2_6 = v2
            *(x2_6 + 4) = fneg(v3)
            *(x2_6 + 0xc) = fneg(v0)
            int32_t x2_7 = x12_2
            bool cond:2_1
            
            do
                i_2 ^= x2_7
                cond:2_1 = x2_7 s> i_2
                x2_7 s>>= 1
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
                int64_t x24_1 = x10 + sx.q(x20_1)
                int64_t x23_1 = i_1 + x14_1
                v1 = fneg(*(x21_1 + 4))
                v3 = fneg(*(x22_1 + 4))
                void* x26_1 = &arg2[x24_1]
                *x21_1 = *x22_1
                *(x21_1 + 4) = v3
                *x22_1 = v0
                *(x22_1 + 4) = v1
                void* x25_1 = &arg2[x23_1]
                v2 = *x25_1
                v3 = *(x25_1 + 4)
                int64_t x24_3 = sx.q(x24_1.d) - x2_2
                v1 = fneg(*(x26_1 + 4))
                *x25_1 = *x26_1
                *(x25_1 + 4) = v1
                int64_t x23_2 = x23_1 + x14_1
                void* x28_1 = &arg2[x24_3]
                *x26_1 = v2
                *(x26_1 + 4) = fneg(v3)
                void* x27_1 = &arg2[x23_2]
                v2 = *x27_1
                v3 = *(x27_1 + 4)
                int64_t x24_4 = x10 + sx.q(x24_3.d)
                int64_t x23_3 = x23_2 + x14_1
                v1 = fneg(*(x28_1 + 4))
                *x27_1 = *x28_1
                *(x27_1 + 4) = v1
                void* x25_2 = &arg2[x24_4]
                *x28_1 = v2
                *(x28_1 + 4) = fneg(v3)
                void* fp_1 = &arg2[x23_3]
                v2 = *fp_1
                v3 = *(fp_1 + 4)
                int64_t x21_2 = x23_3 + sx.q(x9_1)
                v1 = fneg(*(x25_2 + 4))
                *fp_1 = *x25_2
                *(fp_1 + 4) = v1
                void* x24_5 = &arg2[x21_2]
                *x25_2 = v2
                *(x25_2 + 4) = fneg(v3)
                v2 = *x24_5
                v3 = *(x24_5 + 4)
                v0 = fneg(*(x25_2 + 0xc))
                *x24_5 = arg2[x24_4 + 2]
                *(x24_5 + 4) = v0
                int64_t x24_6 = sx.q((x24_4 + 2).d) - x10
                int64_t x22_2 = x21_2 - x14_1
                arg2[x24_4 + 2] = v2
                void* x26_3 = &arg2[x24_6]
                *(x25_2 + 0xc) = fneg(v3)
                void* x28_2 = &arg2[x22_2]
                v2 = *x28_2
                v3 = *(x28_2 + 4)
                int64_t x24_7 = x2_2 + sx.q(x24_6.d)
                int64_t x23_5 = x22_2 - x14_1
                v1 = fneg(*(x26_3 + 4))
                *x28_2 = *x26_3
                *(x28_2 + 4) = v1
                *x26_3 = v2
                *(x26_3 + 4) = fneg(v3)
                void* x26_4 = &arg2[x24_7]
                void* x27_3 = &arg2[x23_5]
                v2 = *x27_3
                v3 = *(x27_3 + 4)
                v1 = fneg(*(x26_4 + 4))
                *x27_3 = *x26_4
                *(x27_3 + 4) = v1
                int64_t x27_5 = sx.q(x24_7.d) - x10
                void* x25_4 = &arg2[x23_5 - x14_1]
                *x26_4 = v2
                *(x26_4 + 4) = fneg(v3)
                void* x26_5 = &arg2[x27_5]
                v3 = *x25_4
                void* x27_7 = &arg2[x3_2 + sx.q(x27_5.d)]
                v0 = fneg(*(x25_4 + 4))
                v1 = fneg(*(x26_5 + 4))
                *x25_4 = *x26_5
                *(x25_4 + 4) = v1
                *x26_5 = v3
                *(x26_5 + 4) = v0
                v2 = *(x25_4 + 8)
                v3 = *(x25_4 + 0xc)
                int64_t x23_6 = x23_5 << 0x20
                int32_t x24_8 = x24_7.d + x9_1
                v1 = fneg(*(x27_7 + 4))
                *(x25_4 + 8) = *x27_7
                *(x25_4 + 0xc) = v1
                *x27_7 = v2
                *(x27_7 + 4) = fneg(v3)
                void* x27_8 = &arg2[sx.q(x24_8)]
                int64_t x23_8 = (x23_6 + 0x300000000) s>> 0x1e
                v3 = *(x27_8 + 4)
                int64_t x25_6 = (x23_6 + 0x200000000) s>> 0x1e
                v2 = *(arg2 + x23_8)
                v1 = *(arg2 + x25_6)
                *(arg2 + x25_6) = *x27_8
                int64_t x22_3 = x22_2 << 0x20
                *(arg2 + x23_8) = fneg(v3)
                int64_t x24_10 = sx.q(x24_8) - x2_2
                *x27_8 = v1
                *(x27_8 + 4) = fneg(v2)
                void* x27_9 = &arg2[x24_10]
                int64_t x22_5 = (x22_3 + 0x300000000) s>> 0x1e
                v3 = *(x27_9 + 4)
                int64_t x23_10 = (x22_3 + 0x200000000) s>> 0x1e
                v2 = *(arg2 + x22_5)
                v1 = *(arg2 + x23_10)
                *(arg2 + x23_10) = *x27_9
                *(arg2 + x22_5) = fneg(v3)
                int64_t x24_11 = x10 + sx.q(x24_10.d)
                *x27_9 = v1
                *(x27_9 + 4) = fneg(v2)
                void* x27_10 = &arg2[x24_11]
                int64_t x21_4 = (0x300000000 + (x21_2 << 0x20)) s>> 0x1e
                v3 = *(x27_10 + 4)
                int64_t x26_7 = zx.q(x21_2.d + 2) << 0x20 s>> 0x1e
                v2 = *(arg2 + x21_4)
                v1 = *(arg2 + x26_7)
                *(arg2 + x26_7) = *x27_10
                int64_t x25_8 = sx.q(x21_2.d + 2) - x3_2
                *(arg2 + x21_4) = fneg(v3)
                void* x23_11 = &arg2[x25_8]
                *x27_10 = v1
                *(x27_10 + 4) = fneg(v2)
                v2 = *x23_11
                v3 = *(x23_11 + 4)
                v0 = fneg(*(x27_10 - 4))
                int64_t x25_10 = sx.q(x25_8.d) - x2_2
                int64_t x24_14 = sx.q((x24_11 - 2).d) - x10
                *x23_11 = arg2[x24_11 - 2]
                *(x23_11 + 4) = v0
                void* x22_6 = &arg2[x25_10]
                float* x23_12 = &arg2[x24_14]
                arg2[x24_11 - 2] = v2
                *(x27_10 - 4) = fneg(v3)
                v0 = *x22_6
                int64_t x25_12 = sx.q(x25_10.d) - x2_2
                int64_t x24_15 = x2_2 + sx.q(x24_14.d)
                v1 = fneg(*(x22_6 + 4))
                v3 = fneg(x23_12[1])
                void* x26_8 = &arg2[x25_12]
                float* x21_6 = &arg2[x24_15]
                *x22_6 = *x23_12
                *(x22_6 + 4) = v3
                *x23_12 = v0
                x23_12[1] = v1
                v0 = *x26_8
                v1 = fneg(*(x26_8 + 4))
                v3 = fneg(x21_6[1])
                float* x25_15 = &arg2[sx.q(x25_12.d) - x2_2]
                float* x22_8 = &arg2[sx.q(x24_15.d) - x10]
                *x26_8 = *x21_6
                *(x26_8 + 4) = v3
                *x21_6 = v0
                x21_6[1] = v1
                v3 = *x25_15
                int32_t x21_7 = x13_1
                v0 = fneg(x25_15[1])
                v1 = fneg(x22_8[1])
                *x25_15 = *x22_8
                x25_15[1] = v1
                *x22_8 = v3
                x22_8[1] = v0
                bool cond:5_1
                
                do
                    x20_1 ^= x21_7
                    cond:5_1 = x21_7 s> x20_1
                    x21_7 s>>= 1
                while (cond:5_1)
                i_1 += 4
            while (i_1 s< sx.q(x6_1))
        
        int64_t x7_1 = sx.q(x6_1)
        void* x6_2 = &arg2[sx.q(x6_1)]
        int64_t x7_2 = x7_1 + x16_2
        void* x21_8 = &arg2[x7_2]
        *(x6_2 + 4) = fneg(*(x6_2 + 4))
        v3 = *(x21_8 + 4)
        v1 = *(x6_2 + 0xc)
        v2 = arg2[x7_1 + 2]
        arg2[x7_1 + 2] = *x21_8
        *(x6_2 + 0xc) = fneg(v3)
        int64_t x7_4 = sx.q(x7_2.d) + sx.q(x10)
        v0 = fneg(*(x21_8 + 0xc))
        int64_t x19_4 = x17_2 + sx.q((x7_1 + 2).d)
        void* x6_3 = &arg2[x7_4]
        *x21_8 = v2
        *(x21_8 + 4) = fneg(v1)
        *(x21_8 + 0xc) = v0
        void* x20_3 = &arg2[x19_4]
        v2 = *x20_3
        v3 = *(x20_3 + 4)
        int64_t x19_5 = x17_2 + sx.q(x19_4.d)
        v1 = fneg(*(x6_3 + 4))
        int64_t x7_6 = sx.q(x7_4.d) - x17_2
        *x20_3 = *x6_3
        *(x20_3 + 4) = v1
        void* x21_9 = &arg2[x19_5]
        void* x20_4 = &arg2[x7_6]
        *x6_3 = v2
        *(x6_3 + 4) = fneg(v3)
        v0 = *x21_9
        void* x6_5 = &arg2[sx.q(x19_5.d + x9_1)]
        v1 = fneg(*(x21_9 + 4))
        v3 = fneg(*(x20_4 + 4))
        *x21_9 = *x20_4
        *(x21_9 + 4) = v3
        *x20_4 = v0
        *(x20_4 + 4) = v1
        void* x20_7 = &arg2[sx.q(x7_6.d) - x16_2]
        v2 = *(x21_9 - 8)
        v3 = *(x21_9 - 4)
        void* x19_7 = &arg2[sx.q(x19_5.d + x8_1)]
        v1 = fneg(*(x20_7 + 4))
        *(x21_9 - 8) = *x20_7
        *(x21_9 - 4) = v1
        *x20_7 = v2
        *(x20_7 + 4) = fneg(v3)
        int64_t x20_9 = zx.q(x7_6.d + 3) << 0x20 s>> 0x1e
        int64_t x21_11 = zx.q(x7_6.d + 2) << 0x20 s>> 0x1e
        v0 = *x6_5
        v1 = fneg(*(x6_5 + 4))
        v2 = fneg(*(arg2 + x20_9))
        *x6_5 = *(arg2 + x21_11)
        *(x6_5 + 4) = v2
        *(arg2 + x21_11) = v0
        *(arg2 + x20_9) = v1
        v2 = *x19_7
        void* x6_7 = &arg2[sx.q(x7_6.d + x10)]
        v3 = *(x19_7 + 4)
        *(x19_7 - 4) = fneg(*(x19_7 - 4))
        v0 = fneg(*(x6_7 + 4))
        *x19_7 = *x6_7
        *(x19_7 + 4) = v0
        v0 = *(x6_7 + 0xc)
        *x6_7 = v2
        *(x6_7 + 4) = fneg(v3)
        *(x6_7 + 0xc) = fneg(v0)
        int32_t x6_8 = x13_1
        bool cond:4_1
        
        do
            i_3 ^= x6_8
            cond:4_1 = x6_8 s> i_3
            x6_8 s>>= 1
        while (cond:4_1)
        x12_1 += 4
    while (x12_1 s< x8_1)
