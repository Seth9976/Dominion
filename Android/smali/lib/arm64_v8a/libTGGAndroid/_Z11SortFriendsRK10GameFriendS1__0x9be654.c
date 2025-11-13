// 函数: _Z11SortFriendsRK10GameFriendS1_
// 地址: 0x9be654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x14))

if (x8.d u<= 5)
    int32_t x9_1 = 0
    
    switch (x8)
        case 1, 2
            goto label_9be694
        case 3
            x9_1 = 1
        label_9be694:
            uint64_t x10_2 = zx.q(*(arg2 + 0x14))
            
            if (x10_2.d u<= 5)
                int32_t x11_2 = 0
                bool cond:0
                
                switch (x10_2)
                    case 1, 2
                        goto label_9be6d0
                    case 3
                        cond:0 = x9_1 u<= 1
                        
                        if (x9_1 u< 1)
                            return 1
                        
                    label_9be6f0:
                        
                        if (not(cond:0))
                            return 0
                        
                        if (x8.d s> x10_2.d)
                            return 1
                        
                        if (x8.d s< x10_2.d)
                            return 0
                        
                        int64_t x8_1 = *(arg1 + 0x18)
                        int64_t x9_2 = *(arg2 + 0x18)
                        
                        if (x8_1 u> x9_2)
                            return 1
                        
                        if (x8_1 u>= x9_2)
                            return zx.q(*arg1 s< *arg2 ? 1 : 0)
                        
                        return 0
                    case 4
                        x11_2 = 2
                    label_9be6d0:
                        cond:0 = x9_1 u<= x11_2
                        
                        if (x9_1 u>= x11_2)
                            goto label_9be6f0
                        
                        return 1
                    case 5
                        cond:0 = x9_1 u<= 3
                        
                        if (x9_1 u< 3)
                            return 1
                        
                        goto label_9be6f0
        case 4
            x9_1 = 2
            goto label_9be694
        case 5
            x9_1 = 3
            goto label_9be694

pthread_kill(pthread_self(), 6)
return ServerPageFromUIPage(XNoReturn()) __tailcall
