// 函数: sub_e78480
// 地址: 0xe78480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x22 = *arg1
int64_t* x19 = arg1
bool cond:0 = x22 == arg1[2]
arg1[1] = x22
void* x22_1

if (cond:0)
    arg1 = Botan::allocate_memory(1, 1)
    void* x23_1 = *x19
    int64_t x8_1 = x19[1]
    char* x22_2 = arg1
    *x22_2 = arg2
    x22_1 = &x22_2[1]
    size_t x2 = x8_1 - x23_1
    void* x25_1 = arg1 - x2
    
    if (x2 s>= 1)
        memcpy(x25_1, x23_1, x2)
    
    int64_t x8_2 = x19[2]
    *x19 = x25_1
    x19[1] = x22_1
    x19[2] = x22_1
    
    if (x23_1 != 0)
        Botan::deallocate_memory(x23_1, x8_2 - x23_1, 1)
        x22_1 = x19[1]
else
    *x22 = arg2
    x22_1 = &x22[1]
    x19[1] = x22_1

int64_t x8_3 = x19[2]
void* x22_3

if (x22_1 u>= x8_3)
    void* x23_2 = *x19
    size_t x22_4 = x22_1 - x23_2
    
    if (x22_4 + 1 s>= 0)
        void* x8_5 = x8_3 - x23_2
        int64_t x11_1 = x8_5 << 1
        int64_t x9_2
        
        if (x11_1 u< x22_4 + 1)
            x9_2 = x22_4 + 1
        else
            x9_2 = x11_1
        
        int64_t x24_1
        
        x24_1 = x8_5 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
        
        size_t x2_1
        
        if (x24_1 == 0)
            arg1 = nullptr
            x2_1 = x22_4
        else
            arg1 = Botan::allocate_memory(x24_1, 1)
            x23_2 = *x19
            x2_1 = x19[1] - x23_2
        
        char* x22_5 = arg1 + x22_4
        void* x24_2 = x22_5 - x2_1
        *x22_5 = (arg3 u>> 8).b
        x22_3 = &x22_5[1]
        
        if (x2_1 s>= 1)
            memcpy(x24_2, x23_2, x2_1)
        
        int64_t x8_8 = x19[2]
        *x19 = x24_2
        x19[1] = x22_3
        x19[2] = arg1 + x24_1
        
        if (x23_2 != 0)
            Botan::deallocate_memory(x23_2, x8_8 - x23_2, 1)
            x22_3 = x19[1]
        
        goto label_e785dc
else
    *x22_1 = (arg3 u>> 8).b
    x22_3 = x22_1 + 1
    x19[1] = x22_3
label_e785dc:
    int64_t x8_9 = x19[2]
    
    if (x22_3 u>= x8_9)
        void* x23_3 = *x19
        void* x24_3 = x22_3 - x23_3
        
        if (x24_3 + 1 s>= 0)
            void* x8_10 = x8_9 - x23_3
            void* x11_2 = x8_10 << 1
            void* x9_4
            
            if (x11_2 u< x24_3 + 1)
                x9_4 = x24_3 + 1
            else
                x9_4 = x11_2
            
            void* x22_7
            
            x22_7 = x8_10 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
            
            size_t x2_2
            
            if (x22_7 == 0)
                arg1 = nullptr
                x2_2 = x24_3
            else
                arg1 = Botan::allocate_memory(x22_7, 1)
                x23_3 = *x19
                x2_2 = x19[1] - x23_3
            
            char* x24_4 = arg1 + x24_3
            void* x22_8 = x24_4 - x2_2
            *x24_4 = (arg3.d).b
            
            if (x2_2 s>= 1)
                memcpy(x22_8, x23_3, x2_2)
            
            int64_t x8_12 = x19[2]
            *x19 = x22_8
            x19[1] = &x24_4[1]
            x19[2] = arg1 + x22_7
            
            if (x23_3 != 0)
                Botan::deallocate_memory(x23_3, x8_12 - x23_3, 1)
            
            goto label_e78690
    else
        *x22_3 = (arg3.d).b
        x19[1] = x22_3 + 1
    label_e78690:
        
        if ((arg3.d u>> 8 & 0xff) u< 0xfb)
            return 
        
        int64_t x25_4 = 0
        
        while (true)
            uint8_t* x8_15 = x19[1]
            int64_t x9_5 = x19[2]
            uint8_t x28_1 = (arg4 u>> (x25_4 ^ 0x38)).b
            
            if (x8_15 u< x9_5)
                *x8_15 = x28_1
                x19[1] = &x8_15[1]
            else
                void* x21_1 = *x19
                void* x24_6 = x8_15 - x21_1
                
                if (x24_6 + 1 s< 0)
                    break
                
                void* x9_6 = x9_5 - x21_1
                int64_t x10_2 = x9_6 << 1
                void* x8_17
                
                if (x10_2 u< x24_6 + 1)
                    x8_17 = x24_6 + 1
                else
                    x8_17 = x10_2
                
                void* x22_9
                
                x22_9 = x9_6 u< 0x3fffffffffffffff ? x8_17 : 0x7fffffffffffffff
                
                void* x2_3
                int64_t* x23_4
                
                if (x22_9 == 0)
                    x23_4 = nullptr
                    x2_3 = x24_6
                else
                    arg1 = Botan::allocate_memory(x22_9, 1)
                    x21_1 = *x19
                    x23_4 = arg1
                    x2_3 = x19[1] - x21_1
                
                void* fp_1 = x23_4 + x24_6
                int64_t x24_7 = fp_1 - x2_3
                *fp_1 = x28_1
                
                if (x2_3 s>= 1)
                    memcpy(x24_7, x21_1, x2_3)
                
                int64_t x8_19 = x19[2]
                *x19 = x24_7
                x19[1] = fp_1 + 1
                x19[2] = x23_4 + x22_9
                
                if (x21_1 != 0)
                    Botan::deallocate_memory(x21_1, x8_19 - x21_1, 1)
            
            x25_4 += 8
            
            if (x25_4 == 0x40)
                return 
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
