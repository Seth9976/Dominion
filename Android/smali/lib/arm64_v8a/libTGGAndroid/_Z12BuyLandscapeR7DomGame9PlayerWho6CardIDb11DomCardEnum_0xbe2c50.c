// 函数: _Z12BuyLandscapeR7DomGame9PlayerWho6CardIDb11DomCardEnum
// 地址: 0xbe2c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_68 = arg3
void* x8 = arg1 + muls.dp.d(arg2, 0x5a30)
int64_t x10 = sx.q(*(x8 + 0x181f0))
int32_t x21 = arg5
*(x8 + 0x181f0) = x10.d + 1
*(x8 + (x10 << 2) + 0x1c098) = arg3
int32_t x23 = arg3
int32_t i = arg2
int32_t var_d0

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t i_1
    
    if (*(arg1 + 0x19d4) == i)
        i_1 = zx.q(*(arg1 + 0x19d8))
    else
        i_1 = zx.q(i)
    
    int32_t var_c0_1 = 0
    int32_t var_c8_1 = 0
    var_d0 = 0
    DomAddLogEvent(arg1, zx.q(i), i_1, 0x21, zx.q(x21), &var_68, 1, 0)
    x23 = var_68

int32_t x0_2 = BuyIsCombo(arg1, zx.q(i), zx.q(x23))
int32_t x8_5 = *(arg1 + 0x150c)

if (x8_5 - 3 u>= 4)
    int64_t var_b8_1 = 0
    int32_t var_c0_2 = 0
    int32_t var_c8_2 = 0
    var_d0 = 0
    DomNotifyEffect(zx.q(x8_5 == 2 ? 1 : 0), 8, zx.q(i), zx.q(x23), zx.q(x0_2) & 1, 0, 0, 0)

if ((arg4.d & 1) == 0)
    PayCosts(arg1, zx.q(i), zx.q(var_68))

uint64_t x8_6 = zx.q(var_68)
int64_t i_4 = sx.q(i)
void* x9_4 = *(arg1 + x8_6 * 0x68 + 0x1a68)
int32_t x9_5
int32_t x10_3

if (zx.d(*(arg1 + 0x1284)) == 0)
    x10_3 = *(arg1 + i_4 * 0x5a30 + 0x181b8)
    x9_5 = *(x9_4 + 0xc0)
    
    if (x10_3 != x9_5)
    label_be2e94:
        
        if (x10_3 == 0)
            *(arg1 + i_4 * 0x5a30 + 0x181b8) = x9_5
        else
            int32_t* x10_8 = arg1 + i_4 * 0x5a30 + 0x181bc
            int32_t x11_3 = *x10_8
            
            if (x11_3 != x9_5)
                if (x11_3 == 0)
                    *x10_8 = x9_5
                else
                    x10_8 = arg1 + i_4 * 0x5a30 + 0x181c0
                    int32_t x11_4 = *x10_8
                    
                    if (x11_4 != x9_5)
                        if (x11_4 == 0)
                            *x10_8 = x9_5
                        else
                            x10_8 = arg1 + i_4 * 0x5a30 + 0x181c4
                            int32_t x11_5 = *x10_8
                            
                            if (x11_5 != x9_5)
                                if (x11_5 == 0)
                                    *x10_8 = x9_5
                                else
                                    pthread_kill(pthread_self(), 6)
                                    x8_6, x9_5 = XNoReturn()
                                    *(arg1 + i_4 * 0x5a30 + 0x181b8) = x9_5
else
    x10_3 = *(x9_4 + 0xc0)
    int32_t x11_2 = *(arg1 + i_4 * 0x5a30 + 0x181b8)
    
    if (x11_2 != x10_3)
        if (*(arg1 + i_4 * 0x5a30 + 0x181bc) != x10_3 && *(arg1 + i_4 * 0x5a30 + 0x181c0) != x10_3
                && *(arg1 + i_4 * 0x5a30 + 0x181c4) != x10_3)
            if (*(arg1 + 0x117c) != x10_3)
                if (*(arg1 + 0x1184) == x10_3)
                    goto label_be36a8
                
                goto label_be2e3c
            
            *(arg1 + i_4 * 0x5a30 + 0x18210) += *(arg1 + 0x1180)
            
            if (*(arg1 + 0x1184) == x10_3)
            label_be36a8:
                *(arg1 + i_4 * 0x5a30 + 0x18210) += *(arg1 + 0x1188)
                
                if (*(arg1 + 0x118c) != x10_3)
                    goto label_be2e48
                
                goto label_be36c4
            
        label_be2e3c:
            
            if (*(arg1 + 0x118c) == x10_3)
            label_be36c4:
                *(arg1 + i_4 * 0x5a30 + 0x18210) += *(arg1 + 0x1190)
                
                if (*(arg1 + 0x1194) == x10_3)
                    *(arg1 + i_4 * 0x5a30 + 0x18210) += *(arg1 + 0x1198)
            else
            label_be2e48:
                
                if (*(arg1 + 0x1194) == x10_3)
                    *(arg1 + i_4 * 0x5a30 + 0x18210) += *(arg1 + 0x1198)
        
        x10_3 = x11_2
    
    x9_5 = *(x9_4 + 0xc0)
    
    if (x10_3 != x9_5)
        goto label_be2e94

