// 函数: _Z25PlaySomeAutoplayTreasuresR7DomGame9PlayerWho6CardID
// 地址: 0xbe8058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x19ac))
int32_t x19 = arg2
DomGame& x20 = arg1
int32_t x8

x8 = arg2 == 0xffffffff ? 6 : 0x3f1

int32_t x23

if (x9.d s< 1)
    x23 = 0
else
    int64_t i_4
    
    if (x9.d u>= 3)
        i_4 = x9 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = x20 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            int32_t entry_x16
            
            if (x15_5 == x8)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            
            if (x17_3 == x8)
                arg1 = zx.q(*(x13_1 + 4))
            
            int32_t x3_3 = entry_x16 == x19 ? 1 : 0
            int32_t x1_3 = x3_3 & (x15_5 == x8 ? 1 : 0)
            
            if (x1_3 == 1)
                x3_3 = *(x13_1 - 0x20)
            
            int32_t x2_3 = (arg1.d == x19 ? 1 : 0) & (x17_3 == x8 ? 1 : 0)
            int32_t entry_x6
            
            if (x2_3 != 0)
                entry_x6 = *x13_1
            
            int32_t x4_2 = x3_3 != 0xc00 ? 1 : 0
            int32_t x5_1 = entry_x6 == 0xc00 ? 1 : 0
            
            if (((x4_2 | (x1_3 ^ 1)) & 1) == 0)
                x4_2 = *(x13_1 - 0xc)
            
            if ((x5_1 & x2_3) != 0)
                x5_1 = *(x13_1 + 0x14)
            
            int32_t x0 = x2_3 & (entry_x6 != 0xc00 ? 1 : 0)
            entry_x6 = x15_5 == x8 ? 1 : 0
            entry_x16 = (entry_x6 & (entry_x16 != x19 ? 1 : 0)) | (x1_3 & (x3_3 != 0xc00 ? 1 : 0))
            arg1 = (zx.q(x17_3 == x8 ? 1 : 0) & zx.q(arg1.d != x19 ? 1 : 0)) | zx.q(x0)
            int32_t x15_3
            
            if ((entry_x16 | (x15_5 != x8 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x4_2
            
            x11_1 += x15_3
            int32_t x15_4
            
            if ((arg1.d | (x17_3 != x8 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x5_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x23 = x12_1 + x11_1
        
        if (i_4 != x9)
            goto label_be8388
    else
        i_4 = 0
        x23 = 0
    label_be8388:
        void* x11_3 = x20 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x9 - i_4
        int64_t i_1
        
        do
            if (*(x11_3 + 8) == x8 && *(x11_3 + 4) == x19 && *x11_3 == 0xc00)
                x23 += *(x11_3 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x11_3 += 0x20
        while (i_1 != 1)

int32_t x24 = *(x20 + muls.dp.d(x19, 0x5a30) + 0x18194)
int32_t x0_2 = GetCoffers(x20, zx.q(x19))
bool var_44 = false
CardIDs var_cd8
int32_t var_58 = GetTreasureCards(x20, zx.q(x19), &var_cd8, 1, &var_44)
int32_t x0_13

if (zx.d(var_44) == 0)
    x0_13 = 0
else
    uint32_t x21_1 = zx.d(arg3)
    
    if (x21_1 u>= 0x320)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_5 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_6 = *(x8_5 - 0x90)
        *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    void* x8_7 = x20 + mulu.dp.d(x21_1, 0x68)
    int32_t x0_8 = CardCost(x20, zx.q(x19), zx.q(*(x8_7 + 0x1a70)), 0)
    int32_t x8_10 = (x0_8 & 0xff) - x24 + x23
    
    if (x21_1 u>= 0x320)
        void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_14 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
        *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_15 = *(x8_14 - 0x90)
        *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    ComputeBuyMinTreasures(x20, zx.q(x19), &var_cd8, 
        (zx.q(x0_8) & 0xff050000) | (zx.q(x8_10) & zx.q(not.d(x8_10 s>> 0x1f))), 
        (*(x8_7 + 0x1a70) == 0x614 ? 1 : 0).b, x0_2)
    CardID var_1960
    int32_t var_ce0
    x0_13 = PlayTreasures(x20, zx.q(x19), &var_1960, var_ce0, 0xc0)

return zx.q(x0_13) & 1
