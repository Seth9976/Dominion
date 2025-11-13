// 函数: _Z5DoBuyR7DomGame9PlayerWhoRK7CardIDs7BuyFlagR6CardIDRbS6_
// 地址: 0xbe98e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = 0
int32_t var_68 = 0
bool var_cec = false
int32_t x26 = arg4
int32_t x19 = arg2
int32_t x23 = 0
int32_t var_3690
int64_t var_3688
int32_t var_ce8
int32_t x22

if (zx.d(*arg6) == 0)
    var_68 = GetTreasureCards(arg1, zx.q(x19), &var_ce8, 2, &var_cec)
    LimitPlayableCards(arg1, zx.q(x19), &var_ce8, &var_68)
    x23 = var_68
    x22 = x26 & 2
    
    if ((x23 | x22) == 0)
    label_be99a8:
        int32_t x8_3 = *(arg1 + 0x150c)
        
        if (x8_3 - 3 u>= 4)
            var_3688 = 0
            var_3690 = 0
            int32_t var_3698_1 = 0
            int32_t var_36a0_1 = 0
            DomNotifyEffect(zx.q(x8_3 == 2 ? 1 : 0), 0x29, zx.q(x19), 0, 3, 0, 0, 0)
else
    x22 = x26 & 2
    
    if (x22 == 0)
        goto label_be99a8

uint32_t x24_1

if ((AllowAutoplayTreasures(arg1, zx.q(x19)) & 1) == 0)
    var_cec = false
    
    if (CountOngoing(arg1, zx.q(x19), 0x19, 0, 0) s< 1)
        x24_1 = 0
    else
        int32_t x8_5 = *(arg1 + muls.dp.d(x19, 0x5a30) + 0x181d0)
        
        if (x8_5 s< 3)
            x24_1 = 0
            
            if (x23 s>= 3 - x8_5)
                x23 = 3 - x8_5
        else
            x24_1 = 0
            var_68 = 0
else
    x24_1 = zx.d(var_cec)

BuyableCard var_14f0
int32_t i_14
int32_t x5
uint64_t x15
int32_t x17
i_14, x5, x15, x17 = ComputeBuyables(arg1, zx.q(x19), arg3, zx.q(x26), &var_14f0)
int64_t var_3600[0xb4]
int32_t var_2978[0xb6]
int64_t var_1cf0[0xca]
int32_t i_17

if (x24_1 == 0 || *(arg1 + 0x150c) - 1 u> 1)
    i_17 = 0
else
    data_185dc40 += 1
    SimulateGame(0x185dc48, arg1, zx.q(x19))
    data_185f154 = 6
    PlayAutoplayTreasures(0x185dc48, zx.q(x19), 4)
    int32_t x0_9 = ComputeBuyables(0x185dc48, zx.q(x19), arg3, zx.q(x26), &var_2978)
    PlayAutoplayTreasures(0x185dc48, zx.q(x19), 2)
    int32_t i_18
    i_18, x5, x15, x17 = ComputeBuyables(0x185dc48, zx.q(x19), arg3, zx.q(x26), &var_3600)
    
    if (i_18 s< 1)
        i_17 = 0
        
        if (x0_9 s>= 1)
        label_be9b78:
            int64_t i = 0
            
            do
                if (i_17 s< 1)
                label_be9b98:
                    var_1cf0[sx.q(i_17)] = var_3600[i]
                    i_17 += 1
                else
                    uint64_t i_19 = zx.q(i_17)
                    x15 = &var_1cf0
                    
                    while (*x15 != var_2978[i * 2])
                        uint64_t i_20 = i_19
                        i_19 -= 1
                        x15 += 8
                        
                        if (i_20 == 1)
                            goto label_be9b98
                
                i += 1
            while (i != zx.q(x0_9))
    else
        i_17 = i_18
        x5, x15, x17 = memcpy(&var_1cf0, &var_3600, zx.q(i_18) << 3)
        
        if (x0_9 s>= 1)
            goto label_be9b78
    
    data_185dc40 -= 1

uint64_t x8_14 = zx.q(*(arg1 + 0x19ac))
int32_t x28_2 = var_68
int32_t x27_1

x27_1 = x19 == 0xffffffff ? 6 : 0x3f1

