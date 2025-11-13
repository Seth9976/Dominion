// 函数: _Z18LimitGainableCardsR7DomGame9PlayerWhoR10AbilityIDs11DomCardEnum
// 地址: 0xbc76b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg3 + 0x400) & 0x80000000) != 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    arg2 = XTrace("game thread resume (error)")

if (CountOngoing(arg1, arg2, arg3, 0x26, arg4, 0) s>= 1 && *(arg1 + 0x19ec) s/ *(arg1 + 0xd40) s< 5)
    return 1

return 0
