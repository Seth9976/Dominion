// 函数: sub_10dd360
// 地址: 0x10dd360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = arg1[1]
int64_t x8 = arg1[2]

if (arg2 u<= (x8 - result) s>> 3)
    if (arg2 != 0)
        int64_t x2_1 = arg2 << 3
        memset(result, 0, x2_1)
        result += x2_1
    
    arg1[1] = result
else
    int64_t x10_1 = *arg1
    int64_t x21_1 = (result - x10_1) s>> 3
    int64_t x9_2 = x21_1 + arg2
    
    if (x9_2 u>> 0x3d != 0)
        return sub_10dd4b0(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            __tailcall
    
    int64_t x8_1 = x8 - x10_1
    int64_t x11_2 = x8_1 s>> 2
    int64_t x9_3
    
    x9_3 = x11_2 u< x9_2 ? x9_2 : x11_2
    
    int64_t x23_1
    
    if (0xfffffffffffffff u> x8_1 s>> 3)
        x23_1 = x9_3
    else
        x23_1 = 0x1fffffffffffffff
    
    void* x0
    
    if (x23_1 == 0)
        x0 = nullptr
    else if (x23_1 u> 0x1c || zx.d(arg1[0x20].b) != 0)
        x0 = operator new(x23_1 << 3)
    else
        arg1[0x20].b = 1
        x0 = &arg1[4]
    
    void* x21_2 = x0 + (x21_1 << 3)
    size_t x2_2 = arg2 << 3
    result = memset(x21_2, 0, x2_2)
    void* x1 = *arg1
    size_t x2_3 = arg1[1] - x1
    void* x20_2 = x21_2 - x2_3
    
    if (x2_3 s>= 1)
        result = memcpy(x20_2, x1, x2_3)
        x1 = *arg1
    
    *arg1 = x20_2
    arg1[1] = x2_2 + x21_2
    arg1[2] = x0 + (x23_1 << 3)
    
    if (x1 != 0)
        if (x1 != &arg1[4])
            return operator delete(x1) __tailcall
        
        arg1[0x20].b = 0

return result
