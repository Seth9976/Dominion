// 函数: _Z13CardTypeQueryR7DomGame11DomCardEnumb11DomCardType
// 地址: 0xbbd750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x23 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int64_t x21 = arg4
int32_t x22 = arg2
void* x23_1

if (x9_1 != 0)
    while (*x9_1 != x22 || x9_1[1] != x23)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bbd7c0
    
    x23_1 = *(x9_1 + 8)
else
label_bbd7c0:
    DomDefGetSlow(zx.q(x22), zx.q(x23))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_5)
    *x0_1 = x22
    x0_1[1] = x23
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_2
    void* x0_3 = DomDefGetSlow(zx.q(x22), zx.q(x23))
    x23_1 = x0_3
    *(x0_1 + 8) = x0_3

int64_t result = *(x23_1 + 0xc8)
int32_t x0_5 = PileSource(arg1, zx.q(*(x23_1 + 0xc0)))
AbilityIDs var_458
int64_t x1_4 = CollectAllOngoing(arg1, zx.q(*(arg1 + 0x19d4)), &var_458, 0)
int32_t var_58

if ((x21 & 6) != 0)
    if (zx.d(*(arg1 + 0x19e0)) != 0)
        int32_t x24_2 = *(arg1 + 0x19d4)
        int32_t x0_8
        x0_8, x1_4 = CardIsAffectedByCapitalism(zx.q(*(x23_1 + 0xc0)))
        
        if ((x0_8 & 1) != 0)
            int32_t var_54
            x1_4 = ProjectIsOwned(arg1, zx.q(x24_2), 0xe28, &var_54)
            
            if (var_54 != 0)
                result |= 2
    
    if ((zx.d(*(x23_1 + 0xc8)) & 0x10) != 0)
        if ((var_58 & 0x80000000) != 0)
            void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_11 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
            *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_12 = *(x8_11 - 0x90)
            *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            x1_4 = XTrace("game thread resume (error)")
        
        int32_t x0_13
        x0_13, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x1d, 0, 0)
        
        if (x0_13 s> 0)
            result |= 2
    
    if ((var_58 & 0x80000000) != 0)
        void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_16 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
        *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_17 = *(x8_16 - 0x90)
        *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        x1_4 = XTrace("game thread resume (error)")
    
    int32_t x0_17
    x0_17, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x23, x0_5, 0)
    
    if (x0_17 s> 0)
        result |= 2

if ((x21 & 0x400000000004) != 0 && zx.d(*(arg1 + 0x19e0)) != 0 && *(x23_1 + 0xc0) == 0x101)
    int32_t x0_19
    x0_19, x1_4 = CountCardsWhere(arg1, zx.q(*(arg1 + 0x19d4)), 0x454)
    
    if (x0_19 != 0)
        result |= 0x400000000004

if ((x21.d & 0x80) != 0)
    if ((var_58 & 0x80000000) != 0)
        void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_25 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
        *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_26 = *(x8_25 - 0x90)
        *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        x1_4 = XTrace("game thread resume (error)")
    
    int32_t x0_23
    x0_23, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x21, x0_5, 0)
    
    if (x0_23 s> 0)
        result |= 0x80
    
    if ((x21.d & 8) == 0)
        goto label_bbd9d8
    
    goto label_bbda6c

if ((x21.d & 8) != 0)
label_bbda6c:
    
    if ((var_58 & 0x80000000) != 0)
        void* x0_25 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_31 = x0_25 + sx.q(*(x0_25 + 0x13000)) * 0x98
        *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_32 = *(x8_31 - 0x90)
        *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        x1_4 = XTrace("game thread resume (error)")
    
    int32_t x0_27
    x0_27, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x22, x0_5, 0)
    
    if (x0_27 s> 0)
        result |= 8
    
    if ((x21.d & 0x40) == 0)
        goto label_bbd9dc
    
    goto label_bbdaec

label_bbd9d8:

if ((x21.d & 0x40) != 0)
label_bbdaec:
    
    if ((var_58 & 0x80000000) != 0)
        void* x0_29 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_37 = x0_29 + sx.q(*(x0_29 + 0x13000)) * 0x98
        *(*(x8_37 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_38 = *(x8_37 - 0x90)
        *(x8_38 + 0x1a2c) = *(x8_38 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        x1_4 = XTrace("game thread resume (error)")
    
    int32_t x0_31
    x0_31, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x24, x0_5, 0)
    
    if (x0_31 s> 0)
        result |= 0x40
    
    if ((x21 & 0x1000) == 0)
        goto label_bbd9e0
    
    goto label_bbdb6c

label_bbd9dc:

if ((x21 & 0x1000) != 0)
label_bbdb6c:
    
    if ((var_58 & 0x80000000) != 0)
        void* x0_33 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_43 = x0_33 + sx.q(*(x0_33 + 0x13000)) * 0x98
        *(*(x8_43 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_44 = *(x8_43 - 0x90)
        *(x8_44 + 0x1a2c) = *(x8_44 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        x1_4 = XTrace("game thread resume (error)")
    
    int32_t x0_35
    x0_35, x1_4 = CountOngoing(arg1, x1_4, &var_458, 0x25, x0_5, 0)
    
    if (x0_35 s> 0)
        result |= 0x100000000000
    
    if ((x21.d & 4) != 0)
        goto label_bbdbe8
else
label_bbd9e0:
    
    if ((x21.d & 4) != 0)
    label_bbdbe8:
        
        if ((result.d & 2) != 0)
            if ((var_58 & 0x80000000) != 0)
                void* x0_37 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_49 = x0_37 + sx.q(*(x0_37 + 0x13000)) * 0x98
                *(*(x8_49 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_50 = *(x8_49 - 0x90)
                *(x8_50 + 0x1a2c) = *(x8_50 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                x1_4 = XTrace("game thread resume (error)")
            
            if (CountOngoing(arg1, x1_4, &var_458, 0x35, 0, 0) s> 0)
                result |= 4

if ((arg3.d & 1) != 0)
    return result

return result & 0x7fffffffffff
