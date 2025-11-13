// 函数: _ZNSt6__ndk16__sortIRNS_6__lessINS_6vectorIhN5Botan16secure_allocatorIhEEEES6_EEPS6_EEvT0_SA_T_
// 地址: 0xf24314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x19 = arg2
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x20 = arg1
label_f24350:
void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x30) x23_1 = x20
label_f24354:
int64_t x8_1 = x19 - x23_1
int64_t x9_2 = (x8_1 s>> 3) * -0x5555555555555555
x20 = x23_1

if (x9_2 u<= 5)
    switch (x9_2)
        case 2
            void* x8_21 = *x20
            int64_t x12_14 = *(x20 + 8)
            
            if (x8_21 != x12_14)
                void* x10_15 = *(x19 - 0x18)
                int64_t x9_20 = 0
                
                while (true)
                    if (*(x19 - 0x10) - x10_15 != x9_20)
                        uint32_t x13_12 = zx.d(*(x10_15 + x9_20))
                        uint32_t x14_12 = zx.d(*(x8_21 + x9_20))
                        
                        if (x13_12 u>= x14_12)
                            if (x14_12 u< x13_12)
                                break
                            
                            x9_20 += 1
                            
                            if (x12_14 - x8_21 == x9_20)
                                break
                            
                            continue
                    
                    *x20 = x10_15
                    *(x19 - 0x18) = x8_21
                    int64_t x9_24 = *(x20 + 8)
                    *(x20 + 8) = *(x19 - 0x10)
                    *(x19 - 0x10) = x9_24
                    int64_t x9_25 = *(x20 + 0x10)
                    *(x20 + 0x10) = *(x19 - 8)
                    *(x19 - 8) = x9_25
                    break
        case 3
            return std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                x20, x20 + 0x18, x19 - 0x18, arg3) __tailcall
        case 4
            return std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                x20, x20 + 0x18, x20 + 0x30, x19 - 0x18, arg3) __tailcall
        case 5
            return sub_f24e8c(x20, x20 + 0x18, x20 + 0x30, x20 + 0x48, x19 - 0x18, arg3) __tailcall
