// 函数: _Z14TriggerAbilityR7DomGame9PlayerWho9AbilityID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbcd278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg3 & 0xffffffff
int32_t x23 = arg2
int64_t x22 = arg3
int64_t x28 = AbilitySourceCardRef(arg1, x21)
int32_t var_8e0 = 1
int32_t var_ce0 = x22.d
int32_t x0_2 = ActionsAreMinor(arg1, &var_ce0)

if ((x0_2 & 1) == 0)
    InvalidateSubmittedActions()

if ((x22.d & 0x30) == 0x10)
    if (x22.d u>> 0x17 u>= 0x19)
        void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if ((CardIsFast(arg1, zx.q(*(arg1 + (x21 u>> 0x12) * 0x68 + 0x1a70)), 0x40) & 1) != 0)
        int32_t x0_8 = AbilitySourceCardRef(arg1, x21)
        void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
        int32_t x22_1 = x0_8 & 0xffff
        int64_t x24_1 = sx.q(*(x0_10 + 0x13000)) - 1
        int64_t x19_2 = *(x0_10 + x24_1 * 0x98 + 0x40)
        
        if (x22_1 u>= 0x320)
            void* x8_10 = __emutls_get_address(__emutls_v.gContextStack_tl) + x24_1 * 0x98
            *(*(x8_10 + 8) + 0x1a28) = 0xffffffff
            void* x8_11 = *(x8_10 + 8)
            *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        var_ce0.q = zx.q(x0_8) | zx.q(*(arg1 + mulu.dp.d(x22_1, 0x68) + 0x1a78)) << 0x20
        *(DomPushContext(arg1, zx.q(x23), &var_ce0) + 0x68) = x19_2
        TriggerEventAchievement(arg1, zx.q(x23), 0x1a, nullptr, 0)
        int32_t* x8_14 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
        *x8_14 -= 1

