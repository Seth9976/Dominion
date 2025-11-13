// 函数: _Z15DomMinimizePileR6DomGfx
// 地址: 0xae9f6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
int64_t var_110

if (*(GetClient() + 0x5068) != 1)
label_ae9ff0:
    
    if (*(arg1 + 0x5c) == 0x3ee)
        uint64_t x11_1 = zx.q(*(gDomClient + 0x205e8))
        
        if (x11_1.d != 0)
            DomGfx* i_4 = *(gDomClient + 0x205e0)
            int32_t x8_6 = *(arg1 + 0x58)
            int64_t x9_2 = *(arg1 + 0x60)
            int64_t x12_1 = i_4 + x11_1 * 0x21d8
            DomGfx* i = i_4
            
            do
                if (zx.d(*(i + 0x21d2)) != 0)
                    while (i != 0xffffffff)
                        if (*(i + 0x2c) == 3 && *(i + 0x58) == x8_6 && *(i + 0x5c) == 0x3ef
                                && *(i + 0x60) == x9_2)
                            if (i != 0)
                                DomMinimizePile(i)
                                x8_6 = *(arg1 + 0x58)
                                x9_2 = *(arg1 + 0x60)
                                x11_1 = zx.q(*(gDomClient + 0x205e8))
                                i_4 = *(gDomClient + 0x205e0)
                            
                            break
                        
                        if (i == 0)
                            i = i_4
                        else
                            i += 0x21d8
                        
                        if (i u>= x12_1)
                            break
                        
                        while (zx.d(*(i + 0x21d2)) == 0)
                            i += 0x21d8
                            
                            if (i u>= x12_1)
                                goto label_aea0b8
                    
                    break
                
                i += 0x21d8
            while (i u< x12_1)
            
        label_aea0b8:
            
            if (x11_1.d != 0)
                void* x11_2 = i_4 + mulu.dp.d(x11_1.d, 0x21d8)
                DomGfx* i_1 = i_4
                
                do
                    if (zx.d(*(i_1 + 0x21d2)) != 0)
                        while (i_1 != 0xffffffff)
                            if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == x8_6
                                    && *(i_1 + 0x5c) == 0x3f0 && *(i_1 + 0x60) == x9_2)
                                if (i_1 != 0)
                                    DomMinimizePile(i_1)
                                
                                break
                            
                            if (i_1 == 0)
                                i_1 = i_4
                            else
                                i_1 += 0x21d8
                            
                            if (i_1 u>= x11_2)
                                break
                            
                            while (zx.d(*(i_1 + 0x21d2)) == 0)
                                i_1 += 0x21d8
                                
                                if (i_1 u>= x11_2)
                                    goto label_aea160
                        
                        break
                    
                    i_1 += 0x21d8
                while (i_1 u< x11_2)
    
