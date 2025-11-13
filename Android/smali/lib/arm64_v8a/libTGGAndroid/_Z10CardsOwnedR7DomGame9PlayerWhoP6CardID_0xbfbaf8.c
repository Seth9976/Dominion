// 函数: _Z10CardsOwnedR7DomGame9PlayerWhoP6CardID
// 地址: 0xbfbaf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg1 + 0x1528) s< 2)
    x21 = 0
else
    int32_t x22_1 = arg2
    x21 = 0
    int32_t i = 1
    
    do
        int32_t x19_1 = i & 0xffff
        
        if (x19_1 u> 0x31f)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            void* x8_7 = arg1 + mulu.dp.d(x19_1, 0x68)
            
            if (*(x8_7 + 0x1a9c) == *(x8_7 + 0x1a94))
                void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_11 = *(x8_10 - 0x90)
                *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                
                if (*(x8_7 + 0x1a94) == x22_1)
                    *(arg3 + (sx.q(x21) << 2)) = i
                    x21 += 1
        else
            void* x9_1 = arg1 + mulu.dp.d(x19_1, 0x68)
            int32_t x8_2 = *(x9_1 + 0x1a9c)
            
            if (x8_2 == *(x9_1 + 0x1a94) && x8_2 == x22_1)
                *(arg3 + (sx.q(x21) << 2)) = i
                x21 += 1
        
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(x21)
