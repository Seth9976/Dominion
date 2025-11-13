// 函数: _Z15NetLoopbackSendR6NetLoc
// 地址: 0xf865ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x20)

if (x8 == 0)
    return 

int64_t* x10_1 = *gNetwork
uint64_t x9_1 = zx.q(x8.w)

if (x9_1.d u>= x10_1[1].d)
    return 

int64_t x10_2 = *x10_1

if (*(x10_2 + x9_1 * 0x90 + 0x88) != x8)
    return 

int32_t i = *(arg1 + 0x78)
NetLoc& x19_1 = arg1

if (i == 0)
    return 

void* x9_2 = x10_2 + x9_1 * 0x90

do
    void* x0 = *(x19_1 + 0x68)
    void* x9_4 = *(x0 + 8)
    *(x19_1 + 0x68) = x9_4
    
    if (x9_4 == 0)
        *(x19_1 + 0x70) = 0
    else
        *(x9_4 + 0x10) = 0
        i = *(x19_1 + 0x78)
    
    int64_t x23_1 = *x0
    *(x19_1 + 0x78) = i - 1
    XPooledFree(x0, 0x18)
    arg1 = XPooledCalloc(0x18)
    *arg1 = x23_1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = *(x9_2 + 0x58)
    void* x8_3 = *(x9_2 + 0x58)
    NetLoc** x8_4
    
    if (x8_3 == 0)
        x8_4 = x9_2 + 0x50
    else
        x8_4 = x8_3 + 8
    
    *x8_4 = arg1
    *(x9_2 + 0x60) += 1
    *(x9_2 + 0x58) = arg1
    i = *(x19_1 + 0x78)
while (i != 0)
