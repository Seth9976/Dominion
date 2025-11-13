// 函数: _Z14HavePlayedCardR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbe97d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc) s< 1)
    return 0

int32_t x20_1 = arg3
int64_t i = 0
int32_t x8_10

do
    uint64_t x21_1 = zx.q(*(arg1 + sx.q(arg2) * 0x5a30 + 0x19b18 + (i << 2)))
    
    if (x21_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_7 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_8 = *(x8_7 - 0x90)
        *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x8_10 = *(arg1 + x21_1 * 0x68 + 0x1a70)
    
    if (x8_10 == x20_1)
        break
    
    i += 1
while (i s< sx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc)))

return zx.q(x8_10 == x20_1 ? 1 : 0)
