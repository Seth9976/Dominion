// 函数: _Z8CardCostR7DomGame9PlayerWho6CardID8CostFlag
// 地址: 0xbc7614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x22 = zx.d(arg3)

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

return zx.q(CardCost(arg1, zx.q(arg2), zx.q(*(arg1 + mulu.dp.d(x22, 0x68) + 0x1a70)), zx.q(arg4)))
