// 函数: _Z24CalcCardsYouWouldDiscardR7DomGame9PlayerWhoP6CardID
// 地址: 0xbeda34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2.d
int32_t x21 = 0

if (CountOngoing(arg1, arg2, 0x1f, 0, 0) s<= 0)
    uint32_t x25_1 = *(arg1 + muls.dp.d(x22, 0x5a30) + 0x17f6c)
    
    if (x25_1 == 0)
        x21 = 0
    else
        uint64_t x23_1 = zx.q(x25_1.w)
        
        if (x23_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x21 = 0
        uint64_t x26_1 = zx.q(*(arg1 + x23_1 * 0x68 + 0x1ac8)) << 0x20
        
        while (true)
            if ((CardStaysUntilNextTurn(arg1, zx.q(x25_1)) & 1) == 0)
                *(arg3 + (sx.q(x21) << 2)) = x25_1
                x21 += 1
            
            x25_1 = (x26_1 u>> 0x20).d
            
            if (x25_1 == 0)
                break
            
            int32_t x26_3 = x25_1 & 0xffff
            
            if (x26_3 u>= 0x320)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x26_1 = zx.q(x25_1) | zx.q(*(arg1 + mulu.dp.d(x26_3, 0x68) + 0x1ac8)) << 0x20
    
    uint32_t x25_2 = *(arg1 + sx.q(x22) * 0x5a30 + 0x1810c)
    
    if (x25_2 != 0)
        uint64_t x23_2 = zx.q(x25_2.w)
        
        if (x23_2.d u>= 0x320)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_18 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_19 = *(x8_18 - 0x90)
            *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t fp_1 = zx.q(*(arg1 + x23_2 * 0x68 + 0x1ac8)) << 0x20
        
        while (true)
            if ((CardStaysUntilNextTurn(arg1, zx.q(x25_2)) & 1) == 0)
                *(arg3 + (sx.q(x21) << 2)) = x25_2
                x21 += 1
            
            x25_2 = (fp_1 u>> 0x20).d
            
            if (x25_2 == 0)
                break
            
            int32_t fp_3 = x25_2 & 0xffff
            
            if (fp_3 u>= 0x320)
                void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_27 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                *(*(x8_27 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_28 = *(x8_27 - 0x90)
                *(x8_28 + 0x1a2c) = *(x8_28 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            fp_1 = zx.q(x25_2) | zx.q(*(arg1 + mulu.dp.d(fp_3, 0x68) + 0x1ac8)) << 0x20

return zx.q(x21)
