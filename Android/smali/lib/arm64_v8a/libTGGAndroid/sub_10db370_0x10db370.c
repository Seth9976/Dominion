// 函数: sub_10db370
// 地址: 0x10db370
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
    uint32_t x8_10
    int16_t x8_13
    int16_t x8_14
    
    if (zx.d(arg6) u> 4)
        *arg1 = 0x4000302
    else
        switch (arg6)
            case 0
                SystemHintOp_BTI()
                x9_6 = 0x4000203
            label_10db760:
                uint32_t x8_28 = zx.d(arg5)
                *arg1 = x9_6
                
                if (x8_28 != 0 && x8_28 != 2)
                    if (x8_28 != 1)
                        *arg1 = 0x4000302
                    else if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(
                            arg2, 0, 1)
            case 1
                SystemHintOp_BTI()
                x8_10 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 4
                
                if (x8_10 == 2)
                label_10db588:
                    x8_13 = 0x201
                    goto label_10db664
                
                if (x8_10 == 1)
                label_10db4b8:
                    x8_14 = 2
                    goto label_10db634
                
            label_10db520:
                
                if (x8_10 != 0)
                    *arg1 = 0x4000302
                else
                    *(arg1 + 1) = 2
            case 2
                SystemHintOp_BTI()
                uint32_t x8_11 = zx.d(arg5)
                *arg1 = 2
                arg1[3] = 3
                
                if (x8_11 == 2)
                    x8_13 = 0x104
                label_10db664:
                    *(arg1 + 1) = x8_13
                    
                    if (x25 != 0)
                        uint64_t x8_16 = zx.q(*arg2)
                        
                        if ((x8_16.d & 1) != 0)
                            int64_t x9_11 = *(arg2 + 0x10)
                            int64_t x8_21 = *(arg2 + 8) - 1
                            *(arg2 + 8) = x8_21
                            *(x9_11 + (x8_21 << 2)) = 0
                        else
                            *arg2 = (((x8_16 u>> 1) - 1).d << 1).b
                            *(arg2 + (((x8_16 u>> 1) - 1) << 2) + 4) = 0
                else
                    if (x8_11 == 1)
                        x8_14 = 0x400
                        goto label_10db634
                    
                    if (x8_11 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x400
            case 3
                SystemHintOp_BTI()
                x8_10 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 4
                
                if (x8_10 == 2)
                    goto label_10db588
                
                if (x8_10 == 1)
                    goto label_10db4b8
                
                goto label_10db520
            case 4
                SystemHintOp_BTI()
                uint32_t x8_12 = zx.d(arg5)
                *arg1 = 2
                arg1[3] = 4
                
                if (x8_12 == 2)
                    x8_14 = 0x300
                label_10db634:
                    *(arg1 + 1) = x8_14
                    
                    if ((x25 & 1) == 0)
                        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                            arg2.d) __tailcall
                else
                    if (x8_12 == 1)
                        x8_13 = 0x103
                        goto label_10db664
                    
                    if (x8_12 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 3
else if (x8_3 != 0)
    *arg1 = 0x4000302
else
    if (x25 != 0)
        uint32_t x8_4 = zx.d(*arg2)
        void* x11_1 = *(arg2 + 0x10)
        int32_t temp0_1 = x8_4 & 1
        void* x8_6
        
        if (temp0_1 == 0)
            x8_6 = &arg2[4 + (zx.q(x8_4 u>> 1) << 2)]
        else
            x8_6 = x11_1 + (*(arg2 + 8) << 2)
        
        void* x1
        
        if (temp0_1 == 0)
            x1 = &arg2[0x10]
        else
            x1 = x11_1 + 0xc
        
        void* x23_1
        
        if (temp0_1 == 0)
            x23_1 = &arg2[4]
        else
            x23_1 = x11_1
        
        if (x1 != x8_6)
            if (x23_1 + 4 == x1)
                int32_t x26_1 = *x23_1
                size_t x24_1 = x8_6 - x1
                
                if (x8_6 != x1)
                    memmove(x23_1, x1, x24_1)
                
                *(x23_1 + x24_1) = x26_1
            else if (x1 + 4 == x8_6)
                int32_t x24_2 = *(x8_6 - 4)
                size_t x2_1 = x8_6 - 4 - x23_1
                
                if (x8_6 - 4 != x23_1)
                    memmove(x8_6 - x2_1, x23_1, x2_1)
                
                *x23_1 = x24_2
            else
                int64_t x11_2 = x1 - x23_1
                int64_t i_4 = x11_2 s>> 2
                int64_t i = (x8_6 - x1) s>> 2
                
                if (i_4 != i)
                    int64_t i_2 = i_4
                    
                    do
                        int64_t i_6 = i_2
                        i_2 = i
                        i = i_6 - i_6 s/ i * i_2
                    while (i != 0)
                    
                    if (i_2 != 0)
                        void* x10_7 = x23_1 + (i_2 << 2)
                        
                        do
                            x10_7 -= 4
                            int32_t x11_4 = *x10_7
                            void* x14_1 = x10_7 + (i_4 << 2)
                            void* x13_3 = x10_7
                            void* x12_3
                            
                            do
                                x12_3 = x14_1
                                int32_t x15_1 = *x14_1
                                int64_t x14_3 = (x8_6 - x14_1) s>> 2
                                
                                if (i_4 s< x14_3)
                                    x14_1 = x12_3 + (i_4 << 2)
                                else
                                    x14_1 = x23_1 + ((i_4 - x14_3) << 2)
                                
                                *x13_3 = x15_1
                                x13_3 = x12_3
                            while (x14_1 != x10_7)
                            
                            *x12_3 = x11_4
                        while (x10_7 != x23_1)
                else
                    void* x8_7
                    
                    if (x11_2 - 4 u>= 0x1c)
                        if (x23_1 u< x1 + ((x11_2 - 4) & 0xfffffffffffffffc) + 4)
                            x8_7 = x1
                        
                        if (x23_1 u< x1 + ((x11_2 - 4) & 0xfffffffffffffffc) + 4
                                && x1 u< x23_1 + ((x11_2 - 4) & 0xfffffffffffffffc) + 4)
                            goto label_10db728
                        
                        int64_t i_5 = (((x11_2 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                        int64_t x12_5 = i_5 << 2
                        void* x11_6 = x23_1 + 0x10
                        x8_7 = x1 + x12_5
                        x23_1 += x12_5
                        void* x12_6 = x1 + 0x10
                        int64_t i_3 = i_5
                        int64_t i_1
                        
                        do
                            int128_t v0 = *(x11_6 - 0x10)
                            int128_t v3 = *x11_6
                            int128_t v2 = *x12_6
                            i_1 = i_3
                            i_3 -= 8
                            *(x11_6 - 0x10) = *(x12_6 - 0x10)
                            *x11_6 = v2
                            *(x12_6 - 0x10) = v0
                            *x12_6 = v3
                            x11_6 += 0x20
                            x12_6 += 0x20
                        while (i_1 != 8)
                        
                        if (((x11_2 - 4) u>> 2) + 1 != i_5)
                            goto label_10db728
                    else
                        x8_7 = x1
                    label_10db728:
                        
                        do
                            int32_t x10_10 = *x23_1
                            *x23_1 = *x8_7
                            x23_1 += 4
                            *x8_7 = x10_10
                            x8_7 += 4
                        while (x1 != x23_1)
    
    uint32_t x8_30
    int16_t x8_32
    int16_t x8_33
    
    if (zx.d(arg6) u> 4)
        *arg1 = 0x4000302
    else
        switch (arg6)
            case 0
                SystemHintOp_BTI()
                x9_6 = 0x2000403
                goto label_10db760
            case 1
                SystemHintOp_BTI()
                uint32_t x8_29 = zx.d(arg5)
                *arg1 = 3
                arg1[3] = 2
                
                if (x8_29 == 2)
                    x8_32 = 0x401
                label_10db8bc:
                    *(arg1 + 1) = x8_32
                    
                    if (x25 != 0)
                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::erase(
                            arg2, 0)
                else
                    if (x8_29 == 1)
                        x8_33 = 4
                        goto label_10db8dc
                    
                    if (x8_29 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 4
            case 2
                SystemHintOp_BTI()
                x8_30 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 3
                
                if (x8_30 == 2)
                label_10db898:
                    x8_32 = 0x102
                    goto label_10db8bc
                
                if (x8_30 != 1)
                label_10db860:
                    
                    if (x8_30 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x200
                else
                    if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(
                            arg2, 0, 1)
                    
                    *(arg1 + 1) = 0x200
            case 3
                SystemHintOp_BTI()
                uint32_t x8_31 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 2
                
                if (x8_31 == 2)
                    x8_33 = 3
                label_10db8dc:
                    *(arg1 + 1) = x8_33
                    
                    if ((x25 & 1) == 0)
                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(
                            arg2, 0, 1)
                else
                    if (x8_31 == 1)
                        x8_32 = 0x301
                        goto label_10db8bc
                    
                    if (x8_31 != 0)
                        *arg1 = 0x4000302
                    else
                        *(arg1 + 1) = 0x300
            case 4
                SystemHintOp_BTI()
                x8_30 = zx.d(arg5)
                *arg1 = 4
                arg1[3] = 3
                
                if (x8_30 == 2)
                    goto label_10db898
                
                if (x8_30 != 1)
                    goto label_10db860
                
                x8_33 = 0x200
                goto label_10db8dc
