// 函数: _Z22GetAbilityVisibileTypeR7DomGameRK13DomActiveItem
// 地址: 0xbd1b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t* entry_x8
*entry_x8 = x8
int32_t x8_17

if (x8 == 1)
    int32_t x8_5 = *(arg1 + (sx.q(*(arg2 + 4)) << 5) + 0x15f68)
    *(entry_x8 + 8) = 0
    entry_x8[1] = x8_5
    x8_17 = 1
else if (x8 == 3)
    entry_x8[1] = AbilitySource(arg1, zx.q(*(arg2 + 4)))
    uint32_t x25_1 = zx.d(AbilitySourceCardRef(arg1, zx.q(*(arg2 + 4))))
    uint64_t x22_2
    int32_t x26_1
    
    if (x25_1 u> 0x31f)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_8 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_9 = *(x8_8 - 0x90)
        *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x26_1 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a70)
        void* x8_11 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        x22_2 = zx.q(x25_1)
        *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_12 = *(x8_11 - 0x90)
        *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    else
        x26_1 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a70)
        x22_2 = zx.q(x25_1)
    
    int32_t x8_15 = *(arg1 + x22_2 * 0x68 + 0x1a90) u>> 4 & 1
    entry_x8[2] = x26_1
    entry_x8[3] = x8_15
    uint64_t x1_2 = zx.q(*(arg2 + 4))
    
    if ((x1_2 & 0x30) == 0)
        x8_17 = *(AbilityGetRegistered(arg1, x1_2) + 0x94)
    else
        x8_17 = *(AbilityGetStatic(arg1, x1_2) + 0xb8)
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_14
        int64_t x1_3
        x0_14, x1_3 = XNoReturn()
        return TokenWhat(x0_14, x1_3) __tailcall
    
    uint64_t x22_1 = zx.q(*(arg2 + 4))
    
    if (x22_1.d u> 0x31f)
        void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_20 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
        *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_21 = *(x8_20 - 0x90)
        *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        uint64_t x23_1 = zx.q(*(arg2 + 4))
        int32_t x8_23 = *(arg1 + mulu.dp.d(x22_1.d, 0x68) + 0x1a70)
        x22_1 = zx.q(x23_1.d)
        entry_x8[1] = x8_23
        
        if (x23_1.d u> 0x31f)
            void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_32 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
            *(*(x8_32 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_33 = *(x8_32 - 0x90)
            *(x8_33 + 0x1a2c) = *(x8_33 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x22_1 = zx.q(*(arg2 + 4))
            entry_x8[2] = *(arg1 + x23_1 * 0x68 + 0x1a70)
            
            if (x22_1.d u>= 0x320)
                void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_38 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                *(*(x8_38 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_39 = *(x8_38 - 0x90)
                *(x8_39 + 0x1a2c) = *(x8_39 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        else
            entry_x8[2] = *(arg1 + mulu.dp.d(x22_1.d, 0x68) + 0x1a70)
    else
        entry_x8[1] = *(arg1 + x22_1 * 0x68 + 0x1a70)
        entry_x8[2] = *(arg1 + mulu.dp.d(x22_1.d, 0x68) + 0x1a70)
    
    entry_x8[3] = *(arg1 + mulu.dp.d(x22_1.d, 0x68) + 0x1a90) u>> 4 & 1
    x8_17 = 1

entry_x8[4] = x8_17
