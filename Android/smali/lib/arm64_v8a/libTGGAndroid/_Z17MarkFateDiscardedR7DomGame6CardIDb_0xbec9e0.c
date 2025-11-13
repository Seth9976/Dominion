// 函数: _Z17MarkFateDiscardedR7DomGame6CardIDb
// 地址: 0xbec9e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2 & 0xffff
int32_t x20 = arg3.d

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x8_5 = arg1 + mulu.dp.d(x22, 0x68)
*(x8_5 + 0x1a90) = (*(x8_5 + 0x1a90) & 0xfffffffe) | (x20 & 1)
int32_t x8_6 = *(arg1 + 0x150c)

if (x8_6 - 3 u< 4)
    return 

int64_t var_38_1 = 0
int32_t var_40_1 = 0
int32_t var_48_1 = 0
int32_t var_50_1 = 0
DomNotifyEffect(zx.q(x8_6 == 2 ? 1 : 0), 0x21, 0xffffffff, zx.q(arg2), zx.q(x20) & 1, 0, 0, 0)