label_aea160:
    int32_t x24_1 = *(arg1 + 0x58)
    int32_t x9_3 = *(arg1 + 0x5c)
    int64_t x23_1 = *(arg1 + 0x60)
    int128_t var_170
    __builtin_memset(&var_170, 0, 0x5c)
    int32_t x20_1 = *(arg1 + 0x30)
    int32_t x9_4
    
    x9_4 = x9_3 == 0x3ef ? 0x3ee : x9_3
    
    int32_t x25_1
    
    x25_1 = x9_4 == 0x3f0 ? 0x3ee : x9_4
    
    int128_t v2_1
    int128_t v3_1
    result, v2_1, v3_1 = GetClient()
    
    if (*(result + 0x5068) != 0)
        result, v2_1, v3_1 = GetClient()
        
        if (*(result + 0x5068) == 1)
            result, v2_1, v3_1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_110)
            int64_t x8_9 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_9.d s< result.d)
                int64_t x9_5 = var_110
                
                if (x9_5 != 0 && *(x9_5 + x8_9 * 0xb0 + 0x18) == 0x14)
                    int32_t x8_11 = *(x9_5 + x8_9 * 0xb0 + 0x24)
                    
                    if (x8_11 == 0 || x20_1 == 0 || x8_11 == x20_1)
                        result, v2_1, v3_1 = TutorialContinue()
    
    uint64_t x9_6 = zx.q(*(gDomClient + 0x205e8))
    int128_t var_f0
    int128_t v0_1
    int128_t v1_1
    
    if (x9_6.d != 0)
        void* i_2 = *(gDomClient + 0x205e0)
        int32_t x27_1 = *(arg1 + 0x21d0)
        int64_t x9_7 = i_2 + x9_6 * 0x21d8
        
        do
            if (zx.d(*(i_2 + 0x21d2)) != 0)
                if (i_2 != 0xffffffff)
                    int128_t var_90
                    void* x11_4 = &var_90:4
                    
                    do
                        if (*(i_2 + 0x2c) == 0 && *(i_2 + 0x9c) == x27_1)
                            result, v0_1, v1_1, v2_1, v3_1 = GameMainUI()
                            int128_t var_100
                            int128_t var_e0
                            int128_t var_d0
                            
                            if (result.d == 0)
                                __builtin_memset(&var_110, 0, 0x5c)
                                *(i_2 + 0x260) = 1
                                *(i_2 + 0x268) = 6
                                *(i_2 + 0x26c) = x25_1
                                *(i_2 + 0x270) = x24_1
                                *(i_2 + 0x274) = 0
                                *(i_2 + 0x278) = x23_1
                                *(i_2 + 0x280) = 0
                                *(i_2 + 0x294) = zx.o(0)
                                *(i_2 + 0x284) = zx.o(0)
                                __builtin_memset(i_2 + 0x2d0, 0, 0x18)
                                *(i_2 + 0x2c4) = zx.o(0)
                                *(i_2 + 0x2b4) = zx.o(0)
                                *(i_2 + 0x2a4) = zx.o(0)
                                *(i_2 + 0x308) = 1
                                *(i_2 + 0x310) = 6
                                *(i_2 + 0x314) = x25_1
                                *(i_2 + 0x318) = x24_1
                                *(i_2 + 0x31c) = 0
                                *(i_2 + 0x320) = x23_1
                                *(i_2 + 0x328) = 0
                                v1_1 = var_110.o
                                *(i_2 + 0x33c) = var_100
                                *(i_2 + 0x32c) = v1_1
                                v2_1 = var_f0
                                *(i_2 + 0x378) = var_d0
                                *(i_2 + 0x36c) = var_d0
                                *(i_2 + 0x35c) = var_e0
                                *(i_2 + 0x34c) = v2_1
                                *(i_2 + 0x388) = 0
                                *(i_2 + 0x3b0) = 1
                                *(i_2 + 0x3b8) = 6
                                *(i_2 + 0x3bc) = x25_1
                                *(i_2 + 0x3c0) = x24_1
                                *(i_2 + 0x3c4) = 0
                                *(i_2 + 0x3c8) = x23_1
                                *(i_2 + 0x3d0) = 0
                                v1_1 = var_110.o
                                *(i_2 + 0x3e4) = var_100
                                *(i_2 + 0x3d4) = v1_1
                                v2_1 = var_f0
                                *(i_2 + 0x420) = var_d0
                                *(i_2 + 0x414) = var_d0
                                *(i_2 + 0x404) = var_e0
                                *(i_2 + 0x3f4) = v2_1
                                *(i_2 + 0x430) = 0
                                *(i_2 + 0x1f78) = 0
                            else
                                int128_t v0_2
                                int128_t v1_2
                                int128_t v2_2
                                int128_t v3_2
                                v0_2, v1_2, v2_2, v3_2 = CurrentTransformWithMouseover(i_2)
                                int128_t var_190
                                *x11_4 = var_190
                                int128_t var_180
                                *(x11_4 + 0x10) = var_180
                                *(i_2 + 0x308) = 0
                                v1_2 = var_110.o
                                *(i_2 + 0x32c) = var_f0
                                *(i_2 + 0x31c) = var_100
                                *(i_2 + 0x30c) = v1_2
                                *(i_2 + 0x34c) = var_d0
                                int128_t var_c0
                                *(i_2 + 0x35c) = var_c0
                                int128_t var_b0
                                *(i_2 + 0x36c) = var_b0
                                *(i_2 + 0x33c) = var_e0
                                v1_2 = var_90
                                int32_t var_70
                                *(i_2 + 0x3ac) = var_70
                                *(i_2 + 0x38c) = v1_2
                                int128_t var_80
                                *(i_2 + 0x39c) = var_80
                                int128_t var_a0
                                *(i_2 + 0x37c) = var_a0
                                *(i_2 + 0x3b0) = 0
                                v0_2 = var_f0
                                v2_2 = var_110.o
                                *(i_2 + 0x3c4) = var_100
                                *(i_2 + 0x3d4) = v0_2
                                *(i_2 + 0x3b4) = v2_2
                                *(i_2 + 0x404) = var_c0
                                *(i_2 + 0x414) = var_b0
                                *(i_2 + 0x3e4) = var_e0
                                *(i_2 + 0x3f4) = var_d0
                                v1_2 = var_90
                                *(i_2 + 0x454) = var_70
                                *(i_2 + 0x434) = v1_2
                                *(i_2 + 0x444) = var_80
                                *(i_2 + 0x424) = var_a0
                                *(i_2 + 0x1f78) = 0
                                __builtin_memset(&var_190, 0, 0x20)
                                var_190:8.d = 3
                                var_110.d = 1
                                int32_t var_108_1 = 6
                                int32_t var_104_1 = x25_1
                                var_100.d = x24_1
                                var_100:4.d = 0
                                var_100:8.q = x23_1
                                __builtin_memset(&var_f0, 0, 0x14)
                                var_190.q = i_2
                                var_180:8.d = 0
                                __builtin_memset(&var_f0:4 + 0x10, 0, 0x4c)
                                var_90.q = 0
                                result, v2_1, v3_1 = MoveComponent<DomLoc, DomMoveCallback>::Move(
                                    i_2 + 0x258, &var_110, 6, 1)
                        
                        void* i_3 = *(gDomClient + 0x205e0)
                        
                        if (i_2 == 0)
                            i_2 = i_3
                        else
                            i_2 += 0x21d8
                        
                        int64_t x8_25 = i_3 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                        
                        if (i_2 u>= x8_25)
                            break
                        
                        while (zx.d(*(i_2 + 0x21d2)) == 0)
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x8_25)
                                goto label_aea59c
                    while (i_2 != 0xffffffff)
                
                break
            
            i_2 += 0x21d8
        while (i_2 u< x9_7)
    
