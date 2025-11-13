// 函数: _Z12AfterTsunamiR7DomGame
// 地址: 0xbc86cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int32_t x1
int32_t x7
int32_t x17
result, x1, x7, x17 = ProphecyCard(arg1)

if (result.d == 0)
    return result

int32_t x20_1 = result.d & 0xffff
uint64_t x20_2

if (x20_1 u> 0x31f)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_6 = *(x8_5 - 0x90)
    *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    
    if (*(arg1 + mulu.dp.d(x20_1, 0x68) + 0x1a70) != 0x121c)
        return 0
    
    x20_2 = zx.q(x20_1)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_11 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_12 = *(x8_11 - 0x90)
    *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    x1, x7, x17 = XTrace("game thread resume (error)")
else
    if (*(arg1 + mulu.dp.d(x20_1, 0x68) + 0x1a70) != 0x121c)
        return 0
    
    x20_2 = zx.q(x20_1)

int32_t x8_14 = *(arg1 + x20_2 * 0x68 + 0x1a74)
uint64_t x9_5 = zx.q(*(arg1 + 0x19ac))
int32_t x8_15

x8_15 = x8_14 == 0x476 ? 6 : x8_14

int32_t x11

if (x9_5.d s< 1)
    x11 = 0
else
    int64_t i_4
    
    if (x9_5.d u>= 3)
        i_4 = x9_5 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x16_5 = *(x13_1 - 0x18)
            
            if (x16_5 == x8_15)
                x17 = *(x13_1 - 0x1c)
            
            int32_t x0_7 = *(x13_1 + 8)
            
            if (x0_7 == x8_15)
                x1 = *(x13_1 + 4)
            
            int32_t x4_3 = x17 == 0xffffffff ? 1 : 0
            int32_t x2_4 = x4_3 & (x16_5 == x8_15 ? 1 : 0)
            
            if (x2_4 == 1)
                x4_3 = *(x13_1 - 0x20)
            
            int32_t x3_4 = (x1 == 0xffffffff ? 1 : 0) & (x0_7 == x8_15 ? 1 : 0)
            
            if (x3_4 != 0)
                x7 = *x13_1
            
            int32_t x5_2 = x4_3 != 0x1200 ? 1 : 0
            int32_t x6_1 = x7 == 0x1200 ? 1 : 0
            
            if (((x5_2 | (x2_4 ^ 1)) & 1) == 0)
                x5_2 = *(x13_1 - 0xc)
            
            if ((x6_1 & x3_4) != 0)
                x6_1 = *(x13_1 + 0x14)
            
            int32_t x1_1 = x3_4 & (x7 != 0x1200 ? 1 : 0)
            x7 = x16_5 == x8_15 ? 1 : 0
            x17 = (x7 & (x17 != 0xffffffff ? 1 : 0)) | (x2_4 & (x4_3 != 0x1200 ? 1 : 0))
            x1 = ((x0_7 == x8_15 ? 1 : 0) & (x1 != 0xffffffff ? 1 : 0)) | x1_1
            int32_t x16_3
            
            if ((x17 | (x16_5 != x8_15 ? 1 : 0)) != 0)
                x16_3 = 0
            else
                x16_3 = x5_2
            
            x11_1 += x16_3
            int32_t x16_4
            
            if ((x1 | (x0_7 != x8_15 ? 1 : 0)) != 0)
                x16_4 = 0
            else
                x16_4 = x6_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x16_4
            x13_1 += 0x40
        while (i != 2)
        x11 = x12_1 + x11_1
        
        if (i_4 != x9_5)
            goto label_bc897c
    else
        i_4 = 0
        x11 = 0
    label_bc897c:
        int64_t i_2 = x9_5 - i_4
        void* x10_1 = arg1 + (i_4 << 5) + 0x15f68
        int64_t i_1
        
        do
            if (*(x10_1 + 8) == x8_15 && *(x10_1 + 4) == 0xffffffff && *x10_1 == 0x1200)
                x11 += *(x10_1 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x10_1 += 0x20
        while (i_1 != 1)

return zx.q(x11 == 0 ? 1 : 0)
