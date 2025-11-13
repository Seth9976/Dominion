// 函数: _Z12SetScoreInfoR7DomGameR15PlayerScoreInfo9PlayerWho6CardIDi
// 地址: 0xc00d48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = arg4 & 0xffff
DomGame& x20 = arg1
int32_t x23_1
int32_t x24
void* x26_1
uint64_t fp_1

if (x27 u<= 0x31f)
    void* x8 = x20 + mulu.dp.d(x27, 0x68)
    x23_1 = *(x8 + 0x1a70)
    
    if (arg5 == 0)
        fp_1 = zx.q(x27)
        x26_1 = x8 + 0x1a70
        x24 = x23_1
        goto label_c00f5c
    
    x24 = x23_1
label_c00dfc:
    uint64_t i_4 = zx.q(*(arg2 + 0x5788))
    void* __offset(PlayerScoreInfo, 0x8) x23_2
    
    if (i_4.d s>= 1)
        x23_2 = nullptr
        void* __offset(PlayerScoreInfo, 0x8) x10_1 = arg2 + 8
        uint64_t i_2 = i_4
        uint64_t i
        
        do
            if (*x10_1 - 1 u<= 1 && *(x10_1 + 4) == x24)
                x23_2 = x10_1
            
            i = i_2
            i_2 -= 1
            x10_1 += 0x1c
        while (i != 1)
    
    if (i_4.d s< 1 || x23_2 == 0)
        *(arg2 + 0x5788) = i_4.d + 1
        x23_2 = arg2 + sx.q(i_4.d) * 0x1c + 8
        __builtin_memset(x23_2, 0, 0x1c)
        int32_t x8_7
        
        if ((IsLandscape(x20, zx.q(arg4)).d & 1) != 0)
            x8_7 = 2
        else
            x8_7 = 1
        
        *x23_2 = x8_7
        *(x23_2 + 4) = x24
        *(x23_2 + 0xc) = 0
    
    int32_t x8_9 = *(x23_2 + 0xc) + 1
    *(x23_2 + 8) += arg5
    *(x23_2 + 0xc) = x8_9
    *arg2 += arg5
    return 

void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
*(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
void* x8_4 = *(x8_3 - 0x90)
*(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
XTrace("game thread resume (error)")
void* x8_5 = x20 + mulu.dp.d(x27, 0x68)
x24 = *(x8_5 + 0x1a70)

if (arg5 != 0)
    goto label_c00dfc

x26_1 = x8_5 + 0x1a70
void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
void* x8_13 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
*(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
void* x8_14 = *(x8_13 - 0x90)
*(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
XTrace("game thread resume (error)")
fp_1 = zx.q(x27)
void* x8_16 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
*(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
void* x8_17 = *(x8_16 - 0x90)
*(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
XTrace("game thread resume (error)")
x23_1 = *x26_1
label_c00f5c:
int32_t x21_2 = *(x20 + 0xd50)
int32_t x8_22 = (x23_1 + (x21_2 << 0x10)) s% 0x3e5
int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_22) << 3))

if (x9_10 != 0)
    while (*x9_10 != x23_1 || x9_10[1] != x21_2)
        x9_10 = *(x9_10 + 0x10)
        
        if (x9_10 == 0)
            goto label_c00fa4
    
    if ((zx.d(*(*(x9_10 + 8) + 0xcb)) & 4) == 0)
        goto label_c01014
    
    return 

label_c00fa4:
DomDefGetSlow(zx.q(x23_1), zx.q(x21_2))
int32_t* x0_6 = malloc(0x18)
int64_t x8_23 = sx.q(x8_22) << 3
int64_t x9_11 = *(&data_1838a20 + x8_23)
*x0_6 = x23_1
x0_6[1] = x21_2
*(&data_1838a20 + x8_23) = x0_6
*(x0_6 + 0x10) = x9_11
arg1 = DomDefGetSlow(zx.q(x23_1), zx.q(x21_2))
*(x0_6 + 8) = arg1

if ((zx.d(*(arg1 + 0xcb)) & 4) != 0)
    return 

label_c01014:

if (x27 u>= 0x320)
    void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_28 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
    *(*(x8_28 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_29 = *(x8_28 - 0x90)
    *(x8_29 + 0x1a2c) = *(x8_29 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x21_3 = *x26_1
int32_t x22_2 = *(x20 + 0xd50)
int32_t x8_34 = (x21_3 + (x22_2 << 0x10)) s% 0x3e5
int32_t* x9_15 = *(&data_1838a20 + (sx.q(x8_34) << 3))

if (x9_15 != 0)
    while (*x9_15 != x21_3 || x9_15[1] != x22_2)
        x9_15 = *(x9_15 + 0x10)
        
        if (x9_15 == 0)
            goto label_c010ac
    
    if ((zx.d(*(*(x9_15 + 8) + 0xcb)) & 0x40) != 0)
        goto label_c010e8
    
    goto label_c011f0

label_c010ac:
DomDefGetSlow(zx.q(x21_3), zx.q(x22_2))
int32_t* x0_11 = malloc(0x18)
int64_t x8_35 = sx.q(x8_34) << 3
int64_t x9_16 = *(&data_1838a20 + x8_35)
*x0_11 = x21_3
x0_11[1] = x22_2
*(&data_1838a20 + x8_35) = x0_11
*(x0_11 + 0x10) = x9_16
arg1 = DomDefGetSlow(zx.q(x21_3), zx.q(x22_2))
*(x0_11 + 8) = arg1

if ((zx.d(*(arg1 + 0xcb)) & 0x40) == 0)
label_c011f0:
    
    if (*(x20 + fp_1 * 0x68 + 0x1a94) != 0xffffffff)
        uint64_t i_5 = zx.q(*(arg2 + 0x5788))
        void* __offset(PlayerScoreInfo, 0x8) x9_21
        
        if (i_5.d s>= 1)
            x9_21 = nullptr
            void* __offset(PlayerScoreInfo, 0x8) x11_2 = arg2 + 8
            uint64_t i_3 = i_5
            uint64_t i_1
            
            do
                if (*x11_2 == 3 && *(x11_2 + 4) == x24)
                    x9_21 = x11_2
                
                i_1 = i_3
                i_3 -= 1
                x11_2 += 0x1c
            while (i_1 != 1)
        
        if (i_5.d s< 1 || x9_21 == 0)
            *(arg2 + 0x5788) = i_5.d + 1
            x9_21 = arg2 + sx.q(i_5.d) * 0x1c + 8
            *x9_21 = 3
            *(x9_21 + 4) = x24
            *(x9_21 + 8) = 0
        
        *(x9_21 + 8) += 1
else
label_c010e8:
    
    if (x27 u> 0x31f)
        void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_41 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
        *(*(x8_41 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_42 = *(x8_41 - 0x90)
        *(x8_42 + 0x1a2c) = *(x8_42 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        
        if (*x26_1 == 0xd4d)
            goto label_c011f0
        
        void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_46 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
        *(*(x8_46 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_47 = *(x8_46 - 0x90)
        *(x8_47 + 0x1a2c) = *(x8_47 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        
        if (*x26_1 == 0xd4e)
            goto label_c011f0
    else
        int32_t x8_37 = *x26_1
        
        if (x8_37 == 0xd4d || x8_37 == 0xd4e)
            goto label_c011f0
