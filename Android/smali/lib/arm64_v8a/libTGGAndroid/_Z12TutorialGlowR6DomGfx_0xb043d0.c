// 函数: _Z12TutorialGlowR6DomGfx
// 地址: 0xb043d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) == 1)
    int64_t var_58
    int32_t x0_3 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_58)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    int64_t x9_1
    
    if (x8_1.d s< x0_3)
        x9_1 = var_58
    
    if (x8_1.d s>= x0_3 || x9_1 == 0)
        return 0
    
    if (*(x9_1 + x8_1 * 0xb0 + 0x28) != 0)
        void* x8_2 = x9_1 + x8_1 * 0xb0
        
        for (int64_t i = 0; i != 0x80; i += 4)
            uint64_t x2_1 = zx.q(*(x8_2 + 0x2c + i))
            
            if (x2_1.d == 0)
                break
            
            uint64_t x8_5 = zx.q(*(x9_1 + x8_1 * 0xb0 + 0x28) - 1)
            
            if (x8_5.d u> 0xa)
                pthread_kill(pthread_self(), 6)
                uint64_t x0_16
                int64_t x1_7
                int32_t x2_2
                int32_t x3
                bool* x4
                x0_16, x1_7, x2_2, x3, x4 = XNoReturn()
                return ShouldShowCount(x0_16, x1_7, x2_2, x3, x4) __tailcall
            
            int32_t x8_16
            
            switch (x8_5)
                case 0
                    if (*(arg1 + 0x2c) == 0
                            && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), x2_1) & 1) != 0
                            && *(arg1 + 0xa4) == 0x3eb)
                        return 1
                case 1
                    if (*(arg1 + 0x2c) == 0)
                    label_b04598:
                        
                        if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), x2_1) & 1) != 0
                                && *(arg1 + 0xa4) == 0x3ea)
                            return 1
                case 2
                    if (*(arg1 + 0x2c) == 3)
                    label_b04620:
                        
                        if (*(arg1 + 0x30) == x2_1.d)
                            return 1
                case 3
                    if (*(arg1 + 0x2c) == 0
                            && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), x2_1) & 1) != 0
                            && *(arg1 + 0xa4) == 0x3e9)
                        return 1
                case 4
                    if (*(arg1 + 0x2c) == 0
                            && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), x2_1) & 1) != 0)
                        int32_t x8_13 = *(gDomClient + 0x38)
                        int32_t x8_14
                        
                        x8_14 = x8_13 == 0xffffffff ? 0 : x8_13
                        
                        if (*(arg1 + 0xa0) == x8_14 && *(arg1 + 0xa4) == 0x3ec)
                            return 1
                case 5
                    x8_16 = *(arg1 + 0x2c)
                    
                    if (x8_16 != 3)
                    label_b0458c:
                        
                        if (x8_16 == 0)
                            goto label_b04598
                    else if (*(arg1 + 0x30) == *(x8_2 + 0x24))
                        return 1
                case 6
                    x8_16 = *(arg1 + 0x2c)
                    
                    if (x8_16 == 3)
                        goto label_b04620
                    
                    goto label_b0458c
                case 7
                    if (*(arg1 + 0x2c) == 5 && *(arg1 + 0x204) == x2_1.d)
                        return 1
                case 8
                    int32_t x8_21 = *(arg1 + 0x2c)
                    
                    if (x8_21 == 4)
                        if (*(arg1 + 0x1b4) == x2_1.d)
                            return 1
                    else if (x8_21 == 6)
                        return 1
                case 9
                    if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x5c) == x2_1.d)
                        return 1
                case 0xa
                    if (*(arg1 + 0x2c) == 0
                            && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), x2_1) & 1) != 0)
                        return 1

return 0
