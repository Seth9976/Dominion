// 函数: _Z13CardSetRevealR7DomGame6CardID9PlayerWho14DomRevealState
// 地址: 0xbb9ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg2 & 0xffff
int32_t x19 = arg4
int32_t x21 = arg3

if (x23 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

*(arg1 + mulu.dp.d(x23, 0x68) + (sx.q(x21) << 2) + 0x1aa8) = x19
int32_t x8_7 = *(arg1 + 0x150c)

if (x8_7 - 3 u< 4)
    return 

int64_t var_38_1 = 0
int32_t var_40_1 = 0
int32_t var_48_1 = 0
int32_t var_50_1 = 0
DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x28, zx.q(x21), zx.q(arg2), zx.q(x19), 0, 0, 0)
