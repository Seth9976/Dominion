// 函数: _Z13DomExpandPileR6DomGfxb
// 地址: 0xaeac38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result
int64_t var_108

if (*(GetClient() + 0x5068) != 1)
label_aeacfc:
    int32_t x8_4 = *(gDomClient + 0x1f8e4)
    
    if (x8_4 != 0 && (arg2.d & 1) == 0 && x8_4 != *(arg1 + 0x21d0))
        DomMinimizePileAny()
    
    if (*(arg1 + 0x5c) == 0x3ee)
        uint64_t x11_1 = zx.q(*(gDomClient + 0x205e8))
        
        if (x11_1.d != 0)
            DomGfx* i_5 = *(gDomClient + 0x205e0)
            int32_t x8_7 = *(arg1 + 0x58)
            int64_t x9_3 = *(arg1 + 0x60)
            int64_t x12_1 = i_5 + x11_1 * 0x21d8
            DomGfx* i = i_5
            
            do
                if (zx.d(*(i + 0x21d2)) != 0)
                    while (i != 0xffffffff)
                        if (*(i + 0x2c) == 3 && *(i + 0x58) == x8_7 && *(i + 0x5c) == 0x3ef
                                && *(i + 0x60) == x9_3)
                            if (i != 0)
                                DomExpandPile(i, true)
                                x8_7 = *(arg1 + 0x58)
                                x9_3 = *(arg1 + 0x60)
                                x11_1 = zx.q(*(gDomClient + 0x205e8))
                                i_5 = *(gDomClient + 0x205e0)
                            
                            break
                        
                        if (i == 0)
                            i = i_5
                        else
                            i += 0x21d8
                        
                        if (i u>= x12_1)
                            break
                        
                        while (zx.d(*(i + 0x21d2)) == 0)
                            i += 0x21d8
                            
                            if (i u>= x12_1)
                                goto label_aeade8
                    
                    break
                
                i += 0x21d8
            while (i u< x12_1)
            
        label_aeade8:
            
            if (x11_1.d != 0)
                void* x11_2 = i_5 + mulu.dp.d(x11_1.d, 0x21d8)
                DomGfx* i_1 = i_5
                
                do
                    if (zx.d(*(i_1 + 0x21d2)) != 0)
                        while (i_1 != 0xffffffff)
                            if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == x8_7
                                    && *(i_1 + 0x5c) == 0x3f0 && *(i_1 + 0x60) == x9_3)
                                if (i_1 != 0)
                                    DomExpandPile(i_1, true)
                                
                                break
                            
                            if (i_1 == 0)
                                i_1 = i_5
                            else
                                i_1 += 0x21d8
                            
                            if (i_1 u>= x11_2)
                                break
                            
                            while (zx.d(*(i_1 + 0x21d2)) == 0)
                                i_1 += 0x21d8
                                
                                if (i_1 u>= x11_2)
                                    goto label_aeae90
                        
                        break
                    
                    i_1 += 0x21d8
                while (i_1 u< x11_2)
    
