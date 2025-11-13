// 函数: _Z13NetLocUPDSendR6NetLoc
// 地址: 0xf864ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x78) == 0)
    return 

NetLoc& x19_1 = arg1
void* __offset(NetLoc, 0x70) x20_1 = arg1 + 0x70

do
    int64_t* x0 = *gNetworkInterface
    void* x8_2 = **(x19_1 + 0x68)
    (*(*x0 + 0x20))(x0, zx.q(*(x19_1 + 0x20)), x8_2 + 0xfdfc, x8_2 + sx.q(*(x8_2 + 0xfde8)), 
        zx.q(*(x8_2 + 0xfdec)))
    void* x0_1 = *(x19_1 + 0x68)
    void* x8_3 = *(x0_1 + 8)
    *(x19_1 + 0x68) = x8_3
    void* __offset(NetLoc, 0x70) x8_4
    
    if (x8_3 == 0)
        x8_4 = x20_1
    else
        x8_4 = x8_3 + 0x10
    
    *x8_4 = 0
    int64_t x25_1 = *x0_1
    *(x19_1 + 0x78) -= 1
    XPooledFree(x0_1, 0x18)
    uint64_t x26_1 = *gNetwork
    arg1 = XPooledCalloc(0x18)
    *arg1 = x25_1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = *(x26_1 + 0x70)
    void* x8_8 = *(x26_1 + 0x70)
    NetLoc** x8_9
    
    if (x8_8 == 0)
        x8_9 = x26_1 + 0x68
    else
        x8_9 = x8_8 + 8
    
    *x8_9 = arg1
    int32_t x8_10 = *(x26_1 + 0x78)
    *(x26_1 + 0x70) = arg1
    *(x26_1 + 0x78) = x8_10 + 1
while (*(x19_1 + 0x78) != 0)
