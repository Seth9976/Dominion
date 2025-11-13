// 函数: _Z21FilterMaxOneAbilitiesR7DomGameR10AbilityIDs
// 地址: 0xbd8eb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 

DomGame& x20_1 = arg1
uint64_t i_1 = 0
int64_t x8_1
uint64_t i

do
    uint64_t x21_1 = zx.q(*(arg2 + (i_1 << 2)))
    
    if (AbilityCanTriggerMultipleTimes(x20_1, x21_1).d != 2)
        x8_1 = zx.q(*(arg2 + 0x400))
        i = i_1 + 1
    else
        x8_1 = sx.q(*(arg2 + 0x400))
        i = i_1 + 1
        
        if (i s< x8_1)
            int32_t i_2 = i.d
            
            while (true)
                if (AbilitySourceCardRef(x20_1, x21_1)
                        == AbilitySourceCardRef(x20_1, zx.q(*(arg2 + (sx.q(i_2) << 2)))).d)
                    int64_t x8_3 = sx.q(*(arg2 + 0x400)) - 1
                    *(arg2 + 0x400) = x8_3.d
                    *(arg2 + (sx.q(i_2) << 2)) = *(arg2 + (x8_3 << 2))
                    x8_1 = zx.q(*(arg2 + 0x400))
                    i_2 = i_1.d + 1
                    
                    if (i_2 s>= x8_1.d)
                        break
                else
                    i_1 = zx.q(i_2)
                    x8_1 = zx.q(*(arg2 + 0x400))
                    i_2 = i_1.d + 1
                    
                    if (i_2 s>= x8_1.d)
                        break
    
    i_1 = i
while (i s< sx.q(x8_1.d))

if (x8_1.d s< 1)
    return 

int64_t x27_1 = 0

while (true)
    uint64_t x25_1 = zx.q(*(arg2 + (x27_1 << 2)))
    void* __offset(DomGame, 0xb8) x8_7
    int32_t x24_1
    uint64_t fp_1
    
    if ((x25_1 & 0x30) == 0)
        arg1 = AbilityGetRegistered(x20_1, x25_1)
        
        if (*(arg1 + 0x4c) != 2)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_11 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_12 = *(x8_11 - 0x90)
            *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if ((zx.d(*(arg1 + 0x70)) & 0x20) != 0)
            x24_1 = AbilitySource(x20_1, x25_1)
            x8_7 = AbilityGetRegistered(x20_1, x25_1) + 0x94
            fp_1 = x27_1 + 1
            
            if (fp_1 s< sx.q(*(arg2 + 0x400)))
                goto label_bd90ac
    else if ((zx.d(*(AbilityGetStatic(x20_1, x25_1) + 0xb4)) & 0x20) != 0)
        x24_1 = AbilitySource(x20_1, x25_1)
        x8_7 = AbilityGetStatic(x20_1, x25_1) + 0xb8
        fp_1 = x27_1 + 1
        
        if (fp_1 s< sx.q(*(arg2 + 0x400)))
        label_bd90ac:
            int32_t x28_1 = *x8_7
            int32_t x21_2 = x27_1.d
            
            while (true)
                uint64_t x26_1 = zx.q(*(arg2 + (sx.q(fp_1.d) << 2)))
                int32_t x0_14 = AbilitySource(x20_1, x26_1)
                void* __offset(DomGame, 0xb8) x8_15
                
                if ((x26_1 & 0x30) == 0)
                    x8_15 = AbilityGetRegistered(x20_1, x26_1) + 0x94
                    
                    if (x24_1 == x0_14)
                    label_bd9118:
                        
                        if (x28_1 == *x8_15)
                            int64_t x8_18 = sx.q(*(arg2 + 0x400)) - 1
                            *(arg2 + 0x400) = x8_18.d
                            *(arg2 + (sx.q(fp_1.d) << 2)) = *(arg2 + (x8_18 << 2))
                            fp_1 = zx.q(x21_2 + 1)
                            
                            if (fp_1.d s>= *(arg2 + 0x400))
                                break
                            
                            continue
                else
                    x8_15 = AbilityGetStatic(x20_1, x26_1) + 0xb8
                    
                    if (x24_1 == x0_14)
                        goto label_bd9118
                x21_2 = fp_1.d
                fp_1 = zx.q(x21_2 + 1)
                
                if (fp_1.d s>= *(arg2 + 0x400))
                    break
    x27_1 += 1
    
    if (x27_1 s>= sx.q(*(arg2 + 0x400)))
        break
