// 函数: _Z14CardWhatInPlayR7DomGame9PlayerWho6CardID
// 地址: 0xc02100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg3)
int32_t x20 = arg2

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x23 = *(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)
CardID var_ce8
int32_t x0_3 = CardsWhere(arg1, zx.q(x20), 0x3e9, &var_ce8)
int32_t x0_5 = CardsWhere(arg1, zx.q(x20), 0x451, &var_ce8 + (sx.q(x0_3) << 2))
int32_t x8_7 = x0_3 + x0_5
int32_t var_68_1 = x8_7

if (x0_3 == neg.d(x0_5))
    return 0

CardID* x24_1 = &var_ce8
int64_t i_1 = (sx.q(x8_7) << 2) - 4
int32_t x8_15
int64_t i

do
    uint64_t fp_1 = zx.q(*x24_1)
    
    if (fp_1.d u>= 0x320)
        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_12 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
        *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_13 = *(x8_12 - 0x90)
        *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x8_15 = *(arg1 + fp_1 * 0x68 + 0x1a70)
    
    if (x8_15 == x23)
        break
    
    i = i_1
    i_1 -= 4
    x24_1 += 4
while (i != 0)
return zx.q(x8_15 == x23 ? 1 : 0)
