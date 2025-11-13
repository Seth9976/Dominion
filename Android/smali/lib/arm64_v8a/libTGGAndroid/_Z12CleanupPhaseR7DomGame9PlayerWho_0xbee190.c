// 函数: _Z12CleanupPhaseR7DomGame9PlayerWho
// 地址: 0xbee190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x150c)
int32_t x27 = arg2
int32_t var_1a18
int64_t var_1a08

if (x8 - 3 u>= 4)
    var_1a08 = 0
    int32_t var_1a10_1 = 0
    var_1a18 = 0
    int64_t var_1a20
    var_1a20.d = 0
    DomNotifyEffect(zx.q(x8 == 2 ? 1 : 0), 0x29, zx.q(x27), 0, 5, 0, 0, 0)

*(arg1 + 0x19f4) = 5
RemovePlayerOngoingDuration(arg1, zx.q(x27), 9, -1)
int128_t var_cf0
__builtin_memset(&var_cf0, 0, 0x48)
int32_t var_1978[0x246]
var_1978[0] = 3
int64_t var_1a20_1 = 0
TriggerEvents(arg1, zx.q(x27), &var_1978, 1, &var_cf0, 0, nullptr, 0)
int32_t x8_1 = *(arg1 + 0xd40)
int32_t var_19e4 = x27
int128_t var_19c0
int32_t var_64

