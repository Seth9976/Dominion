// 函数: sub_c05bc0
// 地址: 0xc05bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *arg1
int32_t x24 = arg2 & 0xffff
int64_t x22 = x23

if (x24 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x22 = *arg1

int32_t x23_1 = *(x23 + mulu.dp.d(x24, 0x68) + 0x1a70)
int32_t x24_1 = arg3 & 0xffff

if (x24_1 u>= 0x320)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_11 = *(x22 + mulu.dp.d(x24_1, 0x68) + 0x1a70)

if (x23_1 s>= x8_11)
    return zx.q(arg2 s< arg3 ? 1 : 0) | zx.q(x23_1 s> x8_11 ? 1 : 0)

return 0