label_aea59c:
    __builtin_memset(&var_110, 0, 0x5c)
    *(arg1 + 0x260) = 1
    *(arg1 + 0x268) = 6
    *(arg1 + 0x26c) = x25_1
    *(arg1 + 0x270) = x24_1
    *(arg1 + 0x274) = 0
    *(arg1 + 0x278) = x23_1
    *(arg1 + 0x280) = 0
    *(arg1 + 0x294) = zx.o(0)
    *(arg1 + 0x284) = zx.o(0)
    __builtin_memset(arg1 + 0x2d0, 0, 0x18)
    *(arg1 + 0x2c4) = zx.o(0)
    *(arg1 + 0x2b4) = zx.o(0)
    *(arg1 + 0x2a4) = zx.o(0)
    *(arg1 + 0x308) = 1
    *(arg1 + 0x310) = 6
    *(arg1 + 0x314) = x25_1
    *(arg1 + 0x318) = x24_1
    *(arg1 + 0x31c) = 0
    *(arg1 + 0x320) = x23_1
    *(arg1 + 0x328) = 0
    v1_1 = var_110.o
    int128_t var_100_1
    *(arg1 + 0x33c) = var_100_1
    *(arg1 + 0x32c) = v1_1
    v2_1 = var_f0
    int128_t var_d0_1
    *(arg1 + 0x378) = var_d0_1
    *(arg1 + 0x36c) = var_d0_1
    int128_t var_e0_1
    *(arg1 + 0x35c) = var_e0_1
    *(arg1 + 0x34c) = v2_1
    *(arg1 + 0x388) = 0
    *(arg1 + 0x3b0) = 1
    *(arg1 + 0x3b8) = 6
    *(arg1 + 0x3bc) = x25_1
    *(arg1 + 0x3c0) = x24_1
    *(arg1 + 0x3c4) = 0
    *(arg1 + 0x3c8) = x23_1
    *(arg1 + 0x3d0) = 0
    v0_1 = var_110.o
    *(arg1 + 0x3e4) = var_100_1
    *(arg1 + 0x3d4) = v0_1
    v2_1 = var_f0
    *(arg1 + 0x420) = var_d0_1
    *(arg1 + 0x414) = var_d0_1
    *(arg1 + 0x404) = var_e0_1
    *(arg1 + 0x3f4) = v2_1
    *(arg1 + 0x430) = 0
    *(arg1 + 0x1f78) = 0
    *(gDomClient + 0x1f8e4) = 0
else
    result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_110)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s>= result.d)
        goto label_ae9ff0
    
    int64_t x9_1 = var_110
    
    if (x9_1 == 0 || *(x9_1 + x8_1 * 0xb0 + 0x1c) == 0x1a)
        goto label_ae9ff0
return result