if (x8_1 s>= 1)
    int32_t x11_1 = 0
    void* x9_1 = arg1 + muls.dp.d(x27, 0x5a30) + 0x17f70
    
    do
        uint64_t x24_1 = zx.q((x11_1 + x27) s% x8_1)
        int32_t x0_5
        int64_t x1_4
        x0_5, x1_4 = CountOngoing(arg1, zx.q(x24_1.d), 0x1f, 0, 0)
        int32_t var_19d0_1
        int64_t x9_3
        
        if (x0_5 s< 1)
            int32_t var_70_1 = 0
            int32_t var_cf8_1 = 0
            uint32_t x25_1 = *(arg1 + muls.dp.d(x24_1.d, 0x5a30) + 0x17f6c)
            
            if (x25_1 != 0)
                uint64_t x24_2 = zx.q(x25_1.w)
                
                if (x24_2.d u>= 0x320)
                    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_8 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_9 = *(x8_8 - 0x90)
                    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                uint64_t x27_1 = zx.q(*(arg1 + x24_2 * 0x68 + 0x1ac8)) << 0x20
                
                while (true)
                    if ((CardStaysUntilNextTurn(arg1, zx.q(x25_1)) & 1) == 0)
                        operator+=(&var_cf0, zx.q(x25_1))
                        int32_t x24_3 = x25_1 & 0xffff
                        
                        if (x24_3 u>= 0x320)
                            void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_16 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                            *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_17 = *(x8_16 - 0x90)
                            *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        void* x8_18 = arg1 + mulu.dp.d(x24_3, 0x68)
                        *(x8_18 + 0x1a90) &= 0xfffffff3
                        x25_1 = (x27_1 u>> 0x20).d
                        
                        if (x25_1 == 0)
                            break
                    else
                        operator+=(&var_1978, zx.q(x25_1))
                        x25_1 = (x27_1 u>> 0x20).d
                        
                        if (x25_1 == 0)
                            break
                    
                    int32_t x24_4 = x25_1 & 0xffff
                    
                    if (x24_4 u>= 0x320)
                        void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_21 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                        *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_22 = *(x8_21 - 0x90)
                        *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x27_1 = zx.q(x25_1) | zx.q(*(arg1 + mulu.dp.d(x24_4, 0x68) + 0x1ac8)) << 0x20
            
            int64_t x9_12 = sx.q(x24_1.d)
            uint32_t x25_2 = *(arg1 + x9_12 * 0x5a30 + 0x1810c)
            
            if (x25_2 != 0)
                uint64_t x24_5 = zx.q(x25_2.w)
                
                if (x24_5.d u>= 0x320)
                    void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_27 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
                    *(*(x8_27 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_28 = *(x8_27 - 0x90)
                    *(x8_28 + 0x1a2c) = *(x8_28 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                uint64_t x27_3 = zx.q(*(arg1 + x24_5 * 0x68 + 0x1ac8)) << 0x20
                
                while (true)
                    int32_t x26_1 = x25_2 & 0xffff
                    
                    if (x26_1 u< 0x320)
                        if ((CardStaysUntilNextTurn(arg1, zx.q(x25_2)) & 1) == 0)
                            goto label_bee5e8
                        
                        goto label_bee57c
                    
                    void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_35 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
                    *(*(x8_35 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_36 = *(x8_35 - 0x90)
                    *(x8_36 + 0x1a2c) = *(x8_36 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    
                    if ((CardStaysUntilNextTurn(arg1, zx.q(x25_2)) & 1) != 0)
                    label_bee57c:
                        x25_2 = (x27_3 u>> 0x20).d
                        
                        if (x25_2 == 0)
                            break
                    else
                    label_bee5e8:
                        operator+=(&var_cf0, zx.q(x25_2))
                        
                        if (x26_1 u>= 0x320)
                            void* x0_26 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_39 = x0_26 + sx.q(*(x0_26 + 0x13000)) * 0x98
                            *(*(x8_39 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_40 = *(x8_39 - 0x90)
                            *(x8_40 + 0x1a2c) = *(x8_40 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        void* x8_41 = arg1 + zx.q(x26_1) * 0x68
                        *(x8_41 + 0x1a90) &= 0xfffffff3
                        x25_2 = (x27_3 u>> 0x20).d
                        
                        if (x25_2 == 0)
                            break
                    
                    int32_t x24_7 = x25_2 & 0xffff
                    
                    if (x24_7 u>= 0x320)
                        void* x0_28 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_44 = x0_28 + sx.q(*(x0_28 + 0x13000)) * 0x98
                        *(*(x8_44 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_45 = *(x8_44 - 0x90)
                        *(x8_45 + 0x1a2c) = *(x8_45 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x27_3 = zx.q(x25_2) | zx.q(*(arg1 + mulu.dp.d(x24_7, 0x68) + 0x1ac8)) << 0x20
            
            uint64_t x3_2 = zx.q(var_70_1)
            var_19d0_1 = x3_2.d != 0 ? 1 : 0
            int32_t var_1a10_3 = 0
            var_1a18.q = 0
            var_1a20_1.d = 0
            x1_4 = DiscardCards(arg1, x24_1, &var_cf0, x3_2, 0x3e9, 0xb, 9, 0)
            x27 = var_19e4
            int32_t var_70_2 = 0
            
            if (var_cf8_1 s>= 1)
                int64_t i = 0
                
                do
                    uint64_t x2_5 = zx.q(var_1978[i])
                    
                    if ((x2_5.d & 0xffe0) u>= 0x320)
                        void* x0_31 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_52 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
                        *(*(x8_52 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_53 = *(x8_52 - 0x90)
                        *(x8_53 + 0x1a2c) = *(x8_53 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        x2_5 = zx.q(var_1978[i])
                    
                    int32_t var_19f8_1 = 0
                    int64_t var_1a00_1 = 0
                    var_1a08.d = 0
                    int32_t var_1a10_4 = 0
                    var_1a18 = 0
                    var_1a20_1 = 0
                    MoveCardTo(arg1, x24_1, x2_5, 0x3e9, 8, 0x451, 0, 0)
                    int32_t x0_34
                    x0_34, x1_4 = NumOutstandingDurationEffects(arg1, zx.q(var_1978[i]))
                    int32_t x8_54 = *(arg1 + 0x150c)
                    
                    if (x8_54 - 3 u>= 4)
                        var_1a08 = 0
                        int32_t var_1a10_5 = 0
                        var_1a18 = 0
                        var_1a20_1.d = 0
                        x1_4 = DomNotifyEffect(zx.q(x8_54 == 2 ? 1 : 0), 0x16, 0xffffffff, 
                            zx.q(var_1978[i]), 0, 0, zx.q(x0_34), 0)
                    
                    i += 1
                while (i s< sx.q(var_cf8_1))
            
            x9_3 = x9_12
        else
            var_19d0_1 = 0
            x9_3 = sx.q(x24_1.d)
        
        int32_t x26_2 = *(arg1 + x9_3 * 0x5a30 + 0x18154)
        
        if (x26_2 != 0)
            uint64_t x24_8 = zx.q(x26_2.w)
            
            if (x24_8.d u>= 0x320)
                void* x0_37 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_58 = x0_37 + sx.q(*(x0_37 + 0x13000)) * 0x98
                *(*(x8_58 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_59 = *(x8_58 - 0x90)
                *(x8_59 + 0x1a2c) = *(x8_59 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                x1_4 = XTrace("game thread resume (error)")
            
            int32_t i_8 = *(arg1 + x24_8 * 0x68 + 0x1ac8)
            var_19c0.d = x26_2
            int64_t x1_14 = DiscardFates(arg1, x1_4, &var_19c0, 1, 0x463, 0x17)
            
            if (i_8 != 0)
                int32_t i_1
                
                do
                    int32_t x24_10 = i_8 & 0xffff
                    
                    if (x24_10 u>= 0x320)
                        void* x0_44 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_72 = x0_44 + sx.q(*(x0_44 + 0x13000)) * 0x98
                        *(*(x8_72 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_73 = *(x8_72 - 0x90)
                        *(x8_73 + 0x1a2c) = *(x8_73 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        x1_14 = XTrace("game thread resume (error)")
                    
                    i_1 = *(arg1 + mulu.dp.d(x24_10, 0x68) + 0x1ac8)
                    var_19c0.d = i_8
                    x1_14 = DiscardFates(arg1, x1_14, &var_19c0, 1, 0x463, 0x17)
                    i_8 = i_1
                while (i_1 != 0)
        
        if (x24_1.d == x27)
            __builtin_memset(&var_19c0, 0, 0x48)
            var_64 = 0x10
            var_1a20_1 = 0
            TriggerEvents(arg1, zx.q(x27), &var_64, 1, &var_19c0, 0, nullptr, 0)
            int32_t var_70_3 = 0
            uint32_t x24_9 = *x9_1
            
            if (x24_9 != 0)
                uint64_t x25_3 = zx.q(x24_9.w)
                
                if (x25_3.d u>= 0x320)
                    void* x0_41 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_65 = x0_41 + sx.q(*(x0_41 + 0x13000)) * 0x98
                    *(*(x8_65 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_66 = *(x8_65 - 0x90)
                    *(x8_66 + 0x1a2c) = *(x8_66 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                uint64_t x25_4 = zx.q(*(arg1 + x25_3 * 0x68 + 0x1ac8)) << 0x20
                
                while (true)
                    int32_t x26_3 = x24_9 & 0xffff
                    
                    if (x26_3 u>= 0x320)
                        void* x0_46 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_78 = x0_46 + sx.q(*(x0_46 + 0x13000)) * 0x98
                        *(*(x8_78 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_79 = *(x8_78 - 0x90)
                        *(x8_79 + 0x1a2c) = *(x8_79 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    void* x9_34 = arg1 + mulu.dp.d(x26_3, 0x68)
                    int32_t x8_80 = *(x9_34 + 0x1a90)
                    
                    if ((x8_80 & 0x80) != 0)
                        *(x9_34 + 0x1a90) = x8_80 & 0xffffff7f
                        x24_9 = (x25_4 u>> 0x20).d
                        
                        if (x24_9 == 0)
                            break
                    else
                        operator+=(&var_cf0, zx.q(x24_9))
                        x24_9 = (x25_4 u>> 0x20).d
                        
                        if (x24_9 == 0)
                            break
                    
                    int32_t x25_6 = x24_9 & 0xffff
                    
                    if (x25_6 u>= 0x320)
                        void* x0_49 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_84 = x0_49 + sx.q(*(x0_49 + 0x13000)) * 0x98
                        *(*(x8_84 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_85 = *(x8_84 - 0x90)
                        *(x8_85 + 0x1a2c) = *(x8_85 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x25_4 = zx.q(x24_9) | zx.q(*(arg1 + mulu.dp.d(x25_6, 0x68) + 0x1ac8)) << 0x20
            
            int64_t x8_3
            
            x8_3 = var_19d0_1 != 0 ? 0xffffffff : 0
            
            int32_t var_1a10_2 = 0x20
            var_1a18.q = x8_3
            var_1a20_1.d = 0
            DiscardCards(arg1, zx.q(x27), &var_cf0, zx.q(var_70_3), 0x3ea, 0xb, 8, 0)
        
        x8_1 = *(arg1 + 0xd40)
        x11_1 += 1
    while (x11_1 s< x8_1)

__builtin_memset(&var_19c0, 0, 0x48)
var_64 = 0x12
int64_t var_1a20_2 = 0
TriggerEvents(arg1, zx.q(x27), &var_64, 1, &var_19c0, 0, nullptr, 0)
DrawHand(arg1, zx.q(x27), false)
__builtin_memset(&var_19c0, 0, 0x48)
var_64 = 4
int64_t var_1a20_3 = 0
int32_t x0_53
int32_t x6_2
int32_t x16
x0_53, x6_2, x16 = TriggerEvents(arg1, zx.q(x27), &var_64, 1, &var_19c0, 0, nullptr, 0)

if (*(arg1 + 0xd50) s> 0x15)
    int32_t x20_1 = *(arg1 + muls.dp.d(x27, 0x5a30) + 0x18194)
    
    if (x20_1 s>= 1)
        uint64_t x9_38 = zx.q(*(arg1 + 0x19ac))
        int32_t x8_88
        
        x8_88 = x27 == 0xffffffff ? 6 : 0x3f1
        
        int32_t x21_1
        
        if (x9_38.d s< 1)
            x21_1 = 0
        else
            int64_t i_9
            
            if (x9_38.d u>= 3)
                i_9 = x9_38 & 0xfffffffe
                int32_t x11_3 = 0
                int32_t x12_1 = 0
                void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
                int64_t i_6 = i_9
                int64_t i_2
                
                do
                    int32_t x15_5 = *(x13_1 - 0x18)
                    
                    if (x15_5 == x8_88)
                        x16 = *(x13_1 - 0x1c)
                    
                    int32_t x17_3 = *(x13_1 + 8)
                    
                    if (x17_3 == x8_88)
                        x0_53 = *(x13_1 + 4)
                    
                    int32_t x3_6 = x16 == x27 ? 1 : 0
                    int32_t x1_23 = x3_6 & (x15_5 == x8_88 ? 1 : 0)
                    
                    if (x1_23 == 1)
                        x3_6 = *(x13_1 - 0x20)
                    
                    int32_t x2_14 = (x0_53 == x27 ? 1 : 0) & (x17_3 == x8_88 ? 1 : 0)
                    
                    if (x2_14 != 0)
                        x6_2 = *x13_1
                    
                    int32_t x4_5 = x3_6 != 0xc00 ? 1 : 0
                    int32_t x5_1 = x6_2 == 0xc00 ? 1 : 0
                    
                    if (((x4_5 | (x1_23 ^ 1)) & 1) == 0)
                        x4_5 = *(x13_1 - 0xc)
                    
                    if ((x5_1 & x2_14) != 0)
                        x5_1 = *(x13_1 + 0x14)
                    
                    int32_t x0_54 = x2_14 & (x6_2 != 0xc00 ? 1 : 0)
                    x6_2 = x15_5 == x8_88 ? 1 : 0
                    x16 = (x6_2 & (x16 != x27 ? 1 : 0)) | (x1_23 & (x3_6 != 0xc00 ? 1 : 0))
                    x0_53 = ((x17_3 == x8_88 ? 1 : 0) & (x0_53 != x27 ? 1 : 0)) | x0_54
                    int32_t x15_3
                    
                    if ((x16 | (x15_5 != x8_88 ? 1 : 0)) != 0)
                        x15_3 = 0
                    else
                        x15_3 = x4_5
                    
                    x11_3 += x15_3
                    int32_t x15_4
                    
                    if ((x0_53 | (x17_3 != x8_88 ? 1 : 0)) != 0)
                        x15_4 = 0
                    else
                        x15_4 = x5_1
                    
                    i_2 = i_6
                    i_6 -= 2
                    x12_1 += x15_4
                    x13_1 += 0x40
                while (i_2 != 2)
                x21_1 = x12_1 + x11_3
                
                if (i_9 != x9_38)
                    goto label_bef10c
            else
                i_9 = 0
                x21_1 = 0
            label_bef10c:
                void* x11_7 = arg1 + (i_9 << 5) + 0x15f68
                int64_t i_5 = x9_38 - i_9
                int64_t i_3
                
                do
                    if (*(x11_7 + 8) == x8_88 && *(x11_7 + 4) == x27 && *x11_7 == 0xc00)
                        x21_1 += *(x11_7 + 0x14)
                    
                    i_3 = i_5
                    i_5 -= 1
                    x11_7 += 0x20
                while (i_3 != 1)
        
        if (x21_1 != 0 && x20_1 != neg.d(GetCoffers(arg1, zx.q(x27))))
            int32_t x0_58 = ChoosePayoffDebt(arg1, zx.q(x27), 6)
            
            if (x0_58 != 0)
                PayoffDebt(arg1, zx.q(x27), x0_58)

RemovePlayerOngoingDuration(arg1, zx.q(x27), 1, -1)
RemovePlayerOngoingDuration(arg1, zx.q(x27), 4, -1)
RemovePlayerOngoingDuration(arg1, zx.q(x27), 5, -1)
int64_t result = RemovePlayerOngoingNextTurn(arg1, zx.q(x27))

if (*(arg1 + 0x19c0) s>= 1)
    int32_t i_4 = 0
    
    do
        void* x8_94 = arg1 + muls.dp.d(i_4, 0xb8)
        
        if ((zx.d(*(x8_94 + 0x3c20c)) & 4) == 0)
            int64_t i_7 = sx.q(i_4)
            int32_t x9_45 = *(arg1 + i_7 * 0xb8 + 0x3c224)
            DomGame& x0_74
            DomAbility* x1_31
            uint64_t x2_16
            
            if (x9_45 == 0)
            label_beef60:
                
                if (*(arg1 + i_7 * 0xb8 + 0x3c24c) != 0)
                    uint64_t x23_2 = zx.q(*(arg1 + i_7 * 0xb8 + 0x3c224))
                    
                    if (x23_2.d u>= 0x320)
                        void* x0_70 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_111 = x0_70 + sx.q(*(x0_70 + 0x13000)) * 0x98
                        *(*(x8_111 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_112 = *(x8_111 - 0x90)
                        *(x8_112 + 0x1a2c) = *(x8_112 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    result = CardIsFast(arg1, zx.q(*(arg1 + x23_2 * 0x68 + 0x1a70)), 0x80)
                    
                    if ((result.d & 1) != 0)
                        int32_t x8_115 = *(arg1 + i_7 * 0xb8 + 0x3c250)
                        
                        if (x8_115 == 0)
                        label_bef080:
                            x2_16 = zx.q(*(arg1 + i_7 * 0xb8 + 0x3c24c))
                            x0_74 = arg1
                            x1_31 = x8_94 + 0x3c208
                            goto label_beed94
                        
                        uint64_t x28_3 = zx.q(*(arg1 + i_7 * 0xb8 + 0x3c24c))
                        
                        if (x28_3.d u>= 0x320)
                            void* x0_73 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_118 = x0_73 + sx.q(*(x0_73 + 0x13000)) * 0x98
                            *(*(x8_118 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_119 = *(x8_118 - 0x90)
                            *(x8_119 + 0x1a2c) = *(x8_119 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            result = XTrace("game thread resume (error)")
                            x8_115 = *(arg1 + i_7 * 0xb8 + 0x3c250)
                        
                        void* x9_56 = arg1 + x28_3 * 0x68
                        int32_t x10_5 = *(x9_56 + 0x1a74)
                        
                        if (*(x9_56 + 0x1a78) != x8_115
                                || (((x10_5 == 0x3e9 ? 1 : 0) | (x10_5 == 0x451 ? 1 : 0)) & 1)
                                == 0)
                            goto label_bef080
            else
                uint64_t x28_1 = zx.q(x9_45.w)
                
                if (x28_1.d u>= 0x320)
                    void* x0_65 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_97 = x0_65 + sx.q(*(x0_65 + 0x13000)) * 0x98
                    *(*(x8_97 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_98 = *(x8_97 - 0x90)
                    *(x8_98 + 0x1a2c) = *(x8_98 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                result = CardIsFast(arg1, zx.q(*(arg1 + x28_1 * 0x68 + 0x1a70)), 0x80)
                
                if ((result.d & 1) == 0)
                    goto label_beef60
                
                int32_t x8_101 = *(arg1 + i_7 * 0xb8 + 0x3c228)
                
                if (x8_101 != 0)
                    uint64_t x28_2 = zx.q(*(arg1 + i_7 * 0xb8 + 0x3c224))
                    
                    if (x28_2.d u>= 0x320)
                        void* x0_68 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_104 = x0_68 + sx.q(*(x0_68 + 0x13000)) * 0x98
                        *(*(x8_104 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_105 = *(x8_104 - 0x90)
                        *(x8_105 + 0x1a2c) = *(x8_105 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        result = XTrace("game thread resume (error)")
                        x8_101 = *(arg1 + i_7 * 0xb8 + 0x3c228)
                    
                    void* x9_50 = arg1 + x28_2 * 0x68
                    int32_t x10_3 = *(x9_50 + 0x1a74)
                    
                    if (*(x9_50 + 0x1a78) != x8_101
                            || (((x10_3 == 0x3e9 ? 1 : 0) | (x10_3 == 0x451 ? 1 : 0)) & 1) == 0)
                        goto label_beed88
                    
                    goto label_beef60
                
            label_beed88:
                x0_74 = arg1
                x1_31 = x8_94 + 0x3c208
                x2_16 = 0
            label_beed94:
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                result, v0_1, v1_1, v2_1, v3_1 = CancelAbility(x0_74, x1_31, x2_16)
                *(arg1 + 0x3c208 + i_7 * 0xb8 + 0x58) = 0
                i_4 -= 1
                int64_t x9_41 = sx.q(*(arg1 + 0x19c0)) - 1
                *(arg1 + 0x19c0) = x9_41.d
                int128_t* x8_92 = arg1 + 0x3c208 + x9_41 * 0xb8
                v0_1 = x8_92[3]
                v3_1 = *x8_92
                v2_1 = x8_92[1]
                *(x8_94 + 0x3c228) = x8_92[2]
                *(x8_94 + 0x3c238) = v0_1
                *(x8_94 + 0x3c208) = v3_1
                *(x8_94 + 0x3c218) = v2_1
                v0_1 = x8_92[7]
                v3_1 = x8_92[4]
                v2_1 = x8_92[5]
                *(x8_94 + 0x3c268) = x8_92[6]
                *(x8_94 + 0x3c278) = v0_1
                *(x8_94 + 0x3c248) = v3_1
                *(x8_94 + 0x3c258) = v2_1
                v0_1 = x8_92[0xa]
                int64_t x9_42 = x8_92[0xb].q
                v1_1 = x8_92[8]
                *(x8_94 + 0x3c298) = x8_92[9]
                *(x8_94 + 0x3c2a8) = v0_1
                *(x8_94 + 0x3c2b8) = x9_42
                *(x8_94 + 0x3c288) = v1_1
        
        i_4 += 1
    while (i_4 s< *(arg1 + 0x19c0))

int32_t x8_121 = *(arg1 + 0x150c)

if (x8_121 - 3 u>= 4)
    int64_t var_1a08_1 = 0
    int32_t var_1a10_6 = 0
    int32_t var_1a18_1 = 0
    var_1a20_3.d = 0
    result = DomNotifyEffect(zx.q(x8_121 == 2 ? 1 : 0), 0x29, zx.q(var_19e4), 0, 0, 0, 0, 0)

*(arg1 + 0x19f4) = 0
return result
