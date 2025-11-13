// 函数: _ZNSt6__ndk114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_
// 地址: 0xf4aa28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_6 = arg1[2]
std::__ndk1::function<void ()>*&& x19 = arg1
void* i_4 = i_6

if (i_6 == arg1[3])
    std::__ndk1::function<void ()>* x21_1 = *x19
    int64_t* x22_1 = x19[1]
    
    if (x22_1 u<= x21_1)
        int64_t x8_7
        
        if (i_6 != x21_1)
            x8_7 = (i_6 - x21_1) s>> 2
        else
            x8_7 = 1
        
        if (x8_7 u>> 0x3d != 0)
            sub_ef2a0c()
            noreturn
        
        uint64_t x24_2 = x8_7 u>> 2
        int128_t v0_1
        int128_t v1_1
        arg1, v0_1, v1_1 = operator new(x8_7 << 3)
        void* i_3 = &arg1[x24_2]
        void* x11_1 = i_6 - x22_1
        i_4 = i_3
        
        if (i_6 != x22_1)
            void* x8_8
            
            x8_8 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
            
            void* x13_1 = x22_1 - i_6
            void* x12_1
            
            x12_1 = x8_8 s< 1 ? x8_8 : 1
            
            void* x8_9
            
            x8_9 = x13_1 s> x11_1 ? x13_1 : x11_1
            
            i_4 = i_3 + x11_1
            void* i_1
            
            if (((x12_1 * (x8_9 u>> 3)) << 3) - 8 u>= 0x18)
                void* x16_1
                
                x16_1 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
                
                void* x16_2
                
                x16_2 = x16_1 s< 1 ? x16_1 : 1
                
                void* x1_1
                
                x1_1 = x13_1 s> x11_1 ? x13_1 : x11_1
                
                if (&arg1[x24_2] u< &x22_1[x16_2 * (x1_1 u>> 3)])
                    i_1 = i_3
                
                if (&arg1[x24_2] u< &x22_1[x16_2 * (x1_1 u>> 3)]
                        && arg1 + (x24_2 << 3) + ((x16_2 * (x1_1 u>> 3)) << 3) u> x22_1)
                    goto label_f4abb8
                
                int64_t i_5 = (((((x12_1 * (x8_9 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                void* x15_2 = &x22_1[2]
                i_1 = i_3 + (i_5 << 3)
                x22_1 = &x22_1[i_5]
                void* x1_5 = &arg1[x24_2 + 2]
                int64_t i_2 = i_5
                int64_t i
                
                do
                    v0_1 = *(x15_2 - 0x10)
                    v1_1 = *x15_2
                    x15_2 += 0x20
                    i = i_2
                    i_2 -= 4
                    *(x1_5 - 0x10) = v0_1
                    *x1_5 = v1_1
                    x1_5 += 0x20
                while (i != 4)
                
                if (((((x12_1 * (x8_9 u>> 3)) << 3) - 8) u>> 3) + 1 != i_5)
                    goto label_f4abb8
            else
                i_1 = i_3
            label_f4abb8:
                void* x11_2
                
                x11_2 = x13_1 s> x11_1 ? x13_1 : x11_1
                
                do
                    int64_t x12_2 = *x22_1
                    x22_1 = &x22_1[1]
                    *i_1 = x12_2
                    i_1 += 8
                while (arg1 + ((x12_1 * (x11_2 u>> 3)) << 3) + (x24_2 << 3) != i_1)
        
        *x19 = arg1
        x19[1] = i_3
        x19[2] = i_4
        x19[3] = &arg1[x8_7]
        
        if (x21_1 != 0)
            operator delete(x21_1)
            i_4 = x19[2]
    else
        int64_t x8_2 = (x22_1 - x21_1) s>> 3
        int64_t x8_3
        
        if (x8_2 + 1 s< 0)
            x8_3 = x8_2 + 2
        else
            x8_3 = x8_2 + 1
        
        int64_t x8_4 = x8_3 s>> 1
        size_t x21_2 = i_6 - x22_1
        void* x23_1 = x22_1 - (x8_4 << 3)
        
        if (i_6 != x22_1)
            memmove(x23_1, x22_1, x21_2)
            x22_1 = x19[1]
        
        i_4 = x23_1 + x21_2
        x19[1] = &x22_1[neg.q(x8_4)]
        x19[2] = i_4

int64_t* entry_x1
*i_4 = *entry_x1
x19[2] += 8
