// 函数: _Z15CardsSupplyTopsR7DomGame9PlayerWhoP6CardID13SupplyTopFlag
// 地址: 0xbc7ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AbilityIDs var_468
int64_t x1 = CollectAllOngoing(arg1, arg2, &var_468, 0)
int32_t x21_1

if ((arg4 & 4) != 0)
    x21_1 = 0
    int64_t i_1 = -0x1a0
    int64_t i
    
    do
        void* fp_1 = arg1 + i_1
        int32_t x8_28 = *(fp_1 + 0x1744)
        
        if (x8_28 != 0)
            uint64_t x25_1 = zx.q(x8_28.w)
            
            if (x25_1.d u>= 0x320)
                void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_31 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
                *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_32 = *(x8_31 - 0x90)
                *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                x1 = XTrace("game thread resume (error)")
            
            int32_t x25_2 = *(arg1 + x25_1 * 0x68 + 0x1a70)
            int32_t var_68
            
            if ((var_68 & 0x80000000) != 0)
                void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_36 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                *(*(x8_36 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_37 = *(x8_36 - 0x90)
                *(x8_37 + 0x1a2c) = *(x8_37 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                x1 = XTrace("game thread resume (error)")
            
            int32_t x0_6
            x0_6, x1 = CountOngoing(arg1, x1, &var_468, 0x26, x25_2, 0)
            
            if (x0_6 s< 1 || *(arg1 + 0x19ec) s/ *(arg1 + 0xd40) s>= 5)
                *(arg3 + (sx.q(x21_1) << 2)) = *(fp_1 + 0x1744)
                x21_1 += 1
        
        i = i_1
        i_1 += 0x10
    while (i != -0x10)
else
    int32_t x8_1 = *(arg1 + 0x15a4)
    int32_t x8_2
    
    if (x8_1 == 0)
        x21_1 = 0
        x8_2 = *(arg1 + 0x15b4)
        
        if (x8_2 != 0)
            *(arg3 + (zx.q(x21_1) << 2)) = x8_2
            x21_1 += 1
    else
        x21_1 = 1
        *arg3 = x8_1
        x8_2 = *(arg1 + 0x15b4)
        
        if (x8_2 != 0)
            *(arg3 + (zx.q(x21_1) << 2)) = x8_2
            x21_1 += 1
    int32_t x8_3 = *(arg1 + 0x15c4)
    
    if (x8_3 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_3
        x21_1 += 1
    
    int32_t x8_4 = *(arg1 + 0x15d4)
    
    if (x8_4 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_4
        x21_1 += 1
    
    int32_t x8_5 = *(arg1 + 0x15e4)
    
    if (x8_5 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_5
        x21_1 += 1
    
    int32_t x8_6 = *(arg1 + 0x15f4)
    
    if (x8_6 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_6
        x21_1 += 1
    
    int32_t x8_7 = *(arg1 + 0x1604)
    
    if (x8_7 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_7
        x21_1 += 1
    
    int32_t x8_8 = *(arg1 + 0x1614)
    
    if (x8_8 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_8
        x21_1 += 1
    
    int32_t x8_9 = *(arg1 + 0x1624)
    
    if (x8_9 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_9
        x21_1 += 1
    
    int32_t x8_10 = *(arg1 + 0x1634)
    
    if (x8_10 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_10
        x21_1 += 1
    
    int32_t x8_11 = *(arg1 + 0x1644)
    
    if (x8_11 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_11
        x21_1 += 1
    
    int32_t x8_12 = *(arg1 + 0x1654)
    
    if (x8_12 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_12
        x21_1 += 1
    
    int32_t x8_13 = *(arg1 + 0x1664)
    
    if (x8_13 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_13
        x21_1 += 1
    
    int32_t x8_14 = *(arg1 + 0x1674)
    
    if (x8_14 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_14
        x21_1 += 1
    
    int32_t x8_15 = *(arg1 + 0x1684)
    
    if (x8_15 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_15
        x21_1 += 1
    
    int32_t x8_16 = *(arg1 + 0x1694)
    
    if (x8_16 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_16
        x21_1 += 1
    
    int32_t x8_17 = *(arg1 + 0x16a4)
    
    if (x8_17 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_17
        x21_1 += 1
    
    int32_t x8_18 = *(arg1 + 0x16b4)
    
    if (x8_18 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_18
        x21_1 += 1
    
    int32_t x8_19 = *(arg1 + 0x16c4)
    
    if (x8_19 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_19
        x21_1 += 1
    
    int32_t x8_20 = *(arg1 + 0x16d4)
    
    if (x8_20 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_20
        x21_1 += 1
    
    int32_t x8_21 = *(arg1 + 0x16e4)
    
    if (x8_21 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_21
        x21_1 += 1
    
    int32_t x8_22 = *(arg1 + 0x16f4)
    
    if (x8_22 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_22
        x21_1 += 1
    
    int32_t x8_23 = *(arg1 + 0x1704)
    
    if (x8_23 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_23
        x21_1 += 1
    
    int32_t x8_24 = *(arg1 + 0x1714)
    
    if (x8_24 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_24
        x21_1 += 1
    
    int32_t x8_25 = *(arg1 + 0x1724)
    
    if (x8_25 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_25
        x21_1 += 1
    
    int32_t x8_26 = *(arg1 + 0x1734)
    
    if (x8_26 != 0)
        *(arg3 + (zx.q(x21_1) << 2)) = x8_26
        x21_1 += 1

return zx.q(x21_1)
