// 函数: _Z35EnqueueWholeReceivedNetworkMessagesR6NetLoc
// 地址: 0xf85a4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_1 = *(arg1 + 0x50)

if (i_1 == 0)
    return 

NetLoc& x19_1 = arg1

while (true)
    int32_t x20_2 = 0
    int64_t* i = i_1
    
    do
        void* x9_2 = *i
        i = i[1]
        x20_2 += *(x9_2 + 0xfdec)
    while (i != 0)
    
    if (x20_2 u< 0xc)
        break
    
    int32_t var_70
    int32_t* x21_1 = &var_70
    int32_t x26_1 = 0xc
    
    while (true)
        void* x8_6 = *i_1
        size_t x22_1 = *((x8_6 + 0xfde8).d + 4)
        void* x1_1 = x8_6 + *(x8_6 + 0xfde8)
        
        if (x26_1 s<= x22_1.d)
            memcpy(x21_1, x1_1, sx.q(x26_1))
            break
        
        i_1 = i_1[1]
        memcpy(x21_1, x1_1, x22_1)
        x26_1 -= x22_1.d
        x21_1 += x22_1
        
        if (i_1 == 0)
            pthread_kill(pthread_self(), 6)
            return UpdateTCPConnectStatus_Waiting(XNoReturn()) __tailcall
    
    int32_t var_6c
    char const* const x0_6
    int32_t var_68
    
    if (var_6c u> 0xed30)
        x0_6 =
            "net error: header.messageLength >= 0 && header.messageLength <= MAX_NET_MESSAGE_SIZE"
    else if (var_68 s< 0x3e9)
        x0_6 = "net error: header.messageType > NETMSG_MIN_VALUE"
    else if (var_70 != 0xfeedface)
        x0_6 = "net error: header.magicNumber == header.magicNumber == NETWORK_MAGIC_NUMBER"
    else
        if (x20_2 s< var_6c + 0xc)
            break
        
        NetBufferGetReceiveData(x19_1, &var_70, 0xc, true)
        void* x8_9 = *gNetwork
        int32_t x9_8 = *(x8_9 + 0x90)
        int32_t* x21_2
        int128_t v0_1
        int128_t v1_1
        
        if (x9_8 == 0)
            int32_t* x0_4
            x0_4, v0_1, v1_1 = XCalloc(0xed70)
            x21_2 = x0_4
        else
            int32_t** x0_3 = *(x8_9 + 0x88)
            void* x10_2 = x0_3[2]
            *(x8_9 + 0x88) = x10_2
            
            if (x10_2 == 0)
                *(x8_9 + 0x80) = 0
            else
                *(x10_2 + 8) = 0
                x9_8 = *(x8_9 + 0x90)
            
            x21_2 = *x0_3
            *(x8_9 + 0x90) = x9_8 - 1
            v0_1, v1_1 = XPooledFree(x0_3, 0x18)
        int32_t x9_10 = *(x19_1 + 0x88)
        x21_2[2] = var_6c
        *x21_2 = x9_10
        x21_2[1] = var_68
        v0_1 = *(x19_1 + 0x10)
        *(x21_2 + 0xed48) = *x19_1
        *(x21_2 + 0xed58) = v0_1
        
        if (var_6c s>= 1)
            NetBufferGetReceiveData(x19_1, &x21_2[3], var_6c, true)
        
        uint64_t x20_1 = *gNetwork
        arg1 = XPooledCalloc(0x18)
        *arg1 = x21_2
        *(arg1 + 8) = 0
        *(arg1 + 0x10) = *(x20_1 + 0x58)
        void* x8_2 = *(x20_1 + 0x58)
        NetLoc** x8_3
        
        if (x8_2 == 0)
            x8_3 = x20_1 + 0x50
        else
            x8_3 = x8_2 + 8
        
        *x8_3 = arg1
        int32_t x8_4 = *(x20_1 + 0x60)
        *(x20_1 + 0x58) = arg1
        *(x20_1 + 0x60) = x8_4 + 1
        i_1 = *(x19_1 + 0x50)
        
        if (i_1 == 0)
            break
        
        continue
    XTraceAndLog(x0_6)
    NetLocFree(x19_1)
    break
