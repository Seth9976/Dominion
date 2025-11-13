// 函数: _Z13ProjectCanBuyR7DomGame9PlayerWho6CardID
// 地址: 0xbcb37c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg3)
int32_t x19 = arg2

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x21_1 = *(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)
int32_t var_24 = 0

if ((ProjectIsOwned(arg1, zx.q(x19), zx.q(x21_1), &var_24) & 1) == 0)
    return 1

return zx.q(CountOngoing(arg1, zx.q(x19), 0x30, x21_1, 0) s> 0 ? 1 : 0)
