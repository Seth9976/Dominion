// 函数: _Z16DrawCardBottomToR7DomGame9PlayerWho8DomWhere9DrawStyle9ContextId6CardID
// 地址: 0xbebaa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74)
int32_t x23 = arg6
int64_t x20 = arg5
int32_t x24 = arg4
int32_t x21 = arg2
int32_t x25 = arg3
int32_t var_78_1
int32_t var_74_1
int64_t var_70_1
int32_t i_2

if (i_1 == 0)
    ShuffleDiscardForDeck(arg1, zx.q(x21))
    int32_t i = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74)
    
    if (i == 0)
        return 0
    
    var_78_1 = x25
    var_74_1 = x23
    var_70_1 = x20
    
    do
        int32_t x23_2 = i & 0xffff
        i_2 = i
        
        if (x23_2 u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i = *(arg1 + mulu.dp.d(x23_2, 0x68) + 0x1ac8)
    while (i != 0)
else
    var_78_1 = x25
    var_74_1 = x23
    var_70_1 = x20
    
    do
        int32_t x23_1 = i_1 & 0xffff
        i_2 = i_1
        
        if (x23_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i_1 = *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1ac8)
    while (i_1 != 0)

int32_t i_3 = i_2

if (x24 != 1)
    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_13 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_14 = *(x8_13 - 0x90)
    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int64_t x5_1
int32_t x9_7
int32_t var_a0
int32_t var_98

if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    x9_7 = var_74_1
    
    if (x24 != 1)
    label_bebd00:
        
        if (var_78_1 == 0x3ee)
            x5_1 = 0
        else
            if (var_78_1 != 0x3ea && var_78_1 - 0x45f u>= 2)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_11
                int64_t x1_3
                int32_t x2_2
                int64_t x3
                int64_t x4_1
                int64_t x5_2
                int64_t x6
                CardID* x7_2
                x0_11, x1_3, x2_2, x3, x4_1, x5_2, x6, x7_2 = XNoReturn()
                return DrawCardsTo(x0_11, x1_3, x2_2, x3, x4_1, x5_2, x6, x7_2, var_a0, var_98)
                    __tailcall
            
            x5_1 = 3
    else
        x5_1 = 5
else
    uint64_t x2
    
    if (*(arg1 + 0x19d4) == x21)
        x2 = zx.q(*(arg1 + 0x19d8))
    else
        x2 = zx.q(x21)
    
    int32_t var_90_1 = 0
    var_98 = 0
    var_a0 = 0
    DomAddLogEvent(arg1, zx.q(x21), x2, 0x2c, 0, &i_3, 1, 0)
    x9_7 = var_74_1
    
    if (x24 != 1)
        goto label_bebd00
    
    x5_1 = 5
int32_t var_80_1 = 0
int64_t var_88_1 = 0
int32_t var_90_2 = 0
int32_t var_98_1 = 0
int32_t var_a0_1 = x9_7
MoveCardToSafe(arg1, zx.q(x21), zx.q(i_3), 0, zx.q(var_78_1), x5_1, 0xffffffff, var_70_1)
return zx.q(i_3)
