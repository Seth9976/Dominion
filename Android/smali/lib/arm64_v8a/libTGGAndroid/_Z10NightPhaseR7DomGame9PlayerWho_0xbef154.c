// 函数: _Z10NightPhaseR7DomGame9PlayerWho
// 地址: 0xbef154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x150c)
int32_t x20 = arg2
int32_t var_d60
int64_t var_d58

if (x8 - 3 u>= 4)
    var_d58 = 0
    var_d60 = 0
    int32_t var_d68_1 = 0
    int32_t var_d70_1 = 0
    DomNotifyEffect(zx.q(x8 == 2 ? 1 : 0), 0x29, zx.q(x20), 0, 4, 0, 0, 0)

*(arg1 + 0x19f4) = 4
int32_t var_ce0
int32_t i_1 = GetNightCards(arg1, zx.q(x20), &var_ce0)
int64_t result = LimitPlayableCards(arg1, zx.q(x20), &var_ce0, &i_1)
int32_t i = i_1

if (i != 0)
    int32_t x8_1 = 1
    
    do
        if ((x8_1 & 1) != 0)
            int32_t x8_2 = *(arg1 + 0x150c)
            
            if (x8_2 - 3 u>= 4)
                var_d58 = 0
                var_d60 = 0
                int32_t var_d68_2 = 0
                int32_t var_d70_2 = 0
                DomNotifyEffect(zx.q(x8_2 == 2 ? 1 : 0), 5, zx.q(x20), 0, 4, 0, 0, 0)
        
        int64_t var_cf0 = 0
        int128_t var_d30
        __builtin_memset(&var_d30, 0, 0x30)
        var_d30.d = 8
        int128_t var_d20_1
        var_d20_1:0xc.d = 0
        int128_t var_d10_1
        var_d10_1:8.q = 0
        int64_t var_d00_1 = 0
        AllSame(arg1, &var_ce0, i)
        uint64_t x3_1
        
        if (*(arg1 + 0x19d4) == x20)
            x3_1 = zx.q(*(arg1 + 0x19d8))
        else
            x3_1 = zx.q(x20)
        
        int32_t var_d48_1 = 0
        int32_t var_d50_1 = 0
        var_d58.d = 1
        var_d60.q = &var_d30
        int32_t var_d68_3 = 1
        int32_t var_d70_3 = 0
        result = DomNotifyYield(arg1, &var_cf0, zx.q(x20), x3_1, 1, &var_ce0, zx.q(i), 1)
        
        if (result.d != 1)
            if (result.d == 0)
                break
            
            pthread_kill(pthread_self(), 6)
            DomGame* x0_14
            int64_t x1_7
            int64_t x2_10
            x0_14, x1_7, x2_10 = XNoReturn()
            return IsNextTurnPossessionForSamePlayer(x0_14, x1_7, x2_10) __tailcall
        
        int32_t x24 = var_ce0
        uint64_t x21_1 = zx.q(x24.w)
        
        if (x21_1.d u>= 0x320)
            void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_6 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
            *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_7 = *(x8_6 - 0x90)
            *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t x24_1 = zx.q(x24) | zx.q(*(arg1 + x21_1 * 0x68 + 0x1a78)) << 0x20
        var_cf0 = 0
        var_d30.q = x24_1
        int64_t var_d38 = 0
        result = PlayCard(arg1, zx.q(x20), &var_d30, &var_cf0, &var_d38, 0)
        
        if (*(arg1 + 0x19f4) != 4)
            return result
        
        i_1 = GetNightCards(arg1, zx.q(x20), &var_ce0)
        result = LimitPlayableCards(arg1, zx.q(x20), &var_ce0, &i_1)
        i = i_1
        x8_1 = 0
    while (i != 0)

*(arg1 + 0x19f4) = 0
return result
