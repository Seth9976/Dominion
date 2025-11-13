// 函数: _Z9AddTokensR7DomGame9PlayerWho12DomTokenTypei8DomWhere6CardID9ContextId11DomCardEnumS1_7LogFlag
// 地址: 0xbb7760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 

int32_t x27_1 = arg10.d
int32_t x23_1 = arg9.d
int32_t x21_1 = arg8.d
int64_t x28_1 = arg7
int32_t x26_1 = arg6
int32_t x25_1 = arg5
int32_t x20_1 = arg3
int32_t fp_1 = arg2

if (arg5 == 0x476)
    if (fp_1 == 0xffffffff)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        arg8 = XTrace("game thread resume (error)")
    
    x25_1 = 0x3f1

if ((arg4 & 0x80000000) != 0)
    int32_t x10_3 = *(arg1 + 0x19ac)
    
    if (x10_3 s>= 0x100)
        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_18 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
        *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_19 = *(x8_18 - 0x90)
        *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x10_3 = *(arg1 + 0x19ac)
    
    int64_t x8_20
    
    if (x10_3 s>= 1)
        x8_20 = 0
        void* __offset(DomGame, 0x15f74) x9_9 = arg1 + 0x15f74
        
        while (*(x9_9 - 0xc) != x20_1 || *(x9_9 - 8) != fp_1 || *(x9_9 - 4) != x25_1
                || *x9_9 != x26_1 || *(x9_9 + 0xc) != x28_1)
            x8_20 -= 1
            x9_9 += 0x20
            
            if (0 - zx.q(x10_3) == x8_20)
                goto label_bb7a70
    
    int32_t x23_3
    
    if (x10_3 s>= 1 && x8_20.d != 1)
        x23_3 = (neg.q(x8_20)).d
    else
    label_bb7a70:
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        x23_3 = -1
        void* x8_23 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
        *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_24 = *(x8_23 - 0x90)
        *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    ModifyToken(arg1, zx.q(x23_3), arg4, zx.q(x21_1), zx.q(x27_1))
    goto label_bb7ad0

if (x20_1 == 0xc00 && x25_1 == 0x3f1 && *(arg1 + 0x19d4) == fp_1)
    fp_1 = *(arg1 + 0x19d8)

int32_t x10_1 = *(arg1 + 0x19ac)
int32_t x8_6

if ((x27_1 & 0x10) != 0)
    x8_6 = 0xd
else
    x8_6 = 0xc

int32_t x24_1

x24_1 = x23_1 == 0xffffffff ? 0xd : x8_6

int32_t x23_2

x23_2 = x23_1 == 0xffffffff ? fp_1 : x23_1

if (x10_1 s>= 0x100)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_10 = *(x8_9 - 0x90)
    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    arg8 = XTrace("game thread resume (error)")
    x10_1 = *(arg1 + 0x19ac)

int64_t x8_11

if (x10_1 s>= 1)
    x8_11 = 0
    void* __offset(DomGame, 0x15f74) x9_5 = arg1 + 0x15f74
    
    while (*(x9_5 - 0xc) != x20_1 || *(x9_5 - 8) != fp_1 || *(x9_5 - 4) != x25_1 || *x9_5 != x26_1
            || *(x9_5 + 0xc) != x28_1)
        x8_11 -= 1
        x9_5 += 0x20
        
        if (0 - zx.q(x10_1) == x8_11)
            goto label_bb793c

if (x10_1 s>= 1 && x8_11.d != 1)
    ModifyToken(arg1, neg.q(x8_11), arg4, zx.q(x21_1), 0)
    
    if (x20_1 == 0xe01 || x25_1 == 0x3f1)
        goto label_bb7ad0
    
    goto label_bb7b1c

label_bb793c:
CreateToken(arg1, zx.q(fp_1), zx.q(x20_1), zx.q(x25_1), zx.q(x26_1), arg4, x28_1, arg8)
DomGame& x0_5
uint64_t x1_1
uint64_t x2_1
uint64_t x3_1

if (x25_1 == 0x3f1)
    if ((x27_1 & 2) != 0 || *(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
        goto label_bb7ad0
    
    int32_t var_70_1 = 0
    int32_t var_78_1 = 0
    
    if (*(arg1 + 0x19d4) == x23_2)
        x2_1 = zx.q(*(arg1 + 0x19d8))
    else
        x2_1 = zx.q(x23_2)
    
    x3_1 = 0xb
    int32_t var_80_1 = arg4
    x0_5 = arg1
    x1_1 = zx.q(x23_2)
    goto label_bb7ca0

if (x20_1 == 0xe01 || ((x20_1 == 0xc00 ? 1 : 0) & (arg4 == 1 ? 1 : 0) & 1) != 0)
    return 

label_bb7b1c:
int32_t x8_36
int32_t x9_16
int32_t x10_6

if (x25_1 != 6 && x25_1 != 0x474)
    if (x23_2 == 0xffffffff)
        goto label_bb7ad0
    
    if (x25_1 s>= 0x48)
        void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_39 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
        *(*(x8_39 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_40 = *(x8_39 - 0x90)
        *(x8_40 + 0x1a2c) = *(x8_40 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
        goto label_bb7ad0
    
    x9_16 = *(arg1 + 0x19d4)
    x10_6 = *(arg1 + 0x19d8)
    x8_36 = *(arg1 + (sx.q(x25_1) << 4) + 0x152c)
    goto label_bb7c74

int32_t x25_2 = x26_1 & 0xffff

if (x25_2 u>= 0x320)
    void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_30 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
    *(*(x8_30 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_31 = *(x8_30 - 0x90)
    *(x8_31 + 0x1a2c) = *(x8_31 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (x23_2 == 0xffffffff || *(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    goto label_bb7ad0

x9_16 = *(arg1 + 0x19d4)
x10_6 = *(arg1 + 0x19d8)
x8_36 = *(arg1 + mulu.dp.d(x25_2, 0x68) + 0x1a70)
label_bb7c74:

if (x9_16 == x23_2)
    x2_1 = zx.q(x10_6)
else
    x2_1 = zx.q(x23_2)

x0_5 = arg1
x1_1 = zx.q(x23_2)
x3_1 = zx.q(x24_1)
int32_t var_70_2 = 0
int32_t var_78_2 = x8_36
int32_t var_80_2 = arg4
label_bb7ca0:
DomAddLogEvent(x0_5, x1_1, x2_1, x3_1, zx.q(x21_1), nullptr, 0, zx.q(x20_1))
label_bb7ad0:

if (x20_1 == 0x601)
    return CalcScores(arg1) __tailcall
