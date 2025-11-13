// 函数: _Z8HasTokenRK7DomGame9PlayerWho12DomTokenType
// 地址: 0xbb82fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x19ac)

if (x9 s>= 0x100)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x9 = *(arg1 + 0x19ac)

if (x9 s>= 1)
    int64_t i = 0
    void* __offset(DomGame, 0x15f6c) x11_1 = arg1 + 0x15f6c
    int64_t x9_3 = 0
    
    do
        if (*(x11_1 - 4) == arg3 && *x11_1 == arg2)
            if (i.d != 1)
                return zx.q(*(arg1 + (x9_3 s>> 0x1b) + 0x15f7c) != 0 ? 1 : 0)
            
            break
        
        i -= 1
        x9_3 += 0x100000000
        x11_1 += 0x20
    while (0 - zx.q(x9) != i)

return 0