if (*(arg1 + 0x150c) - 3 u< 3)
    goto label_be30c8

uint64_t x23_1 = x8_6 & 0xffff
int32_t x24_1

if (x23_1.d u> 0x31f)
    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_10 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
    *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_11 = *(x8_10 - 0x90)
    *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    uint32_t x22_1 = zx.d(var_68.w)
    x24_1 = *(arg1 + mulu.dp.d(x23_1.d, 0x68) + 0x1a74)
    
    if (x22_1 u>= 0x320)
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_15 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
        *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_16 = *(x8_15 - 0x90)
        *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x23_1 = zx.q(x22_1)
else
    x24_1 = *(arg1 + x23_1 * 0x68 + 0x1a74)

int32_t x22_2 = *(arg1 + 0xd50)
int32_t x23_2 = *(arg1 + mulu.dp.d(x23_1.d, 0x68) + 0x1a70)
int64_t x28_1 = sx.q(x24_1)
int32_t x8_22 = (x23_2 + (x22_2 << 0x10)) s% 0x3e5
int32_t* x9_13 = *(&data_1838a20 + (sx.q(x8_22) << 3))
int64_t x8_24

if (x9_13 != 0)
    while (*x9_13 != x23_2 || x9_13[1] != x22_2)
        x9_13 = *(x9_13 + 0x10)
        
        if (x9_13 == 0)
            goto label_be306c
    
    x8_24 = x28_1 - 0x22
    
    if ((zx.d(*(*(x9_13 + 8) + 0xcb)) & 8) == 0)
        goto label_be30b0
    
    goto label_be34b4

label_be306c:
DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
int32_t* x0_11 = malloc(0x18)
int64_t x8_23 = sx.q(x8_22) << 3
int64_t x9_14 = *(&data_1838a20 + x8_23)
*x0_11 = x23_2
x0_11[1] = x22_2
*(&data_1838a20 + x8_23) = x0_11
*(x0_11 + 0x10) = x9_14
void* x0_13 = DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
*(x0_11 + 8) = x0_13
x8_24 = x28_1 - 0x22
uint64_t x23_3

if ((zx.d(*(x0_13 + 0xcb)) & 8) != 0)
label_be34b4:
    *(arg1 + (i_4 << 4) + (x8_24 << 2) + 0x60cbc) = (*(arg1 + 0x19e8) - 1) s/ *(arg1 + 0xd40) + 1
    x23_3 = zx.q(var_68.w)
    
    if (x23_3.d u>= 0x320)
        goto label_be30dc
else
label_be30b0:
    void* x8_25 = arg1 + (i_4 << 4) + (sx.q(x8_24.d) << 2)
    *(x8_25 + 0x60cbc) += 1
