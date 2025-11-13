// 函数: _ZNSt6__ndk15dequeIhNS_9allocatorIhEEE20__add_front_capacityEm
// 地址: 0xf4cdec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 8)
void* x8 = *(arg1 + 0x10)
int64_t x11 = *(arg1 + 0x20)
uint64_t x19 = arg1
void* x10 = x8 - x9
int64_t x13
int64_t entry_x1

if (x8 == x9)
    x13 = entry_x1 + 1
else
    x13 = entry_x1
uint64_t i_13 = x13 u>> 0xc
uint64_t i_11

if ((x13 & 0xfff) != 0)
    i_11 = i_13 + 1
else
    i_11 = i_13

int64_t x13_1

if (x10 == 0)
    x13_1 = 0
else
    x13_1 = (x10 << 9) - 1

uint64_t i_10 = (x13_1 - (*(arg1 + 0x28) + x11)) u>> 0xc
uint64_t i_8

i_8 = i_11 u< i_10 ? i_11 : i_10

uint64_t i_9 = i_11 - i_8

if (i_11 == i_8)
    *(x19 + 0x20) = x11 + (i_8 << 0xc)
    
    if (i_8 != 0)
        int64_t var_68_1 = *(x8 - 8)
        *(x19 + 0x10) = x8 - 8
        std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_front(x19)
        
        if (i_8 != 1)
            int64_t i_6 = 1 - i_8
            int64_t i
            
            do
                int64_t* x8_5 = *(x19 + 0x10) - 8
                int64_t var_68_2 = *x8_5
                *(x19 + 0x10) = x8_5
                std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_front(
                    x19)
                i = i_6
                i_6 += 1
            while (i u< -1)
    
    return 

int64_t x12_3 = *x19
int64_t x10_1 = x10 s>> 3
int64_t x11_2 = *(x19 + 0x18) - x12_3

if (i_9 u<= (x11_2 s>> 3) - x10_1)
    int64_t x8_9
    
    if (x9 == x12_3)
    label_f4cf58:
        uint64_t i_7 = i_9
        uint64_t i_1
        
        do
            int64_t var_68_4 = operator new(0x1000)
            std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_back(x19)
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        x8_9 = *(x19 + 0x20)
        i_8 += i_9
    else
        while (true)
            int64_t var_68_3 = operator new(0x1000)
            std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_front(
                x19)
            int64_t x9_5 = *(x19 + 8)
            int64_t x8_8
            
            if (*(x19 + 0x10) - x9_5 != 8)
                x8_8 = 0x1000
            else
                x8_8 = 0xfff
            
            uint64_t i_12 = i_9
            i_9 -= 1
            x8_9 = x8_8 + *(x19 + 0x20)
            *(x19 + 0x20) = x8_9
            
            if (i_12 == 1)
                break
            
            if (x9_5 == *x19)
                goto label_f4cf58
    
    *(x19 + 0x20) = x8_9 + (i_8 << 0xc)
    
    if (i_8 != 0)
        uint64_t i_2
        
        do
            int64_t* x8_13 = *(x19 + 0x10) - 8
            int64_t var_68_5 = *x8_13
            *(x19 + 0x10) = x8_13
            std::__ndk1::__split_buffer<uint8_t*, std::__ndk1::allocator<uint8_t*> >::push_front(
                x19)
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    return 

int64_t x8_1 = x11_2 s>> 2
int64_t x9_1 = i_9 + x10_1
int64_t x23_1

x23_1 = x8_1 u< x9_1 ? x9_1 : x8_1

void* j_17

if (x23_1 == 0)
    j_17 = nullptr
else
    if (x23_1 u>> 0x3d != 0)
        sub_ef2a0c()
        noreturn
    
    j_17 = operator new(x23_1 << 3)

void* x27_1 = j_17 + (x23_1 << 3)
void* j_15 = j_17
int64_t* j_16 = j_17
uint64_t i_3

