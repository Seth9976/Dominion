// 函数: sub_f4a08c
// 地址: 0xf4a08c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
char* x8 = x20[1]

if (x8 == x20[2])
    void* x21_1 = *x20
    void* x24_1 = x8 - x21_1
    
    if (x24_1 + 1 s< 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t x9_2 = x24_1 << 1
    uint64_t x8_3
    
    if (x9_2 u< x24_1 + 1)
        x8_3 = x24_1 + 1
    else
        x8_3 = x9_2
    
    uint64_t x23_1
    
    x23_1 = x24_1 u< 0x3fffffffffffffff ? x8_3 : 0x7fffffffffffffff
    
    void* const x0_1
    size_t x2_1
    
    if (x23_1 == 0)
        x0_1 = nullptr
        x2_1 = x24_1
    else
        x0_1 = Botan::allocate_memory(x23_1, 1)
        x21_1 = *x20
        x2_1 = x20[1] - x21_1
    
    void* x24_2 = x0_1 + x24_1
    void* x22_1 = x24_2 - x2_1
    *x24_2 = *arg2
    
    if (x2_1 s>= 1)
        memcpy(x22_1, x21_1, x2_1)
    
    int64_t x8_6 = x20[2]
    *x20 = x22_1
    x20[1] = x24_2 + 1
    x20[2] = x0_1 + x23_1
    
    if (x21_1 != 0)
        Botan::deallocate_memory(x21_1, x8_6 - x21_1, 1)
else
    *x8 = *arg2
    x20[1] = &x8[1]

return arg1
