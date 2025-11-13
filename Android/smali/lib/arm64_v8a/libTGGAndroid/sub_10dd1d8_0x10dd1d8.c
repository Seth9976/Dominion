// 函数: sub_10dd1d8
// 地址: 0x10dd1d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg1[2]
void* x22 = *arg1
size_t x21 = arg3 - arg2
int64_t x25 = x21 s>> 3

if (x25 u<= (x8 - x22) s>> 3)
    void* x8_3 = arg1[1] - x22
    int64_t x26_1 = x8_3 s>> 3
    void* x21_1
    
    if (x25 u> x26_1)
        x21_1 = arg2 + x8_3
    else
        x21_1 = arg3
    
    size_t x24_1 = x21_1 - arg2
    
    if (x21_1 != arg2)
        memmove(x22, arg2, x24_1)
    
    if (x25 u<= x26_1)
        arg1[1] = x22 + x24_1
    else
        int64_t x20_1 = arg1[1]
        size_t x22_1 = arg3 - x21_1
        
        if (x22_1 s>= 1)
            memcpy(x20_1, x21_1, x22_1)
            x20_1 += x22_1
        
        arg1[1] = x20_1
else
    if (x22 != 0)
        arg1[1] = x22
        
        if (x22 == &arg1[4])
            arg1[0x20].b = 0
        else
            operator delete(x22)
        
        x8 = 0
        __builtin_memset(arg1, 0, 0x18)
    
    int64_t x23_2
    
    if ((x21 & 0xffffffff80000000) == 0)
        int64_t x9_1 = x8 s>> 2
        int64_t x9_2
        
        x9_2 = x9_1 u< x25 ? x25 : x9_1
        
        if (0xfffffffffffffff u> x8 s>> 3)
            x23_2 = x9_2
        else
            x23_2 = 0x1fffffffffffffff
    
    if ((x21 & 0xffffffff80000000) != 0 || x23_2 u>> 0x3d != 0)
        int64_t* x0_6
        int64_t x1_3
        x0_6, x1_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        return sub_10dd360(x0_6, x1_3) __tailcall
    
    void* x22_2
    
    if (x23_2 u> 0x1c || zx.d(arg1[0x20].b) != 0)
        x22_2 = operator new(x23_2 << 3)
    else
        x22_2 = &arg1[4]
        arg1[0x20].b = 1
    
    *arg1 = x22_2
    arg1[1] = x22_2
    arg1[2] = x22_2 + (x23_2 << 3)
    
    if (x21 s>= 1)
        memcpy(x22_2, arg2, x21)
        x22_2 += x21
    
    arg1[1] = x22_2
