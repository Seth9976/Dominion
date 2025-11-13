// 函数: _Z20NetworkUpdateReceivev
// 地址: 0xf86a84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork

if (x8 == 0)
    return 

while (true)
    void* x9_1 = x8[5]
    void* x19 = x9_1
    
    while (true)
        void* x9_2 = x9_1 + (zx.q(x8[6].d) << 4)
        
        if (x19 u>= x9_2)
        label_f86af4:
            
            while (true)
                void* x9_3 = *x8
                void* x19_1 = x9_3
                
                while (true)
                    int64_t x8_2 = x9_3 + zx.q(x8[1].d) * 0x90
                    
                    if (x19_1 u< x8_2)
                        while (zx.d(*(x19_1 + 0x8a)) == 0)
                            x19_1 += 0x90
                            
                            if (x19_1 u>= x8_2)
                                goto label_f86b9c
                        
                        int32_t x8_3 = *(x19_1 + 0x24)
                        
                        if (x8_3 - 1 u>= 4)
                            if (x8_3 == 0 || x8_3 == 5)
                                goto label_f86b60
                            
                            pthread_kill(pthread_self(), 6)
                            XNoReturn()
                        else
                            UpdateTCPConnectStatus(x19_1)
                        label_f86b60:
                            
                            if (*(x19_1 + 0x3c) == 4)
                                NetworkLocReceive(x19_1)
                            
                            x8 = *gNetwork
                            
                            if (x19_1 == 0)
                                break
                            
                            x9_3 = *x8
                            x19_1 += 0x90
                            continue
                    
                label_f86b9c:
                    return NetworkProcessMessages() __tailcall
        else
            while (zx.d(*(x19 + 0xe)) == 0)
                x19 += 0x10
                
                if (x19 u>= x9_2)
                    goto label_f86af4
            
            NetworkListenUpdate(x19)
            x8 = *gNetwork
            
            if (x19 == 0)
                break
            
            x9_1 = x8[5]
            x19 += 0x10
