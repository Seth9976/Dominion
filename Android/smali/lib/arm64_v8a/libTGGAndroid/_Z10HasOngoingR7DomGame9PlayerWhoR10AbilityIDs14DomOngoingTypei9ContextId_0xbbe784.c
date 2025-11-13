// 函数: _Z10HasOngoingR7DomGame9PlayerWhoR10AbilityIDs14DomOngoingTypei9ContextId
// 地址: 0xbbe784
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

return zx.q(CountOngoing(arg1, arg2, arg3, zx.q(arg4), arg5, arg6) s> 0 ? 1 : 0)
