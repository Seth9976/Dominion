// 函数: _Z13NetLocTCPSendR6NetLoc
// 地址: 0xf86374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *(arg1 + 0x78)

if (i == 0)
    return 

NetLoc& x19_1 = arg1

do
    void* x9_3 = **(x19_1 + 0x68)
    
    if (*(x19_1 + 0x24) - 3 u>= 2)
        int64_t* x0 = *gNetworkInterface
        arg1 = (*(*x0 + 0x58))(x0, zx.q(*(x19_1 + 0x20)), x9_3 + sx.q(*(x9_3 + 0xfde8)), 
            zx.q(*(x9_3 + 0xfdec)))
        
        if (arg1.d == 0xffffffff)
            return NetConnectionClosed(x19_1) __tailcall
        
        i = *(x19_1 + 0x78)
        
        if (i s>= 0x1389)
            goto label_f8649c
    else
        arg1 = nullptr
        
        if (i s>= 0x1389)
        label_f8649c:
            XTraceAndLog("Client stopped receiving data. closing.")
            int64_t* x0_2 = *gNetworkInterface
            (*(*x0_2 + 0x68))(x0_2, zx.q(*(x19_1 + 0x20)))
            return NetConnectionClosed(x19_1) __tailcall
    
    int32_t x9_4 = *(x9_3 + 0xfdec)
    
    if (x9_4 s> arg1.d)
        *(x9_3 + 0xfde8) += arg1.d
        *(x9_3 + 0xfdec) = x9_4 - arg1.d
        break
    
    void* x0_1 = *(x19_1 + 0x68)
    void* x9_6 = *(x0_1 + 8)
    *(x19_1 + 0x68) = x9_6
    
    if (x9_6 == 0)
        *(x19_1 + 0x70) = 0
    else
        *(x9_6 + 0x10) = 0
        i = *(x19_1 + 0x78)
    
    int64_t x24_1 = *x0_1
    *(x19_1 + 0x78) = i - 1
    XPooledFree(x0_1, 0x18)
    uint64_t x25_1 = *gNetwork
    arg1 = XPooledCalloc(0x18)
    *arg1 = x24_1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = *(x25_1 + 0x70)
    void* x8_2 = *(x25_1 + 0x70)
    NetLoc** x8_3
    
    if (x8_2 == 0)
        x8_3 = x25_1 + 0x68
    else
        x8_3 = x8_2 + 8
    
    *x8_3 = arg1
    int32_t x8_4 = *(x25_1 + 0x78)
    *(x25_1 + 0x70) = arg1
    *(x25_1 + 0x78) = x8_4 + 1
    i = *(x19_1 + 0x78)
while (i != 0)
