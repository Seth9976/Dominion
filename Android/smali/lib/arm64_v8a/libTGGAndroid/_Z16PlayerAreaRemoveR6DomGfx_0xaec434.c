// 函数: _Z16PlayerAreaRemoveR6DomGfx
// 地址: 0xaec434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))
void* __offset(DomGfx, 0x228) x8_1

if (x8.d u<= 7)
    switch (x8)
        case 0
            x8_1 = arg1 + 0xa0
        label_aec480:
            int64_t x9_1 = sx.q(*x8_1)
            int64_t (* x9_2)()
            
            if (x9_1.d == 0xffffffff)
                x9_2 = gDomClient + 0x48
            else
                x9_2 = gDomClient + 0x48 + x9_1 * 0x4d48
            
            int64_t (* x11_3)() = x9_2 + 0x409c
            int32_t x9_3 = *x11_3
            
            if (x9_3 == 0)
            label_aec660:
                
                if (*(arg1 + 0x5c) == 0x3e9)
                    return 
            else
                int32_t x10_3 = *(arg1 + 0x21d0)
                
                if (x9_3 != x10_3)
                    while (true)
                        void* x14_1 = *(gDomClient + 0x205e0) + mulu.dp.d(x9_3 & 0xffff, 0x21d8)
                        x9_3 = *(x14_1 + 0x213c)
                        
                        if (x9_3 == 0)
                            break
                        
                        if (x9_3 == x10_3)
                            x11_3 = x14_1 + 0x213c
                            goto label_aec4ec
                    
                    goto label_aec660
                
            label_aec4ec:
                int32_t x14_4 = *(arg1 + 0x213c)
                *x11_3 = x14_4
                *(arg1 + 0x213c) = 0
                
                if (x14_4 == 0)
                    return 
                
                while (true)
                    int64_t x15_2 = *(gDomClient + 0x205e0)
                    uint64_t x16_8 = zx.q(x14_4) & 0xffff
                    void* x13_1 = x15_2 + mulu.dp.d(x16_8.d, 0x21d8)
                    uint64_t x17_7 = zx.q(*(x13_1 + 0x2c))
                    int32_t x14_6 = *(x13_1 + 0x2140) - 1
                    *(x13_1 + 0x2140) = x14_6
                    
                    if (x17_7.d u> 7)
                        break
                    
                    int32_t* x17_2
                    
                    switch (x17_7)
                        case 0
                            x17_2 = x15_2 + x16_8 * 0x21d8 + 0xa0
                        case 1, 2, 5
                            break
                        case 3
                            x17_2 = x15_2 + x16_8 * 0x21d8 + 0x58
                        case 4
                            x17_2 = x15_2 + x16_8 * 0x21d8 + 0x1c4
                        case 6
                            x17_2 = x15_2 + x16_8 * 0x21d8 + 0x1e4
                        case 7
                            x17_2 = x15_2 + x16_8 * 0x21d8 + 0x228
                    
                    int32_t x17_3 = *x17_2
                    void* x15_1 = x15_2 + x16_8 * 0x21d8
                    *(x15_1 + 0x260) = 1
                    *(x15_1 + 0x268) = 0x1e
                    *(x15_1 + 0x274) = x14_6
                    *(x15_1 + 0x270) = x17_3
                    *(x15_1 + 0x278) = zx.o(0)
                    *(x15_1 + 0x288) = zx.o(0)
                    *(x15_1 + 0x298) = zx.o(0)
                    *(x15_1 + 0x2a8) = zx.o(0)
                    *(x15_1 + 0x2b8) = zx.o(0)
                    *(x15_1 + 0x2c8) = zx.o(0)
                    *(x15_1 + 0x318) = x17_3
                    *(x15_1 + 0x3c0) = x17_3
                    *(x15_1 + 0x2d8) = 0
                    *(x15_1 + 0x31c) = x14_6
                    *(x15_1 + 0x3c4) = x14_6
                    *(x15_1 + 0x2e0) = x13_1
                    *(x15_1 + 0x308) = 1
                    *(x15_1 + 0x310) = 0x1e
                    __builtin_memset(x15_1 + 0x320, 0, 0x68)
                    *(x15_1 + 0x388) = x13_1
                    *(x15_1 + 0x3b0) = 1
                    *(x15_1 + 0x3b8) = 0x1e
                    __builtin_memset(x15_1 + 0x3c8, 0, 0x68)
                    x14_4 = *(x15_1 + 0x213c)
                    *(x15_1 + 0x430) = x13_1
                    *(x15_1 + 0x1f78) = 0
                    
                    if (x14_4 == 0)
                        return 
        case 3
            x8_1 = arg1 + 0x58
            goto label_aec480
        case 4
            x8_1 = arg1 + 0x1c4
            goto label_aec480
        case 6
            x8_1 = arg1 + 0x1e4
            goto label_aec480
        case 7
            x8_1 = arg1 + 0x228
            goto label_aec480
pthread_kill(pthread_self(), 6)
DomGfx* x0_1
DomGfx* x1_2
int32_t x2
x0_1, x1_2, x2 = XNoReturn()
return PileAddTokenSlot(x0_1, x1_2, x2) __tailcall
