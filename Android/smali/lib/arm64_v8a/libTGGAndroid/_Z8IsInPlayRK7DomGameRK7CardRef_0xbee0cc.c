// 函数: _Z8IsInPlayRK7DomGameRK7CardRef
// 地址: 0xbee0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 4)

if (x8 == 0)
    return 0

uint64_t x21 = zx.q(*arg2)

if (x21.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8 = *(arg2 + 4)

void* x9_3 = arg1 + x21 * 0x68
int32_t x9_4 = *(x9_3 + 0x1a74)
return zx.q(*(x9_3 + 0x1a78) == x8 ? 1 : 0)
    & (zx.q(x9_4 == 0x3e9 ? 1 : 0) | zx.q(x9_4 == 0x451 ? 1 : 0))
