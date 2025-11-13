// 函数: sub_10e9318
// 地址: 0x10e9318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg1 + 0x20)
int64_t x8 = *(arg1 + 0x28)
void* const x19 = arg1

if (x9 u< x8)
    *x9 = arg2
    x9[1] = arg3
    *(x19 + 0x20) = &x9[2]
    return 

void* x1 = *(x19 + 0x18)
void* x2 = x9 - x1
int64_t x23_1 = x2 s>> 4

if ((x23_1 + 1) u>> 0x3c != 0)
    int64_t* x0_5
    int64_t x1_2
    int64_t lr_1
    x0_5, x1_2, lr_1 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    int64_t __saved_fp
    int64_t* var_80 = &__saved_fp
    int64_t var_78 = lr_1
    int64_t var_70 = x23_1
    int64_t var_60 = arg2
    void* var_58 = x19 + 0x18
    int64_t var_50 = arg3
    void* const var_48 = x19
    int64_t* x8_6 = x0_5[1]
    
    if (x8_6 == x0_5[2])
        void* x1_3 = *x0_5
        void* x2_2 = x8_6 - x1_3
        int64_t x21_2 = x2_2 s>> 3
        
        if ((x21_2 + 1) u>> 0x3d != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            return std::__ndk1::__thread_struct::__thread_struct() __tailcall
        
        int64_t x9_7 = x2_2 s>> 2
        int64_t x8_9
        
        if (x9_7 u< x21_2 + 1)
            x8_9 = x21_2 + 1
        else
            x8_9 = x9_7
        
        int64_t x22_2
        
        x22_2 = x21_2 u< 0xfffffffffffffff ? x8_9 : 0x1fffffffffffffff
        
        int64_t x0_7
        int64_t x8_11
        
        if (x22_2 == 0)
            x0_7 = 0
            x8_11 = x21_2
        else
            x0_7 = operator new(x22_2 << 3)
            x1_3 = *x0_5
            x2_2 = x0_5[1] - x1_3
            x8_11 = x2_2 s>> 3
        
        int64_t* x23_3 = x0_7 + (x21_2 << 3)
        void* x21_3 = x23_3 - (x8_11 << 3)
        *x23_3 = x1_2
        
        if (x2_2 s>= 1)
            memcpy(x21_3, x1_3, x2_2)
            x1_3 = *x0_5
        
        *x0_5 = x21_3
        x0_5[1] = &x23_3[1]
        x0_5[2] = x0_7 + (x22_2 << 3)
        
        if (x1_3 != 0)
            operator delete(x1_3)
    else
        *x8_6 = x1_2
        x0_5[1] = &x8_6[1]
    
    return std::__ndk1::__shared_count::__add_shared() __tailcall

void* x8_2 = x8 - x1
int64_t x11_1 = x8_2 s>> 3
int64_t x9_2

if (x11_1 u< x23_1 + 1)
    x9_2 = x23_1 + 1
else
    x9_2 = x11_1

int64_t x24_1

if (0x7ffffffffffffff u> x8_2 s>> 4)
    x24_1 = x9_2
else
    x24_1 = 0xfffffffffffffff

int64_t x8_4

if (x24_1 == 0)
    arg1 = nullptr
    x8_4 = x23_1
else
    arg1 = operator new(x24_1 << 4)
    x1 = *(x19 + 0x18)
    x2 = *(x19 + 0x20) - x1
    x8_4 = x2 s>> 4

void* x9_3 = arg1 + (x23_1 << 4)
*x9_3 = arg2
*(x9_3 + 8) = arg3
void* x20_1 = x9_3 - (x8_4 << 4)

if (x2 s>= 1)
    memcpy(x20_1, x1, x2)
    x1 = *(x19 + 0x18)

*(x19 + 0x18) = x20_1
*(x19 + 0x20) = x9_3 + 0x10
*(x19 + 0x28) = arg1 + (x24_1 << 4)

if (x1 != 0)
    return operator delete(x1) __tailcall
