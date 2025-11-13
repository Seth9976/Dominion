// 函数: _ZNSt6__ndk16vectorImN5Botan16secure_allocatorImEEE8__appendEm
// 地址: 0xf27400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
int64_t entry_x1

if (entry_x1 u<= (x8 - result) s>> 3)
    if (entry_x1 != 0)
        int64_t x2_1 = entry_x1 << 3
        memset(result, 0, x2_1)
        result += x2_1
    
    *(arg1 + 8) = result
else
    void* x20_1 = *arg1
    size_t x22_1 = result - x20_1
    int64_t x24_1 = x22_1 s>> 3
    int64_t x9_1 = x24_1 + entry_x1
    
    if (x9_1 u>> 0x3d != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x8_1 = x8 - x20_1
    int64_t x11_1 = x8_1 s>> 2
    int64_t x9_2
    
    x9_2 = x11_1 u< x9_1 ? x9_1 : x11_1
    
    int64_t x23_1
    
    if (0xfffffffffffffff u> x8_1 s>> 3)
        x23_1 = x9_2
    else
        x23_1 = 0x1fffffffffffffff
    
    int64_t x0_1
    int64_t x25_1
    
    if (x23_1 == 0)
        x0_1 = 0
        x25_1 = x24_1
    else
        x0_1 = Botan::allocate_memory(x23_1, 8)
        x20_1 = *arg1
        x22_1 = *(arg1 + 8) - x20_1
        x25_1 = x22_1 s>> 3
    
    int64_t x24_2 = x0_1 + (x24_1 << 3)
    int64_t x2_2 = entry_x1 << 3
    result = memset(x24_2, 0, x2_2)
    int64_t x21_1 = x24_2 - (x25_1 << 3)
    
    if (x22_1 s>= 1)
        result = memcpy(x21_1, x20_1, x22_1)
    
    int64_t x8_3 = *(arg1 + 0x10)
    *arg1 = x21_1
    *(arg1 + 8) = x2_2 + x24_2
    *(arg1 + 0x10) = x0_1 + (x23_1 << 3)
    
    if (x20_1 != 0)
        return Botan::deallocate_memory(x20_1, (x8_3 - x20_1) s>> 3, 8)

return result
