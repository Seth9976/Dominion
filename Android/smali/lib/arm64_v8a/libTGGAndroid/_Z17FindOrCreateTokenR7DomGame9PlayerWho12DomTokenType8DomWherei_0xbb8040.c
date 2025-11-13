// 函数: _Z17FindOrCreateTokenR7DomGame9PlayerWho12DomTokenType8DomWherei
// 地址: 0xbb8040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0x19ac)
int32_t x21 = arg3
int32_t x23 = arg2
int64_t entry_x7

if (x10 s>= 0x100)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    entry_x7 = XTrace("game thread resume (error)")
    x10 = *(arg1 + 0x19ac)
    
    if (x10 s>= 0x100)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_7 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_8 = *(x8_7 - 0x90)
        *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        entry_x7 = XTrace("game thread resume (error)")
        x10 = *(arg1 + 0x19ac)

if (x10 s>= 1)
    int64_t i = 0
    void* __offset(DomGame, 0x15f6c) x9_5 = arg1 + 0x15f6c
    
    do
        if (*(x9_5 - 4) == x21 && *x9_5 == x23)
            if (i.d != 1)
                return neg.q(i)
            
            break
        
        i -= 1
        x9_5 += 0x20
    while (0 - zx.q(x10) != i)

return CreateToken(arg1, zx.q(x23), zx.q(x21), zx.q(arg4), 0, arg5, 0, entry_x7) __tailcall
