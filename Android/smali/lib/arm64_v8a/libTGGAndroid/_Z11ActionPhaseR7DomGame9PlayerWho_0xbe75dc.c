// 函数: _Z11ActionPhaseR7DomGame9PlayerWho
// 地址: 0xbe75dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2.d
int32_t var_10f0
int32_t i_1 = GetHandActionCards(arg1, arg2, &var_10f0)
int64_t result = LimitPlayableCards(arg1, zx.q(x20), &var_10f0, &i_1)
int32_t i = i_1

if (i != 0)
    void* x8_1 = arg1 + muls.dp.d(x20, 0x5a30)
    int32_t fp_1
    
    fp_1 = x20 == 0xffffffff ? 6 : 0x3f1
    
    do
        int32_t x25_1 = *(x8_1 + 0x18198)
        int32_t x0_7
        int32_t x6_1
        int32_t x16_1
        x0_7, x6_1, x16_1 = CountOngoing(arg1, zx.q(x20), 0x32, 0, 0)
        int128_t var_470
        int32_t x8_4
        
        if (x0_7 s< 1)
            CollectOngoing(arg1, zx.q(x20), 0x34, 0)
            x0_7, x6_1, x16_1 = SumOngoingParam(arg1, &var_470)
            x8_4 = *(x8_1 + 0x1819c)
            
            if (x0_7 s< x8_4)
                CollectOngoing(arg1, zx.q(x20), 0x34, 0)
                x0_7, x6_1, x16_1 = SumOngoingParam(arg1, &var_470)
                x8_4 = x0_7
        else
            x8_4 = *(x8_1 + 0x1819c)
        
        uint64_t x9_1 = zx.q(*(arg1 + 0x19ac))
        int32_t x21_2
        
        if (x9_1.d s< 1)
            x21_2 = 0
        else
            int64_t j_4
            
            if (x9_1.d u>= 3)
                void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
                j_4 = x9_1 & 0xfffffffe
                int32_t x11_3 = 0
                int32_t x12_1 = 0
                int64_t j_3 = j_4
                int64_t j
                
                do
                    int32_t x15_5 = *(x13_1 - 0x18)
                    
                    if (x15_5 == fp_1)
                        x16_1 = *(x13_1 - 0x1c)
                    
                    int32_t x17_3 = *(x13_1 + 8)
                    
                    if (x17_3 == fp_1)
                        x0_7 = *(x13_1 + 4)
                    
                    int32_t x3_5 = x16_1 == x20 ? 1 : 0
                    int32_t x1_12 = x3_5 & (x15_5 == fp_1 ? 1 : 0)
                    
                    if (x1_12 == 1)
                        x3_5 = *(x13_1 - 0x20)
                    
                    int32_t x2_8 = (x0_7 == x20 ? 1 : 0) & (x17_3 == fp_1 ? 1 : 0)
                    
                    if (x2_8 != 0)
                        x6_1 = *x13_1
                    
                    int32_t x4_3 = x3_5 != 0xe00 ? 1 : 0
                    int32_t x5_1 = x6_1 == 0xe00 ? 1 : 0
                    
                    if (((x4_3 | (x1_12 ^ 1)) & 1) == 0)
                        x4_3 = *(x13_1 - 0xc)
                    
                    if ((x5_1 & x2_8) != 0)
                        x5_1 = *(x13_1 + 0x14)
                    
                    int32_t x0_12 = x2_8 & (x6_1 != 0xe00 ? 1 : 0)
                    x6_1 = x15_5 == fp_1 ? 1 : 0
                    x16_1 = (x6_1 & (x16_1 != x20 ? 1 : 0)) | (x1_12 & (x3_5 != 0xe00 ? 1 : 0))
                    x0_7 = ((x17_3 == fp_1 ? 1 : 0) & (x0_7 != x20 ? 1 : 0)) | x0_12
                    int32_t x15_3
                    
                    if ((x16_1 | (x15_5 != fp_1 ? 1 : 0)) != 0)
                        x15_3 = 0
                    else
                        x15_3 = x4_3
                    
                    x11_3 += x15_3
                    int32_t x15_4
                    
                    if ((x0_7 | (x17_3 != fp_1 ? 1 : 0)) != 0)
                        x15_4 = 0
                    else
                        x15_4 = x5_1
                    
                    j = j_3
                    j_3 -= 2
                    x12_1 += x15_4
                    x13_1 += 0x40
                while (j != 2)
                x21_2 = x12_1 + x11_3
                
                if (j_4 != x9_1)
                    goto label_be7a60
            else
                j_4 = 0
                x21_2 = 0
            label_be7a60:
                int64_t j_2 = x9_1 - j_4
                void* x11_5 = arg1 + 0x15f68 + (j_4 << 5)
                int64_t j_1
                
                do
                    if (*(x11_5 + 8) == fp_1 && *(x11_5 + 4) == x20 && *x11_5 == 0xe00)
                        x21_2 += *(x11_5 + 0x14)
                    
                    j_1 = j_2
                    j_2 -= 1
                    x11_5 += 0x20
                while (j_1 != 1)
        
        int32_t x25_2 = x8_4 + x25_1
        result = CountOngoing(arg1, zx.q(x20), 0x12, 0, 0)
        int32_t x8_5
        
        x8_5 = result.d s> 0 ? 0 : x21_2
        
        if (x8_5 + x25_2 s< 1)
            break
        
        int32_t* x8_7
        
        x8_7 = x25_2 == 0 ? &var_10f0 : nullptr
        
        int32_t i_2
        
        i_2 = x25_2 == 0 ? i : 0
        
        int64_t var_1100 = 0
        __builtin_memset(&var_470, 0, 0x38)
        var_470.d = 1
        int64_t var_454
        __builtin_memset(&var_454, 0, 0x14)
        var_470:8.q = x8_7
        int128_t var_460_1
        var_460_1:8.d = i_2
        AllSame(arg1, &var_10f0, i)
        uint64_t x3_6
        
        if (*(arg1 + 0x19d4) == x20)
            x3_6 = zx.q(*(arg1 + 0x19d8))
        else
            x3_6 = zx.q(x20)
        
        int32_t var_1128_1 = 0
        int32_t var_1130_1 = 0
        int32_t var_1138_1 = 1
        int128_t* var_1140_1 = &var_470
        int32_t var_1148_1 = 1
        int32_t var_1150_1 = 0
        result = DomNotifyYield(arg1, &var_1100, zx.q(x20), x3_6, 1, &var_10f0, zx.q(i), 1)
        
        if (result.d == 1)
            SpendAction(arg1, zx.q(x20))
            int32_t x21_3 = var_10f0
            uint64_t x24 = zx.q(x21_3.w)
            
            if (x24.d u>= 0x320)
                void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_15 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_16 = *(x8_15 - 0x90)
                *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            uint64_t x21_1 = zx.q(x21_3) | zx.q(*(arg1 + x24 * 0x68 + 0x1a78)) << 0x20
            int64_t var_1108 = 0
            var_1100 = 0
            var_470.q = x21_1
            PlayCard(arg1, zx.q(x20), &var_470, &var_1100, &var_1108, 0)
        else
            if (result.d == 0)
                if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                    uint64_t x2_11
                    
                    if (*(arg1 + 0x19d4) == x20)
                        x2_11 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_11 = zx.q(x20)
                    
                    var_1140_1.d = 0
                    int32_t var_1148_2 = 0
                    int32_t var_1150_2 = 0
                    result = DomAddLogEvent(arg1, zx.q(x20), x2_11, 0x1e, 0, nullptr, 0, 0)
                
                break
            
            void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_11 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
            *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_12 = *(x8_11 - 0x90)
            *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i_1 = GetHandActionCards(arg1, zx.q(x20), &var_10f0)
        result = LimitPlayableCards(arg1, zx.q(x20), &var_10f0, &i_1)
        i = i_1
    while (i != 0)

*(arg1 + 0x19f4) = 0
return result
