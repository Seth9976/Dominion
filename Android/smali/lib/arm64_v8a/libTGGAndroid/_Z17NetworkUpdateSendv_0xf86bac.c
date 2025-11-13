// 函数: _Z17NetworkUpdateSendv
// 地址: 0xf86bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork

if (x8 == 0)
    return 

void* x19_1 = nullptr

while (true)
    void* x9_1
    
    if (x19_1 == 0)
        x9_1 = *x8
        x19_1 = x9_1
    else
        x9_1 = *x8
        x19_1 += 0x90
    
    int64_t x8_2 = x9_1 + zx.q(x8[1].d) * 0x90
    
    if (x19_1 u>= x8_2)
        break
    
    while (zx.d(*(x19_1 + 0x8a)) == 0)
        x19_1 += 0x90
        
        if (x19_1 u>= x8_2)
            return 
    
    if (*(x19_1 + 0x3c) == 4)
        int32_t x8_4 = *(x19_1 + 0x24)
        
        if (x8_4 - 1 u< 4)
            NetLocTCPSend(x19_1)
            x8 = *gNetwork
            continue
        else if (x8_4 == 0)
            NetLocUPDSend(x19_1)
        else if (x8_4 == 5)
            NetLoopbackSend(x19_1)
            x8 = *gNetwork
            continue
    
    x8 = *gNetwork
