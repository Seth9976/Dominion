// 函数: sub_fdecf0
// 地址: 0xfdecf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const x8

if (arg5 == 0)
    x8 = &data_866de4
else
    x8 = &data_866dd0

uint32_t x9 = *stbi__flip_vertically_on_write
int32_t x10_1 = *(x8 + (sx.q(arg7) << 2))
int32_t x8_1

if (x9 == 0)
    x8_1 = arg5
else
    x8_1 = not.d(arg5) + arg4

int64_t x8_3 = sx.q(x8_1 * arg2)
int32_t x11_1

if (x9 != 0)
    x11_1 = neg.d(arg2)
else
    x11_1 = arg2

char* x9_1 = arg1 + x8_3
int128_t v0
int128_t v1

if (arg6 s>= 1)
    if (x10_1 == 0)
        uint64_t x12_2 = zx.q(arg6)
        int64_t i_23
        
        if (arg6 u< 8 || (arg1 + x8_3 + x12_2 u> arg8 && x9_1 u< &arg8[x12_2]))
            i_23 = 0
        label_fdedcc:
            void* x14_2 = &arg8[i_23]
            char* x15_4 = arg1 + i_23 + x8_3
            int64_t i_14 = x12_2 - i_23
            int64_t i
            
            do
                char x13_8 = *x15_4
                x15_4 = &x15_4[1]
                i = i_14
                i_14 -= 1
                *x14_2 = x13_8
                x14_2 += 1
            while (i != 1)
        else if (arg6 u>= 0x20)
            i_23 = x12_2 & 0xffffffe0
            int128_t* x14_10 = x8_3 + arg1 + 0x10
            void* x15_11 = &arg8[0x10]
            int64_t i_19 = i_23
            int64_t i_1
            
            do
                v0 = x14_10[-1]
                v1 = *x14_10
                x14_10 = &x14_10[2]
                i_1 = i_19
                i_19 -= 0x20
                *(x15_11 - 0x10) = v0
                *x15_11 = v1
                x15_11 += 0x20
            while (i_1 != 0x20)
            
            if (i_23 != x12_2)
                if ((x12_2 & 0x18) == 0)
                    goto label_fdedcc
                
                goto label_fdf074
        else
            i_23 = 0
        label_fdf074:
            int64_t i_25 = i_23
            i_23 = x12_2 & 0xfffffff8
            void* x14_11 = &arg8[i_25]
            int64_t* x15_13 = arg1 + i_25 + x8_3
            int64_t i_20 = i_25 - i_23
            int64_t i_2
            
            do
                v0.q = *x15_13
                x15_13 = &x15_13[1]
                i_2 = i_20
                i_20 += 8
                *x14_11 = v0.q
                x14_11 += 8
            while (i_2 != -8)
            
            if (i_23 != x12_2)
                goto label_fdedcc
    else if (x10_1 != 1)
        uint64_t i_15 = zx.q(arg6)
        int32_t x13_9 = neg.d(x11_1)
        uint64_t x14_5 = zx.q(x10_1 - 2)
        char* x16_2 = x9_1
        char* x17_10 = arg8
        uint64_t i_3
        
        do
            if (x14_5.d u<= 4)
                char x1_3
                
                switch (x14_5)
                    case 0, 2
                        x1_3 = *x16_2 - x9_1[sx.q(x13_9)]
                    case 1
                        x1_3 = *x16_2 - (x9_1[sx.q(x13_9)] u>> 1)
                    case 3, 4
                        x1_3 = *x16_2
                
                *x17_10 = x1_3
            
            x17_10 = &x17_10[1]
            x13_9 += 1
            i_3 = i_15
            i_15 -= 1
            x16_2 = &x16_2[1]
        while (i_3 != 1)
    else
        uint64_t x12_1 = zx.q(arg6)
        int64_t i_22
        
        if (arg6 u< 8 || (arg1 + x8_3 + x12_1 u> arg8 && x9_1 u< &arg8[x12_1]))
            i_22 = 0
        label_fded7c:
            char* x14_1 = &arg8[i_22]
            char* x15_2 = arg1 + i_22 + x8_3
            int64_t i_13 = x12_1 - i_22
            int64_t i_4
            
            do
                char x13_4 = *x15_2
                x15_2 = &x15_2[1]
                i_4 = i_13
                i_13 -= 1
                *x14_1 = x13_4
                x14_1 = &x14_1[1]
            while (i_4 != 1)
        else if (arg6 u>= 0x20)
            i_22 = x12_1 & 0xffffffe0
            int128_t* x14_7 = x8_3 + arg1 + 0x10
            void* x15_8 = &arg8[0x10]
            int64_t i_17 = i_22
            int64_t i_5
            
            do
                v0 = x14_7[-1]
                v1 = *x14_7
                x14_7 = &x14_7[2]
                i_5 = i_17
                i_17 -= 0x20
                *(x15_8 - 0x10) = v0
                *x15_8 = v1
                x15_8 += 0x20
            while (i_5 != 0x20)
            
            if (i_22 != x12_1)
                if ((x12_1 & 0x18) == 0)
                    goto label_fded7c
                
                goto label_fdf004
        else
            i_22 = 0
        label_fdf004:
            int64_t i_24 = i_22
            i_22 = x12_1 & 0xfffffff8
            void* x14_8 = &arg8[i_24]
            int64_t* x15_10 = arg1 + i_24 + x8_3
            int64_t i_18 = i_24 - i_22
            int64_t i_6
            
            do
                v0.q = *x15_10
                x15_10 = &x15_10[1]
                i_6 = i_18
                i_18 += 8
                *x14_8 = v0.q
                x14_8 += 8
            while (i_6 != -8)
            
            if (i_22 != x12_1)
                goto label_fded7c

