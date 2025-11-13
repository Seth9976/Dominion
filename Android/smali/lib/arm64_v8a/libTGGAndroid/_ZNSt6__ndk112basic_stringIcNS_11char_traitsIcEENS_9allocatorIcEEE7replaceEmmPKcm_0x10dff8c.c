// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
// 地址: 0x10dff8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
char* entry_x4
char* x20 = entry_x4
uint64_t x22 = arg4
uint64_t x24 = arg2
uint64_t x1
uint64_t x8_1
uint64_t x21
char const* x23
char* x27_1

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    x8_1 = x21 - x24
    
    if (x21 u>= x24)
        x23 = x8_1 u< arg3 ? x8_1 : arg3
        
        x1 = (*arg1 & 0xfffffffffffffffe) - 1
        
        if (x23 - x21 + x1 u< x20)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
                arg1, x1, &x20[x21] - &x23[x1], x21, x24, x23, x20)
            return arg1
        
        x27_1 = *(arg1 + 0x10)
        
        if (x23 != x20)
        label_10e0058:
            size_t x25_1 = x8_1 - x23
            
            if (x8_1 == x23)
                goto label_10e00a0
            
            void* x26_1 = &x27_1[x24]
            
            if (x23 u<= x20)
                if (x26_1 u< x22 && &x27_1[x21] u> x22)
                    if (x26_1 + x23 u<= x22)
                        x22 += x20 - x23
                    else
                        if (x23 != 0)
                            memmove(x26_1, x22, x23)
                        
                        x24 = &x23[x24]
                        x22 = &x20[x22]
                        x20 -= x23
                        x23 = nullptr
                
                void* x8_8 = &x27_1[x24]
                memmove(x8_8 + x20, x8_8 + x23, x25_1)
                
                if (x20 != 0)
                    goto label_10e00a4
            else
                if (x20 != 0)
                    memmove(x26_1, x22, x20)
                
                memmove(x26_1 + x20, x26_1 + x23, x25_1)
        else
        label_10e009c:
            x23 = x20
        label_10e00a0:
            
            if (x20 != 0)
            label_10e00a4:
                memmove(&x27_1[x24], x22, x20)
        
        int64_t x8_4 = x20 - x23 + x21
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x8_4
        else
            *arg1 = (x8_4.d << 1).b
        
        x27_1[x8_4] = 0
        return arg1
else
    x21 = x8 u>> 1
    x8_1 = x21 - x24
    
    if (x21 u>= x24)
        x23 = x8_1 u< arg3 ? x8_1 : arg3
        
        if (x23 - x21 + 0x16 u< x20)
            x1 = 0x16
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
                arg1, x1, &x20[x21] - &x23[x1], x21, x24, x23, x20)
            return arg1
        
        x27_1 = arg1 + 1
        
        if (x23 == x20)
            goto label_10e009c
        
        goto label_10e0058
uint64_t x0_7
uint64_t x1_5
uint64_t x2_5
uint64_t x3_1
uint64_t x4_1
uint64_t x5_2
char* x6_2
x0_7, x1_5, x2_5, x3_1, x4_1, x5_2, x6_2 =
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
    x0_7, x1_5, x2_5, x3_1, x4_1, x5_2, x6_2) __tailcall
