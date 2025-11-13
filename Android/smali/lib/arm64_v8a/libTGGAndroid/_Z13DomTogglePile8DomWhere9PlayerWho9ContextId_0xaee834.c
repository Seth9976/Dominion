// 函数: _Z13DomTogglePile8DomWhere9PlayerWho9ContextId
// 地址: 0xaee834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx* x0_1 = DomFindOrCreatePile(zx.q(arg2), zx.q(arg1), arg3, 0)

if (*(gDomClient + 0x1f8e4) != *(x0_1 + 0x21d0))
    return DomExpandPile(x0_1, false) __tailcall

return DomMinimizePile(x0_1) __tailcall
