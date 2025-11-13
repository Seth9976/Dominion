// 函数: _Z15AnalyticsUpdatev
// 地址: 0xf88020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = *gNetwork

if (x23 == 0)
    return 

void* i = *(x23 + 0x50)

while (i != 0)
    void* i_1 = i
    void* x28_1 = *i
    i = *(i + 8)
    int32_t x1_2 = *(x28_1 + 4)
    
    if (x1_2 != 0x3ea && x1_2 != 0xfa0 && x1_2 != 0xfa2)
        XTrace("Analytics unknown message type %d")
    
    XString::operator=(x28_1 + 0xed40)
    void* fp_1 = *gNetwork
    void** x0_2 = XPooledCalloc(0x18)
    *x0_2 = x28_1
    x0_2[1] = 0
    x0_2[2] = *(fp_1 + 0x88)
    void* x8_2 = *(fp_1 + 0x88)
    void* x8_3
    
    if (x8_2 == 0)
        x8_3 = fp_1 + 0x80
    else
        x8_3 = x8_2 + 8
    
    *x8_3 = x0_2
    int32_t x8_4 = *(fp_1 + 0x90)
    *(fp_1 + 0x88) = x0_2
    *(fp_1 + 0x90) = x8_4 + 1
    void* x8_6 = *(i_1 + 0x10)
    int64_t* x8_7
    
    if (x8_6 == 0)
        x8_7 = x23 + 0x50
    else
        x8_7 = x8_6 + 8
    
    *x8_7 = *(i_1 + 8)
    void* x8_8 = *(i_1 + 8)
    int64_t* x8_9
    
    if (x8_8 == 0)
        x8_9 = x23 + 0x58
    else
        x8_9 = x8_8 + 0x10
    
    *x8_9 = *(i_1 + 0x10)
    *(x23 + 0x60) -= 1
    XPooledFree(i_1, 0x18)
