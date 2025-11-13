// 函数: _Z6CardIsR7DomGame6CardID11DomCardTypeS2_
// 地址: 0xbc366c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x22 = zx.d(arg2)
int64_t x19 = arg4
int64_t x20 = arg3

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x1 = zx.q(*(arg1 + mulu.dp.d(x22, 0x68) + 0x1a70))

if (x1.d == 0)
    return 0

int64_t x0_3 = CardTypeQuery(arg1, x1, true, x19 | x20)
return zx.q((x0_3 & x20) != 0 ? 1 : 0) & zx.q((x0_3 & x19) == 0 ? 1 : 0)
