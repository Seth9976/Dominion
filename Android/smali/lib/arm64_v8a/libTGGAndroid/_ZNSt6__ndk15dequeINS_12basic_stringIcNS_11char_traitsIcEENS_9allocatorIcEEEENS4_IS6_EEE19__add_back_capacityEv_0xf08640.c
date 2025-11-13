// 函数: _ZNSt6__ndk15dequeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE19__add_back_capacityEv
// 地址: 0xf08640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8 = entry_x0[4]
int64_t* x19 = entry_x0
void* i_8
void* x8_3
void* i_5
void* x10_4
void* x20_2
void* x21_1
int64_t x23
void* x26_1

if (x8 u>= 0xaa)
    int64_t* x25 = x19[1]
    x26_1 = x19[2]
    x19[4] = x8 - 0xaa
    x23 = *x25
    x20_2 = &x25[1]
    int64_t x8_2 = x19[3]
    x19[1] = x20_2
    
    if (x26_1 != x8_2)
        *x26_1 = x23
        x19[2] += 8
    else
        x21_1 = *x19
        x8_3 = x20_2 - x21_1
        
        if (x20_2 u<= x21_1)
            int64_t x8_12
            
            if (x26_1 != x21_1)
                x8_12 = (x26_1 - x21_1) s>> 2
            else
                x8_12 = 1
            
            if (x8_12 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            uint64_t x24_3 = x8_12 u>> 2
            int128_t v0_1
            int128_t v1_1
            entry_x0, v0_1, v1_1 = operator new(x8_12 << 3)
            i_5 = &entry_x0[x24_3]
            int64_t x12_1 = x26_1 - x20_2
            x10_4 = &entry_x0[x8_12]
            i_8 = i_5
            
            if (x26_1 != x20_2)
                int64_t x8_13
                
                x8_13 = x12_1 s>= 0 ? x12_1 : -1
                
                int64_t x14_1 = x20_2 - x26_1
                int64_t x8_14
                
                x8_14 = x8_13 s< 1 ? x8_13 : 1
                
                int64_t x11_2
                
                x11_2 = x12_1 s> x14_1 ? x12_1 : x14_1
                
                int64_t x11_4 = (x8_14 * (x11_2 u>> 3)) << 3
                i_8 = i_5 + x12_1
                void* i_1
                
                if (x11_4 - 8 u>= 0x18)
                    int64_t x17_4
                    
                    x17_4 = x12_1 s>= 0 ? x12_1 : -1
                    
                    int64_t x17_5
                    
                    x17_5 = x17_4 s< 1 ? x17_4 : 1
                    
                    int64_t x12_13
                    
                    x12_13 = x12_1 s> x14_1 ? x12_1 : x14_1
                    
                    if (&entry_x0[x24_3] u< &x25[x17_5 * (x12_13 u>> 3) + 1])
                        i_1 = i_5
                    
                    if (&entry_x0[x24_3] u< &x25[x17_5 * (x12_13 u>> 3) + 1]
                            && entry_x0 + (x24_3 << 3) + ((x17_5 * (x12_13 u>> 3)) << 3) u> x20_2)
                        goto label_f08be0
                    
                    int64_t i_9 = (((x11_4 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                    int64_t x17_6 = i_9 << 3
                    void* x13_10 = &x25[3]
                    i_1 = i_5 + x17_6
                    x20_2 += x17_6
                    void* x16_8 = &entry_x0[x24_3 + 2]
                    int64_t i_6 = i_9
                    int64_t i
                    
                    do
                        v0_1 = *(x13_10 - 0x10)
                        v1_1 = *x13_10
                        x13_10 += 0x20
                        i = i_6
                        i_6 -= 4
                        *(x16_8 - 0x10) = v0_1
                        *x16_8 = v1_1
                        x16_8 += 0x20
                    while (i != 4)
                    
                    if (((x11_4 - 8) u>> 3) + 1 != i_9)
                        goto label_f08be0
                else
                    i_1 = i_5
                label_f08be0:
                    
                    do
                        int64_t x13_11 = *x20_2
                        x20_2 += 8
                        *i_1 = x13_11
                        i_1 += 8
                    while (entry_x0 + x11_4 + (x24_3 << 3) != i_1)
            
            goto label_f08be4
        
    label_f08694:
        int64_t x8_4 = x8_3 s>> 3
        int64_t x8_5
        
        if (x8_4 + 1 s< 0)
            x8_5 = x8_4 + 2
        else
            x8_5 = x8_4 + 1
        
        int64_t x8_6 = x8_5 s>> 1
        void* x21_2 = x26_1 - x20_2
        void* x22_1 = x20_2 - (x8_6 << 3)
        
        if (x26_1 != x20_2)
            memmove(x22_1, x20_2, x21_2)
            x20_2 = x19[1]
        
        i_8 = x22_1 + x21_2
        x19[1] = x20_2 + (neg.q(x8_6) << 3)
        x19[2] = i_8
        *i_8 = x23
        x19[2] += 8
    
    return 

int64_t x24_2 = x19[1]
int64_t* i_2 = x19[2]
int64_t x8_7 = x19[3]
int64_t x25_1 = (i_2 - x24_2) s>> 3
int64_t x9_4 = x8_7 - *x19

if (x25_1 u>= x9_4 s>> 3)
    int64_t x26_2
    
    if (x9_4 != 0)
        x26_2 = x9_4 s>> 2
    else
        x26_2 = 1
    
    if (x26_2 u>> 0x3d != 0)
        sub_ef2a0c()
        noreturn
    
    int64_t x21_3 = x26_2 << 3
    void* j_13 = operator new(x21_3)
    int64_t x0_4 = operator new(0xff0)
    void* j_7 = j_13 + (x25_1 << 3)
    void* x25_2 = j_13 + x21_3
    void* j_9
    void* j_10
    void* j_6
    void* j_5
    void* j_12
    
    if (x25_1 != x26_2)
    label_f0878c:
        j_9 = j_13
        j_5 = j_7
        int64_t* j_11 = j_5
        *j_11 = x0_4
        j_12 = &j_11[1]
        
        if (i_2 != x24_2)
        label_f08978:
            
            do
                void* j_3
                
                if (j_5 != j_9)
                    j_3 = j_5
                    j_6 = j_12
                else if (j_12 u>= x25_2)
                    int64_t x25_4
                    
                    if (x25_2 != j_5)
                        x25_4 = (x25_2 - j_5) s>> 2
                    else
                        x25_4 = 1
                    
                    if (x25_4 u>> 0x3d != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    void* j_15
                    int128_t v0_4
                    int128_t v1_4
                    j_15, v0_4, v1_4 = operator new(x25_4 << 3)
                    uint64_t x8_39 = (x25_4 + 3) u>> 2
                    j_3 = j_15 + (x8_39 << 3)
                    j_9 = j_15
                    void* x9_14 = j_12 - j_5
                    j_6 = j_3
                    
                    if (j_12 != j_5)
                        void* x10_7
                        
                        x10_7 = x9_14 s>= 0 ? x9_14 : -ffffffffffffffff
                        
                        void* x11_9 = j_5 - j_12
                        void* x10_8
                        
                        x10_8 = x10_7 s< 1 ? x10_7 : 1
                        
                        void* x12_4
                        
                        x12_4 = x11_9 s> x9_14 ? x11_9 : x9_14
                        
                        j_6 = j_3 + x9_14
                        void* j = j_3
                        void* j_8 = j_5
                        
                        if (((x10_8 * (x12_4 u>> 3)) << 3) - 8 u< 0x18)
                        label_f08af0:
                            void* x9_15
                            
                            x9_15 = x11_9 s> x9_14 ? x11_9 : x9_14
                            
                            do
                                int64_t x9_19 = *j_8
                                j_8 += 8
                                *j = x9_19
                                j += 8
                            while (j_9 + ((x10_8 * (x9_15 u>> 3)) << 3) + (x8_39 << 3) != j)
                        else
                            void* x13_4
                            
                            x13_4 = x9_14 s>= 0 ? x9_14 : -ffffffffffffffff
                            
                            void* x13_5
                            
                            x13_5 = x13_4 s< 1 ? x13_4 : 1
                            
                            void* x16_2
                            
                            x16_2 = x11_9 s> x9_14 ? x11_9 : x9_14
                            
                            uint64_t x12_8 = x8_39 << 3
                            
                            if (j_9 + x12_8 u< j_5 + ((x13_5 * (x16_2 u>> 3)) << 3) - 8 + 8)
                                j = j_3
                                j_8 = j_5
                            
                            if (j_9 + x12_8 u< j_5 + ((x13_5 * (x16_2 u>> 3)) << 3) - 8 + 8
                                    && j_9 + ((x13_5 * (x16_2 u>> 3)) << 3) - 8 + x12_8 + 8 u> j_5)
                                goto label_f08af0
                            
                            int64_t j_4 = (((((x10_8 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1)
                                & 0x3ffffffffffffffc
                            int64_t x13_9 = j_4 << 3
                            void* x14_5 = j_5 + 0x10
                            j = j_3 + x13_9
                            j_8 = j_5 + x13_9
                            void* x17_3 = j_9 + (x8_39 << 3) + 0x10
                            int64_t j_2 = j_4
                            int64_t j_1
                            
                            do
                                v0_4 = *(x14_5 - 0x10)
                                v1_4 = *x14_5
                                x14_5 += 0x20
                                j_1 = j_2
                                j_2 -= 4
                                *(x17_3 - 0x10) = v0_4
                                *x17_3 = v1_4
                                x17_3 += 0x20
                            while (j_1 != 4)
                            
                            if (((((x10_8 * (x12_4 u>> 3)) << 3) - 8) u>> 3) + 1 != j_4)
                                goto label_f08af0
                    
                    x25_2 = j_9 + (x25_4 << 3)
                    operator delete(j_5)
                else
                    int64_t x8_31 = (x25_2 - j_12) s>> 3
                    int64_t x8_32
                    
                    if (x8_31 + 1 s< 0)
                        x8_32 = x8_31 + 2
                    else
                        x8_32 = x8_31 + 1
                    
                    size_t x2_3 = j_12 - j_5
                    j_6 = j_12 + (x8_32 << 2 & 0xfffffffffffffff8)
                    
                    if (j_12 == j_5)
                        j_9 = j_5
                        j_3 = j_6
                    else
                        j_3 = j_6 - x2_3
                        memmove(j_3, j_5, x2_3)
                        j_9 = j_5
                
                i_2 = &i_2[-1]
                j_12 = j_6
                j_10 = j_3 - 8
                *j_10 = *i_2
                j_5 = j_10
            while (i_2 != x19[1])
        else
            j_10 = j_5
            j_6 = j_12
    else
        void* x9_5 = j_7 - j_13
        
        if (j_7 u> j_13)
            int64_t x9_6 = x9_5 s>> 3
            int64_t x9_7
            
            if (x9_6 + 1 s< 0)
                x9_7 = x9_6 + 2
            else
                x9_7 = x9_6 + 1
            
            j_7 -= x9_7 << 2 & 0xfffffffffffffff8
            goto label_f0878c
        
        int64_t x23_1
        
        if (x9_5 != 0)
            x23_1 = x9_5 s>> 2
        else
            x23_1 = 1
        
        if (x23_1 u>> 0x3d != 0)
            sub_ef2a0c()
            noreturn
        
        void* j_14 = operator new(x23_1 << 3)
        j_9 = j_14
        x25_2 = j_14 + (x23_1 << 3)
        operator delete(j_13)
        i_2 = x19[2]
        j_5 = j_14 + (x23_1 << 1 & 0xfffffffffffffff8)
        bool cond:9_1 = i_2 != x19[1]
        *j_5 = x0_4
        j_12 = j_5 + 8
        
        if (cond:9_1)
            goto label_f08978
        
        j_10 = j_5
        j_6 = j_12
    entry_x0 = *x19
    *x19 = j_9
    x19[1] = j_10
    x19[2] = j_6
    x19[3] = x25_2
    
    if (entry_x0 != 0)
        return operator delete(entry_x0) __tailcall
else if (x8_7 == i_2)
    int64_t var_48_2 = operator new(0xff0)
    std::__ndk1::__split_buffer<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*> >::push_front(
        x19)
    int64_t* x25_3 = x19[1]
    x26_1 = x19[2]
    x23 = *x25_3
    x20_2 = &x25_3[1]
    int64_t x8_16 = x19[3]
    x19[1] = x20_2
    
    if (x26_1 != x8_16)
        *x26_1 = x23
        x19[2] += 8
    else
        x21_1 = *x19
        x8_3 = x20_2 - x21_1
        
        if (x20_2 u> x21_1)
            goto label_f08694
        
        int64_t x8_19
        
        if (x26_1 != x21_1)
            x8_19 = (x26_1 - x21_1) s>> 2
        else
            x8_19 = 1
        
        if (x8_19 u>> 0x3d != 0)
            sub_ef2a0c()
            noreturn
        
        uint64_t x24_4 = x8_19 u>> 2
        int128_t v0_2
        int128_t v1_2
        entry_x0, v0_2, v1_2 = operator new(x8_19 << 3)
        i_5 = &entry_x0[x24_4]
        void* x12_2 = x26_1 - x20_2
        x10_4 = &entry_x0[x8_19]
        i_8 = i_5
        
        if (x26_1 != x20_2)
            void* x8_20
            
            x8_20 = x12_2 s>= 0 ? x12_2 : -ffffffffffffffff
            
            void* x14_2 = x20_2 - x26_1
            void* x8_21
            
            x8_21 = x8_20 s< 1 ? x8_20 : 1
            
            void* x11_5
            
            x11_5 = x12_2 s> x14_2 ? x12_2 : x14_2
            
            int64_t x11_7 = (x8_21 * (x11_5 u>> 3)) << 3
            i_8 = i_5 + x12_2
            void* i_4
            
            if (x11_7 - 8 u>= 0x18)
                void* x17_7
                
                x17_7 = x12_2 s>= 0 ? x12_2 : -ffffffffffffffff
                
                void* x17_8
                
                x17_8 = x17_7 s< 1 ? x17_7 : 1
                
                void* x12_20
                
                x12_20 = x12_2 s> x14_2 ? x12_2 : x14_2
                
                if (&entry_x0[x24_4] u< &x25_3[x17_8 * (x12_20 u>> 3) + 1])
                    i_4 = i_5
                
                if (&entry_x0[x24_4] u< &x25_3[x17_8 * (x12_20 u>> 3) + 1]
                        && entry_x0 + (x24_4 << 3) + ((x17_8 * (x12_20 u>> 3)) << 3) u> x20_2)
                    goto label_f08cd0
                
                int64_t i_10 = (((x11_7 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                int64_t x17_9 = i_10 << 3
                void* x13_12 = &x25_3[3]
                i_4 = i_5 + x17_9
                x20_2 += x17_9
                void* x16_11 = &entry_x0[x24_4 + 2]
                int64_t i_7 = i_10
                int64_t i_3
                
                do
                    v0_2 = *(x13_12 - 0x10)
                    v1_2 = *x13_12
                    x13_12 += 0x20
                    i_3 = i_7
                    i_7 -= 4
                    *(x16_11 - 0x10) = v0_2
                    *x16_11 = v1_2
                    x16_11 += 0x20
                while (i_3 != 4)
                
                if (((x11_7 - 8) u>> 3) + 1 != i_10)
                    goto label_f08cd0
            else
                i_4 = i_5
            label_f08cd0:
                
                do
                    int64_t x13_13 = *x20_2
                    x20_2 += 8
                    *i_4 = x13_13
                    i_4 += 8
                while (entry_x0 + x11_7 + (x24_4 << 3) != i_4)
        
    label_f08be4:
        *x19 = entry_x0
        x19[1] = i_5
        x19[2] = i_8
        x19[3] = x10_4
        
        if (x21_1 != 0)
            operator delete(x21_1)
            i_8 = x19[2]
        
        *i_8 = x23
        x19[2] += 8
else
    int64_t var_48_1 = operator new(0xff0)
    std::__ndk1::__split_buffer<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*> >::push_back(
        x19)
