// 函数: _Z12PlayInternalR7DomGame9PlayerWhoRK7CardRefS4_S4_13PlayCardFlags
// 地址: 0xbe5528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg6
int32_t x21 = arg2.d
void* x0 = DomPushContext(arg1, arg2, arg3)
uint64_t x26 = zx.q(*arg3)
int32_t var_d38 = 1
int32_t var_d30 = x21
int64_t var_d28 = *(x0 + 0x40)
int32_t var_d18 = *(arg1 + muls.dp.d(x21, 0x5a30) + 0x181c8)

if (x26.d u>= 0x320)
    void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int64_t var_d20 = CardTypeQuery(arg1, zx.q(*(arg1 + x26 * 0x68 + 0x1a70)), false, -1)
int32_t var_d70

if ((x22 & 0x20) != 0)
    int32_t var_d68_1 = 0
    var_d70 = 0
    AddOngoing(arg1, zx.q(x21), 0x1a, zx.q(*arg3), 6, *(x0 + 0x40), 0, 0xffffffff)

uint32_t x26_3

if (*arg4 == 0)
    x26_3 = 0
else
    int32_t x26_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)
    
    if (x26_1 s<= 0)
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_9 = x0_9 + muls.dp.d(x26_1 - 1, 0x98)
        *(*(x8_9 + 8) + 0x1a28) = 0xffffffff
        void* x8_10 = *(x8_9 + 8)
        *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x26_1 = *(x0_9 + 0x13000)
    
    int64_t x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(x0_11 + muls.dp.d(x26_1, 0x98) - 0x68) = *arg4
    x26_3 = zx.d(*arg4)

int32_t x8_13

if ((x22 & 4) != 0)
    x8_13 = 0x12
else
    x8_13 = 0x11

int32_t x25_1

if ((x22 & 2) == 0)
    x25_1 = x8_13
else
    x25_1 = 0x13

if (x26_3 u>= 0x320)
    void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_16 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_17 = *(x8_16 - 0x90)
    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2
    
    if (*(arg1 + 0x19d4) == x21)
        x2 = zx.q(*(arg1 + 0x19d8))
    else
        x2 = zx.q(x21)
    
    int32_t var_d60_1 = 0
    int32_t var_d68_2 = 0
    var_d70 = 0
    DomAddLogEvent(arg1, zx.q(x21), x2, zx.q(x25_1), 0, arg3, 1, 
        zx.q(*(arg1 + mulu.dp.d(x26_3, 0x68) + 0x1a70)))

int32_t x8_22 = *arg5

if (x8_22 != 0)
    uint64_t x26_4 = zx.q(x8_22.w)
    
    if (x26_4.d u>= 0x320)
        void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_25 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
        *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_26 = *(x8_25 - 0x90)
        *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if (*(arg1 + x26_4 * 0x68 + 0x1a74) == 0x3e9)
        int32_t x26_5 = *arg3
        int32_t x24_1 = *arg5
        uint64_t fp_2 = zx.q(x26_5.w)
        
        if (fp_2.d u>= 0x320)
            void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_31 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
            *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_32 = *(x8_31 - 0x90)
            *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x8_33 = *(arg1 + 0x150c)
        
        if (x8_33 - 3 u>= 4)
            int64_t var_d58_1 = 0
            int32_t var_d60_2 = 0
            int32_t var_d68_3 = 0
            var_d70 = 0
            DomNotifyEffect(zx.q(x8_33 == 2 ? 1 : 0), 0x16, zx.q(x21), zx.q(x24_1), 7, zx.q(x26_5), 
                zx.q(*(arg1 + fp_2 * 0x68 + 0x1a70)), 0)

uint64_t x24_2 = zx.q(*arg3)

