// 函数: _Z12CardHasTraitR7DomGame6CardID11DomCardEnum
// 地址: 0xbe5418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg2)
int32_t i = arg3

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t var_30[0x4]
int32_t x0_5 = LandscapeFromRefPile(arg1 + 0xd54, 
    zx.q(PileSource(arg1, zx.q(*(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)))), &var_30)

if (x0_5 s< 1)
    return 0

if (var_30[0] == i)
    return 1

uint64_t x8_7 = zx.q(x0_5)
int64_t x11 = 1
int64_t x10_1

do
    x10_1 = x11
    
    if (x8_7 == x11)
        break
    
    x11 = x10_1 + 1
while (var_30[x10_1] != i)

return zx.q(x10_1 u< x8_7 ? 1 : 0)
