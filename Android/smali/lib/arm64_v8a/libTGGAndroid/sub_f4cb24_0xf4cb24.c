// 函数: sub_f4cb24
// 地址: 0xf4cb24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
int32_t* x8 = x20[1]

if (x8 == x20[2])
    void* x21_1 = *x20
    void* x22_1 = x8 - x21_1
    int64_t x25_1 = x22_1 s>> 2
    
    if ((x25_1 + 1) u>> 0x3e != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        sub_ef2a0c()
        noreturn
    
    int64_t x9_3 = x22_1 s>> 1
    int64_t x8_3
    
    if (x9_3 u< x25_1 + 1)
        x8_3 = x25_1 + 1
    else
        x8_3 = x9_3
    
    int64_t x26_1
    
    x26_1 = x25_1 u< 0x1fffffffffffffff ? x8_3 : 0x3fffffffffffffff
    
    int64_t x24_1
    
    if (x26_1 == 0)
        x24_1 = 0
    else
        if (x26_1 u>> 0x3e != 0)
            sub_ef2a0c()
            noreturn
        
        x24_1 = operator new(x26_1 << 2)
    
    int32_t* x25_2 = x24_1 + (x25_1 << 2)
    *x25_2 = *arg2
    
    if (x22_1 s>= 1)
        memcpy(x24_1, x21_1, x22_1)
    
    *x20 = x24_1
    x20[1] = &x25_2[1]
    x20[2] = x24_1 + (x26_1 << 2)
    
    if (x21_1 != 0)
        operator delete(x21_1)
else
    *x8 = *arg2
    x20[1] = &x8[1]

return arg1
