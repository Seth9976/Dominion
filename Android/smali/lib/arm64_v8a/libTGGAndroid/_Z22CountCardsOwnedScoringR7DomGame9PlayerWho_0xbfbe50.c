// 函数: _Z22CountCardsOwnedScoringR7DomGame9PlayerWho
// 地址: 0xbfbe50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (*(arg1 + 0x1528) s< 2)
    x20 = 0
else
    x20 = 0
    int32_t i = 1
    
    do
        int32_t x23_1 = i & 0xffff
        
        if (x23_1 u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_7 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_8 = *(x8_7 - 0x90)
            *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x25_1 = *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1a70)
        int32_t x26_1 = *(arg1 + 0xd50)
        int32_t x8_11 = (x25_1 + (x26_1 << 0x10)) s% 0x3e5
        int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_11) << 3))
        void* x0_3
        
        if (x9_11 != 0)
            while (*x9_11 != x25_1 || x9_11[1] != x26_1)
                x9_11 = *(x9_11 + 0x10)
                
                if (x9_11 == 0)
                    goto label_bfbea0
            
            x0_3 = *(x9_11 + 8)
        else
        label_bfbea0:
            DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_1 = sx.q(x8_11) << 3
            int64_t x9_1 = *(&data_1838a20 + x8_1)
            *x0_1 = x25_1
            x0_1[1] = x26_1
            *(&data_1838a20 + x8_1) = x0_1
            *(x0_1 + 0x10) = x9_1
            x0_3 = DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
            *(x0_1 + 8) = x0_3
        
        i += 1
        x20 += ((*(x0_3 + 0xc8) & 0x9407f000400) == 0 ? 1 : 0)
            & (*(arg1 + zx.q(x23_1) * 0x68 + 0x1a94) == arg2 ? 1 : 0)
    while (i s< *(arg1 + 0x1528))

return zx.q(x20)
