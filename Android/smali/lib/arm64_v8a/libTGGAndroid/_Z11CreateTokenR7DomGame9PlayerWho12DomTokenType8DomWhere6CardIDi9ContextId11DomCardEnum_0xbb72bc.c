// 函数: _Z11CreateTokenR7DomGame9PlayerWho12DomTokenType8DomWhere6CardIDi9ContextId11DomCardEnum
// 地址: 0xbb72bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19ac)
int64_t x22 = arg7
int32_t x20 = arg5
int32_t x21 = arg3
int32_t x23

x23 = arg4 == 0x476 ? 0x3f1 : arg4

int32_t x24 = arg2

if (x8 s>= 0x100)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8 = *(arg1 + 0x19ac)

if (x8 s>= 1)
    int64_t x9_3 = 0
    uint64_t x8_5 = zx.q(x8)
    void* __offset(DomGame, 0x15f74) x10_1 = arg1 + 0x15f74
    
    do
        if (*(x10_1 - 0xc) == x21 && *(x10_1 - 8) == x24 && *(x10_1 - 4) == x23 && *x10_1 == 0
                && *(x10_1 + 0xc) == 0)
            if (x9_3.d != 0xffffffff)
                void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_9 = *(x8_8 - 0x90)
                *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x8_5 = zx.q(*(arg1 + 0x19ac))
            
            break
        
        x9_3 += 1
        x10_1 += 0x20
    while (x8_5 != x9_3)
    
    if (x8_5.d s>= 0x100)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_12 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_13 = *(x8_12 - 0x90)
        *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")

uint64_t x26 = zx.q(*(arg1 + 0x19ac))

if (x23 != 0x474 || x26.d s< 1)
label_bb74e0:
    *(arg1 + 0x19ac) = x26.d + 1
else
    int64_t x8_14 = 0
    void* __offset(DomGame, 0x15f68) x9_8 = arg1 + 0x15f68
    
    while (*x9_8 != x21 || *(x9_8 + 4) != x24 || *(x9_8 + 8) != 0x474 || *(x9_8 + 0x14) != 0)
        x8_14 += 1
        x9_8 += 0x20
        
        if (x26 == x8_14)
            goto label_bb74e0
    
    x26 = zx.q(x8_14.d)

*(arg1 + (sx.q(x26.d) << 5) + 0x15f68) = x21
*(arg1 + (sx.q(x26.d) << 5) + 0x15f6c) = x24
*(arg1 + (sx.q(x26.d) << 5) + 0x15f70) = x23
*(arg1 + (sx.q(x26.d) << 5) + 0x15f74) = x20
*(arg1 + (sx.q(x26.d) << 5) + 0x15f78) = 0
*(arg1 + (sx.q(x26.d) << 5) + 0x15f7c) = arg6
*(arg1 + (sx.q(x26.d) << 5) + 0x15f80) = x22
int32_t x8_20 = *(arg1 + 0x150c)

if (x8_20 - 3 u>= 4)
    int64_t var_58_1 = x22
    int32_t var_60_1 = 0
    int32_t var_68_1 = 0
    int32_t var_70_1 = 0
    DomNotifyEffect(zx.q(x8_20 == 2 ? 1 : 0), 0x12, zx.q(x24), zx.q(x26.d), zx.q(x21), zx.q(x23), 
        zx.q(x20), zx.q(arg6))

return zx.q(x26.d)
