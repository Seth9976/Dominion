// 函数: _ZNSt6__ndk118__insertion_sort_3IRNS_6__lessINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EEPS7_EEvT0_SB_T_
// 地址: 0xf52f9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x30) x21 = arg1 + 0x30
int32_t result
int128_t v0
result, v0 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
    arg1, arg1 + 0x18, x21, arg3)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x48) x8 = arg1 + 0x48

if (x8 != arg2)
    int64_t x22_1 = 0
    
    do
        void* x24_1 = x21
        x21 = x8
        uint64_t x8_2 = zx.q(*x24_1)
        uint64_t x9_1 = zx.q(*x21)
        uint64_t x25_1
        
        if ((x8_2.d & 1) == 0)
            x25_1 = x8_2 u>> 1
        else
            x25_1 = *(x24_1 + 8)
        
        uint64_t x26_1
        
        if ((x9_1.d & 1) == 0)
            x26_1 = x9_1 u>> 1
        else
            x26_1 = *(x21 + 8)
        
        uint64_t x2_1
        
        x2_1 = x25_1 u< x26_1 ? x25_1 : x26_1
        
        if (x2_1 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x31) x0
            
            if ((x9_1.d & 1) != 0)
                x0 = *(x21 + 0x10)
            else
                x0 = x21 + 1
            
            void* x1_1
            
            if ((x8_2.d & 1) != 0)
                x1_1 = *(x24_1 + 0x10)
            else
                x1_1 = x24_1 + 1
            
            result, v0 = memcmp(x0, x1_1, x2_1)
        
        if (x2_1 == 0 || result == 0)
            if (x26_1 u< x25_1)
            label_f5307c:
                int64_t x8_3 = *(x21 + 0x10)
                int64_t x8_4 = x22_1
                int128_t var_70 = *x21
                __builtin_memset(x21, 0, 0x18)
                
                while (true)
                    void* x9_2 = arg1 + x8_4
                    int64_t x25_2 = x8_4
                    v0 = *(x9_2 + 0x30)
                    int64_t x8_5 = *(x9_2 + 0x40)
                    *(x9_2 + 0x30) = 0
                    *(x9_2 + 0x48) = v0
                    *(x9_2 + 0x58) = x8_5
                    
                    if (x25_2 == -0x30)
                        x24_1 = arg1
                        break
                    
                    uint64_t x8_6 = zx.q(*(x9_2 + 0x18))
                    uint64_t x9_3 = zx.q(var_70.b)
                    uint64_t x26_2
                    
                    if ((x8_6.d & 1) == 0)
                        x26_2 = x8_6 u>> 1
                    else
                        x26_2 = *(x9_2 + 0x20)
                    
                    uint64_t x27_1
                    
                    if ((x9_3.d & 1) == 0)
                        x27_1 = x9_3 u>> 1
                    else
                        x27_1 = var_70:8.q
                    
                    uint64_t x2_2
                    
                    x2_2 = x26_2 u< x27_1 ? x26_2 : x27_1
                    
                    if (x2_2 != 0)
                        void* x9_4 = arg1 + x25_2
                        int64_t x0_1
                        
                        if ((x9_3.d & 1) == 0)
                            x0_1 = &var_70 | 1
                        else
                            x0_1 = x8_3
                        
                        void* x1_2
                        
                        if ((x8_6.d & 1) == 0)
                            x1_2 = x9_4 + 0x19
                        else
                            x1_2 = *(x9_4 + 0x28)
                        
                        result, v0 = memcmp(x0_1, x1_2, x2_2)
                    
                    if (x2_2 == 0 || result == 0)
                        if (x27_1 u>= x26_2)
                            break
                        
                        result = -1
                    
                    x24_1 -= 0x18
                    x8_4 = x25_2 - 0x18
                    
                    if ((result & 0x80000000) == 0)
                        x24_1 = arg1 + x25_2 + 0x30
                        break
                
                v0 = var_70
                *(x24_1 + 0x10) = x8_3
                *x24_1 = v0
        else if ((result & 0x80000000) != 0)
            goto label_f5307c
        
        x8 = x21 + 0x18
        x22_1 += 0x18
    while (x8 != arg2)

return result
