// 函数: _Z18GetHandActionCardsR7DomGame9PlayerWhoP6CardID
// 地址: 0xbc3a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg2
int32_t x22_1
bool cond:0_1

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181d0) s>= 3)
    cond:0_1 = CountOngoing(arg1, zx.q(x23), 0x19, 0, 0) s> 0
    x22_1 = 0

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181d0) s< 3 || not(cond:0_1))
    int32_t i_5 = CardsWhere(arg1, zx.q(x23), 0x3ea, arg3)
    CardID var_ce0
    int32_t i_4 = CardsWhere(arg1, zx.q(x23), 0x3eb, &var_ce0)
    
    if (i_4 s>= 1)
        uint64_t i_2 = zx.q(i_4)
        CardID* x26_1 = &var_ce0
        uint64_t i
        
        do
            int32_t x28_1 = *x26_1
            uint64_t x22_2 = zx.q(x28_1.w)
            
            if (x22_2.d u>= 0x320)
                void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_4 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_5 = *(x8_4 - 0x90)
                *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if ((CardIsFast(arg1, zx.q(*(arg1 + x22_2 * 0x68 + 0x1a70)), 0x100000000000) & 1) != 0)
                *(arg3 + (sx.q(i_5) << 2)) = x28_1
                i_5 += 1
            
            i = i_2
            i_2 -= 1
            x26_1 += 4
        while (i != 1)
    
    if (i_5 s< 1)
        x22_1 = 0
    else
        x22_1 = 0
        uint64_t i_3 = zx.q(i_5)
        CardID* fp_1 = arg3
        uint64_t i_1
        
        do
            uint64_t x21_1 = zx.q(*fp_1)
            
            if (x21_1.d u>= 0x320)
                void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_10 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_11 = *(x8_10 - 0x90)
                *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if ((CardIsFast(arg1, zx.q(*(arg1 + x21_1 * 0x68 + 0x1a70)), 4) & 1) != 0)
                *(arg3 + (sx.q(x22_1) << 2)) = *fp_1
                x22_1 += 1
            
            i_1 = i_3
            i_3 -= 1
            fp_1 += 4
        while (i_1 != 1)

return zx.q(x22_1)
