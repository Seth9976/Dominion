// 函数: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE
// 地址: 0xf4496c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
    arg1 + 0x40)
int32_t x8 = *(arg1 + 0x60)
*(arg1 + 0x58) = 0

if ((x8 & 8) != 0)
    uint64_t x10_1 = zx.q(*(arg1 + 0x40))
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x41) x9_1
    void* x10_2
    
    if ((x10_1.d & 1) != 0)
        x9_1 = *(arg1 + 0x50)
        x10_2 = x9_1 + *(arg1 + 0x48)
    else
        x9_1 = arg1 + 0x41
        x10_2 = x9_1 + (x10_1 u>> 1)
    
    *(arg1 + 0x58) = x10_2
    *(arg1 + 0x10) = x9_1
    *(arg1 + 0x18) = x9_1
    *(arg1 + 0x20) = x10_2

if ((x8 & 0x10) != 0)
    uint64_t x8_1 = zx.q(*(arg1 + 0x40))
    char x1_1
    uint64_t x21_1
    
    if ((x8_1.d & 1) != 0)
        x21_1 = *(arg1 + 0x48)
        x1_1 = ((*(arg1 + 0x40)).b & 0xfe) - 1
        *(arg1 + 0x58) = *(arg1 + 0x50) + x21_1
    else
        x21_1 = x8_1 u>> 1
        *(arg1 + 0x58) = arg1 + 0x40 + x21_1 + 1
        x1_1 = 0x16
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
        arg1 + 0x40, x1_1)
    uint64_t x9_4 = zx.q(*(arg1 + 0x40))
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x41) x8_6
    uint64_t x9_5
    
    if ((x9_4.d & 1) != 0)
        x9_5 = *(arg1 + 0x48)
        x8_6 = *(arg1 + 0x50)
    else
        x8_6 = arg1 + 0x41
        x9_5 = x9_4 u>> 1
    
    uint32_t x10_4 = zx.d(*(arg1 + 0x60))
    *(arg1 + 0x28) = x8_6
    *(arg1 + 0x30) = x8_6
    *(arg1 + 0x38) = x8_6 + x9_5
    
    if ((x10_4 & 3) != 0)
        if (x21_1 u>> 0x1f != 0)
            uint64_t x9_12 = (x21_1 - 0x80000000) u/ 0x7fffffff * 0x7fffffff
            x8_6 = x9_12 + x8_6 + 0x7fffffff
            x21_1 = x21_1 - x9_12 - 0x7fffffff
            *(arg1 + 0x30) = x8_6
        
        if (x21_1 != 0)
            *(arg1 + 0x30) = x8_6 + sx.q(x21_1.d)

return result
