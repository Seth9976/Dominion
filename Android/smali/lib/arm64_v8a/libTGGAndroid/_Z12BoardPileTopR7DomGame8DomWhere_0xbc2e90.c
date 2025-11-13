// 函数: _Z12BoardPileTopR7DomGame8DomWhere
// 地址: 0xbc2e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 0

int32_t x19 = arg2

if (arg2 - 7 u>= 0x42)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (x19 s>= 0x48)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_7 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_8 = *(x8_7 - 0x90)
    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

return zx.q(*(arg1 + (sx.q(x19) << 4) + 0x1534))
