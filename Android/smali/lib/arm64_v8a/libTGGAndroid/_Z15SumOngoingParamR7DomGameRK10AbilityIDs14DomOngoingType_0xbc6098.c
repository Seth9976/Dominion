// 函数: _Z15SumOngoingParamR7DomGameRK10AbilityIDs14DomOngoingType
// 地址: 0xbc6098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg2 + 0x400) s< 1)
    x21 = 0
else
    int32_t x19_1 = arg3
    int64_t i = 0
    x21 = 0
    
    do
        uint64_t x1 = zx.q(*(arg2 + (i << 2)))
        
        if ((x1 & 0x30) == 0)
            void* x0_3 = AbilityGetRegistered(arg1, x1)
            
            if (*(x0_3 + 0x4c) != 3)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_10 = *(x8_9 - 0x90)
                *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(x0_3 + 0x50) == x19_1)
                goto label_bc61a0
        else if (*(AbilityGetStatic(arg1, x1) + 0x18) == x19_1)
        label_bc61a0:
            uint64_t x1_1 = zx.q(*(arg2 + (i << 2)))
            void* x8_1
            
            if ((x1_1 & 0x30) != 0)
                x8_1 = AbilityGetStatic(arg1, x1_1) + 0xa0
            else
                void* x0_7 = AbilityGetRegistered(arg1, x1_1)
                
                if (*(x0_7 + 0x4c) != 3)
                    void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_16 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
                    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_17 = *(x8_16 - 0x90)
                    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_1 = x0_7 + 0x54
            
            x21 += *x8_1
        
        i += 1
    while (i s< sx.q(*(arg2 + 0x400)))

return zx.q(x21)
