// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EEPS7_EEbT0_SB_T_
// 地址: 0xf53160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x5555555555555555
char x8_3
int128_t var_80

if (x8_2 u> 5)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x21_3 = arg1 + 0x30
    uint64_t x9_2
    int128_t v0_1
    x9_2, v0_1 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
        arg1, arg1 + 0x18, x21_3, arg3)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x18) x8_5 = arg1 + 0x48
    char x8_16
    
    if (x8_5 == arg2)
    label_f53418:
        x8_16 = 1
    else
        int64_t x22_2 = 0
        int32_t x23_2 = 0
        
        while (true)
            void* x25_1 = x21_3
            x21_3 = x8_5
            uint64_t x8_7 = zx.q(*x25_1)
            x9_2 = zx.q(*x21_3)
            uint64_t x26_1
            
            if ((x8_7.d & 1) == 0)
                x26_1 = x8_7 u>> 1
            else
                x26_1 = *(x25_1 + 8)
            
            uint64_t x27_1
            
            if ((x9_2.d & 1) == 0)
                x27_1 = x9_2 u>> 1
            else
                x27_1 = *(x21_3 + 8)
            
            uint64_t x2_2
            
            x2_2 = x26_1 u< x27_1 ? x26_1 : x27_1
            
            int32_t x0_4
            
            if (x2_2 != 0)
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x1) x0_3
                
                if ((x9_2.d & 1) != 0)
                    x0_3 = *(x21_3 + 0x10)
                else
                    x0_3 = x21_3 + 1
                
                void* x1_2
                
                if ((x8_7.d & 1) != 0)
                    x1_2 = *(x25_1 + 0x10)
                else
                    x1_2 = x25_1 + 1
                
                x0_4, x9_2, v0_1 = memcmp(x0_3, x1_2, x2_2)
            
            if (x2_2 == 0 || x0_4 == 0)
                if (x27_1 u< x26_1)
                label_f532f4:
                    int64_t x8_8 = *(x21_3 + 0x10)
                    int64_t x8_9 = x22_2
                    var_80 = *x21_3
                    __builtin_memset(x21_3, 0, 0x18)
                    
                    while (true)
                        x9_2 = arg1 + x8_9
                        int64_t x26_2 = x8_9
                        v0_1 = *(x9_2 + 0x30)
                        int64_t x8_10 = *(x9_2 + 0x40)
                        *(x9_2 + 0x30) = 0
                        *(x9_2 + 0x48) = v0_1
                        *(x9_2 + 0x58) = x8_10
                        
                        if (x26_2 == -0x30)
                            x25_1 = arg1
                            break
                        
                        uint64_t x8_11 = zx.q(*(x9_2 + 0x18))
                        uint64_t x10_7 = *(x9_2 + 0x20)
                        x9_2 = zx.q(var_80.b)
                        uint64_t x27_2
                        
                        if ((x8_11.d & 1) == 0)
                            x27_2 = x8_11 u>> 1
                        else
                            x27_2 = x10_7
                        
                        uint64_t x28_1
                        
                        if ((x9_2.d & 1) == 0)
                            x28_1 = x9_2 u>> 1
                        else
                            x28_1 = var_80:8.q
                        
                        uint64_t x2_3
                        
                        x2_3 = x27_2 u< x28_1 ? x27_2 : x28_1
                        
                        int32_t x0_5
                        
                        if (x2_3 != 0)
                            void* x9_3 = arg1 + x26_2
                            int64_t x0_6
                            
                            if ((x9_2.d & 1) == 0)
                                x0_6 = &var_80 | 1
                            else
                                x0_6 = x8_8
                            
                            void* x1_3
                            
                            if ((x8_11.d & 1) == 0)
                                x1_3 = x9_3 + 0x19
                            else
                                x1_3 = *(x9_3 + 0x28)
                            
                            x0_5, x9_2, v0_1 = memcmp(x0_6, x1_3, x2_3)
                        
                        if (x2_3 == 0 || x0_5 == 0)
                            if (x28_1 u>= x27_2)
                                break
                            
                            x0_5 = -1
                        
                        x25_1 -= 0x18
                        x8_9 = x26_2 - 0x18
                        
                        if ((x0_5 & 0x80000000) == 0)
                            x25_1 = arg1 + x26_2 + 0x30
                            break
                    
                    v0_1 = var_80
                    x23_2 += 1
                    *(x25_1 + 0x10) = x8_8
                    *x25_1 = v0_1
                    
                    if (x23_2 == 8)
                        x8_16 = 0
                        x9_2 = zx.q(x21_3 + 0x18 == arg2 ? 1 : 0)
                        break
            else if ((x0_4 & 0x80000000) != 0)
                goto label_f532f4
            
            x8_5 = x21_3 + 0x18
            x22_2 += 0x18
            
            if (x8_5 == arg2)
                goto label_f53418
    
    x8_3 = x8_16 | x9_2.b
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            uint64_t x8_4 = zx.q(*(arg2 - 0x18))
            uint64_t x9_1 = zx.q(*arg1)
            uint64_t x22_1
            
            if ((x9_1.d & 1) == 0)
                x22_1 = x9_1 u>> 1
            else
                x22_1 = *(arg1 + 8)
            
            uint64_t x23_1
            
            if ((x8_4.d & 1) == 0)
                x23_1 = x8_4 u>> 1
            else
                x23_1 = *(arg2 - 0x10)
            
            uint64_t x2
            
            x2 = x22_1 u< x23_1 ? x22_1 : x23_1
            
            int32_t x0_1
            int128_t v0
            
            if (x2 != 0)
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    -0x17) x0
                
                if ((x8_4.d & 1) != 0)
                    x0 = *(arg2 - 8)
                else
                    x0 = arg2 - 0x17
                
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x1) x1
                
                if ((x9_1.d & 1) != 0)
                    x1 = *(arg1 + 0x10)
                else
                    x1 = arg1 + 1
                
                x0_1, v0 = memcmp(x0, x1, x2)
            
            if (x2 == 0 || x0_1 == 0)
                if (x23_1 u< x22_1)
                label_f53428:
                    int64_t x8_13 = *(arg1 + 0x10)
                    var_80 = *arg1
                    v0 = *(arg2 - 0x18)
                    *(arg1 + 0x10) = *(arg2 - 8)
                    *arg1 = v0
                    v0 = var_80
                    *(arg2 - 8) = x8_13
                    *(arg2 - 0x18) = v0
            else if ((x0_1 & 0x80000000) != 0)
                goto label_f53428
            
            x8_3 = 1
        case 3
            std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                arg1, arg1 + 0x18, arg2 - 0x18, arg3)
            x8_3 = 1
        case 4
            std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                arg1, arg1 + 0x18, arg1 + 0x30, arg2 - 0x18, arg3)
            x8_3 = 1
        case 5
            sub_f52ce0(arg1, arg1 + 0x18, arg1 + 0x30, arg1 + 0x48, arg2 - 0x18, arg3)
            x8_3 = 1
return x8_3 & 1
