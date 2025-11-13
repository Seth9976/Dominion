// 函数: _Z30UpdateTCPConnectStatus_WaitingR6NetLoc
// 地址: 0xf85c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gNetworkInterface
void** result = (*(*x0 + 0x38))(x0, zx.q(*(arg1 + 0x20)))

if (result.d != 2)
    int32_t x8_8
    int32_t* x20_1
    int128_t v0_1
    int128_t v1_1
    
    if (result.d == 5)
        int32_t x8_5 = *(arg1 + 0x40)
        *(arg1 + 0x3c) = 5
        
        if (x8_5 == 3)
            void* x8_7 = *gNetwork
            int32_t x9_3 = *(x8_7 + 0x90)
            
            if (x9_3 == 0)
                int32_t* x0_6
                x0_6, v0_1, v1_1 = XCalloc(0xed70)
                x20_1 = x0_6
            else
                int32_t** x0_3 = *(x8_7 + 0x88)
                void* x10_3 = x0_3[2]
                *(x8_7 + 0x88) = x10_3
                
                if (x10_3 == 0)
                    *(x8_7 + 0x80) = 0
                else
                    *(x10_3 + 8) = 0
                    x9_3 = *(x8_7 + 0x90)
                
                x20_1 = *x0_3
                *(x8_7 + 0x90) = x9_3 - 1
                v0_1, v1_1 = XPooledFree(x0_3, 0x18)
            
            x8_8 = 0xfa1
        else
            if (x8_5 != 2)
                pthread_kill(pthread_self(), 6)
                return UpdateTCPConnectStatus_WaitingSSL(XNoReturn()) __tailcall
            
            void* x8_6 = *gNetwork
            int32_t x9_2 = *(x8_6 + 0x90)
            
            if (x9_2 == 0)
                int32_t* x0_5
                x0_5, v0_1, v1_1 = XCalloc(0xed70)
                x20_1 = x0_5
                x8_8 = 0x3eb
            else
                int32_t** x0_2 = *(x8_6 + 0x88)
                void* x10_2 = x0_2[2]
                *(x8_6 + 0x88) = x10_2
                
                if (x10_2 == 0)
                    *(x8_6 + 0x80) = 0
                else
                    *(x10_2 + 8) = 0
                    x9_2 = *(x8_6 + 0x90)
                
                x20_1 = *x0_2
                *(x8_6 + 0x90) = x9_2 - 1
                v0_1, v1_1 = XPooledFree(x0_2, 0x18)
                x8_8 = 0x3eb
    else
        if (result.d != 4)
            pthread_kill(pthread_self(), 6)
            return UpdateTCPConnectStatus_WaitingSSL(XNoReturn()) __tailcall
        
        if (*(arg1 + 0x24) - 3 u<= 1)
            *(arg1 + 0x48) = 0
        
        *(arg1 + 0x3c) = 4
        uint64_t x8_4 = *gNetwork
        int32_t x9_1 = *(x8_4 + 0x90)
        
        if (x9_1 == 0)
            int32_t* x0_4
            x0_4, v0_1, v1_1 = XCalloc(0xed70)
            x20_1 = x0_4
        else
            void* x0_1 = *(x8_4 + 0x88)
            void* x10_1 = *(x0_1 + 0x10)
            *(x8_4 + 0x88) = x10_1
            
            if (x10_1 == 0)
                *(x8_4 + 0x80) = 0
            else
                *(x10_1 + 8) = 0
                x9_1 = *(x8_4 + 0x90)
            
            x20_1 = *x0_1
            *(x8_4 + 0x90) = x9_1 - 1
            v0_1, v1_1 = XPooledFree(x0_1, 0x18)
        
        x8_8 = 0x3ea
    x20_1[1] = x8_8
    int32_t x8_9 = *(arg1 + 0x88)
    x20_1[2] = 0
    *x20_1 = x8_9
    v0_1 = *(arg1 + 0x10)
    *(x20_1 + 0xed48) = *arg1
    *(x20_1 + 0xed58) = v0_1
    void* x19_1 = *gNetwork
    result = XPooledCalloc(0x18)
    *result = x20_1
    result[1] = 0
    result[2] = *(x19_1 + 0x58)
    void* x8_12 = *(x19_1 + 0x58)
    void* x8_13
    
    if (x8_12 == 0)
        x8_13 = x19_1 + 0x50
    else
        x8_13 = x8_12 + 8
    
    *x8_13 = result
    int32_t x8_14 = *(x19_1 + 0x60)
    *(x19_1 + 0x58) = result
    *(x19_1 + 0x60) = x8_14 + 1

return result
