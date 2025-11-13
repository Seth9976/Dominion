// 函数: _Z15SumOngoingParamR7DomGameRK10AbilityIDs
// 地址: 0xbc5f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (*(arg2 + 0x400) s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        uint64_t x1 = zx.q(*(arg2 + (i << 2)))
        void* x8_1
        
        if ((x1 & 0x30) != 0)
            x8_1 = AbilityGetStatic(arg1, x1) + 0xa0
        else
            void* x0_2 = AbilityGetRegistered(arg1, x1)
            
            if (*(x0_2 + 0x4c) != 3)
                void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_6 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_7 = *(x8_6 - 0x90)
                *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x8_1 = x0_2 + 0x54
        
        i += 1
        x20 += *x8_1
    while (i s< sx.q(*(arg2 + 0x400)))

return zx.q(x20)
