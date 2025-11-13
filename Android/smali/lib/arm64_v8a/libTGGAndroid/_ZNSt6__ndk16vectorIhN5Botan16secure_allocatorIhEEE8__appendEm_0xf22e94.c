// 函数: _ZNSt6__ndk16vectorIhN5Botan16secure_allocatorIhEEE8__appendEm
// 地址: 0xf22e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
size_t entry_x1

if (x8 - result u>= entry_x1)
    if (entry_x1 != 0)
        memset(result, 0, entry_x1)
        result += entry_x1
    
    *(arg1 + 8) = result
else
    void* x21_1 = *arg1
    size_t x24_1 = result - x21_1
    int64_t x9_1 = x24_1 + entry_x1
    
    if (x24_1 + entry_x1 s< 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x8_1 = x8 - x21_1
    int64_t x11_1 = x8_1 << 1
    int64_t x9_2
    
    x9_2 = x11_1 u< x9_1 ? x9_1 : x11_1
    
    int64_t x22_1
    
    x22_1 = x8_1 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    int64_t x0_1
    size_t x23_1
    
    if (x22_1 == 0)
        x0_1 = 0
        x23_1 = x24_1
    else
        x0_1 = Botan::allocate_memory(x22_1, 1)
        x21_1 = *arg1
        x23_1 = *(arg1 + 8) - x21_1
    
    int64_t x24_2 = x0_1 + x24_1
    result = memset(x24_2, 0, entry_x1)
    int64_t x20_1 = x24_2 - x23_1
    
    if (x23_1 s>= 1)
        result = memcpy(x20_1, x21_1, x23_1)
    
    int64_t x8_3 = *(arg1 + 0x10)
    *arg1 = x20_1
    *(arg1 + 8) = x24_2 + entry_x1
    *(arg1 + 0x10) = x0_1 + x22_1
    
    if (x21_1 != 0)
        return Botan::deallocate_memory(x21_1, x8_3 - x21_1, 1)

return result