if (x28.d != 0)
    int32_t x8_15 = *(arg1 + 0x150c)
    
    if (x8_15 - 3 u>= 4)
        int64_t var_d18_1 = 0
        int32_t var_d20_1 = 0
        int32_t var_d28_1 = 0
        int32_t var_d30_1 = 0
        DomNotifyEffect(zx.q(x8_15 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(x28.d), 2, 1, 0, 0)

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_1
    
    if (*(arg1 + 0x19d4) == x23)
        x2_1 = zx.q(*(arg1 + 0x19d8))
    else
        x2_1 = zx.q(x23)
    
    int32_t var_d20_2 = 0
    int32_t var_d28_2 = 0
    int32_t var_d30_2 = 0
    DomAddLogEvent(arg1, zx.q(x23), x2_1, 0x1f, 0, nullptr, 0, 0)

void* x0_21 = DomPushAbilityContext(arg1, zx.q(x23), x21)
int64_t x24_2 = x22 & 0x30
*(x0_21 + 0x88) = arg4
*(x0_21 + 0x58) = x22.d u>> 6 & 0xfff
*(x0_21 + 0x80) = arg5

if (x24_2 == 0)
    void* x0_33 = AbilityGetRegistered(arg1, x21)
    *(x0_21 + 0x60) = &var_ce0
    *(x0_21 + 0x5c) = 0
    int32_t* x25_2 = x0_33 + 0x80
    int32_t i = *x25_2
    
    if (i != 0)
        int32_t* x22_3 = &var_ce0
        
        do
            *x22_3 = i
            *(x0_21 + 0x5c) += 1
            uint64_t x26_1 = zx.q(*x25_2)
            
            if (x26_1.d u>= 0x320)
                void* x0_35 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_40 = x0_35 + sx.q(*(x0_35 + 0x13000)) * 0x98
                *(*(x8_40 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_41 = *(x8_40 - 0x90)
                *(x8_41 + 0x1a2c) = *(x8_41 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            void* x9_14 = arg1 + x26_1 * 0x68
            *x25_2 = 0
            i = *(x9_14 + 0x1acc)
            x25_2 = x9_14 + 0x1acc
            x22_3 = &x22_3[1]
        while (i != 0)
    
    *(x0_21 + 0x70) = *(x0_33 + 0x84)
    *(x0_21 + 0x74) = *(x0_33 + 0x88)
    *(x0_21 + 0x68) = *(x0_33 + 0x38)
    
    if (x24_2 == 0x30)
        goto label_bcd538
    
    goto label_bcd7e4

int32_t i_2

if (x24_2 == 0x30)
label_bcd538:
    i_2 = *(arg1 + ((x22 u>> 0x12 & 0x3fff) << 5) + 0x15f7c)
    
    if (i_2 s> 0)
        if (x24_2 == 0)
            goto label_bcd858
        
        goto label_bcd548
    
    void* x0_37 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_47 = x0_37 + sx.q(*(x0_37 + 0x13000)) * 0x98
    *(*(x8_47 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_48 = *(x8_47 - 0x90)
    *(x8_48 + 0x1a2c) = *(x8_48 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    i_2 = *(arg1 + ((x22 u>> 0x12 & 0x3fff) << 5) + 0x15f7c)
    
    if (x24_2 != 0)
        goto label_bcd548
    
    goto label_bcd858

label_bcd7e4:
i_2 = 1

if (x24_2 != 0)
label_bcd548:
    
    if (i_2 s>= 1)
    label_bcd564:
        int32_t i_1
        
        do
            TriggerAbilityFn(arg1, zx.q(x23), x21)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else
label_bcd858:
    *(AbilityGetRegistered(arg1, x21) + 0x30) = 1
    
    if (i_2 s>= 1)
        goto label_bcd564

int32_t* x8_23 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
*x8_23 -= 1

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_4
    
    if (*(arg1 + 0x19d4) == x23)
        x2_4 = zx.q(*(arg1 + 0x19d8))
    else
        x2_4 = zx.q(x23)
    
    int32_t var_d20_3 = 0
    int32_t var_d28_3 = 0
    int32_t var_d30_3 = 0
    DomAddLogEvent(arg1, zx.q(x23), x2_4, 0x20, 0, nullptr, 0, 0)

if (x28.d != 0)
    int32_t x8_28 = *(arg1 + 0x150c)
    
    if (x8_28 - 3 u>= 4)
        int64_t var_d18_2 = 0
        int32_t var_d20_4 = 0
        int32_t var_d28_4 = 0
        int32_t var_d30_4 = 0
        DomNotifyEffect(zx.q(x8_28 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(x28.d), 2, 0, 0, 0)

if (x24_2 == 0 && *AbilityGetRegistered(arg1, x21) - 3 u<= 2)
    int128_t* x0_30
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    x0_30, v0_1, v1_1, v2_1, v3_1 = AbilityGetRegistered(arg1, x21)
    *(x0_30 + 0x58) = 0
    int64_t x8_32 = sx.q(*(arg1 + 0x19c0)) - 1
    *(arg1 + 0x19c0) = x8_32.d
    v0_1 = *(arg1 + x8_32 * 0xb8 + 0x3c238)
    v2_1 = *(arg1 + x8_32 * 0xb8 + 0x3c208)
    v3_1 = *(arg1 + x8_32 * 0xb8 + 0x3c218)
    x0_30[2] = *(arg1 + x8_32 * 0xb8 + 0x3c228)
    x0_30[3] = v0_1
    *x0_30 = v2_1
    x0_30[1] = v3_1
    v0_1 = *(arg1 + x8_32 * 0xb8 + 0x3c278)
    v2_1 = *(arg1 + x8_32 * 0xb8 + 0x3c248)
    v3_1 = *(arg1 + x8_32 * 0xb8 + 0x3c258)
    x0_30[6] = *(arg1 + x8_32 * 0xb8 + 0x3c268)
    x0_30[7] = v0_1
    x0_30[4] = v2_1
    x0_30[5] = v3_1
    v0_1 = *(arg1 + x8_32 * 0xb8 + 0x3c2a8)
    v1_1 = *(arg1 + x8_32 * 0xb8 + 0x3c288)
    x0_30[0xb].q = *(arg1 + x8_32 * 0xb8 + 0x3c2b8)
    x0_30[9] = *(arg1 + x8_32 * 0xb8 + 0x3c298)
    x0_30[0xa] = v0_1
    x0_30[8] = v1_1

return zx.q(not.d(x0_2)) & 1
