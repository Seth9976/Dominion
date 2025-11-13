// 函数: _Z22AbilityGetOngoingParamR7DomGame9AbilityID
// 地址: 0xbc5608
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = arg2 & 0xffffffff

if ((arg2 & 0x30) != 0)
    return zx.q(*(AbilityGetStatic(arg1, x1) + 0xa0))

void* x0_2 = AbilityGetRegistered(arg1, x1)

if (*(x0_2 + 0x4c) != 3)
    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

return zx.q(*(x0_2 + 0x54))
