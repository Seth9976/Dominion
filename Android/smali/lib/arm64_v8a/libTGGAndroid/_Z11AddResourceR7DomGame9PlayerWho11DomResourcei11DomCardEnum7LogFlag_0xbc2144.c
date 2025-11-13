// 函数: _Z11AddResourceR7DomGame9PlayerWho11DomResourcei11DomCardEnum7LogFlag
// 地址: 0xbc2144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 

int32_t x23_1 = arg6
int32_t x20_1 = arg5
int32_t x24_1 = arg4
int32_t x19_1 = arg3
int32_t i = arg2
DomGame& x22_1 = arg1

if (arg3 == 1)
    if (x24_1 s< 1 || CountOngoing(x22_1, zx.q(i), 0x12, 0, 0).d s<= 0)
        goto label_bc22a8
else if (x19_1 != 0 || x24_1 s< 1)
label_bc22a8:
    void* x8_9 = x22_1 + muls.dp.d(i, 0x5a30) + (zx.q(x19_1) << 2)
    int32_t x10_2 = *(x8_9 + 0x18194)
    int32_t x24_2
    
    if (x10_2 + x24_1 s>= 0)
        x24_2 = x24_1
    else
        x24_2 = neg.d(x10_2)
    
    *(x8_9 + 0x18194) = x24_2 + x10_2
    int32_t x8_10
    
    if (x24_2 + x10_2 s>= 0)
        x8_10 = *(x22_1 + 0x150c)
        
        if (x8_10 - 3 u>= 4)
            goto label_bc236c
        
        goto label_bc22dc
    
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_13 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_14 = *(x8_13 - 0x90)
    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8_10 = *(x22_1 + 0x150c)
    
    if (x8_10 - 3 u< 4)
    label_bc22dc:
        
        if ((x23_1 & 2) == 0)
        label_bc238c:
            
            if (*(x22_1 + 0x150c) - 3 u>= 4 && zx.d(*(x22_1 + 0x1508)) == 0)
                uint64_t i_1
                
                if (*(x22_1 + 0x19d4) == i)
                    i_1 = zx.q(*(x22_1 + 0x19d8))
                else
                    i_1 = zx.q(i)
                
                int32_t var_50_2 = x23_1
                int32_t var_58_2 = x20_1
                int32_t var_60_2 = x24_2
                DomAddLogEvent(x22_1, zx.q(i), i_1, 0xa, zx.q(x20_1), nullptr, 0, zx.q(x19_1))
    else
    label_bc236c:
        int64_t var_48_1 = 0
        int32_t var_50_1 = 0
        int32_t var_58_1 = 0
        int32_t var_60_1 = 0
        DomNotifyEffect(zx.q(x8_10 == 2 ? 1 : 0), 0x10, zx.q(i), 0, zx.q(x19_1), zx.q(x24_2), 
            1 & zx.q(not.d(x23_1 u>> 6)), 0)
        
        if ((x23_1 & 2) == 0)
            goto label_bc238c
else
    int32_t x9_1 = *(x22_1 + 0x19ac)
    
    if (x9_1 s>= 0x100)
        void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x9_1 = *(x22_1 + 0x19ac)
    
    if (x9_1 s< 1)
        goto label_bc22a8
    
    int64_t x8_5 = 0
    void* __offset(DomGame, 0x15f6c) x11_1 = x22_1 + 0x15f6c
    int64_t x9_4 = 0
    
    while (*(x11_1 - 4) != 0xb09 || *x11_1 != i)
        x8_5 -= 1
        x9_4 += 0x100000000
        x11_1 += 0x20
        
        if (0 - zx.q(x9_1) == x8_5)
            goto label_bc22a8
    
    if (x8_5.d == 1 || *(x22_1 + (x9_4 s>> 0x1b) + 0x15f7c) == 0)
        goto label_bc22a8
    
    ReturnToken(x22_1, zx.q(i), 0xb09)
    int32_t temp1_1 = x24_1
    x24_1 -= 1
    
    if (temp1_1 != 1)
        goto label_bc22a8
