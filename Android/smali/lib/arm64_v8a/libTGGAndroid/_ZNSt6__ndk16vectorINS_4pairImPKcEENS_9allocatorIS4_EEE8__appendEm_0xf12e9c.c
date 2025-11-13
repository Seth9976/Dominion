// 函数: _ZNSt6__ndk16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE8__appendEm
// 地址: 0xf12e9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
int64_t entry_x1

if (entry_x1 u<= (x8 - result) s>> 4)
    if (entry_x1 != 0)
        int64_t x2_1 = entry_x1 << 4
        memset(result, 0, x2_1)
        result += x2_1
    
    *(arg1 + 8) = result
else
    void* x20_1 = *arg1
    size_t x21_1 = result - x20_1
    int64_t x24_1 = x21_1 s>> 4
    int64_t x9_1 = x24_1 + entry_x1
    
    if (x9_1 u>> 0x3c != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        sub_ef2a0c()
        noreturn
    
    void* x8_1 = x8 - x20_1
    int64_t x11_1 = x8_1 s>> 3
    int64_t x9_2
    
    x9_2 = x11_1 u< x9_1 ? x9_1 : x11_1
    
    int64_t x25_1
    
    if (0x7ffffffffffffff u> x8_1 s>> 4)
        x25_1 = x9_2
    else
        x25_1 = 0xfffffffffffffff
    
    int64_t x23_1
    
    if (x25_1 == 0)
        x23_1 = 0
    else
        if (x25_1 u>> 0x3c != 0)
            sub_ef2a0c()
            noreturn
        
        x23_1 = operator new(x25_1 << 4)
    
    int64_t x0_2 = x23_1 + (x24_1 << 4)
    int64_t x2_2 = entry_x1 << 4
    result = memset(x0_2, 0, x2_2)
    
    if (x21_1 s>= 1)
        result = memcpy(x23_1, x20_1, x21_1)
    
    *arg1 = x23_1
    *(arg1 + 8) = x2_2 + x0_2
    *(arg1 + 0x10) = x23_1 + (x25_1 << 4)
    
    if (x20_1 != 0)
        return operator delete(x20_1) __tailcall

return result
