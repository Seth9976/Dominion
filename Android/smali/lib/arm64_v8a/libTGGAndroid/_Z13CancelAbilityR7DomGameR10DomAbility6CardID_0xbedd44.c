// 函数: _Z13CancelAbilityR7DomGameR10DomAbility6CardID
// 地址: 0xbedd44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x84)
int32_t var_ce0[0x320]
int64_t x21

if (x8 == 0)
    void* x26_2 = arg2 + 0x80
    int32_t i = *x26_2
    
    if (i == 0)
        x21 = 0
        
        if ((zx.d(*(arg2 + 4)) & 2) == 0)
            goto label_bede4c
    else
        x21 = 0
        
        do
            int32_t x22_1 = i & 0xffff
            var_ce0[x21] = i
            
            if (x22_1 u>= 0x320)
                void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
                *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_5 = *(x8_4 - 0x90)
                *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            void* x9_1 = arg1 + mulu.dp.d(x22_1, 0x68)
            *x26_2 = 0
            i = *(x9_1 + 0x1acc)
            x26_2 = x9_1 + 0x1acc
            x21 += 1
        while (i != 0)
        
        if ((zx.d(*(arg2 + 4)) & 2) == 0)
            goto label_bede4c
else
    var_ce0[0] = x8
    x21 = 1
    
    if ((zx.d(*(arg2 + 4)) & 2) == 0)
    label_bede4c:
        uint64_t x24_1 = zx.q(*(arg2 + 0x1c))
        int32_t x23_1 = *(arg2 + 0x14)
        
        if (x24_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_11 = *(x8_10 - 0x90)
            *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x24_2 = *(arg1 + x24_1 * 0x68 + 0x1a70)
        int32_t x25_1 = arg3 & 0xffff
        
        if (x25_1 u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_15 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_16 = *(x8_15 - 0x90)
            *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2
            
            if (*(arg1 + 0x19d4) == x23_1)
                x2 = zx.q(*(arg1 + 0x19d8))
            else
                x2 = zx.q(x23_1)
            
            int32_t var_d10_1 = 0
            int32_t var_d18_1 = 0
            int32_t var_d20_1 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a70)
            DomAddLogEvent(arg1, zx.q(x23_1), x2, 0x51, 0, &var_ce0, zx.q(x21.d), zx.q(x24_2))

if (x21.d s>= 1)
    uint64_t i_2 = zx.q(x21.d)
    int32_t (* x22_2)[0x320] = &var_ce0
    uint64_t i_1
    
    do
        uint64_t x2_1 = zx.q(*x22_2)
        x22_2 = &(*x22_2)[1]
        int32_t var_d00_1 = 0
        int64_t var_d08_1 = 0
        int32_t var_d10_2 = 0
        int32_t var_d18_2 = 1
        int32_t var_d20_2 = 0
        MoveCardToSafe(arg1, zx.q(*(arg2 + 0x14)), x2_1, 0xc, 0x472, 4, 0xffffffff, 0)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int32_t x8_22 = *(arg2 + 0x18)
uint64_t x2_2

if (x8_22 == 0xffffffff)
    x2_2 = zx.q(*(arg2 + 0x14))
else
    x2_2 = zx.q(x8_22)

if (*(arg2 + 0x4c) != 3)
    uint64_t x4_1 = zx.q(*(arg2 + 0x8c))
    
    if (x4_1.d != 0)
        int32_t x8_24 = *(arg1 + 0x150c)
        
        if (x8_24 - 3 u>= 4)
            int64_t var_d08_3 = 0
            int32_t var_d10_4 = 0
            int32_t var_d18_4 = 0
            int32_t var_d20_4 = 0
            DomNotifyEffect(zx.q(x8_24 == 2 ? 1 : 0), 0x1c, x2_2, 0x14, x4_1, zx.q(*(arg2 + 0x90)), 
                0, 0)
else
    int32_t x8_23 = *(arg1 + 0x150c)
    
    if (x8_23 - 3 u>= 4)
        int64_t var_d08_2 = 0
        int32_t var_d10_3 = 0
        int32_t var_d18_3 = 0
        int32_t var_d20_3 = 0
        DomNotifyEffect(zx.q(x8_23 == 2 ? 1 : 0), 0x1c, x2_2, zx.q(*(arg2 + 0x50)), 
            zx.q(*(arg2 + 0x54)), 0, 0, 0)

int32_t x8_25 = *(arg1 + 0x150c)

if (x8_25 - 3 u< 4)
    return 

int64_t var_d08_4 = 0
int32_t var_d10_5 = 0
int32_t var_d18_5 = 0
int32_t var_d20_5 = 0
DomNotifyEffect(zx.q(x8_25 == 2 ? 1 : 0), 0x17, 0xffffffff, zx.q(*(arg2 + 0x1c)), 0, 0xffffffff, 
    0xffffffff, 0)
