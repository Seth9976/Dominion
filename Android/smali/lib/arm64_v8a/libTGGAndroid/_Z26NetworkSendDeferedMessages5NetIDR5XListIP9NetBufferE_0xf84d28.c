// 函数: _Z26NetworkSendDeferedMessages5NetIDR5XListIP9NetBufferE
// 地址: 0xf84d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int32_t x10_1 = arg1.d & 0xffff
int64_t* x8_1 = *gNetwork

if (x10_1 u>= x8_1[1].d)
    return 

int64_t x9_2 = *x8_1

if (*(x9_2 + mulu.dp.d(x10_1, 0x90) + 0x88) != arg1.d)
    return 

int32_t i = *(arg2 + 0x10)

if (i == 0)
    return 

void* x9_3 = x9_2 + zx.q(x10_1) * 0x90

do
    void* x0 = *arg2
    void* x9_5 = *(x0 + 8)
    *arg2 = x9_5
    
    if (x9_5 == 0)
        *(arg2 + 8) = 0
    else
        *(x9_5 + 0x10) = 0
        i = *(arg2 + 0x10)
    
    int64_t x23_1 = *x0
    *(arg2 + 0x10) = i - 1
    XPooledFree(x0, 0x18)
    arg1 = XPooledCalloc(0x18)
    *arg1 = x23_1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = *(x9_3 + 0x70)
    void* x8_6 = *(x9_3 + 0x70)
    NetID* x8_7
    
    if (x8_6 == 0)
        x8_7 = x9_3 + 0x68
    else
        x8_7 = x8_6 + 8
    
    *x8_7 = arg1
    *(x9_3 + 0x78) += 1
    *(x9_3 + 0x70) = arg1
    i = *(arg2 + 0x10)
while (i != 0)
