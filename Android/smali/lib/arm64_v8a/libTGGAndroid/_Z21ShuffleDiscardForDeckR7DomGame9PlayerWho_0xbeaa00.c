// 函数: _Z21ShuffleDiscardForDeckR7DomGame9PlayerWho
// 地址: 0xbeaa00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f78) == 0)
    return 

int32_t x19_1 = arg2

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_1
    
    if (*(arg1 + 0x19d4) == x19_1)
        x2_1 = zx.q(*(arg1 + 0x19d8))
    else
        x2_1 = zx.q(x19_1)
    
    int32_t var_70_1 = 0
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    DomAddLogEvent(arg1, zx.q(x19_1), x2_1, 4, 0, nullptr, 0, 0)

void* x21_2 = arg1 + sx.q(x19_1) * 0x5a30
*(x21_2 + 0x18204) += 1
ShufflePileToPlacing(arg1, 0x3ec, zx.q(x19_1))
int32_t i = *(x21_2 + 0x17f74)
int32_t i_1 = *(x21_2 + 0x18100)

if (i != 0)
    void* x9_5
    
    do
        int32_t x26_1 = i & 0xffff
        
        if (x26_1 u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_9 = *(x8_8 - 0x90)
            *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x9_5 = arg1 + mulu.dp.d(x26_1, 0x68)
        i = *(x9_5 + 0x1ac8)
    while (i != 0)
    
    *(x9_5 + 0x1ac8) = *(x21_2 + 0x18100)
    *(x21_2 + 0x18100) = 0
    
    if (i_1 != 0)
        goto label_beabcc
    
    return 

*(x21_2 + 0x17f74) = i_1
*(x21_2 + 0x18100) = 0

if (i_1 == 0)
    return 

label_beabcc:

do
    int32_t fp_1 = i_1 & 0xffff
    
    if (fp_1 u>= 0x320)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_15 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_16 = *(x8_15 - 0x90)
        *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    void* x8_17 = arg1 + mulu.dp.d(fp_1, 0x68)
    int32_t x9_11 = *(x8_17 + 0x1a94)
    *(x8_17 + 0x1a74) = 0x3eb
    
    if (x9_11 != x19_1)
        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_20 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
        *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_21 = *(x8_20 - 0x90)
        *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x8_22 = *(arg1 + 0x150c)
    
    if (x8_22 - 3 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_2 = 0
        int32_t var_78_2 = 0
        int32_t var_80_2 = 0
        DomNotifyEffect(zx.q(x8_22 == 2 ? 1 : 0), 9, zx.q(x19_1), zx.q(i_1), 0x3eb, 0xffffffff, 0, 
            0xf)
    
    i_1 = *(arg1 + zx.q(fp_1) * 0x68 + 0x1ac8)
while (i_1 != 0)
