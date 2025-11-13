// 函数: _Z19CountCardsWhereTypeR7DomGame9PlayerWho8DomWhere11DomCardType
// 地址: 0xbfc004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x21_1
int32_t i_1

if (arg3 u> 0x48)
    i_1 = *(arg1 + muls.dp.d(arg2, 0x5a30) + (sx.q(x21) << 2) + 0x16fc8)
    
    if (i_1 != 0)
    label_bfc0a8:
        x21_1 = 0
        int32_t i
        
        do
            int32_t x27_1 = i_1 & 0xffff
            
            if (x27_1 u< 0x320)
                if (x21_1 u>= 0x320)
                    goto label_bfc1f4
                
                goto label_bfc0ec
            
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_17 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_18 = *(x8_17 - 0x90)
            *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            uint64_t x27_2
            
            if (x21_1 u< 0x320)
            label_bfc0ec:
                x27_2 = zx.q(x27_1)
                
                if (x27_1 u>= 0x320)
                label_bfc0f8:
                    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_10 = *(x8_9 - 0x90)
                    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
            else
            label_bfc1f4:
                void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_21 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
                *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_22 = *(x8_21 - 0x90)
                *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x27_2 = zx.q(x27_1)
                
                if (x27_1 u>= 0x320)
                    goto label_bfc0f8
            
            void* x27_3 = arg1 + x27_2 * 0x68
            int32_t x0_5 = CardIsFast(arg1, zx.q(*(x27_3 + 0x1a70)), arg4)
            i = *(x27_3 + 0x1ac8)
            
            if (i == i_1)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                i = *(x27_3 + 0x1ac8)
            
            x21_1 += x0_5 & 1
            i_1 = i
        while (i != 0)
    else
        x21_1 = 0
else
    if (arg3 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    i_1 = *(arg1 + (zx.q(x21) << 4) + 0x1534)
    
    if (i_1 != 0)
        goto label_bfc0a8
    
    x21_1 = 0
return zx.q(x21_1)
