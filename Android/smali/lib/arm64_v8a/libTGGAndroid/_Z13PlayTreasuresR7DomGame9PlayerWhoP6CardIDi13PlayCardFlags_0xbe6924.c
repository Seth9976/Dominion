// 函数: _Z13PlayTreasuresR7DomGame9PlayerWhoP6CardIDi13PlayCardFlags
// 地址: 0xbe6924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_ce0[0x320]
uint64_t i_2

if (arg4 s>= 1)
    i_2 = zx.q(arg4)
    int32_t (* x19_1)[0x320] = &var_ce0
    CardID* x20_1 = arg3
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        uint64_t x24_1 = zx.q(*x20_1)
        
        if (x24_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i = i_1
        i_1 -= 1
        x20_1 += 4
        *x19_1 = *(arg1 + x24_1 * 0x68 + 0x1a74)
        x19_1 = &(*x19_1)[1]
    while (i != 1)

int32_t x26

if (arg4 s< 1 || arg4 s< 1)
    x26 = 0
else
    CardID* x27_1 = arg3
    int64_t x28_1 = 0
    x26 = 1
    
    do
        uint64_t x20_3 = zx.q(*(x27_1 + (x28_1 << 2)))
        
        if (x20_3.d u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_13 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_14 = *(x8_13 - 0x90)
            *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x20_3 * 0x68 + 0x1a74) == var_ce0[x28_1])
            int32_t x20_4 = *(x27_1 + (x28_1 << 2))
            uint64_t x27_2 = zx.q(x20_4.w)
            
            if (x27_2.d u>= 0x320)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_19 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_20 = *(x8_19 - 0x90)
                *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            uint64_t x20_2 = zx.q(x20_4) | zx.q(*(arg1 + x27_2 * 0x68 + 0x1a78)) << 0x20
            int64_t var_cf8 = 0
            int64_t var_cf0 = 0
            uint64_t var_ce8 = x20_2
            x27_1 = arg3
            
            if ((PlayCard(arg1, zx.q(arg2), &var_ce8, &var_cf0, &var_cf8, zx.q(arg5)) & 1) != 0)
                break
        
        x28_1 += 1
        x26 = x28_1 u< i_2 ? 1 : 0
    while (i_2 != x28_1)

return zx.q(x26) & 1
