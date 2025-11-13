// 函数: _Z29NumOutstandingDurationEffectsR7DomGame6CardID
// 地址: 0xbcc9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2 & 0xffff

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if ((CardIsFast(arg1, zx.q(*(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)), 0x80) & 1) == 0)
    return 0

if (x21 u>= 0x320)
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_8 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t i_1 = zx.q(*(arg1 + 0x19c0))

if (i_1.d s< 1)
    return 0

uint64_t result = 0
void* __offset(DomGame, 0x3c208) x10_1 = arg1 + 0x3c208
uint64_t i

do
    int32_t x13_1 = *x10_1
    
    if ((x13_1 u> 5 || (1 << x13_1 & 0x32) == 0) && (*(x10_1 + 0x50) & 0xfffffffe) != 2
            && (zx.d(*(x10_1 + 4)) & 6) == 0)
        int32_t x13_6 = *(x10_1 + 0x1c)
        
        if (x13_6 != 0)
            result = zx.q(result.d + ((x13_6 == arg2 ? 1 : 0)
                & (*(x10_1 + 0x20) == *(arg1 + zx.q(x21) * 0x68 + 0x1a78) ? 1 : 0)))
    
    i = i_1
    i_1 -= 1
    x10_1 += 0xb8
while (i != 1)
return result
