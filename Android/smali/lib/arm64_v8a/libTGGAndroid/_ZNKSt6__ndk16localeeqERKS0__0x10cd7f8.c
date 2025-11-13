// 函数: _ZNKSt6__ndk16localeeqERKS0_
// 地址: 0x10cd7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *arg1
int64_t* entry_x1
void* x10 = *entry_x1

if (x9 != x10)
    uint64_t x11_1 = zx.q(*(x9 + 0x120))
    uint64_t i_4 = *(x9 + 0x128)
    uint64_t i_1 = x11_1 u>> 1
    uint64_t i_3
    
    if ((x11_1.d & 1) == 0)
        i_3 = i_1
    else
        i_3 = i_4
    
    if (i_3 == 1)
        uint64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x9 + 0x120, 0, -ffffffffffffffff, &data_74e377)
        
        if (result.d == 0)
            return result
        
        x9 = *arg1
        x10 = *entry_x1
        x11_1 = zx.q(*(x9 + 0x120))
        i_4 = *(x9 + 0x128)
        i_1 = x11_1 u>> 1
    
    uint64_t x13_1 = zx.q(*(x10 + 0x120))
    uint64_t i_2
    
    if ((x11_1.d & 1) == 0)
        i_2 = i_1
    else
        i_2 = i_4
    
    uint64_t x12_2
    
    if ((x13_1.d & 1) == 0)
        x12_2 = x13_1 u>> 1
    else
        x12_2 = *(x10 + 0x128)
    
    if (i_2 != x12_2)
        return 0
    
    void* x9_1 = x9 + 0x121
    void* x1
    
    if ((x13_1.d & 1) != 0)
        x1 = *(x10 + 0x130)
    else
        x1 = x10 + 0x121
    
    if ((x11_1.d & 1) != 0)
        if (i_2 != 0)
            return zx.q(memcmp() == 0 ? 1 : 0)
    else if (i_2 != 0)
        uint32_t x10_2
        uint32_t x11_3
        uint64_t i
        
        do
            x10_2 = zx.d(*x9_1)
            x11_3 = zx.d(*x1)
            
            if (x10_2 != x11_3)
                break
            
            i = i_1
            i_1 -= 1
            x9_1 += 1
            x1 += 1
        while (i != 1)
        return zx.q(x10_2 == x11_3 ? 1 : 0)

return 1
