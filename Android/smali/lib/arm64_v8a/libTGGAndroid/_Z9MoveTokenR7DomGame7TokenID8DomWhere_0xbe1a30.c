// 函数: _Z9MoveTokenR7DomGame7TokenID8DomWhere
// 地址: 0xbe1a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
int32_t x20 = arg3
int64_t x24 = sx.q(x21)

if (arg2 == 0xffffffff)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x26 = *(arg1 + (x24 << 5) + 0x15f6c)
int32_t x8_6 = *(arg1 + 0x19ac)
int32_t x27 = *(arg1 + (x24 << 5) + 0x15f68)

if (x8_6 s>= 0x100)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_10 = *(x8_9 - 0x90)
    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8_6 = *(arg1 + 0x19ac)

int64_t x25_1

if (x8_6 s< 1)
label_be1b94:
    x25_1 = 0xffffffff
else
    x25_1 = 0
    void* __offset(DomGame, 0x15f74) x9_5 = arg1 + 0x15f74
    
    while (*(x9_5 - 0xc) != x27 || *(x9_5 - 8) != x26 || *(x9_5 - 4) != x20 || *x9_5 != 0
            || *(x9_5 + 0xc) != 0)
        x25_1 += 1
        x9_5 += 0x20
        
        if (zx.q(x8_6) == x25_1)
            goto label_be1b94

if (x20 == 0x476)
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_14 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_15 = *(x8_14 - 0x90)
    *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x8_16

if (x25_1.d == 0xffffffff)
    x8_16 = arg1 + (x24 << 5)

if (x25_1.d != 0xffffffff || *(x8_16 + 0x15f7c) != 1)
    int32_t var_68_2 = 0
    int32_t var_70_2 = 0xffffffff
    AddTokens(arg1, zx.q(*(arg1 + (x24 << 5) + 0x15f6c)), zx.q(*(arg1 + (x24 << 5) + 0x15f68)), 
        0xffffffff, zx.q(*(arg1 + (x24 << 5) + 0x15f70)), 0, 0, 0)
    int32_t var_68_3 = 0
    int32_t var_70_3 = 0xffffffff
    AddTokens(arg1, zx.q(*(arg1 + (x24 << 5) + 0x15f6c)), zx.q(*(arg1 + (x24 << 5) + 0x15f68)), 1, 
        zx.q(x20), 0, 0, 0)
else
    *(x8_16 + 0x15f70) = x20
    int32_t x8_17 = *(arg1 + 0x150c)
    
    if (x8_17 - 3 u>= 4)
        int64_t var_58_1 = 0
        int32_t var_60_1 = 0
        int32_t var_68_1 = 0
        int32_t var_70_1 = 0
        DomNotifyEffect(zx.q(x8_17 == 2 ? 1 : 0), 0x13, zx.q(*(arg1 + (x24 << 5) + 0x15f6c)), 
            zx.q(x21), zx.q(x20), 0, 0, 0)

if (x20 == 1 || x20 == 6 || x20 == 0x3f1)
    return 

int32_t x21_1 = *(arg1 + (x24 << 5) + 0x15f68)

if (x21_1 == 0xe01)
    return 

int32_t x22_2 = *(arg1 + (x24 << 5) + 0x15f6c)

if (x20 s>= 0x48)
    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_21 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
    *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_22 = *(x8_21 - 0x90)
    *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    return 

uint64_t x2_3

if (*(arg1 + 0x19d4) == x22_2)
    x2_3 = zx.q(*(arg1 + 0x19d8))
else
    x2_3 = zx.q(x22_2)

int32_t var_68_4 = *(arg1 + (sx.q(x20) << 4) + 0x152c)
int32_t var_60_2 = 0
int32_t var_70_4 = 1
DomAddLogEvent(arg1, zx.q(x22_2), x2_3, 0xd, 0, nullptr, 0, zx.q(x21_1))
