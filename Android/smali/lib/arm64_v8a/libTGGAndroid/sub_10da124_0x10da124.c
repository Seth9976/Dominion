// 函数: sub_10da124
// 地址: 0x10da124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25

if ((arg3 & 1) == 0)
    x25 = 0
else
    uint64_t x8_1 = zx.q(*arg2)
    uint64_t x8_2
    
    if ((x8_1.d & 1) == 0)
        x8_2 = x8_1 u>> 1
    else
        x8_2 = *(arg2 + 8)
    
    x25 = x8_2 == 4 ? 1 : 0

uint32_t x8_3 = zx.d(arg4)
int32_t x9_6

if (x8_3 == 1)
    uint32_t x8_9
    int16_t x8_14
    int16_t x8_15
    
    if (zx.d(arg6) u> 4)
        *arg1 = 0x4000302
    else
        switch (arg6)
            case 0
                SystemHintOp_BTI()
                x9_6 = 0x4000203
            label_10da51c:
                uint32_t x8_26 = zx.d(arg5)
                *arg1 = x9_6
                
                if (x8_26 != 0 && x8_26 != 2)
                    if (x8_26 != 1)
                        *arg1 = 0x4000302
                    else if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            arg2, 0, 1)
            case 1
                SystemHintOp_BTI()
                x8_9 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 4
                
                if (x8_9 == 2)
                label_10da334:
                    x8_14 = 0x201
                    goto label_10da40c
                
                if (x8_9 == 1)
                label_10da264:
                    x8_15 = 2
                    goto label_10da3dc
                
            label_10da2cc:
                
                if (x8_9 != 0)
                    *arg1 = 0x4000302
                else
                    *(arg1 + 1) = 2
            case 2
                SystemHintOp_BTI()
                uint32_t x8_10 = zx.d(arg5)
                *arg1 = 2
                arg1[3] = 3
                
                if (x8_10 == 2)
                    x8_14 = 0x104
                label_10da40c:
                    *(arg1 + 1) = x8_14
                    
                    if (x25 != 0)
                        uint64_t x8_17 = zx.q(*arg2)
                        
                        if ((x8_17.d & 1) != 0)
                            char* x9_9 = *(arg2 + 0x10)
                            int64_t x8_22 = *(arg2 + 8) - 1
                            *(arg2 + 8) = x8_22
                            x9_9[x8_22] = 0
                        else
                            *arg2 = (((x8_17 u>> 1) - 1).d << 1).b
                            arg2[x8_17 u>> 1] = 0
                else
                    if (x8_10 == 1)
                        x8_15 = 0x400
                        goto label_10da3dc
                    
                    if (x8_10 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x400
            case 3
                SystemHintOp_BTI()
                x8_9 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 4
                
                if (x8_9 == 2)
                    goto label_10da334
                
                if (x8_9 == 1)
                    goto label_10da264
                
                goto label_10da2cc
            case 4
                SystemHintOp_BTI()
                uint32_t x8_11 = zx.d(arg5)
                *arg1 = 2
                arg1[3] = 4
                
                if (x8_11 == 2)
                    x8_15 = 0x300
                label_10da3dc:
                    *(arg1 + 1) = x8_15
                    
                    if ((x25 & 1) == 0)
                        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            arg2.b) __tailcall
                else
                    if (x8_11 == 1)
                        x8_14 = 0x103
                        goto label_10da40c
                    
                    if (x8_11 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 3
else if (x8_3 != 0)
    *arg1 = 0x4000302
else
    if (x25 != 0)
        uint64_t x8_4 = zx.q(*arg2)
        void* x10_2 = *(arg2 + 0x10)
        int32_t temp0_1 = x8_4.d & 1
        void* x9_4
        
        if (temp0_1 == 0)
            x9_4 = &arg2[1 + (x8_4 u>> 1)]
        else
            x9_4 = x10_2 + *(arg2 + 8)
        
        void* x1
        
        if (temp0_1 == 0)
            x1 = &arg2[4]
        else
            x1 = x10_2 + 3
        
        void* x23_1
        
        if (temp0_1 != 0)
            x23_1 = x10_2
        else
            x23_1 = &arg2[1]
        
        if (x1 != x9_4)
            if (x23_1 + 1 == x1)
                char x26_1 = *x23_1
                size_t x24_1 = x9_4 - x1
                
                if (x9_4 != x1)
                    memmove(x23_1, x1, x24_1)
                
                *(x23_1 + x24_1) = x26_1
            else if (x1 + 1 == x9_4)
                char x24_2 = *(x9_4 - 1)
                size_t x2_1 = x9_4 - 1 - x23_1
                
                if (x9_4 - 1 != x23_1)
                    memmove(x9_4 - x2_1, x23_1, x2_1)
                
                *x23_1 = x24_2
            else
                void* i_6 = x1 - x23_1
                void* i = x9_4 - x1
                
                if (i_6 != i)
                    void* i_4 = i_6
                    
                    do
                        void* i_8 = i_4
                        i_4 = i
                        i = i_8 - i_8 s/ i * i_4
                    while (i != 0)
                    
                    if (i_4 != 0)
                        char* x10_5 = x23_1 + i_4
                        
                        do
                            x10_5 = &x10_5[-1]
                            char x11_4 = *x10_5
                            void* x14_1 = x10_5 + i_6
                            char* x13_2 = x10_5
                            char* x12_2
                            
                            do
                                x12_2 = x14_1
                                char x15_1 = *x14_1
                                void* x14_2 = x9_4 - x14_1
                                
                                if (i_6 s< x14_2)
                                    x14_1 = x12_2 + i_6
                                else
                                    x14_1 = x23_1 + i_6 - x14_2
                                
                                *x13_2 = x15_1
                                x13_2 = x12_2
                            while (x14_1 != x10_5)
                            
                            *x12_2 = x11_4
                        while (x10_5 != x23_1)
                else
                    void* x9_5 = x1
                    
                    if (i_6 u< 8)
                        goto label_10da4e4
                    
                    void* i_7
                    int128_t v0
                    
                    if (i_6 u>= 0x20)
                        i_7 = i_6 & 0xffffffffffffffe0
                        void* x9_10 = x23_1 + 0x10
                        void* x11_6 = x1 + 0x10
                        void* i_5 = i_7
                        void* i_1
                        
                        do
                            v0 = *(x9_10 - 0x10)
                            int128_t v3 = *x9_10
                            int128_t v2 = *x11_6
                            i_1 = i_5
                            i_5 -= 0x20
                            *(x9_10 - 0x10) = *(x11_6 - 0x10)
                            *x9_10 = v2
                            *(x11_6 - 0x10) = v0
                            *x11_6 = v3
                            x9_10 += 0x20
                            x11_6 += 0x20
                        while (i_1 != 0x20)
                        
                        if (i_6 != i_7)
                            if ((i_6 & 0x18) != 0)
                                goto label_10da48c
                            
                            x23_1 += i_7
                            x9_5 = x1 + i_7
                        label_10da4e4:
                            
                            do
                                char x10_7 = *x23_1
                                *x23_1 = *x9_5
                                x23_1 += 1
                                *x9_5 = x10_7
                                x9_5 += 1
                            while (x1 != x23_1)
                    else
                        i_7 = nullptr
                    label_10da48c:
                        void* x11_7 = i_6 & 0xfffffffffffffff8
                        void* x12_4 = x23_1 + i_7
                        void* x13_4 = x1 + i_7
                        x9_5 = x1 + x11_7
                        x23_1 += x11_7
                        void* i_3 = i_7 - x11_7
                        void* i_2
                        
                        do
                            v0.q = *x13_4
                            int128_t v1
                            v1.q = *x12_4
                            i_2 = i_3
                            i_3 += 8
                            *x12_4 = v0.q
                            x12_4 += 8
                            *x13_4 = v1.q
                            x13_4 += 8
                        while (i_2 != -8)
                        
                        if (i_6 != x11_7)
                            goto label_10da4e4
    
    uint32_t x8_28
    int16_t x8_30
    int16_t x8_31
    
    if (zx.d(arg6) u> 4)
        *arg1 = 0x4000302
    else
        switch (arg6)
            case 0
                SystemHintOp_BTI()
                x9_6 = 0x2000403
                goto label_10da51c
            case 1
                SystemHintOp_BTI()
                uint32_t x8_27 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 2
                
                if (x8_27 == 2)
                    x8_30 = 0x401
                label_10da678:
                    *(arg1 + 1) = x8_30
                    
                    if (x25 != 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::erase(
                            arg2, 0)
                else
                    if (x8_27 == 1)
                        x8_31 = 4
                        goto label_10da698
                    
                    if (x8_27 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 4
            case 2
                SystemHintOp_BTI()
                x8_28 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 3
                
                if (x8_28 == 2)
                label_10da654:
                    x8_30 = 0x102
                    goto label_10da678
                
                if (x8_28 != 1)
                label_10da61c:
                    
                    if (x8_28 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x200
                else
                    if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            arg2, 0, 1)
                    
                    *(arg1 + 1) = 0x200
            case 3
                SystemHintOp_BTI()
                uint32_t x8_29 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 2
                
                if (x8_29 == 2)
                    x8_31 = 3
                label_10da698:
                    *(arg1 + 1) = x8_31
                    
                    if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            arg2, 0, 1)
                else
                    if (x8_29 == 1)
                        x8_30 = 0x301
                        goto label_10da678
                    
                    if (x8_29 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x300
            case 4
                SystemHintOp_BTI()
                x8_28 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 3
                
                if (x8_28 == 2)
                    goto label_10da654
                
                if (x8_28 != 1)
                    goto label_10da61c
                
                x8_31 = 0x200
                goto label_10da698
