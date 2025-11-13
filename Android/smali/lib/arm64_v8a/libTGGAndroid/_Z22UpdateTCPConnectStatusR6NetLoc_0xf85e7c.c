// 函数: _Z22UpdateTCPConnectStatusR6NetLoc
// 地址: 0xf85e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x3c)
NetLoc& x19 = arg1

if (x8 == 2)
    return UpdateTCPConnectStatus_Waiting(x19) __tailcall

if (x8 != 1)
    return 

int64_t* x0 = *gNetworkInterface
arg1 = (*(*x0 + 0x30))(x0, x19)
*(x19 + 0x20) = arg1.d

if (arg1.d == 0xffffffff)
    *(x19 + 0x3c) = 5
    uint64_t x8_4 = *gNetwork
    int32_t x9_1 = *(x8_4 + 0x90)
    int32_t* x20
    int128_t v0_1
    int128_t v1_1
    
    if (x9_1 == 0)
        int32_t* x0_4
        x0_4, v0_1, v1_1 = XCalloc(0xed70)
        x20 = x0_4
    else
        void* x0_3 = *(x8_4 + 0x88)
        void* x10_2 = *(x0_3 + 0x10)
        *(x8_4 + 0x88) = x10_2
        
        if (x10_2 == 0)
            *(x8_4 + 0x80) = 0
        else
            *(x10_2 + 8) = 0
            x9_1 = *(x8_4 + 0x90)
        
        x20 = *x0_3
        *(x8_4 + 0x90) = x9_1 - 1
        v0_1, v1_1 = XPooledFree(x0_3, 0x18)
    x20[1] = 0x3eb
    int32_t x8_5 = *(x19 + 0x88)
    x20[2] = 0
    *x20 = x8_5
    v0_1 = *(x19 + 0x10)
    *(x20 + 0xed48) = *x19
    *(x20 + 0xed58) = v0_1
    void* x19_1 = *gNetwork
    void** x0_5 = XPooledCalloc(0x18)
    *x0_5 = x20
    x0_5[1] = 0
    x0_5[2] = *(x19_1 + 0x58)
    void* x8_8 = *(x19_1 + 0x58)
    void* x8_9
    
    if (x8_8 == 0)
        x8_9 = x19_1 + 0x50
    else
        x8_9 = x8_8 + 8
    
    *x8_9 = x0_5
    int32_t x8_10 = *(x19_1 + 0x60)
    *(x19_1 + 0x58) = x0_5
    *(x19_1 + 0x60) = x8_10 + 1
    return 

*(x19 + 0x3c) = 2