label_be30c8:
    x23_3 = zx.q(var_68.w)
    
    if (x23_3.d u>= 0x320)
    label_be30dc:
        void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_28 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
        *(*(x8_28 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_29 = *(x8_28 - 0x90)
        *(x8_29 + 0x1a2c) = *(x8_29 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")

int32_t x22_3 = *(arg1 + 0xd50)
int32_t x23_4 = *(arg1 + x23_3 * 0x68 + 0x1a70)
int32_t x8_35 = (x23_4 + (x22_3 << 0x10)) s% 0x3e5
int32_t* x9_20 = *(&data_1838a20 + (sx.q(x8_35) << 3))

if (x9_20 != 0)
    while (*x9_20 != x23_4 || x9_20[1] != x22_3)
        x9_20 = *(x9_20 + 0x10)
        
        if (x9_20 == 0)
            goto label_be3170
    
    if ((zx.d(*(*(x9_20 + 8) + 0xc9)) & 4) == 0)
        goto label_be31ac
    
    goto label_be32d4

label_be3170:
DomDefGetSlow(zx.q(x23_4), zx.q(x22_3))
int32_t* x0_17 = malloc(0x18)
int64_t x8_36 = sx.q(x8_35) << 3
int64_t x9_21 = *(&data_1838a20 + x8_36)
*x0_17 = x23_4
x0_17[1] = x22_3
*(&data_1838a20 + x8_36) = x0_17
*(x0_17 + 0x10) = x9_21
void* x0_19 = DomDefGetSlow(zx.q(x23_4), zx.q(x22_3))
*(x0_17 + 8) = x0_19

if ((zx.d(*(x0_19 + 0xc9)) & 4) != 0)
label_be32d4:
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t i_2
        
        if (*(arg1 + 0x19d4) == i)
            i_2 = zx.q(*(arg1 + 0x19d8))
        else
            i_2 = zx.q(i)
        
        int32_t var_c0_3 = 0
        int32_t var_c8_3 = 0
        var_d0 = 0
        DomAddLogEvent(arg1, zx.q(i), i_2, 0x1f, zx.q(x21), nullptr, 0, 0)
    
    uint64_t x23_6 = zx.q(var_68)
    void* x22_6 = *(arg1 + x23_6 * 0x68 + 0x1a68)
    int64_t x24_5 = x23_6 & 0xffff
    
    if (x24_5.d u>= 0x320)
        void* x0_29 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_58 = x0_29 + sx.q(*(x0_29 + 0x13000)) * 0x98
        *(*(x8_58 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_59 = *(x8_58 - 0x90)
        *(x8_59 + 0x1a2c) = *(x8_59 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int64_t var_b0 = (0xffffffff & x23_6) | zx.q(*(arg1 + x24_5 * 0x68 + 0x1a78)) << 0x20
    DomPushContext(arg1, zx.q(i), &var_b0)
    (*(x22_6 + 0xd0))()
    __builtin_memset(&var_b0, 0, 0x48)
    int32_t var_64 = 7
    var_d0.q = 0
    TriggerEvents(arg1, zx.q(i), &var_64, 1, &var_b0, 0, &var_68, 1)
    int32_t* x8_63 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
    *x8_63 -= 1
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t i_3
        
        if (*(arg1 + 0x19d4) == i)
            i_3 = zx.q(*(arg1 + 0x19d8))
        else
            i_3 = zx.q(i)
        
        int32_t var_c0_4 = 0
        int32_t var_c8_4 = 0
        int32_t var_d0_1 = 0
        DomAddLogEvent(arg1, zx.q(i), i_3, 0x20, zx.q(x21), nullptr, 0, 0)
else
label_be31ac:
    uint64_t x22_4 = zx.q(var_68.w)
    
    if (x22_4.d u>= 0x320)
        void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_40 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
        *(*(x8_40 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_41 = *(x8_40 - 0x90)
        *(x8_41 + 0x1a2c) = *(x8_41 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x21_1 = *(arg1 + 0xd50)
    int32_t x22_5 = *(arg1 + x22_4 * 0x68 + 0x1a70)
    int32_t x8_47 = (x22_5 + (x21_1 << 0x10)) s% 0x3e5
    int32_t* x9_25 = *(&data_1838a20 + (sx.q(x8_47) << 3))
    
    if (x9_25 != 0)
        while (*x9_25 != x22_5 || x9_25[1] != x21_1)
            x9_25 = *(x9_25 + 0x10)
            
            if (x9_25 == 0)
                goto label_be3254
        
        if ((zx.d(*(*(x9_25 + 8) + 0xcb)) & 8) != 0)
            goto label_be34f4
    else
    label_be3254:
        DomDefGetSlow(zx.q(x22_5), zx.q(x21_1))
        int32_t* x0_23 = malloc(0x18)
        int64_t x8_48 = sx.q(x8_47) << 3
        int64_t x9_26 = *(&data_1838a20 + x8_48)
        *x0_23 = x22_5
        x0_23[1] = x21_1
        *(&data_1838a20 + x8_48) = x0_23
        *(x0_23 + 0x10) = x9_26
        void* x0_25 = DomDefGetSlow(zx.q(x22_5), zx.q(x21_1))
        *(x0_23 + 8) = x0_25
        
        if ((zx.d(*(x0_25 + 0xcb)) & 8) != 0)
        label_be34f4:
            int32_t x8_74 = *(arg1 + 0x19ac)
            
            if (x8_74 s>= 0x100)
                void* x0_38 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_72 = x0_38 + sx.q(*(x0_38 + 0x13000)) * 0x98
                *(*(x8_72 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_73 = *(x8_72 - 0x90)
                *(x8_73 + 0x1a2c) = *(x8_73 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x8_74 = *(arg1 + 0x19ac)
            
            int64_t x21_2
            
            if (x8_74 s< 1)
            label_be35bc:
                x21_2 = 0xffffffff
            else
                x21_2 = 0
                void* __offset(DomGame, 0x15f74) x9_40 = arg1 + 0x15f74
                
                while (*(x9_40 - 0xc) != 0xe01 || *(x9_40 - 8) != i || *(x9_40 - 4) != 0x3f1
                        || *x9_40 != 0 || *(x9_40 + 0xc) != 0)
                    x21_2 += 1
                    x9_40 += 0x20
                    
                    if (zx.q(x8_74) == x21_2)
                        goto label_be35bc
            
            uint64_t x22_7 = zx.q(var_68.w)
            
            if (x22_7.d u>= 0x320)
                void* x0_40 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_78 = x0_40 + sx.q(*(x0_40 + 0x13000)) * 0x98
                *(*(x8_78 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_79 = *(x8_78 - 0x90)
                *(x8_79 + 0x1a2c) = *(x8_79 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            MoveToken(arg1, zx.q(x21_2.d), zx.q(*(arg1 + x22_7 * 0x68 + 0x1a74)))

int32_t var_c8_5 = 0
int32_t var_d0_2 = 0
return AddOngoing(arg1, zx.q(i), 6, 0, 1, 0, 0, 0xffffffff)
