// 函数: _Z22UI2IsStateEffectActive9UI2HandlePKc
// 地址: 0x1043234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1)
int64_t x8 = *gUI2
uint64_t x11_1 = zx.q(*(x8 + mulu.dp.d(x10.d, 0x19a8) + 0x1970))
int32_t x12_2

if (x11_1.d s< 1)
label_1043328:
    x12_2 = 0
else
    x12_2 = *(x8 + x10 * 0x19a8 + 0x1870)
    uint64_t x14_1 = zx.q(x12_2.w)
    int32_t x13_2 = *(x8 + x14_1 * 0x19a8 + 0x1658)
    int32_t x16_2
    
    if (x13_2 == 0)
        x16_2 = x12_2
    label_10432d0:
        
        if (x16_2 != 0)
            x12_2 = x16_2
        
        if (x16_2 == 0)
        label_10432f0:
            
            if (x13_2 != 0)
                int64_t x11_2 = x11_1 - 1
                int16_t* x10_2 = x8 + x10 * 0x19a8 + 0x1874
                uint64_t x13_3
                
                do
                    if (x11_2 == 0)
                        goto label_1043328
                    
                    x13_3 = zx.q(*x10_2)
                    x10_2 = &x10_2[2]
                    x11_2 -= 1
                while (*(x8 + x13_3 * 0x19a8 + 0x1658) != 0)
                
                x12_2 = x13_3.d
    else
        if (*(x8 + x14_1 * 0x19a8 + 0x1658) != 0)
            int64_t i = x11_1 - 1
            int32_t* x17_1 = x8 + x10 * 0x19a8 + 0x1874
            
            while (i != 0)
                x16_2 = *x17_1
                x17_1 = &x17_1[1]
                i -= 1
                
                if (*(x8 + zx.q(x16_2.w) * 0x19a8 + 0x1658) == 0)
                    goto label_10432d0
            
            goto label_10432f0
        
        int32_t x16_3 = x12_2
        
        if (x16_3 != 0)
            x12_2 = x16_3
        
        if (x16_3 == 0)
            goto label_10432f0

uint64_t x10_3 = zx.q(x12_2) & 0xffff
int64_t x20 = sx.q(*(x8 + mulu.dp.d(x10_3.d, 0x19a8) + 0x17c0))

if (x20.d s>= 1)
    int64_t x21_1 = 0
    int64_t* x22_1 = *(x8 + x10_3 * 0x19a8 + 0x17b8) + 8
    
    do
        int32_t x8_3 = x22_1[-1].d
        
        if (x8_3 != 1)
            if (x8_3 != 0)
                pthread_kill(pthread_self(), 6)
                return UI2IsTransitioning(XNoReturn()) __tailcall
            
            if (strcmp(*x22_1, arg2) == 0)
                return 1
        
        x21_1 += 1
        x22_1 = &x22_1[6]
    while (x21_1 s< x20)

return 0
