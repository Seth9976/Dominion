// 函数: _Z10DrawFateToR7DomGame11DomCardEnum9PlayerWho8DomWhere10DomPileLoc9ContextId6CardIDS1_b
// 地址: 0xbed03c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x28 = arg7
int64_t x23 = arg6
int32_t x24 = arg4
int32_t x20 = arg3
int32_t x26 = arg2
void* __offset(DomGame, 0x1508) fp = arg1 + 0x1508

if (arg2 != 0xd30 && x26 != 0xd3d)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x25

if (arg2 != 0xd30 && x26 != 0xd3d && x26 == 0)
label_bed114:
    x25 = 0
else
    void* __offset(DomGame, 0x15a0) x9_3 = arg1 + 0x15a0
    int64_t x8_5 = -0x41
    
    while (true)
        if (*(x9_3 - 4) == x26 || *x9_3 == x26)
            x25 = x8_5.d + 0x48
            break
        
        int64_t temp0_1 = x8_5
        x8_5 += 1
        x9_3 += 0x10
        
        if (temp0_1 u>= -1)
            goto label_bed114
        
        continue

void* __offset(DomGame, 0x1a18) x2

if (x26 == 0xd30)
    x2 = arg1 + 0x1a18
else
    x2 = arg1 + 0x1a1c

int64_t var_d80
int32_t var_64

if ((TryDoCampaignFateDraw(arg1, zx.q(x26), x2, &var_64) & 1) == 0
        && (TryForceFateDraw(arg1, zx.q(x26), zx.q(arg8), &var_64) & 1) == 0)
    int32_t var_ce8[0x320]
    int32_t x0_7 = CardsWhere(arg1, 0xffffffff, zx.q(x25), &var_ce8)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9, std::__ndk1::allocator<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9>, bool (CardID)>::VTable
        * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9, std::__ndk1::allocator<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    DomGame& var_d18_1 = arg1
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9, std::__ndk1::allocator<DrawFateTo(DomGame&, DomCardEnum, PlayerWho, DomWhere, DomPileLoc, ContextId, CardID, DomCardEnum, bool)::$_9>, bool (CardID)>::VTable
        * const* var_d00_1 = &var_d20
    FilterCards(&var_d20, &var_ce8, nullptr)
    
    if (&var_d20 == var_d00_1)
        (*var_d00_1)->vFunc_4()
    else if (var_d00_1 != 0)
        (*var_d00_1)->j_operator delete()
    
    int32_t x1_3 = x0_7
    
    if (x1_3 == 0)
        int32_t x8_26 = *(arg1 + 0x150c)
        int32_t var_d68
        
        if (x8_26 - 3 u>= 4)
            var_d68.q = 0
            int32_t var_d70_6 = 0
            int32_t var_d78_6 = 0
            var_d80.d = 0
            DomNotifyEffect(zx.q(x8_26 == 2 ? 1 : 0), 0x1d, 0xffffffff, 0, zx.q(x25), 0, 0, 0)
            
            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*fp) == 0)
                uint64_t x2_7
                
                if (*(arg1 + 0x19d4) == x20)
                    x2_7 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_7 = zx.q(x20)
                
                int32_t var_d70_7 = 0
                int32_t var_d78_7 = 0
                var_d80.d = 0
                DomAddLogEvent(arg1, zx.q(x20), x2_7, 4, 0, nullptr, 0, zx.q(x26))
        
        int32_t x0_21 = CardsWhere(arg1, 0xffffffff, zx.q(x25), &var_ce8)
        
        if (x0_21 != 0)
            int32_t (* x23_1)[0x320] = &var_ce8
            int64_t i_1 = sx.q(x0_21) << 2
            int64_t i
            
            do
                int32_t fp_1 = *x23_1
                uint64_t x26_1 = zx.q(fp_1.w)
                
                if (x26_1.d u>= 0x320)
                    void* x0_23 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_34 = x0_23 + sx.q(*(x0_23 + 0x13000)) * 0x98
                    *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_35 = *(x8_34 - 0x90)
                    *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                void* x8_36 = arg1 + x26_1 * 0x68
                *(x8_36 + 0x1a90) &= 0xfffffffe
                int32_t x8_37 = *(arg1 + 0x150c)
                
                if (x8_37 - 3 u>= 4)
                    var_d68.q = 0
                    int32_t var_d70_8 = 0
                    int32_t var_d78_8 = 0
                    var_d80.d = 0
                    DomNotifyEffect(zx.q(x8_37 == 2 ? 1 : 0), 0x21, 0xffffffff, zx.q(fp_1), 0, 0, 
                        0, 0)
                
                i = i_1
                i_1 -= 4
                x23_1 = &(*x23_1)[1]
            while (i != 4)
            x1_3 = x0_21
        
        if (x0_21 == 0 || x1_3 == 0)
            return 0
    
    int32_t x8_10 = *(arg1 + 0x150c)
    int32_t x0_11
    
    if (x8_10 == 5)
        if (zx.d(*(fp + 0x1c)) == 0)
            x0_11 = RandomInt(arg1, x1_3)
        else
            x0_11 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), x1_3)
    else if (x8_10 != 3 || zx.d(*(fp + 0x1c)) == 0)
        x0_11 = RandomInt(arg1, x1_3)
    else
        x0_11 = DomAIRandomInt(zx.q(*(arg1 + 0x1520)), x1_3)
    
    var_64 = var_ce8[sx.q(x0_11)]

