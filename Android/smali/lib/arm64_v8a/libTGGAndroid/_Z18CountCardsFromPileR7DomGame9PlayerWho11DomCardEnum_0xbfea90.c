// 函数: _Z18CountCardsFromPileR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbfea90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg1 + 0x1528) s< 2)
    x21 = 0
else
    x21 = 0
    int32_t i = 1
    
    do
        int32_t x26_1 = i & 0xffff
        
        if (x26_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + mulu.dp.d(x26_1, 0x68) + 0x1a94) == arg2)
            int32_t x26_2 = *(arg1 + zx.q(x26_1) * 0x68 + 0x1a70)
            int32_t x0_3 = PileSource(arg1, zx.q(x26_2))
            int64_t x8_10 = -0x410
            int32_t x9_1
            
            while (true)
                void* x10_1 = arg1 + x8_10
                x9_1 = *(x10_1 + 0x19ac)
                
                if (x9_1 == x26_2)
                    x9_1 = x26_2
                    break
                
                if (x9_1 == x0_3)
                    break
                
                if (*(x10_1 + 0x19b0) == x26_2)
                    break
                
                int64_t temp0_1 = x8_10
                x8_10 += 0x10
                
                if (temp0_1 == -0x10)
                    x9_1 = 0
                    break
            
            if (x9_1 == arg3)
                x21 += 1
        
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(x21)
