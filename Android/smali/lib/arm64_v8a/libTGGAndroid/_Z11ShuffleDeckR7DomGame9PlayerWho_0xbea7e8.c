// 函数: _Z11ShuffleDeckR7DomGame9PlayerWho
// 地址: 0xbea7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74) != 0 && *(arg1 + 0x150c) - 3 u>= 4
        && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_1
    
    if (*(arg1 + 0x19d4) == x19)
        x2_1 = zx.q(*(arg1 + 0x19d8))
    else
        x2_1 = zx.q(x19)
    
    int32_t var_70_1 = 0
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    DomAddLogEvent(arg1, zx.q(x19), x2_1, 4, 0, nullptr, 0, 0)

int64_t result = ShufflePileToPlacing(arg1, 0x3eb, zx.q(x19))

if (x19 != 0xffffffff)
    result = MovePileTo(arg1, zx.q(x19), 0x44e, zx.q(x19), 0x3eb)

int32_t fp_1

for (int32_t i = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74); i != 0; 
        i = *(arg1 + zx.q(fp_1) * 0x68 + 0x1ac8))
    fp_1 = i & 0xffff
    
    if (fp_1 u>= 0x320)
        void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_9 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
        *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_10 = *(x8_9 - 0x90)
        *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        result = XTrace("game thread resume (error)")
    
    void* x8_11 = arg1 + mulu.dp.d(fp_1, 0x68)
    int32_t x9_4 = *(x8_11 + 0x1a94)
    *(x8_11 + 0x1a74) = 0x3eb
    
    if (x9_4 != x19)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_14 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_15 = *(x8_14 - 0x90)
        *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        result = XTrace("game thread resume (error)")
    
    int32_t x8_16 = *(arg1 + 0x150c)
    
    if (x8_16 - 3 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_2 = 0
        int32_t var_78_2 = 0
        int32_t var_80_2 = 0
        result = DomNotifyEffect(zx.q(x8_16 == 2 ? 1 : 0), 9, zx.q(x19), zx.q(i), 0x3eb, 
            0xffffffff, 0, 0xf)

return result