if (x24_2.d u>= 0x320)
    void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_36 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
    *(*(x8_36 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_37 = *(x8_36 - 0x90)
    *(x8_37 + 0x1a2c) = *(x8_37 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if ((CardIsFast(arg1, zx.q(*(arg1 + x24_2 * 0x68 + 0x1a70)), 4) & 1) != 0)
    *(arg1 + muls.dp.d(x21, 0x5a30) + 0x181c8) += 1

void* x8_41 = arg1 + sx.q(x21) * 0x5a30
int64_t x10_2 = sx.q(*(x8_41 + 0x181cc))
*(x8_41 + 0x181cc) = x10_2.d + 1
*(x8_41 + (x10_2 << 2) + 0x19b18) = *arg3
char var_d3c = 0
int32_t var_cf0 = 9
var_d70.q = &var_d3c
int32_t x0_25 = TriggerEvents(arg1, zx.q(x21), &var_cf0, 1, &var_d38, 0, arg3, 1)
int32_t var_d40 = 0
uint64_t x28_1 = zx.q(*arg3)
int32_t x26_6 = (x25_1 == 0x12 ? 1 : 0) | (x22 & 0x10) u>> 4

if (x28_1.d u>= 0x320)
    void* x0_27 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_46 = x0_27 + sx.q(*(x0_27 + 0x13000)) * 0x98
    *(*(x8_46 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_47 = *(x8_46 - 0x90)
    *(x8_47 + 0x1a2c) = *(x8_47 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x25_2 = x26_6 | x0_25
int32_t x0_31

if ((x22 & 1) != 0 || (CardIsFast(arg1, zx.q(*(arg1 + x28_1 * 0x68 + 0x1a70)), 4) & 1) == 0)
    x0_31 = var_d40
    
    if (x0_31 != 0)
    label_be5aa8:
        int32_t x24_5 = x0_31 & 0xffff
        
        if (x24_5 u>= 0x320)
            void* x0_33 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_52 = x0_33 + sx.q(*(x0_33 + 0x13000)) * 0x98
            *(*(x8_52 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_53 = *(x8_52 - 0x90)
            *(x8_53 + 0x1a2c) = *(x8_53 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t x2_4
        
        if (*(arg1 + mulu.dp.d(x24_5, 0x68) + 0x1a70) == 0xf3a)
            int32_t x0_35 = CardsWhere(arg1, 0xffffffff, 5, &var_cf0)
            
            if (x0_35 == 1)
                goto label_be5be8
            
            uint32_t x24_6
            
            if (x0_35 != 0)
                void* x0_38 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_62 = x0_38 + sx.q(*(x0_38 + 0x13000)) * 0x98
                *(*(x8_62 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_63 = *(x8_62 - 0x90)
                *(x8_63 + 0x1a2c) = *(x8_63 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            label_be5be8:
                x24_6 = zx.d(var_cf0.w)
                
                if (x24_6 u>= 0x320)
                    void* x0_40 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_66 = x0_40 + sx.q(*(x0_40 + 0x13000)) * 0x98
                    *(*(x8_66 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_67 = *(x8_66 - 0x90)
                    *(x8_67 + 0x1a2c) = *(x8_67 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
            else
                x24_6 = 0
            
            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                if (*(arg1 + 0x19d4) == x21)
                    x2_4 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_4 = zx.q(x21)
                
                int32_t var_d60_4 = 0
                int32_t var_d68_5 = 0
                var_d70 = x25_2 & 1
                DomAddLogEvent(arg1, zx.q(x21), x2_4, 0x15, 0, &var_d40, 1, 
                    zx.q(*(arg1 + mulu.dp.d(x24_6, 0x68) + 0x1a70)))
        else if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            if (*(arg1 + 0x19d4) == x21)
                x2_4 = zx.q(*(arg1 + 0x19d8))
            else
                x2_4 = zx.q(x21)
            
            int32_t var_d60_3 = 0
            int32_t var_d68_4 = 0
            var_d70 = x25_2 & 1
            DomAddLogEvent(arg1, zx.q(x21), x2_4, 0x14, 0, &var_d40, 1, 0)
else
    x0_31 = ChooseWay(arg1, zx.q(x21), zx.q(*arg3), x0_25.b & (x26_6.b ^ 1), x25_2.b & 1, 
        (x22 u>> 8).b & 1)
    var_d40 = x0_31
    
    if (x0_31 != 0)
        goto label_be5aa8

if (zx.d(*(arg1 + 0x19e0)) != 0 && *(arg1 + 0x19d4) == x21)
    uint64_t x24_7 = zx.q(*arg3)
    
    if (x24_7.d u>= 0x320)
        void* x0_42 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_77 = x0_42 + sx.q(*(x0_42 + 0x13000)) * 0x98
        *(*(x8_77 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_78 = *(x8_77 - 0x90)
        *(x8_78 + 0x1a2c) = *(x8_78 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if ((CardIsFast(arg1, zx.q(*(arg1 + x24_7 * 0x68 + 0x1a70)), 4) & 1) != 0
            && CountOngoing(arg1, zx.q(x21), 0xb, 0, 0) s<= 0)
        int32_t var_d68_6 = 0
        var_d70 = 0
        AddOngoing(arg1, zx.q(x21), 0xb, 0, 1, 0, 0, 0xffffffff)

if (zx.d(*(arg1 + 0x19e0)) != 0 && *(arg1 + 0x19d4) == x21)
    uint64_t x24_8 = zx.q(*arg3)
    
    if (x24_8.d u>= 0x320)
        void* x0_49 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_84 = x0_49 + sx.q(*(x0_49 + 0x13000)) * 0x98
        *(*(x8_84 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_85 = *(x8_84 - 0x90)
        *(x8_85 + 0x1a2c) = *(x8_85 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if ((CardIsFast(arg1, zx.q(*(arg1 + x24_8 * 0x68 + 0x1a70)), 2) & 1) != 0
            && CountOngoing(arg1, zx.q(x21), 0xc, 0, 0) s<= 0)
        int32_t var_d68_7 = 0
        var_d70 = 0
        AddOngoing(arg1, zx.q(x21), 0xc, 0, 1, 0, 0, 0xffffffff)

int32_t x8_101
int32_t x24_11

if (zx.d(*(arg1 + 0x19e0)) != 0 && *(arg1 + 0x19d4) == x21)
    uint64_t x24_9 = zx.q(*arg3)
    
    if (x24_9.d u>= 0x320)
        void* x0_56 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_91 = x0_56 + sx.q(*(x0_56 + 0x13000)) * 0x98
        *(*(x8_91 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_92 = *(x8_91 - 0x90)
        *(x8_92 + 0x1a2c) = *(x8_92 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    uint64_t x24_10
    
    if (*(arg1 + x24_9 * 0x68 + 0x1a70) != 0x106)
        x24_10 = zx.q(*arg3)
        
        if (x24_10.d u>= 0x320)
            void* x0_58 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_97 = x0_58 + sx.q(*(x0_58 + 0x13000)) * 0x98
            *(*(x8_97 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_98 = *(x8_97 - 0x90)
            *(x8_98 + 0x1a2c) = *(x8_98 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
    
    if (*(arg1 + x24_9 * 0x68 + 0x1a70) != 0x106 && *(arg1 + x24_10 * 0x68 + 0x1a70) != 0x105)
        goto label_be5f6c
    
    if (CountOngoing(arg1, zx.q(x21), 0x1c, 0, 0) s> 0)
        goto label_be5f6c
    
    int32_t var_d68_9 = 0
    var_d70 = 0
    AddOngoing(arg1, zx.q(x21), 0x1c, 0, 1, 0, 0, 0xffffffff)
    x8_101 = var_d40
    x24_11 = *arg3
    
    if (x8_101 != 0)
        goto label_be5f78
    
    goto label_be60f8

label_be5f6c:
x8_101 = var_d40
x24_11 = *arg3
int32_t var_64
int32_t x8_111

if (x8_101 == 0)
label_be60f8:
    ExecFollowInstructions(arg1, zx.q(x21), zx.q(x24_11))
    x8_111 = *(arg1 + 0x150c)
    
    if (*(arg1 + 0x60) == 0)
    label_be6108:
        
        if (x8_111 != 3)
            InvalidateSubmittedActions()
            x8_111 = *(arg1 + 0x150c)
else
label_be5f78:
    uint64_t x25_3 = zx.q(x8_101.w)
    
    if (x25_3.d u>= 0x320)
        void* x0_62 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_104 = x0_62 + sx.q(*(x0_62 + 0x13000)) * 0x98
        *(*(x8_104 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_105 = *(x8_104 - 0x90)
        *(x8_105 + 0x1a2c) = *(x8_105 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x25_4 = *(arg1 + x25_3 * 0x68 + 0x1a70)
    void* x0_64 = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(x0_64 + sx.q(*(x0_64 + 0x13000)) * 0x98 - 0x60) = x25_4
    int32_t x8_110 = *(arg1 + 0x150c)
    
    if (x8_110 - 3 u>= 4)
        int64_t var_d58_2 = 0
        int32_t var_d60_5 = 0
        int32_t var_d68_8 = 0
        var_d70 = 0
        DomNotifyEffect(zx.q(x8_110 == 2 ? 1 : 0), 0x16, zx.q(x21), zx.q(x24_11), 3, zx.q(x25_4), 
            0, 0)
    
    GetReplacementFn(arg1, zx.q(x25_4))()
    DeferReducePlayCount(arg1, zx.q(x24_11))
    __builtin_memset(&var_cf0, 0, 0x48)
    var_64 = 0x15
    var_d70.q = 0
    TriggerEvents(arg1, zx.q(x21), &var_64, 1, &var_cf0, 0, &var_d40, 1)
    x8_111 = *(arg1 + 0x150c)
    
    if (*(arg1 + 0x60) == 0)
        goto label_be6108

if (x8_111 - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_8
    
    if (*(arg1 + 0x19d4) == x21)
        x2_8 = zx.q(*(arg1 + 0x19d8))
    else
        x2_8 = zx.q(x21)
    
    int32_t var_d60_6 = 0
    int32_t var_d68_10 = 0
    var_d70 = 0
    DomAddLogEvent(arg1, zx.q(x21), x2_8, 0x17, 0, arg3, 1, 0)

if (*(arg1 + 0xd40) s>= 1)
    int64_t x23_1 = *(x0 + 0x40)
    int32_t i = 0
    
    do
        RemovePlayerOngoingDuration(arg1, zx.q(i), 6, x23_1)
        i += 1
    while (i s< *(arg1 + 0xd40))

int32_t* x8_117 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
*x8_117 -= 1
CalcScores(arg1)
char x8_119

if ((x22 & 0x40) != 0)
    int32_t var_d68_11 = 0
    int32_t var_d70_1 = 0
    AddOngoing(arg1, zx.q(x21), 0x16, zx.q(*arg3), 6, 0, 0, 0xffffffff)
    var_cf0 = 0xa
    var_64.b = 0
    var_d70_1.q = &var_64
    TriggerEvents(arg1, zx.q(x21), &var_cf0, 1, &var_d38, 0, arg3, 1)
    x8_119 = var_d3c | var_64.b
    var_d3c = x8_119
    
    if (*(arg1 + 0xd40) s>= 1)
        int32_t i_1 = 0
        
        do
            RemovePlayerOngoingDuration(arg1, zx.q(i_1), 6, 0)
            i_1 += 1
        while (i_1 s< *(arg1 + 0xd40))
        
        x8_119 = var_d3c
else
    var_cf0 = 0xa
    var_64.b = 0
    var_d70.q = &var_64
    TriggerEvents(arg1, zx.q(x21), &var_cf0, 1, &var_d38, 0, arg3, 1)
    x8_119 = var_d3c | var_64.b

return zx.q(zx.d(x8_119) != 0 ? 1 : 0)
