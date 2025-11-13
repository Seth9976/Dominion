// 函数: sub_cce8c0
// 地址: 0xcce8c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1)
int64_t* x8_2 = *arg2
int64_t i = arg3 + 1

if (i != (arg2[1] - x8_2) s>> 5)
    void* x9_2 = &x8_2[arg3 * 4]
    int64_t i_2 = 0
    char var_78
    uint64_t x28_1 = &var_78 | 1
    
    do
        int64_t x10_4 = x8_2[i * 4]
        
        if (x10_4 u<= x8_2[arg3 * 4])
            break
        
        int64_t x9_3 = *x9_2
        void* var_68
        
        if (x10_4 u> x9_3)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "(", &x8_2[i * 4 + 1])
            uint64_t x1_2
            
            if ((zx.d(var_78) & 1) == 0)
                x1_2 = x28_1
            else
                x1_2 = var_68
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                arg1, x1_2)
            
            if ((zx.d(var_78) & 1) != 0)
                result = operator delete(var_68)
            
            i_2 += 1
        else if (x10_4 u>= x9_3)
            uint64_t x9_6 = zx.q(*arg1)
            
            if ((x9_6.d & 1) != 0)
                if (zx.d(*(*(arg1 + 8) + *(arg1 + 0x10) - 1)) != 0x28)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        arg1)
                    x8_2 = *arg2
            else if (zx.d(*((x9_6 u>> 1) + arg1 + 1 - 1)) != 0x28)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    arg1)
                x8_2 = *arg2
            
            void* x8_11 = &x8_2[i * 4]
            *(x8_11 + 0x10)
            void* x1_7
            
            if ((zx.d(*(x8_11 + 8)) & 1) == 0)
                x1_7 = x8_11 + 9
            else
                x1_7 = *(x8_11 + 0x18)
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                arg1, x1_7)
        else
            i_2 = i_2 + x10_4 - x9_3
            int64_t j_1 = x9_3 - x10_4
            int64_t j
            
            do
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    arg1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                ",", *arg2 + (i << 5) + 8)
            uint64_t x1_5
            
            if ((zx.d(var_78) & 1) == 0)
                x1_5 = x28_1
            else
                x1_5 = var_68
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                arg1, x1_5)
            
            if ((zx.d(var_78) & 1) != 0)
                result = operator delete(var_68)
        x8_2 = *arg2
        x9_2 = &x8_2[i * 4]
        i += 1
    while (i != (arg2[1] - x8_2) s>> 5)
    
    if (i_2 != 0)
        int64_t i_1
        
        do
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                arg1)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