int32_t fp

if (x8_14.d s< 1)
    fp = 0
else
    int64_t i_15
    
    if (x8_14.d u>= 3)
        i_15 = x8_14 & 0xfffffffe
        int32_t x10_1 = 0
        int32_t x11_1 = 0
        void* __offset(DomGame, 0x15f88) x12_1 = arg1 + 0x15f88
        int64_t i_10 = i_15
        int64_t i_1
        
        do
            int32_t x14_6 = *(x12_1 - 0x18)
            
            if (x14_6 == x27_1)
                x15 = zx.q(*(x12_1 - 0x1c))
            
            int32_t x16_4 = *(x12_1 + 8)
            
            if (x16_4 == x27_1)
                x17 = *(x12_1 + 4)
            
            int32_t x2_10 = x15.d == x19 ? 1 : 0
            int32_t x0_14 = x2_10 & (x14_6 == x27_1 ? 1 : 0)
            
            if (x0_14 == 1)
                x2_10 = *(x12_1 - 0x20)
            
            int32_t x1_14 = (x17 == x19 ? 1 : 0) & (x16_4 == x27_1 ? 1 : 0)
            
            if (x1_14 != 0)
                x5 = *x12_1
            
            int32_t x3_5 = x2_10 != 0xc00 ? 1 : 0
            int32_t x4_4 = x5 == 0xc00 ? 1 : 0
            
            if (((x3_5 | (x0_14 ^ 1)) & 1) == 0)
                x3_5 = *(x12_1 - 0xc)
            
            if ((x4_4 & x1_14) != 0)
                x4_4 = *(x12_1 + 0x14)
            
            int32_t x17_1 = x1_14 & (x5 != 0xc00 ? 1 : 0)
            x5 = x14_6 == x27_1 ? 1 : 0
            x15 = (zx.q(x5) & zx.q(x15.d != x19 ? 1 : 0))
                | (zx.q(x0_14) & zx.q(x2_10 != 0xc00 ? 1 : 0))
            x17 = ((x16_4 == x27_1 ? 1 : 0) & (x17 != x19 ? 1 : 0)) | x17_1
            int32_t x14_4
            
            if ((x15.d | (x14_6 != x27_1 ? 1 : 0)) != 0)
                x14_4 = 0
            else
                x14_4 = x3_5
            
            x10_1 += x14_4
            int32_t x14_5
            
            if ((x17 | (x16_4 != x27_1 ? 1 : 0)) != 0)
                x14_5 = 0
            else
                x14_5 = x4_4
            
            i_1 = i_10
            i_10 -= 2
            x11_1 += x14_5
            x12_1 += 0x40
        while (i_1 != 2)
        fp = x11_1 + x10_1
        
        if (i_15 != x8_14)
            goto label_be9dc0
    else
        i_15 = 0
        fp = 0
    label_be9dc0:
        void* x10_4 = arg1 + (i_15 << 5) + 0x15f68
        int64_t i_8 = x8_14 - i_15
        int64_t i_2
        
        do
            if (*(x10_4 + 8) == x27_1 && *(x10_4 + 4) == x19 && *x10_4 == 0xc00)
                fp += *(x10_4 + 0x14)
            
            i_2 = i_8
            i_8 -= 1
            x10_4 += 0x20
        while (i_2 != 1)

int32_t x22_1 = GetCoffers(arg1, zx.q(x19)) + *(arg1 + muls.dp.d(x19, 0x5a30) + 0x18194)

if (x28_2 == neg.d(i_14) && (fp == 0 || x22_1 == 0))
    return 1

int32_t x10_2

if (zx.d(*arg6) != 0 || x28_2 == 0)
    x23 = 1
    x10_2 = 3
    *arg6 = true
else
    x10_2 = 2

int32_t x21_1

x21_1 = x28_2 == 0 ? 3 : 2

