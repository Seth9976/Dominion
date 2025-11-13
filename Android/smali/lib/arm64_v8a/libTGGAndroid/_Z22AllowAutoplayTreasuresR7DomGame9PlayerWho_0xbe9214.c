// 函数: _Z22AllowAutoplayTreasuresR7DomGame9PlayerWho
// 地址: 0xbe9214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(arg2.d)

if (CountOngoing(arg1, arg2, 0x17, 0, 0) s>= 1)
    int32_t x25_1
    
    if (*(arg1 + muls.dp.d(x19.d, 0x5a30) + 0x181cc) s>= 1)
        int64_t i = 0
        x25_1 = 0
        
        do
            uint64_t x21_1 = zx.q(*(arg1 + sx.q(x19.d) * 0x5a30 + 0x19b18 + (i << 2)))
            
            if (x21_1.d u>= 0x320)
                void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_10 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_11 = *(x8_10 - 0x90)
                *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            i += 1
            x25_1 += CardIsFast(arg1, zx.q(*(arg1 + x21_1 * 0x68 + 0x1a70)), 2) & 1
        while (i s< sx.q(*(arg1 + muls.dp.d(x19.d, 0x5a30) + 0x181cc)))
    
    if (*(arg1 + muls.dp.d(x19.d, 0x5a30) + 0x181cc) s< 1 || x25_1 == 0)
    label_be95e8:
        return 0

int32_t x28_1 = x19.d

if (CountOngoing(arg1, zx.q(x19.d), 0x19, 0, 0) s> 0)
    return 0

uint64_t i_2 = zx.q(*(arg1 + 0x19c0))
int32_t x11_1 = x28_1

if (i_2.d s>= 1)
    void* __offset(DomGame, 0x3c29c) x9_4 = arg1 + 0x3c29c
    uint64_t i_1
    
    do
        if (*(x9_4 - 0x7c) == x11_1 && *x9_4 == 0x2c)
            x11_1 = x28_1
            
            if (CountCardsWhereWhat(arg1, zx.q(x28_1), 0x3ea, 0x105)
                    == neg.d(CountCardsWhereWhat(arg1, zx.q(x28_1), 0x3ea, 0x106)))
                goto label_be93f8
            
            void* x24_2 = arg1 + muls.dp.d(x11_1, 0x5a30) + 0x181cc
            
            if (*x24_2 s< 1)
                goto label_be95e8
            
            int64_t x9_6 = sx.q(x11_1)
            int64_t x27_1 = 0
            int64_t x8_26
            
            do
                uint64_t x25_2 = zx.q(*(arg1 + x9_6 * 0x5a30 + 0x19b18 + (x27_1 << 2)))
                
                if (x25_2.d u>= 0x320)
                    void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_22 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                    *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_23 = *(x8_22 - 0x90)
                    *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    x11_1 = x28_1
                
                if (*(arg1 + x25_2 * 0x68 + 0x1a70) == 0x106)
                    goto label_be93f8
                
                x8_26 = sx.q(*x24_2)
                x27_1 += 1
            while (x27_1 s< x8_26)
            
            if (x8_26.d s< 1)
                goto label_be95e8
            
            int64_t x27_2 = 0
            
            while (true)
                uint64_t x26_2 = zx.q(*(arg1 + 0x19b18 + x9_6 * 0x5a30 + (x27_2 << 2)))
                
                if (x26_2.d u>= 0x320)
                    void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_31 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                    *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_32 = *(x8_31 - 0x90)
                    *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x11_1 = x28_1
                
                if (*(arg1 + x26_2 * 0x68 + 0x1a70) == 0x105)
                    break
                
                x27_2 += 1
                
                if (x27_2 s>= sx.q(*x24_2))
                    return 0
            
            goto label_be93f8
        
        i_1 = i_2
        i_2 -= 1
        x9_4 += 0xb8
    while (i_1 != 1)

label_be93f8:

if (*(arg1 + muls.dp.d(x11_1, 0x5a30) + 0x181cc) == 0)
    uint64_t x8_14 = zx.q(*(arg1 + 0x19c0))
    
    if (x8_14.d s>= 1)
        void* __offset(DomGame, 0x3c29c) x9_5 = arg1 + 0x3c29c
        
        while (true)
            int32_t x10_4 = *(x9_5 - 0x7c)
            
            if ((x10_4 == x11_1 || x10_4 == 0xffffffff) && *x9_5 == 0x54)
                return 0
            
            uint64_t temp1_1 = x8_14
            x8_14 -= 1
            x9_5 += 0xb8
            
            if (temp1_1 == 1)
                return 1

return 1
