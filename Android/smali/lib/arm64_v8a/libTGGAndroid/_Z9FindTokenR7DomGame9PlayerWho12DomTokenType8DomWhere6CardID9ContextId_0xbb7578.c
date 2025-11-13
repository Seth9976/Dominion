// 函数: _Z9FindTokenR7DomGame9PlayerWho12DomTokenType8DomWhere6CardID9ContextId
// 地址: 0xbb7578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19ac)

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
    int64_t i = 0
    void* __offset(DomGame, 0x15f74) x9_3 = arg1 + 0x15f74
    
    do
        if (*(x9_3 - 0xc) == arg3 && *(x9_3 - 8) == arg2 && *(x9_3 - 4) == arg4 && *x9_3 == arg5
                && *(x9_3 + 0xc) == arg6)
            return i
        
        i += 1
        x9_3 += 0x20
    while (zx.q(x8) != i)

return 0xffffffff
