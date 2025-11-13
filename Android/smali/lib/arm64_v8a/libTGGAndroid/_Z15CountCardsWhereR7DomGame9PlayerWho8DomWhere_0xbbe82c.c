// 函数: _Z15CountCardsWhereR7DomGame9PlayerWho8DomWhere
// 地址: 0xbbe82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
int32_t x20_1
int32_t i_1

if (arg3 u> 0x48)
    i_1 = *(arg1 + muls.dp.d(arg2, 0x5a30) + (sx.q(x20) << 2) + 0x16fc8)
    
    if (i_1 != 0)
    label_bbe8cc:
        x20_1 = 0
        int32_t i
        
        do
            int32_t fp_1
            
            if (x20_1 u< 0x320)
                fp_1 = i_1 & 0xffff
                
                if (fp_1 u>= 0x320)
                    goto label_bbe970
                
                goto label_bbe90c
            
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            fp_1 = i_1 & 0xffff
            void* x9_7
            
            if (fp_1 u< 0x320)
            label_bbe90c:
                x9_7 = arg1 + mulu.dp.d(fp_1, 0x68)
                i = *(x9_7 + 0x1ac8)
                
                if (i == i_1)
                label_bbe9c4:
                    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_17 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                    *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_18 = *(x8_17 - 0x90)
                    *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    i = *(x9_7 + 0x1ac8)
            else
            label_bbe970:
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x9_7 = arg1 + mulu.dp.d(fp_1, 0x68)
                i = *(x9_7 + 0x1ac8)
                
                if (i == i_1)
                    goto label_bbe9c4
            x20_1 += 1
            i_1 = i
        while (i != 0)
    else
        x20_1 = 0
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
    
    i_1 = *(arg1 + (zx.q(x20) << 4) + 0x1534)
    
    if (i_1 != 0)
        goto label_bbe8cc
    
    x20_1 = 0
return zx.q(x20_1)