else
    if (x8_1 s<= 0xa7)
        return std::__ndk1::__insertion_sort_3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
            x20, x19, arg3) __tailcall
    
    int64_t x9_4
    int64_t x8_6
    char* x10_1
    void* x23_2
    
    if (x8_1 s< 0x5da9)
        x23_2 = x20 + zx.q((x8_1.d & 0xffff) u/ 0x30) * 0x18
        arg1 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
            x20, x23_2, x19 - 0x18, arg3)
        x10_1 = *x23_2
        x8_6 = *(x23_2 + 8)
        x9_4 = *(x20 + 8)
        
        if (x10_1 != x8_6)
        label_f24400:
            char* x11_1 = *x20
            char* x12_1 = x10_1
            
            while (true)
                int64_t* x8_10
                void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                    0x18) x24_1
                
                if (x9_4 != x11_1)
                    uint32_t x13_1 = zx.d(*x11_1)
                    uint32_t x14_1 = zx.d(*x12_1)
                    
                    if (x13_1 u>= x14_1)
                        if (x14_1 u>= x13_1)
                            x12_1 = &x12_1[1]
                            x11_1 = &x11_1[1]
                            
                            if (x8_6 != x12_1)
                                continue
                        
                        if (x20 == x19 - 0x30)
                            break
                        
                        if (x10_1 != x8_6)
                            void* __offset(
                                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                                -0x30) x14_2 = x19 - 0x30
                            x8_10 = x19 - 0x18
                            
                            while (true)
                                int64_t* x12_2 = x8_10
                                x8_10 = x14_2
                                void* x14_3 = *x14_2
                                int64_t x13_2 = 0
                                
                                while (true)
                                    if (x12_2[-2] - x14_3 != x13_2)
                                        uint32_t x16_1 = zx.d(*(x14_3 + x13_2))
                                        uint32_t x17_1 = zx.d(x10_1[x13_2])
                                        
                                        if (x16_1 u>= x17_1)
                                            if (x17_1 u< x16_1)
                                                break
                                            
                                            x13_2 += 1
                                            
                                            if (x8_6 - x10_1 == x13_2)
                                                break
                                            
                                            continue
                                    
                                    int64_t x9_10 = *x20
                                    *x20 = x14_3
                                    arg1 = zx.q(arg1.d + 1)
                                    *x8_10 = x9_10
                                    int64_t x10_7 = *(x20 + 8)
                                    *(x20 + 8) = x12_2[-2]
                                    x12_2[-2] = x10_7
                                    int64_t x10_8 = *(x20 + 0x10)
                                    *(x20 + 0x10) = x12_2[-1]
                                    x12_2[-1] = x10_8
                                    x24_1 = x20 + 0x18
                                    
                                    if (x24_1 u>= x8_10)
                                        goto label_f246a4
                                    
                                    goto label_f246ec
                                
                                x14_2 = x8_10 - 0x18
                                
                                if (x20 == x14_2)
                                    break
                        
                        break
                
                x8_10 = x19 - 0x18
                x24_1 = x20 + 0x18
                
                if (x24_1 u< x8_10)
                label_f246ec:
                    char* x10_9 = *x23_2
                    int64_t x12_9 = *(x23_2 + 8)
                    
                    if (x10_9 == x12_9)
                    label_f24914:
                        
                        while (true)
                            nop
                    else
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x9_13 = x20
                        
                        while (true)
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* 
                                x11_8 = x9_13
                            x9_13 = x24_1
                        label_f24718:
                            char* x14_9 = *x9_13
                            char* x15_6 = x10_9
                            
                            while (true)
                                if (*(x11_8 + 0x20) != x14_9)
                                    uint32_t x16_6 = zx.d(*x14_9)
                                    uint32_t x17_5 = zx.d(*x15_6)
                                    
                                    if (x16_6 u>= x17_5)
                                        if (x17_5 u< x16_6)
                                            break
                                        
                                        x15_6 = &x15_6[1]
                                        x14_9 = &x14_9[1]
                                        
                                        if (x12_9 == x15_6)
                                            break
                                        
                                        continue
                                
                                x11_8 = x9_13
                                x9_13 += 0x18
                                goto label_f24718
                            
                        label_f24758:
                            void* x14_10 = x8_10[-3]
                            int64_t i = 0
                            
                            while (x8_10[-2] - x14_10 != i)
                                uint32_t x17_6 = zx.d(*(x14_10 + i))
                                uint32_t x1_2 = zx.d(x10_9[i])
                                
                                if (x17_6 u< x1_2)
                                    break
                                
                                if (x1_2 u< x17_6)
                                    x8_10 = &x8_10[-3]
                                    goto label_f24758
                                
                                i += 1
                                
                                if (x12_9 - x10_9 == i)
                                    x8_10 = &x8_10[-3]
                                    goto label_f24758
                            
                            if (x9_13 u> &x8_10[-3])
                                break
                            
                            int64_t x10_10 = *x9_13
                            *x9_13 = x14_10
                            int64_t x12_11 = x8_10[-2]
                            x8_10[-3] = x10_10
                            int64_t x10_11 = *(x11_8 + 0x20)
                            *(x11_8 + 0x20) = x12_11
                            int64_t x11_9 = x8_10[-1]
                            
                            if (x23_2 == x9_13)
                                x23_2 = &x8_10[-3]
                            
                            x8_10[-2] = x10_11
                            int64_t x10_12 = *(x9_13 + 0x10)
                            *(x9_13 + 0x10) = x11_9
                            arg1 = zx.q(arg1.d + 1)
                            x24_1 = x9_13 + 0x18
                            x8_10[-1] = x10_12
                            x10_9 = *x23_2
                            x12_9 = *(x23_2 + 8)
                            x8_10 = &x8_10[-3]
                            
                            if (x10_9 == x12_9)
                                goto label_f24914
                        
                        x24_1 = x9_13
                        
                        if (x24_1 != x23_2)
                            goto label_f24808
                else
                label_f246a4:
                    
                    if (x24_1 != x23_2)
                    label_f24808:
                        void* x8_15 = *x24_1
                        int64_t x12_12 = *(x24_1 + 8)
                        
                        if (x8_15 != x12_12)
                            void* x10_13 = *x23_2
                            int64_t x9_14 = 0
                            
                            while (true)
                                if (*(x23_2 + 8) - x10_13 != x9_14)
                                    uint32_t x13_11 = zx.d(*(x10_13 + x9_14))
                                    uint32_t x14_11 = zx.d(*(x8_15 + x9_14))
                                    
                                    if (x13_11 u>= x14_11)
                                        if (x14_11 u< x13_11)
                                            break
                                        
                                        x9_14 += 1
                                        
                                        if (x12_12 - x8_15 == x9_14)
                                            break
                                        
                                        continue
                                
                                *x24_1 = x10_13
                                *x23_2 = x8_15
                                int64_t x9_15 = *(x24_1 + 8)
                                *(x24_1 + 8) = *(x23_2 + 8)
                                *(x23_2 + 8) = x9_15
                                int64_t x9_16 = *(x24_1 + 0x10)
                                *(x24_1 + 0x10) = *(x23_2 + 0x10)
                                *(x23_2 + 0x10) = x9_16
                                
                                if (arg1.d == 0xffffffff)
                                    goto label_f24860
                                
                                goto label_f248d0
                
                if (arg1.d == 0)
                label_f24860:
                    int32_t x0_3 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                        x20, x24_1, arg3)
                    x23_1 = x24_1 + 0x18
                    
                    if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                            x23_1, x19, arg3).d & 1) != 0)
                        x19 = x24_1
                        
                        if ((x0_3 & 1) == 0)
                            goto label_f24350
                        
                        goto label_f24948
                    
                    if ((x0_3 & 1) != 0)
                        goto label_f24354
                
            label_f248d0:
                
                if (((x24_1 - x20) s>> 3) * -0x5555555555555555
                        s>= ((x19 - x24_1) s>> 3) * -0x5555555555555555)
                    std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                        x24_1 + 0x18, x19, arg3)
                    x19 = x24_1
                    goto label_f24350
                
                std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                    x20, x24_1, arg3)
                x23_1 = x24_1 + 0x18
                goto label_f24354
    else
        x23_2 = x20 + x8_1 u/ 0x30 * 0x18
        uint64_t x8_5 = x8_1 u/ 0x60 * 0x18
        arg1 = sub_f24e8c(x20, x20 + x8_5, x23_2, x23_2 + x8_5, x19 - 0x18, arg3)
        x10_1 = *x23_2
        x8_6 = *(x23_2 + 8)
        x9_4 = *(x20 + 8)
        
        if (x10_1 != x8_6)
            goto label_f24400
    char* x8_11 = *(x19 - 0x18)
    int64_t x10_2 = *(x19 - 0x10)
    x23_1 = x20 + 0x18
    
    if (x8_11 == x10_2)
    label_f244f8:
        void* x10_3
        int64_t x14_5
        
        while (true)
            if (x23_1 == x19 - 0x18)
                return 
            
            x10_3 = *x23_1
            x14_5 = *(x23_1 + 8)
            
            if (x10_3 != x14_5)
                break
            
        label_f244f0:
            x23_1 += 0x18
        
        void* x12_4 = *x20
        int64_t x11_4 = 0
        
        while (true)
            if (x9_4 - x12_4 != x11_4)
                uint32_t x15_3 = zx.d(*(x12_4 + x11_4))
                uint32_t x16_2 = zx.d(*(x10_3 + x11_4))
                
                if (x15_3 u>= x16_2)
                    if (x16_2 u< x15_3)
                        goto label_f244f0
                    
                    x11_4 += 1
                    
                    if (x14_5 - x10_3 == x11_4)
                        goto label_f244f0
                    
                    continue
            
            *x23_1 = x8_11
            *(x19 - 0x18) = x10_3
            int64_t x9_5 = *(x23_1 + 8)
            *(x23_1 + 8) = *(x19 - 0x10)
            *(x19 - 0x10) = x9_5
            int64_t x9_6 = *(x23_1 + 0x10)
            *(x23_1 + 0x10) = *(x19 - 8)
            x23_1 += 0x18
            *(x19 - 8) = x9_6
            break
    else
        char* x11_3 = *x20
        char* x12_3 = x8_11
        
        while (x9_4 != x11_3)
            uint32_t x13_3 = zx.d(*x11_3)
            uint32_t x14_4 = zx.d(*x12_3)
            
            if (x13_3 u< x14_4)
                break
            
            if (x14_4 u< x13_3)
                goto label_f244f8
            
            x12_3 = &x12_3[1]
            x11_3 = &x11_3[1]
            
            if (x10_2 == x12_3)
                goto label_f244f8
    
    if (x23_1 != x19 - 0x18)
        int64_t* x8_14 = x19 - 0x18
        
        while (true)
            int64_t x14_7 = *(x20 + 8)
            char* x9_7
            int64_t x10_4
            
            while (true)
                x9_7 = *x23_1
                x10_4 = *(x23_1 + 8)
                
                if (x9_7 != x10_4)
                    break
                
            label_f24588:
                x23_1 += 0x18
            
            char* x11_5 = *x20
            char* x13_5 = x9_7
            char* x12_5 = x11_5
            
            while (true)
                if (x14_7 != x12_5)
                    uint32_t x15_4 = zx.d(*x12_5)
                    uint32_t x16_3 = zx.d(*x13_5)
                    
                    if (x15_4 u>= x16_3)
                        if (x16_3 u< x15_4)
                            goto label_f24588
                        
                        x13_5 = &x13_5[1]
                        x12_5 = &x12_5[1]
                        
                        if (x10_4 == x13_5)
                            goto label_f24588
                        
                        continue
                
                void* x10_6 = &x8_14[-3]
                void* x13_6 = *x10_6
                void* x12_7 = x10_6 + 8
                int64_t x16_4 = *x12_7
                
                if (x13_6 != x16_4)
                    void* x17_2 = x10_6
                label_f245f8:
                    int64_t x15_5 = 0
                    x10_6 = x17_2
                    
                    while (true)
                        if (x14_7 - x11_5 != x15_5)
                            uint32_t x17_3 = zx.d(x11_5[x15_5])
                            arg1 = zx.q(*(x13_6 + x15_5))
                            
                            if (x17_3 u>= arg1.d)
                                if (arg1.d u< x17_3)
                                    break
                                
                                x15_5 += 1
                                
                                if (x16_4 - x13_6 == x15_5)
                                    break
                                
                                continue
                        
                        x17_2 = x10_6 - 0x18
                        x13_6 = *x17_2
                        x12_7 = x10_6 - 0x10
                        x16_4 = *x12_7
                        x8_14 = x10_6
                        
                        if (x13_6 != x16_4)
                            goto label_f245f8
                        
                        x8_14 = x10_6
                        x10_6 = x17_2
                        goto label_f24658
                
            label_f24658:
                
                if (x23_1 u>= x10_6)
                    goto label_f24354
                
                *x23_1 = x13_6
                *x10_6 = x9_7
                int64_t x11_6 = *(x23_1 + 8)
                *(x23_1 + 8) = *x12_7
                *x12_7 = x11_6
                int64_t x11_7 = *(x23_1 + 0x10)
                *(x23_1 + 0x10) = x8_14[-1]
                x8_14[-1] = x11_7
                x23_1 += 0x18
                x8_14 = x10_6
                break

label_f24948:
