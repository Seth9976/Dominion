// 函数: _Z10RotatePileR7DomGame9PlayerWho8DomWhere
// 地址: 0xc019c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg1 + (zx.q(arg3) << 4) + 0x152c)
int32_t x19 = arg3
uint64_t x21 = zx.q(arg3)
int32_t x8_8

if (arg3 u> 0x48)
    x8_8 = *(arg1 + (sx.q(x19) << 2) + 0x11598)
    
    if (x8_8 == 0)
        return 
else
    if (arg3 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x8_8 = *(arg1 + (x21 << 4) + 0x1534)
    
    if (x8_8 == 0)
        return 

uint64_t x23 = zx.q(x8_8.w)

if (x23.d u>= 0x320)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_11 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_12 = *(x8_11 - 0x90)
    *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x23_1 = x8_8
int32_t x21_1 = *(arg1 + x23 * 0x68 + 0x1a70)
int32_t x22 = 0
int32_t x26 = x23_1

while (x26 != x23_1 || x22 == 0)
    int32_t x28_1 = x26 & 0xffff
    void* x24_1 = arg1 + mulu.dp.d(x28_1, 0x68)
    int32_t x27_1
    
    if (x28_1 u> 0x31f)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_17 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_18 = *(x8_17 - 0x90)
        *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        void* x8_20 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        x27_1 = *(x24_1 + 0x1ac8)
        x23_1 = x8_8
        *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_21 = *(x8_20 - 0x90)
        *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        
        if (*(arg1 + zx.q(x28_1) * 0x68 + 0x1a70) != x21_1)
            break
    else
        x27_1 = *(x24_1 + 0x1ac8)
        
        if (*(arg1 + zx.q(x28_1) * 0x68 + 0x1a70) != x21_1)
            break
    
    int32_t var_80_1 = 0
    int64_t var_88_1 = 0
    int32_t var_90_1 = 0
    int32_t var_98_1 = 0
    int32_t var_a0_1 = 0
    MoveCardToSafe(arg1, 0xffffffff, zx.q(x26), 0xb, zx.q(x19), 0, 0xffffffff, 0)
    x22 -= 1
    x26 = x27_1
    
    if (x27_1 == 0)
        break

void* x8_29
int64_t x9_11

if (x19 u> 0x48)
    x8_29 = arg1 + (sx.q(x19) << 2)
    x9_11 = 0x11598
else
    if (x19 == 0x48)
        void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_26 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
        *(*(x8_26 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_27 = *(x8_26 - 0x90)
        *(x8_27 + 0x1a2c) = *(x8_27 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x9_11 = 0x1534
    x8_29 = arg1 + (x21 << 4)

if ((*(x8_29 + x9_11) & 0xffe0) u>= 0x320)
    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_37 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
    *(*(x8_37 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_38 = *(x8_37 - 0x90)
    *(x8_38 + 0x1a2c) = *(x8_38 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x1 = zx.q(arg2)
    uint64_t x2_1
    
    if (*(arg1 + 0x19d4) == x1.d)
        x2_1 = zx.q(*(arg1 + 0x19d8))
    else
        x2_1 = zx.q(x1.d)
    
    int32_t var_90_2 = 0
    int32_t var_98_2 = 0
    int32_t var_a0_2 = 0
    DomAddLogEvent(arg1, x1, x2_1, 0x3b, 0, nullptr, 0, zx.q(x8_1))

return UpdateSplitPileInfo(arg1, zx.q(x19)) __tailcall
