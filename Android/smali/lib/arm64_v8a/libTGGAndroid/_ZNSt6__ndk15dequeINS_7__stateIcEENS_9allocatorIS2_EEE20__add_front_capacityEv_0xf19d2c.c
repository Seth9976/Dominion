// 函数: _ZNSt6__ndk15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv
// 地址: 0xf19d2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t* i = entry_x0[1]
void* x25 = entry_x0[2]
int64_t x9 = entry_x0[4]
void* x8 = x25 - i
int64_t x10_2

if (x25 == i)
    x10_2 = 0
else
    x10_2 = (x8 s>> 3) * 0x2a - 1

if (x10_2 - (entry_x0[5] + x9) u>= 0x2a)
    entry_x0[4] = x9 + 0x2a
    int64_t var_58_1 = *(x25 - 8)
    entry_x0[2] = x25 - 8
    return std::__ndk1::__split_buffer<std::__ndk1::__state<char>*, std::__ndk1::allocator<std::__ndk1::__state<char>*> >::push_front(
        entry_x0)

int64_t x9_1 = *entry_x0
int64_t x10_5 = entry_x0[3] - x9_1
void* result

if (x8 u>= x10_5)
    int64_t x8_6
    
    if (x10_5 != 0)
        x8_6 = x10_5 s>> 2
    else
        x8_6 = 1
    
    if (x8_6 u>> 0x3d != 0)
        sub_ef2a0c()
        noreturn
    
    int64_t x21_1 = x8_6 << 3
    void* j_5 = operator new(x21_1)
    int64_t x0_5 = operator new(0xfc0)
    void* j_11 = j_5 + x21_1
    
    if (j_11 == j_5)
        void* j_7 = operator new(8)
        j_11 = j_7 + 8
        operator delete(j_5)
        i = entry_x0[1]
        x25 = entry_x0[2]
        j_5 = j_7
    
    *j_5 = x0_5
    void* j_9 = j_5 + 8
    void* j_8 = j_5
    void* j_3
    void* j_12
    
    if (i != x25)
        do
            int64_t* j_6
            
            if (j_9 != j_11)
                j_3 = j_5
                j_6 = j_9
                j_9 = j_11
            else if (j_5 u<= j_8)
                int64_t x26_1
                
                if (j_9 != j_8)
                    x26_1 = (j_9 - j_8) s>> 2
                else
                    x26_1 = 1
                
                if (x26_1 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                void* j_10
                int128_t v0_1
                int128_t v1_1
                j_10, v0_1, v1_1 = operator new(x26_1 << 3)
                uint64_t x8_18 = x26_1 u>> 2
                j_3 = j_10 + (x8_18 << 3)
                int64_t x9_5 = j_9 - j_5
                j_6 = j_3
                
                if (j_9 != j_5)
                    int64_t x10_7
                    
                    x10_7 = x9_5 s>= 0 ? x9_5 : -1
                    
                    int64_t x11_2 = j_5 - j_9
                    int64_t x10_8
                    
                    x10_8 = x10_7 s< 1 ? x10_7 : 1
                    
                    int64_t x12_1
                    
                    x12_1 = x11_2 s> x9_5 ? x11_2 : x9_5
                    
                    j_6 = j_3 + x9_5
                    uint64_t x13_1
                    int64_t x14_2
                    int64_t x16_1
                    
                    if (((x10_8 * (x12_1 u>> 3)) << 3) - 8 u>= 0x18)
                        int64_t x14_1
                        
                        x14_1 = x9_5 s>= 0 ? x9_5 : -1
                        
                        x14_2 = x14_1 s< 1 ? x14_1 : 1
                        
                        x16_1 = x11_2 s> x9_5 ? x11_2 : x9_5
                        
                        x13_1 = x8_18 << 3
                    
                    void* j_1
                    
                    if (((x10_8 * (x12_1 u>> 3)) << 3) - 8 u>= 0x18 && (
                            j_10 + x13_1 u>= j_5 + ((x14_2 * (x16_1 u>> 3)) << 3) - 8 + 8
                            || j_10 + x13_1 + ((x14_2 * (x16_1 u>> 3)) << 3) - 8 + 8 u<= j_5))
                        int64_t j_4 =
                            (((((x10_8 * (x12_1 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                        int64_t x17_1 = j_4 << 3
                        void* x13_5 = j_5 + 0x10
                        j_1 = j_3 + x17_1
                        j_5 += x17_1
                        void* x16_6 = j_10 + (x8_18 << 3) + 0x10
                        int64_t j_2 = j_4
                        int64_t j
                        
                        do
                            v0_1 = *(x13_5 - 0x10)
                            v1_1 = *x13_5
                            x13_5 += 0x20
                            j = j_2
                            j_2 -= 4
                            *(x16_6 - 0x10) = v0_1
                            *x16_6 = v1_1
                            x16_6 += 0x20
                        while (j != 4)
                        
                        if (((((x10_8 * (x12_1 u>> 3)) << 3) - 8) u>> 3) + 1 != j_4)
                            goto label_f19fcc
                    else
                        j_1 = j_3
                    label_f19fcc:
                        int64_t x9_6
                        
                        x9_6 = x11_2 s> x9_5 ? x11_2 : x9_5
                        
                        do
                            int64_t x9_10 = *j_5
                            j_5 += 8
                            *j_1 = x9_10
                            j_1 += 8
                        while (j_10 + ((x10_8 * (x9_6 u>> 3)) << 3) + (x8_18 << 3) != j_1)
                
                j_9 = j_10 + (x26_1 << 3)
                
                if (j_8 != 0)
                    operator delete(j_8)
                
                j_8 = j_10
            else
                int64_t x8_11 = (j_5 - j_8) s>> 3
                int64_t x8_12
                
                if (x8_11 + 1 s< 0)
                    x8_12 = x8_11 + 2
                else
                    x8_12 = x8_11 + 1
                
                size_t x23_1 = j_9 - j_5
                j_3 = j_5 - (x8_12 << 2 & 0xfffffffffffffff8)
                
                if (j_9 != j_5)
                    memmove(j_3, j_5, x23_1)
                
                j_6 = j_3 + x23_1
            
            int64_t x8_8 = *i
            i = &i[1]
            j_11 = j_9
            j_5 = j_3
            *j_6 = x8_8
            j_12 = &j_6[1]
            j_9 = j_12
        while (i != entry_x0[2])
    else
        j_3 = j_5
        j_12 = j_9
    
    result = *entry_x0
    *entry_x0 = j_8
    entry_x0[1] = j_3
    entry_x0[2] = j_12
    entry_x0[3] = j_11
    
    if (j_12 - j_3 != 8)
        entry_x0[4] += 0x2a
        
        if (result != 0)
            return operator delete(result) __tailcall
    else
        entry_x0[4] = 0x15
        
        if (result != 0)
            return operator delete(result) __tailcall
else
    int64_t x8_29
    
    if (i == x9_1)
        int64_t var_58_3 = operator new(0xfc0)
        std::__ndk1::__split_buffer<std::__ndk1::__state<char>*, std::__ndk1::allocator<std::__ndk1::__state<char>*> >::push_back(
            entry_x0)
        int64_t* x8_25 = entry_x0[2] - 8
        int64_t var_58_4 = *x8_25
        entry_x0[2] = x8_25
        result = std::__ndk1::__split_buffer<std::__ndk1::__state<char>*, std::__ndk1::allocator<std::__ndk1::__state<char>*> >::push_front(
            entry_x0)
        
        if (entry_x0[2] - entry_x0[1] == 8)
            x8_29 = 0x15
        else
            x8_29 = entry_x0[4] + 0x2a
    else
        int64_t var_58_2 = operator new(0xfc0)
        result = std::__ndk1::__split_buffer<std::__ndk1::__state<char>*, std::__ndk1::allocator<std::__ndk1::__state<char>*> >::push_front(
            entry_x0)
        
        if (entry_x0[2] - entry_x0[1] != 8)
            x8_29 = entry_x0[4] + 0x2a
        else
            x8_29 = 0x15
    
    entry_x0[4] = x8_29

return result
