// 函数: _ZNSt6__ndk16__sortIRPFbRK16LeaderboardEntryS3_EPS1_EEvT0_S8_T_
// 地址: 0xbb23f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LeaderboardEntry* x19 = arg2
LeaderboardEntry* x20 = arg1

while (true)
    void* __offset(LeaderboardEntry, -0x18) fp_1 = x19 - 0x18
    void* __offset(LeaderboardEntry, 0x18) x25_1 = x20
    void* __offset(LeaderboardEntry, -0x18) var_80_1 = fp_1
    
    while (true)
    label_bb2440:
        int64_t x8_2 = x19 - x25_1
        int64_t x9_3 = (x8_2 s>> 3) * -0x5555555555555555
        x20 = x25_1
        void var_70
        
        if (x9_3 u<= 5)
            switch (x9_3)
                case 2
                    if (((*arg3)(fp_1, x20).d & 1) != 0)
                        int32_t x8_53 = *x20
                        XString::XString(&var_70)
                        int32_t x8_54 = *(x20 + 0x10)
                        *x20 = *(x19 - 0x18)
                        XString::operator=(x20 + 8)
                        *(x20 + 0x10) = *(x19 - 8)
                        *(x19 - 0x18) = x8_53
                        XString::operator=(x19 - 0x10)
                        *(x19 - 8) = x8_54
                        XString::~XString()
                case 3
                    std::__ndk1::__sort3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                        x20, x20 + 0x18, fp_1, arg3)
                case 4
                    std::__ndk1::__sort4<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                        x20, x20 + 0x18, x20 + 0x30, fp_1, arg3)
                case 5
                    sub_bb2e98(x20, x20 + 0x18, x20 + 0x30, x20 + 0x48, fp_1, arg3)
        else if (x8_2 s<= 0xa7)
            std::__ndk1::__insertion_sort_3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                x20, x19, arg3)
        else
            int32_t x0_1
            void* __offset(LeaderboardEntry, -0x18) x25_2
            
            if (x8_2 s< 0x5da9)
                x25_2 = x20 + zx.q((x8_2.d & 0xffff) u/ 0x30) * 0x18
                x0_1 = std::__ndk1::__sort3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                    x20, x25_2, fp_1, arg3)
            else
                x25_2 = x20 + x8_2 u/ 0x30 * 0x18
                uint64_t x8_6 = x8_2 u/ 0x60 * 0x18
                x0_1 = sub_bb2e98(x20, x20 + x8_6, x25_2, x25_2 + x8_6, fp_1, arg3)
            
            int32_t x26_1 = x0_1
            LeaderboardEntry* x27_1
            void* __offset(LeaderboardEntry, -0x18) x28_1
            
            if (((*arg3)(x20, x25_2) & 1) == 0)
                void* __offset(LeaderboardEntry, -0x30) x28_2 = x19 - 0x30
                int32_t x0_6
                
                do
                    if (x20 == x28_2)
                        void* __offset(LeaderboardEntry, 0x30) x22_3 = x20 + 0x18
                        
                        if (((*arg3)(x20, fp_1).d & 1) == 0)
                            if (x22_3 == fp_1)
                                goto label_bb2a0c
                            
                            x22_3 = x20 + 0x30
                            
                            while (((*arg3)(x20, x22_3 - 0x18).d & 1) == 0)
                                x22_3 += 0x18
                                
                                if (x19 == x22_3)
                                    return 
                            
                            int32_t x8_38 = *(x22_3 - 0x18)
                            XString::XString(&var_70)
                            int32_t x8_39 = *(x22_3 - 8)
                            *(x22_3 - 0x18) = *(x19 - 0x18)
                            XString::operator=(x22_3 - 0x10)
                            *(x22_3 - 8) = *(x19 - 8)
                            *(x19 - 0x18) = x8_38
                            XString::operator=(x19 - 0x10)
                            *(x19 - 8) = x8_39
                            XString::~XString()
                        
                        if (x22_3 == fp_1)
                            goto label_bb2a0c
                        
                        void* __offset(LeaderboardEntry, -0x18) x26_3 = fp_1
                        
                        while (true)
                            x25_1 = x22_3 - 0x18
                            int32_t x0_32
                            
                            do
                                x25_1 += 0x18
                                x0_32 = (*arg3)(x20, x25_1)
                            while ((x0_32 & 1) == 0)
                            x22_3 = x25_1 + 0x18
                            
                            do
                                x26_3 -= 0x18
                                arg1 = (*arg3)(x20, x26_3)
                            while ((arg1.d & 1) != 0)
                            
                            if (x25_1 u>= x26_3)
                                break
                            
                            int32_t x8_46 = *x25_1
                            XString::XString(&var_70)
                            int32_t x8_47 = *(x25_1 + 0x10)
                            *x25_1 = *x26_3
                            XString::operator=(x25_1 + 8)
                            *(x25_1 + 0x10) = *(x26_3 + 0x10)
                            *x26_3 = x8_46
                            XString::operator=(x26_3 + 8)
                            *(x26_3 + 0x10) = x8_47
                            XString::~XString()
                        
                        goto label_bb2440
                    
                    x0_6 = (*arg3)(x28_2, x25_2)
                    x28_2 -= 0x18
                while ((x0_6 & 1) == 0)
                int32_t x8_12 = *x20
                XString::XString(&var_70)
                int32_t x8_13 = *(x20 + 0x10)
                x28_1 = x28_2 + 0x18
                *x20 = *x28_1
                XString::operator=(x20 + 8)
                fp_1 = var_80_1
                *(x20 + 0x10) = *(x28_1 + 0x10)
                *x28_1 = x8_12
                XString::operator=(x28_1 + 8)
                *(x28_1 + 0x10) = x8_13
                XString::~XString()
                x26_1 += 1
                x27_1 = x20 + 0x18
                
                if (x27_1 u>= x28_1)
                    goto label_bb2510
                
                goto label_bb25b8
            
            x28_1 = fp_1
            x27_1 = x20 + 0x18
            
            if (x27_1 u< x28_1)
            label_bb25b8:
                void* __offset(LeaderboardEntry, -0x18) fp_3
                
                while (true)
                    fp_3 = x27_1 - 0x18
                    int32_t x0_11
                    
                    do
                        fp_3 += 0x18
                        x0_11 = (*arg3)(fp_3, x25_2)
                    while ((x0_11 & 1) != 0)
                    x27_1 = fp_3 + 0x18
                    int32_t x0_13
                    
                    do
                        x28_1 -= 0x18
                        x0_13 = (*arg3)(x28_1, x25_2)
                    while ((x0_13 & 1) == 0)
                    
                    if (fp_3 u> x28_1)
                        break
                    
                    int32_t x8_20 = *fp_3
                    XString::XString(&var_70)
                    int32_t x8_21 = *(fp_3 + 0x10)
                    *fp_3 = *x28_1
                    XString::operator=(fp_3 + 8)
                    *(fp_3 + 0x10) = *(x28_1 + 0x10)
                    *x28_1 = x8_20
                    XString::operator=(x28_1 + 8)
                    *(x28_1 + 0x10) = x8_21
                    XString::~XString()
                    x26_1 += 1
                    
                    if (x25_2 == fp_3)
                        x25_2 = x28_1
                
                x27_1 = fp_3
                fp_1 = var_80_1
                
                if (x27_1 != x25_2)
                    goto label_bb2688
            else
            label_bb2510:
                
                if (x27_1 != x25_2)
                label_bb2688:
                    
                    if (((*arg3)(x25_2, x27_1) & 1) != 0)
                        int32_t x8_27 = *x27_1
                        XString::XString(&var_70)
                        int32_t x8_28 = *(x27_1 + 0x10)
                        *x27_1 = *x25_2
                        XString::operator=(x27_1 + 8)
                        *(x27_1 + 0x10) = *(x25_2 + 0x10)
                        *x25_2 = x8_27
                        XString::operator=(x25_2 + 8)
                        *(x25_2 + 0x10) = x8_28
                        XString::~XString()
                        x26_1 += 1
            
            if (x26_1 != 0)
            label_bb274c:
                
                if (((x27_1 - x20) s>> 3) * -0x5555555555555555
                        s>= ((x19 - x27_1) s>> 3) * -0x5555555555555555)
                    std::__ndk1::__sort<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                        x27_1 + 0x18, x19, arg3)
                    x19 = x27_1
                    break
                
                std::__ndk1::__sort<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                    x20, x27_1, arg3)
                x25_1 = x27_1 + 0x18
                continue
            else
                int32_t x0_23 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                    x20, x27_1, arg3)
                x25_1 = x27_1 + 0x18
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                        x25_1, x19, arg3).d & 1) != 0)
                    x19 = x27_1
                    
                    if ((x0_23 & 1) == 0)
                        break
                else
                    if ((x0_23 & 1) == 0)
                        goto label_bb274c
                    
                    continue
    label_bb2a0c:
        return 
