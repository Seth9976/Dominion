// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
// 地址: 0x10e1db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1

if (arg1 != entry_x1)
    uint64_t x8_1 = zx.q(*arg1)
    uint64_t x9_1 = zx.q(*entry_x1)
    uint64_t x3_1
    size_t x20_1
    
    if ((x8_1.d & 1) != 0)
        int32_t temp0_1 = x9_1.d & 1
        void* x7_1
        
        if (temp0_1 != 0)
            x7_1 = *(entry_x1 + 0x10)
        else
            x7_1 = &entry_x1[1]
        
        if (temp0_1 == 0)
            x20_1 = x9_1 u>> 1
        else
            x20_1 = *(entry_x1 + 8)
        
        int64_t x8_4 = *arg1 & 0xfffffffffffffffe
        
        if (x8_4 u<= x20_1)
            x3_1 = *(arg1 + 8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
                arg1, x8_4 - 1, x20_1 - x8_4 + 1, x3_1, 0, x3_1, x20_1)
        else
            int64_t x21_1 = *(arg1 + 0x10)
            *(arg1 + 8) = x20_1
            
            if (x20_1 != 0)
                memcpy(x21_1, x7_1, x20_1)
            
            *(x21_1 + x20_1) = 0
    else if ((x9_1.d & 1) != 0)
        x20_1 = *(entry_x1 + 8)
        int64_t x7_2 = *(entry_x1 + 0x10)
        
        if (x20_1 u> 0x16)
            x3_1 = x8_1 u>> 1
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
                arg1, 0x16, x20_1 - 0x16, x3_1, 0, x3_1, x20_1)
        else
            *arg1 = (x20_1.d << 1).b
            
            if (x20_1 != 0)
                memcpy(arg1 + 1, x7_2, x20_1)
            
            *(arg1 + x20_1 + 1) = 0
    else
        int128_t v0 = *entry_x1
        *(arg1 + 0x10) = *(entry_x1 + 0x10)
        *arg1 = v0

return arg1