if (x28_2 == neg.d(i_14))
    InvalidateSubmittedActions()
    int32_t x5_2
    int32_t x15_2
    int32_t x17_2
    x5_2, x15_2, x17_2 = PayoffDebt(arg1, zx.q(x19), ChoosePayoffDebt(arg1, zx.q(x19), 6))
    *arg6 = true
    uint64_t x8_18 = zx.q(*(arg1 + 0x19ac))
    int32_t x10_5
    
    if (x8_18.d s< 1)
        x10_5 = 0
    else
        int64_t i_16
        
        if (x8_18.d u>= 3)
            i_16 = x8_18 & 0xfffffffe
            int32_t x10_7 = 0
            int32_t x11_2 = 0
            void* __offset(DomGame, 0x15f88) x12_2 = arg1 + 0x15f88
            int64_t i_11 = i_16
            int64_t i_3
            
            do
                int32_t x14_11 = *(x12_2 - 0x18)
                
                if (x14_11 == x27_1)
                    x15_2 = *(x12_2 - 0x1c)
                
                int32_t x16_7 = *(x12_2 + 8)
                
                if (x16_7 == x27_1)
                    x17_2 = *(x12_2 + 4)
                
                int32_t x2_17 = x15_2 == x19 ? 1 : 0
                int32_t x0_31 = x2_17 & (x14_11 == x27_1 ? 1 : 0)
                
                if (x0_31 == 1)
                    x2_17 = *(x12_2 - 0x20)
                
                int32_t x1_26 = (x17_2 == x19 ? 1 : 0) & (x16_7 == x27_1 ? 1 : 0)
                
                if (x1_26 != 0)
                    x5_2 = *x12_2
                
                int32_t x3_8 = x2_17 != 0xc00 ? 1 : 0
                int32_t x4_7 = x5_2 == 0xc00 ? 1 : 0
                
                if (((x3_8 | (x0_31 ^ 1)) & 1) == 0)
                    x3_8 = *(x12_2 - 0xc)
                
                if ((x4_7 & x1_26) != 0)
                    x4_7 = *(x12_2 + 0x14)
                
                int32_t x17_3 = x1_26 & (x5_2 != 0xc00 ? 1 : 0)
                x5_2 = x14_11 == x27_1 ? 1 : 0
                x15_2 = (x5_2 & (x15_2 != x19 ? 1 : 0)) | (x0_31 & (x2_17 != 0xc00 ? 1 : 0))
                x17_2 = ((x16_7 == x27_1 ? 1 : 0) & (x17_2 != x19 ? 1 : 0)) | x17_3
                int32_t x14_9
                
                if ((x15_2 | (x14_11 != x27_1 ? 1 : 0)) != 0)
                    x14_9 = 0
                else
                    x14_9 = x3_8
                
                x10_7 += x14_9
                int32_t x14_10
                
                if ((x17_2 | (x16_7 != x27_1 ? 1 : 0)) != 0)
                    x14_10 = 0
                else
                    x14_10 = x4_7
                
                i_3 = i_11
                i_11 -= 2
                x11_2 += x14_10
                x12_2 += 0x40
            while (i_3 != 2)
            x10_5 = x11_2 + x10_7
            
            if (i_16 != x8_18)
                goto label_bea1d8
        else
            i_16 = 0
            x10_5 = 0
        label_bea1d8:
            void* x11_4 = arg1 + (i_16 << 5) + 0x15f68
            int64_t i_9 = x8_18 - i_16
            int64_t i_4
            
            do
                if (*(x11_4 + 8) == x27_1 && *(x11_4 + 4) == x19 && *x11_4 == 0xc00)
                    x10_5 += *(x11_4 + 0x14)
                
                i_4 = i_9
                i_9 -= 1
                x11_4 += 0x20
            while (i_4 != 1)
    
    return zx.q(x10_5 s> 0 ? 1 : 0)

int32_t var_1cf8_1 = 0
operator+=(&var_2978, &var_ce8)

if (i_14 s>= 1)
    uint64_t i_12 = zx.q(i_14)
    void* x28_3 = &var_14f0
    uint64_t i_5
    
    do
        uint64_t x1_19 = zx.q(*x28_3)
        x28_3 += 8
        operator+=(&var_2978, x1_19)
        i_5 = i_12
        i_12 -= 1
    while (i_5 != 1)

int32_t var_2980_1 = 0

