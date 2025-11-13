// 函数: _ZNSt6__ndk16__sortIRNS_6__lessINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EEPS7_EEvT0_SB_T_
// 地址: 0xf51d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
    & x20 = arg3
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x21 = arg2
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19 = arg1

while (true)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x23_1 = x19
    
    while (true)
    label_f51de4:
        int64_t x8_2 = x21 - x23_1
        int64_t x9_3 = (x8_2 s>> 3) * -0x5555555555555555
        x19 = x23_1
        int128_t v0
        
        if (x9_3 u<= 5)
            switch (x9_3)
                case 2
                    uint64_t x8_51 = zx.q(*(x21 - 0x18))
                    uint64_t x9_39 = zx.q(*x19)
                    uint64_t x22_5
                    
                    if ((x9_39.d & 1) == 0)
                        x22_5 = x9_39 u>> 1
                    else
                        x22_5 = *(x19 + 8)
                    
                    uint64_t x23_3
                    
                    if ((x8_51.d & 1) == 0)
                        x23_3 = x8_51 u>> 1
                    else
                        x23_3 = *(x21 - 0x10)
                    
                    uint64_t x2_21
                    
                    x2_21 = x22_5 u< x23_3 ? x22_5 : x23_3
                    
                    if (x2_21 != 0)
                        void* x0_27
                        
                        if ((x8_51.d & 1) != 0)
                            x0_27 = *(x21 - 8)
                        else
                            x0_27 = x21 - 0x17
                        
                        void* __offset(
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x1) x1_21
                        
                        if ((x9_39.d & 1) != 0)
                            x1_21 = *(x19 + 0x10)
                        else
                            x1_21 = x19 + 1
                        
                        arg1, v0 = memcmp(x0_27, x1_21, x2_21)
                    
                    if (x2_21 == 0 || arg1.d == 0)
                        if (x23_3 u< x22_5)
                        label_f52764:
                            int64_t x8_55 = *(x19 + 0x10)
                            int128_t var_80_6 = *x19
                            v0 = *(x21 - 0x18)
                            *(x19 + 0x10) = *(x21 - 8)
                            *x19 = v0
                            *(x21 - 8) = x8_55
                            *(x21 - 0x18) = var_80_6
                    else if ((arg1.d & 0x80000000) != 0)
                        goto label_f52764
                case 3
                    return std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                        x19, x19 + 0x18, x21 - 0x18, x20) __tailcall
                case 4
                    return std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                        x19, x19 + 0x18, x19 + 0x30, x21 - 0x18, x20) __tailcall
                case 5
                    return sub_f52ce0(x19, x19 + 0x18, x19 + 0x30, x19 + 0x48, x21 - 0x18, x20)
                        __tailcall
        else
            if (x8_2 s<= 0xa7)
                return std::__ndk1::__insertion_sort_3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x19, x21, x20) __tailcall
            
            int128_t* x23_2
            
            if (x8_2 s< 0x5da9)
                x23_2 = x19 + zx.q((x8_2.d & 0xffff) u/ 0x30) * 0x18
                arg1, v0 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x19, x23_2, x21 - 0x18, x20)
            else
                x23_2 = x19 + x8_2 u/ 0x30 * 0x18
                uint64_t x8_6 = x8_2 u/ 0x60 * 0x18
                arg1, v0 = sub_f52ce0(x19, x19 + x8_6, x23_2, x23_2 + x8_6, x21 - 0x18, x20)
            
            uint64_t x22_1 = zx.q(*x23_2)
            uint64_t x28_1 = zx.q(*x19)
            uint64_t x27_1
            
            if ((x22_1.d & 1) == 0)
                x27_1 = x22_1 u>> 1
            else
                x27_1 = *(x23_2 + 8)
            
            uint64_t x26_1
            
            if ((x28_1.d & 1) == 0)
                x26_1 = x28_1 u>> 1
            else
                x26_1 = *(x19 + 8)
            
            int32_t x24_1 = arg1.d
            uint64_t x2_2
            
            x2_2 = x27_1 u< x26_1 ? x27_1 : x26_1
            
            if (x2_2 != 0)
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x1) x0_2
                
                if ((x28_1.d & 1) != 0)
                    x0_2 = *(x19 + 0x10)
                else
                    x0_2 = x19 + 1
                
                void* x1_2
                
                if ((x22_1.d & 1) != 0)
                    x1_2 = x23_2[1].q
                else
                    x1_2 = x23_2 + 1
                
                arg1, v0 = memcmp(x0_2, x1_2, x2_2)
            
            if (x2_2 != 0 && arg1.d != 0)
                if ((arg1.d & 0x80000000) != 0)
                    goto label_f51fb4
                
                goto label_f51ed8
            
            void* x25_3
            int128_t* x22_2
            
            if (x26_1 u>= x27_1)
            label_f51ed8:
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    -0x30) x8_13 = x21 - 0x30
                
                if ((x22_1.d & 1) != 0)
                    do
                        if (x19 == x8_13)
                        label_f522f8:
                            uint64_t x8_35 = zx.q(*(x21 - 0x18))
                            x23_1 = x19 + 0x18
                            uint64_t x20_6
                            
                            if ((x8_35.d & 1) == 0)
                                x20_6 = x8_35 u>> 1
                            else
                                x20_6 = *(x21 - 0x10)
                            
                            uint64_t x2_13
                            
                            x2_13 = x20_6 u< x26_1 ? x20_6 : x26_1
                            
                            if (x2_13 != 0)
                                void* __offset(
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                    0x1) x0_19
                                
                                if ((x28_1.d & 1) != 0)
                                    x0_19 = *(x19 + 0x10)
                                else
                                    x0_19 = x19 + 1
                                
                                void* __offset(
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                    -0x17) x1_13
                                
                                if ((x8_35.d & 1) == 0)
                                    x1_13 = x21 - 0x17
                                else
                                    x1_13 = *(x21 - 8)
                                
                                arg1, v0 = memcmp(x0_19, x1_13, x2_13)
                            
                            if (x2_13 == 0 || arg1.d == 0)
                                if (x26_1 u>= x20_6)
                                label_f52350:
                                    
                                    if (x23_1 == x21 - 0x18)
                                        goto label_f527b0
                                    
                                    if ((x28_1.d & 1) != 0)
                                        while (true)
                                            uint64_t x8_37 = zx.q(*x23_1)
                                            uint64_t x20_7
                                            
                                            if ((x8_37.d & 1) == 0)
                                                x20_7 = x8_37 u>> 1
                                            else
                                                x20_7 = *(x23_1 + 8)
                                            
                                            uint64_t x2_14
                                            
                                            x2_14 = x20_7 u< x26_1 ? x20_7 : x26_1
                                            
                                            if (x2_14 != 0)
                                                void* __offset(
                                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                    0x1) x1_14
                                                
                                                if ((x8_37.d & 1) != 0)
                                                    x1_14 = *(x23_1 + 0x10)
                                                else
                                                    x1_14 = x23_1 + 1
                                                
                                                arg1, v0 = memcmp(*(x19 + 0x10), x1_14, x2_14)
                                            
                                            if (x2_14 == 0 || arg1.d == 0)
                                                if (x26_1 u< x20_7)
                                                    break
                                            else if ((arg1.d & 0x80000000) != 0)
                                                break
                                            
                                            x23_1 += 0x18
                                            
                                            if (x23_1 == x21 - 0x18)
                                                return 
                                    else
                                        while (true)
                                            uint64_t x8_38 = zx.q(*x23_1)
                                            uint64_t x20_8
                                            
                                            if ((x8_38.d & 1) == 0)
                                                x20_8 = x8_38 u>> 1
                                            else
                                                x20_8 = *(x23_1 + 8)
                                            
                                            uint64_t x2_15
                                            
                                            x2_15 = x20_8 u< x26_1 ? x20_8 : x26_1
                                            
                                            if (x2_15 != 0)
                                                void* __offset(
                                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                    0x1) x1_15
                                                
                                                if ((x8_38.d & 1) != 0)
                                                    x1_15 = *(x23_1 + 0x10)
                                                else
                                                    x1_15 = x23_1 + 1
                                                
                                                arg1, v0 = memcmp(x19 + 1, x1_15, x2_15)
                                            
                                            if (x2_15 == 0 || arg1.d == 0)
                                                if (x26_1 u< x20_8)
                                                    break
                                            else if ((arg1.d & 0x80000000) != 0)
                                                break
                                            
                                            x23_1 += 0x18
                                            
                                            if (x23_1 == x21 - 0x18)
                                                return 
                                    
                                    int64_t x8_39 = *(x23_1 + 0x10)
                                    int128_t var_80_4 = *x23_1
                                    v0 = *(x21 - 0x18)
                                    *(x23_1 + 0x10) = *(x21 - 8)
                                    *x23_1 = v0
                                    x23_1 += 0x18
                                    *(x21 - 8) = x8_39
                                    *(x21 - 0x18) = var_80_4
                            else if ((arg1.d & 0x80000000) == 0)
                                goto label_f52350
                            
                            if (x23_1 == x21 - 0x18)
                                goto label_f527b0
                            
                            void* x22_4 = x21 - 0x18
                            
                            while (true)
                                uint64_t x26_4 = zx.q(*x19)
                                uint64_t x25_4
                                
                                if ((x26_4.d & 1) == 0)
                                    x25_4 = x26_4 u>> 1
                                else
                                    x25_4 = *(x19 + 8)
                                
                                if ((x26_4.d & 1) != 0)
                                    while (true)
                                        uint64_t x8_44 = zx.q(*x23_1)
                                        uint64_t x20_10
                                        
                                        if ((x8_44.d & 1) == 0)
                                            x20_10 = x8_44 u>> 1
                                        else
                                            x20_10 = *(x23_1 + 8)
                                        
                                        uint64_t x2_17
                                        
                                        x2_17 = x20_10 u< x25_4 ? x20_10 : x25_4
                                        
                                        if (x2_17 != 0)
                                            void* __offset(
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                0x1) x1_17
                                            
                                            if ((x8_44.d & 1) != 0)
                                                x1_17 = *(x23_1 + 0x10)
                                            else
                                                x1_17 = x23_1 + 1
                                            
                                            arg1, v0 = memcmp(*(x19 + 0x10), x1_17, x2_17)
                                        
                                        if (x2_17 == 0 || arg1.d == 0)
                                            if (x25_4 u< x20_10)
                                                break
                                        else if ((arg1.d & 0x80000000) != 0)
                                            break
                                        
                                        x23_1 += 0x18
                                else
                                    while (true)
                                        uint64_t x8_43 = zx.q(*x23_1)
                                        uint64_t x20_9
                                        
                                        if ((x8_43.d & 1) == 0)
                                            x20_9 = x8_43 u>> 1
                                        else
                                            x20_9 = *(x23_1 + 8)
                                        
                                        uint64_t x2_16
                                        
                                        x2_16 = x20_9 u< x25_4 ? x20_9 : x25_4
                                        
                                        if (x2_16 != 0)
                                            void* __offset(
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                0x1) x1_16
                                            
                                            if ((x8_43.d & 1) != 0)
                                                x1_16 = *(x23_1 + 0x10)
                                            else
                                                x1_16 = x23_1 + 1
                                            
                                            arg1, v0 = memcmp(x19 + 1, x1_16, x2_16)
                                        
                                        if (x2_16 == 0 || arg1.d == 0)
                                            if (x25_4 u< x20_9)
                                                break
                                        else if ((arg1.d & 0x80000000) != 0)
                                            break
                                        
                                        x23_1 += 0x18
                                
                                void* x8_45 = x22_4 - 0x18
                                
                                if ((x26_4.d & 1) == 0)
                                    do
                                        x22_4 = x8_45
                                        uint64_t x8_46 = zx.q(*x8_45)
                                        uint64_t x20_11
                                        
                                        if ((x8_46.d & 1) == 0)
                                            x20_11 = x8_46 u>> 1
                                        else
                                            x20_11 = *(x22_4 + 8)
                                        
                                        uint64_t x2_18
                                        
                                        x2_18 = x20_11 u< x25_4 ? x20_11 : x25_4
                                        
                                        if (x2_18 != 0)
                                            void* x1_18
                                            
                                            if ((x8_46.d & 1) != 0)
                                                x1_18 = *(x22_4 + 0x10)
                                            else
                                                x1_18 = x22_4 + 1
                                            
                                            arg1, v0 = memcmp(x19 + 1, x1_18, x2_18)
                                        
                                        if (x2_18 == 0 || arg1.d == 0)
                                            if (x25_4 u>= x20_11)
                                                break
                                            
                                            arg1 = 0xffffffff
                                        
                                        x8_45 = x22_4 - 0x18
                                    while ((arg1.d & 0x80000000) != 0)
                                else
                                    do
                                        x22_4 = x8_45
                                        uint64_t x8_47 = zx.q(*x8_45)
                                        uint64_t x20_12
                                        
                                        if ((x8_47.d & 1) == 0)
                                            x20_12 = x8_47 u>> 1
                                        else
                                            x20_12 = *(x22_4 + 8)
                                        
                                        uint64_t x2_19
                                        
                                        x2_19 = x20_12 u< x25_4 ? x20_12 : x25_4
                                        
                                        if (x2_19 != 0)
                                            void* x1_19
                                            
                                            if ((x8_47.d & 1) != 0)
                                                x1_19 = *(x22_4 + 0x10)
                                            else
                                                x1_19 = x22_4 + 1
                                            
                                            arg1, v0 = memcmp(*(x19 + 0x10), x1_19, x2_19)
                                        
                                        if (x2_19 == 0 || arg1.d == 0)
                                            if (x25_4 u>= x20_12)
                                                break
                                            
                                            arg1 = 0xffffffff
                                        
                                        x8_45 = x22_4 - 0x18
                                    while ((arg1.d & 0x80000000) != 0)
                                
                                if (x23_1 u>= x22_4)
                                    break
                                
                                int64_t x8_48 = *(x23_1 + 0x10)
                                int128_t var_80_5 = *x23_1
                                v0 = *x22_4
                                *(x23_1 + 0x10) = *(x22_4 + 0x10)
                                *x23_1 = v0
                                x23_1 += 0x18
                                *(x22_4 + 0x10) = x8_48
                                *x22_4 = var_80_5
                            
                            x20 = arg3
                            goto label_f51de4
                        
                        x22_2 = x8_13
                        uint64_t x8_14 = zx.q(*x8_13)
                        uint64_t x25_2
                        
                        if ((x8_14.d & 1) == 0)
                            x25_2 = x8_14 u>> 1
                        else
                            x25_2 = *(x22_2 + 8)
                        
                        uint64_t x2_3
                        
                        x2_3 = x27_1 u< x25_2 ? x27_1 : x25_2
                        
                        if (x2_3 != 0)
                            void* x0_3
                            
                            if ((x8_14.d & 1) != 0)
                                x0_3 = x22_2[1].q
                            else
                                x0_3 = x22_2 + 1
                            
                            arg1, v0 = memcmp(x0_3, x23_2[1].q, x2_3)
                        
                        if (x2_3 == 0 || arg1.d == 0)
                            arg1 = zx.q(x27_1 u< x25_2 ? 1 : 0)
                            
                            if (x25_2 u< x27_1)
                                break
                        
                        x8_13 = x22_2 - 0x18
                    while ((arg1.d & 0x80000000) == 0)
                else
                    void* __offset(
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        -0x30) x8_12 = x21 - 0x30
                    
                    do
                        if (x19 == x8_12)
                            goto label_f522f8
                        
                        x22_2 = x8_12
                        uint64_t x8_15 = zx.q(*x8_12)
                        uint64_t x20_1
                        
                        if ((x8_15.d & 1) == 0)
                            x20_1 = x8_15 u>> 1
                        else
                            x20_1 = *(x22_2 + 8)
                        
                        uint64_t x2_4
                        
                        x2_4 = x27_1 u< x20_1 ? x27_1 : x20_1
                        
                        if (x2_4 != 0)
                            void* x0_4
                            
                            if ((x8_15.d & 1) != 0)
                                x0_4 = x22_2[1].q
                            else
                                x0_4 = x22_2 + 1
                            
                            arg1, v0 = memcmp(x0_4, x23_2 + 1, x2_4)
                        
                        if (x2_4 == 0 || arg1.d == 0)
                            arg1 = zx.q(x27_1 u< x20_1 ? 1 : 0)
                            
                            if (x20_1 u< x27_1)
                                break
                        
                        x8_12 = x22_2 - 0x18
                    while ((arg1.d & 0x80000000) == 0)
                
                int64_t x8_16 = *(x19 + 0x10)
                x24_1 += 1
                int128_t var_80_1 = *x19
                v0 = *x22_2
                *(x19 + 0x10) = x22_2[1].q
                *x19 = v0
                x22_2[1].q = x8_16
                *x22_2 = var_80_1
                x25_3 = x19 + 0x18
                
                if (x25_3 u< x22_2)
                    goto label_f52048
            else
            label_f51fb4:
                x22_2 = x21 - 0x18
                x25_3 = x19 + 0x18
                
                if (x25_3 u< x22_2)
                label_f52048:
                    
                    while (true)
                        uint64_t x27_2 = zx.q(*x23_2)
                        uint64_t x28_2
                        
                        if ((x27_2.d & 1) == 0)
                            x28_2 = x27_2 u>> 1
                        else
                            x28_2 = *(x23_2 + 8)
                        
                        if ((x27_2.d & 1) != 0)
                            while (true)
                                uint64_t x8_24 = zx.q(*x25_3)
                                uint64_t x20_3
                                
                                if ((x8_24.d & 1) == 0)
                                    x20_3 = x8_24 u>> 1
                                else
                                    x20_3 = *(x25_3 + 8)
                                
                                uint64_t x2_6
                                
                                x2_6 = x28_2 u< x20_3 ? x28_2 : x20_3
                                
                                int32_t x0_8
                                
                                if (x2_6 != 0)
                                    void* x0_7
                                    
                                    if ((x8_24.d & 1) != 0)
                                        x0_7 = *(x25_3 + 0x10)
                                    else
                                        x0_7 = x25_3 + 1
                                    
                                    x0_8, v0 = memcmp(x0_7, x23_2[1].q, x2_6)
                                
                                if (x2_6 == 0 || x0_8 == 0)
                                    if (x20_3 u>= x28_2)
                                        break
                                else if ((x0_8 & 0x80000000) == 0)
                                    break
                                
                                x25_3 += 0x18
                        else
                            while (true)
                                uint64_t x8_23 = zx.q(*x25_3)
                                uint64_t x20_2
                                
                                if ((x8_23.d & 1) == 0)
                                    x20_2 = x8_23 u>> 1
                                else
                                    x20_2 = *(x25_3 + 8)
                                
                                uint64_t x2_5
                                
                                x2_5 = x28_2 u< x20_2 ? x28_2 : x20_2
                                
                                int32_t x0_6
                                
                                if (x2_5 != 0)
                                    void* x0_5
                                    
                                    if ((x8_23.d & 1) != 0)
                                        x0_5 = *(x25_3 + 0x10)
                                    else
                                        x0_5 = x25_3 + 1
                                    
                                    x0_6, v0 = memcmp(x0_5, x23_2 + 1, x2_5)
                                
                                if (x2_5 == 0 || x0_6 == 0)
                                    if (x20_2 u>= x28_2)
                                        break
                                else if ((x0_6 & 0x80000000) == 0)
                                    break
                                
                                x25_3 += 0x18
                        
                        void* x8_25 = x22_2 - 0x18
                        
                        if ((x27_2.d & 1) == 0)
                            int32_t x0_9
                            
                            do
                                x22_2 = x8_25
                                uint64_t x8_26 = zx.q(*x8_25)
                                uint64_t x20_4
                                
                                if ((x8_26.d & 1) == 0)
                                    x20_4 = x8_26 u>> 1
                                else
                                    x20_4 = *(x22_2 + 8)
                                
                                uint64_t x2_7
                                
                                x2_7 = x28_2 u< x20_4 ? x28_2 : x20_4
                                
                                if (x2_7 != 0)
                                    void* x0_10
                                    
                                    if ((x8_26.d & 1) != 0)
                                        x0_10 = x22_2[1].q
                                    else
                                        x0_10 = x22_2 + 1
                                    
                                    x0_9, v0 = memcmp(x0_10, x23_2 + 1, x2_7)
                                
                                if (x2_7 == 0 || x0_9 == 0)
                                    x0_9 = x28_2 u< x20_4 ? 1 : 0
                                    
                                    if (x20_4 u< x28_2)
                                        break
                                
                                x8_25 = x22_2 - 0x18
                            while ((x0_9 & 0x80000000) == 0)
                        else
                            int32_t x0_11
                            
                            do
                                x22_2 = x8_25
                                uint64_t x8_27 = zx.q(*x8_25)
                                uint64_t x26_3
                                
                                if ((x8_27.d & 1) == 0)
                                    x26_3 = x8_27 u>> 1
                                else
                                    x26_3 = *(x22_2 + 8)
                                
                                uint64_t x2_8
                                
                                x2_8 = x28_2 u< x26_3 ? x28_2 : x26_3
                                
                                if (x2_8 != 0)
                                    void* x0_12
                                    
                                    if ((x8_27.d & 1) != 0)
                                        x0_12 = x22_2[1].q
                                    else
                                        x0_12 = x22_2 + 1
                                    
                                    x0_11, v0 = memcmp(x0_12, x23_2[1].q, x2_8)
                                
                                if (x2_8 == 0 || x0_11 == 0)
                                    x0_11 = x28_2 u< x26_3 ? 1 : 0
                                    
                                    if (x26_3 u< x28_2)
                                        break
                                
                                x8_25 = x22_2 - 0x18
                            while ((x0_11 & 0x80000000) == 0)
                        
                        if (x25_3 u> x22_2)
                            break
                        
                        int64_t x8_19 = *(x25_3 + 0x10)
                        x24_1 += 1
                        int128_t var_80_2 = *x25_3
                        v0 = *x22_2
                        
                        if (x23_2 == x25_3)
                            x23_2 = x22_2
                        
                        *(x25_3 + 0x10) = x22_2[1].q
                        *x25_3 = v0
                        x25_3 += 0x18
                        x22_2[1].q = x8_19
                        *x22_2 = var_80_2
            
            if (x25_3 != x23_2)
                uint64_t x8_28 = zx.q(*x25_3)
                uint64_t x9_20 = zx.q(*x23_2)
                uint64_t x22_3
                
                if ((x8_28.d & 1) == 0)
                    x22_3 = x8_28 u>> 1
                else
                    x22_3 = *(x25_3 + 8)
                
                uint64_t x20_5
                
                if ((x9_20.d & 1) == 0)
                    x20_5 = x9_20 u>> 1
                else
                    x20_5 = *(x23_2 + 8)
                
                uint64_t x2_9
                
                x2_9 = x22_3 u< x20_5 ? x22_3 : x20_5
                
                int32_t x0_14
                
                if (x2_9 != 0)
                    void* x0_13
                    
                    if ((x9_20.d & 1) != 0)
                        x0_13 = x23_2[1].q
                    else
                        x0_13 = x23_2 + 1
                    
                    void* x1_9
                    
                    if ((x8_28.d & 1) != 0)
                        x1_9 = *(x25_3 + 0x10)
                    else
                        x1_9 = x25_3 + 1
                    
                    x0_14, v0 = memcmp(x0_13, x1_9, x2_9)
                
                if (x2_9 == 0 || x0_14 == 0)
                    x20 = arg3
                    
                    if (x20_5 u< x22_3)
                    label_f52244:
                        int64_t x8_29 = *(x25_3 + 0x10)
                        x24_1 += 1
                        int128_t var_80_3 = *x25_3
                        v0 = *x23_2
                        *(x25_3 + 0x10) = x23_2[1].q
                        *x25_3 = v0
                        x23_2[1].q = x8_29
                        *x23_2 = var_80_3
                else
                    x20 = arg3
                    
                    if ((x0_14 & 0x80000000) != 0)
                        goto label_f52244
                
                if (x24_1 != 0)
                    goto label_f522d8
                
                goto label_f5229c
            
            x20 = arg3
            
            if (x24_1 != 0)
            label_f522d8:
                
                if (((x25_3 - x19) s>> 3) * -0x5555555555555555
                        s>= ((x21 - x25_3) s>> 3) * -0x5555555555555555)
                    arg1, v0 = std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                        x25_3 + 0x18, x21, x20)
                    x21 = x25_3
                    break
                
                arg1, v0 = std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x19, x25_3, x20)
                x23_1 = x25_3 + 0x18
                continue
            else
            label_f5229c:
                int32_t x0_16 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x19, x25_3, x20)
                x23_1 = x25_3 + 0x18
                arg1, v0 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
                    x23_1, x21, x20)
                
                if ((arg1.d & 1) != 0)
                    x21 = x25_3
                    
                    if ((x0_16 & 1) == 0)
                        break
                else
                    if ((x0_16 & 1) == 0)
                        goto label_f522d8
                    
                    continue
    label_f527b0:
        return 
