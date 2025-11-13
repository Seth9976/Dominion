// 函数: _Z11ReturnTokenR7DomGame9PlayerWho12DomTokenType
// 地址: 0xbb8400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0x19ac)

if (x10 s>= 0x100)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x10 = *(arg1 + 0x19ac)

int64_t x8_5

if (x10 s>= 1)
    x8_5 = 0
    void* __offset(DomGame, 0x15f6c) x9_3 = arg1 + 0x15f6c
    
    while (*(x9_3 - 4) != arg3 || *x9_3 != arg2)
        x8_5 -= 1
        x9_3 += 0x20
        
        if (0 - zx.q(x10) == x8_5)
            goto label_bb84cc

int32_t x20_1

if (x10 s>= 1 && x8_5.d != 1)
    x20_1 = (neg.q(x8_5)).d
else
label_bb84cc:
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    x20_1 = -1
    void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (*(arg1 + (sx.q(x20_1) << 5) + 0x15f7c) != 1)
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_15 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_16 = *(x8_15 - 0x90)
    *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

return ModifyToken(arg1, zx.q(x20_1), 0xffffffff, 0, 0) __tailcall
