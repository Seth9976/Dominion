// 函数: _ZNK9SortCardsclE6CardIDS0_
// 地址: 0xc04be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *arg1
int32_t x24 = arg2 & 0xffff
int64_t* x19 = arg1
int64_t x20 = x23

if (x24 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x20 = *x19

int32_t x23_1 = *(x23 + mulu.dp.d(x24, 0x68) + 0x1a70)
int32_t entry_x2
int32_t x24_1 = entry_x2 & 0xffff

if (x24_1 u>= 0x320)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x20_1 = *(x20 + mulu.dp.d(x24_1, 0x68) + 0x1a70)

if (x23_1 == x20_1)
    return zx.q(arg2 s< entry_x2 ? 1 : 0)

int32_t x22_1 = *(*x19 + 0xd50)
int32_t x8_12 = x22_1 << 0x10
int32_t x9_9 = (x8_12 + x23_1) s% 0x3e5
int32_t* x10_1 = *(&data_1838a20 + (sx.q(x9_9) << 3))
DomCardDef* x21_2

if (x10_1 != 0)
    while (*x10_1 != x23_1 || x10_1[1] != x22_1)
        x10_1 = *(x10_1 + 0x10)
        
        if (x10_1 == 0)
            goto label_c04d40
    
    x21_2 = *(x10_1 + 8)
else
label_c04d40:
    DomDefGetSlow(zx.q(x23_1), zx.q(x22_1))
    int32_t* x0_6 = malloc(0x18)
    int64_t x8_13 = sx.q(x9_9) << 3
    int64_t x9_10 = *(&data_1838a20 + x8_13)
    *x0_6 = x23_1
    x0_6[1] = x22_1
    *(&data_1838a20 + x8_13) = x0_6
    *(x0_6 + 0x10) = x9_10
    DomCardDef* x0_8 = DomDefGetSlow(zx.q(x23_1), zx.q(x22_1))
    *(x0_6 + 8) = x0_8
    x21_2 = x0_8
    x22_1 = *(*x19 + 0xd50)
    x8_12 = x22_1 << 0x10

int32_t x9_12 = (x8_12 + x20_1) s% 0x3e5
int32_t* x10_6 = *(&data_1838a20 + (sx.q(x9_12) << 3))
DomCardDef* x24_4

if (x10_6 != 0)
    while (*x10_6 != x20_1 || x10_6[1] != x22_1)
        x10_6 = *(x10_6 + 0x10)
        
        if (x10_6 == 0)
            goto label_c04de8
    
    x24_4 = *(x10_6 + 8)
else
label_c04de8:
    DomDefGetSlow(zx.q(x20_1), zx.q(x22_1))
    int32_t* x0_10 = malloc(0x18)
    int64_t x8_15 = sx.q(x9_12) << 3
    int64_t x9_13 = *(&data_1838a20 + x8_15)
    *x0_10 = x20_1
    x0_10[1] = x22_1
    *(&data_1838a20 + x8_15) = x0_10
    *(x0_10 + 0x10) = x9_13
    DomCardDef* x0_12 = DomDefGetSlow(zx.q(x20_1), zx.q(x22_1))
    *(x0_10 + 8) = x0_12
    x24_4 = x0_12
    x22_1 = *(*x19 + 0xd50)
    x8_12 = x22_1 << 0x10

int32_t x9_15 = (x8_12 + x23_1) s% 0x3e5
int32_t* x10_11 = *(&data_1838a20 + (sx.q(x9_15) << 3))
void* x0_16

if (x10_11 != 0)
    while (*x10_11 != x23_1 || x10_11[1] != x22_1)
        x10_11 = *(x10_11 + 0x10)
        
        if (x10_11 == 0)
            goto label_c04e90
    
    x0_16 = *(x10_11 + 8)
else
label_c04e90:
    DomDefGetSlow(zx.q(x23_1), zx.q(x22_1))
    int32_t* x0_14 = malloc(0x18)
    int64_t x8_17 = sx.q(x9_15) << 3
    int64_t x9_16 = *(&data_1838a20 + x8_17)
    *x0_14 = x23_1
    x0_14[1] = x22_1
    *(&data_1838a20 + x8_17) = x0_14
    *(x0_14 + 0x10) = x9_16
    x0_16 = DomDefGetSlow(zx.q(x23_1), zx.q(x22_1))
    *(x0_14 + 8) = x0_16
    x22_1 = *(*x19 + 0xd50)
    x8_12 = x22_1 << 0x10

int32_t x23_2 = *(x0_16 + 0xc4)
int32_t x8_20 = (x8_12 + x20_1) s% 0x3e5
int32_t* x9_21 = *(&data_1838a20 + (sx.q(x8_20) << 3))
int32_t x25_3 = x23_2 & 0xff
int32_t x8_22
bool cond:1_1

if (x9_21 != 0)
    while (*x9_21 != x20_1 || x9_21[1] != x22_1)
        x9_21 = *(x9_21 + 0x10)
        
        if (x9_21 == 0)
            goto label_c04f3c
    
    x8_22 = *(*(x9_21 + 8) + 0xc4)
    int32_t x9_24 = x8_22 & 0xff
    cond:1_1 = x25_3 u<= x9_24
    
    if (x25_3 u< x9_24)
        return 1
else
label_c04f3c:
    DomDefGetSlow(zx.q(x20_1), zx.q(x22_1))
    int32_t* x0_18 = malloc(0x18)
    int64_t x8_21 = sx.q(x8_20) << 3
    int64_t x9_22 = *(&data_1838a20 + x8_21)
    *x0_18 = x20_1
    x0_18[1] = x22_1
    *(&data_1838a20 + x8_21) = x0_18
    *(x0_18 + 0x10) = x9_22
    void* x0_20 = DomDefGetSlow(zx.q(x20_1), zx.q(x22_1))
    *(x0_18 + 8) = x0_20
    x8_22 = *(x0_20 + 0xc4)
    int32_t x9_23 = x8_22 & 0xff
    cond:1_1 = x25_3 u<= x9_23
    
    if (x25_3 u< x9_23)
        return 1

if (not(cond:1_1))
    return 0

int32_t x10_15 = x23_2 u>> 0x10 & 1
int32_t x12_2 = x8_22 u>> 0x10 & 1

if (x10_15 u< x12_2)
    return 1

int32_t x11_10 = x23_2 s>> 0x18
int32_t x13_1 = x8_22 s>> 0x18
int32_t x9_25 = x23_2 & 0x1a0000
int32_t x8_23 = x8_22 & 0x1a0000

if (x10_15 u<= x12_2 && (x11_10 s< x13_1 || (x9_25 == 0 && x11_10 s<= x13_1 && x8_23 != 0)))
    return 1

if (x10_15 u< x12_2 ||
        (x10_15 u<= x12_2 && (x11_10 s< x13_1 || (x11_10 s<= x13_1 && (x9_25 == 0 || x8_23 != 0)))))
    return zx.q(strcmp(DomDefNameSort(x21_2, 0, nullptr), DomDefNameSort(x24_4, 0, nullptr))
        u>> 0x1f)

return 0