int32_t x14_3 = arg6 * arg3

if (x14_3 s<= arg6)
    return 

int64_t x12_3 = sx.q(arg6)

if (x10_1 != 0)
    int64_t x15_5 = sx.q(x11_1)
    int64_t x17_1 = x12_3 + x8_3
    int64_t i_7 = 0
    uint64_t x10_2 = zx.q(x10_1 - 1)
    char* x14_4 = arg1 + x17_1
    int64_t x12_4 = arg1 + x8_3 - x15_5
    int64_t x15_7 = arg1 + x17_1 - x15_5
    
    do
        if (x10_2.d u<= 5)
            char x17_3
            
            switch (x10_2)
                case 0, 5
                    x17_3 = x14_4[i_7] - x9_1[i_7]
                case 1
                    x17_3 = x14_4[i_7] - *(x15_7 + i_7)
                case 2
                    x17_3 = x14_4[i_7] - ((zx.d(*(x15_7 + i_7)) + zx.d(x9_1[i_7])) u>> 1).b
                case 3
                    uint32_t x17_7 = zx.d(x9_1[i_7])
                    uint32_t x0_1 = zx.d(*(x15_7 + i_7))
                    uint32_t x1_2 = zx.d(*(x12_4 + i_7))
                    uint32_t x3_1 = x0_1 + x17_7 - x1_2
                    uint32_t x4 = x3_1 - x17_7
                    uint32_t x4_1
                    
                    if (x3_1 - x17_7 s< 0)
                        x4_1 = neg.d(x4)
                    else
                        x4_1 = x4
                    
                    uint32_t x5 = x3_1 - x0_1
                    uint32_t x5_1
                    
                    if (x3_1 - x0_1 s< 0)
                        x5_1 = neg.d(x5)
                    else
                        x5_1 = x5
                    
                    uint32_t x3_2 = x3_1 - x1_2
                    uint32_t x3_3
                    
                    if (x3_1 - x1_2 s< 0)
                        x3_3 = neg.d(x3_2)
                    else
                        x3_3 = x3_2
                    
                    if (x5_1 u> x3_3)
                        arg1 = zx.q(x1_2)
                    else
                        arg1 = zx.q(x0_1)
                    
                    bool c_1
                    bool z_1
                    
                    if (x4_1 u<= x3_3)
                        c_1 = x4_1 u>= x5_1
                        z_1 = x4_1 == x5_1
                    else
                        z_1 = false
                        c_1 = true
                    
                    char x17_8
                    
                    if (not(z_1) && c_1)
                        x17_8 = arg1.b
                    else
                        x17_8 = x17_7.b
                    
                    x17_3 = x14_4[i_7] - x17_8
                case 4
                    x17_3 = x14_4[i_7] - (x9_1[i_7] u>> 1)
            
            arg8[x12_3 + i_7] = x17_3
        
        i_7 += 1
    while (sx.q(x14_3) - x12_3 != i_7)
    
    return 

int64_t x9_2 = sx.q(x14_3)
int64_t x10_3 = x9_2 - x12_3

if (x10_3 u< 8 || (&arg8[x12_3] u< arg1 + x9_2 + x8_3 && arg1 + x12_3 + x8_3 u< &arg8[x9_2]))
    goto label_fdf12c

int64_t i_21

if (x10_3 u>= 0x20)
    i_21 = x10_3 & 0xffffffffffffffe0
    int128_t* x13_16 = x12_3 + x8_3 + arg1 + 0x10
    void* x14_13 = &arg8[x12_3 + 0x10]
    int64_t i_16 = i_21
    int64_t i_8
    
    do
        v0 = x13_16[-1]
        v1 = *x13_16
        i_8 = i_16
        i_16 -= 0x20
        x13_16 = &x13_16[2]
        *(x14_13 - 0x10) = v0
        *x14_13 = v1
        x14_13 += 0x20
    while (i_8 != 0x20)
    
    if (x10_3 != i_21)
        if ((x10_3 & 0x18) != 0)
            goto label_fdf0ec
        
        x12_3 += i_21
    label_fdf12c:
        void* x8_5 = &arg8[x12_3]
        int64_t x10_5 = arg1 + x12_3 + x8_3
        int64_t i_11 = x9_2 - x12_3
        int64_t i_9
        
        do
            char x11_5 = *x10_5
            x10_5 += 1
            i_9 = i_11
            i_11 -= 1
            *x8_5 = x11_5
            x8_5 += 1
        while (i_9 != 1)
else
    i_21 = 0
label_fdf0ec:
    int64_t x14_14 = i_21 + x12_3
    int64_t x13_17 = x10_3 & 0xfffffffffffffff8
    x12_3 += x13_17
    void* x14_15 = &arg8[x14_14]
    int64_t* x15_15 = arg1 + x14_14 + x8_3
    int64_t i_12 = i_21 - x13_17
    int64_t i_10
    
    do
        v0.q = *x15_15
        x15_15 = &x15_15[1]
        i_10 = i_12
        i_12 += 8
        *x14_15 = v0.q
        x14_15 += 8
    while (i_10 != -8)
    
    if (x10_3 != x13_17)
        goto label_fdf12c
