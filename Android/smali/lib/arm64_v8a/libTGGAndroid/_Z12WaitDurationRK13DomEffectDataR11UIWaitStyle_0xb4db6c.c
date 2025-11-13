// 函数: _Z12WaitDurationRK13DomEffectDataR11UIWaitStyle
// 地址: 0xb4db6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
uint64_t x8 = zx.q(*arg1)

if (x8.d u<= 0x2f)
    switch (x8)
        case 0, 1, 2, 3, 5, 6, 8, 0xb, 0xc, 0xd, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            return 0
        case 4
            return 0xf
        case 7
            int32_t x8_4
            
            if (*(arg1 + 0xc) == 0)
                x8_4 = 7
            else
                x8_4 = 6
            
            return zx.q(x8_4)
        case 9, 0xa
            uint64_t x8_2 = zx.q(*(arg1 + 0x18))
            
            if (x8_2.d u<= 0x18)
                switch (x8_2)
                    case 0, 0xd, 0xe
                        return 2
                    case 1, 8, 0xb, 0xc, 0xf, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18
                        return 0
                    case 2, 3
                        int32_t x8_5 = *(gDomClient + 0x38)
                        int32_t x8_6
                        
                        x8_6 = x8_5 == 0xffffffff ? 0 : x8_5
                        
                        int32_t x8_7
                        
                        if (*(arg1 + 4) == x8_6)
                            x8_7 = 5
                        else
                            x8_7 = 4
                        
                        return zx.q(x8_7)
                    case 4, 5, 6, 7, 9, 0xa, 0x10, 0x11
                        return 4
        case 0xf
            return 4

pthread_kill(pthread_self(), 6)
DomClient* x0_7
DomEffectData* x1
x0_7, x1 = XNoReturn()
return TryGrabLocks(x0_7, x1) __tailcall
