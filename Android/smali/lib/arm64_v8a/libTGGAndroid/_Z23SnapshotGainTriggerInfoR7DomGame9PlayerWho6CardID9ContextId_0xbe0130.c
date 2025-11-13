// 函数: _Z23SnapshotGainTriggerInfoR7DomGame9PlayerWho6CardID9ContextId
// 地址: 0xbe0130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x24 = zx.d(arg3)
int32_t x26 = arg2
int32_t* entry_x8
*entry_x8 = 0

if (x24 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_2 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_2 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_3 = *(x8_2 - 0x90)
    *(x8_3 + 0x1a2c) = *(x8_3 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x19 = arg1 + mulu.dp.d(x24, 0x68)
uint64_t x23 = zx.q(x24)
uint64_t x0_3
int32_t x6
int32_t x16
x0_3, x6, x16 = CardTypeQuery(arg1, zx.q(*(x19 + 0x1a70)), false, -1)
*(entry_x8 + 0x38) = x0_3

if (x24 u>= 0x320)
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_6 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_7 = *(x8_6 - 0x90)
    *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    x0_3, x6, x16 = XTrace("game thread resume (error)")

int32_t x8_9 = *(arg1 + x23 * 0x68 + 0x1a74)
uint64_t x9_5 = zx.q(*(arg1 + 0x19ac))
int32_t x8_10

x8_10 = x8_9 == 0x476 ? 6 : x8_9

int32_t x11

if (x9_5.d s< 1)
    x11 = 0
else
    int64_t i_5
    
    if (x9_5.d u>= 3)
        i_5 = x9_5 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
        int64_t i_4 = i_5
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            
            if (x15_5 == x8_10)
                x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            
            if (x17_3 == x8_10)
                x0_3 = zx.q(*(x13_1 + 4))
            
            int32_t x3_2 = x16 == 0xffffffff ? 1 : 0
            int32_t x1_4 = x3_2 & (x15_5 == x8_10 ? 1 : 0)
            
            if (x1_4 == 1)
                x3_2 = *(x13_1 - 0x20)
            
            int32_t x2_3 = (x0_3.d == 0xffffffff ? 1 : 0) & (x17_3 == x8_10 ? 1 : 0)
            
            if (x2_3 != 0)
                x6 = *x13_1
            
            int32_t x4_2 = x3_2 != 0xc00 ? 1 : 0
            int32_t x5_1 = x6 == 0xc00 ? 1 : 0
            
            if (((x4_2 | (x1_4 ^ 1)) & 1) == 0)
                x4_2 = *(x13_1 - 0xc)
            
            if ((x5_1 & x2_3) != 0)
                x5_1 = *(x13_1 + 0x14)
            
            int32_t x0_6 = x2_3 & (x6 != 0xc00 ? 1 : 0)
            x6 = x15_5 == x8_10 ? 1 : 0
            x16 = (x6 & (x16 != 0xffffffff ? 1 : 0)) | (x1_4 & (x3_2 != 0xc00 ? 1 : 0))
            x0_3 = (zx.q(x17_3 == x8_10 ? 1 : 0) & zx.q(x0_3.d != 0xffffffff ? 1 : 0)) | zx.q(x0_6)
            int32_t x15_3
            
            if ((x16 | (x15_5 != x8_10 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x4_2
            
            x11_1 += x15_3
            int32_t x15_4
            
            if ((x0_3.d | (x17_3 != x8_10 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x5_1
            
            i = i_4
            i_4 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x11 = x12_1 + x11_1
        
        if (i_5 != x9_5)
            goto label_be0628
    else
        i_5 = 0
        x11 = 0
    label_be0628:
        void* x12_3 = arg1 + (i_5 << 5) + 0x15f68
        int64_t i_3 = x9_5 - i_5
        int64_t i_1
        
        do
            if (*(x12_3 + 8) == x8_10 && *(x12_3 + 4) == 0xffffffff && *x12_3 == 0xc00)
                x11 += *(x12_3 + 0x14)
            
            i_1 = i_3
            i_3 -= 1
            x12_3 += 0x20
        while (i_1 != 1)

entry_x8[0xb] = x11

if (x24 u>= 0x320)
    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_13 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_14 = *(x8_13 - 0x90)
    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t result
int128_t v0
result, v0 = CardCost(arg1, zx.q(x26), zx.q(*(x19 + 0x1a70)), 0)
void* x8_15 = arg1 + x23 * 0x68
*(x8_15 + 0x1a84) = result.d
*(x8_15 + 0x1a88) = 0
int32_t var_ce8
int32_t x8_38

if (*(arg1 + 0xd40) s< 1)
    x8_38 = 0
else
    int64_t i_2 = 0
    
    do
        *(&var_ce8 + i_2) = 0
        CardID var_ce0
        int32_t j_3
        j_3, v0 = CardsWhere(arg1, zx.q(i_2.d), 0x462, &var_ce0)
        
        if (j_3 s>= 1)
            uint64_t j_2 = zx.q(j_3)
            int32_t fp_1 = 0
            CardID* x24_1 = &var_ce0
            
            if (i_2 == zx.q(x26))
                uint64_t j
                
                do
                    uint64_t x19_2 = zx.q(*x24_1)
                    
                    if (x19_2.d u>= 0x320)
                        void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_31 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
                        *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_32 = *(x8_31 - 0x90)
                        *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(arg1 + x19_2 * 0x68 + 0x1a70) == *(x19 + 0x1a70))
                        if ((zx.d(*(arg1 + x19_2 * 0x68 + 0x1a90)) & 0x20) != 0)
                            fp_1 += 1
                            *(&var_ce8 + i_2) = fp_1.b
                        
                        *(x8_15 + 0x1a88) += 1
                    
                    j = j_2
                    j_2 -= 1
                    x24_1 += 4
                while (j != 1)
            else
                uint64_t j_1
                
                do
                    uint64_t x19_1 = zx.q(*x24_1)
                    
                    if (x19_1.d u>= 0x320)
                        void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_21 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                        *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_22 = *(x8_21 - 0x90)
                        *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(arg1 + x19_1 * 0x68 + 0x1a70) == *(x19 + 0x1a70)
                            && (zx.d(*(arg1 + x19_1 * 0x68 + 0x1a90)) & 0x20) != 0)
                        fp_1 += 1
                        *(&var_ce8 + i_2) = fp_1.b
                    
                    j_1 = j_2
                    j_2 -= 1
                    x24_1 += 4
                while (j_1 != 1)
        
        i_2 += 1
    while (i_2 s< sx.q(*(arg1 + 0xd40)))
    
    result = zx.q(*(x8_15 + 0x1a84))
    x8_38 = sx.d(*(x8_15 + 0x1a88))

int32_t x9_15 = *(arg1 + 0x19f4)
int32_t x10_6 = var_ce8
entry_x8[0xc] = x26
entry_x8[2] = x9_15
entry_x8[3] = result.d
int16_t var_ce4
entry_x8[6].w = var_ce4
entry_x8[4] = x8_38
entry_x8[5] = x10_6
v0 = *(arg1 + muls.dp.d(x26, 0x5a30) + 0x181a4)
*(entry_x8 + 0x40) = arg4
*(entry_x8 + 0x1c) = v0
return result
