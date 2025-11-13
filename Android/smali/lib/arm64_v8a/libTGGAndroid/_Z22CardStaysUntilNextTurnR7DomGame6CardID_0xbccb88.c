// 函数: _Z22CardStaysUntilNextTurnR7DomGame6CardID
// 地址: 0xbccb88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x22 = arg2 & 0xffff
int32_t x19 = arg2

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_5 = *(arg1 + 0x19c0)

if (x8_5 s>= 1)
    int32_t x28_1 = *(arg1 + mulu.dp.d(x22, 0x68) + 0x1a78)
    int64_t i = 0
    int64_t x27_1 = 0x3c24c
    
    do
        void* x9_4 = arg1 + x27_1
        int32_t x10_1 = *(x9_4 - 0x44)
        
        if ((x10_1 u> 5 || (1 << x10_1 & 0x32) == 0) && (*(x9_4 + 0xc) & 0xfffffffe) != 2)
            int32_t x9_7 = *(arg1 + x27_1)
            uint32_t x24_1
            
            if (x9_7 == 0 || x9_7 != x19 || *(arg1 + x27_1 + 4) != x28_1)
                void* x9_10 = arg1 + x27_1
                int32_t x10_3 = *(x9_10 - 0x28)
                
                if (x10_3 != 0 && x10_3 == x19)
                    x24_1 = x22
                    
                    if (*(x9_10 - 0x24) == x28_1)
                        goto label_bccccc
            else
                x24_1 = zx.d(*(arg1 + x27_1 - 0x28))
            label_bccccc:
                
                if (x24_1 u>= 0x320)
                    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_10 = *(x8_9 - 0x90)
                    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if ((CardIsFast(arg1, zx.q(*(arg1 + mulu.dp.d(x24_1, 0x68) + 0x1a70)), 0x80) & 1)
                        != 0)
                    return 1
                
                x8_5 = *(arg1 + 0x19c0)
        
        i += 1
        x27_1 += 0xb8
    while (i s< sx.q(x8_5))

return 0