if (i_17 s>= 1)
    uint64_t i_13 = zx.q(i_17)
    int64_t (* x28_4)[0xca] = &var_1cf0
    uint64_t i_6
    
    do
        uint64_t x1_20 = zx.q(*x28_4)
        x28_4 = &(*x28_4)[1]
        operator+=(&var_3600, x1_20)
        i_6 = i_13
        i_13 -= 1
    while (i_6 != 1)

int32_t x24_2 = x24_1 != 0 ? 1 : 0
ComputeUIBuyCards(&var_3600, &var_ce8, &var_14f0, i_14, &var_1cf0, i_17)
bool v_1
bool z_1
bool n_1

if (x22_1 s> 0)
    v_1 = add_overflow(fp, 0)
    z_1 = fp == 0
    n_1 = fp s< 0
else
    n_1 = false
    z_1 = true
    v_1 = false

int32_t x22_2

if (not(z_1) && n_1 == v_1)
    x22_2 = x24_2 | 2
else
    x22_2 = x24_2

int64_t var_3608 = 0

if (x22 != 0)
    var_3608.d = 2
    var_3608:4.d = arg7

int128_t var_3640
__builtin_memset(&var_3640, 0, 0x20)
int128_t var_3620
__builtin_memset(&var_3620, 0, 0x18)
var_3640.d = x21_1
__builtin_memset(&var_3620, 0, 0x18)
var_3640:8.q = &var_3600
int128_t var_3630
var_3630:0xc.d = x22_2
int32_t x8_29
int32_t x23_1

if (var_1cf8_1 == 0)
label_be9f88:
    x23_1 = 0
label_be9f90:
    x8_29 = x23_1 == 0 ? 1 : 0
    
    if (x23_1 != 0 || zx.d(*arg6) != 0)
        goto label_bea27c
    
    *arg6 = true
    
    if (x22 == 0)
        int32_t x8_21 = *(arg1 + 0x150c)
        *(arg1 + 0x19f4) = 3
        
        if (x8_21 - 3 u>= 4)
            int64_t var_3688_1 = 0
            int32_t var_3690_1 = 0
            int32_t var_3698_2 = 0
            int32_t var_36a0_2 = 0
            DomNotifyEffect(zx.q(x8_21 == 2 ? 1 : 0), 0x29, zx.q(x19), 0, 3, 0, 0, 0)
    
    return zx.q(*(arg1 + 0x68) == 3 ? 1 : 0)

if (x23 == 0 && (AllSame(arg1, &var_2978, var_1cf8_1) & 1) != 0)
    goto label_be9f88

uint64_t x3_9

if (*(arg1 + 0x19d4) == x19)
    x3_9 = zx.q(*(arg1 + 0x19d8))
else
    x3_9 = zx.q(x19)

var_3688.d = x10_2
int32_t var_3678_1 = 0
int32_t var_3680_1 = 0
var_3690.q = &var_3640
int32_t var_3698_3 = 5
int32_t var_36a0_3 = 0
int32_t x0_33 =
    DomNotifyYield(arg1, &var_3608, zx.q(x19), x3_9, 1, &var_2978, zx.q(var_1cf8_1), zx.q(x23))
x23_1 = x0_33

