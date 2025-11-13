// 函数: _Z15BoardPileSourceRK7DomGame6CardID
// 地址: 0xbd49d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x20 = zx.d(arg2)

if (x20 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x20_1 = *(arg1 + mulu.dp.d(x20, 0x68) + 0x1a70)
int32_t x0_3 = PileSource(arg1, zx.q(x20_1))
int64_t x9_3 = -0x410
int32_t x8_6

while (true)
    void* x10_1 = arg1 + x9_3
    x8_6 = *(x10_1 + 0x19ac)
    
    if (x8_6 == x20_1)
        return zx.q(x20_1)
    
    if (x8_6 == x0_3)
        break
    
    if (*(x10_1 + 0x19b0) == x20_1)
        break
    
    int64_t temp0_1 = x9_3
    x9_3 += 0x10
    
    if (temp0_1 == -0x10)
        x8_6 = 0
        break

return zx.q(x8_6)
