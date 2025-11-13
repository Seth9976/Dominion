// 函数: _Z8PlayCardR7DomGame9PlayerWhoR7CardRefRKS2_S5_13PlayCardFlags
// 地址: 0xbe655c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26 = *arg3
int32_t x23 = arg2
int32_t x24 = arg6
int32_t var_cd0
int32_t x0 = CardsWhere(arg1, 0xffffffff, 5, &var_cd0)

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
    
    x0 = var_cd0

uint64_t x25 = zx.q(*arg3)
int32_t x24_1

if (x26 == x0)
    x24_1 = x24 | 0x100
else
    x24_1 = x24

if (x25.d u>= 0x320)
    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_8 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_12

if (*(arg1 + x25 * 0x68 + 0x1a74) == 0x3ea)
    void* x8_14 = arg1 + muls.dp.d(x23, 0x5a30)
    *(x8_14 + 0x181d0) += 1
    x8_12 = *(arg1 + 0x150c)
    
    if (x8_12 - 3 u>= 4)
    label_be672c:
        int64_t var_ce8_2 = 0
        int32_t var_cf0_2 = 0
        int32_t var_cf8_2 = 0
        int32_t var_d00_2 = 0
        DomNotifyEffect(zx.q(x8_12 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(*arg3), 2, 1, zx.q(*arg5), 
            0)
        
        if ((x24_1 & 6) != 0)
            goto label_be6694
        
        goto label_be6760
else
    x8_12 = *(arg1 + 0x150c)
    
    if (x8_12 - 3 u>= 4)
        goto label_be672c
int32_t x8_13
bool cond:1
bool cond:2

if ((x24_1 & 6) == 0)
label_be6760:
    int64_t x3_3
    
    if (*(arg1 + 0x19d4) != x23)
        x3_3 = 3
    else
        x3_3 = 2
    
    int32_t var_ce0_1 = 0
    int64_t var_ce8_3 = 0
    int32_t var_cf0_3 = 0
    int32_t var_cf8_3 = 0
    int32_t var_d00_3 = 0
    MoveCardToSafe(arg1, zx.q(x23), zx.q(*arg3), x3_3, 0x3e9, 0, 0, 0)
    *(arg3 + 4) = *(arg1 + x25 * 0x68 + 0x1a78)
    x8_13 = *(arg1 + 0x150c)
    cond:1 = x8_13 - 3 u< 4
    cond:2 = x8_13 - 3 u< 4
    
    if ((x24_1 & 8) == 0)
        goto label_be66a4
    
    goto label_be67ac

label_be6694:
x8_13 = *(arg1 + 0x150c)
cond:1 = x8_13 - 3 u< 4
cond:2 = x8_13 - 3 u< 4

if ((x24_1 & 8) != 0)
label_be67ac:
    
    if (not(cond:2))
        int64_t var_ce8_4 = 0
        int32_t var_cf0_4 = 0
        int32_t var_cf8_4 = 0
        int32_t var_d00_4 = 0
        DomNotifyEffect(zx.q(x8_13 == 2 ? 1 : 0), 0x17, 0xffffffff, zx.q(*arg3), 0, 1, 0, 0)
else
label_be66a4:
    
    if (not(cond:1))
        int64_t var_ce8_1 = 0
        int32_t var_cf0_1 = 0
        int32_t var_cf8_1 = 0
        int32_t var_d00_1 = 0
        DomNotifyEffect(zx.q(x8_13 == 2 ? 1 : 0), 0x17, 0xffffffff, zx.q(*arg3), 0, 1, 1, 0)

int32_t x0_9 = PlayInternal(arg1, zx.q(x23), arg3, arg4, arg5, zx.q(x24_1))
int32_t x8_18 = *(arg1 + 0x150c)

if (x8_18 - 3 u>= 4)
    int64_t var_ce8_5 = 0
    int32_t var_cf0_5 = 0
    int32_t var_cf8_5 = 0
    int32_t var_d00_5 = 0
    DomNotifyEffect(zx.q(x8_18 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(*arg3), 2, 0, 0, 0)

if ((x24_1 & 0x80) == 0)
    CalcScores(arg1)

return zx.q(x0_9) & 1
