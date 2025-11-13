// 函数: _Z11DrawCardsToR7DomGame9PlayerWhoi8DomWhere9DrawStyle9ContextId6CardIDPS5_11DomCardEnum11RevealStyle
// 地址: 0xbebd98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x19ac)
int32_t x24 = arg5
int32_t x26 = arg3
int32_t x21 = arg2

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
        if (*(x11_1 - 4) == 0xb08 && *x11_1 == x21)
            if (i.d != 1 && x26 s>= 1 && x24 != 1 && *(arg1 + (x9_3 s>> 0x1b) + 0x15f7c) != 0)
                ReturnToken(arg1, zx.q(x21), 0xb08)
                x26 -= 1
            
            break
        
        i -= 1
        x9_3 += 0x100000000
        x11_1 += 0x20
    while (0 - zx.q(x9) != i)

uint64_t x27_2 = zx.q(x26)
InvalidateSubmittedActions()

if (x26 s> CountCardsWhere(arg1, zx.q(x21), 0x3eb))
    ShuffleDiscardForDeck(arg1, zx.q(x21))

if (x27_2.d s> 0)
    int64_t fp_1 = 0
    
    do
        int32_t x0_7 = DrawCardToNoShuffle(arg1, zx.q(x21), zx.q(arg4), zx.q(x24), arg6, 
            zx.q(arg7), zx.q(arg9.d), zx.q(arg10.d))
        *(arg8 + (fp_1 << 2)) = x0_7
        
        if (x0_7 == 0)
            x27_2 = zx.q(fp_1.d)
            break
        
        fp_1 += 1
    while (x27_2 != fp_1)

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
int32_t var_64 = 0x19
int64_t var_c0 = 0
TriggerEvents(arg1, zx.q(x21), &var_64, 1, &var_b0, 0, arg8, zx.q(x27_2.d))
return zx.q(x27_2.d)