label_aeae90:
    int32_t x8_8 = *(arg1 + 0x30)
    int32_t x20_1
    
    if (x8_8 == 0)
        x20_1 = *(arg1 + 0x5c)
    else
        x20_1 = x8_8
    
    if (*(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
        int32_t x0_7 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_108)
        int64_t x8_11 = sx.q(*(gDomClient + 0x205cc))
        
        if (x8_11.d s< x0_7)
            int64_t x9_5 = var_108
            
            if (x9_5 != 0 && *(x9_5 + x8_11 * 0xb0 + 0x18) == 0x13)
                int32_t x8_13 = *(x9_5 + x8_11 * 0xb0 + 0x24)
                
                if (x8_13 == 0 || x20_1 == 0 || x8_13 == x20_1)
                    TutorialContinue()
    
    int32_t x20_2 = *(arg1 + 0x21d0)
    *(gDomClient + 0x1f8e4) = x20_2
    int128_t v0_1
    result, v0_1 = GameMainUI()
    void* i_4 = *(gDomClient + 0x205e0)
    uint64_t x9_7 = zx.q(*(gDomClient + 0x205e8))
    
    if (result.d == 0)
        if (x9_7.d != 0)
            void* i_2 = i_4
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    while (i_2 != 0xffffffff)
                        if (*(i_2 + 0x2c) == 0 && *(i_2 + 0x9c) == x20_2)
                            int64_t x8_15 = *(arg1 + 0x60)
                            int32_t x17_3 = *(arg1 + 0x58)
                            int32_t x9_9 = *(arg1 + 0x5c)
                            result = zx.q(*(i_2 + 0xb0))
                            *(i_2 + 0x260) = 1
                            *(i_2 + 0x268) = 0x15
                            __builtin_memset(i_2 + 0x280, 0, 0x68)
                            *(i_2 + 0x308) = 1
                            *(i_2 + 0x310) = 0x15
                            *(i_2 + 0x26c) = x9_9
                            *(i_2 + 0x270) = x17_3
                            *(i_2 + 0x274) = result.d
                            *(i_2 + 0x278) = x8_15
                            *(i_2 + 0x314) = x9_9
                            *(i_2 + 0x318) = x17_3
                            *(i_2 + 0x31c) = result.d
                            *(i_2 + 0x320) = x8_15
                            *(i_2 + 0x378) = zx.o(0)
                            *(i_2 + 0x368) = zx.o(0)
                            *(i_2 + 0x358) = zx.o(0)
                            *(i_2 + 0x348) = zx.o(0)
                            *(i_2 + 0x388) = 0
                            __builtin_memset(i_2 + 0x328, 0, 0x20)
                            *(i_2 + 0x3b0) = 1
                            *(i_2 + 0x3b8) = 0x15
                            *(i_2 + 0x3bc) = x9_9
                            *(i_2 + 0x3c0) = x17_3
                            *(i_2 + 0x3c4) = result.d
                            *(i_2 + 0x3c8) = x8_15
                            *(i_2 + 0x1f78) = 0
                            __builtin_memset(i_2 + 0x3d0, 0, 0x68)
                            i_4 = *(gDomClient + 0x205e0)
                            x9_7 = zx.q(*(gDomClient + 0x205e8))
                        
                        if (i_2 == 0)
                            i_2 = i_4
                        else
                            i_2 += 0x21d8
                        
                        void* x17_5 = i_4 + mulu.dp.d(x9_7.d, 0x21d8)
                        
                        if (i_2 u>= x17_5)
                            break
                        
                        while (true)
                            result = zx.q(*(i_2 + 0x21d2))
                            
                            if (result.d != 0)
                                break
                            
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x17_5)
                                return result
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< i_4 + x9_7 * 0x21d8)
    else if (x9_7.d != 0)
        void* i_3 = i_4
        
        do
            if (zx.d(*(i_3 + 0x21d2)) != 0)
                while (i_3 != 0xffffffff)
                    if (*(i_3 + 0x2c) == 0 && *(i_3 + 0x9c) == x20_2)
                        v0_1.q = *(arg1 + 0x58)
                        int64_t x8_14 = *(arg1 + 0x60)
                        int32_t x9_8 = *(i_3 + 0xb0)
                        uint64_t v0_2 = vrev64_s32(v0_1)
                        int128_t var_130_1
                        __builtin_memset(&var_130_1, 0, 0x20)
                        var_130_1.q = i_3
                        var_130_1:8.d = 2
                        int128_t var_120_1
                        var_120_1:8.d = 0
                        var_108.d = 1
                        int32_t var_100_1 = 0x15
                        int32_t var_f4_1 = x9_8
                        int64_t var_f0_1 = x8_14
                        uint64_t var_fc_1 = v0_2
                        int128_t var_e8
                        __builtin_memset(&var_e8, 0, 0x68)
                        result, v0_1 = MoveComponent<DomLoc, DomMoveCallback>::Move(i_3 + 0x258, 
                            &var_108, 6, 1)
                        i_4 = *(gDomClient + 0x205e0)
                        x9_7 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (i_3 == 0)
                        i_3 = i_4
                    else
                        i_3 += 0x21d8
                    
                    void* x10_10 = i_4 + mulu.dp.d(x9_7.d, 0x21d8)
                    
                    if (i_3 u>= x10_10)
                        break
                    
                    while (zx.d(*(i_3 + 0x21d2)) == 0)
                        i_3 += 0x21d8
                        
                        if (i_3 u>= x10_10)
                            return result
                
                break
            
            i_3 += 0x21d8
        while (i_3 u< i_4 + x9_7 * 0x21d8)
else
    result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_108)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s>= result.d)
        goto label_aeacfc
    
    int64_t x9_1 = var_108
    
    if (x9_1 == 0)
        goto label_aeacfc
    
    if (*(x9_1 + x8_1 * 0xb0 + 0x18) == 0x13)
        int32_t x10_4 = *(x9_1 + x8_1 * 0xb0 + 0x24)
        
        if (x10_4 == 0x70d || x10_4 == 0x718 || x10_4 == 0x1128
                || *(x9_1 + x8_1 * 0xb0 + 0x1c) == 0x11)
            goto label_aeacfc
    else if (*(x9_1 + x8_1 * 0xb0 + 0x1c) == 0x11)
        goto label_aeacfc
return result
