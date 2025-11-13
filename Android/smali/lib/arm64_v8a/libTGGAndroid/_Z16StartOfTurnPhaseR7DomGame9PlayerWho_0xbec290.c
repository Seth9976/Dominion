// 函数: _Z16StartOfTurnPhaseR7DomGame9PlayerWho
// 地址: 0xbec290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2

if (*(arg1 + 0xd40) s>= 1)
    int64_t i = 0
    uint64_t x22_1 = zx.q(x20)
    void* __offset(DomGame, 0x1819c) x23_1 = arg1 + 0x1819c
    
    do
        int32_t x25_1 = x22_1 == i ? 1 : 0
        AddResource(arg1, zx.q(i.d), 1, x25_1 - *(x23_1 - 4), 0, 0x42)
        AddResource(arg1, zx.q(i.d), 2, x25_1 - *x23_1, 0, 0x42)
        AddResource(arg1, zx.q(i.d), 0, neg.d(*(x23_1 - 8)), 0, 0x42)
        
        if (CountOngoing(arg1, zx.q(x22_1.d), 0x28, 0, 0) s<= 0)
            AddResource(arg1, zx.q(i.d), 3, neg.d(*(x23_1 + 4)), 0, 0x42)
        
        i += 1
        x23_1 += 0x5a30
    while (i s< sx.q(*(arg1 + 0xd40)))

int64_t x21_1 = sx.q(x20)

if (*(arg1 + muls.dp.d(x20, 0x5a30) + 0x181a4) != 0)
    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_10 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
    *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_11 = *(x8_10 - 0x90)
    *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181a8) != 0)
    void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_16 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_17 = *(x8_16 - 0x90)
    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181ac) != 0)
    void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_22 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
    *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_23 = *(x8_22 - 0x90)
    *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181b0) != 0)
    void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_28 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
    *(*(x8_28 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_29 = *(x8_28 - 0x90)
    *(x8_29 + 0x1a2c) = *(x8_29 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181cc) != 0)
    void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_34 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
    *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_35 = *(x8_34 - 0x90)
    *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181e8) != 0)
    void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_40 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
    *(*(x8_40 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_41 = *(x8_40 - 0x90)
    *(x8_41 + 0x1a2c) = *(x8_41 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181ec) != 0)
    void* x0_19 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_46 = x0_19 + sx.q(*(x0_19 + 0x13000)) * 0x98
    *(*(x8_46 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_47 = *(x8_46 - 0x90)
    *(x8_47 + 0x1a2c) = *(x8_47 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181e4) != 0)
    void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_52 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
    *(*(x8_52 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_53 = *(x8_52 - 0x90)
    *(x8_53 + 0x1a2c) = *(x8_53 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + x21_1 * 0x5a30 + 0x181dc) != 0)
    void* x0_23 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_58 = x0_23 + sx.q(*(x0_23 + 0x13000)) * 0x98
    *(*(x8_58 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_59 = *(x8_58 - 0x90)
    *(x8_59 + 0x1a2c) = *(x8_59 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x21_2 = arg1 + x21_1 * 0x5a30
*(x21_2 + 0x181f8) = 0
RemovePlayerOngoingDuration(arg1, zx.q(x20), 2, -1)
uint32_t x24 = *(x21_2 + 0x1810c)

if (x24 != 0)
    uint64_t x22_2 = zx.q(x24.w)
    
    if (x22_2.d u>= 0x320)
        void* x0_26 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_62 = x0_26 + sx.q(*(x0_26 + 0x13000)) * 0x98
        *(*(x8_62 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_63 = *(x8_62 - 0x90)
        *(x8_63 + 0x1a2c) = *(x8_63 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    uint64_t x28_1 = zx.q(*(arg1 + x22_2 * 0x68 + 0x1ac8)) << 0x20
    
    while (true)
        if ((x24 & 0xffe0) u>= 0x320)
            void* x0_28 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_71 = x0_28 + sx.q(*(x0_28 + 0x13000)) * 0x98
            *(*(x8_71 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_72 = *(x8_71 - 0x90)
            *(x8_72 + 0x1a2c) = *(x8_72 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t var_b8_1 = 0
        int64_t var_c0_1 = 0
        int32_t var_c8_1 = 0
        int32_t var_d0_1 = 0
        int32_t var_d8_1 = 0
        int64_t var_e0_1 = 0
        MoveCardTo(arg1, zx.q(x20), zx.q(x24), 0x451, 8, 0x3e9, 0, 0)
        x24 = (x28_1 u>> 0x20).d
        
        if (x24 == 0)
            break
        
        int32_t x28_3 = x24 & 0xffff
        
        if (x28_3 u>= 0x320)
            void* x0_31 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_75 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
            *(*(x8_75 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_76 = *(x8_75 - 0x90)
            *(x8_76 + 0x1a2c) = *(x8_76 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x28_1 = zx.q(x24) | zx.q(*(arg1 + mulu.dp.d(x28_3, 0x68) + 0x1ac8)) << 0x20

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
int32_t var_54 = 0
int64_t var_e0_2 = 0
return TriggerEvents(arg1, zx.q(x20), &var_54, 1, &var_b0, 0, nullptr, 0)