do
    int64_t x0_9 = operator new(0x1000)
    
    if (j_16 == x27_1)
        if (j_15 u<= j_17)
            int64_t fp_1
            
            if (x27_1 != j_17)
                fp_1 = (x27_1 - j_17) s>> 2
            else
                fp_1 = 1
            
            if (fp_1 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            void* j_19
            int128_t v0_1
            int128_t v1_1
            j_19, v0_1, v1_1 = operator new(fp_1 << 3)
            uint64_t x8_24 = fp_1 u>> 2
            void* j_11 = j_19 + (x8_24 << 3)
            void* x9_8 = x27_1 - j_15
            j_16 = j_11
            
            if (x27_1 != j_15)
                void* x10_4
                
                x10_4 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                
                void* x11_3 = j_15 - x27_1
                void* x10_5
                
                x10_5 = x10_4 s< 1 ? x10_4 : 1
                
                void* x12_4
                
                x12_4 = x11_3 s> x9_8 ? x11_3 : x9_8
                
                j_16 = j_11 + x9_8
                uint64_t x13_4
                void* x14_3
                void* x16_1
                
                if (((x10_5 * (x12_4 u>> 3)) << 3) - 8 u>= 0x18)
                    void* x14_2
                    
                    x14_2 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                    
                    x14_3 = x14_2 s< 1 ? x14_2 : 1
                    
                    x16_1 = x11_3 s> x9_8 ? x11_3 : x9_8
                    
                    x13_4 = x8_24 << 3
                
                void* j_1
                
                if (((x10_5 * (x12_4 u>> 3)) << 3) - 8 u>= 0x18 && (
                        j_19 + x13_4 u>= j_15 + ((x14_3 * (x16_1 u>> 3)) << 3) - 8 + 8
                        || j_19 + x13_4 + ((x14_3 * (x16_1 u>> 3)) << 3) - 8 + 8 u<= j_15))
                    int64_t j_12 =
                        (((((x10_5 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                    int64_t x17_1 = j_12 << 3
                    void* x13_8 = j_15 + 0x10
                    j_1 = j_11 + x17_1
                    j_15 += x17_1
                    void* x16_6 = j_19 + (x8_24 << 3) + 0x10
                    int64_t j_6 = j_12
                    int64_t j
                    
                    do
                        v0_1 = *(x13_8 - 0x10)
                        v1_1 = *x13_8
                        x13_8 += 0x20
                        j = j_6
                        j_6 -= 4
                        *(x16_6 - 0x10) = v0_1
                        *x16_6 = v1_1
                        x16_6 += 0x20
                    while (j != 4)
                    
                    if (((((x10_5 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1 != j_12)
                        goto label_f4d110
                else
                    j_1 = j_11
                label_f4d110:
                    void* x9_9
                    
                    x9_9 = x11_3 s> x9_8 ? x11_3 : x9_8
                    
                    do
                        int64_t x9_13 = *j_15
                        j_15 += 8
                        *j_1 = x9_13
                        j_1 += 8
                    while (j_19 + ((x10_5 * (x9_9 u>> 3)) << 3) + (x8_24 << 3) != j_1)
            
            x27_1 = j_19 + (fp_1 << 3)
            
            if (j_17 != 0)
                operator delete(j_17)
            
            j_15 = j_11
            j_17 = j_19
        else
            int64_t x8_17 = (j_15 - j_17) s>> 3
            int64_t x8_18
            
            if (x8_17 + 1 s< 0)
                x8_18 = x8_17 + 2
            else
                x8_18 = x8_17 + 1
            
            size_t x24_1 = x27_1 - j_15
            void* j_18 = j_15 - (x8_18 << 2 & 0xfffffffffffffff8)
            
            if (x27_1 != j_15)
                memmove(j_18, j_15, x24_1)
            
            j_16 = j_18 + x24_1
            j_15 = j_18
    
    i_3 = i_9
    i_9 -= 1
    *j_16 = x0_9
    j_16 = &j_16[1]
while (i_3 != 1)
void* x28 = *(x19 + 0x10)
void* j_10

if (i_8 != 0)
    uint64_t i_4
    
    do
        if (j_16 != x27_1)
            j_10 = j_15
        else if (j_15 u<= j_17)
            int64_t fp_2
            
            if (x27_1 != j_17)
                fp_2 = (x27_1 - j_17) s>> 2
            else
                fp_2 = 1
            
            if (fp_2 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            void* j_20
            int128_t v0_3
            int128_t v1_3
            j_20, v0_3, v1_3 = operator new(fp_2 << 3)
            uint64_t x8_40 = fp_2 u>> 2
            j_10 = j_20 + (x8_40 << 3)
            void* x9_17 = x27_1 - j_15
            j_16 = j_10
            
            if (x27_1 != j_15)
                void* x10_8
                
                x10_8 = x9_17 s>= 0 ? x9_17 : -ffffffffffffffff
                
                void* x11_5 = j_15 - x27_1
                void* x10_9
                
                x10_9 = x10_8 s< 1 ? x10_8 : 1
                
                void* x12_11
                
                x12_11 = x11_5 s> x9_17 ? x11_5 : x9_17
                
                j_16 = j_10 + x9_17
                uint64_t x13_10
                void* x14_10
                void* x16_8
                
                if (((x10_9 * (x12_11 u>> 3)) << 3) - 8 u>= 0x18)
                    void* x14_9
                    
                    x14_9 = x9_17 s>= 0 ? x9_17 : -ffffffffffffffff
                    
                    x14_10 = x14_9 s< 1 ? x14_9 : 1
                    
                    x16_8 = x11_5 s> x9_17 ? x11_5 : x9_17
                    
                    x13_10 = x8_40 << 3
                
                void* j_3
                
                if (((x10_9 * (x12_11 u>> 3)) << 3) - 8 u>= 0x18 && (
                        j_20 + x13_10 u>= j_15 + ((x14_10 * (x16_8 u>> 3)) << 3) - 8 + 8
                        || j_20 + x13_10 + ((x14_10 * (x16_8 u>> 3)) << 3) - 8 + 8 u<= j_15))
                    int64_t j_13 =
                        (((((x10_9 * (x12_11 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                    int64_t x17_3 = j_13 << 3
                    void* x13_14 = j_15 + 0x10
                    j_3 = j_10 + x17_3
                    j_15 += x17_3
                    void* x16_13 = j_20 + (x8_40 << 3) + 0x10
                    int64_t j_7 = j_13
                    int64_t j_2
                    
                    do
                        v0_3 = *(x13_14 - 0x10)
                        v1_3 = *x13_14
                        x13_14 += 0x20
                        j_2 = j_7
                        j_7 -= 4
                        *(x16_13 - 0x10) = v0_3
                        *x16_13 = v1_3
                        x16_13 += 0x20
                    while (j_2 != 4)
                    
                    if (((((x10_9 * (x12_11 u>> 3)) << 3) - 8) u>> 3) + 1 != j_13)
                        goto label_f4d338
                else
                    j_3 = j_10
                label_f4d338:
                    void* x9_18
                    
                    x9_18 = x11_5 s> x9_17 ? x11_5 : x9_17
                    
                    do
                        int64_t x9_22 = *j_15
                        j_15 += 8
                        *j_3 = x9_22
                        j_3 += 8
                    while (j_20 + ((x10_9 * (x9_18 u>> 3)) << 3) + (x8_40 << 3) != j_3)
            
            x27_1 = j_20 + (fp_2 << 3)
            
            if (j_17 != 0)
                operator delete(j_17)
            
            j_17 = j_20
        else
            int64_t x8_33 = (j_15 - j_17) s>> 3
            int64_t x8_34
            
            if (x8_33 + 1 s< 0)
                x8_34 = x8_33 + 2
            else
                x8_34 = x8_33 + 1
            
            size_t x23_3 = x27_1 - j_15
            j_10 = j_15 - (x8_34 << 2 & 0xfffffffffffffff8)
            
            if (x27_1 != j_15)
                memmove(j_10, j_15, x23_3)
            
            j_16 = j_10 + x23_3
        
        i_4 = i_8
        i_8 -= 1
        j_15 = j_10
        *j_16 = *(x28 - 8)
        j_16 = &j_16[1]
        x28 = *(x19 + 0x10) - 8
        *(x19 + 0x10) = x28
    while (i_4 != 1)
else
    j_10 = j_15

int64_t* i_5 = *(x19 + 8)
void* j_9

if (i_5 != x28)
    do
        if (j_16 != x27_1)
            j_9 = j_10
        else if (j_10 u<= j_17)
            int64_t x28_1
            
            if (x27_1 != j_17)
                x28_1 = (x27_1 - j_17) s>> 2
            else
                x28_1 = 1
            
            if (x28_1 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            void* j_21
            int128_t v0_4
            int128_t v1_4
            j_21, v0_4, v1_4 = operator new(x28_1 << 3)
            uint64_t x8_53 = x28_1 u>> 2
            j_9 = j_21 + (x8_53 << 3)
            void* x9_24 = x27_1 - j_10
            j_16 = j_9
            
            if (x27_1 != j_10)
                void* x10_11
                
                x10_11 = x9_24 s>= 0 ? x9_24 : -ffffffffffffffff
                
                void* x11_6 = j_10 - x27_1
                void* x10_12
                
                x10_12 = x10_11 s< 1 ? x10_11 : 1
                
                void* x12_17
                
                x12_17 = x11_6 s> x9_24 ? x11_6 : x9_24
                
                j_16 = j_9 + x9_24
                uint64_t x13_15
                void* x14_16
                void* x16_14
                
                if (((x10_12 * (x12_17 u>> 3)) << 3) - 8 u>= 0x18)
                    void* x14_15
                    
                    x14_15 = x9_24 s>= 0 ? x9_24 : -ffffffffffffffff
                    
                    x14_16 = x14_15 s< 1 ? x14_15 : 1
                    
                    x16_14 = x11_6 s> x9_24 ? x11_6 : x9_24
                    
                    x13_15 = x8_53 << 3
                
                void* j_5
                
                if (((x10_12 * (x12_17 u>> 3)) << 3) - 8 u>= 0x18 && (
                        j_21 + x13_15 u>= j_10 + ((x14_16 * (x16_14 u>> 3)) << 3) - 8 + 8
                        || j_21 + x13_15 + ((x14_16 * (x16_14 u>> 3)) << 3) - 8 + 8 u<= j_10))
                    int64_t j_14 =
                        (((((x10_12 * (x12_17 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                    int64_t x17_4 = j_14 << 3
                    void* x13_19 = j_10 + 0x10
                    j_5 = j_9 + x17_4
                    j_10 += x17_4
                    void* x16_19 = j_21 + (x8_53 << 3) + 0x10
                    int64_t j_8 = j_14
                    int64_t j_4
                    
                    do
                        v0_4 = *(x13_19 - 0x10)
                        v1_4 = *x13_19
                        x13_19 += 0x20
                        j_4 = j_8
                        j_8 -= 4
                        *(x16_19 - 0x10) = v0_4
                        *x16_19 = v1_4
                        x16_19 += 0x20
                    while (j_4 != 4)
                    
                    if (((((x10_12 * (x12_17 u>> 3)) << 3) - 8) u>> 3) + 1 != j_14)
                        goto label_f4d4f8
                else
                    j_5 = j_9
                label_f4d4f8:
                    void* x9_25
                    
                    x9_25 = x11_6 s> x9_24 ? x11_6 : x9_24
                    
                    do
                        int64_t x9_29 = *j_10
                        j_10 += 8
                        *j_5 = x9_29
                        j_5 += 8
                    while (j_21 + ((x10_12 * (x9_25 u>> 3)) << 3) + (x8_53 << 3) != j_5)
            
            x27_1 = j_21 + (x28_1 << 3)
            
            if (j_17 != 0)
                operator delete(j_17)
            
            j_17 = j_21
        else
            int64_t x8_46 = (j_10 - j_17) s>> 3
            int64_t x8_47
            
            if (x8_46 + 1 s< 0)
                x8_47 = x8_46 + 2
            else
                x8_47 = x8_46 + 1
            
            size_t x23_5 = x27_1 - j_10
            j_9 = j_10 - (x8_47 << 2 & 0xfffffffffffffff8)
            
            if (x27_1 != j_10)
                memmove(j_9, j_10, x23_5)
            
            j_16 = j_9 + x23_5
        
        int64_t x8_43 = *i_5
        i_5 = &i_5[1]
        j_10 = j_9
        *j_16 = x8_43
        j_16 = &j_16[1]
    while (i_5 != *(x19 + 0x10))
else
    j_9 = j_10

int64_t x8_27 = *(x19 + 0x20)
arg1 = *x19
*x19 = j_17
*(x19 + 8) = j_9
*(x19 + 0x10) = j_16
*(x19 + 0x18) = x27_1
*(x19 + 0x20) = (i_11 << 0xc) - zx.q(x8 == x9 ? 1 : 0) + x8_27

if (arg1 != 0)
    return operator delete(arg1) __tailcall
