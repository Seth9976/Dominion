// 函数: _ZNSt6__ndk16__sortIRPFbRK10GameFriendS3_EPS1_EEvT0_S8_T_
// 地址: 0x9cc05c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameFriend* fp = arg2
GameFriend* x20 = arg1

while (true)
    void* __offset(GameFriend, -0x20) x8_1 = fp - 0x20
    GameFriend* var_90_1 = fp
    void* __offset(GameFriend, -0x18) x9_1 = fp - 0x18
    void* __offset(GameFriend, -0x10) x8_2 = fp - 0x10
    void* __offset(GameFriend, -0x40) x8_3 = fp - 0x40
    void* __offset(GameFriend, 0x20) x25_1 = x20
    
    while (true)
    label_9cc0b0:
        int64_t x9_2 = fp - x25_1
        int64_t x8_4 = x9_2 s>> 5
        x20 = x25_1
        void var_78
        
        if (x8_4 u<= 5)
            switch (x8_4)
                case 2
                    if (((*arg3)(x8_1, x20).d & 1) != 0)
                        int64_t x8_34 = *x20
                        XString::XString(&var_78)
                        int128_t v0_16 = *(x20 + 0x10)
                        *x20 = *(fp - 0x20)
                        XString::operator=(x20 + 8)
                        *(x20 + 0x10) = *(fp - 0x10)
                        *(fp - 0x20) = x8_34
                        XString::operator=(x9_1)
                        *(fp - 0x10) = v0_16
                        XString::~XString()
                case 3
                    std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                        x20, x20 + 0x20, x8_1, arg3)
                case 4
                    std::__ndk1::__sort4<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                        x20, x20 + 0x20, x20 + 0x40, x8_1, arg3)
                case 5
                    sub_9ccae0(x20, x20 + 0x20, x20 + 0x40, x20 + 0x60, x8_1, arg3)
        else if (x9_2 s<= 0xdf)
            std::__ndk1::__insertion_sort_3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                x20, fp, arg3)
        else
            int64_t x10_1
            
            if (x8_4 s< 0)
                x10_1 = x8_4 + 1
            else
                x10_1 = x8_4
            
            void* __offset(GameFriend, -0x20) x25_2 = x20 + (x10_1 << 4 & 0xffffffffffffffe0)
            int32_t x0_1
            
            if (x9_2 s< 0x7ce1)
                x0_1 = std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                    x20, x25_2, x8_1, arg3)
            else
                int64_t x8_5
                
                if (x8_4 s< 0)
                    x8_5 = x8_4 + 3
                else
                    x8_5 = x8_4
                
                int64_t x8_7 = x8_5 << 3 & 0xffffffffffffffe0
                x0_1 = sub_9ccae0(x20, x20 + x8_7, x25_2, x25_2 + x8_7, x8_1, arg3)
            
            int32_t x26_1 = x0_1
            GameFriend* x27_1
            void* __offset(GameFriend, -0x20) x28_1
            
            if (((*arg3)(x20, x25_2) & 1) == 0)
                void* __offset(GameFriend, -0x40) x28_2 = x8_3
                int32_t x0_6
                
                do
                    if (x20 == x28_2)
                        void* __offset(GameFriend, -0x20) x26_3 = x8_1
                        void* __offset(GameFriend, 0x40) x22_3 = x20 + 0x20
                        
                        if (((*arg3)(x20, x26_3).d & 1) == 0)
                            if (x22_3 == x26_3)
                                goto label_9cc644
                            
                            x22_3 = x20 + 0x40
                            
                            while (((*arg3)(x20, x22_3 - 0x20).d & 1) == 0)
                                x22_3 += 0x20
                                
                                if (fp == x22_3)
                                    return 
                            
                            int64_t x8_25 = *(x22_3 - 0x20)
                            XString::XString(&var_78)
                            int128_t v0_10 = *(x22_3 - 0x10)
                            *(x22_3 - 0x20) = *x26_3
                            XString::operator=(x22_3 - 0x18)
                            *(x22_3 - 0x10) = *x8_2
                            *x26_3 = x8_25
                            XString::operator=(x9_1)
                            *x8_2 = v0_10
                            XString::~XString()
                        
                        if (x22_3 == x26_3)
                            goto label_9cc644
                        
                        while (true)
                            x25_1 = x22_3 - 0x20
                            int32_t x0_32
                            
                            do
                                x25_1 += 0x20
                                x0_32 = (*arg3)(x20, x25_1)
                            while ((x0_32 & 1) == 0)
                            x22_3 = x25_1 + 0x20
                            
                            do
                                x26_3 -= 0x20
                                arg1 = (*arg3)(x20, x26_3)
                            while ((arg1.d & 1) != 0)
                            
                            if (x25_1 u>= x26_3)
                                break
                            
                            int64_t x8_30 = *x25_1
                            XString::XString(&var_78)
                            int128_t v0_13 = *(x25_1 + 0x10)
                            *x25_1 = *x26_3
                            XString::operator=(x25_1 + 8)
                            *(x25_1 + 0x10) = *(x26_3 + 0x10)
                            *x26_3 = x8_30
                            XString::operator=(x26_3 + 8)
                            *(x26_3 + 0x10) = v0_13
                            XString::~XString()
                        
                        goto label_9cc0b0
                    
                    x0_6 = (*arg3)(x28_2, x25_2)
                    x28_2 -= 0x20
                while ((x0_6 & 1) == 0)
                int64_t x8_10 = *x20
                XString::XString(&var_78)
                int128_t v0_1 = *(x20 + 0x10)
                x28_1 = x28_2 + 0x20
                *x20 = *x28_1
                XString::operator=(x20 + 8)
                fp = var_90_1
                *(x20 + 0x10) = *(x28_1 + 0x10)
                *x28_1 = x8_10
                XString::operator=(x28_1 + 8)
                *(x28_1 + 0x10) = v0_1
                XString::~XString()
                x26_1 += 1
                x27_1 = x20 + 0x20
                
                if (x27_1 u>= x28_1)
                    goto label_9cc15c
                
                goto label_9cc204
            
            x28_1 = x8_1
            x27_1 = x20 + 0x20
            
            if (x27_1 u< x28_1)
            label_9cc204:
                void* __offset(GameFriend, -0x20) fp_2
                
                while (true)
                    fp_2 = x27_1 - 0x20
                    int32_t x0_11
                    
                    do
                        fp_2 += 0x20
                        x0_11 = (*arg3)(fp_2, x25_2)
                    while ((x0_11 & 1) != 0)
                    x27_1 = fp_2 + 0x20
                    int32_t x0_13
                    
                    do
                        x28_1 -= 0x20
                        x0_13 = (*arg3)(x28_1, x25_2)
                    while ((x0_13 & 1) == 0)
                    
                    if (fp_2 u> x28_1)
                        break
                    
                    int64_t x8_15 = *fp_2
                    XString::XString(&var_78)
                    int128_t v0_4 = *(fp_2 + 0x10)
                    *fp_2 = *x28_1
                    XString::operator=(fp_2 + 8)
                    *(fp_2 + 0x10) = *(x28_1 + 0x10)
                    *x28_1 = x8_15
                    XString::operator=(x28_1 + 8)
                    *(x28_1 + 0x10) = v0_4
                    XString::~XString()
                    x26_1 += 1
                    
                    if (x25_2 == fp_2)
                        x25_2 = x28_1
                
                x27_1 = fp_2
                fp = var_90_1
                
                if (x27_1 != x25_2)
                    goto label_9cc2d4
            else
            label_9cc15c:
                
                if (x27_1 != x25_2)
                label_9cc2d4:
                    
                    if (((*arg3)(x25_2, x27_1) & 1) != 0)
                        int64_t x8_19 = *x27_1
                        XString::XString(&var_78)
                        int128_t v0_7 = *(x27_1 + 0x10)
                        *x27_1 = *x25_2
                        XString::operator=(x27_1 + 8)
                        *(x27_1 + 0x10) = *(x25_2 + 0x10)
                        *x25_2 = x8_19
                        XString::operator=(x25_2 + 8)
                        *(x25_2 + 0x10) = v0_7
                        XString::~XString()
                        x26_1 += 1
            
            if (x26_1 != 0)
            label_9cc380:
                
                if (x27_1 - x20 s>= fp - x27_1)
                    std::__ndk1::__sort<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                        x27_1 + 0x20, fp, arg3)
                    fp = x27_1
                    break
                
                std::__ndk1::__sort<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                    x20, x27_1, arg3)
                x25_1 = x27_1 + 0x20
                continue
            else
                int32_t x0_23 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                    x20, x27_1, arg3)
                x25_1 = x27_1 + 0x20
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                        x25_1, fp, arg3).d & 1) != 0)
                    fp = x27_1
                    
                    if ((x0_23 & 1) == 0)
                        break
                else
                    if ((x0_23 & 1) == 0)
                        goto label_9cc380
                    
                    continue
    label_9cc644:
        return 
