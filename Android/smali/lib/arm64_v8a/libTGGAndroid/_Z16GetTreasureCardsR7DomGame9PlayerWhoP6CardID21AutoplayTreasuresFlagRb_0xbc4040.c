// 函数: _Z16GetTreasureCardsR7DomGame9PlayerWhoP6CardID21AutoplayTreasuresFlagRb
// 地址: 0xbc4040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* x24 = arg3
*arg5 = false
int32_t i_6 = CardsWhere(arg1, arg2, 0x3ea, x24)
int32_t x27 = 0

if (i_6 s>= 1)
    uint64_t i_3 = zx.q(i_6)
    CardID* x21_1 = x24
    uint64_t i
    
    do
        uint64_t x23_1 = zx.q(*x21_1)
        
        if (x23_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_4 = *(x8_3 - 0x90)
            *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if ((CardIsFast(arg1, zx.q(*(arg1 + x23_1 * 0x68 + 0x1a70)), 2) & 1) != 0)
            *(x24 + (sx.q(x27) << 2)) = *x21_1
            x27 += 1
        
        i = i_3
        i_3 -= 1
        x21_1 += 4
    while (i != 1)

CardID* x20_1 = x24 + (sx.q(x27) << 2)
int32_t i_7 = CardsWhere(arg1, zx.q(arg2.d), 0x3eb, x20_1)
int32_t x28

if (i_7 s< 1)
    x28 = 0
else
    x28 = 0
    uint64_t i_5 = zx.q(i_7)
    int32_t var_68
    var_68.q = x20_1
    uint64_t i_1
    
    do
        uint64_t x21_2 = zx.q(*x20_1)
        
        if (x21_2.d u>= 0x320)
            void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x23_2 = arg1 + x21_2 * 0x68
        
        if ((CardIsFast(arg1, zx.q(*(x23_2 + 0x1a70)), 0x100000000000) & 1) != 0)
            if (x21_2.d u>= 0x320)
                void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if ((CardIsFast(arg1, zx.q(*(x23_2 + 0x1a70)), 2) & 1) != 0)
                *(var_68.q + (sx.q(x28) << 2)) = *x20_1
                x28 += 1
        
        i_1 = i_5
        i_5 -= 1
        x20_1 += 4
    while (i_1 != 1)

int32_t i_8 = x28 + x27

if (i_8 s>= 1)
    uint64_t i_4 = zx.q(i_8)
    uint64_t i_2
    
    do
        if ((IsAutoplayTreasure(arg1, zx.q(*x24), zx.q(arg4)) & 1) != 0)
            *arg5 = true
            break
        
        i_2 = i_4
        i_4 -= 1
        x24 += 4
    while (i_2 != 1)

return zx.q(i_8)
