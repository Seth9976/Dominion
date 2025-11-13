// 函数: _Z24NetworkMessageQueueClearv
// 地址: 0xf8716c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gNetwork

if (x8 == 0 || *(x8 + 0x60) == 0)
    return 

do
    void* x0_1 = *(x8 + 0x50)
    void* x9_2 = *(x0_1 + 8)
    *(x8 + 0x50) = x9_2
    int64_t* x9_3
    
    if (x9_2 == 0)
        x9_3 = x8 + 0x58
    else
        x9_3 = x9_2 + 0x10
    
    *x9_3 = 0
    void* x22_1 = *x0_1
    *(x8 + 0x60) -= 1
    XPooledFree(x0_1, 0x18)
    XString::operator=(x22_1 + 0xed40)
    uint64_t x23_1 = *gNetwork
    int64_t* x0 = XPooledCalloc(0x18)
    *x0 = x22_1
    x0[1] = 0
    x0[2] = *(x23_1 + 0x88)
    void* x8_2 = *(x23_1 + 0x88)
    int64_t** x8_3
    
    if (x8_2 == 0)
        x8_3 = x23_1 + 0x80
    else
        x8_3 = x8_2 + 8
    
    *x8_3 = x0
    int32_t x8_4 = *(x23_1 + 0x90)
    *(x23_1 + 0x88) = x0
    *(x23_1 + 0x90) = x8_4 + 1
    x8 = *gNetwork
while (*(x8 + 0x60) != 0)
