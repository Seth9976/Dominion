// 函数: _Z20ShufflePileToPlacingR7DomGame8DomWhere9PlayerWho
// 地址: 0xbba31c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
CardID var_ce8

if (arg3 == 0xffffffff)
    int64_t result = CardsWhere(arg1, 0xffffffff, zx.q(x21), &var_ce8)
    
    if (result.d s>= 1)
        int32_t i_2 = result.d
        int32_t i
        
        do
            int32_t x8_17 = *(arg1 + 0x150c)
            int32_t x0_25
            
            if (x8_17 == 5)
                if (zx.d(*(arg1 + 0x1524)) == 0)
                    x0_25 = RandomInt(arg1, i_2)
                else
                    x0_25 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), i_2)
            else if (x8_17 != 3 || zx.d(*(arg1 + 0x1524)) == 0)
                x0_25 = RandomInt(arg1, i_2)
            else
                x0_25 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), i_2)
            
            int32_t x0_28 = RemoveCardAtIndex(arg1, zx.q(x21), 0xffffffff, x0_25)
            int32_t x28_1 = x0_28 & 0xffff
            *GetPileTail(arg1, zx.q(x21), 0xffffffff) = x0_28
            
            if (x28_1 u>= 0x320)
                void* x0_32 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_21 = x0_32 + sx.q(*(x0_32 + 0x13000)) * 0x98
                *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_22 = *(x8_21 - 0x90)
                *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            void* x8_16 = arg1 + mulu.dp.d(x28_1, 0x68)
            *(x8_16 + 0x1a94) = 0xffffffff
            *(x8_16 + 0x1a9c) = 0xffffffff
            *(x8_16 + 0x1a74) = x21
            *(x8_16 + 0x1ac8) = 0
            result = CardSetReveal_Shuffle(arg1, zx.q(x0_28), 0xffffffff)
            i = i_2
            i_2 -= 1
        while (i s> 1)
    
    return result

int32_t x20_1 = arg3
MovePileTo(arg1, zx.q(arg3), zx.q(x21), zx.q(x20_1), 0x44d)
int32_t x0_2 = CardsWhere(arg1, zx.q(x20_1), 0x44d, &var_ce8)
int128_t var_1970
__builtin_memset(&var_1970, 0, 0x48)
int32_t var_19c0 = 0xc
int64_t var_19e0_1 = 0
TriggerEvents(arg1, zx.q(x20_1), &var_19c0, 1, &var_1970, 0, &var_ce8, zx.q(x0_2))
__builtin_memset(&var_1970, 0, 0x48)
var_19c0 = 0x11
int64_t var_19e0_2 = 0
TriggerEvents(arg1, zx.q(x20_1), &var_19c0, 1, &var_1970, 0, &var_ce8, zx.q(x0_2))
int32_t i_4 = CardsWhere(arg1, zx.q(x20_1), 0x44d, &var_ce8)
int32_t i_5 = i_4

if (i_4 s>= 1)
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        int32_t x8_5 = *(arg1 + 0x150c)
        int32_t x0_8
        
        if (x8_5 == 5)
            if (zx.d(*(arg1 + 0x1524)) == 0)
                x0_8 = RandomInt(arg1, i_3)
            else
                x0_8 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), i_3)
        else if (x8_5 != 3 || zx.d(*(arg1 + 0x1524)) == 0)
            x0_8 = RandomInt(arg1, i_3)
        else
            x0_8 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), i_3)
        
        int32_t x0_11 = RemoveCardAtIndex(arg1, 0x44d, zx.q(x20_1), x0_8)
        int32_t j = *(arg1 + muls.dp.d(x20_1, 0x5a30) + 0x180fc)
        int32_t x26_1
        
        if (j != 0)
            void* x9_2
            
            do
                int32_t x26_2 = j & 0xffff
                
                if (x26_2 u>= 0x320)
                    void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_10 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                    *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_11 = *(x8_10 - 0x90)
                    *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x9_2 = arg1 + mulu.dp.d(x26_2, 0x68)
                j = *(x9_2 + 0x1ac8)
            while (j != 0)
            
            x26_1 = x0_11 & 0xffff
            *(x9_2 + 0x1ac8) = x0_11
            
            if (x26_1 u>= 0x320)
                goto label_bba590
        else
            x26_1 = x0_11 & 0xffff
            *(arg1 + muls.dp.d(x20_1, 0x5a30) + 0x180fc) = x0_11
            
            if (x26_1 u>= 0x320)
            label_bba590:
                void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_14 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_15 = *(x8_14 - 0x90)
                *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        
        void* x8_4 = arg1 + mulu.dp.d(x26_1, 0x68)
        *(x8_4 + 0x1a94) = x20_1
        *(x8_4 + 0x1a9c) = x20_1
        *(x8_4 + 0x1a74) = 0x44d
        *(x8_4 + 0x1ac8) = 0
        CardSetReveal_Shuffle(arg1, zx.q(x0_11), zx.q(x20_1))
        i_1 = i_3
        i_3 -= 1
    while (i_1 s> 1)

MovePileTo(arg1, zx.q(x20_1), 0x44f, zx.q(x20_1), 0x44e)
MovePileTo(arg1, zx.q(x20_1), 0x44d, zx.q(x20_1), 0x44e)
MovePileTo(arg1, zx.q(x20_1), 0x450, zx.q(x20_1), 0x44e)
int32_t x0_20 = CardsWhere(arg1, zx.q(x20_1), 0x44e, &var_1970)
int32_t var_cf0_1 = x0_20
__builtin_memset(&var_19c0, 0, 0x48)
int32_t var_64 = 0xd
int64_t var_19e0_3 = 0
return TriggerEvents(arg1, zx.q(x20_1), &var_64, 1, &var_19c0, 0, &var_1970, zx.q(x0_20))
