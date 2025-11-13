// 函数: sub_f15d38
// 地址: 0xf15d38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t result

if (zx.d(*(arg1 + 0xa6)) == 0)
    uint64_t x8_10 = zx.q(*arg2)
    uint64_t x9_7
    
    if ((x8_10.d & 1) != 0)
        x9_7 = *(arg2 + 8)
    else
        x9_7 = x8_10 u>> 1
    
    uint64_t x9_16
    
    if (x9_7 == 1)
        uint64_t x9_15 = zx.q(*arg3)
        
        if ((x9_15.d & 1) != 0)
            x9_16 = *(arg3 + 8)
        else
            x9_16 = x9_15 u>> 1
    
    if (x9_7 != 1 || x9_16 != 1)
        sub_f16c88()
        noreturn
    
    if (zx.d(*(arg1 + 0xa5)) != 0)
        void* x8_21
        
        if ((x8_10.d & 1) != 0)
            x8_21 = *(arg2 + 0x10)
        else
            x8_21 = &arg2[1]
        
        int64_t* x0_9 = *(arg1 + 0x18)
        char x0_10 = (*(*x0_9 + 0x28))(x0_9, zx.q(*x8_21))
        void* x8_28
        
        if ((zx.d(*arg2) & 1) != 0)
            **(arg2 + 0x10) = x0_10
            
            if ((zx.d(*arg3) & 1) != 0)
                x8_28 = *(arg3 + 0x10)
            else
                x8_28 = &arg3[1]
        else
            arg2[1] = x0_10
            
            if ((zx.d(*arg3) & 1) == 0)
                x8_28 = &arg3[1]
            else
                x8_28 = *(arg3 + 0x10)
        
        int64_t* x0_11 = *(arg1 + 0x18)
        char x0_12
        x0_12, result = (*(*x0_11 + 0x28))(x0_11, zx.q(*x8_28))
        void* x8_30
        
        if ((zx.d(*arg3) & 1) != 0)
            x8_30 = *(arg3 + 0x10)
        else
            x8_30 = &arg3[1]
        
        *x8_30 = x0_12
    
    void* x8_31 = *(arg2 + 0x10)
    int128_t var_60 = *arg2
    __builtin_memset(arg2, 0, 0x18)
    void* x8_32 = *(arg3 + 0x10)
    int128_t result_5 = *arg3
    __builtin_memset(arg3, 0, 0x18)
    int128_t* x8_33 = *(arg1 + 0x60)
    
    if (x8_33 u>= *(arg1 + 0x68))
        result = std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >(
            arg1 + 0x58)
        
        if ((zx.d(result_5.b) & 1) != 0)
            result = operator delete(x8_32)
    else
        x8_33[1].q = x8_31
        *x8_33 = var_60
        __builtin_memset(&var_60, 0, 0x30)
        result = result_5
        *(x8_33 + 0x28) = x8_32
        *(x8_33 + 0x18) = result
        *(arg1 + 0x60) = &x8_33[3]
    
    if ((zx.d(var_60.b) & 1) != 0)
        return operator delete(x8_31)
else
    if (zx.d(*(arg1 + 0xa5)) == 0)
        uint64_t x9_8 = zx.q(*arg2)
        int64_t x8_11 = 0
        
        while (true)
            if ((x9_8.d & 1) == 0)
                if (x8_11 u>= x9_8 u>> 1)
                    break
            else if (x8_11 u>= *(arg2 + 8))
                break
            
            x8_11 += 1
        
        uint64_t x9_9 = zx.q(*arg3)
        int64_t x8_12 = 0
        
        while (true)
            if ((x9_9.d & 1) != 0)
                if (x8_12 u>= *(arg3 + 8))
                    break
            else if (x8_12 u>= x9_9 u>> 1)
                break
            
            x8_12 += 1
    else
        int64_t x22_1 = 0
        
        while (true)
            uint64_t x8_3 = zx.q(*arg2)
            void* x8_4
            
            if ((x8_3.d & 1) != 0)
                if (x22_1 u>= *(arg2 + 8))
                    break
                
                x8_4 = *(arg2 + 0x10)
            else
                x8_4 = &arg2[1]
                
                if (x22_1 u>= x8_3 u>> 1)
                    break
            
            int64_t* x0 = *(arg1 + 0x18)
            char x0_1 = (*(*x0 + 0x28))(x0, zx.q(*(x8_4 + x22_1)))
            void* x8_2 = &arg2[1]
            
            if ((zx.d(*arg2) & 1) != 0)
                x8_2 = *(arg2 + 0x10)
            
            *(x8_2 + x22_1) = x0_1
            x22_1 += 1
        
        int64_t x22_2 = 0
        
        while (true)
            uint64_t x8_7 = zx.q(*arg3)
            void* x8_8
            
            if ((x8_7.d & 1) != 0)
                if (x22_2 u>= *(arg3 + 8))
                    break
                
                x8_8 = *(arg3 + 0x10)
            else
                x8_8 = &arg3[1]
                
                if (x22_2 u>= x8_7 u>> 1)
                    break
            
            int64_t* x0_2 = *(arg1 + 0x18)
            char x0_3 = (*(*x0_2 + 0x28))(x0_2, zx.q(*(x8_8 + x22_2)))
            void* x8_6 = &arg3[1]
            
            if ((zx.d(*arg3) & 1) != 0)
                x8_6 = *(arg3 + 0x10)
            
            *(x8_6 + x22_2) = x0_3
            x22_2 += 1
    
    void* x1_2
    
    if ((zx.d(*arg2) & 1) != 0)
        *(arg2 + 8)
        x1_2 = *(arg2 + 0x10)
    else
        x1_2 = &arg2[1]
    
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*> >(arg1 + 0x10, x1_2)
    void* x1_3
    
    if ((zx.d(*arg3) & 1) != 0)
        *(arg3 + 8)
        x1_3 = *(arg3 + 0x10)
    else
        x1_3 = &arg3[1]
    
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*> >(arg1 + 0x10, x1_3)
    int128_t result_2
    result = result_2
    result_2:8.q = 0
    int128_t result_3 = result
    int128_t result_1
    result = result_1
    result_2.q = 0
    result_1.q = 0
    result_1:8.q = 0
    int128_t result_4 = result
    int128_t* x8_18 = *(arg1 + 0x60)
    void* var_80
    void* var_68
    
    if (x8_18 u>= *(arg1 + 0x68))
        result = std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >(
            arg1 + 0x58)
        
        if ((zx.d(result_4.b) & 1) != 0)
            result = operator delete(var_80)
            
            if ((zx.d(result_3.b) & 1) != 0)
                result = operator delete(var_68)
        else if ((zx.d(result_3.b) & 1) != 0)
            result = operator delete(var_68)
    else
        x8_18[1].q = var_68
        *x8_18 = result_3
        __builtin_memset(&result_3, 0, 0x30)
        result = result_4
        *(x8_18 + 0x28) = var_80
        *(x8_18 + 0x18) = result
        *(arg1 + 0x60) = &x8_18[3]

return result
