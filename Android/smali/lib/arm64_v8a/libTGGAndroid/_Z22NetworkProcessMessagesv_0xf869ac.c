// 函数: _Z22NetworkProcessMessagesv
// 地址: 0xf869ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = *gNetwork

for (int32_t i = *(x21 + 0x60); i != 0; i = *(x21 + 0x60))
    void* x0_1 = *(x21 + 0x50)
    void* x9_1 = *(x0_1 + 8)
    *(x21 + 0x50) = x9_1
    
    if (x9_1 == 0)
        *(x21 + 0x58) = 0
    else
        *(x9_1 + 0x10) = 0
        i = *(x21 + 0x60)
    
    int32_t* x19_1 = *x0_1
    *(x21 + 0x60) = i - 1
    XPooledFree(x0_1, 0x18)
    NetworkProcessMessage(x19_1)
    int32_t x8_1 = x19_1[1]
    
    if (x8_1 == 0x3ec || x8_1 == 0xfa2 || x8_1 == 0x5de)
        int32_t x8_2 = *x19_1
        
        if (x8_2 != 0)
            int64_t* x10_1 = *gNetwork
            uint64_t x9_2 = zx.q(x8_2.w)
            
            if (x9_2.d u< x10_1[1].d)
                int64_t x10_2 = *x10_1
                
                if (*(x10_2 + x9_2 * 0x90 + 0x88) == x8_2)
                    NetLocFree(x10_2 + x9_2 * 0x90)
