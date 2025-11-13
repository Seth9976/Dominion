// 函数: sub_f07e0c
// 地址: 0xf07e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = _ReadMSR(tpidr_el0)
void* var_178 = arg1 + 0x28
int64_t x12_1 = *(x12 + 0x28)
int64_t var_100
uint64_t name_2 = &var_100 | 1
int128_t var_140
void* file_1 = &var_140 | 1
uint64_t result

while (true)
    DIR* dirp = *(arg1 + 8)
    int32_t result_1
    int16_t var_118
    void* var_108
    int32_t x23_1
    
    if (dirp != 0)
        uint64_t name_1
        DIR* var_e8
        int128_t var_e0
        struct dirent64* x0_1
        
        while (true)
            x0_1 = readdir(dirp)
            
            if (x0_1 != 0)
                break
            
            closedir(*(arg1 + 8))
            uint32_t x8_3 = zx.d(*(arg1 + 0x10))
            *(arg1 + 8) = 0
            
            if ((x8_3 & 1) != 0)
                operator delete(*(arg1 + 0x20))
            
            *(arg1 + 0x10) = 0
            DIR* x9_2 = var_e8
            int64_t var_e2
            *(arg1 + 0x18) = var_e2
            *(arg1 + 0x12) = x9_2
            int64_t x8_5 = *(arg1 + 0x50)
            *(arg1 + 0x20) = 0
            
            if (x8_5 != 0)
                while (true)
                    dirp = *(arg1 + 8)
                    
                    if (dirp != 0)
                        break
                    
                    *(*(arg1 + 0x30) + ((*(arg1 + 0x48) u/ 0xaa) << 3))
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_100)
                    int64_t x8_9 = *(arg1 + 0x48)
                    void* x9_6 = *(*(arg1 + 0x30) + ((x8_9 u/ 0xaa) << 3))
                    int64_t x10_6 = x8_9 u% 0xaa
                    
                    if ((zx.d(*(x9_6 + x10_6 * 0x18)) & 1) != 0)
                        operator delete(*(x9_6 + x10_6 * 0x18 + 0x10))
                        x8_9 = *(arg1 + 0x48)
                    
                    int64_t x9_8 = *(arg1 + 0x50) - 1
                    *(arg1 + 0x48) = x8_9 + 1
                    *(arg1 + 0x50) = x9_8
                    
                    if (x8_9 + 1 u>= 0x154)
                        operator delete(**(arg1 + 0x30))
                        int64_t x9_10 = *(arg1 + 0x48) - 0xaa
                        *(arg1 + 0x30) += 8
                        *(arg1 + 0x48) = x9_10
                    
                    char* name
                    
                    if ((zx.d(var_100.b) & 1) == 0)
                        name = name_2
                    else
                        name = name_1
                    
                    DIR* x0_7 = opendir(name)
                    
                    if (x0_7 != 0)
                        var_e8 = x0_7
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_e2:2)
                        uint32_t x9_12 = zx.d(*(arg1 + 0x10))
                        *(arg1 + 8) = var_e8
                        
                        if ((x9_12 & 1) != 0)
                            operator delete(*(arg1 + 0x20))
                        
                        int64_t var_d0
                        *(arg1 + 0x20) = var_d0
                        *(arg1 + 0x10) = var_e0
                    
                    if ((zx.d(var_100.b) & 1) != 0)
                        operator delete(name_1)
                    
                    if (*(arg1 + 0x50) == 0)
                        goto label_f07ed0
            else
            label_f07ed0:
                dirp = *(arg1 + 8)
            
            if (dirp == 0)
                goto label_f07e9c
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_118)
        
        if (x0_1 == 0)
            goto label_f07ea8
        
        size_t x0_13 = strlen(&x0_1->d_name)
        
        if (x0_13 u>= -0x10)
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
        else
            size_t var_f8
            uint64_t name_5
            
            if (x0_13 u>= 0x17)
                uint64_t x0_14 = (x0_13 + 0x10) & 0xfffffffffffffff0
                uint64_t name_3 = operator new(x0_14)
                name_5 = name_3
                var_f8 = x0_13
                name_1 = name_3
                var_100 = x0_14 | 1
                memcpy(name_5, &x0_1->d_name, x0_13)
            else
                name_5 = name_2
                var_100.b = (x0_13.d << 1).b
                
                if (x0_13 != 0)
                    memcpy(name_5, &x0_1->d_name, x0_13)
            
            *(name_5 + x0_13) = 0
            uint64_t x10_7 = zx.q(var_100.b)
            int32_t x9_13 = x10_7.d & 1
            size_t x10_8 = x10_7 u>> 1
            size_t x11_3
            
            x11_3 = x9_13 == 0 ? x10_8 : var_f8
            
            if (x11_3 == 1)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_100, 0, -ffffffffffffffff, &data_725cf2) == 0)
                label_f081a0:
                    x23_1 = 2
                label_f08348:
                    
                    if ((zx.d(var_100.b) & 1) == 0)
                        goto label_f07eb0
                    
                    operator delete(name_1)
                    goto label_f07eb0
                
                uint64_t x10_9 = zx.q(var_100.b)
                size_t x8_26
                
                if ((zx.d(x10_9.b) & 1) == 0)
                    x8_26 = x10_9 u>> 1
                else
                    x8_26 = var_f8
                
                if (x8_26 == 2)
                    goto label_f0814c
                
                goto label_f08154
            
            size_t x8_27
            
            if ((x9_13 & 0xff) == 0)
                x8_27 = x10_8
            else
                x8_27 = var_f8
            
            if (x8_27 == 2)
            label_f0814c:
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_100, 0, -ffffffffffffffff, 0x7971fb) == 0)
                    goto label_f081a0
                
                goto label_f08154
            
        label_f08154:
            uint64_t x8_28 = zx.q(var_118.b)
            __builtin_memset(&var_e8, 0, 0x18)
            int32_t temp0_1 = x8_28.d & 1
            size_t x28_2
            size_t var_110
            
            if (temp0_1 == 0)
                x28_2 = x8_28 u>> 1
            else
                x28_2 = var_110
            void* x1_4
            
            if (temp0_1 == 0)
                x1_4 = &var_118:1
            else
                x1_4 = var_108
            
            if (x28_2 + 1 u< -0x10)
                int64_t fp_2
                
                if (x28_2 + 1 u>= 0x17)
                    uint64_t x23_2 = (x28_2 + 0x11) & 0xfffffffffffffff0
                    int64_t x0_21 = operator new(x23_2)
                    fp_2 = x0_21
                    var_e0.q = x28_2
                    var_e0:8.q = x0_21
                    var_e8 = x23_2 | 1
                    memcpy(fp_2, x1_4, x28_2)
                else
                    fp_2 = &var_e8 | 1
                    var_e8.b = (x28_2.d << 1).b
                    
                    if (x28_2 != 0)
                        memcpy(fp_2, x1_4, x28_2)
                
                *(fp_2 + x28_2) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_e8, &data_72942e)
                uint64_t name_4
                
                if ((zx.d(var_100.b) & 1) == 0)
                    name_4 = name_2
                else
                    name_4 = name_1
                
                int128_t* x0_25
                int128_t v0_2
                x0_25, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_e8, name_4)
                void* file_2 = x0_25[1].q
                var_140 = *x0_25
                __builtin_memset(x0_25, 0, 0x18)
                
                if ((zx.d(var_e8.b) & 1) != 0)
                    operator delete(var_e0:8.q)
                
                void* file_3
                
                if ((zx.d(var_140.b) & 1) == 0)
                    file_3 = file_1
                else
                    file_3 = file_2
                
                if (lstat(file_3, &var_e8) == 0xffffffff)
                    x23_1 = 2
                else
                    int32_t x8_38 = var_e0:8.d
                    int32_t x9_18 = x8_38 & 0xf000
                    
                    if (x9_18 != 0x8000)
                        if (x9_18 == 0x4000)
                            int64_t x8_39 = *(arg1 + 0x30)
                            int64_t x9_19 = *(arg1 + 0x38)
                            int64_t x12_6
                            
                            if (x9_19 == x8_39)
                                x12_6 = 0
                            else
                                x12_6 = ((x9_19 - x8_39) s>> 3) * 0xaa - 1
                            
                            int64_t x10_14 = *(arg1 + 0x50) + *(arg1 + 0x48)
                            
                            if (x12_6 == x10_14)
                                std::__ndk1::deque<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__add_back_capacity()
                                x8_39 = *(arg1 + 0x30)
                                x9_19 = *(arg1 + 0x38)
                                x10_14 = *(arg1 + 0x48) + *(arg1 + 0x50)
                            
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                * x0_29
                            
                            if (x9_19 == x8_39)
                                x0_29 = nullptr
                            else
                                x0_29 = *(x8_39 + ((x10_14 u/ 0xaa) << 3)) + x10_14 u% 0xaa * 0x18
                            
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                x0_29)
                            *(arg1 + 0x50) += 1
                        
                        x23_1 = 0
                    else if ((x8_38 & 4) == 0)
                        x23_1 = 0
                    else
                        void* file
                        
                        if ((zx.d(var_140.b) & 1) == 0)
                            file = file_1
                        else
                            file = file_2
                        
                        int32_t result_2 = open(file, 0x100)
                        
                        if ((result_2 & 0x80000000) != 0)
                            x23_1 = 0
                        else
                            x23_1 = 1
                            result_1 = result_2
                
                if ((zx.d(var_140.b) & 1) != 0)
                    operator delete(file_2)
                
                goto label_f08348
            
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
    label_f07e9c:
        int64_t var_120_1 = 0
        var_118 = 0
        var_108 = nullptr
    label_f07ea8:
        x23_1 = 3
    label_f07eb0:
        
        if ((zx.d(var_118.b) & 1) != 0)
            operator delete(var_108)
        
        if (x23_1 == 1)
            result = zx.q(result_1)
        else if (x23_1 == 3)
            result = 0xffffffff
        else if (x23_1 == 0 || x23_1 == 2)
            continue
        
        if (x23_1 == 0 || x23_1 == 2)
            continue
        
        if (*(x12 + 0x28) == x12_1)
            break
    __stack_chk_fail()
    noreturn

return result
