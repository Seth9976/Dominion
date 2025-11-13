// 函数: _Z19SortCardsByCostName11DomCardEnumS_
// 地址: 0xbbf55c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_4 = (arg1 + 0x180000) s% 0x3e5
int32_t* x8_1 = *(&data_1838a20 + (sx.q(x9_4) << 3))
int64_t x27 = sx.q(x9_4)
int32_t i_1 = arg2
int32_t i = arg1
int64_t x24 = x27 << 3
int64_t var_70
int32_t var_64
DomCardDef* x20_1

if (x8_1 != 0)
    while (*x8_1 != i || x8_1[1] != 0x18)
        x8_1 = *(x8_1 + 0x10)
        
        if (x8_1 == 0)
            goto label_bbf5c8
    
    x20_1 = *(x8_1 + 8)
else
label_bbf5c8:
    int64_t x0_1 = DomCardExp(zx.q(i), &var_64)
    
    if (DomExpGet(x0_1, &var_70) != 0)
        int64_t x8_2 = var_70
        int32_t x11_1 = var_64
        
        while (true)
            int64_t x11_2 = sx.q(x11_1)
            
            if (*(x8_2 + muls.dp.d(x11_1, 0x780) + 4) s<= 0x18
                    && *(x8_2 + x11_2 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_6 = *(x8_2 + x11_2 * 0x780 + 0xc)
            
            if (x12_6 == 0)
                *(x8_2 + x11_2 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_1 = x12_6 + neg.d(x0_1.d << 8)
            var_64 = x11_1
    
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_4 = *(&data_1838a20 + x24)
    *x0_3 = i
    x0_3[1] = 0x18
    *(&data_1838a20 + x24) = x0_3
    *(x0_3 + 0x10) = x8_4
    int64_t x0_5 = DomCardExp(zx.q(i), &var_64)
    int64_t x23_1 = sx.q(var_64)
    
    if (DomExpGet(x0_5, &var_70) == 0)
        x20_1 = *EXP_BASE_DEFS
    else
        int64_t x8_5 = var_70
        int32_t x11_3 = var_64
        
        while (true)
            int64_t x11_4 = sx.q(x11_3)
            
            if (*(x8_5 + muls.dp.d(x11_3, 0x780) + 4) s<= 0x18
                    && *(x8_5 + x11_4 * 0x780 + 8) s> 0x17)
                x20_1 = x8_5 + x11_4 * 0x780
                break
            
            int32_t x12_12 = *(x8_5 + x11_4 * 0x780 + 0xc)
            
            if (x12_12 == 0)
                *(x8_5 + x11_4 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                x20_1 = var_70 + x23_1 * 0x780
                break
            
            x11_3 = x12_12 + neg.d(x0_5.d << 8)
            var_64 = x11_3
    
    *(x0_3 + 8) = x20_1

int32_t x9_13 = (i_1 + 0x180000) s% 0x3e5
int32_t* x8_9 = *(&data_1838a20 + (sx.q(x9_13) << 3))
int64_t x28 = sx.q(x9_13)
int64_t x26 = x28 << 3
int32_t* x8_11
DomCardDef* x22_3

if (x8_9 == 0)
label_bbf788:
    int64_t x0_8 = DomCardExp(zx.q(i_1), &var_64)
    
    if (DomExpGet(x0_8, &var_70) != 0)
        int64_t x8_10 = var_70
        int32_t x11_5 = var_64
        
        while (true)
            int64_t x11_6 = sx.q(x11_5)
            
            if (*(x8_10 + muls.dp.d(x11_5, 0x780) + 4) s<= 0x18
                    && *(x8_10 + x11_6 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_18 = *(x8_10 + x11_6 * 0x780 + 0xc)
            
            if (x12_18 == 0)
                *(x8_10 + x11_6 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_5 = x12_18 + neg.d(x0_8.d << 8)
            var_64 = x11_5
    
    int32_t* x0_10 = malloc(0x18)
    int64_t x8_13 = *(&data_1838a20 + x26)
    *x0_10 = i_1
    x0_10[1] = 0x18
    *(&data_1838a20 + x26) = x0_10
    *(x0_10 + 0x10) = x8_13
    int64_t x0_12 = DomCardExp(zx.q(i_1), &var_64)
    int64_t fp_1 = sx.q(var_64)
    
    if (DomExpGet(x0_12, &var_70) == 0)
        x22_3 = *EXP_BASE_DEFS
        *(x0_10 + 8) = x22_3
        x8_11 = *(&data_1838a20 + (x27 << 3))
        
        if (x8_11 != 0)
            goto label_bbf9b4
        
        goto label_bbf938
    
    int64_t x8_14 = var_70
    int32_t x11_7 = var_64
    int64_t x11_8
    
    while (true)
        x11_8 = sx.q(x11_7)
        
        if (*(x8_14 + muls.dp.d(x11_7, 0x780) + 4) s<= 0x18 && *(x8_14 + x11_8 * 0x780 + 8) s> 0x17)
            x22_3 = x8_14 + x11_8 * 0x780
            *(x0_10 + 8) = x22_3
            x8_11 = *(&data_1838a20 + (x27 << 3))
            
            if (x8_11 != 0)
                goto label_bbf9b4
            
            goto label_bbf938
        
        int32_t x12_24 = *(x8_14 + x11_8 * 0x780 + 0xc)
        
        if (x12_24 == 0)
            break
        
        x11_7 = x12_24 + neg.d(x0_12.d << 8)
        var_64 = x11_7
    
    *(x8_14 + x11_8 * 0x780 + 0xc0)
    XTrace("can't find card %d cardcur %d version %d")
    x22_3 = var_70 + fp_1 * 0x780
    *(x0_10 + 8) = x22_3
    x8_11 = *(&data_1838a20 + (x27 << 3))
    
    if (x8_11 != 0)
        goto label_bbf9b4
    
    goto label_bbf938

while (*x8_9 != i_1 || x8_9[1] != 0x18)
    x8_9 = *(x8_9 + 0x10)
    
    if (x8_9 == 0)
        goto label_bbf788

x22_3 = *(x8_9 + 8)
x8_11 = *(&data_1838a20 + (x27 << 3))
int32_t* x8_19
int32_t x24_1
int32_t x27_1

if (x8_11 == 0)
label_bbf938:
    int64_t x0_15 = DomCardExp(zx.q(i), &var_64)
    
    if (DomExpGet(x0_15, &var_70) != 0)
        int64_t x8_17 = var_70
        int32_t x11_9 = var_64
        
        while (true)
            int64_t x11_10 = sx.q(x11_9)
            
            if (*(x8_17 + muls.dp.d(x11_9, 0x780) + 4) s<= 0x18
                    && *(x8_17 + x11_10 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_30 = *(x8_17 + x11_10 * 0x780 + 0xc)
            
            if (x12_30 == 0)
                *(x8_17 + x11_10 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_9 = x12_30 + neg.d(x0_15.d << 8)
            var_64 = x11_9
    
    int32_t* x0_17 = malloc(0x18)
    int64_t x8_21 = *(&data_1838a20 + x24)
    *x0_17 = i
    x0_17[1] = 0x18
    *(&data_1838a20 + x24) = x0_17
    *(x0_17 + 0x10) = x8_21
    int64_t x0_19 = DomCardExp(zx.q(i), &var_64)
    int64_t x27_2 = sx.q(var_64)
    void* x8_25
    
    if (DomExpGet(x0_19, &var_70) == 0)
        x8_25 = *EXP_BASE_DEFS
    else
        int64_t x8_22 = var_70
        int32_t x11_11 = var_64
        
        while (true)
            int64_t x11_12 = sx.q(x11_11)
            
            if (*(x8_22 + muls.dp.d(x11_11, 0x780) + 4) s<= 0x18
                    && *(x8_22 + x11_12 * 0x780 + 8) s> 0x17)
                x8_25 = x8_22 + x11_12 * 0x780
                break
            
            int32_t x12_36 = *(x8_22 + x11_12 * 0x780 + 0xc)
            
            if (x12_36 == 0)
                *(x8_22 + x11_12 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                x8_25 = var_70 + x27_2 * 0x780
                break
            
            x11_11 = x12_36 + neg.d(x0_19.d << 8)
            var_64 = x11_11
    
    *(x0_17 + 8) = x8_25
    x24_1 = *(x8_25 + 0xc4)
    x8_19 = *(&data_1838a20 + (x28 << 3))
    x27_1 = x24_1 & 0xff
    
    if (x8_19 != 0)
        goto label_bbfb5c
    
    goto label_bbfae0

label_bbf9b4:

while (*x8_11 != i || x8_11[1] != 0x18)
    x8_11 = *(x8_11 + 0x10)
    
    if (x8_11 == 0)
        goto label_bbf938

x24_1 = *(*(x8_11 + 8) + 0xc4)
x8_19 = *(&data_1838a20 + (x28 << 3))
x27_1 = x24_1 & 0xff
int32_t x8_28
bool cond:0

if (x8_19 != 0)
label_bbfb5c:
    
    while (*x8_19 != i_1 || x8_19[1] != 0x18)
        x8_19 = *(x8_19 + 0x10)
        
        if (x8_19 == 0)
            goto label_bbfae0
    
    x8_28 = *(*(x8_19 + 8) + 0xc4)
    int32_t x9_25 = x8_28 & 0xff
    cond:0 = x27_1 u<= x9_25
    
    if (x27_1 u< x9_25)
        return 1
else
label_bbfae0:
    int64_t x0_22 = DomCardExp(zx.q(i_1), &var_64)
    
    if (DomExpGet(x0_22, &var_70) != 0)
        int64_t x8_26 = var_70
        int32_t x11_13 = var_64
        
        while (true)
            int64_t x11_14 = sx.q(x11_13)
            
            if (*(x8_26 + muls.dp.d(x11_13, 0x780) + 4) s<= 0x18
                    && *(x8_26 + x11_14 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_42 = *(x8_26 + x11_14 * 0x780 + 0xc)
            
            if (x12_42 == 0)
                *(x8_26 + x11_14 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_13 = x12_42 + neg.d(x0_22.d << 8)
            var_64 = x11_13
    
    int32_t* x0_24 = malloc(0x18)
    int64_t x8_30 = *(&data_1838a20 + x26)
    *x0_24 = i_1
    x0_24[1] = 0x18
    *(&data_1838a20 + x26) = x0_24
    *(x0_24 + 0x10) = x8_30
    int64_t x0_26 = DomCardExp(zx.q(i_1), &var_64)
    int64_t x25_1 = sx.q(var_64)
    void* x8_34
    
    if (DomExpGet(x0_26, &var_70) == 0)
        x8_34 = *EXP_BASE_DEFS
    else
        int64_t x8_31 = var_70
        int32_t x11_15 = var_64
        
        while (true)
            int64_t x11_16 = sx.q(x11_15)
            
            if (*(x8_31 + muls.dp.d(x11_15, 0x780) + 4) s<= 0x18
                    && *(x8_31 + x11_16 * 0x780 + 8) s> 0x17)
                x8_34 = x8_31 + x11_16 * 0x780
                break
            
            int32_t x12_48 = *(x8_31 + x11_16 * 0x780 + 0xc)
            
            if (x12_48 == 0)
                *(x8_31 + x11_16 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                x8_34 = var_70 + x25_1 * 0x780
                break
            
            x11_15 = x12_48 + neg.d(x0_26.d << 8)
            var_64 = x11_15
    
    *(x0_24 + 8) = x8_34
    x8_28 = *(x8_34 + 0xc4)
    int32_t x9_27 = x8_28 & 0xff
    cond:0 = x27_1 u<= x9_27
    
    if (x27_1 u< x9_27)
        return 1

if (not(cond:0))
    return 0

int32_t x10_1 = x24_1 u>> 0x10 & 1
int32_t x12_49 = x8_28 u>> 0x10 & 1

if (x10_1 u< x12_49)
    return 1

int32_t x11_17 = x24_1 s>> 0x18
int32_t x13_1 = x8_28 s>> 0x18
int32_t x9_28 = x24_1 & 0x1a0000
int32_t x8_35 = x8_28 & 0x1a0000

if (x10_1 u<= x12_49 && (x11_17 s< x13_1 || (x9_28 == 0 && x11_17 s<= x13_1 && x8_35 != 0)))
    return 1

if (x10_1 u< x12_49 ||
        (x10_1 u<= x12_49 && (x11_17 s< x13_1 || (x11_17 s<= x13_1 && (x9_28 == 0 || x8_35 != 0)))))
    return zx.q(strcmp(DomDefNameSort(x20_1, 0, nullptr), DomDefNameSort(x22_3, 0, nullptr))
        u>> 0x1f)

return 0
