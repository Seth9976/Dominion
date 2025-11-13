// 函数: _Z17CardsOwnedScoringR7DomGame9PlayerWhoP6CardID
// 地址: 0xbfbc7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg1 + 0x1528) s< 2)
    x21 = 0
else
    x21 = 0
    int32_t i = 1
    
    do
        int32_t x23_1 = i & 0xffff
        
        if (x23_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x26_1 = *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1a70)
        int32_t x27_1 = *(arg1 + 0xd50)
        int32_t x8_8 = (x26_1 + (x27_1 << 0x10)) s% 0x3e5
        int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_8) << 3))
        
        if (x9_7 != 0)
            while (*x9_7 != x26_1 || x9_7[1] != x27_1)
                x9_7 = *(x9_7 + 0x10)
                
                if (x9_7 == 0)
                    goto label_bfbd88
            
            if ((*(*(x9_7 + 8) + 0xc8) & 0x9407f000400) == 0)
                goto label_bfbe0c
        else
        label_bfbd88:
            DomDefGetSlow(zx.q(x26_1), zx.q(x27_1))
            int32_t* x0_3 = malloc(0x18)
            int64_t x8_9 = sx.q(x8_8) << 3
            int64_t x9_8 = *(&data_1838a20 + x8_9)
            *x0_3 = x26_1
            x0_3[1] = x27_1
            *(&data_1838a20 + x8_9) = x0_3
            *(x0_3 + 0x10) = x9_8
            void* x0_5 = DomDefGetSlow(zx.q(x26_1), zx.q(x27_1))
            *(x0_3 + 8) = x0_5
            
            if ((*(x0_5 + 0xc8) & 0x9407f000400) == 0)
            label_bfbe0c:
                
                if (*(arg1 + zx.q(x23_1) * 0x68 + 0x1a94) == arg2)
                    *(arg3 + (sx.q(x21) << 2)) = i
                    x21 += 1
        
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(x21)
