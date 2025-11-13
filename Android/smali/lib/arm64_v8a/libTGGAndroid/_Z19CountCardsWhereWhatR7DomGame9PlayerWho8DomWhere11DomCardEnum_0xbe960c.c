// 函数: _Z19CountCardsWhereWhatR7DomGame9PlayerWho8DomWhere11DomCardEnum
// 地址: 0xbe960c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x21_1
int32_t i_1

if (arg3 u> 0x48)
    i_1 = *(arg1 + muls.dp.d(arg2, 0x5a30) + (sx.q(x21) << 2) + 0x16fc8)
    
    if (i_1 != 0)
    label_be96b0:
        x21_1 = 0
        int32_t i
        
        do
            int32_t x26_1 = i_1 & 0xffff
            
            if (x26_1 u>= 0x320)
                void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_10 = *(x8_9 - 0x90)
                *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            void* x9_5 = arg1 + mulu.dp.d(x26_1, 0x68)
            i = *(x9_5 + 0x1ac8)
            
            if (*(x9_5 + 0x1a70) == arg4)
                x21_1 += 1
            
            if (i == i_1)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                i = *(x9_5 + 0x1ac8)
            
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
        goto label_be96b0
    
    x21_1 = 0
return zx.q(x21_1)