if (x0_33 s<= 0xfffffffd)
    void* x0_35 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_27 = x0_35 + sx.q(*(x0_35 + 0x13000)) * 0x98
    *(*(x8_27 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_28 = *(x8_27 - 0x90)
    *(x8_28 + 0x1a2c) = *(x8_28 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8_29 = 0
label_bea27c:
    
    if (*(arg1 + 0x68) == 0x64)
        *arg6 = true
    
    int32_t x9_21 = *(arg1 + 0x24)
    
    if (x9_21 == 0xb)
        int32_t x23_2 = var_2978[0]
        uint64_t x21_2 = zx.q(x23_2.w)
        
        if (x21_2.d u>= 0x320)
            void* x0_39 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_32 = x0_39 + sx.q(*(x0_39 + 0x13000)) * 0x98
            *(*(x8_32 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_33 = *(x8_32 - 0x90)
            *(x8_33 + 0x1a2c) = *(x8_33 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int64_t x2_20
        
        if (*(arg1 + x21_2 * 0x68 + 0x1a70) == 0x614)
            x2_20 = 4
        else
            x2_20 = 2
        
        PlayAutoplayTreasures(arg1, zx.q(x19), x2_20)
        
        if (x22 == 0)
            *(arg1 + 0x19f4) = 3
            SpendBuy(arg1, zx.q(x19))
        
        if ((IsLandscape(arg1, zx.q(x23_2)) & 1) == 0)
            BuyCard(arg1, zx.q(x19), zx.q(x23_2), (x22 == 0 ? 1 : 0).b)
        else
            BuyLandscape(arg1, zx.q(x19), zx.q(x23_2), false, 0)
        
        *arg5 = x23_2
        *arg6 = true
        return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
    
    int32_t x23_3
    
    if (x9_21 == 0xa)
        x23_3 = var_2978[0]
        PlaySomeAutoplayTreasures(arg1, zx.q(x19), zx.q(x23_3))
        
        if (x22 != 0)
            goto label_bea3e0
        
    label_bea3d0:
        *(arg1 + 0x19f4) = 3
        SpendBuy(arg1, zx.q(x19))
    label_bea3e0:
        
        if ((IsLandscape(arg1, zx.q(x23_3)) & 1) == 0)
            BuyCard(arg1, zx.q(x19), zx.q(x23_3), (x22 == 0 ? 1 : 0).b)
        else
            BuyLandscape(arg1, zx.q(x19), zx.q(x23_3), false, 0)
        
        *arg5 = x23_3
        *arg6 = true
        return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
    
    if (x9_21 == 9)
        RemoveCoffers(arg1, zx.q(x19), x23_1, 0)
        AddResource(arg1, zx.q(x19), 0, x23_1, 0, 2)
        return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
    
    if (x23_1 s>= 2)
        int64_t i_7 = 0
        
        do
            uint64_t x8_40 = zx.q(var_68)
            
            if (x8_40.d s< 1)
            label_bea448:
                void* x0_51 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_38 = x0_51 + sx.q(*(x0_51 + 0x13000)) * 0x98
                *(*(x8_38 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_39 = *(x8_38 - 0x90)
                *(x8_39 + 0x1a2c) = *(x8_39 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            else
                int32_t x9_26 = var_2978[i_7]
                
                if (var_ce8 != x9_26)
                    int64_t x10_10 = 0
                    int32_t x12_3
                    
                    do
                        if (x8_40 - 1 == x10_10)
                            goto label_bea448
                        
                        x12_3 = *((&var_ce8 | 4) + (x10_10 << 2))
                        x10_10 += 1
                    while (x12_3 != x9_26)
                    
                    if (x10_10 u>= x8_40)
                        goto label_bea448
            
            i_7 += 1
        while (i_7 != zx.q(x23_1))
        
        PlayTreasures(arg1, zx.q(x19), &var_2978, x23_1, 0x80)
        CalcScores(arg1)
        return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
    
    if (x23_1 == 0xffffffff)
        PlayAutoplayTreasures(arg1, zx.q(x19), 0)
        return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
    
    if (x23_1 == 1)
        uint64_t x8_43 = zx.q(var_68)
        x23_3 = var_2978[0]
        int64_t x9_30
        
        if (x8_43.d s>= 1 && var_ce8 != x23_3)
            x9_30 = 0
            int32_t x12_4
            
            do
                if (x8_43 - 1 == x9_30)
                    goto label_bea630
                
                x12_4 = *((&var_ce8 | 4) + (x9_30 << 2))
                x9_30 += 1
            while (x12_4 != x23_3)
        
        if (x8_43.d s>= 1 && (var_ce8 == x23_3 || x9_30 u< x8_43))
            var_3640.d = x23_3
            PlayTreasures(arg1, zx.q(x19), &var_3640, 1, 0)
            return zx.q(x22 != 0 ? 1 : 0) & zx.q(*arg5 != 0 ? 1 : 0)
        
    label_bea630:
        
        if (x22 == 0)
            goto label_bea3d0
        
        goto label_bea3e0
    
    if ((x8_29 & 1) == 0)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_59
        int64_t x1_43
        x0_59, x1_43 = XNoReturn()
        return BuyPhase(x0_59, x1_43) __tailcall
else if ((x22_2 & 2) != 0 || x23_1 != 0xfffffffe)
    goto label_be9f90

return 1
