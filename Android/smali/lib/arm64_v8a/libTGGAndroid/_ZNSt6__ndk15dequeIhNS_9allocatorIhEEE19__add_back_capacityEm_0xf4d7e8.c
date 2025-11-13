// 函数: _ZNSt6__ndk15dequeIhNS_9allocatorIhEEE19__add_back_capacityEm
// 地址: 0xf4d7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x26 = *(arg1 + 8)
void* i_24 = *(arg1 + 0x10)
int64_t x9 = *(arg1 + 0x20)
uint64_t x19 = arg1
int64_t x10
int64_t entry_x1

if (i_24 == x26)
    x10 = entry_x1 + 1
else
    x10 = entry_x1
uint64_t i_23 = x10 u>> 0xc
uint64_t i_16

if ((x10 & 0xfff) != 0)
    i_16 = i_23 + 1
else
    i_16 = i_23

uint64_t i_17 = x9 u>> 0xc
uint64_t i_12

i_12 = i_16 u< i_17 ? i_16 : i_17

uint64_t i_13 = i_16 - i_12

if (i_16 == i_12)
    *(x19 + 0x20) = x9 - (i_12 << 0xc)
    
    if (i_12 != 0)
        while (true)
            int64_t x23_2 = *x26
            void* x20_3 = &x26[1]
            int64_t x8_5 = *(x19 + 0x18)
            *(x19 + 8) = x20_3
            
            if (i_24 == x8_5)
                void* x21_2 = *x19
                
                if (x20_3 u<= x21_2)
                    int64_t x8_13
                    
                    if (i_24 != x21_2)
                        x8_13 = (i_24 - x21_2) s>> 2
                    else
                        x8_13 = 1
                    
                    if (x8_13 u>> 0x3d != 0)
                        break
                    
                    int64_t x22_2 = x8_13 << 3
                    uint64_t x27_1 = x8_13 u>> 2
                    int128_t v0_1
                    int128_t v1_1
                    arg1, v0_1, v1_1 = operator new(x22_2)
                    void* i_8 = arg1 + (x27_1 << 3)
                    void* x11_1 = i_24 - x20_3
                    void* i_14 = i_8
                    
                    if (i_24 != x20_3)
                        void* x9_5
                        
                        x9_5 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
                        
                        void* x14_1 = x20_3 - i_24
                        void* x9_6
                        
                        x9_6 = x9_5 s< 1 ? x9_5 : 1
                        
                        void* x10_4
                        
                        x10_4 = x11_1 s> x14_1 ? x11_1 : x14_1
                        
                        int64_t x10_6 = (x9_6 * (x10_4 u>> 3)) << 3
                        i_14 = i_8 + x11_1
                        void* i_1
                        
                        if (x10_6 - 8 u>= 0x18)
                            void* x16_1
                            
                            x16_1 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
                            
                            void* x16_2
                            
                            x16_2 = x16_1 s< 1 ? x16_1 : 1
                            
                            void* x11_2
                            
                            x11_2 = x11_1 s> x14_1 ? x11_1 : x14_1
                            
                            uint64_t x13_1 = x27_1 << 3
                            
                            if (arg1 + x13_1 u< x26 + ((x16_2 * (x11_2 u>> 3)) << 3) - 8 + 0x10)
                                i_1 = i_8
                            
                            if (arg1 + x13_1 u< x26 + ((x16_2 * (x11_2 u>> 3)) << 3) - 8 + 0x10
                                    && arg1 + x13_1 + ((x16_2 * (x11_2 u>> 3)) << 3) - 8 + 8
                                    u> x20_3)
                                goto label_f4da28
                            
                            int64_t i_18 = (((x10_6 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                            int64_t x16_3 = i_18 << 3
                            void* x12_2 = &x26[3]
                            i_1 = i_8 + x16_3
                            x20_3 += x16_3
                            void* x15_3 = arg1 + (x27_1 << 3) + 0x10
                            int64_t i_10 = i_18
                            int64_t i
                            
                            do
                                v0_1 = *(x12_2 - 0x10)
                                v1_1 = *x12_2
                                x12_2 += 0x20
                                i = i_10
                                i_10 -= 4
                                *(x15_3 - 0x10) = v0_1
                                *x15_3 = v1_1
                                x15_3 += 0x20
                            while (i != 4)
                            
                            if (((x10_6 - 8) u>> 3) + 1 != i_18)
                                goto label_f4da28
                        else
                            i_1 = i_8
                        label_f4da28:
                            
                            do
                                int64_t x12_3 = *x20_3
                                x20_3 += 8
                                *i_1 = x12_3
                                i_1 += 8
                            while (arg1 + x10_6 + (x27_1 << 3) != i_1)
                    
                    i_24 = i_14
                    *x19 = arg1
                    *(x19 + 8) = i_8
                    *(x19 + 0x10) = i_14
                    *(x19 + 0x18) = arg1 + x22_2
                    
                    if (x21_2 != 0)
                        operator delete(x21_2)
                        i_24 = *(x19 + 0x10)
                else
                    int64_t x8_7 = (x20_3 - x21_2) s>> 3
                    int64_t x8_8
                    
                    if (x8_7 + 1 s< 0)
                        x8_8 = x8_7 + 2
                    else
                        x8_8 = x8_7 + 1
                    
                    int64_t x8_9 = x8_8 s>> 1
                    void* x21_3 = i_24 - x20_3
                    void* x22_1 = x20_3 - (x8_9 << 3)
                    
                    if (i_24 != x20_3)
                        memmove(x22_1, x20_3, x21_3)
                        x20_3 = *(x19 + 8)
                    
                    i_24 = x22_1 + x21_3
                    *(x19 + 8) = x20_3 + (neg.q(x8_9) << 3)
                    *(x19 + 0x10) = i_24
            
            *i_24 = x23_2
            uint64_t i_20 = i_12
            i_12 -= 1
            i_24 = *(x19 + 0x10) + 8
            *(x19 + 0x10) = i_24
            
            if (i_20 == 1)
                return 
            
            x26 = *(x19 + 8)
        
        sub_ef2a0c()
        noreturn
    
    return 

int64_t x9_1 = *(x19 + 0x18)
int64_t x21_1 = (i_24 - x26) s>> 3
int64_t x10_2 = x9_1 - *x19

if (i_13 u> (x10_2 s>> 3) - x21_1)
    int64_t x8_2 = x10_2 s>> 2
    int64_t x9_2 = i_13 + x21_1
    int64_t x23_1
    
    x23_1 = x8_2 u< x9_2 ? x9_2 : x8_2
    
    int64_t* x20_1
    
    if (x23_1 == 0)
        x20_1 = nullptr
    else
        if (x23_1 u>> 0x3d != 0)
            sub_ef2a0c()
            noreturn
        
        x20_1 = operator new(x23_1 << 3)
    
    int64_t x8_21 = neg.q(i_12 << 0xc)
    void* j_14 = &x20_1[x21_1 - i_12]
    void* x27_2 = &x20_1[x23_1]
    int64_t* j_15 = j_14
    uint64_t i_2
    
    do
        int64_t x0_9 = operator new(0x1000)
        
        if (j_15 == x27_2)
            if (j_14 u<= x20_1)
                int64_t fp_1
                
                if (x27_2 != x20_1)
                    fp_1 = (x27_2 - x20_1) s>> 2
                else
                    fp_1 = 1
                
                if (fp_1 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                int64_t* x0_12
                int128_t v0_2
                int128_t v1_2
                x0_12, v0_2, v1_2 = operator new(fp_1 << 3)
                uint64_t x8_31 = fp_1 u>> 2
                void* j_10 = &x0_12[x8_31]
                void* x9_11 = x27_2 - j_14
                j_15 = j_10
                
                if (x27_2 != j_14)
                    void* x10_12
                    
                    x10_12 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
                    
                    void* x11_11 = j_14 - x27_2
                    void* x10_13
                    
                    x10_13 = x10_12 s< 1 ? x10_12 : 1
                    
                    void* x12_4
                    
                    x12_4 = x11_11 s> x9_11 ? x11_11 : x9_11
                    
                    j_15 = j_10 + x9_11
                    uint64_t x13_3
                    void* x14_5
                    void* x16_4
                    
                    if (((x10_13 * (x12_4 u>> 3)) << 3) - 8 u>= 0x18)
                        void* x14_4
                        
                        x14_4 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
                        
                        x14_5 = x14_4 s< 1 ? x14_4 : 1
                        
                        x16_4 = x11_11 s> x9_11 ? x11_11 : x9_11
                        
                        x13_3 = x8_31 << 3
                    
                    void* j_1
                    
                    if (((x10_13 * (x12_4 u>> 3)) << 3) - 8 u>= 0x18 && (
                            &x0_12[x8_31] u>= j_14 + ((x14_5 * (x16_4 u>> 3)) << 3) - 8 + 8
                            || x0_12 + x13_3 + ((x14_5 * (x16_4 u>> 3)) << 3) - 8 + 8 u<= j_14))
                        int64_t j_11 =
                            (((((x10_13 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                        int64_t x17_1 = j_11 << 3
                        void* x13_7 = j_14 + 0x10
                        j_1 = j_10 + x17_1
                        j_14 += x17_1
                        void* x16_9 = &x0_12[x8_31 + 2]
                        int64_t j_7 = j_11
                        int64_t j
                        
                        do
                            v0_2 = *(x13_7 - 0x10)
                            v1_2 = *x13_7
                            x13_7 += 0x20
                            j = j_7
                            j_7 -= 4
                            *(x16_9 - 0x10) = v0_2
                            *x16_9 = v1_2
                            x16_9 += 0x20
                        while (j != 4)
                        
                        if (((((x10_13 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1 != j_11)
                            goto label_f4dc50
                    else
                        j_1 = j_10
                    label_f4dc50:
                        void* x9_12
                        
                        x9_12 = x11_11 s> x9_11 ? x11_11 : x9_11
                        
                        do
                            int64_t x9_16 = *j_14
                            j_14 += 8
                            *j_1 = x9_16
                            j_1 += 8
                        while (x0_12 + ((x10_13 * (x9_12 u>> 3)) << 3) + (x8_31 << 3) != j_1)
                
                x27_2 = &x0_12[fp_1]
                
                if (x20_1 != 0)
                    operator delete(x20_1)
                
                j_14 = j_10
                x20_1 = x0_12
            else
                int64_t x8_24 = (j_14 - x20_1) s>> 3
                int64_t x8_25
                
                if (x8_24 + 1 s< 0)
                    x8_25 = x8_24 + 2
                else
                    x8_25 = x8_24 + 1
                
                size_t x24 = x27_2 - j_14
                void* j_17 = j_14 - (x8_25 << 2 & 0xfffffffffffffff8)
                
                if (x27_2 != j_14)
                    memmove(j_17, j_14, x24)
                
                j_15 = j_17 + x24
                j_14 = j_17
        
        i_2 = i_13
        i_13 -= 1
        *j_15 = x0_9
        j_15 = &j_15[1]
    while (i_2 != 1)
    int64_t* x28 = *(x19 + 8)
    void* j_9
    
    if (i_12 != 0)
        uint64_t i_3
        
        do
            if (j_15 != x27_2)
                j_9 = j_14
            else if (j_14 u<= x20_1)
                int64_t fp_2
                
                if (x27_2 != x20_1)
                    fp_2 = (x27_2 - x20_1) s>> 2
                else
                    fp_2 = 1
                
                if (fp_2 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                int64_t* x0_17
                int128_t v0_4
                int128_t v1_4
                x0_17, v0_4, v1_4 = operator new(fp_2 << 3)
                uint64_t x8_47 = fp_2 u>> 2
                j_9 = &x0_17[x8_47]
                void* x9_20 = x27_2 - j_14
                j_15 = j_9
                
                if (x27_2 != j_14)
                    void* x10_16
                    
                    x10_16 = x9_20 s>= 0 ? x9_20 : -ffffffffffffffff
                    
                    void* x11_13 = j_14 - x27_2
                    void* x10_17
                    
                    x10_17 = x10_16 s< 1 ? x10_16 : 1
                    
                    void* x12_11
                    
                    x12_11 = x11_13 s> x9_20 ? x11_13 : x9_20
                    
                    j_15 = j_9 + x9_20
                    uint64_t x13_9
                    void* x14_12
                    void* x16_11
                    
                    if (((x10_17 * (x12_11 u>> 3)) << 3) - 8 u>= 0x18)
                        void* x14_11
                        
                        x14_11 = x9_20 s>= 0 ? x9_20 : -ffffffffffffffff
                        
                        x14_12 = x14_11 s< 1 ? x14_11 : 1
                        
                        x16_11 = x11_13 s> x9_20 ? x11_13 : x9_20
                        
                        x13_9 = x8_47 << 3
                    
                    void* j_3
                    
                    if (((x10_17 * (x12_11 u>> 3)) << 3) - 8 u>= 0x18 && (
                            &x0_17[x8_47] u>= j_14 + ((x14_12 * (x16_11 u>> 3)) << 3) - 8 + 8
                            || x0_17 + x13_9 + ((x14_12 * (x16_11 u>> 3)) << 3) - 8 + 8 u<= j_14))
                        int64_t j_12 = (((((x10_17 * (x12_11 u>> 3)) << 3) - 8) u>> 3) + 1)
                            & 0x3ffffffffffffffc
                        int64_t x17_3 = j_12 << 3
                        void* x13_13 = j_14 + 0x10
                        j_3 = j_9 + x17_3
                        j_14 += x17_3
                        void* x16_16 = &x0_17[x8_47 + 2]
                        int64_t j_8 = j_12
                        int64_t j_2
                        
                        do
                            v0_4 = *(x13_13 - 0x10)
                            v1_4 = *x13_13
                            x13_13 += 0x20
                            j_2 = j_8
                            j_8 -= 4
                            *(x16_16 - 0x10) = v0_4
                            *x16_16 = v1_4
                            x16_16 += 0x20
                        while (j_2 != 4)
                        
                        if (((((x10_17 * (x12_11 u>> 3)) << 3) - 8) u>> 3) + 1 != j_12)
                            goto label_f4de78
                    else
                        j_3 = j_9
                    label_f4de78:
                        void* x9_21
                        
                        x9_21 = x11_13 s> x9_20 ? x11_13 : x9_20
                        
                        do
                            int64_t x9_25 = *j_14
                            j_14 += 8
                            *j_3 = x9_25
                            j_3 += 8
                        while (x0_17 + ((x10_17 * (x9_21 u>> 3)) << 3) + (x8_47 << 3) != j_3)
                
                x27_2 = &x0_17[fp_2]
                
                if (x20_1 != 0)
                    operator delete(x20_1)
                
                x20_1 = x0_17
            else
                int64_t x8_40 = (j_14 - x20_1) s>> 3
                int64_t x8_41
                
                if (x8_40 + 1 s< 0)
                    x8_41 = x8_40 + 2
                else
                    x8_41 = x8_40 + 1
                
                size_t x23_4 = x27_2 - j_14
                j_9 = j_14 - (x8_41 << 2 & 0xfffffffffffffff8)
                
                if (x27_2 != j_14)
                    memmove(j_9, j_14, x23_4)
                
                j_15 = j_9 + x23_4
            
            i_3 = i_12
            i_12 -= 1
            j_14 = j_9
            *j_15 = *x28
            j_15 = &j_15[1]
            x28 = *(x19 + 8) + 8
            *(x19 + 8) = x28
        while (i_3 != 1)
    else
        j_9 = j_14
    
    int64_t* i_4 = *(x19 + 0x10)
    void* j_16
    
    if (i_4 != x28)
        do
            if (j_9 != x20_1)
                j_16 = j_15
            else if (j_15 u>= x27_2)
                int64_t x27_3
                
                if (x27_2 != x20_1)
                    x27_3 = (x27_2 - x20_1) s>> 2
                else
                    x27_3 = 1
                
                if (x27_3 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                int64_t* x0_21
                int128_t v0_5
                int128_t v1_5
                x0_21, v0_5, v1_5 = operator new(x27_3 << 3)
                uint64_t x8_61 = (x27_3 + 3) u>> 2
                j_9 = &x0_21[x8_61]
                void* x9_27 = j_15 - x20_1
                j_16 = j_9
                
                if (j_15 != x20_1)
                    void* x10_19
                    
                    x10_19 = x9_27 s>= 0 ? x9_27 : -ffffffffffffffff
                    
                    void* x11_14 = x20_1 - j_15
                    void* x10_20
                    
                    x10_20 = x10_19 s< 1 ? x10_19 : 1
                    
                    void* x12_17
                    
                    x12_17 = x11_14 s> x9_27 ? x11_14 : x9_27
                    
                    j_16 = j_9 + x9_27
                    void* j_4 = j_9
                    int64_t* x13_14 = x20_1
                    
                    if (((x10_20 * (x12_17 u>> 3)) << 3) - 8 u< 0x18)
                    label_f4e090:
                        void* x9_28
                        
                        x9_28 = x11_14 s> x9_27 ? x11_14 : x9_27
                        
                        do
                            int64_t x9_32 = *x13_14
                            x13_14 = &x13_14[1]
                            *j_4 = x9_32
                            j_4 += 8
                        while (x0_21 + ((x10_20 * (x9_28 u>> 3)) << 3) + (x8_61 << 3) != j_4)
                    else
                        void* x13_15
                        
                        x13_15 = x9_27 s>= 0 ? x9_27 : -ffffffffffffffff
                        
                        void* x13_16
                        
                        x13_16 = x13_15 s< 1 ? x13_15 : 1
                        
                        void* x16_17
                        
                        x16_17 = x11_14 s> x9_27 ? x11_14 : x9_27
                        
                        if (&x0_21[x8_61] u< x20_1 + ((x13_16 * (x16_17 u>> 3)) << 3) - 8 + 8)
                            j_4 = j_9
                            x13_14 = x20_1
                        
                        if (&x0_21[x8_61] u< x20_1 + ((x13_16 * (x16_17 u>> 3)) << 3) - 8 + 8
                                && x0_21 + ((x13_16 * (x16_17 u>> 3)) << 3) - 8 + (x8_61 << 3) + 8
                                u> x20_1)
                            goto label_f4e090
                        
                        int64_t j_13 = (((((x10_20 * (x12_17 u>> 3)) << 3) - 8) u>> 3) + 1)
                            & 0x3ffffffffffffffc
                        void* x14_18 = &x20_1[2]
                        j_4 = j_9 + (j_13 << 3)
                        x13_14 = &x20_1[j_13]
                        void* x17_5 = &x0_21[x8_61 + 2]
                        int64_t j_6 = j_13
                        int64_t j_5
                        
                        do
                            v0_5 = *(x14_18 - 0x10)
                            v1_5 = *x14_18
                            x14_18 += 0x20
                            j_5 = j_6
                            j_6 -= 4
                            *(x17_5 - 0x10) = v0_5
                            *x17_5 = v1_5
                            x17_5 += 0x20
                        while (j_5 != 4)
                        
                        if (((((x10_20 * (x12_17 u>> 3)) << 3) - 8) u>> 3) + 1 != j_13)
                            goto label_f4e090
                
                x27_2 = &x0_21[x27_3]
                
                if (x20_1 != 0)
                    operator delete(x20_1)
                
                x20_1 = x0_21
            else
                int64_t x8_53 = (x27_2 - j_15) s>> 3
                int64_t x8_54
                
                if (x8_53 + 1 s< 0)
                    x8_54 = x8_53 + 2
                else
                    x8_54 = x8_53 + 1
                
                size_t x2_5 = j_15 - x20_1
                j_16 = j_15 + (x8_54 << 2 & 0xfffffffffffffff8)
                
                if (j_15 == x20_1)
                    j_9 = j_16
                else
                    j_9 = j_16 - x2_5
                    memmove(j_9, x20_1, x2_5)
            
            i_4 = &i_4[-1]
            j_15 = j_16
            j_9 -= 8
            *j_9 = *i_4
        while (i_4 != *(x19 + 8))
    else
        j_16 = j_15
    
    int64_t x8_34 = *(x19 + 0x20)
    arg1 = *x19
    *x19 = x20_1
    *(x19 + 8) = j_9
    *(x19 + 0x10) = j_16
    *(x19 + 0x18) = x27_2
    *(x19 + 0x20) = x8_34 + x8_21
    
    if (arg1 != 0)
        return operator delete(arg1) __tailcall
else if (x9_1 == i_24)
label_f4daa4:
    uint64_t i_5 = i_13
    int64_t x8_19
    
    do
        int64_t var_68_2 = operator new(0x1000)
        std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_front(x19)
        i_5 -= 1
        int64_t x8_18
        
        if (*(x19 + 0x10) - *(x19 + 8) != 8)
            x8_18 = 0x1000
        else
            x8_18 = 0xfff
        
        x8_19 = x8_18 + *(x19 + 0x20)
        *(x19 + 0x20) = x8_19
    while (i_5 != 0)
    
    i_12 += i_13
    *(x19 + 0x20) = x8_19 - (i_12 << 0xc)
    
    if (i_12 != 0)
        goto label_f4e0e8
else
    while (true)
        int64_t var_68_1 = operator new(0x1000)
        std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_back(x19)
        uint64_t i_21 = i_13
        i_13 -= 1
        
        if (i_21 == 1)
            break
        
        if (*(x19 + 0x18) == *(x19 + 0x10))
            goto label_f4daa4
    
    *(x19 + 0x20) -= i_12 << 0xc
    
    if (i_12 != 0)
    label_f4e0e8:
        void* i_25 = *(x19 + 0x10)
        
        while (true)
            int64_t* x26_2 = *(x19 + 8)
            int64_t x23_6 = *x26_2
            void* x20_4 = &x26_2[1]
            int64_t x8_68 = *(x19 + 0x18)
            *(x19 + 8) = x20_4
            
            if (i_25 == x8_68)
                void* x21_5 = *x19
                
                if (x20_4 u<= x21_5)
                    int64_t x8_75
                    
                    if (i_25 != x21_5)
                        x8_75 = (i_25 - x21_5) s>> 2
                    else
                        x8_75 = 1
                    
                    if (x8_75 u>> 0x3d != 0)
                        break
                    
                    int64_t x22_5 = x8_75 << 3
                    uint64_t x24_3 = x8_75 u>> 2
                    int128_t v0_6
                    int128_t v1_6
                    arg1, v0_6, v1_6 = operator new(x22_5)
                    void* i_9 = arg1 + (x24_3 << 3)
                    void* x11_15 = i_25 - x20_4
                    void* i_15 = i_9
                    
                    if (i_25 != x20_4)
                        void* x9_35
                        
                        x9_35 = x11_15 s>= 0 ? x11_15 : -ffffffffffffffff
                        
                        void* x14_19 = x20_4 - i_25
                        void* x9_36
                        
                        x9_36 = x9_35 s< 1 ? x9_35 : 1
                        
                        void* x10_22
                        
                        x10_22 = x11_15 s> x14_19 ? x11_15 : x14_19
                        
                        int64_t x10_24 = (x9_36 * (x10_22 u>> 3)) << 3
                        i_15 = i_9 + x11_15
                        void* i_7
                        
                        if (x10_24 - 8 u>= 0x18)
                            void* x16_21
                            
                            x16_21 = x11_15 s>= 0 ? x11_15 : -ffffffffffffffff
                            
                            void* x16_22
                            
                            x16_22 = x16_21 s< 1 ? x16_21 : 1
                            
                            void* x11_16
                            
                            x11_16 = x11_15 s> x14_19 ? x11_15 : x14_19
                            
                            uint64_t x13_21 = x24_3 << 3
                            
                            if (arg1 + x13_21
                                    u< x26_2 + ((x16_22 * (x11_16 u>> 3)) << 3) - 8 + 0x10)
                                i_7 = i_9
                            
                            if (arg1 + x13_21 u< x26_2 + ((x16_22 * (x11_16 u>> 3)) << 3) - 8 + 0x10
                                    && arg1 + x13_21 + ((x16_22 * (x11_16 u>> 3)) << 3) - 8 + 8
                                    u> x20_4)
                                goto label_f4e2a4
                            
                            int64_t i_19 = (((x10_24 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                            int64_t x16_23 = i_19 << 3
                            void* x12_27 = &x26_2[3]
                            i_7 = i_9 + x16_23
                            x20_4 += x16_23
                            void* x15_11 = arg1 + (x24_3 << 3) + 0x10
                            int64_t i_11 = i_19
                            int64_t i_6
                            
                            do
                                v0_6 = *(x12_27 - 0x10)
                                v1_6 = *x12_27
                                x12_27 += 0x20
                                i_6 = i_11
                                i_11 -= 4
                                *(x15_11 - 0x10) = v0_6
                                *x15_11 = v1_6
                                x15_11 += 0x20
                            while (i_6 != 4)
                            
                            if (((x10_24 - 8) u>> 3) + 1 != i_19)
                                goto label_f4e2a4
                        else
                            i_7 = i_9
                        label_f4e2a4:
                            
                            do
                                int64_t x12_28 = *x20_4
                                x20_4 += 8
                                *i_7 = x12_28
                                i_7 += 8
                            while (arg1 + x10_24 + (x24_3 << 3) != i_7)
                    
                    i_25 = i_15
                    *x19 = arg1
                    *(x19 + 8) = i_9
                    *(x19 + 0x10) = i_15
                    *(x19 + 0x18) = arg1 + x22_5
                    
                    if (x21_5 != 0)
                        operator delete(x21_5)
                        i_25 = *(x19 + 0x10)
                else
                    int64_t x8_70 = (x20_4 - x21_5) s>> 3
                    int64_t x8_71
                    
                    if (x8_70 + 1 s< 0)
                        x8_71 = x8_70 + 2
                    else
                        x8_71 = x8_70 + 1
                    
                    int64_t x8_72 = x8_71 s>> 1
                    void* x21_6 = i_25 - x20_4
                    void* x22_4 = x20_4 - (x8_72 << 3)
                    
                    if (i_25 != x20_4)
                        memmove(x22_4, x20_4, x21_6)
                        x20_4 = *(x19 + 8)
                    
                    i_25 = x22_4 + x21_6
                    *(x19 + 8) = x20_4 + (neg.q(x8_72) << 3)
                    *(x19 + 0x10) = i_25
            
            *i_25 = x23_6
            uint64_t i_22 = i_12
            i_12 -= 1
            i_25 = *(x19 + 0x10) + 8
            *(x19 + 0x10) = i_25
            
            if (i_22 == 1)
                return 
        
        sub_ef2a0c()
        noreturn
