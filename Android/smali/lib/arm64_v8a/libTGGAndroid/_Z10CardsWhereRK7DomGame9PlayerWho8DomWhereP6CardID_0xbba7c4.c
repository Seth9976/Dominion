// 函数: _Z10CardsWhereRK7DomGame9PlayerWho8DomWhereP6CardID
// 地址: 0xbba7c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3

if (arg3 == 0x474)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int64_t x25 = 0
bool cond:2_1

do
    int32_t i
    
    if (x20 u> 0x48)
        i = *(arg1 + sx.q(arg2) * 0x5a30 + (sx.q(x20) << 2) + 0x16fc8)
        
        if (i != 0)
        label_bba90c:
            x25 = sx.q(x25.d)
            
            do
                if (x25 s>= 0x320)
                    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_19 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                    *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_20 = *(x8_19 - 0x90)
                    *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                int32_t x26_1 = i & 0xffff
                *(arg4 + (x25 << 2)) = i
                
                if (x26_1 u>= 0x320)
                    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_23 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                    *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_24 = *(x8_23 - 0x90)
                    *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(arg1 + mulu.dp.d(x26_1, 0x68) + 0x1a74) != x20)
                    void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_29 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
                    *(*(x8_29 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_30 = *(x8_29 - 0x90)
                    *(x8_30 + 0x1a2c) = *(x8_30 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                i = *(arg1 + zx.q(x26_1) * 0x68 + 0x1ac8)
                x25 += 1
            while (i != 0)
    else
        if (x20 == 0x48)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i = *(arg1 + (zx.q(x20) << 4) + 0x1534)
        
        if (i != 0)
            goto label_bba90c
    cond:2_1 = x20 != 0x3e9
    x20 = 0x451
while (not(cond:2_1))
return zx.q(x25.d)
