// 函数: _Z13DomTogglePileR6DomGfx
// 地址: 0xaee808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x1f8e4) != *(arg1 + 0x21d0))
    return DomExpandPile(arg1, false) __tailcall

return DomMinimizePile(arg1) __tailcall
