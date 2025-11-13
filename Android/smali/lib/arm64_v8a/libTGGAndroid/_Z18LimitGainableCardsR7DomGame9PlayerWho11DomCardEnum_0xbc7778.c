// 函数: _Z18LimitGainableCardsR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbc7778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AbilityIDs var_428
int64_t x1 = CollectAllOngoing(arg1, arg2, &var_428, 0)
int32_t var_28

if ((var_28 & 0x80000000) != 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    x1 = XTrace("game thread resume (error)")

if (CountOngoing(arg1, x1, &var_428, 0x26, arg3, 0) s>= 1
        && *(arg1 + 0x19ec) s/ *(arg1 + 0xd40) s< 5)
    return 1

return 0
