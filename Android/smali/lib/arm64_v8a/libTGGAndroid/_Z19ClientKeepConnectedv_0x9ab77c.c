// 函数: _Z19ClientKeepConnectedv
// 地址: 0x9ab77c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = GetActiveProfile()

if (*(x0 + 0x4324) == 0)
    x0 = GetClient()
    int64_t* x19_1 = x0
    void* x21_1 = &x0[0xeb7]
    
    if (x0[3].d == 3 && *(x19_1 + 0x14) == *x21_1 && *x19_1 - x19_1[0xeb8] s>= 0x3a99)
        x0 = ClientNetworkClose(true, true)
        *(x19_1 + 0x1c) = 0
    
    float temp0_1 = vmaxnm_f32(*(x21_1 + 0x10) - *gSecondsPerUpdate, 0f)
    *(x21_1 + 0x10) = temp0_1
    
    if (not(temp0_1 != 0f))
        int32_t x8_5 = x19_1[3].d
        
        if (x8_5 == 3)
            char var_28 = GameDlgManagerDialogActive(0x13, 5) & 1
            void* x0_7 = GetClient()
            
            if (*(x0_7 + 0x18) == 3)
                NetworkSendMessage(zx.q(*(x0_7 + 0x14)), 0xf42b2, 1, &var_28)
            
            int64_t* x0_9 = GetClient()
            int32_t x9_4 = *(x0_9 + 0x14)
            
            if (x9_4 != x0_9[0xeb7].d)
                x0_9[0xeb7].d = x9_4
                x0_9[0xeb8] = *x0_9
            
            x0_9[0xeb9].d = 0x40a00000
            return x0_9
        
        if (x8_5 == 0)
            uint64_t x8_6 = zx.q(*(x19_1 + 0x1c))
            
            if (x8_6.d u> 8)
                pthread_kill(pthread_self(), 6)
                return ClientNetworkUpdate(XNoReturn()) __tailcall
            
            int64_t x0_5
            int32_t x9_3
            void* x20
            
            switch (x8_6)
                case 0, 1, 2
                    void* x0_10 = GetChannelSettings()
                    void* x0_11 = GetClient()
                    x20 = x0_11
                    NetworkCloseConnection(zx.q(*(x0_11 + 0x14)))
                    x0_5 = NetworkConnect(*(x0_10 + 0x10), *(x0_10 + 8))
                    x9_3 = 0x3f800000
                    goto label_9ab960
                case 4, 5, 6, 8
                    void* x0_1 = GetChannelSettings()
                    void* x0_2 = GetClient()
                    x20 = x0_2
                    NetworkCloseConnection(zx.q(*(x0_2 + 0x14)))
                    x0_5 = NetworkConnect(*(x0_1 + 0x10), *(x0_1 + 8))
                    x9_3 = 0x41700000
                label_9ab960:
                    *(x20 + 0x14) = x0_5.d
                    *(x20 + 0x18) = 1
                    *(x21_1 + 0x10) = x9_3
                    return x0_5
                case 7
                    void* x0_14 = GetChannelSettings()
                    void* x0_15 = GetClient()
                    x20 = x0_15
                    NetworkCloseConnection(zx.q(*(x0_15 + 0x14)))
                    x0_5 = NetworkConnect(*(x0_14 + 0x10), *(x0_14 + 8))
                    x9_3 = 0x42700000
                    goto label_9ab960

return x0
