// 函数: vorbis_synthesis_lapout
// 地址: 0x1081338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x28)

if ((x8 & 0x80000000) != 0)
    return 0

void* x10 = *(arg1 + 8)
int64_t x11 = *(arg1 + 0x40)
int64_t* x9 = *(x10 + 0x30)
int64_t x14 = x9[x11]
uint64_t x15 = zx.q(x9[0x2d2].d + 1)
int64_t x9_1 = x9[1] s>> x15
int64_t x13_1 = sx.q(x9_1.d)
int32_t x12_1 = (*x9 s>> x15).d
int128_t v1

if (*(arg1 + 0x50) == x13_1)
    int64_t x16_1 = sx.q(*(x10 + 4))
    
    if (x16_1.d s>= 1)
        int64_t x18_1 = *(arg1 + 0x10)
        int64_t x2_1 = x9_1 & 0xffffffff
        int64_t x3_1 = x9_1 & 7
        int64_t x17_1 = 0
        int64_t i_10 = x2_1 - x3_1
        
        do
            if (x9_1.d s>= 1)
                int128_t* x19_1 = *(x18_1 + (x17_1 << 3))
                int64_t i_12 = 0
                
                if (x2_1 u< 8)
                label_1081420:
                    void* x20_3 = x19_1 + (i_12 << 2)
                    void* x19_2 = x19_1 + ((sx.q(x9_1.d) + i_12) << 2)
                    int64_t i_8 = x2_1 - i_12
                    int64_t i
                    
                    do
                        int32_t x23_1 = *x20_3
                        i = i_8
                        i_8 -= 1
                        *x20_3 = *x19_2
                        x20_3 += 4
                        *x19_2 = x23_1
                        x19_2 += 4
                    while (i != 1)
                else
                    if (x19_1 u< x19_1 + ((x13_1 + x2_1) << 2))
                        i_12 = 0
                    
                    if (x19_1 u< x19_1 + ((x13_1 + x2_1) << 2)
                            && x19_1 + (x13_1 << 2) u< x19_1 + (x2_1 << 2))
                        goto label_1081420
                    
                    int64_t i_6 = i_10
                    int128_t* x21_2 = x19_1
                    int64_t i_1
                    
                    do
                        int128_t* x22_1 = x21_2 + ((x9_1 & 0xffffffff) << 0x20 s>> 0x1e)
                        v1 = x22_1[1]
                        int128_t v2 = *x21_2
                        int128_t v3 = x21_2[1]
                        i_1 = i_6
                        i_6 -= 8
                        *x21_2 = *x22_1
                        x21_2[1] = v1
                        x21_2 = &x21_2[2]
                        *x22_1 = v2
                        x22_1[1] = v3
                    while (i_1 != 8)
                    i_12 = i_10
                    
                    if (x3_1 != 0)
                        goto label_1081420
            
            x17_1 += 1
        while (x17_1 s< x16_1)
    
    int32_t x16_2 = *(arg1 + 0x24)
    x8 -= x9_1.d
    *(arg1 + 0x50) = 0
    *(arg1 + 0x24) = x16_2 - x9_1.d
    *(arg1 + 0x28) = x8

int64_t x16_4 = *(arg1 + 0x38)
int32_t x16_6
int128_t v0

if (x16_4 ^ x11)
    int64_t x13_2 = sx.q(*(x10 + 4))
    
    if (x13_2.d s<= 0)
        int32_t x12_3 = x9_1.d - x12_1
        int32_t x12_4
        
        if (x12_3 s< 0)
            x12_4 = x12_3 + 1
        else
            x12_4 = x12_3
        
        x16_6 = x12_4 s>> 1
    else
        int32_t x16_5 = x9_1.d - x12_1
        int32_t x12_2 = x9_1.d + x12_1
        uint64_t x17_2
        
        if (x16_5 s< 0)
            x17_2 = zx.q(x16_5 + 1)
        else
            x17_2 = zx.q(x16_5)
        
        x16_6 = x17_2.d s>> 1
        int64_t x2_2 = (x17_2 & 0xfffffffe) << 0x20 s>> 0x21
        uint64_t x17_3
        
        if (x12_2 s< 0)
            x17_3 = zx.q(x12_2 + 1)
        else
            x17_3 = zx.q(x12_2)
        
        int64_t x17_4 = (x17_3 & 0xfffffffe) << 0x20 s>> 0x21
        int64_t x7_2
        
        if (not.q(x17_4) s<= -2)
            x7_2 = -2
        else
            x7_2 = not.q(x17_4)
        
        int64_t x19_3 = x7_2 + x17_4
        int64_t x15_1 = *(arg1 + 0x10)
        int64_t x19_4 = (x19_3 + 1) << 2
        int64_t x2_3 = x17_4 + x2_2
        int64_t i_7 = (x19_3 + 2) & 0xfffffffffffffff8
        int64_t x14_1 = 0
        int64_t x18_2 = zx.q(x16_6) << 0x20 s>> 0x1e
        int32_t x22_4 = 0 != (mulu.dp.q(x19_3 + 1, 4) u>> 0x40).q ? 1 : 0
        
        do
            if (x12_2 s>= 2)
                int32_t* x24_1 = *(x15_1 + (x14_1 << 3))
                int64_t x25_3 = x17_4
                
                if (x19_3 + 2 u>= 8)
                    void* x25_1 = &x24_1[x2_3 - 1]
                    void* x26_1 = &x24_1[x17_4 - 1]
                    x25_3 = x17_4
                    
                    if ((((x25_1 - x19_4 u> x25_1 ? 1 : 0) | x22_4) & 1) != 0)
                        goto label_10815b0
                    
                    x25_3 = x17_4
                    
                    if ((((x26_1 - x19_4 u> x26_1 ? 1 : 0) | x22_4) & 1) != 0)
                        goto label_10815b0
                    
                    if (&x24_1[x2_2 - 2 - x7_2] u< &x24_1[x17_4])
                        x25_3 = x17_4
                    
                    if (&x24_1[x2_2 - 2 - x7_2] u< &x24_1[x17_4]
                            && &x24_1[-2 - x7_2] u< &x24_1[x2_3])
                        goto label_10815b0
                    
                    void* x25_6 = &x24_1[x17_4 - 4]
                    int64_t i_2 = i_7
                    
                    do
                        v1 = *(x25_6 - 0x10)
                        v0 = *x25_6
                        void* x27_3 = x25_6 + x18_2
                        i_2 -= 8
                        x25_6 -= 0x20
                        *(x27_3 - 0x10) = v1
                        *x27_3 = v0
                    while (i_2 != 0)
                    
                    x25_3 = x17_4 - i_7
                    
                    if (x19_3 + 2 != i_7)
                        goto label_10815b0
                else
                label_10815b0:
                    int64_t x25_7 = x25_3 - 1
                    int64_t i_3
                    
                    do
                        i_3 = x25_7 + 1
                        x25_7 -= 1
                        (x24_1 + x18_2)[x25_7] = x24_1[x25_7]
                    while (i_3 s> 1)
            
            x14_1 += 1
        while (x14_1 s< x13_2)
    
