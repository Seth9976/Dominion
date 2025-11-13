// 函数: _Z14MoveCardToCardR7DomGame9PlayerWho6CardID8DomWhereS2_13CardMoveStyle11RevealStyle9ContextId12MoveLogStyle10RevealUndoPb
// 地址: 0xbdd918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
int32_t x25 = arg3
int32_t x21 = arg2
int32_t var_ce4 = arg3
int32_t x23 = arg7
int32_t x22 = arg5
int32_t var_ce0
int32_t x0 = CardsWhere(arg1, 0xffffffff, 5, &var_ce0)

if (x0 != 0)
    if (x0 != 1)
        void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x0 = var_ce0

if (x0 == x25)
    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_7 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_8 = *(x8_7 - 0x90)
    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x0_6 = CardsWhere(arg1, 0xffffffff, 5, &var_ce0)

if (x0_6 != 0)
    if (x0_6 != 1)
        void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_11 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
        *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_12 = *(x8_11 - 0x90)
        *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x0_6 = var_ce0

if (x0_6 == x22)
    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_15 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
    *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_16 = *(x8_15 - 0x90)
    *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t fp = x25 & 0xffff

if (fp u>= 0x320)
    void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_19 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
    *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_20 = *(x8_19 - 0x90)
    *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x8_21 = arg1 + mulu.dp.d(fp, 0x68)
int32_t x9_11 = *(x8_21 + 0x1a74)
uint64_t x28 = zx.q(fp)

if (x9_11 == 0x3eb && *(arg1 + sx.q(*(arg1 + x28 * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) != x25)
    return 0

if (x19 != 7)
    if ((x19 != 0x451 || x9_11 != 0x3e9) && x9_11 != x19
            && ((x19 == 0x3e9 ? 1 : 0) & (x9_11 == 0x451 ? 1 : 0)) == 0)
        return 0
else if (x9_11 - 7 u>= 0x41)
    return 0

RevealCard(arg1, zx.q(x25), zx.q(x21), zx.q(x23), 0)
CardRemove(arg1, zx.q(x25), arg11)
int32_t x8_22 = *(arg1 + 0x150c)

if (x8_22 - 3 u>= 4)
    int64_t var_cf8_1 = 0
    int32_t var_d00_1 = 0
    int32_t var_d08_1 = 0
    int32_t var_d10_1 = 0
    DomNotifyEffect(zx.q(x8_22 == 2 ? 1 : 0), 0x16, zx.q(x21), zx.q(x25), 0, 0, 0, 0)
    int32_t x8_23 = *(arg1 + 0x150c)
    
    if (x8_23 - 3 u>= 4)
        int64_t var_cf8_2 = 0
        int32_t var_d00_2 = 0
        int32_t var_d08_2 = 0
        int32_t var_d10_2 = 0
        DomNotifyEffect(zx.q(x8_23 == 2 ? 1 : 0), 0x16, zx.q(x21), zx.q(x25), 7, 0, 0, 0)

if (fp u>= 0x320)
    void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_26 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
    *(*(x8_26 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_27 = *(x8_26 - 0x90)
    *(x8_27 + 0x1a2c) = *(x8_27 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

*(x8_21 + 0x1a74) = 0x474
int32_t x8_28 = *(arg1 + 0x19b4)
void* x9_17 = arg1 + x28 * 0x68
*(arg1 + 0x19b4) = x8_28 + 1
*(x9_17 + 0x1a78) = x8_28
*(x9_17 + 0x1a8c) = x22
*(x9_17 + 0x1ac8) = 0

if (x21 != 0xffffffff)
    *(arg1 + x28 * 0x68 + 0x1a98) = x21

void* x8_30 = arg1 + x28 * 0x68
*(x8_30 + 0x1a94) = x21
*(x8_30 + 0x1a9c) = x21
int32_t x8_31 = *(arg1 + 0x150c)

if (x8_31 - 3 u>= 4)
    int64_t var_cf8_3 = arg8
    int32_t var_d00_3 = 0
    int32_t var_d08_3 = 0
    int32_t var_d10_3 = 0
    DomNotifyEffect(zx.q(x8_31 == 2 ? 1 : 0), 0xa, zx.q(x21), zx.q(x25), zx.q(x22), 0, 0, 
        zx.q(arg6))

if (arg9.d != 1)
    if (x23 u> 0xc)
    label_bddee4:
        pthread_kill(pthread_self(), 6)
        DomGame* x0_26
        int64_t x1_4
        int64_t x2_6
        x0_26, x1_4, x2_6 = XNoReturn()
        return CheckStopMoving(x0_26, x1_4, x2_6) __tailcall
    
    int32_t x8_32 = 1 << x23
    int32_t x22_1
    int32_t x23_1
    
    if ((x8_32 & 0xdbe) == 0)
        if ((x8_32 & 0x201) == 0)
            goto label_bddee4
        
        x23_1 = 0x2a
        x22_1 = x22 & 0xffff
        
        if (x22_1 u>= 0x320)
            goto label_bddda4
    else
        x23_1 = 0x29
        x22_1 = x22 & 0xffff
        
        if (x22_1 u>= 0x320)
        label_bddda4:
            void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_35 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
            *(*(x8_35 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_36 = *(x8_35 - 0x90)
            *(x8_36 + 0x1a2c) = *(x8_36 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t x2_5
        
        if (*(arg1 + 0x19d4) == x21)
            x2_5 = zx.q(*(arg1 + 0x19d8))
        else
            x2_5 = zx.q(x21)
        
        int32_t var_d00_4 = 0
        int32_t var_d08_4 = 0
        int32_t var_d10_4 = arg10.d
        DomAddLogEvent(arg1, zx.q(x21), x2_5, zx.q(x23_1), 0, &var_ce4, 1, 
            zx.q(*(arg1 + mulu.dp.d(x22_1, 0x68) + 0x1a70)))

if (x19 - 1 u<= 0x47)
    UpdateSplitPileInfo(arg1, zx.q(x19))

return 1