DomGame& x0_14
uint64_t x1_5
uint64_t x2_6
uint64_t x3_3
int64_t x4
uint64_t x5_1

if (x24 != 3)
    if ((zx.d(arg9) & 1) != 0 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*fp) == 0)
        uint64_t x2_4
        
        if (*(arg1 + 0x19d4) == x20)
            x2_4 = zx.q(*(arg1 + 0x19d8))
        else
            x2_4 = zx.q(x20)
        
        int32_t var_d70_3 = 0
        int32_t var_d78_3 = 0
        var_d80.d = 0
        DomAddLogEvent(arg1, zx.q(x20), x2_4, 0x2e, 0, &var_64, 1, 0)
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*fp) == 0)
        uint64_t x2_5
        
        if (*(arg1 + 0x19d4) == x20)
            x2_5 = zx.q(*(arg1 + 0x19d8))
        else
            x2_5 = zx.q(x20)
        
        int32_t var_d70_4 = 0
        int32_t var_d78_4 = 0
        var_d80.d = 0
        DomAddLogEvent(arg1, zx.q(x20), x2_5, 0x54, 0, &var_64, 1, 0)
    
    x2_6 = zx.q(var_64)
    x0_14 = arg1
    x1_5 = zx.q(x20)
    x3_3 = zx.q(x25)
    x4 = 0
    x5_1 = zx.q(x24)
    int32_t var_d58_2 = 0
    int64_t var_d60_2 = 0
    int32_t var_d68_2 = 0
    int32_t var_d70_5 = 0
    int32_t var_d78_5 = x28
    int64_t var_d80_2 = x23
else
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*fp) == 0)
        uint64_t x2_3
        
        if (*(arg1 + 0x19d4) == x20)
            x2_3 = zx.q(*(arg1 + 0x19d8))
        else
            x2_3 = zx.q(x20)
        
        int32_t var_d70_1 = 0
        int32_t var_d78_1 = 0
        var_d80.d = 0
        DomAddLogEvent(arg1, zx.q(x20), x2_3, 0x3a, 0, &var_64, 1, 0)
    
    x2_6 = zx.q(var_64)
    int32_t var_d58_1 = 0
    int64_t var_d60_1 = 0
    int32_t var_d68_1 = 0
    int32_t var_d70_2 = 0
    int32_t var_d78_2 = x28
    x4 = 0x18
    x5_1 = 3
    int64_t var_d80_1 = x23
    x0_14 = arg1
    x1_5 = zx.q(x20)
    x3_3 = zx.q(x25)

MoveCardTo(x0_14, x1_5, x2_6, x3_3, x4, x5_1, 0, arg5)
return zx.q(var_64)