label_108175c:
    x8 += x16_6
    *(arg1 + 0x24) += x16_6
    *(arg1 + 0x28) = x8
else if (x16_4 == 0)
    int64_t x14_2 = sx.q(*(x10 + 4))
    
    if (x14_2.d s>= 1)
        int64_t x17_5 = sx.q(x12_1)
        int64_t x6_4
        
        if (not.q(x17_5) s<= -2)
            x6_4 = -2
        else
            x6_4 = not.q(x17_5)
        
        int64_t x19_5 = x6_4 + x17_5
        int64_t x16_7 = *(arg1 + 0x10)
        int64_t x19_6 = (x19_5 + 1) << 2
        int64_t i_11 = (x19_5 + 2) & 0xfffffffffffffff8
        int64_t x15_2 = 0
        int32_t x22_5 = 0 != (mulu.dp.q(x19_5 + 1, 4) u>> 0x40).q ? 1 : 0
        
        do
            if (x12_1 s>= 1)
                int64_t x24_2 = *(x16_7 + (x15_2 << 3))
                int64_t x26_7 = x17_5
                
                if (x19_5 + 2 u< 8)
                label_1081714:
                    int64_t i_4 = x26_7 + 1
                    int32_t* x24_4 = x24_2 + (x26_7 << 2) - 4
                    
                    do
                        i_4 -= 1
                        *(x24_4 + ((x9_1 & 0xffffffff) << 0x20 s>> 0x1e) - (sx.q(x12_1) << 2)) =
                            *x24_4
                        x24_4 -= 4
                    while (i_4 s> 1)
                else
                    int64_t x25_8 = x24_2 + ((x13_1 - 1) << 2)
                    int64_t x26_8 = x24_2 + ((x17_5 - 1) << 2)
                    x26_7 = x17_5
                    
                    if ((((x25_8 - x19_6 u> x25_8 ? 1 : 0) | x22_5) & 1) != 0)
                        goto label_1081714
                    
                    x26_7 = x17_5
                    
                    if ((((x26_8 - x19_6 u> x26_8 ? 1 : 0) | x22_5) & 1) != 0)
                        goto label_1081714
                    
                    if (x24_2 + ((x13_1 - 2 - x19_5) << 2) u< x24_2 + (x17_5 << 2))
                        x26_7 = x17_5
                    
                    if (x24_2 + ((x13_1 - 2 - x19_5) << 2) u< x24_2 + (x17_5 << 2)
                            && x24_2 + ((-2 - x6_4) << 2) u< x24_2 + (x13_1 << 2))
                        goto label_1081714
                    
                    void* x25_14 = x24_2 + ((sx.q(x9_1.d) - 4) << 2)
                    void* x26_11 = x24_2 + ((sx.q(x12_1) - 4) << 2)
                    int64_t i_9 = i_11
                    int64_t i_5
                    
                    do
                        v1 = *(x26_11 - 0x10)
                        v0 = *x26_11
                        i_5 = i_9
                        i_9 -= 8
                        x26_11 -= 0x20
                        *(x25_14 - 0x10) = v1
                        *x25_14 = v0
                        x25_14 -= 0x20
                    while (i_5 != 8)
                    x26_7 = x17_5 - i_11
                    
                    if (x19_5 + 2 != i_11)
                        goto label_1081714
            
            x15_2 += 1
        while (x15_2 s< x14_2)
    
    x16_6 = x9_1.d - x12_1
    goto label_108175c

if (arg2 != 0)
    int64_t x10_1 = sx.q(*(x10 + 4))
    void* x12_7
    
    if (x10_1.d s<= 0)
        x12_7 = arg1 + 0x18
    else
        int64_t x13_3 = 0
        x12_7 = arg1 + 0x18
        
        do
            x13_3 += 1
            (*(arg1 + 0x18))[x13_3] = (*(arg1 + 0x10))[x13_3] + (sx.q(x8) << 2)
        while (x13_3 s< x10_1)
    
    *arg2 = *x12_7

return zx.q(x9_1.d + (x14 s>> x15).d - x8)
